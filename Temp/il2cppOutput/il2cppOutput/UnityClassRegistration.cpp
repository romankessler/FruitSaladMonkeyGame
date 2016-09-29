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

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 74 classes
	//0. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//1. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//6. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//7. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//8. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//9. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//10. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//11. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//12. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//13. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//14. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//15. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//16. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//17. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//18. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//19. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//20. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//21. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//22. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//23. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//24. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//25. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//26. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//27. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//28. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//29. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//30. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//31. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//32. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//33. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//34. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//35. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//36. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//37. CircleCollider2D
	void RegisterClass_CircleCollider2D();
	RegisterClass_CircleCollider2D();

	//38. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//39. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//40. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//41. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//42. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//43. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//44. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//45. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//46. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//47. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//48. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//49. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//50. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//51. PolygonCollider2D
	void RegisterClass_PolygonCollider2D();
	RegisterClass_PolygonCollider2D();

	//52. PhysicsMaterial2D
	void RegisterClass_PhysicsMaterial2D();
	RegisterClass_PhysicsMaterial2D();

	//53. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//54. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//55. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//56. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//57. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//58. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//59. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//60. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//61. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//62. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//63. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//64. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//65. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//66. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//67. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//68. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//69. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//70. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//71. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//72. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//73. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
