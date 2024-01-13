#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48;
// System.Collections.Generic.List`1<TowerLevel>
struct List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// Lane[]
struct LaneU5BU5D_t43A2D2019861082B5B52D9AC21C015F59FCD730C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
// TowerLevel[]
struct TowerLevelU5BU5D_t83DBFBF174EAE3989A92DBA7B2141FD5ECE05C33;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Wave[]
struct WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// AntisepticBulletBehavior
struct AntisepticBulletBehavior_tA0AE2521C2886160D5F14973F33BF901D96D621B;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BulletBehavior
struct BulletBehavior_tEC4D11034CA6DFDA43C051633187834DA7459E87;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraShake
struct CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EnemyDestructionDelegate
struct EnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12;
// FinishGame
struct FinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148;
// FireballProjectile
struct FireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F;
// FireballRain
struct FireballRain_t24957F23DFDD3AD5FF03BFA0F8F2D983DF50461F;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManagerBehavior
struct GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HealthBar
struct HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Lane
struct Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuManager
struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MoveEnemy
struct MoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ParabolicBulletBehavior
struct ParabolicBulletBehavior_t85825AAFC020D79B5DC36A40B53731E59159C692;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// PlaceTower
struct PlaceTower_t58C0AEA6882BF80CA412C05905B854CAE3B23CB9;
// PoisonCloud
struct PoisonCloud_t5496DF6F4C1B8EA2C5B112DE08FD91C5C887F593;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// ShootEnemies
struct ShootEnemies_t51B741E3935F3181E1F5E4DC0411528CBE4EE3F3;
// SpawnEnemy
struct SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TowerData
struct TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A;
// TowerLevel
struct TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Tutorial
struct Tutorial_t4FF9FF1EF6F8E11558052253ECFBB53EC9AA41D4;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Wave
struct Wave_t46A8424F3F35C64800660289794914462618636D;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// EnemyDestructionDelegate/EnemyDelegate
struct EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral020715EB6BE67BFE4B52690E7B2C708FA9F3032D;
IL2CPP_EXTERN_C String_t* _stringLiteral03595E559F3E9B49CA8F15739A4A1791320B302B;
IL2CPP_EXTERN_C String_t* _stringLiteral0F3F236198CEED0A3BE583DE24D519E4F47B13FF;
IL2CPP_EXTERN_C String_t* _stringLiteral0F91DED5DDB2E6C4914F76E496B101F79AF3C3BF;
IL2CPP_EXTERN_C String_t* _stringLiteral2DEF90159D28E5C712F975281C5D8F2C61C27A05;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral41DB57BFD657651E8C2527CF17F43559E3F16C46;
IL2CPP_EXTERN_C String_t* _stringLiteral4BD0434F3A1A5821B2DA49A6ACE7CA39D5C61B98;
IL2CPP_EXTERN_C String_t* _stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347;
IL2CPP_EXTERN_C String_t* _stringLiteral5D52F5774B3A4F2D746121366BB3C1351E903792;
IL2CPP_EXTERN_C String_t* _stringLiteral7799AA0B8918D9D7F12317B98167D542023D726A;
IL2CPP_EXTERN_C String_t* _stringLiteral7DC73077B102683EB94686A40150716DF0DD48BC;
IL2CPP_EXTERN_C String_t* _stringLiteral7EE2902E0F68A199224916A67AFDAB77BF77F1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral91794EC654EBF1BE51D4C0F6AE1A759B7CC183F2;
IL2CPP_EXTERN_C String_t* _stringLiteralA9EA00C922B75CD8D61C69D4DD785607CEC4922D;
IL2CPP_EXTERN_C String_t* _stringLiteralCF929631600D4322F67C7C46C492F852694FF04F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA81982ABE04146AF7BF07A09E71923186F72A6A;
IL2CPP_EXTERN_C String_t* _stringLiteralDABD7C0A71F4DE385882508CCAD18E725C76DAC3;
IL2CPP_EXTERN_C String_t* _stringLiteralEC4A89E293860E52E1B82A69770C59F5EA4A2CD4;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1_m12B798662937F3D647AA654E93ACF1A75C8FD7DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_m1E30A71856359306D1F0E9E59CE75B25210FE16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mB2795513E8DA8E97DCC0501E99C42B216D9AB032_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m4361E6F25B03C5E6257CDB6912E2E3853CA63588_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAntisepticBulletBehavior_tA0AE2521C2886160D5F14973F33BF901D96D621B_m8685C68ABC03D0085F2CB74DEA6AC06204F32691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBulletBehavior_tEC4D11034CA6DFDA43C051633187834DA7459E87_m1DE568D8D440247A6B0519F6ACAE5A3DCADBCE0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12_mEF66DEE26354783212AE6BE0D8A15472CFBAEB38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148_mB6F0418D69460FA29B7225D5101DC71A199CA127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F_m396A1FC8C2524FFF0E33D75F59872AF083FE8D88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83_mB2F68909C5D110F92A23832BF6D8BAF5682C7985_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParabolicBulletBehavior_t85825AAFC020D79B5DC36A40B53731E59159C692_m454AD27DA33C729D0CD9023D1B3C2D56369636BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_m1A99F327494CC26F3E4DC7041615FA9BFD6DCDCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m34C861893499AF0C207BD19751D5BB615F413FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2817F5F47727C2C1FB87CE382D77F92D2658EE78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBA15CED669D74CEECD6B1A5FE3392ADBC5AE0FAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m5BABE1644AE4925547F413C692E38B1E1CE23DA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD575040BED5E15F408E2E182CAFDF0EF52625E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShootEnemies_OnEnemyDestroy_m27AEC693F5CF908C4F616CB983CB49578652FCEE_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct LaneU5BU5D_t43A2D2019861082B5B52D9AC21C015F59FCD730C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TowerLevel>
struct List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TowerLevelU5BU5D_t83DBFBF174EAE3989A92DBA7B2141FD5ECE05C33* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TowerLevelU5BU5D_t83DBFBF174EAE3989A92DBA7B2141FD5ECE05C33* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Lane
struct Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1  : public RuntimeObject
{
	// UnityEngine.GameObject[] Lane::waypoints
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___waypoints_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// TowerLevel
struct TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6  : public RuntimeObject
{
	// System.Int32 TowerLevel::cost
	int32_t ___cost_0;
	// UnityEngine.GameObject TowerLevel::visualization
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___visualization_1;
	// UnityEngine.GameObject TowerLevel::bullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bullet_2;
	// System.Single TowerLevel::fireRate
	float ___fireRate_3;
	// System.Single TowerLevel::colliderRadius
	float ___colliderRadius_4;
	// BulletType TowerLevel::bulletType
	int32_t ___bulletType_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Wave
struct Wave_t46A8424F3F35C64800660289794914462618636D  : public RuntimeObject
{
	// UnityEngine.GameObject[] Wave::enemyPrefab
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___enemyPrefab_0;
	// System.Single Wave::spawnInterval
	float ___spawnInterval_1;
	// System.Int32 Wave::maxEnemies
	int32_t ___maxEnemies_2;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// EnemyDestructionDelegate/EnemyDelegate
struct EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AntisepticBulletBehavior
struct AntisepticBulletBehavior_tA0AE2521C2886160D5F14973F33BF901D96D621B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 AntisepticBulletBehavior::damage
	int32_t ___damage_4;
	// UnityEngine.GameObject AntisepticBulletBehavior::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_5;
	// UnityEngine.LayerMask AntisepticBulletBehavior::enemyLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___enemyLayer_6;
	// GameManagerBehavior AntisepticBulletBehavior::gameManager
	GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* ___gameManager_7;
	// UnityEngine.Vector3 AntisepticBulletBehavior::initialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialPosition_8;
	// UnityEngine.Vector3 AntisepticBulletBehavior::peakPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___peakPosition_9;
	// UnityEngine.Vector3 AntisepticBulletBehavior::finalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___finalPosition_10;
	// UnityEngine.ParticleSystem AntisepticBulletBehavior::antisepticEffect
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___antisepticEffect_11;
	// System.Single AntisepticBulletBehavior::startTime
	float ___startTime_12;
	// System.Single AntisepticBulletBehavior::duration
	float ___duration_13;
	// System.Single AntisepticBulletBehavior::yOffset
	float ___yOffset_14;
	// System.Boolean AntisepticBulletBehavior::hasReachedTarget
	bool ___hasReachedTarget_15;
	// System.Single AntisepticBulletBehavior::rotationSpeed
	float ___rotationSpeed_16;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BulletBehavior
struct BulletBehavior_tEC4D11034CA6DFDA43C051633187834DA7459E87  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BulletBehavior::speed
	float ___speed_4;
	// System.Int32 BulletBehavior::damage
	int32_t ___damage_5;
	// UnityEngine.GameObject BulletBehavior::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_6;
	// UnityEngine.Vector3 BulletBehavior::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_7;
	// UnityEngine.Vector3 BulletBehavior::startPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPosition_8;
	// GameManagerBehavior BulletBehavior::gameManager
	GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* ___gameManager_9;
};

// CameraShake
struct CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CameraShake::shakeDecayStart
	float ___shakeDecayStart_4;
	// System.Single CameraShake::shakeIntensityStart
	float ___shakeIntensityStart_5;
	// System.Single CameraShake::shakeDecay
	float ___shakeDecay_6;
	// System.Single CameraShake::shakeIntensity
	float ___shakeIntensity_7;
	// UnityEngine.Vector3 CameraShake::originPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___originPosition_8;
	// UnityEngine.Quaternion CameraShake::originRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___originRotation_9;
	// System.Boolean CameraShake::shaking
	bool ___shaking_10;
	// UnityEngine.Transform CameraShake::transformAtOrigin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transformAtOrigin_11;
};

// UnityEngine.CircleCollider2D
struct CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// EnemyDestructionDelegate
struct EnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// EnemyDestructionDelegate/EnemyDelegate EnemyDestructionDelegate::enemyDelegate
	EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* ___enemyDelegate_4;
};

// FinishGame
struct FinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameManagerBehavior FinishGame::gameManager
	GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* ___gameManager_4;
	// UnityEngine.GameObject FinishGame::star1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___star1_5;
	// UnityEngine.GameObject FinishGame::star2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___star2_6;
	// UnityEngine.GameObject FinishGame::star3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___star3_7;
	// UnityEngine.GameObject FinishGame::winPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___winPanel_8;
	// UnityEngine.GameObject FinishGame::losePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___losePanel_9;
	// System.Int32 FinishGame::starsOnCurrentLevel
	int32_t ___starsOnCurrentLevel_10;
	// System.Int32 FinishGame::currentLevel
	int32_t ___currentLevel_11;
};

// FireballProjectile
struct FireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 FireballProjectile::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_4;
	// System.Single FireballProjectile::fallSpeed
	float ___fallSpeed_5;
	// System.Single FireballProjectile::distanceThreshold
	float ___distanceThreshold_6;
};

// FireballRain
struct FireballRain_t24957F23DFDD3AD5FF03BFA0F8F2D983DF50461F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject FireballRain::fireballPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fireballPrefab_4;
	// System.Single FireballRain::fallSpeed
	float ___fallSpeed_5;
};

// GameManagerBehavior
struct GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FinishGame GameManagerBehavior::gameFinish
	FinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148* ___gameFinish_4;
	// SpawnEnemy GameManagerBehavior::spEn
	SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* ___spEn_6;
	// UnityEngine.UI.Text GameManagerBehavior::goldLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___goldLabel_7;
	// System.Int32 GameManagerBehavior::gold
	int32_t ___gold_8;
	// UnityEngine.UI.Text GameManagerBehavior::waveLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___waveLabel_9;
	// UnityEngine.GameObject[] GameManagerBehavior::nextWaveLabels
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___nextWaveLabels_10;
	// System.Boolean GameManagerBehavior::gameOver
	bool ___gameOver_11;
	// System.Int32 GameManagerBehavior::wave
	int32_t ___wave_12;
	// UnityEngine.UI.Text GameManagerBehavior::healthLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___healthLabel_13;
	// UnityEngine.GameObject[] GameManagerBehavior::healthIndicator
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___healthIndicator_14;
	// System.Int32 GameManagerBehavior::health
	int32_t ___health_15;
};

struct GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_StaticFields
{
	// System.Int32 GameManagerBehavior::Level
	int32_t ___Level_5;
};

// HealthBar
struct HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single HealthBar::maxHealth
	float ___maxHealth_4;
	// System.Single HealthBar::currentHealth
	float ___currentHealth_5;
	// System.Single HealthBar::originalScale
	float ___originalScale_6;
};

// MenuManager
struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator MenuManager::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_4;
	// UnityEngine.GameObject MenuManager::lvlPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lvlPanel_5;
	// System.Int32 MenuManager::currentLvl
	int32_t ___currentLvl_6;
	// System.Int32 MenuManager::starsNumber
	int32_t ___starsNumber_7;
	// System.Int32 MenuManager::buttonsNumber
	int32_t ___buttonsNumber_8;
	// UnityEngine.UI.Text MenuManager::stars
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___stars_9;
	// System.Collections.Generic.List`1<UnityEngine.UI.Button> MenuManager::myList
	List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* ___myList_10;
	// System.Collections.Generic.List`1<UnityEngine.UI.Button> MenuManager::rewardButton
	List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* ___rewardButton_11;
	// System.Int32 MenuManager::starsPerLevel
	int32_t ___starsPerLevel_12;
	// UnityEngine.UI.Image MenuManager::characterImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___characterImage_13;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> MenuManager::characterImages
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___characterImages_14;
	// System.Collections.Generic.List`1<UnityEngine.UI.Text> MenuManager::characterTexts
	List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* ___characterTexts_15;
	// System.Boolean[] MenuManager::isButtonUsed
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isButtonUsed_16;
	// UnityEngine.ParticleSystem MenuManager::confettiEffect
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___confettiEffect_17;
};

// MoveEnemy
struct MoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] MoveEnemy::waypoints
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___waypoints_4;
	// System.Int32 MoveEnemy::currentWaypoint
	int32_t ___currentWaypoint_5;
	// System.Single MoveEnemy::lastWaypointSwitchTime
	float ___lastWaypointSwitchTime_6;
	// System.Single MoveEnemy::speed
	float ___speed_7;
	// UnityEngine.AudioSource MoveEnemy::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_8;
	// GameManagerBehavior MoveEnemy::gameManager
	GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* ___gameManager_9;
	// System.Boolean MoveEnemy::shouldFlipSprite
	bool ___shouldFlipSprite_10;
};

// ParabolicBulletBehavior
struct ParabolicBulletBehavior_t85825AAFC020D79B5DC36A40B53731E59159C692  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ParabolicBulletBehavior::damage
	int32_t ___damage_4;
	// UnityEngine.GameObject ParabolicBulletBehavior::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_5;
	// UnityEngine.LayerMask ParabolicBulletBehavior::enemyLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___enemyLayer_6;
	// GameManagerBehavior ParabolicBulletBehavior::gameManager
	GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* ___gameManager_7;
	// UnityEngine.Vector3 ParabolicBulletBehavior::initialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialPosition_8;
	// UnityEngine.Vector3 ParabolicBulletBehavior::peakPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___peakPosition_9;
	// UnityEngine.Vector3 ParabolicBulletBehavior::finalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___finalPosition_10;
	// UnityEngine.ParticleSystem ParabolicBulletBehavior::explosionEffect
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___explosionEffect_11;
	// System.Single ParabolicBulletBehavior::startTime
	float ___startTime_12;
	// System.Single ParabolicBulletBehavior::duration
	float ___duration_13;
	// System.Single ParabolicBulletBehavior::yOffset
	float ___yOffset_14;
	// System.Boolean ParabolicBulletBehavior::hasReachedTarget
	bool ___hasReachedTarget_15;
	// System.Single ParabolicBulletBehavior::rotationSpeed
	float ___rotationSpeed_16;
};

// PlaceTower
struct PlaceTower_t58C0AEA6882BF80CA412C05905B854CAE3B23CB9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] PlaceTower::towers
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___towers_4;
	// UnityEngine.GameObject PlaceTower::currentTower
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentTower_5;
	// UnityEngine.GameObject PlaceTower::towerPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___towerPanel_6;
	// UnityEngine.GameObject PlaceTower::upgradePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___upgradePanel_7;
	// UnityEngine.Vector3 PlaceTower::initialClickPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialClickPosition_8;
	// UnityEngine.GameObject PlaceTower::tower
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tower_9;
	// UnityEngine.GameObject PlaceTower::towerPlace
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___towerPlace_10;
	// GameManagerBehavior PlaceTower::gameManager
	GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* ___gameManager_11;
	// UnityEngine.Vector3 PlaceTower::currentPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentPos_12;
};

// PoisonCloud
struct PoisonCloud_t5496DF6F4C1B8EA2C5B112DE08FD91C5C887F593  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PoisonCloud::damagePerSecond
	float ___damagePerSecond_4;
	// GameManagerBehavior PoisonCloud::gameManager
	GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* ___gameManager_5;
};

// ShootEnemies
struct ShootEnemies_t51B741E3935F3181E1F5E4DC0411528CBE4EE3F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ShootEnemies::enemiesInRange
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___enemiesInRange_4;
	// System.Single ShootEnemies::lastShotTime
	float ___lastShotTime_5;
	// TowerData ShootEnemies::towerData
	TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* ___towerData_6;
};

// SpawnEnemy
struct SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 SpawnEnemy::randLane
	int32_t ___randLane_4;
	// Lane[] SpawnEnemy::lanes
	LaneU5BU5D_t43A2D2019861082B5B52D9AC21C015F59FCD730C* ___lanes_5;
	// Wave[] SpawnEnemy::waves
	WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826* ___waves_6;
	// System.Int32 SpawnEnemy::timeBetweenWaves
	int32_t ___timeBetweenWaves_7;
	// GameManagerBehavior SpawnEnemy::gameManager
	GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* ___gameManager_8;
	// FinishGame SpawnEnemy::gameFinish
	FinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148* ___gameFinish_9;
	// System.Single SpawnEnemy::lastSpawnTime
	float ___lastSpawnTime_10;
	// System.Int32 SpawnEnemy::enemiesSpawned
	int32_t ___enemiesSpawned_11;
};

struct SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_StaticFields
{
	// System.Boolean SpawnEnemy::starsActivator
	bool ___starsActivator_12;
};

// TowerData
struct TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<TowerLevel> TowerData::levels
	List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC* ___levels_4;
	// TowerLevel TowerData::currentLevel
	TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* ___currentLevel_5;
	// UnityEngine.CircleCollider2D TowerData::towerCollider
	CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* ___towerCollider_6;
	// GameManagerBehavior TowerData::gameManager
	GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* ___gameManager_7;
};

// Tutorial
struct Tutorial_t4FF9FF1EF6F8E11558052253ECFBB53EC9AA41D4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* m_Items[1];

	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Wave[]
struct WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826  : public RuntimeArray
{
	ALIGN_FIELD (8) Wave_t46A8424F3F35C64800660289794914462618636D* m_Items[1];

	inline Wave_t46A8424F3F35C64800660289794914462618636D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Wave_t46A8424F3F35C64800660289794914462618636D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Wave_t46A8424F3F35C64800660289794914462618636D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Wave_t46A8424F3F35C64800660289794914462618636D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Wave_t46A8424F3F35C64800660289794914462618636D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Wave_t46A8424F3F35C64800660289794914462618636D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// Lane[]
struct LaneU5BU5D_t43A2D2019861082B5B52D9AC21C015F59FCD730C  : public RuntimeArray
{
	ALIGN_FIELD (8) Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* m_Items[1];

