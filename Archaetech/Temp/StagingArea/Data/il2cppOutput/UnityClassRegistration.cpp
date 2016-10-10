struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

}

void RegisterAllClasses()
{
	//Total: 58 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//4. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//5. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//6. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//7. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//8. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//9. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//10. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//11. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//12. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//13. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//14. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//15. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//16. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//17. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//18. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//19. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//20. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//21. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//22. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//23. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//24. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//25. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//26. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//27. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//28. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//29. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//30. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//31. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//32. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//33. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//34. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//35. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//36. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//37. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//38. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//39. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//40. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//41. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//42. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//43. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//44. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//45. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//46. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//47. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//48. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//49. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//50. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//51. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//52. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//53. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//54. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//55. NetworkManager
	//Skipping NetworkManager

	//56. MasterServerInterface
	//Skipping MasterServerInterface

	//57. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
