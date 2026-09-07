using UnityEngine;

public class XRayController : MonoBehaviour
{
    public Camera mainCamera;
    private int bodenLayerMask;
    private bool isXRayActive = false;

    void Start()
    {
        bodenLayerMask = 1 << LayerMask.NameToLayer("Boden");
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            isXRayActive = !isXRayActive;
            ToggleXRay(isXRayActive ? "true" : "false");
        }
    }

    public void ToggleXRay(string isActive)
    {
        if (isActive == "true")
        {
            mainCamera.cullingMask &= ~bodenLayerMask;
        }
        else
        {
            mainCamera.cullingMask |= bodenLayerMask;
        }
    }
}