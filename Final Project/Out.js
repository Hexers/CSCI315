#pragma strict
import UnityEngine.UI;
import UnityEngine.SceneManagement;

function OnTriggerEnter(col: Collider) 
{
	if (col.gameObject.tag == "Player") 
	{

			SceneManager.LoadScene("main");
	}
}