	inline Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<GameManagerBehavior>()
inline GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// UnityEngine.Vector3 AntisepticBulletBehavior::CalculateBalisticInterpolation(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 AntisepticBulletBehavior_CalculateBalisticInterpolation_m949090B39C0C6B70D1C662D66B2A8256EBEE7682 (AntisepticBulletBehavior_tA0AE2521C2886160D5F14973F33BF901D96D621B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___peak1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end2, float ___t3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.ParticleSystem>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* Physics2D_OverlapCircleAll_mBEBE14F058D718FA90F44A662C106D9CCDF6B3D9 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void AntisepticBulletBehavior::DealDamage(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntisepticBulletBehavior_DealDamage_m6E011374CD16A54624742A928F695FEC03648CFB (AntisepticBulletBehavior_tA0AE2521C2886160D5F14973F33BF901D96D621B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<HealthBar>()
inline HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* GameObject_GetComponentInChildren_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mB2795513E8DA8E97DCC0501E99C42B216D9AB032 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mA78328A70D3F1088B588EF6F811AAD6577F2B7BF (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// System.Int32 GameManagerBehavior::get_Gold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManagerBehavior_get_Gold_mFD69B5BA1071990BC27D004C994B4C98B30EAD1F_inline (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, const RuntimeMethod* method) ;
// System.Void GameManagerBehavior::set_Gold(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehavior_set_Gold_m3F0A27C49975BB19A3AB07DD90324DC53353A9A8 (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_insideUnitSphere_mA488D6859560B73565B8D890ED6B39DB4091C54F (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void EnemyDestructionDelegate/EnemyDelegate::Invoke(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemyDelegate_Invoke_mD65864DAA5968C1ED062D71A38F3BF3C67003E6B_inline (EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCountInBuildSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCountInBuildSettings_m414CDE36617596AC75C8E1A03DA65752A09A8944 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Int32 GameManagerBehavior::get_Health()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManagerBehavior_get_Health_mA12D37A59981C351E52D782D6E79B716B7CE435D_inline (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void FireballRain::CreateFireballRain(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireballRain_CreateFireballRain_mB39C214FE1CEBAE431C63C32B1E746D377C2525E (FireballRain_t24957F23DFDD3AD5FF03BFA0F8F2D983DF50461F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<FireballProjectile>()
inline FireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F* GameObject_GetComponent_TisFireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F_m396A1FC8C2524FFF0E33D75F59872AF083FE8D88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void FireballProjectile::SetTargetPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireballProjectile_SetTargetPosition_m43F2F20F88FFFE707B68F374053428352D173A8D_inline (FireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void FireballProjectile::SetFallSpeed(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireballProjectile_SetFallSpeed_m72BEA34674B1DB8AC27CF3BE314EB23AEEACEB0B_inline (FireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F* __this, float ___speed0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<CameraShake>()
inline CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* Component_GetComponent_TisCameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1_m12B798662937F3D647AA654E93ACF1A75C8FD7DC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CameraShake::Shake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_Shake_m3C5686548E91D479B63E95EE0F77FF52F60C01AC (CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Void FinishGame::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishGame_GameOver_mF374118542ABC285C35F18BBD75D21696CB5B677 (FinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<FinishGame>()
inline FinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148* GameObject_GetComponent_TisFinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148_mB6F0418D69460FA29B7225D5101DC71A199CA127 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<SpawnEnemy>()
inline SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* GameObject_GetComponent_TisSpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_m1A99F327494CC26F3E4DC7041615FA9BFD6DCDCB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GameManagerBehavior::set_Wave(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehavior_set_Wave_m65F39574DEB1A462733B5E4A08680CCC4F5975EB (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void GameManagerBehavior::set_Health(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehavior_set_Health_m66E78C1FD2786C798A883C8AED40FB1B82F4BBD4 (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Button>::get_Count()
inline int32_t List_1_get_Count_m2817F5F47727C2C1FB87CE382D77F92D2658EE78_inline (List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___key0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UI.Button>::get_Item(System.Int32)
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* List_1_get_Item_m5BABE1644AE4925547F413C692E38B1E1CE23DA3 (List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Item(System.Int32)
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Item(System.Int32)
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* List_1_get_Item_mD575040BED5E15F408E2E182CAFDF0EF52625E87 (List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ParabolicBulletBehavior::CalculateBalisticInterpolation(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ParabolicBulletBehavior_CalculateBalisticInterpolation_m94BF83A6F21DFB775C12236D1FB615FA73E345DA (ParabolicBulletBehavior_t85825AAFC020D79B5DC36A40B53731E59159C692* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___peak1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end2, float ___t3, const RuntimeMethod* method) ;
// System.Void ParabolicBulletBehavior::DealDamage(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParabolicBulletBehavior_DealDamage_m1473C2CC2A7DE08902F165D0DA415B4E16EE3E4E (ParabolicBulletBehavior_t85825AAFC020D79B5DC36A40B53731E59159C692* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy0, const RuntimeMethod* method) ;
// System.Boolean PlaceTower::CanPlaceTower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaceTower_CanPlaceTower_mD0A7D6D9F682E9A28185EA4E6D5E2CEAC72B7C58 (PlaceTower_t58C0AEA6882BF80CA412C05905B854CAE3B23CB9* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TowerData>()
inline TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// TowerLevel TowerData::get_CurrentLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* TowerData_get_CurrentLevel_mC3A0295899EE1D393C6B12295FB8D5464B244BDC_inline (TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* __this, const RuntimeMethod* method) ;
// System.Boolean PlaceTower::CanUpgradeTower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaceTower_CanUpgradeTower_m39CF2B036FEA069BC3150421BE9BC90217A1C601 (PlaceTower_t58C0AEA6882BF80CA412C05905B854CAE3B23CB9* __this, const RuntimeMethod* method) ;
// System.Void TowerData::increaseLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerData_increaseLevel_mA43A2250930467E855049EB68208E4252D3337BB (TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_Raycast_mBECD869F0788D0B0E665BBA3611362E6D5CD2947 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void PlaceTower::OpenTowerPanel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTower_OpenTowerPanel_mD973408FAC4B24898C3FF8AF2CEBD445A68C0EB5 (PlaceTower_t58C0AEA6882BF80CA412C05905B854CAE3B23CB9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<TowerLevel>::get_Item(System.Int32)
inline TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110 (List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* (*) (List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// TowerLevel TowerData::getNextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* TowerData_getNextLevel_m4E504AF282D1C6A3A9732A7408B4F9CC3B4FCB83 (TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<TowerData>()
inline TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* GameObject_GetComponentInChildren_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m4361E6F25B03C5E6257CDB6912E2E3853CA63588 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<MoveEnemy>()
inline MoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83* GameObject_GetComponent_TisMoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83_mB2F68909C5D110F92A23832BF6D8BAF5682C7985 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single MoveEnemy::DistanceToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MoveEnemy_DistanceToGoal_mC6A9977AF26C46281C79766D2C1FE2327270A86C (MoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ShootEnemies::Shoot(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootEnemies_Shoot_m8F04557803B5EA174F1C5A5F4EAAFFCB7317230C (ShootEnemies_t51B741E3935F3181E1F5E4DC0411528CBE4EE3F3* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___target0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
inline bool List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T UnityEngine.GameObject::GetComponent<EnemyDestructionDelegate>()
inline EnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12* GameObject_GetComponent_TisEnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12_mEF66DEE26354783212AE6BE0D8A15472CFBAEB38 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EnemyDestructionDelegate/EnemyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDelegate__ctor_mB95CFC1639AE91CF08191E05536F7E64C42B0FE9 (EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// T UnityEngine.GameObject::GetComponent<ParabolicBulletBehavior>()
inline ParabolicBulletBehavior_t85825AAFC020D79B5DC36A40B53731E59159C692* GameObject_GetComponent_TisParabolicBulletBehavior_t85825AAFC020D79B5DC36A40B53731E59159C692_m454AD27DA33C729D0CD9023D1B3C2D56369636BC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParabolicBulletBehavior_t85825AAFC020D79B5DC36A40B53731E59159C692* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<BulletBehavior>()
inline BulletBehavior_tEC4D11034CA6DFDA43C051633187834DA7459E87* GameObject_GetComponent_TisBulletBehavior_tEC4D11034CA6DFDA43C051633187834DA7459E87_m1DE568D8D440247A6B0519F6ACAE5A3DCADBCE0B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BulletBehavior_tEC4D11034CA6DFDA43C051633187834DA7459E87* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<AntisepticBulletBehavior>()
inline AntisepticBulletBehavior_tA0AE2521C2886160D5F14973F33BF901D96D621B* GameObject_GetComponent_TisAntisepticBulletBehavior_tA0AE2521C2886160D5F14973F33BF901D96D621B_m8685C68ABC03D0085F2CB74DEA6AC06204F32691 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AntisepticBulletBehavior_tA0AE2521C2886160D5F14973F33BF901D96D621B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Int32 GameManagerBehavior::get_Wave()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManagerBehavior_get_Wave_mC912E1DB436E7BBE3982F500B6D84B62E5092742_inline (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void FinishGame::GameWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishGame_GameWin_mD8E5975F6902390400FACE0EF0B5D5E061F878E7 (FinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TowerLevel>::IndexOf(T)
inline int32_t List_1_IndexOf_m34C861893499AF0C207BD19751D5BB615F413FCC (List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC* __this, TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC*, TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<TowerLevel>::get_Count()
inline int32_t List_1_get_Count_mBA15CED669D74CEECD6B1A5FE3392ADBC5AE0FAC_inline (List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.CircleCollider2D::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleCollider2D_set_radius_m468ECCD06634C48E6837A55B9E8D056BBF15FC52 (CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CircleCollider2D>()
inline CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* Component_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_m1E30A71856359306D1F0E9E59CE75B25210FE16F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void TowerData::set_CurrentLevel(TowerLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerData_set_CurrentLevel_mDBDDC3C27C29CCD0B251918189C567E96C020A4D (TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* __this, TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AntisepticBulletBehavior::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntisepticBulletBehavior_Start_m7C6749A0E0B4DFADE98627115A2BF916F27509BE (AntisepticBulletBehavior_tA0AE2521C2886160D5F14973F33BF901D96D621B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject gm = GameObject.Find("GameManager");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, NULL);
		V_0 = L_0;
		// gameManager = gm.GetComponent<GameManagerBehavior>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_2;
		L_2 = GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB(L_1, GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var);
		__this->___gameManager_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_7), (void*)L_2);
		// initialPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___initialPosition_8 = L_4;
		// finalPosition = target.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___target_5;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		__this->___finalPosition_10 = L_7;
		// peakPosition = initialPosition + (finalPosition - initialPosition) / 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___initialPosition_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___finalPosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___initialPosition_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_11, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_12, NULL);
		__this->___peakPosition_9 = L_13;
		// peakPosition.y += yOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___peakPosition_9);
		float* L_15 = (&L_14->___y_3);
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		float L_18 = __this->___yOffset_14;
		*((float*)L_16) = (float)((float)il2cpp_codegen_add(L_17, L_18));
		// peakPosition.y = Mathf.Max(peakPosition.y, Mathf.Max(initialPosition.y, finalPosition.y));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&__this->___peakPosition_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&__this->___peakPosition_9);
		float L_21 = L_20->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = (&__this->___initialPosition_8);
		float L_23 = L_22->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&__this->___finalPosition_10);
		float L_25 = L_24->___y_3;
		float L_26;
		L_26 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_23, L_25, NULL);
		float L_27;
		L_27 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_21, L_26, NULL);
		L_19->___y_3 = L_27;
		// startTime = Time.time;
		float L_28;
		L_28 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime_12 = L_28;
		// }
		return;
	}
}
// System.Void AntisepticBulletBehavior::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntisepticBulletBehavior_Update_m0BD62C0577D10398320F202578AC390578D7019C (AntisepticBulletBehavior_tA0AE2521C2886160D5F14973F33BF901D96D621B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* V_3 = NULL;
	int32_t V_4 = 0;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* V_5 = NULL;
	{
		// float currentTime = Time.time - startTime;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___startTime_12;
		// float t = currentTime / duration;
		float L_2 = __this->___duration_13;
		V_0 = ((float)(((float)il2cpp_codegen_subtract(L_0, L_1))/L_2));
		// Vector3 ballisticPosition = CalculateBalisticInterpolation(initialPosition, peakPosition, finalPosition, t);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___initialPosition_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___peakPosition_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___finalPosition_10;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = AntisepticBulletBehavior_CalculateBalisticInterpolation_m949090B39C0C6B70D1C662D66B2A8256EBEE7682(__this, L_3, L_4, L_5, L_6, NULL);
		V_1 = L_7;
		// transform.position = ballisticPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_9, NULL);
		// float rotationAngle = rotationSpeed * Time.deltaTime;
		float L_10 = __this->___rotationSpeed_16;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_2 = ((float)il2cpp_codegen_multiply(L_10, L_11));
		// transform.Rotate(Vector3.forward, rotationAngle);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_14 = V_2;
		NullCheck(L_12);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_12, L_13, L_14, NULL);
		// if (t >= 1 && !hasReachedTarget)
		float L_15 = V_0;
		if ((!(((float)L_15) >= ((float)(1.0f)))))
		{
			goto IL_00e4;
		}
	}
	{
		bool L_16 = __this->___hasReachedTarget_15;
		if (L_16)
		{
			goto IL_00e4;
		}
	}
	{
		// hasReachedTarget = true;
		__this->___hasReachedTarget_15 = (bool)1;
		// Instantiate(antisepticEffect, transform.position, Quaternion.identity);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_17 = __this->___antisepticEffect_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_21;
		L_21 = Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2(L_17, L_19, L_20, Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var);
		// Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, 2f, enemyLayer);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_23, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_25 = __this->___enemyLayer_6;
		int32_t L_26;
		L_26 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_27;
		L_27 = Physics2D_OverlapCircleAll_mBEBE14F058D718FA90F44A662C106D9CCDF6B3D9(L_24, (2.0f), L_26, NULL);
		// foreach (Collider2D collider in colliders)
		V_3 = L_27;
		V_4 = 0;
		goto IL_00d2;
	}

IL_00b9:
	{
		// foreach (Collider2D collider in colliders)
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_28 = V_3;
		int32_t L_29 = V_4;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_5 = L_31;
		// DealDamage(collider.gameObject);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_32 = V_5;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
		AntisepticBulletBehavior_DealDamage_m6E011374CD16A54624742A928F695FEC03648CFB(__this, L_33, NULL);
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d2:
	{
		// foreach (Collider2D collider in colliders)
		int32_t L_35 = V_4;
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_36 = V_3;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_00b9;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_37, NULL);
	}

IL_00e4:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 AntisepticBulletBehavior::CalculateBalisticInterpolation(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 AntisepticBulletBehavior_CalculateBalisticInterpolation_m949090B39C0C6B70D1C662D66B2A8256EBEE7682 (AntisepticBulletBehavior_tA0AE2521C2886160D5F14973F33BF901D96D621B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___peak1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end2, float ___t3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float u = 1 - t;
		float L_0 = ___t3;
		V_0 = ((float)il2cpp_codegen_subtract((1.0f), L_0));
		// float tt = t * t;
		float L_1 = ___t3;
		float L_2 = ___t3;
		V_1 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// float uu = u * u;
		float L_3 = V_0;
		float L_4 = V_0;
		// Vector3 position = (uu * start) + (2 * u * t * peak) + (tt * end);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___start0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5, NULL);
		float L_7 = V_0;
		float L_8 = ___t3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___peak1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_7)), L_8)), L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_10, NULL);
		float L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___end2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_14, NULL);
		// return position;
		return L_15;
	}
}
// System.Void AntisepticBulletBehavior::DealDamage(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntisepticBulletBehavior_DealDamage_m6E011374CD16A54624742A928F695FEC03648CFB (AntisepticBulletBehavior_tA0AE2521C2886160D5F14973F33BF901D96D621B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mB2795513E8DA8E97DCC0501E99C42B216D9AB032_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HealthBar healthBar = enemy.GetComponentInChildren<HealthBar>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___enemy0;
		NullCheck(L_0);
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_1;
		L_1 = GameObject_GetComponentInChildren_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mB2795513E8DA8E97DCC0501E99C42B216D9AB032(L_0, GameObject_GetComponentInChildren_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mB2795513E8DA8E97DCC0501E99C42B216D9AB032_RuntimeMethod_var);
		// healthBar.currentHealth -= Mathf.Max(damage, 0);
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_2 = L_1;
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_3 = L_2;
		NullCheck(L_3);
		float L_4 = L_3->___currentHealth_5;
		int32_t L_5 = __this->___damage_4;
		int32_t L_6;
		L_6 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_5, 0, NULL);
		NullCheck(L_3);
		L_3->___currentHealth_5 = ((float)il2cpp_codegen_subtract(L_4, ((float)L_6)));
		// if (healthBar.currentHealth <= 0)
		NullCheck(L_2);
		float L_7 = L_2->___currentHealth_5;
		if ((!(((float)L_7) <= ((float)(0.0f)))))
		{
			goto IL_0061;
		}
	}
	{
		// Destroy(enemy);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___enemy0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
		// AudioSource audioSource = enemy.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___enemy0;
		NullCheck(L_9);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10;
		L_10 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_9, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		// AudioSource.PlayClipAtPoint(audioSource.clip, transform.position);
		NullCheck(L_10);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11;
		L_11 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		AudioSource_PlayClipAtPoint_mA78328A70D3F1088B588EF6F811AAD6577F2B7BF(L_11, L_13, NULL);
		// gameManager.Gold += 50;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_14 = __this->___gameManager_7;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = GameManagerBehavior_get_Gold_mFD69B5BA1071990BC27D004C994B4C98B30EAD1F_inline(L_15, NULL);
		NullCheck(L_15);
		GameManagerBehavior_set_Gold_m3F0A27C49975BB19A3AB07DD90324DC53353A9A8(L_15, ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)50))), NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void AntisepticBulletBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntisepticBulletBehavior__ctor_m6916C6E2230BBFAC6179C5FBD73419D9041BEFDF (AntisepticBulletBehavior_tA0AE2521C2886160D5F14973F33BF901D96D621B* __this, const RuntimeMethod* method) 
{
	{
		// public float duration = 1.5f;
		__this->___duration_13 = (1.5f);
		// public float yOffset = 3f;
		__this->___yOffset_14 = (3.0f);
		// public float rotationSpeed = 180.0f;
		__this->___rotationSpeed_16 = (180.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BulletBehavior::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletBehavior_Start_mB6F8CA98DA82853CDC4DCB0FC2DCC42F5CF98B1B (BulletBehavior_tEC4D11034CA6DFDA43C051633187834DA7459E87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject gm = GameObject.Find("GameManager");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, NULL);
		V_0 = L_0;
		// gameManager = gm.GetComponent<GameManagerBehavior>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_2;
		L_2 = GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB(L_1, GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var);
		__this->___gameManager_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_9), (void*)L_2);
		// startPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___startPosition_8 = L_4;
		// targetPosition = target.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___target_6;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		__this->___targetPosition_7 = L_7;
		// }
		return;
	}
}
// System.Void BulletBehavior::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletBehavior_Update_m77396B260CEED5C2E9C85437EABB525A7842933F (BulletBehavior_tEC4D11034CA6DFDA43C051633187834DA7459E87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mB2795513E8DA8E97DCC0501E99C42B216D9AB032_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// Vector3 direction = targetPosition - startPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___targetPosition_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___startPosition_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___x_2;
		float L_7;
		L_7 = atan2f(L_4, L_6);
		V_1 = ((float)il2cpp_codegen_multiply(L_7, (57.2957802f)));
		// angle -= 90f;
		float L_8 = V_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_8, (90.0f)));
		// transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_10, L_11, NULL);
		NullCheck(L_9);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_12, NULL);
		// float step = speed * Time.deltaTime;
		float L_13 = __this->___speed_4;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_2 = ((float)il2cpp_codegen_multiply(L_13, L_14));
		// transform.position = Vector3.MoveTowards(transform.position, targetPosition, step);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___targetPosition_7;
		float L_19 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_17, L_18, L_19, NULL);
		NullCheck(L_15);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_15, L_20, NULL);
		// if (transform.position == targetPosition)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___targetPosition_7;
		bool L_24;
		L_24 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_22, L_23, NULL);
		if (!L_24)
		{
			goto IL_011b;
		}
	}
	{
		// if (target != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___target_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_26)
		{
			goto IL_0110;
		}
	}
	{
		// HealthBar healthBar = target.GetComponentInChildren<HealthBar>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___target_6;
		NullCheck(L_27);
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_28;
		L_28 = GameObject_GetComponentInChildren_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mB2795513E8DA8E97DCC0501E99C42B216D9AB032(L_27, GameObject_GetComponentInChildren_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mB2795513E8DA8E97DCC0501E99C42B216D9AB032_RuntimeMethod_var);
		// healthBar.currentHealth -= Mathf.Max(damage, 0);
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_29 = L_28;
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_30 = L_29;
		NullCheck(L_30);
		float L_31 = L_30->___currentHealth_5;
		int32_t L_32 = __this->___damage_5;
		int32_t L_33;
		L_33 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_32, 0, NULL);
		NullCheck(L_30);
		L_30->___currentHealth_5 = ((float)il2cpp_codegen_subtract(L_31, ((float)L_33)));
		// if (healthBar.currentHealth <= 0)
		NullCheck(L_29);
		float L_34 = L_29->___currentHealth_5;
		if ((!(((float)L_34) <= ((float)(0.0f)))))
		{
			goto IL_0110;
		}
	}
	{
		// Destroy(target);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___target_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_35, NULL);
		// AudioSource audioSource = target.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___target_6;
		NullCheck(L_36);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_37;
		L_37 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_36, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		// AudioSource.PlayClipAtPoint(audioSource.clip, transform.position);
		NullCheck(L_37);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_38;
		L_38 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_37, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		AudioSource_PlayClipAtPoint_mA78328A70D3F1088B588EF6F811AAD6577F2B7BF(L_38, L_40, NULL);
		// gameManager.Gold += 50;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_41 = __this->___gameManager_9;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_42 = L_41;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = GameManagerBehavior_get_Gold_mFD69B5BA1071990BC27D004C994B4C98B30EAD1F_inline(L_42, NULL);
		NullCheck(L_42);
		GameManagerBehavior_set_Gold_m3F0A27C49975BB19A3AB07DD90324DC53353A9A8(L_42, ((int32_t)il2cpp_codegen_add(L_43, ((int32_t)50))), NULL);
	}

IL_0110:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_44, NULL);
	}

