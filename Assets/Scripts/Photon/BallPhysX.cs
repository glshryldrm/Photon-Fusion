using Fusion;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallPhysX : NetworkBehaviour
{
    public float Duration = 5f;
    public float Speed = 40f;
    [Networked] private TickTimer life { get; set; }

    public void Init(Vector3 forward)
    {
        life = TickTimer.CreateFromSeconds(Runner, Duration);
        GetComponent<Rigidbody>().velocity = forward * Speed;
    }
    public override void FixedUpdateNetwork()
    {
        if (life.Expired(Runner))
        {
            Runner.Despawn(Object);
        }

    }
}
