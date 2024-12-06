using Fusion;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// non-managed
public struct NetworkInputData : INetworkInput
{
    public const byte MOUSEBUTTON0 = 1;
    public const byte MOUSEBUTTON1 = 2;
    public const byte MOUSEBUTTON2 = 3;

    public NetworkButtons Buttons;

    public Vector3 Direction;
}