IL_011b:
	{
		// }
		return;
	}
}
// System.Void BulletBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletBehavior__ctor_m083B8CB1EDC4FA714A650A61368CF64D584831E9 (BulletBehavior_tEC4D11034CA6DFDA43C051633187834DA7459E87* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 10f;
		__this->___speed_4 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraShake::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_OnEnable_m5FA55D97A80E8AE8BD82532E7B1A90C25FF50500 (CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* __this, const RuntimeMethod* method) 
{
	{
		// transformAtOrigin = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___transformAtOrigin_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transformAtOrigin_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void CameraShake::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_Update_m132373E37174BAA277442BF2CF8807BCA0600DB6 (CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* __this, const RuntimeMethod* method) 
{
	{
		// if (!shaking)
		bool L_0 = __this->___shaking_10;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (shakeIntensity > 0f)
		float L_1 = __this->___shakeIntensity_7;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_00f3;
		}
	}
	{
		// transformAtOrigin.localPosition = originPosition + Random.insideUnitSphere * shakeIntensity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___transformAtOrigin_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___originPosition_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Random_get_insideUnitSphere_mA488D6859560B73565B8D890ED6B39DB4091C54F(NULL);
		float L_5 = __this->___shakeIntensity_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_6, NULL);
		NullCheck(L_2);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_2, L_7, NULL);
		// transformAtOrigin.localRotation = new Quaternion(
		//     originRotation.x + Random.Range(-shakeIntensity, shakeIntensity) * .2f,
		//     originRotation.y + Random.Range(-shakeIntensity, shakeIntensity) * .2f,
		//     originRotation.z + Random.Range(-shakeIntensity, shakeIntensity) * .2f,
		//     originRotation.w + Random.Range(-shakeIntensity, shakeIntensity) * .2f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___transformAtOrigin_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_9 = (&__this->___originRotation_9);
		float L_10 = L_9->___x_0;
		float L_11 = __this->___shakeIntensity_7;
		float L_12 = __this->___shakeIntensity_7;
		float L_13;
		L_13 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_11)), L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_14 = (&__this->___originRotation_9);
		float L_15 = L_14->___y_1;
		float L_16 = __this->___shakeIntensity_7;
		float L_17 = __this->___shakeIntensity_7;
		float L_18;
		L_18 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_16)), L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_19 = (&__this->___originRotation_9);
		float L_20 = L_19->___z_2;
		float L_21 = __this->___shakeIntensity_7;
		float L_22 = __this->___shakeIntensity_7;
		float L_23;
		L_23 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_21)), L_22, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_24 = (&__this->___originRotation_9);
		float L_25 = L_24->___w_3;
		float L_26 = __this->___shakeIntensity_7;
		float L_27 = __this->___shakeIntensity_7;
		float L_28;
		L_28 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_26)), L_27, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_29), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(L_13, (0.200000003f))))), ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(L_18, (0.200000003f))))), ((float)il2cpp_codegen_add(L_20, ((float)il2cpp_codegen_multiply(L_23, (0.200000003f))))), ((float)il2cpp_codegen_add(L_25, ((float)il2cpp_codegen_multiply(L_28, (0.200000003f))))), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_8, L_29, NULL);
		// shakeIntensity -= shakeDecay;
		float L_30 = __this->___shakeIntensity_7;
		float L_31 = __this->___shakeDecay_6;
		__this->___shakeIntensity_7 = ((float)il2cpp_codegen_subtract(L_30, L_31));
		return;
	}

IL_00f3:
	{
		// shaking = false;
		__this->___shaking_10 = (bool)0;
		// transformAtOrigin.localPosition = originPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___transformAtOrigin_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = __this->___originPosition_8;
		NullCheck(L_32);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_32, L_33, NULL);
		// transformAtOrigin.localRotation = originRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___transformAtOrigin_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = __this->___originRotation_9;
		NullCheck(L_34);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_34, L_35, NULL);
		// }
		return;
	}
}
// System.Void CameraShake::Shake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_Shake_m3C5686548E91D479B63E95EE0F77FF52F60C01AC (CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* __this, const RuntimeMethod* method) 
{
	{
		// if (!shaking)
		bool L_0 = __this->___shaking_10;
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		// originPosition = transformAtOrigin.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___transformAtOrigin_11;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		__this->___originPosition_8 = L_2;
		// originRotation = transformAtOrigin.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___transformAtOrigin_11;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_3, NULL);
		__this->___originRotation_9 = L_4;
	}

IL_002a:
	{
		// shaking = true;
		__this->___shaking_10 = (bool)1;
		// shakeDecay = shakeDecayStart;
		float L_5 = __this->___shakeDecayStart_4;
		__this->___shakeDecay_6 = L_5;
		// shakeIntensity = shakeIntensityStart;
		float L_6 = __this->___shakeIntensityStart_5;
		__this->___shakeIntensity_7 = L_6;
		// }
		return;
	}
}
// System.Void CameraShake::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake__ctor_m55BC727470175313EB7C6F09E2EBD04610B8F325 (CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* __this, const RuntimeMethod* method) 
{
	{
		// public float shakeDecayStart = 0.002f;
		__this->___shakeDecayStart_4 = (0.00200000009f);
		// public float shakeIntensityStart = 0.03f;
		__this->___shakeIntensityStart_5 = (0.0299999993f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyDestructionDelegate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDestructionDelegate_Start_m28456B3E039CE08BC50B2AE8333BE7FE3CC56C74 (EnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EnemyDestructionDelegate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDestructionDelegate_Update_m6C5130292A792BE8FFCD9E6263E72EE4B00C5E89 (EnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EnemyDestructionDelegate::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDestructionDelegate_OnDestroy_m15B2FADA9B4DC2F96FC7D72886591CE2303697BA (EnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12* __this, const RuntimeMethod* method) 
{
	{
		// if (enemyDelegate != null)
		EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* L_0 = __this->___enemyDelegate_4;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// enemyDelegate(gameObject);
		EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* L_1 = __this->___enemyDelegate_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		EnemyDelegate_Invoke_mD65864DAA5968C1ED062D71A38F3BF3C67003E6B_inline(L_1, L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void EnemyDestructionDelegate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDestructionDelegate__ctor_mA49FFE23531D7FFF8832205BEF8C2B95CC85710E (EnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void EnemyDelegate_Invoke_mD65864DAA5968C1ED062D71A38F3BF3C67003E6B_Multicast(EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* currentDelegate = reinterpret_cast<EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___enemy0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EnemyDelegate_Invoke_mD65864DAA5968C1ED062D71A38F3BF3C67003E6B_OpenInst(EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy0, const RuntimeMethod* method)
{
	NullCheck(___enemy0);
	typedef void (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___enemy0, method);
}
void EnemyDelegate_Invoke_mD65864DAA5968C1ED062D71A38F3BF3C67003E6B_OpenStatic(EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___enemy0, method);
}
void EnemyDelegate_Invoke_mD65864DAA5968C1ED062D71A38F3BF3C67003E6B_OpenStaticInvoker(EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, ___enemy0);
}
void EnemyDelegate_Invoke_mD65864DAA5968C1ED062D71A38F3BF3C67003E6B_ClosedStaticInvoker(EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___enemy0);
}
// System.Void EnemyDestructionDelegate/EnemyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDelegate__ctor_mB95CFC1639AE91CF08191E05536F7E64C42B0FE9 (EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EnemyDelegate_Invoke_mD65864DAA5968C1ED062D71A38F3BF3C67003E6B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EnemyDelegate_Invoke_mD65864DAA5968C1ED062D71A38F3BF3C67003E6B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EnemyDelegate_Invoke_mD65864DAA5968C1ED062D71A38F3BF3C67003E6B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&EnemyDelegate_Invoke_mD65864DAA5968C1ED062D71A38F3BF3C67003E6B_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&EnemyDelegate_Invoke_mD65864DAA5968C1ED062D71A38F3BF3C67003E6B_Multicast;
}
// System.Void EnemyDestructionDelegate/EnemyDelegate::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDelegate_Invoke_mD65864DAA5968C1ED062D71A38F3BF3C67003E6B (EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___enemy0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult EnemyDestructionDelegate/EnemyDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyDelegate_BeginInvoke_mCB1D8D5026D2C15F6782801447A10FBA217AD037 (EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___enemy0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void EnemyDestructionDelegate/EnemyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDelegate_EndInvoke_mD8180D6595AA4FAC411981B325EF089DAC2ADFBE (EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FinishGame::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishGame_Start_m444AC97BD5CB29D1E8C6ECDC2402E58F4B4A6A84 (FinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7799AA0B8918D9D7F12317B98167D542023D726A);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// gameManager = GameObject.Find("GameManager").GetComponent<GameManagerBehavior>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, NULL);
		NullCheck(L_0);
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_1;
		L_1 = GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB(L_0, GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var);
		__this->___gameManager_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_4), (void*)L_1);
		// currentLevel = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		__this->___currentLevel_11 = L_3;
		// starsOnCurrentLevel = PlayerPrefs.GetInt("starsLevel" + currentLevel, 0);
		int32_t* L_4 = (&__this->___currentLevel_11);
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7799AA0B8918D9D7F12317B98167D542023D726A, L_5, NULL);
		int32_t L_7;
		L_7 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(L_6, 0, NULL);
		__this->___starsOnCurrentLevel_10 = L_7;
		// }
		return;
	}
}
// System.Void FinishGame::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishGame_GameOver_mF374118542ABC285C35F18BBD75D21696CB5B677 (FinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148* __this, const RuntimeMethod* method) 
{
	{
		// losePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___losePanel_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void FinishGame::GameWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishGame_GameWin_mD8E5975F6902390400FACE0EF0B5D5E061F878E7 (FinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03595E559F3E9B49CA8F15739A4A1791320B302B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F91DED5DDB2E6C4914F76E496B101F79AF3C3BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D52F5774B3A4F2D746121366BB3C1351E903792);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7799AA0B8918D9D7F12317B98167D542023D726A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// winPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___winPanel_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// if (SceneManager.GetActiveScene().buildIndex < SceneManager.sceneCountInBuildSettings - 1)
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_1 = L_1;
		int32_t L_2;
		L_2 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_1), NULL);
		int32_t L_3;
		L_3 = SceneManager_get_sceneCountInBuildSettings_m414CDE36617596AC75C8E1A03DA65752A09A8944(NULL);
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_0056;
		}
	}
	{
		// if (PlayerPrefs.GetInt("lvl") < SceneManager.GetActiveScene().buildIndex + 1)
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral5D52F5774B3A4F2D746121366BB3C1351E903792, NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_5;
		L_5 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_1 = L_5;
		int32_t L_6;
		L_6 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_1), NULL);
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_6, 1)))))
		{
			goto IL_0056;
		}
	}
	{
		// PlayerPrefs.SetInt("lvl", SceneManager.GetActiveScene().buildIndex + 1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_7;
		L_7 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_1 = L_7;
		int32_t L_8;
		L_8 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_1), NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral5D52F5774B3A4F2D746121366BB3C1351E903792, ((int32_t)il2cpp_codegen_add(L_8, 1)), NULL);
	}

IL_0056:
	{
		// if (PlayerPrefs.GetInt("rewardButtons") < currentLevel && currentLevel < 5)
		int32_t L_9;
		L_9 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral0F91DED5DDB2E6C4914F76E496B101F79AF3C3BF, NULL);
		int32_t L_10 = __this->___currentLevel_11;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_11 = __this->___currentLevel_11;
		if ((((int32_t)L_11) >= ((int32_t)5)))
		{
			goto IL_0081;
		}
	}
	{
		// PlayerPrefs.SetInt("rewardButtons", currentLevel);
		int32_t L_12 = __this->___currentLevel_11;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral0F91DED5DDB2E6C4914F76E496B101F79AF3C3BF, L_12, NULL);
	}

IL_0081:
	{
		// int newStars = 0;
		V_0 = 0;
		// if (gameManager.Health == 5)
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_13 = __this->___gameManager_4;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = GameManagerBehavior_get_Health_mA12D37A59981C351E52D782D6E79B716B7CE435D_inline(L_13, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)5))))
		{
			goto IL_00b7;
		}
	}
	{
		// newStars = 3;
		V_0 = 3;
		// star1.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___star1_5;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
		// star2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___star2_6;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
		// star3.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___star3_7;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
	}

IL_00b7:
	{
		// if (gameManager.Health < 5 && gameManager.Health >= 3)
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_18 = __this->___gameManager_4;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GameManagerBehavior_get_Health_mA12D37A59981C351E52D782D6E79B716B7CE435D_inline(L_18, NULL);
		if ((((int32_t)L_19) >= ((int32_t)5)))
		{
			goto IL_00ed;
		}
	}
	{
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_20 = __this->___gameManager_4;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GameManagerBehavior_get_Health_mA12D37A59981C351E52D782D6E79B716B7CE435D_inline(L_20, NULL);
		if ((((int32_t)L_21) < ((int32_t)3)))
		{
			goto IL_00ed;
		}
	}
	{
		// newStars = 2;
		V_0 = 2;
		// star1.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___star1_5;
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)1, NULL);
		// star2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___star2_6;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
	}

IL_00ed:
	{
		// if (gameManager.Health < 3 && gameManager.Health >= 1)
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_24 = __this->___gameManager_4;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GameManagerBehavior_get_Health_mA12D37A59981C351E52D782D6E79B716B7CE435D_inline(L_24, NULL);
		if ((((int32_t)L_25) >= ((int32_t)3)))
		{
			goto IL_0117;
		}
	}
	{
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_26 = __this->___gameManager_4;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = GameManagerBehavior_get_Health_mA12D37A59981C351E52D782D6E79B716B7CE435D_inline(L_26, NULL);
		if ((((int32_t)L_27) < ((int32_t)1)))
		{
			goto IL_0117;
		}
	}
	{
		// newStars = 1;
		V_0 = 1;
		// star1.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___star1_5;
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)1, NULL);
	}

IL_0117:
	{
		// if (starsOnCurrentLevel < 3 && starsOnCurrentLevel < newStars)
		int32_t L_29 = __this->___starsOnCurrentLevel_10;
		if ((((int32_t)L_29) >= ((int32_t)3)))
		{
			goto IL_018a;
		}
	}
	{
		int32_t L_30 = __this->___starsOnCurrentLevel_10;
		int32_t L_31 = V_0;
		if ((((int32_t)L_30) >= ((int32_t)L_31)))
		{
			goto IL_018a;
		}
	}
	{
		// PlayerPrefs.SetInt("starsLevel" + currentLevel, newStars);
		int32_t* L_32 = (&__this->___currentLevel_11);
		String_t* L_33;
		L_33 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_32, NULL);
		String_t* L_34;
		L_34 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7799AA0B8918D9D7F12317B98167D542023D726A, L_33, NULL);
		int32_t L_35 = V_0;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(L_34, L_35, NULL);
		// if (starsOnCurrentLevel == 0)
		int32_t L_36 = __this->___starsOnCurrentLevel_10;
		if (L_36)
		{
			goto IL_0164;
		}
	}
	{
		// PlayerPrefs.SetInt("stars", PlayerPrefs.GetInt("stars") + newStars);
		int32_t L_37;
		L_37 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral03595E559F3E9B49CA8F15739A4A1791320B302B, NULL);
		int32_t L_38 = V_0;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral03595E559F3E9B49CA8F15739A4A1791320B302B, ((int32_t)il2cpp_codegen_add(L_37, L_38)), NULL);
		goto IL_018a;
	}

IL_0164:
	{
		// else if (starsOnCurrentLevel > 0)
		int32_t L_39 = __this->___starsOnCurrentLevel_10;
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_018a;
		}
	}
	{
		// PlayerPrefs.SetInt("stars", PlayerPrefs.GetInt("stars") + (newStars - starsOnCurrentLevel));
		int32_t L_40;
		L_40 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral03595E559F3E9B49CA8F15739A4A1791320B302B, NULL);
		int32_t L_41 = V_0;
		int32_t L_42 = __this->___starsOnCurrentLevel_10;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral03595E559F3E9B49CA8F15739A4A1791320B302B, ((int32_t)il2cpp_codegen_add(L_40, ((int32_t)il2cpp_codegen_subtract(L_41, L_42)))), NULL);
	}

