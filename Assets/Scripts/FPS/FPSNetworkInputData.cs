using Fusion;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public struct FPSNetworkInputData : INetworkInput
{
    public const byte MOUSEBUTTON0 = 1;
    public const byte JUMP = 9;

    public NetworkButtons Buttons;

    public float Horizontal;
    public float Vertical;
    public float MouseX;
    public float MouseY;
    public bool Jump;
}
