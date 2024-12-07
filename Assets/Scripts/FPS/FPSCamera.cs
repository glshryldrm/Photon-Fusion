using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FPSCamera : MonoBehaviour
{
    public float MouseSensitivity = 10f;
    public float verticalRotation;

    private void LateUpdate()
    {
        float mouseY = Input.GetAxis("Mouse Y");

        verticalRotation -= mouseY * MouseSensitivity;
        verticalRotation = Mathf.Clamp(verticalRotation, -70f, 70f);

        transform.localRotation = Quaternion.Euler(verticalRotation, 0, 0);
    }
}