IL_018a:
	{
		// SpawnEnemy.starsActivator = false;
		il2cpp_codegen_runtime_class_init_inline(SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_il2cpp_TypeInfo_var);
		((SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_StaticFields*)il2cpp_codegen_static_fields_for(SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_il2cpp_TypeInfo_var))->___starsActivator_12 = (bool)0;
		// }
		return;
	}
}
// System.Void FinishGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishGame__ctor_m99C50575DCC132932E4CB22A0888DAC21AA4580C (FinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FireballProjectile::SetTargetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireballProjectile_SetTargetPosition_m43F2F20F88FFFE707B68F374053428352D173A8D (FireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	{
		// targetPosition = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		__this->___targetPosition_4 = L_0;
		// }
		return;
	}
}
// System.Void FireballProjectile::SetFallSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireballProjectile_SetFallSpeed_m72BEA34674B1DB8AC27CF3BE314EB23AEEACEB0B (FireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F* __this, float ___speed0, const RuntimeMethod* method) 
{
	{
		// fallSpeed = speed;
		float L_0 = ___speed0;
		__this->___fallSpeed_5 = L_0;
		// }
		return;
	}
}
// System.Void FireballProjectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireballProjectile_Update_m93F6B313ADB328E093249875FD4592B9D8786E39 (FireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position = Vector3.MoveTowards(transform.position, targetPosition, fallSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___targetPosition_4;
		float L_4 = __this->___fallSpeed_5;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_2, L_3, ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_6, NULL);
		// float distanceToTarget = Vector3.Distance(transform.position, targetPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___targetPosition_4;
		float L_10;
		L_10 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_8, L_9, NULL);
		// if (distanceToTarget <= distanceThreshold)
		float L_11 = __this->___distanceThreshold_6;
		if ((!(((float)L_10) <= ((float)L_11))))
		{
			goto IL_0056;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_12, NULL);
	}

IL_0056:
	{
		// Destroy(gameObject, 3f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_13, (3.0f), NULL);
		// }
		return;
	}
}
// System.Void FireballProjectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireballProjectile__ctor_m5CE4A6153803971015996EE903AB1AD6CB836B2B (FireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F* __this, const RuntimeMethod* method) 
{
	{
		// private float distanceThreshold = 0.5f;
		__this->___distanceThreshold_6 = (0.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FireballRain::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireballRain_Update_m47C7059053FFB16BC49F699740B0C7100D3A2CB9 (FireballRain_t24957F23DFDD3AD5FF03BFA0F8F2D983DF50461F* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		// Vector3 mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_1, L_2, NULL);
		V_0 = L_3;
		// mousePosition.z = 0f;
		(&V_0)->___z_4 = (0.0f);
		// CreateFireballRain(mousePosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		FireballRain_CreateFireballRain_mB39C214FE1CEBAE431C63C32B1E746D377C2525E(__this, L_4, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void FireballRain::CreateFireballRain(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireballRain_CreateFireballRain_mB39C214FE1CEBAE431C63C32B1E746D377C2525E (FireballRain_t24957F23DFDD3AD5FF03BFA0F8F2D983DF50461F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F_m396A1FC8C2524FFF0E33D75F59872AF083FE8D88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	FireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F* V_2 = NULL;
	{
		// for (int i = 0; i < 5; i++)
		V_0 = 0;
		goto IL_005b;
	}

IL_0004:
	{
		// Vector3 spawnPosition = new Vector3(Random.Range(-10f, 10f), 15f, 0f);
		float L_0;
		L_0 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-10.0f), (10.0f), NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_0, (15.0f), (0.0f), NULL);
		// GameObject fireball = Instantiate(fireballPrefab, spawnPosition, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___fireballPrefab_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_1, L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// FireballProjectile fireballProjectile = fireball.GetComponent<FireballProjectile>();
		NullCheck(L_4);
		FireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F* L_5;
		L_5 = GameObject_GetComponent_TisFireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F_m396A1FC8C2524FFF0E33D75F59872AF083FE8D88(L_4, GameObject_GetComponent_TisFireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F_m396A1FC8C2524FFF0E33D75F59872AF083FE8D88_RuntimeMethod_var);
		V_2 = L_5;
		// if (fireballProjectile != null)
		FireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F* L_6 = V_2;
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		// fireballProjectile.SetTargetPosition(targetPosition);
		FireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F* L_8 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___targetPosition0;
		NullCheck(L_8);
		FireballProjectile_SetTargetPosition_m43F2F20F88FFFE707B68F374053428352D173A8D_inline(L_8, L_9, NULL);
		// fireballProjectile.SetFallSpeed(fallSpeed);
		FireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F* L_10 = V_2;
		float L_11 = __this->___fallSpeed_5;
		NullCheck(L_10);
		FireballProjectile_SetFallSpeed_m72BEA34674B1DB8AC27CF3BE314EB23AEEACEB0B_inline(L_10, L_11, NULL);
	}

IL_0057:
	{
		// for (int i = 0; i < 5; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_005b:
	{
		// for (int i = 0; i < 5; i++)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FireballRain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireballRain__ctor_m4E540CAAB87B06F552A18AF35E529EBC6D0256DD (FireballRain_t24957F23DFDD3AD5FF03BFA0F8F2D983DF50461F* __this, const RuntimeMethod* method) 
{
	{
		// public float fallSpeed = 10f;      // ????????? ??????? ????
		__this->___fallSpeed_5 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 GameManagerBehavior::get_Gold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManagerBehavior_get_Gold_mFD69B5BA1071990BC27D004C994B4C98B30EAD1F (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, const RuntimeMethod* method) 
{
	{
		// return gold;
		int32_t L_0 = __this->___gold_8;
		return L_0;
	}
}
// System.Void GameManagerBehavior::set_Gold(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehavior_set_Gold_m3F0A27C49975BB19A3AB07DD90324DC53353A9A8 (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDABD7C0A71F4DE385882508CCAD18E725C76DAC3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gold = value;
		int32_t L_0 = ___value0;
		__this->___gold_8 = L_0;
		// goldLabel.GetComponent<Text>().text = "GOLD: " + gold;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___goldLabel_7;
		NullCheck(L_1);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2;
		L_2 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_1, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		int32_t* L_3 = (&__this->___gold_8);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDABD7C0A71F4DE385882508CCAD18E725C76DAC3, L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// }
		return;
	}
}
// System.Int32 GameManagerBehavior::get_Wave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManagerBehavior_get_Wave_mC912E1DB436E7BBE3982F500B6D84B62E5092742 (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, const RuntimeMethod* method) 
{
	{
		// get { return wave; }
		int32_t L_0 = __this->___wave_12;
		return L_0;
	}
}
// System.Void GameManagerBehavior::set_Wave(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehavior_set_Wave_m65F39574DEB1A462733B5E4A08680CCC4F5975EB (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DEF90159D28E5C712F975281C5D8F2C61C27A05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DC73077B102683EB94686A40150716DF0DD48BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// wave = value;
		int32_t L_0 = ___value0;
		__this->___wave_12 = L_0;
		// if (!gameOver)
		bool L_1 = __this->___gameOver_11;
		if (L_1)
		{
			goto IL_0039;
		}
	}
	{
		// for (int i = 0; i < nextWaveLabels.Length; i++)
		V_0 = 0;
		goto IL_002e;
	}

IL_0013:
	{
		// nextWaveLabels[i].GetComponent<Animator>().SetTrigger("nextWave");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___nextWaveLabels_10;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6;
		L_6 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_5, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_6);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_6, _stringLiteral7DC73077B102683EB94686A40150716DF0DD48BC, NULL);
		// for (int i = 0; i < nextWaveLabels.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002e:
	{
		// for (int i = 0; i < nextWaveLabels.Length; i++)
		int32_t L_8 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___nextWaveLabels_10;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0013;
		}
	}

IL_0039:
	{
		// waveLabel.text = "WAVE: " + (wave + 1) + "/" + spEn.waves.Length;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___waveLabel_9;
		int32_t L_11 = __this->___wave_12;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_13 = __this->___spEn_6;
		NullCheck(L_13);
		WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826* L_14 = L_13->___waves_6;
		NullCheck(L_14);
		V_1 = ((int32_t)(((RuntimeArray*)L_14)->max_length));
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_16;
		L_16 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral2DEF90159D28E5C712F975281C5D8F2C61C27A05, L_12, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_15, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_16);
		// }
		return;
	}
}
// System.Int32 GameManagerBehavior::get_Health()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManagerBehavior_get_Health_mA12D37A59981C351E52D782D6E79B716B7CE435D (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, const RuntimeMethod* method) 
{
	{
		// get { return health; }
		int32_t L_0 = __this->___health_15;
		return L_0;
	}
}
// System.Void GameManagerBehavior::set_Health(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehavior_set_Health_m66E78C1FD2786C798A883C8AED40FB1B82F4BBD4 (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1_m12B798662937F3D647AA654E93ACF1A75C8FD7DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91794EC654EBF1BE51D4C0F6AE1A759B7CC183F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (value < health)
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->___health_15;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0018;
		}
	}
	{
		// Camera.main.GetComponent<CameraShake>().Shake();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* L_3;
		L_3 = Component_GetComponent_TisCameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1_m12B798662937F3D647AA654E93ACF1A75C8FD7DC(L_2, Component_GetComponent_TisCameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1_m12B798662937F3D647AA654E93ACF1A75C8FD7DC_RuntimeMethod_var);
		NullCheck(L_3);
		CameraShake_Shake_m3C5686548E91D479B63E95EE0F77FF52F60C01AC(L_3, NULL);
	}

IL_0018:
	{
		// health = value;
		int32_t L_4 = ___value0;
		__this->___health_15 = L_4;
		// healthLabel.text = "HEALTH: " + health;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___healthLabel_13;
		int32_t* L_6 = (&__this->___health_15);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral91794EC654EBF1BE51D4C0F6AE1A759B7CC183F2, L_7, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		// if (health <= 0 && !gameOver)
		int32_t L_9 = __this->___health_15;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		bool L_10 = __this->___gameOver_11;
		if (L_10)
		{
			goto IL_006c;
		}
	}
	{
		// gameOver = true;
		__this->___gameOver_11 = (bool)1;
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// gameFinish.GameOver();
		FinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148* L_11 = __this->___gameFinish_4;
		NullCheck(L_11);
		FinishGame_GameOver_mF374118542ABC285C35F18BBD75D21696CB5B677(L_11, NULL);
	}

IL_006c:
	{
		// for (int i = 0; i < healthIndicator.Length; i++)
		V_0 = 0;
		goto IL_009b;
	}

IL_0070:
	{
		// if (i < Health)
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = GameManagerBehavior_get_Health_mA12D37A59981C351E52D782D6E79B716B7CE435D_inline(__this, NULL);
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0089;
		}
	}
	{
		// healthIndicator[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___healthIndicator_14;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		goto IL_0097;
	}

IL_0089:
	{
		// healthIndicator[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = __this->___healthIndicator_14;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
	}

IL_0097:
	{
		// for (int i = 0; i < healthIndicator.Length; i++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_009b:
	{
		// for (int i = 0; i < healthIndicator.Length; i++)
		int32_t L_23 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_24 = __this->___healthIndicator_14;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0070;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManagerBehavior::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehavior_Start_m20DC00D982B1BF038BDE03757F1665F10386505C (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148_mB6F0418D69460FA29B7225D5101DC71A199CA127_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_m1A99F327494CC26F3E4DC7041615FA9BFD6DCDCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F3F236198CEED0A3BE583DE24D519E4F47B13FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41DB57BFD657651E8C2527CF17F43559E3F16C46);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// gameFinish = GameObject.FindGameObjectWithTag("GameWon").GetComponent<FinishGame>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral41DB57BFD657651E8C2527CF17F43559E3F16C46, NULL);
		NullCheck(L_0);
		FinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148* L_1;
		L_1 = GameObject_GetComponent_TisFinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148_mB6F0418D69460FA29B7225D5101DC71A199CA127(L_0, GameObject_GetComponent_TisFinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148_mB6F0418D69460FA29B7225D5101DC71A199CA127_RuntimeMethod_var);
		__this->___gameFinish_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameFinish_4), (void*)L_1);
		// spEn = GameObject.Find("Road").GetComponent<SpawnEnemy>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral0F3F236198CEED0A3BE583DE24D519E4F47B13FF, NULL);
		NullCheck(L_2);
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_3;
		L_3 = GameObject_GetComponent_TisSpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_m1A99F327494CC26F3E4DC7041615FA9BFD6DCDCB(L_2, GameObject_GetComponent_TisSpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_m1A99F327494CC26F3E4DC7041615FA9BFD6DCDCB_RuntimeMethod_var);
		__this->___spEn_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spEn_6), (void*)L_3);
		// Level = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		((GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_StaticFields*)il2cpp_codegen_static_fields_for(GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_il2cpp_TypeInfo_var))->___Level_5 = L_5;
		// if (SceneManager.GetActiveScene().buildIndex == 1)
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_6;
		L_6 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0061;
		}
	}
	{
		// Gold = 1000;
		GameManagerBehavior_set_Gold_m3F0A27C49975BB19A3AB07DD90324DC53353A9A8(__this, ((int32_t)1000), NULL);
	}

IL_0061:
	{
		// if (SceneManager.GetActiveScene().buildIndex == 2)
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_8;
		L_8 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_007c;
		}
	}
	{
		// Gold = 1500;
		GameManagerBehavior_set_Gold_m3F0A27C49975BB19A3AB07DD90324DC53353A9A8(__this, ((int32_t)1500), NULL);
	}

IL_007c:
	{
		// if (SceneManager.GetActiveScene().buildIndex == 3)
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_10;
		L_10 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_10;
		int32_t L_11;
		L_11 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)3))))
		{
			goto IL_0097;
		}
	}
	{
		// Gold = 2000;
		GameManagerBehavior_set_Gold_m3F0A27C49975BB19A3AB07DD90324DC53353A9A8(__this, ((int32_t)2000), NULL);
	}

IL_0097:
	{
		// if (SceneManager.GetActiveScene().buildIndex == 4)
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_12;
		L_12 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_12;
		int32_t L_13;
		L_13 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)4))))
		{
			goto IL_00b2;
		}
	}
	{
		// Gold = 2500;
		GameManagerBehavior_set_Gold_m3F0A27C49975BB19A3AB07DD90324DC53353A9A8(__this, ((int32_t)2500), NULL);
	}

IL_00b2:
	{
		// if (SceneManager.GetActiveScene().buildIndex == 5)
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_14;
		L_14 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_14;
		int32_t L_15;
		L_15 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)5))))
		{
			goto IL_00cd;
		}
	}
	{
		// Gold = 3000;
		GameManagerBehavior_set_Gold_m3F0A27C49975BB19A3AB07DD90324DC53353A9A8(__this, ((int32_t)3000), NULL);
	}

IL_00cd:
	{
		// Wave = 0;
		GameManagerBehavior_set_Wave_m65F39574DEB1A462733B5E4A08680CCC4F5975EB(__this, 0, NULL);
		// Health = 5;
		GameManagerBehavior_set_Health_m66E78C1FD2786C798A883C8AED40FB1B82F4BBD4(__this, 5, NULL);
		// }
		return;
	}
}
// System.Void GameManagerBehavior::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehavior_Update_mE8C3BB32671B1AC46DE9675FBD71A9C2F6AAC1C1 (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameManagerBehavior::ExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehavior_ExitGame_mD25737DAAE165DFE6A2D90159094EEE15EEF1355 (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void GameManagerBehavior::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehavior_RestartGame_m074FBB7DADD5DDE0B8903DDCD863482845C24A69 (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameManagerBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehavior__ctor_m4847DC7E6F66FC56C6275DA5E7C45E59561A5670 (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HealthBar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_Start_mBFA95FC247C3C4C126B5542259816ABABCDA19B7 (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, const RuntimeMethod* method) 
{
	{
		// originalScale = gameObject.transform.localScale.x;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		__this->___originalScale_6 = L_3;
		// }
		return;
	}
}
// System.Void HealthBar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_Update_mD3754EFEE710D376C4EEAA8D71E90B456C5E9AFD (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tmpScale = gameObject.transform.localScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		V_0 = L_2;
		// tmpScale.x = currentHealth / maxHealth * originalScale;
		float L_3 = __this->___currentHealth_5;
		float L_4 = __this->___maxHealth_4;
		float L_5 = __this->___originalScale_6;
		(&V_0)->___x_2 = ((float)il2cpp_codegen_multiply(((float)(L_3/L_4)), L_5));
		// gameObject.transform.localScale = tmpScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		NullCheck(L_7);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void HealthBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar__ctor_m6874A2796BC8D86E80B24E349500653ACFA80662 (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, const RuntimeMethod* method) 
{
	{
		// public float maxHealth = 100;
		__this->___maxHealth_4 = (100.0f);
		// public float currentHealth = 100;
		__this->___currentHealth_5 = (100.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Start_m58062825AA9A256E42311B4A4833E7425589BBDF (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2817F5F47727C2C1FB87CE382D77F92D2658EE78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5BABE1644AE4925547F413C692E38B1E1CE23DA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD575040BED5E15F408E2E182CAFDF0EF52625E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03595E559F3E9B49CA8F15739A4A1791320B302B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F91DED5DDB2E6C4914F76E496B101F79AF3C3BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D52F5774B3A4F2D746121366BB3C1351E903792);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7799AA0B8918D9D7F12317B98167D542023D726A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9EA00C922B75CD8D61C69D4DD785607CEC4922D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA81982ABE04146AF7BF07A09E71923186F72A6A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	String_t* G_B28_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B28_1 = NULL;
	String_t* G_B27_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B27_1 = NULL;
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// isButtonUsed = new bool[rewardButton.Count];
		List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* L_0 = __this->___rewardButton_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m2817F5F47727C2C1FB87CE382D77F92D2658EE78_inline(L_0, List_1_get_Count_m2817F5F47727C2C1FB87CE382D77F92D2658EE78_RuntimeMethod_var);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___isButtonUsed_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isButtonUsed_16), (void*)L_2);
		// if (!PlayerPrefs.HasKey("lvl"))
		bool L_3;
		L_3 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral5D52F5774B3A4F2D746121366BB3C1351E903792, NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		// PlayerPrefs.SetInt("lvl", 1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral5D52F5774B3A4F2D746121366BB3C1351E903792, 1, NULL);
		goto IL_0049;
	}

IL_0039:
	{
		// currentLvl = PlayerPrefs.GetInt("lvl");
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral5D52F5774B3A4F2D746121366BB3C1351E903792, NULL);
		__this->___currentLvl_6 = L_4;
	}

IL_0049:
	{
		// if (!PlayerPrefs.HasKey("stars"))
		bool L_5;
		L_5 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral03595E559F3E9B49CA8F15739A4A1791320B302B, NULL);
		if (L_5)
		{
			goto IL_0062;
		}
	}
	{
		// PlayerPrefs.SetInt("stars", 0);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral03595E559F3E9B49CA8F15739A4A1791320B302B, 0, NULL);
		goto IL_0072;
	}

IL_0062:
	{
		// starsNumber = PlayerPrefs.GetInt("stars");
		int32_t L_6;
		L_6 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral03595E559F3E9B49CA8F15739A4A1791320B302B, NULL);
		__this->___starsNumber_7 = L_6;
	}

IL_0072:
	{
		// if (!PlayerPrefs.HasKey("rewardButtons"))
		bool L_7;
		L_7 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral0F91DED5DDB2E6C4914F76E496B101F79AF3C3BF, NULL);
		if (L_7)
		{
			goto IL_008b;
		}
	}
	{
		// PlayerPrefs.SetInt("rewardButtons", 0);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral0F91DED5DDB2E6C4914F76E496B101F79AF3C3BF, 0, NULL);
		goto IL_009b;
	}

IL_008b:
	{
		// buttonsNumber = PlayerPrefs.GetInt("rewardButtons");
		int32_t L_8;
		L_8 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral0F91DED5DDB2E6C4914F76E496B101F79AF3C3BF, NULL);
		__this->___buttonsNumber_8 = L_8;
	}

IL_009b:
	{
		// for (int i = 0; i < currentLvl; i++)
		V_0 = 0;
		goto IL_010b;
	}

