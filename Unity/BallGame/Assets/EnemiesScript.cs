using UnityEngine;
using System.Collections;

public class EnemiesScript : MonoBehaviour {
	public Transform enemy;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if(Time.frameCount % 60 == 0){
			Instantiate(enemy,new Vector3(Random.Range(-5.0f,5.0f),1,8),Quaternion.identity);
		}
	}
}
