using Fusion;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FPSPlayer : NetworkBehaviour
{
    private NetworkCharacterController _cc;
    private CharacterController _controller;
    private float horizontalRotation;

    public float FireSpeed = 5f;
    public Camera Camera = null;

    [Networked] TickTimer delay { get; set; }

    private ChangeDetector _changeDetector;

    public float MouseSensitivity = 10f;

    public override void Spawned()
    {
        _changeDetector = GetChangeDetector(ChangeDetector.Source.SimulationState);

        if (HasInputAuthority)
        {
            Camera = Camera.main;
            Camera.transform.SetParent(transform);
            Camera.transform.localPosition = new Vector3(0, 1.8f, .3f);
        }
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
        if (GetInput(out FPSNetworkInputData data))
        {
            float MouseX = data.MouseX;
            horizontalRotation += MouseX * MouseSensitivity;

            transform.rotation = Quaternion.Euler(0, horizontalRotation, 0);

            Vector3 move = Quaternion.Euler(0, transform.rotation.eulerAngles.y, 0) * new Vector3(data.Horizontal, 0, data.Vertical);

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