IL_009f:
	{
		// myList[i].interactable = true;
		List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* L_9 = __this->___myList_10;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11;
		L_11 = List_1_get_Item_m5BABE1644AE4925547F413C692E38B1E1CE23DA3(L_9, L_10, List_1_get_Item_m5BABE1644AE4925547F413C692E38B1E1CE23DA3_RuntimeMethod_var);
		NullCheck(L_11);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_11, (bool)1, NULL);
		// starsPerLevel = PlayerPrefs.GetInt("starsLevel" + (i + 1), 0);
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7799AA0B8918D9D7F12317B98167D542023D726A, L_13, NULL);
		int32_t L_15;
		L_15 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(L_14, 0, NULL);
		__this->___starsPerLevel_12 = L_15;
		// for (int j = 0; j < starsPerLevel; j++)
		V_2 = 0;
		goto IL_00fe;
	}

IL_00d6:
	{
		// myList[i].transform.GetChild(j + 3).gameObject.SetActive(true);
		List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* L_16 = __this->___myList_10;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18;
		L_18 = List_1_get_Item_m5BABE1644AE4925547F413C692E38B1E1CE23DA3(L_16, L_17, List_1_get_Item_m5BABE1644AE4925547F413C692E38B1E1CE23DA3_RuntimeMethod_var);
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		int32_t L_20 = V_2;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_19, ((int32_t)il2cpp_codegen_add(L_20, 3)), NULL);
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)1, NULL);
		// for (int j = 0; j < starsPerLevel; j++)
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00fe:
	{
		// for (int j = 0; j < starsPerLevel; j++)
		int32_t L_24 = V_2;
		int32_t L_25 = __this->___starsPerLevel_12;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_00d6;
		}
	}
	{
		// for (int i = 0; i < currentLvl; i++)
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_010b:
	{
		// for (int i = 0; i < currentLvl; i++)
		int32_t L_27 = V_0;
		int32_t L_28 = __this->___currentLvl_6;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_009f;
		}
	}
	{
		// for (int i = 0; i < buttonsNumber; i++)
		V_3 = 0;
		goto IL_0168;
	}

IL_0118:
	{
		// rewardButton[i].interactable = true;
		List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* L_29 = __this->___rewardButton_11;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_31;
		L_31 = List_1_get_Item_m5BABE1644AE4925547F413C692E38B1E1CE23DA3(L_29, L_30, List_1_get_Item_m5BABE1644AE4925547F413C692E38B1E1CE23DA3_RuntimeMethod_var);
		NullCheck(L_31);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_31, (bool)1, NULL);
		// if (PlayerPrefs.HasKey("rewardButton" + i) && PlayerPrefs.GetInt("rewardButton" + i) == 1)
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_33;
		L_33 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDA81982ABE04146AF7BF07A09E71923186F72A6A, L_32, NULL);
		bool L_34;
		L_34 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(L_33, NULL);
		if (!L_34)
		{
			goto IL_0164;
		}
	}
	{
		String_t* L_35;
		L_35 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_36;
		L_36 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDA81982ABE04146AF7BF07A09E71923186F72A6A, L_35, NULL);
		int32_t L_37;
		L_37 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(L_36, NULL);
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_0164;
		}
	}
	{
		// isButtonUsed[i] = true;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_38 = __this->___isButtonUsed_16;
		int32_t L_39 = V_3;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (bool)1);
	}

IL_0164:
	{
		// for (int i = 0; i < buttonsNumber; i++)
		int32_t L_40 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0168:
	{
		// for (int i = 0; i < buttonsNumber; i++)
		int32_t L_41 = V_3;
		int32_t L_42 = __this->___buttonsNumber_8;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0118;
		}
	}
	{
		// if (PlayerPrefs.HasKey("currentCharacterIndex"))
		bool L_43;
		L_43 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteralA9EA00C922B75CD8D61C69D4DD785607CEC4922D, NULL);
		if (!L_43)
		{
			goto IL_01e2;
		}
	}
	{
		// int currentIndex = PlayerPrefs.GetInt("currentCharacterIndex");
		int32_t L_44;
		L_44 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralA9EA00C922B75CD8D61C69D4DD785607CEC4922D, NULL);
		V_4 = L_44;
		// characterImage.sprite = characterImages[currentIndex];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_45 = __this->___characterImage_13;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_46 = __this->___characterImages_14;
		int32_t L_47 = V_4;
		NullCheck(L_46);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_48;
		L_48 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_46, L_47, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_45);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_45, L_48, NULL);
		// for (int i = 0; i < currentIndex; i++)
		V_5 = 0;
		goto IL_01c4;
	}

IL_01a6:
	{
		// characterTexts[i].gameObject.SetActive(false);
		List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* L_49 = __this->___characterTexts_15;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_51;
		L_51 = List_1_get_Item_mD575040BED5E15F408E2E182CAFDF0EF52625E87(L_49, L_50, List_1_get_Item_mD575040BED5E15F408E2E182CAFDF0EF52625E87_RuntimeMethod_var);
		NullCheck(L_51);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52;
		L_52 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_51, NULL);
		NullCheck(L_52);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_52, (bool)0, NULL);
		// for (int i = 0; i < currentIndex; i++)
		int32_t L_53 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_01c4:
	{
		// for (int i = 0; i < currentIndex; i++)
		int32_t L_54 = V_5;
		int32_t L_55 = V_4;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_01a6;
		}
	}
	{
		// characterTexts[currentIndex].gameObject.SetActive(true);
		List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* L_56 = __this->___characterTexts_15;
		int32_t L_57 = V_4;
		NullCheck(L_56);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_58;
		L_58 = List_1_get_Item_mD575040BED5E15F408E2E182CAFDF0EF52625E87(L_56, L_57, List_1_get_Item_mD575040BED5E15F408E2E182CAFDF0EF52625E87_RuntimeMethod_var);
		NullCheck(L_58);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59;
		L_59 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_58, NULL);
		NullCheck(L_59);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_59, (bool)1, NULL);
	}

IL_01e2:
	{
		// stars.text = starsNumber + "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_60 = __this->___stars_9;
		int32_t* L_61 = (&__this->___starsNumber_7);
		String_t* L_62;
		L_62 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_61, NULL);
		String_t* L_63 = L_62;
		G_B27_0 = L_63;
		G_B27_1 = L_60;
		if (L_63)
		{
			G_B28_0 = L_63;
			G_B28_1 = L_60;
			goto IL_01fc;
		}
	}
	{
		G_B28_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B28_1 = G_B27_1;
	}

IL_01fc:
	{
		NullCheck(G_B28_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B28_1, G_B28_0);
		// }
		return;
	}
}
// System.Void MenuManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Update_mE8D4FFA199E069DAFD4314D5F28EBF5B9644C8A3 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MenuManager::OpenLvlPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_OpenLvlPanel_m9713A8F58E8E0A74D88F6F72162FD5A552AFC64C (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	{
		// lvlPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___lvlPanel_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::CloseLvlPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_CloseLvlPanel_mE1D307A10B591C6A45B0D9199C015B2F9BE1BA91 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral020715EB6BE67BFE4B52690E7B2C708FA9F3032D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC4A89E293860E52E1B82A69770C59F5EA4A2CD4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetTrigger("closeLvl");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_4;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral020715EB6BE67BFE4B52690E7B2C708FA9F3032D, NULL);
		// Invoke("CloseLvlPanelWithTime", 1f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralEC4A89E293860E52E1B82A69770C59F5EA4A2CD4, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void MenuManager::CloseLvlPanelWithTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_CloseLvlPanelWithTime_mC3F2DF6BB813D2C22B835EF756F1C221CA4D14A1 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	{
		// lvlPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___lvlPanel_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::PlayGame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_PlayGame_m47DF56EF95DCEFF925213BC1715EAFE38B628747 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, int32_t ___sceneNum0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneNum);
		int32_t L_0 = ___sceneNum0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::PlayAudio(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_PlayAudio_m54E2B8917FA32E2617829E6AA24FD9A41BFE795B (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<AudioSource>().PlayOneShot(clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___clip0;
		NullCheck(L_0);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::HelpButtonPressed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_HelpButtonPressed_mB1C42458477617C7EA20CB7FB27A41C9A978001A (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, int32_t ___buttonIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD575040BED5E15F408E2E182CAFDF0EF52625E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9EA00C922B75CD8D61C69D4DD785607CEC4922D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA81982ABE04146AF7BF07A09E71923186F72A6A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isButtonUsed[buttonIndex])
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = __this->___isButtonUsed_16;
		int32_t L_1 = ___buttonIndex0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (uint8_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (L_3)
		{
			goto IL_009f;
		}
	}
	{
		// Instantiate(confettiEffect, transform.position, Quaternion.identity);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4 = __this->___confettiEffect_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8;
		L_8 = Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2(L_4, L_6, L_7, Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var);
		// characterImage.sprite = characterImages[buttonIndex + 1];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___characterImage_13;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_10 = __this->___characterImages_14;
		int32_t L_11 = ___buttonIndex0;
		NullCheck(L_10);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12;
		L_12 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_9);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_9, L_12, NULL);
		// characterTexts[buttonIndex].gameObject.SetActive(false);
		List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* L_13 = __this->___characterTexts_15;
		int32_t L_14 = ___buttonIndex0;
		NullCheck(L_13);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15;
		L_15 = List_1_get_Item_mD575040BED5E15F408E2E182CAFDF0EF52625E87(L_13, L_14, List_1_get_Item_mD575040BED5E15F408E2E182CAFDF0EF52625E87_RuntimeMethod_var);
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
		// characterTexts[buttonIndex + 1].gameObject.SetActive(true);
		List_1_tF2BD894424997346355BE3D3F0A728DBF10DCF48* L_17 = __this->___characterTexts_15;
		int32_t L_18 = ___buttonIndex0;
		NullCheck(L_17);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19;
		L_19 = List_1_get_Item_mD575040BED5E15F408E2E182CAFDF0EF52625E87(L_17, ((int32_t)il2cpp_codegen_add(L_18, 1)), List_1_get_Item_mD575040BED5E15F408E2E182CAFDF0EF52625E87_RuntimeMethod_var);
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)1, NULL);
		// isButtonUsed[buttonIndex] = true; // Mark the button as used
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_21 = __this->___isButtonUsed_16;
		int32_t L_22 = ___buttonIndex0;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (bool)1);
		// PlayerPrefs.SetInt("rewardButton" + buttonIndex, 1);
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___buttonIndex0), NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDA81982ABE04146AF7BF07A09E71923186F72A6A, L_23, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(L_24, 1, NULL);
		// PlayerPrefs.SetInt("currentCharacterIndex", buttonIndex + 1);
		int32_t L_25 = ___buttonIndex0;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralA9EA00C922B75CD8D61C69D4DD785607CEC4922D, ((int32_t)il2cpp_codegen_add(L_25, 1)), NULL);
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void MenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager__ctor_m07A22DFDD90E3164393F8BDE06DAEF5AFA786CF2 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoveEnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveEnemy_Start_m7152B9223CF154986E0A18520C56BC6A0E436FDE (MoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lastWaypointSwitchTime = Time.time;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastWaypointSwitchTime_6 = L_0;
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_8), (void*)L_1);
		// gameManager = GameObject.Find("GameManager").GetComponent<GameManagerBehavior>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, NULL);
		NullCheck(L_2);
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_3;
		L_3 = GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB(L_2, GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var);
		__this->___gameManager_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_9), (void*)L_3);
		// }
		return;
	}
}
// System.Void MoveEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveEnemy_Update_mD032B75C08036F39D17C8A3262D4AC8217774B24 (MoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float G_B6_0 = 0.0f;
	float G_B5_0 = 0.0f;
	int32_t G_B7_0 = 0;
	float G_B7_1 = 0.0f;
	{
		// Vector3 startPosition = waypoints[currentWaypoint].transform.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___waypoints_4;
		int32_t L_1 = __this->___currentWaypoint_5;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		V_0 = L_5;
		// Vector3 targetPosition = waypoints[currentWaypoint + 1].transform.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___waypoints_4;
		int32_t L_7 = __this->___currentWaypoint_5;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		V_1 = L_11;
		// float pathLength = Vector2.Distance(startPosition, targetPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_14, NULL);
		float L_16;
		L_16 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_13, L_15, NULL);
		// float totalTimeForPath = pathLength / speed;
		float L_17 = __this->___speed_7;
		V_2 = ((float)(L_16/L_17));
		// float currentTimeOnPath = Time.time - lastWaypointSwitchTime;
		float L_18;
		L_18 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_19 = __this->___lastWaypointSwitchTime_6;
		V_3 = ((float)il2cpp_codegen_subtract(L_18, L_19));
		// gameObject.transform.position = Vector2.Lerp(startPosition, targetPosition, currentTimeOnPath / totalTimeForPath);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_24, NULL);
		float L_26 = V_3;
		float L_27 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline(L_23, L_25, ((float)(L_26/L_27)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_28, NULL);
		NullCheck(L_21);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_21, L_29, NULL);
		// if (gameObject.transform.position.Equals(targetPosition))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		V_7 = L_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_1;
		bool L_34;
		L_34 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&V_7), L_33, NULL);
		if (!L_34)
		{
			goto IL_0103;
		}
	}
	{
		// if (currentWaypoint < waypoints.Length - 2)
		int32_t L_35 = __this->___currentWaypoint_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_36 = __this->___waypoints_4;
		NullCheck(L_36);
		if ((((int32_t)L_35) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_36)->max_length)), 2)))))
		{
			goto IL_00ca;
		}
	}
	{
		// currentWaypoint++;
		int32_t L_37 = __this->___currentWaypoint_5;
		__this->___currentWaypoint_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		// lastWaypointSwitchTime = Time.time;
		float L_38;
		L_38 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastWaypointSwitchTime_6 = L_38;
		goto IL_0103;
	}

IL_00ca:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_39, NULL);
		// AudioSource.PlayClipAtPoint(audioSource.clip, transform.position);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_40 = __this->___audioSource_8;
		NullCheck(L_40);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_41;
		L_41 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_40, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		AudioSource_PlayClipAtPoint_mA78328A70D3F1088B588EF6F811AAD6577F2B7BF(L_41, L_43, NULL);
		// gameManager.Health -= 1;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_44 = __this->___gameManager_9;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_45 = L_44;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = GameManagerBehavior_get_Health_mA12D37A59981C351E52D782D6E79B716B7CE435D_inline(L_45, NULL);
		NullCheck(L_45);
		GameManagerBehavior_set_Health_m66E78C1FD2786C798A883C8AED40FB1B82F4BBD4(L_45, ((int32_t)il2cpp_codegen_subtract(L_46, 1)), NULL);
	}

IL_0103:
	{
		// float startX = waypoints[currentWaypoint].transform.position.x;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_47 = __this->___waypoints_4;
		int32_t L_48 = __this->___currentWaypoint_5;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_50, NULL);
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_51, NULL);
		float L_53 = L_52.___x_2;
		V_4 = L_53;
		// float endX = waypoints[currentWaypoint + 1].transform.position.x;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_54 = __this->___waypoints_4;
		int32_t L_55 = __this->___currentWaypoint_5;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_57, NULL);
		NullCheck(L_58);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_58, NULL);
		float L_60 = L_59.___x_2;
		V_5 = L_60;
		// shouldFlipSprite = startX > endX; // Je?li drugi punkt jest mniejszy od pierwszego, to odbi? lustrzanie
		float L_61 = V_4;
		float L_62 = V_5;
		__this->___shouldFlipSprite_10 = (bool)((((float)L_61) > ((float)L_62))? 1 : 0);
		// float scaleX = Mathf.Abs(gameObject.transform.localScale.x) * (shouldFlipSprite ? -1 : 1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63;
		L_63 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_63, NULL);
		NullCheck(L_64);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_64, NULL);
		float L_66 = L_65.___x_2;
		float L_67;
		L_67 = fabsf(L_66);
		bool L_68 = __this->___shouldFlipSprite_10;
		G_B5_0 = L_67;
		if (L_68)
		{
			G_B6_0 = L_67;
			goto IL_0172;
		}
	}
	{
		G_B7_0 = 1;
		G_B7_1 = G_B5_0;
		goto IL_0173;
	}

IL_0172:
	{
		G_B7_0 = (-1);
		G_B7_1 = G_B6_0;
	}

IL_0173:
	{
		V_6 = ((float)il2cpp_codegen_multiply(G_B7_1, ((float)G_B7_0)));
		// gameObject.transform.localScale = new Vector3(scaleX, gameObject.transform.localScale.y, gameObject.transform.localScale.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69;
		L_69 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_69, NULL);
		float L_71 = V_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72;
		L_72 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_72);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_72, NULL);
		NullCheck(L_73);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_73, NULL);
		float L_75 = L_74.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76;
		L_76 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_76);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_76, NULL);
		NullCheck(L_77);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_77, NULL);
		float L_79 = L_78.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		memset((&L_80), 0, sizeof(L_80));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_80), L_71, L_75, L_79, /*hidden argument*/NULL);
		NullCheck(L_70);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_70, L_80, NULL);
		// }
		return;
	}
}
// System.Single MoveEnemy::DistanceToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MoveEnemy_DistanceToGoal_mC6A9977AF26C46281C79766D2C1FE2327270A86C (MoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float distance = 0;
		V_0 = (0.0f);
		// distance += Vector2.Distance(
		//     gameObject.transform.position,
		//     waypoints[currentWaypoint + 1].transform.position);
		float L_0 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___waypoints_4;
		int32_t L_6 = __this->___currentWaypoint_5;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_10, NULL);
		float L_12;
		L_12 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_4, L_11, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, L_12));
		// for (int i = currentWaypoint + 1; i < waypoints.Length - 1; i++)
		int32_t L_13 = __this->___currentWaypoint_5;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		goto IL_008c;
	}

