using Fusion;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : NetworkBehaviour
{
    private NetworkCharacterController _cc;
    public Ball _prefabBall;
    public BallPhysX _prefabPhysXBall;

    public float Speed = 10f;
    public float FireSpeed = 5f;
    private Vector3 _forward;
    private Material _material;

    [Networked] TickTimer delay { get; set; }

    [Networked] Color ChangeColor { get; set; }

    private ChangeDetector _changeDetector;

    public override void Spawned()
    {
        _changeDetector = GetChangeDetector(ChangeDetector.Source.SimulationState);
    }

    public override void Render()
    {
        foreach (var change in _changeDetector.DetectChanges(this))
        {
            switch (change)
            {
                case nameof(ChangeColor):
                    _material.color = ChangeColor;
                    break;
            }
        }
    }

    private void Awake()
    {
        _cc = GetComponent<NetworkCharacterController>();
        _forward = transform.forward;
        _material = GetComponentInChildren<Renderer>().material;
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

                //predicttion yöntemiyleçalýþan topu spawnla
                Runner.Spawn(_prefabBall, transform.position + _forward, Quaternion.identity, Object.InputAuthority, (runner, o) =>
                {
                    o.GetComponent<Ball>().Init(_forward);
                });
            }
            if (data.Buttons.IsSet(NetworkInputData.MOUSEBUTTON1))
            {
                //fizikle çalýþan topu spawnla
                delay = TickTimer.CreateFromSeconds(Runner, FireSpeed);

                Runner.Spawn(_prefabPhysXBall, transform.position + _forward, Quaternion.identity, Object.InputAuthority, (runner, o) =>
                {
                    o.GetComponent<BallPhysX>().Init(_forward);
                });
            }
            if (data.Buttons.IsSet(NetworkInputData.MOUSEBUTTON2))
            {
                delay = TickTimer.CreateFromSeconds(Runner, 1);
                ColorChange();
            }
        }
        if (HasInputAuthority && data.Buttons.IsSet(NetworkInputData.MOUSEBUTTON2))
        {
            RPC_SendAMEssage("Server naber?");
        }
    }
    [Rpc(RpcSources.InputAuthority, RpcTargets.StateAuthority)]
    public void RPC_SendAMEssage(string message)
    {
        Debug.Log("Mesaj geldi: " + message);
    }
    private void ColorChange()
    {
        ChangeColor = new Color(UnityEngine.Random.Range(0f, 1f), UnityEngine.Random.Range(0f, 1f), UnityEngine.Random.Range(0f, 1f), 1);
    }
}
