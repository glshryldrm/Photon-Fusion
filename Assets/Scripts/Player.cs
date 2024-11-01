using Fusion;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : NetworkBehaviour
{
    private NetworkCharacterController _cc;
    public Ball _prefabBall;

    public float Speed = 10f;
    public float FireSpeed = 5f;
    private Vector3 _forward;

    [Networked] TickTimer delay { get; set; }

    private void Awake()
    {
        _cc = GetComponent<NetworkCharacterController>();
        _forward = transform.forward;
    }
    public override void FixedUpdateNetwork()
    {
        if (GetInput(out NetworkInputData data))
        {
            data.Direction.Normalize();
            _cc.Move(Speed * Runner.DeltaTime * data.Direction);
        }
        if (data.Direction.sqrMagnitude > 0)
        {
            _forward = data.Direction;
        }

//      HasInputAuthority => bu nesneyi spawnlayan makine (client)
//      HasStateAuthority => sunucu makinesi (host)
        if (HasStateAuthority && delay.ExpiredOrNotRunning(Runner))
        {
            if (data.Buttons.IsSet(NetworkInputData.MOUSEBUTTON0))
            {
                delay = TickTimer.CreateFromSeconds(Runner, FireSpeed);

                Runner.Spawn(_prefabBall, transform.position + _forward, Quaternion.identity, Object.InputAuthority, (runner, o) =>
                {
                    o.GetComponent<Ball>().Init(_forward);
                });
            }
        }
    }
}