IL_004c:
	{
		// Vector3 startPosition = waypoints[i].transform.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___waypoints_4;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		V_2 = L_19;
		// Vector3 endPosition = waypoints[i + 1].transform.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = __this->___waypoints_4;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		V_3 = L_25;
		// distance += Vector2.Distance(startPosition, endPosition);
		float L_26 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_29, NULL);
		float L_31;
		L_31 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_28, L_30, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_26, L_31));
		// for (int i = currentWaypoint + 1; i < waypoints.Length - 1; i++)
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_008c:
	{
		// for (int i = currentWaypoint + 1; i < waypoints.Length - 1; i++)
		int32_t L_33 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_34 = __this->___waypoints_4;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_34)->max_length)), 1)))))
		{
			goto IL_004c;
		}
	}
	{
		// return distance;
		float L_35 = V_0;
		return L_35;
	}
}
// System.Void MoveEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveEnemy__ctor_m0CADBE2A3665C16B5918FCCDF931A73632E816BC (MoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 1.0f;
		__this->___speed_7 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ParabolicBulletBehavior::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParabolicBulletBehavior_Start_mEF7F7C4C6FBBDC829F0CD0D47E3C49F652D35BDE (ParabolicBulletBehavior_t85825AAFC020D79B5DC36A40B53731E59159C692* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject gm = GameObject.Find("GameManager");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, NULL);
		V_0 = L_0;
		// gameManager = gm.GetComponent<GameManagerBehavior>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_2;
		L_2 = GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB(L_1, GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var);
		__this->___gameManager_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_7), (void*)L_2);
		// initialPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___initialPosition_8 = L_4;
		// finalPosition = target.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___target_5;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		__this->___finalPosition_10 = L_7;
		// peakPosition = initialPosition + (finalPosition - initialPosition) / 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___initialPosition_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___finalPosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___initialPosition_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_11, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_12, NULL);
		__this->___peakPosition_9 = L_13;
		// peakPosition.y += yOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___peakPosition_9);
		float* L_15 = (&L_14->___y_3);
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		float L_18 = __this->___yOffset_14;
		*((float*)L_16) = (float)((float)il2cpp_codegen_add(L_17, L_18));
		// peakPosition.y = Mathf.Max(peakPosition.y, Mathf.Max(initialPosition.y, finalPosition.y));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&__this->___peakPosition_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&__this->___peakPosition_9);
		float L_21 = L_20->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = (&__this->___initialPosition_8);
		float L_23 = L_22->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&__this->___finalPosition_10);
		float L_25 = L_24->___y_3;
		float L_26;
		L_26 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_23, L_25, NULL);
		float L_27;
		L_27 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_21, L_26, NULL);
		L_19->___y_3 = L_27;
		// startTime = Time.time;
		float L_28;
		L_28 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime_12 = L_28;
		// }
		return;
	}
}
// System.Void ParabolicBulletBehavior::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParabolicBulletBehavior_Update_mE7A1D33BE36A6870A2E3F25E9605DAD1F0DF3737 (ParabolicBulletBehavior_t85825AAFC020D79B5DC36A40B53731E59159C692* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* V_3 = NULL;
	int32_t V_4 = 0;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* V_5 = NULL;
	{
		// float currentTime = Time.time - startTime;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___startTime_12;
		// float t = currentTime / duration;
		float L_2 = __this->___duration_13;
		V_0 = ((float)(((float)il2cpp_codegen_subtract(L_0, L_1))/L_2));
		// Vector3 ballisticPosition = CalculateBalisticInterpolation(initialPosition, peakPosition, finalPosition, t);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___initialPosition_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___peakPosition_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___finalPosition_10;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = ParabolicBulletBehavior_CalculateBalisticInterpolation_m94BF83A6F21DFB775C12236D1FB615FA73E345DA(__this, L_3, L_4, L_5, L_6, NULL);
		V_1 = L_7;
		// transform.position = ballisticPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_9, NULL);
		// float rotationAngle = rotationSpeed * Time.deltaTime;
		float L_10 = __this->___rotationSpeed_16;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_2 = ((float)il2cpp_codegen_multiply(L_10, L_11));
		// transform.Rotate(Vector3.forward, rotationAngle);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_14 = V_2;
		NullCheck(L_12);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_12, L_13, L_14, NULL);
		// if (t >= 1 && !hasReachedTarget)
		float L_15 = V_0;
		if ((!(((float)L_15) >= ((float)(1.0f)))))
		{
			goto IL_00e4;
		}
	}
	{
		bool L_16 = __this->___hasReachedTarget_15;
		if (L_16)
		{
			goto IL_00e4;
		}
	}
	{
		// hasReachedTarget = true;
		__this->___hasReachedTarget_15 = (bool)1;
		// Instantiate(explosionEffect, transform.position, Quaternion.identity);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_17 = __this->___explosionEffect_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_21;
		L_21 = Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2(L_17, L_19, L_20, Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var);
		// Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, 2f, enemyLayer);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_23, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_25 = __this->___enemyLayer_6;
		int32_t L_26;
		L_26 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_27;
		L_27 = Physics2D_OverlapCircleAll_mBEBE14F058D718FA90F44A662C106D9CCDF6B3D9(L_24, (2.0f), L_26, NULL);
		// foreach (Collider2D collider in colliders)
		V_3 = L_27;
		V_4 = 0;
		goto IL_00d2;
	}

IL_00b9:
	{
		// foreach (Collider2D collider in colliders)
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_28 = V_3;
		int32_t L_29 = V_4;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_5 = L_31;
		// DealDamage(collider.gameObject);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_32 = V_5;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
		ParabolicBulletBehavior_DealDamage_m1473C2CC2A7DE08902F165D0DA415B4E16EE3E4E(__this, L_33, NULL);
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d2:
	{
		// foreach (Collider2D collider in colliders)
		int32_t L_35 = V_4;
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_36 = V_3;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_00b9;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_37, NULL);
	}

IL_00e4:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 ParabolicBulletBehavior::CalculateBalisticInterpolation(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ParabolicBulletBehavior_CalculateBalisticInterpolation_m94BF83A6F21DFB775C12236D1FB615FA73E345DA (ParabolicBulletBehavior_t85825AAFC020D79B5DC36A40B53731E59159C692* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___peak1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end2, float ___t3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float u = 1 - t;
		float L_0 = ___t3;
		V_0 = ((float)il2cpp_codegen_subtract((1.0f), L_0));
		// float tt = t * t;
		float L_1 = ___t3;
		float L_2 = ___t3;
		V_1 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// float uu = u * u;
		float L_3 = V_0;
		float L_4 = V_0;
		// Vector3 position = (uu * start) + (2 * u * t * peak) + (tt * end);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___start0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5, NULL);
		float L_7 = V_0;
		float L_8 = ___t3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___peak1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_7)), L_8)), L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_10, NULL);
		float L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___end2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_14, NULL);
		// return position;
		return L_15;
	}
}
// System.Void ParabolicBulletBehavior::DealDamage(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParabolicBulletBehavior_DealDamage_m1473C2CC2A7DE08902F165D0DA415B4E16EE3E4E (ParabolicBulletBehavior_t85825AAFC020D79B5DC36A40B53731E59159C692* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mB2795513E8DA8E97DCC0501E99C42B216D9AB032_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HealthBar healthBar = enemy.GetComponentInChildren<HealthBar>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___enemy0;
		NullCheck(L_0);
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_1;
		L_1 = GameObject_GetComponentInChildren_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mB2795513E8DA8E97DCC0501E99C42B216D9AB032(L_0, GameObject_GetComponentInChildren_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mB2795513E8DA8E97DCC0501E99C42B216D9AB032_RuntimeMethod_var);
		// healthBar.currentHealth -= Mathf.Max(damage, 0);
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_2 = L_1;
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_3 = L_2;
		NullCheck(L_3);
		float L_4 = L_3->___currentHealth_5;
		int32_t L_5 = __this->___damage_4;
		int32_t L_6;
		L_6 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_5, 0, NULL);
		NullCheck(L_3);
		L_3->___currentHealth_5 = ((float)il2cpp_codegen_subtract(L_4, ((float)L_6)));
		// if (healthBar.currentHealth <= 0)
		NullCheck(L_2);
		float L_7 = L_2->___currentHealth_5;
		if ((!(((float)L_7) <= ((float)(0.0f)))))
		{
			goto IL_0061;
		}
	}
	{
		// Destroy(enemy);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___enemy0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
		// AudioSource audioSource = enemy.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___enemy0;
		NullCheck(L_9);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10;
		L_10 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_9, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		// AudioSource.PlayClipAtPoint(audioSource.clip, transform.position);
		NullCheck(L_10);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11;
		L_11 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		AudioSource_PlayClipAtPoint_mA78328A70D3F1088B588EF6F811AAD6577F2B7BF(L_11, L_13, NULL);
		// gameManager.Gold += 50;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_14 = __this->___gameManager_7;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = GameManagerBehavior_get_Gold_mFD69B5BA1071990BC27D004C994B4C98B30EAD1F_inline(L_15, NULL);
		NullCheck(L_15);
		GameManagerBehavior_set_Gold_m3F0A27C49975BB19A3AB07DD90324DC53353A9A8(L_15, ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)50))), NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void ParabolicBulletBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParabolicBulletBehavior__ctor_mD2D7D9536AC119C34BCA1A7DC3A16C6F876C2771 (ParabolicBulletBehavior_t85825AAFC020D79B5DC36A40B53731E59159C692* __this, const RuntimeMethod* method) 
{
	{
		// public float duration = 1.5f;
		__this->___duration_13 = (1.5f);
		// public float yOffset = 3f;
		__this->___yOffset_14 = (3.0f);
		// public float rotationSpeed = 180.0f;
		__this->___rotationSpeed_16 = (180.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlaceTower::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTower_Start_mA18A8C5666EF6F124518C1D583F8EBD1C7FE599B (PlaceTower_t58C0AEA6882BF80CA412C05905B854CAE3B23CB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = GameObject.Find("GameManager").GetComponent<GameManagerBehavior>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, NULL);
		NullCheck(L_0);
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_1;
		L_1 = GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB(L_0, GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var);
		__this->___gameManager_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_11), (void*)L_1);
		// }
		return;
	}
}
// System.Void PlaceTower::SelectTower(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTower_SelectTower_m41EB9B49C8840EA7BBB3FDA57AB492FE6078BCFF (PlaceTower_t58C0AEA6882BF80CA412C05905B854CAE3B23CB9* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (index >= 0 && index < towers.Length)
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = ___index0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___towers_4;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_001d;
		}
	}
	{
		// currentTower = towers[index];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___towers_4;
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->___currentTower_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentTower_5), (void*)L_6);
	}

IL_001d:
	{
		// if (CanPlaceTower())
		bool L_7;
		L_7 = PlaceTower_CanPlaceTower_mD0A7D6D9F682E9A28185EA4E6D5E2CEAC72B7C58(__this, NULL);
		if (!L_7)
		{
			goto IL_0095;
		}
	}
	{
		// tower = (GameObject)Instantiate(currentTower, currentPos, Quaternion.identity); // 4. Postawienie wie?y
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___currentTower_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___currentPos_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_8, L_9, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___tower_9 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tower_9), (void*)L_11);
		// Destroy(towerPlace); // 5. Usuni?cie miejsca, gdzie by?a postawiana wie?a
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___towerPlace_10;
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_12, NULL);
		// AudioSource audioSource = gameObject.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_13);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14;
		L_14 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_13, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		// audioSource.PlayOneShot(audioSource.clip); // 6. Odtworzenie d?wi?ku
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_15 = L_14;
		NullCheck(L_15);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_16;
		L_16 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_15, NULL);
		NullCheck(L_15);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_15, L_16, NULL);
		// gameManager.Gold -= tower.GetComponent<TowerData>().CurrentLevel.cost; // 7. Odejmowanie z?ota za postawienie wie?y
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_17 = __this->___gameManager_11;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_18 = L_17;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GameManagerBehavior_get_Gold_mFD69B5BA1071990BC27D004C994B4C98B30EAD1F_inline(L_18, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___tower_9;
		NullCheck(L_20);
		TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* L_21;
		L_21 = GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC(L_20, GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC_RuntimeMethod_var);
		NullCheck(L_21);
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_22;
		L_22 = TowerData_get_CurrentLevel_mC3A0295899EE1D393C6B12295FB8D5464B244BDC_inline(L_21, NULL);
		NullCheck(L_22);
		int32_t L_23 = L_22->___cost_0;
		NullCheck(L_18);
		GameManagerBehavior_set_Gold_m3F0A27C49975BB19A3AB07DD90324DC53353A9A8(L_18, ((int32_t)il2cpp_codegen_subtract(L_19, L_23)), NULL);
		// towerPanel.SetActive(false); // 8. Ukrycie panelu wyboru wie?y
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___towerPanel_6;
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)0, NULL);
	}

IL_0095:
	{
		// Time.timeScale = 1f; // 9. Wznowienie czasu w grze
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void PlaceTower::UpgradeTower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTower_UpgradeTower_m2675687255BAD7D5C8614AA616992A185330FD37 (PlaceTower_t58C0AEA6882BF80CA412C05905B854CAE3B23CB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanUpgradeTower())
		bool L_0;
		L_0 = PlaceTower_CanUpgradeTower_m39CF2B036FEA069BC3150421BE9BC90217A1C601(__this, NULL);
		if (!L_0)
		{
			goto IL_0055;
		}
	}
	{
		// tower.GetComponent<TowerData>().increaseLevel();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___tower_9;
		NullCheck(L_1);
		TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* L_2;
		L_2 = GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC(L_1, GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC_RuntimeMethod_var);
		NullCheck(L_2);
		TowerData_increaseLevel_mA43A2250930467E855049EB68208E4252D3337BB(L_2, NULL);
		// AudioSource audioSource = gameObject.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_3, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		// audioSource.PlayOneShot(audioSource.clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = L_4;
		NullCheck(L_5);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6;
		L_6 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_5, NULL);
		NullCheck(L_5);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_5, L_6, NULL);
		// gameManager.Gold -= tower.GetComponent<TowerData>().CurrentLevel.cost;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_7 = __this->___gameManager_11;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = GameManagerBehavior_get_Gold_mFD69B5BA1071990BC27D004C994B4C98B30EAD1F_inline(L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___tower_9;
		NullCheck(L_10);
		TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* L_11;
		L_11 = GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC(L_10, GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC_RuntimeMethod_var);
		NullCheck(L_11);
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_12;
		L_12 = TowerData_get_CurrentLevel_mC3A0295899EE1D393C6B12295FB8D5464B244BDC_inline(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13 = L_12->___cost_0;
		NullCheck(L_8);
		GameManagerBehavior_set_Gold_m3F0A27C49975BB19A3AB07DD90324DC53353A9A8(L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_13)), NULL);
	}

IL_0055:
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void PlaceTower::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTower_Update_mAD92D4C3ED923B576F2366D90AFB1553ADA06211 (PlaceTower_t58C0AEA6882BF80CA412C05905B854CAE3B23CB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EE2902E0F68A199224916A67AFDAB77BF77F1B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF929631600D4322F67C7C46C492F852694FF04F);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.GetMouseButtonUp(0))
		bool L_0;
		L_0 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		if (!L_0)
		{
			goto IL_013d;
		}
	}
	{
		// RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_1, L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_6;
		L_6 = Physics2D_Raycast_mBECD869F0788D0B0E665BBA3611362E6D5CD2947(L_4, L_5, NULL);
		V_0 = L_6;
		// initialClickPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_7, L_8, NULL);
		__this->___initialClickPosition_8 = L_9;
		// initialClickPosition.z = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&__this->___initialClickPosition_8);
		L_10->___z_4 = (1.0f);
		// if (hit.collider != null && hit.collider.CompareTag("towerPlace"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_11;
		L_11 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_008f;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_13;
		L_13 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_0), NULL);
		NullCheck(L_13);
		bool L_14;
		L_14 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_13, _stringLiteralCF929631600D4322F67C7C46C492F852694FF04F, NULL);
		if (!L_14)
		{
			goto IL_008f;
		}
	}
	{
		// towerPlace = hit.collider.gameObject;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_15;
		L_15 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_0), NULL);
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		__this->___towerPlace_10 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___towerPlace_10), (void*)L_16);
		// OpenTowerPanel(initialClickPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___initialClickPosition_8;
		PlaceTower_OpenTowerPanel_mD973408FAC4B24898C3FF8AF2CEBD445A68C0EB5(__this, L_17, NULL);
	}

IL_008f:
	{
		// if (hit.collider == null)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_18;
		L_18 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_00b4;
		}
	}
	{
		// towerPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___towerPanel_6;
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)0, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
	}

IL_00b4:
	{
		// if (hit.collider != null && hit.collider.CompareTag("tower"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_21;
		L_21 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_013d;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_23;
		L_23 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_0), NULL);
		NullCheck(L_23);
		bool L_24;
		L_24 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_23, _stringLiteral7EE2902E0F68A199224916A67AFDAB77BF77F1B2, NULL);
		if (!L_24)
		{
			goto IL_013d;
		}
	}
	{
		// tower = hit.collider.gameObject;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_25;
		L_25 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_0), NULL);
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_25, NULL);
		__this->___tower_9 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tower_9), (void*)L_26);
		// if (CanUpgradeTower())
		bool L_27;
		L_27 = PlaceTower_CanUpgradeTower_m39CF2B036FEA069BC3150421BE9BC90217A1C601(__this, NULL);
		if (!L_27)
		{
			goto IL_013d;
		}
	}
	{
		// tower.GetComponent<TowerData>().increaseLevel();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___tower_9;
		NullCheck(L_28);
		TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* L_29;
		L_29 = GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC(L_28, GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC_RuntimeMethod_var);
		NullCheck(L_29);
		TowerData_increaseLevel_mA43A2250930467E855049EB68208E4252D3337BB(L_29, NULL);
		// AudioSource audioSource = gameObject.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_30);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_31;
		L_31 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_30, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		// audioSource.PlayOneShot(audioSource.clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_32 = L_31;
		NullCheck(L_32);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_33;
		L_33 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_32, NULL);
		NullCheck(L_32);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_32, L_33, NULL);
		// gameManager.Gold -= tower.GetComponent<TowerData>().CurrentLevel.cost;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_34 = __this->___gameManager_11;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_35 = L_34;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = GameManagerBehavior_get_Gold_mFD69B5BA1071990BC27D004C994B4C98B30EAD1F_inline(L_35, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___tower_9;
		NullCheck(L_37);
		TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* L_38;
		L_38 = GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC(L_37, GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC_RuntimeMethod_var);
		NullCheck(L_38);
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_39;
		L_39 = TowerData_get_CurrentLevel_mC3A0295899EE1D393C6B12295FB8D5464B244BDC_inline(L_38, NULL);
		NullCheck(L_39);
		int32_t L_40 = L_39->___cost_0;
		NullCheck(L_35);
		GameManagerBehavior_set_Gold_m3F0A27C49975BB19A3AB07DD90324DC53353A9A8(L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_40)), NULL);
	}

