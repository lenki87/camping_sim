using UnityEngine;

public class GameBridge : MonoBehaviour
{
    public void OnReceiveMessage(string message)
    {
        string[] parts = message.Split(':');
        if (parts[0] == "build")
        {
            string itemType = parts[1];
            int x = int.Parse(parts[2]);
            int y = int.Parse(parts[3]);

            Vector3 worldPos = new Vector3(x, 0, y);
            GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
            cube.transform.position = worldPos;
            cube.transform.localScale = new Vector3(1.8f, 1.2f, 1.0f);
        }
    }
}