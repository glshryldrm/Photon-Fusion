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
    [HideInInspector] public Camera Camera = null;

    [Networked] TickTimer delay { get; set; }
    [Networked] public int Health { get; set; }
    [Networked] public string AnimState { get; set; }
    public int WeaponDamage = 20;

    private ChangeDetector _changeDetector;

    public float MouseSensitivity = 10f;
    public Animator Anim;

    const int ANIMSTATE_IDLE = 0;
    const int ANIMSTATE_WALK = 1;

    private int state = ANIMSTATE_IDLE;
    private bool dead = false;

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
            switch (change)
            {
                case nameof(AnimState):
                    Anim.CrossFade(AnimState, .01f);
                    break;
                case nameof(Health):
                    if (!dead && Health <= 0)
                    {
                        dead = true;
                        Anim.CrossFade("Die", .01f);
                    }
                    break;
            }
        }
    }
    private void Awake()
    {
        _cc = GetComponent<NetworkCharacterController>();
        _controller = GetComponent<CharacterController>();
        Cursor.lockState = CursorLockMode.Locked;
    }
    public override void FixedUpdateNetwork()
    {
        if (!dead && GetInput(out FPSNetworkInputData data))
        {
            float MouseX = data.MouseX;
            horizontalRotation += MouseX * MouseSensitivity;

            transform.rotation = Quaternion.Euler(0, horizontalRotation, 0);

            Vector3 move = Quaternion.Euler(0, transform.rotation.eulerAngles.y, 0) * new Vector3(data.Horizontal, 0, data.Vertical);

            _cc.Move(move);

            if (move.sqrMagnitude > 0 && state == ANIMSTATE_IDLE)
            {
                state = ANIMSTATE_WALK;
                AnimState = "Walk";
            }
            else if (move.sqrMagnitude == 0 && state == ANIMSTATE_WALK)
            {
                state = ANIMSTATE_IDLE;
                AnimState = "Idle";
            }

            if (data.Buttons.IsSet(FPSNetworkInputData.JUMP) && _controller.isGrounded)
            {
                _cc.Jump();
            }

            if (data.Buttons.IsSet(FPSNetworkInputData.MOUSEBUTTON0) && delay.ExpiredOrNotRunning(Runner))
            {
                delay = TickTimer.CreateFromSeconds(Runner, FireSpeed);

                Ray ray = Camera.ScreenPointToRay(Input.mousePosition);
                ray.origin += Camera.transform.forward;

                Debug.DrawRay(ray.origin, ray.direction, Color.magenta, 3f);

                if (Runner.GetPhysicsScene().Raycast(ray.origin, ray.direction, out var hit))
                {
                    if (hit.transform.TryGetComponent<FPSPlayer>(out var player))
                    {
                        if (!player.dead)
                        {
                            player.Health -= WeaponDamage;
                        }
                        Debug.Log("Bir oyuncu vuruldu. " + (player.Health <= 0 ? "ve öldü" : "kalan saðlýðý: " + player.Health));
                    }
                }
            }
        }
    }
}