IL_013d:
	{
		// }
		return;
	}
}
// System.Boolean PlaceTower::CanPlaceTower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaceTower_CanPlaceTower_mD0A7D6D9F682E9A28185EA4E6D5E2CEAC72B7C58 (PlaceTower_t58C0AEA6882BF80CA412C05905B854CAE3B23CB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int cost = currentTower.GetComponent<TowerData>().levels[0].cost;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___currentTower_5;
		NullCheck(L_0);
		TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* L_1;
		L_1 = GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC(L_0, GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC_RuntimeMethod_var);
		NullCheck(L_1);
		List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC* L_2 = L_1->___levels_4;
		NullCheck(L_2);
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_3;
		L_3 = List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110(L_2, 0, List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_4 = L_3->___cost_0;
		V_0 = L_4;
		// return gameManager.Gold >= cost;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_5 = __this->___gameManager_11;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = GameManagerBehavior_get_Gold_mFD69B5BA1071990BC27D004C994B4C98B30EAD1F_inline(L_5, NULL);
		int32_t L_7 = V_0;
		return (bool)((((int32_t)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean PlaceTower::CanUpgradeTower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaceTower_CanUpgradeTower_m39CF2B036FEA069BC3150421BE9BC90217A1C601 (PlaceTower_t58C0AEA6882BF80CA412C05905B854CAE3B23CB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* V_0 = NULL;
	{
		// if (tower != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___tower_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// TowerData towerData = tower.GetComponent<TowerData>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___tower_9;
		NullCheck(L_2);
		TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* L_3;
		L_3 = GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC(L_2, GameObject_GetComponent_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m6F338139620012AFA8B02DEC4E01D90640107EBC_RuntimeMethod_var);
		// TowerLevel nextLevel = towerData.getNextLevel();
		NullCheck(L_3);
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_4;
		L_4 = TowerData_getNextLevel_m4E504AF282D1C6A3A9732A7408B4F9CC3B4FCB83(L_3, NULL);
		V_0 = L_4;
		// if (nextLevel != null)
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// return gameManager.Gold >= nextLevel.cost;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_6 = __this->___gameManager_11;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = GameManagerBehavior_get_Gold_mFD69B5BA1071990BC27D004C994B4C98B30EAD1F_inline(L_6, NULL);
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___cost_0;
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0039:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void PlaceTower::OpenTowerPanel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTower_OpenTowerPanel_mD973408FAC4B24898C3FF8AF2CEBD445A68C0EB5 (PlaceTower_t58C0AEA6882BF80CA412C05905B854CAE3B23CB9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// towerPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___towerPanel_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Vector3 screenPosition = Camera.main.WorldToScreenPoint(position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___position0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_1, L_2, NULL);
		// towerPanel.transform.position = new Vector2(position.x, position.y + 1.5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___towerPanel_6;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___position0;
		float L_7 = L_6.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___position0;
		float L_9 = L_8.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_7, ((float)il2cpp_codegen_add(L_9, (1.5f))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_10, NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_11, NULL);
		// currentPos = initialClickPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___initialClickPosition_8;
		__this->___currentPos_12 = L_12;
		// }
		return;
	}
}
// System.Void PlaceTower::OpenUpgradePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTower_OpenUpgradePanel_mD0147A045EC44AC19578101C522C854D0BA931B3 (PlaceTower_t58C0AEA6882BF80CA412C05905B854CAE3B23CB9* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// upgradePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___upgradePanel_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PlaceTower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTower__ctor_m85E0D9C80A94A13A02CC93078A82D29D2B36B673 (PlaceTower_t58C0AEA6882BF80CA412C05905B854CAE3B23CB9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PoisonCloud::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoisonCloud_Start_mFB6F0A57441A63B7AEF0843C5D633F8A5C9233B9 (PoisonCloud_t5496DF6F4C1B8EA2C5B112DE08FD91C5C887F593* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject gm = GameObject.Find("GameManager");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, NULL);
		V_0 = L_0;
		// gameManager = gm.GetComponent<GameManagerBehavior>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_2;
		L_2 = GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB(L_1, GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var);
		__this->___gameManager_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_5), (void*)L_2);
		// }
		return;
	}
}
// System.Void PoisonCloud::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoisonCloud_Update_mA2349353DD109E983DE2AB81464756F8710C91F7 (PoisonCloud_t5496DF6F4C1B8EA2C5B112DE08FD91C5C887F593* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PoisonCloud::OnParticleCollision(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoisonCloud_OnParticleCollision_mE5A23AC9CF9A0AD21744FEEE111BE8319981E7AD (PoisonCloud_t5496DF6F4C1B8EA2C5B112DE08FD91C5C887F593* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mB2795513E8DA8E97DCC0501E99C42B216D9AB032_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* V_0 = NULL;
	{
		// if (other.gameObject.CompareTag("Enemy"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_2)
		{
			goto IL_0067;
		}
	}
	{
		// HealthBar healthBar = other.GetComponentInChildren<HealthBar>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___other0;
		NullCheck(L_3);
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_4;
		L_4 = GameObject_GetComponentInChildren_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mB2795513E8DA8E97DCC0501E99C42B216D9AB032(L_3, GameObject_GetComponentInChildren_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mB2795513E8DA8E97DCC0501E99C42B216D9AB032_RuntimeMethod_var);
		V_0 = L_4;
		// if (healthBar != null)
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0067;
		}
	}
	{
		// healthBar.currentHealth -= damagePerSecond * Time.deltaTime;
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_7 = V_0;
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_8 = L_7;
		NullCheck(L_8);
		float L_9 = L_8->___currentHealth_5;
		float L_10 = __this->___damagePerSecond_4;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_8);
		L_8->___currentHealth_5 = ((float)il2cpp_codegen_subtract(L_9, ((float)il2cpp_codegen_multiply(L_10, L_11))));
		// if (healthBar.currentHealth <= 0)
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_12 = V_0;
		NullCheck(L_12);
		float L_13 = L_12->___currentHealth_5;
		if ((!(((float)L_13) <= ((float)(0.0f)))))
		{
			goto IL_0067;
		}
	}
	{
		// Destroy(other.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = ___other0;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_15, NULL);
		// gameManager.Gold += 50;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_16 = __this->___gameManager_5;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = GameManagerBehavior_get_Gold_mFD69B5BA1071990BC27D004C994B4C98B30EAD1F_inline(L_17, NULL);
		NullCheck(L_17);
		GameManagerBehavior_set_Gold_m3F0A27C49975BB19A3AB07DD90324DC53353A9A8(L_17, ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)50))), NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void PoisonCloud::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoisonCloud__ctor_mBD0205088C48A495F36B824557837F717DA83B52 (PoisonCloud_t5496DF6F4C1B8EA2C5B112DE08FD91C5C887F593* __this, const RuntimeMethod* method) 
{
	{
		// public float damagePerSecond = 3f;
		__this->___damagePerSecond_4 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ShootEnemies::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootEnemies_Start_mF16BBF71531528440505BE749C0267801CBD6FA9 (ShootEnemies_t51B741E3935F3181E1F5E4DC0411528CBE4EE3F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m4361E6F25B03C5E6257CDB6912E2E3853CA63588_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemiesInRange = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___enemiesInRange_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemiesInRange_4), (void*)L_0);
		// lastShotTime = Time.time;
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastShotTime_5 = L_1;
		// towerData = gameObject.GetComponentInChildren<TowerData>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* L_3;
		L_3 = GameObject_GetComponentInChildren_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m4361E6F25B03C5E6257CDB6912E2E3853CA63588(L_2, GameObject_GetComponentInChildren_TisTowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A_m4361E6F25B03C5E6257CDB6912E2E3853CA63588_RuntimeMethod_var);
		__this->___towerData_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___towerData_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void ShootEnemies::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootEnemies_Update_mBF2E0569FDD70334B84DE1D9C436A5F1C68BF246 (ShootEnemies_t51B741E3935F3181E1F5E4DC0411528CBE4EE3F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83_mB2F68909C5D110F92A23832BF6D8BAF5682C7985_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	float V_1 = 0.0f;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	float V_4 = 0.0f;
	{
		// GameObject target = null;
		V_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// float minimalEnemyDistance = float.MaxValue;
		V_1 = ((std::numeric_limits<float>::max)());
		// foreach (GameObject enemy in enemiesInRange)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___enemiesInRange_4;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_2 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_2), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0035_1;
			}

IL_0016_1:
			{
				// foreach (GameObject enemy in enemiesInRange)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_2), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_3 = L_2;
				// float distanceToGoal = enemy.GetComponent<MoveEnemy>().DistanceToGoal();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_3;
				NullCheck(L_3);
				MoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83* L_4;
				L_4 = GameObject_GetComponent_TisMoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83_mB2F68909C5D110F92A23832BF6D8BAF5682C7985(L_3, GameObject_GetComponent_TisMoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83_mB2F68909C5D110F92A23832BF6D8BAF5682C7985_RuntimeMethod_var);
				NullCheck(L_4);
				float L_5;
				L_5 = MoveEnemy_DistanceToGoal_mC6A9977AF26C46281C79766D2C1FE2327270A86C(L_4, NULL);
				V_4 = L_5;
				// if (distanceToGoal < minimalEnemyDistance)
				float L_6 = V_4;
				float L_7 = V_1;
				if ((!(((float)L_6) < ((float)L_7))))
				{
					goto IL_0035_1;
				}
			}
			{
				// target = enemy;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_3;
				V_0 = L_8;
				// minimalEnemyDistance = distanceToGoal;
				float L_9 = V_4;
				V_1 = L_9;
			}

IL_0035_1:
			{
				// foreach (GameObject enemy in enemiesInRange)
				bool L_10;
				L_10 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_2), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_004e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// if (target != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_008c;
		}
	}
	{
		// if (Time.time - lastShotTime > towerData.CurrentLevel.fireRate)
		float L_13;
		L_13 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_14 = __this->___lastShotTime_5;
		TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* L_15 = __this->___towerData_6;
		NullCheck(L_15);
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_16;
		L_16 = TowerData_get_CurrentLevel_mC3A0295899EE1D393C6B12295FB8D5464B244BDC_inline(L_15, NULL);
		NullCheck(L_16);
		float L_17 = L_16->___fireRate_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_13, L_14))) > ((float)L_17))))
		{
			goto IL_008c;
		}
	}
	{
		// Shoot(target.GetComponent<Collider2D>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_0;
		NullCheck(L_18);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_19;
		L_19 = GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4(L_18, GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
		ShootEnemies_Shoot_m8F04557803B5EA174F1C5A5F4EAAFFCB7317230C(__this, L_19, NULL);
		// lastShotTime = Time.time;
		float L_20;
		L_20 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastShotTime_5 = L_20;
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void ShootEnemies::OnEnemyDestroy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootEnemies_OnEnemyDestroy_m27AEC693F5CF908C4F616CB983CB49578652FCEE (ShootEnemies_t51B741E3935F3181E1F5E4DC0411528CBE4EE3F3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemiesInRange.Remove(enemy);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___enemiesInRange_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___enemy0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_0, L_1, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ShootEnemies::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootEnemies_OnTriggerEnter2D_m22C634D245BCD52525BEB1914F30FF3A64C5514E (ShootEnemies_t51B741E3935F3181E1F5E4DC0411528CBE4EE3F3* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12_mEF66DEE26354783212AE6BE0D8A15472CFBAEB38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShootEnemies_OnEnemyDestroy_m27AEC693F5CF908C4F616CB983CB49578652FCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Equals("Enemy"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		// enemiesInRange.Add(other.gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___enemiesInRange_4;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5 = ___other0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_4);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_4, L_6, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// EnemyDestructionDelegate del =
		//     other.gameObject.GetComponent<EnemyDestructionDelegate>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7 = ___other0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		EnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12* L_9;
		L_9 = GameObject_GetComponent_TisEnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12_mEF66DEE26354783212AE6BE0D8A15472CFBAEB38(L_8, GameObject_GetComponent_TisEnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12_mEF66DEE26354783212AE6BE0D8A15472CFBAEB38_RuntimeMethod_var);
		// del.enemyDelegate += OnEnemyDestroy;
		EnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12* L_10 = L_9;
		NullCheck(L_10);
		EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* L_11 = L_10->___enemyDelegate_4;
		EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* L_12 = (EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC*)il2cpp_codegen_object_new(EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		EnemyDelegate__ctor_mB95CFC1639AE91CF08191E05536F7E64C42B0FE9(L_12, __this, (intptr_t)((void*)ShootEnemies_OnEnemyDestroy_m27AEC693F5CF908C4F616CB983CB49578652FCEE_RuntimeMethod_var), NULL);
		Delegate_t* L_13;
		L_13 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_11, L_12, NULL);
		NullCheck(L_10);
		L_10->___enemyDelegate_4 = ((EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC*)CastclassSealed((RuntimeObject*)L_13, EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___enemyDelegate_4), (void*)((EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC*)CastclassSealed((RuntimeObject*)L_13, EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC_il2cpp_TypeInfo_var)));
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void ShootEnemies::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootEnemies_OnTriggerExit2D_m873DA2DA2A549DB198B413BF3B8BFEC56C3D1761 (ShootEnemies_t51B741E3935F3181E1F5E4DC0411528CBE4EE3F3* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12_mEF66DEE26354783212AE6BE0D8A15472CFBAEB38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShootEnemies_OnEnemyDestroy_m27AEC693F5CF908C4F616CB983CB49578652FCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Equals("Enemy"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		// enemiesInRange.Remove(other.gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___enemiesInRange_4;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5 = ___other0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_4, L_6, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// EnemyDestructionDelegate del =
		//     other.gameObject.GetComponent<EnemyDestructionDelegate>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_8 = ___other0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		EnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12* L_10;
		L_10 = GameObject_GetComponent_TisEnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12_mEF66DEE26354783212AE6BE0D8A15472CFBAEB38(L_9, GameObject_GetComponent_TisEnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12_mEF66DEE26354783212AE6BE0D8A15472CFBAEB38_RuntimeMethod_var);
		// del.enemyDelegate -= OnEnemyDestroy;
		EnemyDestructionDelegate_t9312AB67ED896F032E1DC9D615F49666E9331F12* L_11 = L_10;
		NullCheck(L_11);
		EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* L_12 = L_11->___enemyDelegate_4;
		EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* L_13 = (EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC*)il2cpp_codegen_object_new(EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EnemyDelegate__ctor_mB95CFC1639AE91CF08191E05536F7E64C42B0FE9(L_13, __this, (intptr_t)((void*)ShootEnemies_OnEnemyDestroy_m27AEC693F5CF908C4F616CB983CB49578652FCEE_RuntimeMethod_var), NULL);
		Delegate_t* L_14;
		L_14 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_12, L_13, NULL);
		NullCheck(L_11);
		L_11->___enemyDelegate_4 = ((EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC*)CastclassSealed((RuntimeObject*)L_14, EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___enemyDelegate_4), (void*)((EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC*)CastclassSealed((RuntimeObject*)L_14, EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC_il2cpp_TypeInfo_var)));
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void ShootEnemies::Shoot(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootEnemies_Shoot_m8F04557803B5EA174F1C5A5F4EAAFFCB7317230C (ShootEnemies_t51B741E3935F3181E1F5E4DC0411528CBE4EE3F3* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAntisepticBulletBehavior_tA0AE2521C2886160D5F14973F33BF901D96D621B_m8685C68ABC03D0085F2CB74DEA6AC06204F32691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBulletBehavior_tEC4D11034CA6DFDA43C051633187834DA7459E87_m1DE568D8D440247A6B0519F6ACAE5A3DCADBCE0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParabolicBulletBehavior_t85825AAFC020D79B5DC36A40B53731E59159C692_m454AD27DA33C729D0CD9023D1B3C2D56369636BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// GameObject bulletPrefab = towerData.CurrentLevel.bullet;
		TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* L_0 = __this->___towerData_6;
		NullCheck(L_0);
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_1;
		L_1 = TowerData_get_CurrentLevel_mC3A0295899EE1D393C6B12295FB8D5464B244BDC_inline(L_0, NULL);
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1->___bullet_2;
		V_0 = L_2;
		// Vector3 startPosition = gameObject.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		V_1 = L_5;
		// Vector3 targetPosition = target.transform.position;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6 = ___target0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		V_2 = L_8;
		// startPosition.z = bulletPrefab.transform.position.z;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___z_4;
		(&V_1)->___z_4 = L_12;
		// targetPosition.z = bulletPrefab.transform.position.z;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = L_15.___z_4;
		(&V_2)->___z_4 = L_16;
		// GameObject newBullet = Instantiate(bulletPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_17, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_3 = L_18;
		// newBullet.transform.position = startPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_3;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		NullCheck(L_20);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_21, NULL);
		// BulletType bulletType = towerData.CurrentLevel.bulletType;
		TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* L_22 = __this->___towerData_6;
		NullCheck(L_22);
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_23;
		L_23 = TowerData_get_CurrentLevel_mC3A0295899EE1D393C6B12295FB8D5464B244BDC_inline(L_22, NULL);
		NullCheck(L_23);
		int32_t L_24 = L_23->___bulletType_5;
		V_4 = L_24;
		// if (bulletType == BulletType.Parabolic)
		int32_t L_25 = V_4;
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_0099;
		}
	}
	{
		// ParabolicBulletBehavior bulletComp = newBullet.GetComponent<ParabolicBulletBehavior>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_3;
		NullCheck(L_26);
		ParabolicBulletBehavior_t85825AAFC020D79B5DC36A40B53731E59159C692* L_27;
		L_27 = GameObject_GetComponent_TisParabolicBulletBehavior_t85825AAFC020D79B5DC36A40B53731E59159C692_m454AD27DA33C729D0CD9023D1B3C2D56369636BC(L_26, GameObject_GetComponent_TisParabolicBulletBehavior_t85825AAFC020D79B5DC36A40B53731E59159C692_m454AD27DA33C729D0CD9023D1B3C2D56369636BC_RuntimeMethod_var);
		// bulletComp.target = target.gameObject;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_28 = ___target0;
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_28, NULL);
		NullCheck(L_27);
		L_27->___target_5 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___target_5), (void*)L_29);
		goto IL_00c6;
	}

IL_0099:
	{
		// else if (bulletType == BulletType.Straight)
		int32_t L_30 = V_4;
		if (L_30)
		{
			goto IL_00b0;
		}
	}
	{
		// BulletBehavior bulletComp = newBullet.GetComponent<BulletBehavior>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_3;
		NullCheck(L_31);
		BulletBehavior_tEC4D11034CA6DFDA43C051633187834DA7459E87* L_32;
		L_32 = GameObject_GetComponent_TisBulletBehavior_tEC4D11034CA6DFDA43C051633187834DA7459E87_m1DE568D8D440247A6B0519F6ACAE5A3DCADBCE0B(L_31, GameObject_GetComponent_TisBulletBehavior_tEC4D11034CA6DFDA43C051633187834DA7459E87_m1DE568D8D440247A6B0519F6ACAE5A3DCADBCE0B_RuntimeMethod_var);
		// bulletComp.target = target.gameObject;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_33 = ___target0;
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_33, NULL);
		NullCheck(L_32);
		L_32->___target_6 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->___target_6), (void*)L_34);
		goto IL_00c6;
	}

IL_00b0:
	{
		// else if (bulletType == BulletType.Antiseptic)
		int32_t L_35 = V_4;
		if ((!(((uint32_t)L_35) == ((uint32_t)2))))
		{
			goto IL_00c6;
		}
	}
	{
		// AntisepticBulletBehavior bulletComp = newBullet.GetComponent<AntisepticBulletBehavior>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = V_3;
		NullCheck(L_36);
		AntisepticBulletBehavior_tA0AE2521C2886160D5F14973F33BF901D96D621B* L_37;
		L_37 = GameObject_GetComponent_TisAntisepticBulletBehavior_tA0AE2521C2886160D5F14973F33BF901D96D621B_m8685C68ABC03D0085F2CB74DEA6AC06204F32691(L_36, GameObject_GetComponent_TisAntisepticBulletBehavior_tA0AE2521C2886160D5F14973F33BF901D96D621B_m8685C68ABC03D0085F2CB74DEA6AC06204F32691_RuntimeMethod_var);
		// bulletComp.target = target.gameObject;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_38 = ___target0;
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_38, NULL);
		NullCheck(L_37);
		L_37->___target_5 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->___target_5), (void*)L_39);
	}

