using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
public class EnemyScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		Vector3 pos = transform.position;
		pos.z -= (float)(0.1);
		if(pos.z < -12.0) {
			SceneManager.LoadScene("GameOver");
		}
		transform.position = pos;
		transform.Rotate(1,1,1);
		
	}
	void OnCollisionEnter(Collision collision){
		Destroy(this.gameObject);
	}
}
