using UnityEngine;
using System.Collections;

public class PlayerScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		float x = Input.GetAxis("Horizontal");
		transform.Translate((float)(x * 0.2),0,0);
	}

	void OnCollisionEnter(Collision collision){
		if(collision.gameObject.name == "Enemy(Clone)"){
			Vector3 scale = transform.localScale;
			scale.x -= Random.Range(0.1f,0.5f);
			if(scale.x < 1.0) scale.x = 1.0f;
			transform.localScale = scale;
			
		}
	}
}