IL_00c6:
	{
		// AudioSource audioSource = gameObject.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_40);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_41;
		L_41 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_40, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		// audioSource.PlayOneShot(audioSource.clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_42 = L_41;
		NullCheck(L_42);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_43;
		L_43 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_42, NULL);
		NullCheck(L_42);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_42, L_43, NULL);
		// }
		return;
	}
}
// System.Void ShootEnemies::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootEnemies__ctor_m5447AF7ED8144BB5239513393ECEFAFEEA649272 (ShootEnemies_t51B741E3935F3181E1F5E4DC0411528CBE4EE3F3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wave::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wave__ctor_mD780DB1BF5BFEB7766ED0947973B342FD62E5399 (Wave_t46A8424F3F35C64800660289794914462618636D* __this, const RuntimeMethod* method) 
{
	{
		// public float spawnInterval = 2;
		__this->___spawnInterval_1 = (2.0f);
		// public int maxEnemies = 20;
		__this->___maxEnemies_2 = ((int32_t)20);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Lane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane__ctor_m429A1FF8F33D7D8793D9D568809A85C48888BE2B (Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpawnEnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_Start_mC7726203354D875E8F7DBF2A39480C6F312BF75B (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148_mB6F0418D69460FA29B7225D5101DC71A199CA127_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41DB57BFD657651E8C2527CF17F43559E3F16C46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lastSpawnTime = Time.time;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastSpawnTime_10 = L_0;
		// gameManager = GameObject.Find("GameManager").GetComponent<GameManagerBehavior>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, NULL);
		NullCheck(L_1);
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_2;
		L_2 = GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB(L_1, GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var);
		__this->___gameManager_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_8), (void*)L_2);
		// gameFinish = GameObject.FindGameObjectWithTag("GameWon").GetComponent<FinishGame>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral41DB57BFD657651E8C2527CF17F43559E3F16C46, NULL);
		NullCheck(L_3);
		FinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148* L_4;
		L_4 = GameObject_GetComponent_TisFinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148_mB6F0418D69460FA29B7225D5101DC71A199CA127(L_3, GameObject_GetComponent_TisFinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148_mB6F0418D69460FA29B7225D5101DC71A199CA127_RuntimeMethod_var);
		__this->___gameFinish_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameFinish_9), (void*)L_4);
		// starsActivator = true;
		il2cpp_codegen_runtime_class_init_inline(SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_il2cpp_TypeInfo_var);
		((SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_StaticFields*)il2cpp_codegen_static_fields_for(SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_il2cpp_TypeInfo_var))->___starsActivator_12 = (bool)1;
		// }
		return;
	}
}
// System.Void SpawnEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_Update_m8C17771352CA43D1CE958B5B5D5A151C0BBBB35F (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83_mB2F68909C5D110F92A23832BF6D8BAF5682C7985_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// randLane = Random.Range(0, lanes.Length);
		LaneU5BU5D_t43A2D2019861082B5B52D9AC21C015F59FCD730C* L_0 = __this->___lanes_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		__this->___randLane_4 = L_1;
		// int currentWave = gameManager.Wave;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_2 = __this->___gameManager_8;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = GameManagerBehavior_get_Wave_mC912E1DB436E7BBE3982F500B6D84B62E5092742_inline(L_2, NULL);
		V_0 = L_3;
		// if (currentWave < waves.Length)
		int32_t L_4 = V_0;
		WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826* L_5 = __this->___waves_6;
		NullCheck(L_5);
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0146;
		}
	}
	{
		// float timeInterval = Time.time - lastSpawnTime;
		float L_6;
		L_6 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_7 = __this->___lastSpawnTime_10;
		V_1 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		// float spawnInterval = waves[currentWave].spawnInterval;
		WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826* L_8 = __this->___waves_6;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Wave_t46A8424F3F35C64800660289794914462618636D* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		float L_12 = L_11->___spawnInterval_1;
		V_2 = L_12;
		// if (((enemiesSpawned == 0 && timeInterval > timeBetweenWaves) || timeInterval > spawnInterval) && enemiesSpawned < waves[currentWave].maxEnemies)
		int32_t L_13 = __this->___enemiesSpawned_11;
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		float L_14 = V_1;
		int32_t L_15 = __this->___timeBetweenWaves_7;
		if ((((float)L_14) > ((float)((float)L_15))))
		{
			goto IL_005f;
		}
	}

IL_005b:
	{
		float L_16 = V_1;
		float L_17 = V_2;
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_00d3;
		}
	}

IL_005f:
	{
		int32_t L_18 = __this->___enemiesSpawned_11;
		WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826* L_19 = __this->___waves_6;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Wave_t46A8424F3F35C64800660289794914462618636D* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		int32_t L_23 = L_22->___maxEnemies_2;
		if ((((int32_t)L_18) >= ((int32_t)L_23)))
		{
			goto IL_00d3;
		}
	}
	{
		// randEnemy = Random.Range(0, waves[currentWave].enemyPrefab.Length);
		WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826* L_24 = __this->___waves_6;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Wave_t46A8424F3F35C64800660289794914462618636D* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_28 = L_27->___enemyPrefab_0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_28)->max_length)), NULL);
		V_3 = L_29;
		// lastSpawnTime = Time.time;
		float L_30;
		L_30 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastSpawnTime_10 = L_30;
		// GameObject newEnemy = (GameObject)Instantiate(waves[currentWave].enemyPrefab[randEnemy]);
		WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826* L_31 = __this->___waves_6;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Wave_t46A8424F3F35C64800660289794914462618636D* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35 = L_34->___enemyPrefab_0;
		int32_t L_36 = V_3;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_38, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// newEnemy.GetComponent<MoveEnemy>().waypoints = lanes[randLane].waypoints;
		NullCheck(L_39);
		MoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83* L_40;
		L_40 = GameObject_GetComponent_TisMoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83_mB2F68909C5D110F92A23832BF6D8BAF5682C7985(L_39, GameObject_GetComponent_TisMoveEnemy_t44C61D7879D24948D020EFC1DF9FFC06C14BED83_mB2F68909C5D110F92A23832BF6D8BAF5682C7985_RuntimeMethod_var);
		LaneU5BU5D_t43A2D2019861082B5B52D9AC21C015F59FCD730C* L_41 = __this->___lanes_5;
		int32_t L_42 = __this->___randLane_4;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_45 = L_44->___waypoints_0;
		NullCheck(L_40);
		L_40->___waypoints_4 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&L_40->___waypoints_4), (void*)L_45);
		// enemiesSpawned++;
		int32_t L_46 = __this->___enemiesSpawned_11;
		__this->___enemiesSpawned_11 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00d3:
	{
		// if (enemiesSpawned == waves[currentWave].maxEnemies &&
		//     GameObject.FindGameObjectWithTag("Enemy") == null)
		int32_t L_47 = __this->___enemiesSpawned_11;
		WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826* L_48 = __this->___waves_6;
		int32_t L_49 = V_0;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		Wave_t46A8424F3F35C64800660289794914462618636D* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		int32_t L_52 = L_51->___maxEnemies_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_52))))
		{
			goto IL_0164;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
		L_53 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_53, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_54)
		{
			goto IL_0164;
		}
	}
	{
		// gameManager.Wave++;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_55 = __this->___gameManager_8;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_56 = L_55;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = GameManagerBehavior_get_Wave_mC912E1DB436E7BBE3982F500B6D84B62E5092742_inline(L_56, NULL);
		V_4 = L_57;
		int32_t L_58 = V_4;
		NullCheck(L_56);
		GameManagerBehavior_set_Wave_m65F39574DEB1A462733B5E4A08680CCC4F5975EB(L_56, ((int32_t)il2cpp_codegen_add(L_58, 1)), NULL);
		// gameManager.Gold = Mathf.RoundToInt(gameManager.Gold * 1.1f);
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_59 = __this->___gameManager_8;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_60 = __this->___gameManager_8;
		NullCheck(L_60);
		int32_t L_61;
		L_61 = GameManagerBehavior_get_Gold_mFD69B5BA1071990BC27D004C994B4C98B30EAD1F_inline(L_60, NULL);
		int32_t L_62;
		L_62 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_61), (1.10000002f))), NULL);
		NullCheck(L_59);
		GameManagerBehavior_set_Gold_m3F0A27C49975BB19A3AB07DD90324DC53353A9A8(L_59, L_62, NULL);
		// enemiesSpawned = 0;
		__this->___enemiesSpawned_11 = 0;
		// lastSpawnTime = Time.time;
		float L_63;
		L_63 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastSpawnTime_10 = L_63;
		return;
	}

IL_0146:
	{
		// gameManager.gameOver = true;
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_64 = __this->___gameManager_8;
		NullCheck(L_64);
		L_64->___gameOver_11 = (bool)1;
		// if (starsActivator == true)
		il2cpp_codegen_runtime_class_init_inline(SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_il2cpp_TypeInfo_var);
		bool L_65 = ((SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_StaticFields*)il2cpp_codegen_static_fields_for(SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_il2cpp_TypeInfo_var))->___starsActivator_12;
		if (!L_65)
		{
			goto IL_0164;
		}
	}
	{
		// gameFinish.GameWin();
		FinishGame_tE3158E8CDDB3F46EB5157657251054F9BB3CB148* L_66 = __this->___gameFinish_9;
		NullCheck(L_66);
		FinishGame_GameWin_mD8E5975F6902390400FACE0EF0B5D5E061F878E7(L_66, NULL);
	}

IL_0164:
	{
		// }
		return;
	}
}
// System.Void SpawnEnemy::NextLvl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_NextLvl_m68CCCB2B6F6A3E61379E4BE41258C4EB16238620 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		// }
		return;
	}
}
// System.Void SpawnEnemy::RestartLvl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_RestartLvl_m338FEF9A03ACD22EC515A84D431476D5B636B0DA (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_1, NULL);
		// }
		return;
	}
}
// System.Void SpawnEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy__ctor_mF4ACB2F1D347568304B1A0FE83882EB99DCECA57 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	{
		// public int timeBetweenWaves = 5;
		__this->___timeBetweenWaves_7 = 5;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void SpawnEnemy::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy__cctor_m6FC5127B8AC92BD059E7BDE223B6DDCBB3D05D7D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool starsActivator = true;
		((SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_StaticFields*)il2cpp_codegen_static_fields_for(SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_il2cpp_TypeInfo_var))->___starsActivator_12 = (bool)1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TowerLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerLevel__ctor_m91BA9DB3E084C2359918FE30A6F1F27FF48CCA83 (TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// TowerLevel TowerData::get_CurrentLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* TowerData_get_CurrentLevel_mC3A0295899EE1D393C6B12295FB8D5464B244BDC (TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* __this, const RuntimeMethod* method) 
{
	{
		// return currentLevel;
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_0 = __this->___currentLevel_5;
		return L_0;
	}
}
// System.Void TowerData::set_CurrentLevel(TowerLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerData_set_CurrentLevel_mDBDDC3C27C29CCD0B251918189C567E96C020A4D (TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* __this, TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m34C861893499AF0C207BD19751D5BB615F413FCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBA15CED669D74CEECD6B1A5FE3392ADBC5AE0FAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		// currentLevel = value;
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_0 = ___value0;
		__this->___currentLevel_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentLevel_5), (void*)L_0);
		// int currentLevelIndex = levels.IndexOf(currentLevel);
		List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC* L_1 = __this->___levels_4;
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_2 = __this->___currentLevel_5;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_m34C861893499AF0C207BD19751D5BB615F413FCC(L_1, L_2, List_1_IndexOf_m34C861893499AF0C207BD19751D5BB615F413FCC_RuntimeMethod_var);
		V_0 = L_3;
		// GameObject levelVisualization = levels[currentLevelIndex].visualization;
		List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC* L_4 = __this->___levels_4;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_6;
		L_6 = List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110(L_4, L_5, List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110_RuntimeMethod_var);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___visualization_1;
		V_1 = L_7;
		// for (int i = 0; i < levels.Count; i++)
		V_3 = 0;
		goto IL_0070;
	}

IL_002f:
	{
		// if (levelVisualization != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_006c;
		}
	}
	{
		// if (i == currentLevelIndex)
		int32_t L_10 = V_3;
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0055;
		}
	}
	{
		// levels[i].visualization.SetActive(true);
		List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC* L_12 = __this->___levels_4;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_14;
		L_14 = List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110(L_12, L_13, List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110_RuntimeMethod_var);
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14->___visualization_1;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
		goto IL_006c;
	}

IL_0055:
	{
		// levels[i].visualization.SetActive(false);
		List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC* L_16 = __this->___levels_4;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_18;
		L_18 = List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110(L_16, L_17, List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110_RuntimeMethod_var);
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = L_18->___visualization_1;
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
	}

IL_006c:
	{
		// for (int i = 0; i < levels.Count; i++)
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0070:
	{
		// for (int i = 0; i < levels.Count; i++)
		int32_t L_21 = V_3;
		List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC* L_22 = __this->___levels_4;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_mBA15CED669D74CEECD6B1A5FE3392ADBC5AE0FAC_inline(L_22, List_1_get_Count_mBA15CED669D74CEECD6B1A5FE3392ADBC5AE0FAC_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_002f;
		}
	}
	{
		// float colliderRadius = levels[currentLevelIndex].colliderRadius;
		List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC* L_24 = __this->___levels_4;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_26;
		L_26 = List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110(L_24, L_25, List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110_RuntimeMethod_var);
		NullCheck(L_26);
		float L_27 = L_26->___colliderRadius_4;
		V_2 = L_27;
		// if (towerCollider != null)
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_28 = __this->___towerCollider_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_29)
		{
			goto IL_00aa;
		}
	}
	{
		// towerCollider.radius = colliderRadius;
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_30 = __this->___towerCollider_6;
		float L_31 = V_2;
		NullCheck(L_30);
		CircleCollider2D_set_radius_m468ECCD06634C48E6837A55B9E8D056BBF15FC52(L_30, L_31, NULL);
	}

IL_00aa:
	{
		// }
		return;
	}
}
// System.Void TowerData::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerData_Start_m574EC39C84CA6B4F676D891B187E50375609EEEB (TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_m1E30A71856359306D1F0E9E59CE75B25210FE16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	{
		// towerCollider = GetComponent<CircleCollider2D>();
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_0;
		L_0 = Component_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_m1E30A71856359306D1F0E9E59CE75B25210FE16F(__this, Component_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_m1E30A71856359306D1F0E9E59CE75B25210FE16F_RuntimeMethod_var);
		__this->___towerCollider_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___towerCollider_6), (void*)L_0);
		// gameManager = GameObject.Find("GameManager").GetComponent<GameManagerBehavior>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, NULL);
		NullCheck(L_1);
		GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* L_2;
		L_2 = GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB(L_1, GameObject_GetComponent_TisGameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87_mF52BDF629A40B2335754267EC17C64165FAA85FB_RuntimeMethod_var);
		__this->___gameManager_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_7), (void*)L_2);
		// }
		return;
	}
}
// System.Void TowerData::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerData_Update_mE674C48C049F8EEB299D3C2F68F97338A9146AE8 (TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TowerData::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerData_OnEnable_mF8786539EEBBD99FF91723EC6906BCF270B3F63A (TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentLevel = levels[0];
		List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC* L_0 = __this->___levels_4;
		NullCheck(L_0);
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_1;
		L_1 = List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110(L_0, 0, List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110_RuntimeMethod_var);
		TowerData_set_CurrentLevel_mDBDDC3C27C29CCD0B251918189C567E96C020A4D(__this, L_1, NULL);
		// }
		return;
	}
}
// TowerLevel TowerData::getNextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* TowerData_getNextLevel_m4E504AF282D1C6A3A9732A7408B4F9CC3B4FCB83 (TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m34C861893499AF0C207BD19751D5BB615F413FCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBA15CED669D74CEECD6B1A5FE3392ADBC5AE0FAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int currentLevelIndex = levels.IndexOf(currentLevel);
		List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC* L_0 = __this->___levels_4;
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_1 = __this->___currentLevel_5;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_IndexOf_m34C861893499AF0C207BD19751D5BB615F413FCC(L_0, L_1, List_1_IndexOf_m34C861893499AF0C207BD19751D5BB615F413FCC_RuntimeMethod_var);
		V_0 = L_2;
		// int maxLevelIndex = levels.Count - 1;
		List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC* L_3 = __this->___levels_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mBA15CED669D74CEECD6B1A5FE3392ADBC5AE0FAC_inline(L_3, List_1_get_Count_mBA15CED669D74CEECD6B1A5FE3392ADBC5AE0FAC_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		// if (currentLevelIndex < maxLevelIndex)
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0033;
		}
	}
	{
		// return levels[currentLevelIndex + 1];
		List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC* L_7 = __this->___levels_4;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_9;
		L_9 = List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110(L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110_RuntimeMethod_var);
		return L_9;
	}

IL_0033:
	{
		// return null;
		return (TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6*)NULL;
	}
}
// System.Void TowerData::increaseLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerData_increaseLevel_mA43A2250930467E855049EB68208E4252D3337BB (TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m34C861893499AF0C207BD19751D5BB615F413FCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBA15CED669D74CEECD6B1A5FE3392ADBC5AE0FAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int currentLevelIndex = levels.IndexOf(currentLevel);
		List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC* L_0 = __this->___levels_4;
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_1 = __this->___currentLevel_5;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_IndexOf_m34C861893499AF0C207BD19751D5BB615F413FCC(L_0, L_1, List_1_IndexOf_m34C861893499AF0C207BD19751D5BB615F413FCC_RuntimeMethod_var);
		V_0 = L_2;
		// if (currentLevelIndex < levels.Count - 1)
		int32_t L_3 = V_0;
		List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC* L_4 = __this->___levels_4;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mBA15CED669D74CEECD6B1A5FE3392ADBC5AE0FAC_inline(L_4, List_1_get_Count_mBA15CED669D74CEECD6B1A5FE3392ADBC5AE0FAC_RuntimeMethod_var);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, 1)))))
		{
			goto IL_0036;
		}
	}
	{
		// CurrentLevel = levels[currentLevelIndex + 1];
		List_1_t25B110FE8301FF4139D3EFC18C979D53A9781DCC* L_6 = __this->___levels_4;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_8;
		L_8 = List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110(L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), List_1_get_Item_m8603E4226B08C451AC02ADBC520D5447D3587110_RuntimeMethod_var);
		TowerData_set_CurrentLevel_mDBDDC3C27C29CCD0B251918189C567E96C020A4D(__this, L_8, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void TowerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerData__ctor_m3BC2D4FBB4BC1B9E47E286E1B186DE967451C188 (TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tutorial::DisplayTutorial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_DisplayTutorial_mD67FFD454EDB1004DDF8620065BD49B83DE0B52C (Tutorial_t4FF9FF1EF6F8E11558052253ECFBB53EC9AA41D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BD0434F3A1A5821B2DA49A6ACE7CA39D5C61B98);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<Animator>().SetTrigger("displayTutorial");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_1);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteral4BD0434F3A1A5821B2DA49A6ACE7CA39D5C61B98, NULL);
		// }
		return;
	}
}
// System.Void Tutorial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial__ctor_mCD41B6145B228A85EAAD173736F4BFD758605728 (Tutorial_t4FF9FF1EF6F8E11558052253ECFBB53EC9AA41D4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManagerBehavior_get_Gold_mFD69B5BA1071990BC27D004C994B4C98B30EAD1F_inline (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, const RuntimeMethod* method) 
{
	{
		// return gold;
		int32_t L_0 = __this->___gold_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemyDelegate_Invoke_mD65864DAA5968C1ED062D71A38F3BF3C67003E6B_inline (EnemyDelegate_tB4F66CDF0B01579DB652CD6E89C6BE66FF9028CC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___enemy0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManagerBehavior_get_Health_mA12D37A59981C351E52D782D6E79B716B7CE435D_inline (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, const RuntimeMethod* method) 
{
	{
		// get { return health; }
		int32_t L_0 = __this->___health_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireballProjectile_SetTargetPosition_m43F2F20F88FFFE707B68F374053428352D173A8D_inline (FireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	{
		// targetPosition = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		__this->___targetPosition_4 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireballProjectile_SetFallSpeed_m72BEA34674B1DB8AC27CF3BE314EB23AEEACEB0B_inline (FireballProjectile_tBE4A9F99336610135A1B05716551B2DEB8B8715F* __this, float ___speed0, const RuntimeMethod* method) 
{
	{
		// fallSpeed = speed;
		float L_0 = ___speed0;
		__this->___fallSpeed_5 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___b1;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___a0;
		float L_7 = L_6.___x_0;
		float L_8 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___a0;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___b1;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___a0;
		float L_14 = L_13.___y_1;
		float L_15 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___other0;
		float L_2 = L_1.___x_2;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___other0;
		float L_5 = L_4.___y_3;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___other0;
		float L_8 = L_7.___z_4;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* TowerData_get_CurrentLevel_mC3A0295899EE1D393C6B12295FB8D5464B244BDC_inline (TowerData_t8DEB713CBEC791D37F8A85B296F9F6A31B6D451A* __this, const RuntimeMethod* method) 
{
	{
		// return currentLevel;
		TowerLevel_t4F86D33E6FFC67958F93A94A649D5A8242412DD6* L_0 = __this->___currentLevel_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManagerBehavior_get_Wave_mC912E1DB436E7BBE3982F500B6D84B62E5092742_inline (GameManagerBehavior_t67DFDC0B9E327F17A3737939828EDFD4AB11DC87* __this, const RuntimeMethod* method) 
{
	{
		// get { return wave; }
		int32_t L_0 = __this->___wave_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
