using UnityEngine;
using System.Collections;

public class OnTap : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
		void Update () {
			foreach(Touch t in Input.touches)
			{
				Debug.Log ("We have touches!");
				Ray ray = Camera.main.ScreenPointToRay(t.position);
				RaycastHit hit;
				Debug.Log (Physics.Raycast(ray, out hit));
				if(Physics.Raycast(ray, out hit))
				{
					Debug.Log ("We have a hit!");
					switch(t.phase)
					{
					case TouchPhase.Began:
						hit.collider.SendMessage("OnTouchDown", null, SendMessageOptions.DontRequireReceiver);
						//hit.collider.SendMessage("OnMouseDown", null, SendMessageOptions.DontRequireReceiver);
						//hit.collider.SendMessage("OnTouchOver", null, SendMessageOptions.DontRequireReceiver);
						//hit.collider.SendMessage("OnMouseOver", null, SendMessageOptions.DontRequireReceiver);

						break;
					case TouchPhase.Moved:
					case TouchPhase.Stationary:
						//hit.collider.SendMessage("OnTouchOver", null, SendMessageOptions.DontRequireReceiver);
						//hit.collider.SendMessage("OnMouseOver", null, SendMessageOptions.DontRequireReceiver);
						break;
					default:
						//hit.collider.SendMessage("OnTouchUp", null, SendMessageOptions.DontRequireReceiver);
						//hit.collider.SendMessage("OnMouseUp", null, SendMessageOptions.DontRequireReceiver);
						break;
					}
				}
			}
		}

}