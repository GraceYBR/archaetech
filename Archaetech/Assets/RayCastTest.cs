using UnityEngine;
using System.Collections;

public class RayCastTest : MonoBehaviour{

	void Start(){
	}

	void Update(){

		if (Input.GetMouseButtonDown (0)) 
		{
			RaycastHit hit;
			Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
			if (Physics.Raycast (ray, out hit, 100)) 
			{
				Destroy (hit.collider.gameObject);

			}

		}

	}

}
