using Fusion;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FPSPlayer : NetworkBehaviour
{
    private NetworkCharacterController _cc;
    private CharacterController _controller;

    public float FireSpeed = 5f;

    [Networked] TickTimer delay { get; set; }

    private ChangeDetector _changeDetector;

    public override void Spawned()
    {
        _changeDetector = GetChangeDetector(ChangeDetector.Source.SimulationState);
    }

    public override void Render()
    {
        foreach (var change in _changeDetector.DetectChanges(this))
        {
            //switch (change)
            //{
            //    case nameof(ChangeColor):
            //        _material.color = ChangeColor;
            //        break;
            //}
        }
    }
    private void Awake()
    {
        _cc = GetComponent<NetworkCharacterController>();
        _controller = GetComponent<CharacterController>();
    }
    public override void FixedUpdateNetwork()
    {
        if (HasInputAuthority)
        {
            if (GetInput(out FPSNetworkInputData data))
            {

                Vector3 move = new Vector3(data.Horizontal, 0, data.Vertical) * Runner.DeltaTime;

                _cc.Move(move);

                if (data.Buttons.IsSet(FPSNetworkInputData.JUMP) && _controller.isGrounded)
                {
                    _cc.Jump();
                }
                if (move != Vector3.zero)
                {
                    gameObject.transform.forward = move;
                }
            }
        }
    }
}
