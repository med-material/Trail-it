#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t1655937503;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t3970197989;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.String
struct String_t;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Exception
struct Exception_t;
// System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
struct IComparer_1_t1154564993;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t1016795788;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.Double[]
struct DoubleU5BU5D_t3413330114;
// System.Array/Swapper
struct Swapper_t2822380397;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t3832428784;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// System.Collections.Generic.IComparer`1<UnityEngine.Vector2>
struct IComparer_1_t3410495002;
// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t1931160702;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// System.Collections.Generic.IComparer`1<UnityEngine.Vector3>
struct IComparer_1_t681611647;
// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t3497244643;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t934056436;
// System.Collections.Generic.IComparer`1<UnityEngine.Vector4>
struct IComparer_1_t278327120;
// System.Comparison`1<UnityEngine.Vector4>
struct Comparison_1_t3093960116;
// AxisLabel[]
struct AxisLabelU5BU5D_t731696159;
// DataManager/Field[]
struct FieldU5BU5D_t3435812899;
// DataManager/Hit[]
struct HitU5BU5D_t845046505;
// DataManager/LevelData[]
struct LevelDataU5BU5D_t921917969;
// DataManager/SessionData[]
struct SessionDataU5BU5D_t1570286347;
// ResultsScreen/ResultType[]
struct ResultTypeU5BU5D_t2236143732;
// System.DateTime[]
struct DateTimeU5BU5D_t1184652292;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t3710464795;
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t1465843424;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// UnityEngine.BeforeRenderHelper/OrderBlock[]
struct OrderBlockU5BU5D_t2389202590;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t1128832444;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1690781147;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t928762055;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.DictionaryEntry[]
struct DictionaryEntryU5BU5D_t4217117203;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t2448278169;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2652375035;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct Transform_1_t3690794193;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
struct Transform_1_t2404408695;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct Dictionary_2_t1301971883;
// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t833711493;
// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>[]
struct KeyValuePair_2U5BU5D_t1037808359;
// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>
struct Transform_1_t1409379905;
// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Object>
struct Transform_1_t789842019;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1444694249;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>
struct Transform_1_t1235930838;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t4262618511;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t171748081;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct Transform_1_t686041993;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3384741;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t1750446691;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1954543557;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Transform_1_t1027527961;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
struct Transform_1_t1577416806;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t4209139644;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t118269214;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transform_1_t3615381325;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
struct Transform_1_t4165270170;
// UnityEngine.Component
struct Component_t1923634451;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>
struct IList_1_t875036337;
// UnityEngine.Object
struct Object_t631007953;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t3395709193;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t4072576034;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t3628304265;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t496136383;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t2436138090;
// System.Collections.Generic.IList`1<DataManager/Field>
struct IList_1_t1652316653;
// System.Random
struct Random_t108471755;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t600458651;
// System.Collections.Generic.IList`1<UnityEngine.Vector2>
struct IList_1_t3971549306;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// System.Converter`2<System.Object,System.Object>
struct Converter_2_t2442480487;
// System.Collections.Generic.IEnumerable`1<System.DateTime>
struct IEnumerable_1_t2718382674;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.IEnumerable`1<DataManager/SessionData>
struct IEnumerable_1_t4119697559;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t377119663;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1930798642;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t1764640198;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t1120718408;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t777473367;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t3995630009;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t2867327688;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t64614563;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t3256600500;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t3111972472;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_t3587542510;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t1977848392;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t972960537;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t3277009892;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t2311673543;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t2886331738;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_t2950825503;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t955952873;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t3373214253;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t3912835512;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t1475332338;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t2658898854;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t231414508;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// UnityEngine.Component[]
struct ComponentU5BU5D_t3294940482;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t243502644;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t2103185493;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t892470886;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t3936143868;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t3239458680;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t2245623724;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t2947482199;
// UnityEngine.Camera
struct Camera_t4157153871;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2750080073;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// UnityEngine.Collider
struct Collider_t1773347010;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// System.String[]
struct StringU5BU5D_t1281789340;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t829358056;
// System.IO.Stream
struct Stream_t1273022909;
// System.Collections.Generic.List`1<DataManager/Hit>[0...,0...]
struct List_1U5B0___U2C0___U5D_t4040630876;
// System.Collections.Generic.List`1<DataManager/Hit>
struct List_1_t773213486;
// System.Single[0...,0...]
struct SingleU5B0___U2C0___U5D_t1444911252;
// System.Int32[0...,0...]
struct Int32U5B0___U2C0___U5D_t385246373;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t881764471;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t1438173104;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t4040729994;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t2924027637;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t3520241082;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t3270282352;

extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Array_Sort_TisUILineInfo_t4195266810_m3737783007_RuntimeMethod_var;
extern String_t* _stringLiteral193474836;
extern String_t* _stringLiteral1751657069;
extern const uint32_t Array_Sort_TisUILineInfo_t4195266810_m3737783007_MetadataUsageId;
extern const RuntimeMethod* Array_Sort_TisUILineInfo_t4195266810_m986157765_RuntimeMethod_var;
extern String_t* _stringLiteral4007973390;
extern const uint32_t Array_Sort_TisUILineInfo_t4195266810_m986157765_MetadataUsageId;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Array_Sort_TisUIVertex_t4057497605_TisUIVertex_t4057497605_m4243853890_RuntimeMethod_var;
extern String_t* _stringLiteral465436770;
extern String_t* _stringLiteral797640427;
extern String_t* _stringLiteral1212500642;
extern String_t* _stringLiteral3166607389;
extern const uint32_t Array_Sort_TisUIVertex_t4057497605_TisUIVertex_t4057497605_m4243853890_MetadataUsageId;
extern const RuntimeMethod* Array_Sort_TisUIVertex_t4057497605_m3996333845_RuntimeMethod_var;
extern const uint32_t Array_Sort_TisUIVertex_t4057497605_m3996333845_MetadataUsageId;
extern const RuntimeMethod* Array_Sort_TisUIVertex_t4057497605_m448896013_RuntimeMethod_var;
extern const uint32_t Array_Sort_TisUIVertex_t4057497605_m448896013_MetadataUsageId;
extern const RuntimeMethod* Array_Sort_TisVector2_t2156229523_TisVector2_t2156229523_m3828039457_RuntimeMethod_var;
extern const uint32_t Array_Sort_TisVector2_t2156229523_TisVector2_t2156229523_m3828039457_MetadataUsageId;
extern const RuntimeMethod* Array_Sort_TisVector2_t2156229523_m3889577259_RuntimeMethod_var;
extern const uint32_t Array_Sort_TisVector2_t2156229523_m3889577259_MetadataUsageId;
extern const RuntimeMethod* Array_Sort_TisVector2_t2156229523_m1227407869_RuntimeMethod_var;
extern const uint32_t Array_Sort_TisVector2_t2156229523_m1227407869_MetadataUsageId;
extern const RuntimeMethod* Array_Sort_TisVector3_t3722313464_TisVector3_t3722313464_m3923377973_RuntimeMethod_var;
extern const uint32_t Array_Sort_TisVector3_t3722313464_TisVector3_t3722313464_m3923377973_MetadataUsageId;
extern const RuntimeMethod* Array_Sort_TisVector3_t3722313464_m1915176437_RuntimeMethod_var;
extern const uint32_t Array_Sort_TisVector3_t3722313464_m1915176437_MetadataUsageId;
extern const RuntimeMethod* Array_Sort_TisVector3_t3722313464_m1030213405_RuntimeMethod_var;
extern const uint32_t Array_Sort_TisVector3_t3722313464_m1030213405_MetadataUsageId;
extern const RuntimeMethod* Array_Sort_TisVector4_t3319028937_TisVector4_t3319028937_m4254533673_RuntimeMethod_var;
extern const uint32_t Array_Sort_TisVector4_t3319028937_TisVector4_t3319028937_m4254533673_MetadataUsageId;
extern const RuntimeMethod* Array_Sort_TisVector4_t3319028937_m3668240704_RuntimeMethod_var;
extern const uint32_t Array_Sort_TisVector4_t3319028937_m3668240704_MetadataUsageId;
extern const RuntimeMethod* Array_Sort_TisVector4_t3319028937_m2797285308_RuntimeMethod_var;
extern const uint32_t Array_Sort_TisVector4_t3319028937_m2797285308_MetadataUsageId;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t71524366_m795489160_RuntimeMethod_var;
extern String_t* _stringLiteral1492106003;
extern const uint32_t Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t71524366_m795489160_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m3233307772_RuntimeMethod_var;
extern const uint32_t Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m3233307772_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3699644050_m4159638770_RuntimeMethod_var;
extern const uint32_t Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3699644050_m4159638770_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m1855083806_RuntimeMethod_var;
extern const uint32_t Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m1855083806_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Do_ICollectionCopyTo_TisBoolean_t97287965_m3600337818_RuntimeMethod_var;
extern const uint32_t Dictionary_2_Do_ICollectionCopyTo_TisBoolean_t97287965_m3600337818_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3842366416_m1399105608_RuntimeMethod_var;
extern const uint32_t Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3842366416_m1399105608_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2401056908_m1169495264_RuntimeMethod_var;
extern const uint32_t Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2401056908_m1169495264_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Do_ICollectionCopyTo_TisInt32_t2950945753_m1134171305_RuntimeMethod_var;
extern const uint32_t Dictionary_2_Do_ICollectionCopyTo_TisInt32_t2950945753_m1134171305_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2530217319_m1439704807_RuntimeMethod_var;
extern const uint32_t Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2530217319_m1439704807_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m3942192587_RuntimeMethod_var;
extern const uint32_t Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m3942192587_MetadataUsageId;
extern const uint32_t Component_GetComponents_TisRuntimeObject_m2416546752_MetadataUsageId;
extern const RuntimeMethod* BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t97287965_m3019671566_RuntimeMethod_var;
extern String_t* _stringLiteral273595399;
extern const uint32_t BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t97287965_m3019671566_MetadataUsageId;
extern const RuntimeMethod* BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t2950945753_m635860201_RuntimeMethod_var;
extern const uint32_t BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t2950945753_m635860201_MetadataUsageId;
extern const RuntimeMethod* BaseInvokableCall_ThrowOnInvalidArg_TisRuntimeObject_m2266633109_RuntimeMethod_var;
extern const uint32_t BaseInvokableCall_ThrowOnInvalidArg_TisRuntimeObject_m2266633109_MetadataUsageId;
extern const RuntimeMethod* BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t1397266774_m3110598205_RuntimeMethod_var;
extern const uint32_t BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t1397266774_m3110598205_MetadataUsageId;
extern const RuntimeMethod* BaseInvokableCall_ThrowOnInvalidArg_TisColor_t2555686324_m2926971203_RuntimeMethod_var;
extern const uint32_t BaseInvokableCall_ThrowOnInvalidArg_TisColor_t2555686324_m2926971203_MetadataUsageId;
extern const RuntimeMethod* BaseInvokableCall_ThrowOnInvalidArg_TisVector2_t2156229523_m2162634795_RuntimeMethod_var;
extern const uint32_t BaseInvokableCall_ThrowOnInvalidArg_TisVector2_t2156229523_m2162634795_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* ListPool_1_t2953223642_il2cpp_TypeInfo_var;
extern RuntimeClass* ExecuteEvents_t3484638744_il2cpp_TypeInfo_var;
extern RuntimeClass* IEventSystemHandler_t3354683850_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t1887868788_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ExecuteEvents_GetEventList_TisRuntimeObject_m3803188029_RuntimeMethod_var;
extern const RuntimeMethod* ListPool_1_Get_m2062177143_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponents_TisComponent_t1923634451_m1648148377_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3306164819_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1294235957_RuntimeMethod_var;
extern const RuntimeMethod* ListPool_1_Release_m3920209327_RuntimeMethod_var;
extern String_t* _stringLiteral1261396091;
extern String_t* _stringLiteral2001578372;
extern const uint32_t ExecuteEvents_GetEventList_TisRuntimeObject_m3803188029_MetadataUsageId;
extern const uint32_t GameObject_GetComponents_TisRuntimeObject_m1246177135_MetadataUsageId;
extern const uint32_t GameObject_GetComponentsInChildren_TisRuntimeObject_m467804091_MetadataUsageId;
extern const uint32_t GameObject_GetComponentsInParent_TisRuntimeObject_m947018401_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2415889112;
extern const uint32_t Mesh_SetUvsImpl_TisRuntimeObject_m2275316106_MetadataUsageId;
extern const uint32_t Mesh_SetUvsImpl_TisVector2_t2156229523_m3009194955_MetadataUsageId;
extern RuntimeClass* Random_t108471755_il2cpp_TypeInfo_var;
extern const uint32_t Utils_Shuffle_TisField_t4131964166_m769604636_MetadataUsageId;
extern const uint32_t Utils_Shuffle_TisRuntimeObject_m1619218395_MetadataUsageId;
extern const uint32_t Utils_Shuffle_TisVector2_t2156229523_m1177834145_MetadataUsageId;
extern const uint32_t Activator_CreateInstance_TisRuntimeObject_m729575857_MetadataUsageId;
extern const RuntimeMethod* Array_Find_TisRuntimeObject_m2705709394_RuntimeMethod_var;
extern String_t* _stringLiteral461028519;
extern const uint32_t Array_Find_TisRuntimeObject_m2705709394_MetadataUsageId;
extern const RuntimeMethod* Array_FindLast_TisRuntimeObject_m1088586648_RuntimeMethod_var;
extern const uint32_t Array_FindLast_TisRuntimeObject_m1088586648_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisAxisLabel_t4128127930_m165134455_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisAxisLabel_t4128127930_m165134455_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisField_t4131964166_m2844063530_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisField_t4131964166_m2844063530_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisHit_t3596106040_m2544346727_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisHit_t3596106040_m2544346727_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisLevelData_t439927600_m2513005712_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisLevelData_t439927600_m2513005712_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisSessionData_t844877374_m634226541_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisSessionData_t844877374_m634226541_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisTableRange_t3332867892_m1483480711_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisTableRange_t3332867892_m1483480711_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisClientCertificateType_t1004704908_m2297379651_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisClientCertificateType_t1004704908_m2297379651_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisResultType_t2923018313_m1028891236_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisResultType_t2923018313_m1028891236_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisBoolean_t97287965_m1407010309_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisBoolean_t97287965_m1407010309_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisByte_t1134296376_m3566214066_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisByte_t1134296376_m3566214066_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisChar_t3634460470_m324132692_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisChar_t3634460470_m324132692_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisDictionaryEntry_t3123975638_m479537688_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisDictionaryEntry_t3123975638_m479537688_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisLink_t3209266973_m1574224299_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisLink_t3209266973_m1574224299_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisKeyValuePair_2_t71524366_m252172060_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t71524366_m252172060_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisKeyValuePair_2_t3699644050_m2010289903_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t3699644050_m2010289903_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisKeyValuePair_2_t3842366416_m3937535230_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t3842366416_m3937535230_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisKeyValuePair_2_t2401056908_m3647027688_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t2401056908_m3647027688_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisKeyValuePair_2_t2530217319_m2886833132_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t2530217319_m2886833132_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisLink_t544317964_m1669566993_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisLink_t544317964_m1669566993_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisSlot_t3975888750_m905303097_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisSlot_t3975888750_m905303097_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisSlot_t384495010_m2861978404_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisSlot_t384495010_m2861978404_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisDateTime_t3738529785_m623181444_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisDateTime_t3738529785_m623181444_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisDecimal_t2948259380_m3511003792_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisDecimal_t2948259380_m3511003792_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisDouble_t594665363_m850827605_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisDouble_t594665363_m850827605_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisInt16_t2552820387_m76930473_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisInt16_t2552820387_m76930473_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisInt32_t2950945753_m714868479_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisInt32_t2950945753_m714868479_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisInt64_t3736567304_m3562990826_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisInt64_t3736567304_m3562990826_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisIntPtr_t_m784054003_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisIntPtr_t_m784054003_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisRuntimeObject_m3347010206_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisRuntimeObject_m3347010206_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t287865710_m2282658220_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t287865710_m2282658220_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_t2723150157_m2639399822_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_t2723150157_m2639399822_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisLabelData_t360167391_m1054702781_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisLabelData_t360167391_m1054702781_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisLabelFixup_t858502054_m3276643490_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisLabelFixup_t858502054_m3276643490_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisILTokenInfo_t2325775114_m3110830457_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisILTokenInfo_t2325775114_m3110830457_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisMonoResource_t4103430009_m2937222811_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisMonoResource_t4103430009_m2937222811_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisMonoWin32Resource_t1904229483_m513901999_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisMonoWin32Resource_t1904229483_m513901999_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisRefEmitPermissionSet_t484390987_m1505876205_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisRefEmitPermissionSet_t484390987_m1505876205_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisParameterModifier_t1461694466_m29553316_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisParameterModifier_t1461694466_m29553316_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisResourceCacheItem_t51292791_m1306056717_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisResourceCacheItem_t51292791_m1306056717_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisResourceInfo_t2872965302_m3865610257_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisResourceInfo_t2872965302_m3865610257_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisTypeTag_t3541821701_m4208350471_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisTypeTag_t3541821701_m4208350471_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisSByte_t1669577662_m2349608172_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisSByte_t1669577662_m2349608172_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisX509ChainStatus_t133602714_m2237651489_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisX509ChainStatus_t133602714_m2237651489_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisSingle_t1397266774_m1672589487_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisSingle_t1397266774_m1672589487_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisMark_t3471605523_m3397473850_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisMark_t3471605523_m3397473850_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisTimeSpan_t881159249_m1885583191_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisTimeSpan_t881159249_m1885583191_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisUInt16_t2177724958_m3601205466_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisUInt16_t2177724958_m3601205466_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisUInt32_t2560061978_m1955195035_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisUInt32_t2560061978_m1955195035_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisUInt64_t4134040092_m129291315_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisUInt64_t4134040092_m129291315_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisUriScheme_t722425697_m2816273040_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisUriScheme_t722425697_m2816273040_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisOrderBlock_t1585977831_m2406385050_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisOrderBlock_t1585977831_m2406385050_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisColor_t2555686324_m2985413820_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisColor_t2555686324_m2985413820_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisColor32_t2600501292_m1325986122_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisColor32_t2600501292_m1325986122_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisContactPoint2D_t3390240644_m1483798952_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisContactPoint2D_t3390240644_m1483798952_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisRaycastResult_t3360306849_m1872700081_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisRaycastResult_t3360306849_m1872700081_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisKeyframe_t4206410242_m27698365_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisKeyframe_t4206410242_m27698365_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisPlayableBinding_t354260709_m3837494573_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisPlayableBinding_t354260709_m3837494573_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisRaycastHit_t1056001966_m3352067444_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisRaycastHit_t1056001966_m3352067444_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisRaycastHit2D_t2279581989_m2440275162_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisRaycastHit2D_t2279581989_m2440275162_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisHitInfo_t3229609740_m2260995172_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisHitInfo_t3229609740_m2260995172_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisGcAchievementData_t675222246_m2680268485_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisGcAchievementData_t675222246_m2680268485_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisGcScoreData_t2125309831_m174676143_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisGcScoreData_t2125309831_m174676143_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisContentType_t1787303396_m421427711_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisContentType_t1787303396_m421427711_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisUICharInfo_t75501106_m1797321427_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisUICharInfo_t75501106_m1797321427_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisUILineInfo_t4195266810_m1305614921_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisUILineInfo_t4195266810_m1305614921_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisUIVertex_t4057497605_m289307453_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisUIVertex_t4057497605_m289307453_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisWorkRequest_t1354518612_m2694410850_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisWorkRequest_t1354518612_m2694410850_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisVector2_t2156229523_m2502961026_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisVector2_t2156229523_m2502961026_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisVector3_t3722313464_m2720091419_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisVector3_t3722313464_m2720091419_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisVector4_t3319028937_m1117939728_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__get_Item_TisVector4_t3319028937_m1117939728_MetadataUsageId;
extern const uint32_t AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m429013101_MetadataUsageId;
extern const uint32_t Component_GetComponent_TisRuntimeObject_m2906321015_MetadataUsageId;
extern const uint32_t Component_GetComponentInChildren_TisRuntimeObject_m3151737292_MetadataUsageId;
extern const uint32_t Component_GetComponentInParent_TisRuntimeObject_m3491943679_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ExecuteEvents_ValidateEventData_TisRuntimeObject_m1594546529_RuntimeMethod_var;
extern String_t* _stringLiteral2964872255;
extern const uint32_t ExecuteEvents_ValidateEventData_TisRuntimeObject_m1594546529_MetadataUsageId;
extern const uint32_t GameObject_AddComponent_TisRuntimeObject_m3469369570_MetadataUsageId;
extern const uint32_t GameObject_GetComponent_TisRuntimeObject_m2049753423_MetadataUsageId;
extern const uint32_t GameObject_GetComponentInChildren_TisRuntimeObject_m1310240902_MetadataUsageId;
extern String_t* _stringLiteral2475671027;
extern const uint32_t Object_Instantiate_TisRuntimeObject_m2446893047_MetadataUsageId;
extern const uint32_t Object_Instantiate_TisRuntimeObject_m1061214600_MetadataUsageId;
extern const uint32_t Object_Instantiate_TisRuntimeObject_m1149750522_MetadataUsageId;
extern const uint32_t Object_Instantiate_TisRuntimeObject_m1135049463_MetadataUsageId;
extern const uint32_t Object_Instantiate_TisRuntimeObject_m1193484509_MetadataUsageId;
extern const uint32_t Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_MetadataUsageId;
extern const uint32_t ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_MetadataUsageId;
extern const uint32_t Dropdown_GetOrAddComponent_TisRuntimeObject_m769901662_MetadataUsageId;
extern const RuntimeMethod* Array_FindAll_TisRuntimeObject_m3566631088_RuntimeMethod_var;
extern const uint32_t Array_FindAll_TisRuntimeObject_m3566631088_MetadataUsageId;
extern const uint32_t GameObject_GetComponents_TisRuntimeObject_m1550324888_MetadataUsageId;
extern const uint32_t GameObject_GetComponentsInChildren_TisRuntimeObject_m2621777305_MetadataUsageId;
extern const RuntimeMethod* Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_RuntimeMethod_var;
extern String_t* _stringLiteral879148213;
extern const uint32_t Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerable_First_TisDateTime_t3738529785_m995981923_RuntimeMethod_var;
extern const uint32_t Enumerable_First_TisDateTime_t3738529785_m995981923_MetadataUsageId;
extern const RuntimeMethod* Enumerable_First_TisRuntimeObject_m4173419911_RuntimeMethod_var;
extern const uint32_t Enumerable_First_TisRuntimeObject_m4173419911_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Last_TisSessionData_t844877374_m1492087251_RuntimeMethod_var;
extern const uint32_t Enumerable_Last_TisSessionData_t844877374_m1492087251_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Last_TisDateTime_t3738529785_m1417534003_RuntimeMethod_var;
extern const uint32_t Enumerable_Last_TisDateTime_t3738529785_m1417534003_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Last_TisRuntimeObject_m2128274449_RuntimeMethod_var;
extern const uint32_t Enumerable_Last_TisRuntimeObject_m2128274449_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Last_TisSingle_t1397266774_m2502546029_RuntimeMethod_var;
extern const uint32_t Enumerable_Last_TisSingle_t1397266774_m2502546029_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m2402360903_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3543896146_RuntimeMethod_var;
extern const uint32_t ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m3266560969_MetadataUsageId;
extern const uint32_t ExecuteEvents_GetEventHandler_TisRuntimeObject_m3687647312_MetadataUsageId;
struct Object_t631007953_marshaled_com;

struct UILineInfoU5BU5D_t1655937503;
struct UIVertexU5BU5D_t1981460040;
struct DoubleU5BU5D_t3413330114;
struct UInt32U5BU5D_t2770800703;
struct Int32U5BU5D_t385246372;
struct CharU5BU5D_t3528271667;
struct Vector2U5BU5D_t1457185986;
struct Vector3U5BU5D_t1718750761;
struct Vector4U5BU5D_t934056436;
struct AxisLabelU5BU5D_t731696159;
struct FieldU5BU5D_t3435812899;
struct HitU5BU5D_t845046505;
struct LevelDataU5BU5D_t921917969;
struct SessionDataU5BU5D_t1570286347;
struct ResultTypeU5BU5D_t2236143732;
struct DateTimeU5BU5D_t1184652292;
struct ObjectU5BU5D_t2843939325;
struct CustomAttributeNamedArgumentU5BU5D_t3710464795;
struct CustomAttributeTypedArgumentU5BU5D_t1465843424;
struct SingleU5BU5D_t1444911251;
struct OrderBlockU5BU5D_t2389202590;
struct Color32U5BU5D_t3850468773;
struct RaycastResultU5BU5D_t1128832444;
struct RaycastHitU5BU5D_t1690781147;
struct UICharInfoU5BU5D_t928762055;
struct DictionaryEntryU5BU5D_t4217117203;
struct LinkU5BU5D_t964245573;
struct KeyValuePair_2U5BU5D_t2652375035;
struct IntPtrU5BU5D_t4013366056;
struct KeyValuePair_2U5BU5D_t1037808359;
struct BooleanU5BU5D_t2897418192;
struct KeyValuePair_2U5BU5D_t171748081;
struct KeyValuePair_2U5BU5D_t1954543557;
struct KeyValuePair_2U5BU5D_t118269214;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T4072576034_H
#define LIST_1_T4072576034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Color32>
struct  List_1_t4072576034  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Color32U5BU5D_t3850468773* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4072576034, ____items_1)); }
	inline Color32U5BU5D_t3850468773* get__items_1() const { return ____items_1; }
	inline Color32U5BU5D_t3850468773** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Color32U5BU5D_t3850468773* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4072576034, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4072576034, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4072576034_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Color32U5BU5D_t3850468773* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4072576034_StaticFields, ___EmptyArray_4)); }
	inline Color32U5BU5D_t3850468773* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Color32U5BU5D_t3850468773** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Color32U5BU5D_t3850468773* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4072576034_H
#ifndef LIST_1_T3628304265_H
#define LIST_1_T3628304265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t3628304265  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_t1457185986* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____items_1)); }
	inline Vector2U5BU5D_t1457185986* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_t1457185986** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_t1457185986* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3628304265_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector2U5BU5D_t1457185986* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3628304265_StaticFields, ___EmptyArray_4)); }
	inline Vector2U5BU5D_t1457185986* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector2U5BU5D_t1457185986** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector2U5BU5D_t1457185986* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3628304265_H
#ifndef LIST_1_T899420910_H
#define LIST_1_T899420910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t899420910  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t1718750761* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____items_1)); }
	inline Vector3U5BU5D_t1718750761* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t1718750761** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t1718750761* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t899420910_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector3U5BU5D_t1718750761* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t899420910_StaticFields, ___EmptyArray_4)); }
	inline Vector3U5BU5D_t1718750761* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector3U5BU5D_t1718750761** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector3U5BU5D_t1718750761* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T899420910_H
#ifndef LIST_1_T496136383_H
#define LIST_1_T496136383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct  List_1_t496136383  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_t934056436* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____items_1)); }
	inline Vector4U5BU5D_t934056436* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_t934056436** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_t934056436* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t496136383_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector4U5BU5D_t934056436* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t496136383_StaticFields, ___EmptyArray_4)); }
	inline Vector4U5BU5D_t934056436* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector4U5BU5D_t934056436** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector4U5BU5D_t934056436* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T496136383_H
#ifndef LIST_1_T2316952116_H
#define LIST_1_T2316952116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<DataManager/SessionData>
struct  List_1_t2316952116  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SessionDataU5BU5D_t1570286347* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2316952116, ____items_1)); }
	inline SessionDataU5BU5D_t1570286347* get__items_1() const { return ____items_1; }
	inline SessionDataU5BU5D_t1570286347** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SessionDataU5BU5D_t1570286347* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2316952116, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2316952116, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2316952116_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	SessionDataU5BU5D_t1570286347* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2316952116_StaticFields, ___EmptyArray_4)); }
	inline SessionDataU5BU5D_t1570286347* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline SessionDataU5BU5D_t1570286347** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(SessionDataU5BU5D_t1570286347* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2316952116_H
#ifndef ENUMERABLE_T538148348_H
#define ENUMERABLE_T538148348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable
struct  Enumerable_t538148348  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLE_T538148348_H
#ifndef LIST_1_T915637231_H
#define LIST_1_T915637231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.DateTime>
struct  List_1_t915637231  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DateTimeU5BU5D_t1184652292* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t915637231, ____items_1)); }
	inline DateTimeU5BU5D_t1184652292* get__items_1() const { return ____items_1; }
	inline DateTimeU5BU5D_t1184652292** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DateTimeU5BU5D_t1184652292* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t915637231, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t915637231, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t915637231_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DateTimeU5BU5D_t1184652292* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t915637231_StaticFields, ___EmptyArray_4)); }
	inline DateTimeU5BU5D_t1184652292* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DateTimeU5BU5D_t1184652292** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DateTimeU5BU5D_t1184652292* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T915637231_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_1)); }
	inline ObjectU5BU5D_t2843939325* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t2843939325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
#ifndef LIST_1_T777473367_H
#define LIST_1_T777473367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t777473367  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t807237628* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____items_1)); }
	inline TransformU5BU5D_t807237628* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t807237628** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t807237628* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t777473367_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TransformU5BU5D_t807237628* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t777473367_StaticFields, ___EmptyArray_4)); }
	inline TransformU5BU5D_t807237628* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TransformU5BU5D_t807237628** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TransformU5BU5D_t807237628* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T777473367_H
#ifndef BASEINVOKABLECALL_T2703961024_H
#define BASEINVOKABLECALL_T2703961024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t2703961024  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T2703961024_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef EXECUTEEVENTS_T3484638744_H
#define EXECUTEEVENTS_T3484638744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents
struct  ExecuteEvents_t3484638744  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_t3484638744_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t3995630009 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t2867327688 * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t64614563 * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_t3256600500 * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t3111972472 * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_t3587542510 * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t1977848392 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t972960537 * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t3277009892 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t2311673543 * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t2886331738 * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_t2950825503 * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_t955952873 * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t3373214253 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_t3912835512 * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_t1475332338 * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_t2658898854 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_t231414508 * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_t777473367 * ___s_InternalTransformList_18;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache0
	EventFunction_1_t3995630009 * ___U3CU3Ef__mgU24cache0_19;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache1
	EventFunction_1_t2867327688 * ___U3CU3Ef__mgU24cache1_20;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache2
	EventFunction_1_t64614563 * ___U3CU3Ef__mgU24cache2_21;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache3
	EventFunction_1_t3256600500 * ___U3CU3Ef__mgU24cache3_22;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache4
	EventFunction_1_t3111972472 * ___U3CU3Ef__mgU24cache4_23;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache5
	EventFunction_1_t3587542510 * ___U3CU3Ef__mgU24cache5_24;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache6
	EventFunction_1_t1977848392 * ___U3CU3Ef__mgU24cache6_25;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache7
	EventFunction_1_t972960537 * ___U3CU3Ef__mgU24cache7_26;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache8
	EventFunction_1_t3277009892 * ___U3CU3Ef__mgU24cache8_27;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache9
	EventFunction_1_t2311673543 * ___U3CU3Ef__mgU24cache9_28;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheA
	EventFunction_1_t2886331738 * ___U3CU3Ef__mgU24cacheA_29;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheB
	EventFunction_1_t2950825503 * ___U3CU3Ef__mgU24cacheB_30;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheC
	EventFunction_1_t955952873 * ___U3CU3Ef__mgU24cacheC_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheD
	EventFunction_1_t3373214253 * ___U3CU3Ef__mgU24cacheD_32;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheE
	EventFunction_1_t3912835512 * ___U3CU3Ef__mgU24cacheE_33;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheF
	EventFunction_1_t1475332338 * ___U3CU3Ef__mgU24cacheF_34;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache10
	EventFunction_1_t2658898854 * ___U3CU3Ef__mgU24cache10_35;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_t3995630009 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_t3995630009 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_t3995630009 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerEnterHandler_0), value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t2867327688 * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t2867327688 ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t2867327688 * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerExitHandler_1), value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t64614563 * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t64614563 ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t64614563 * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerDownHandler_2), value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_t3256600500 * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_t3256600500 ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_t3256600500 * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerUpHandler_3), value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t3111972472 * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t3111972472 ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t3111972472 * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerClickHandler_4), value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_t3587542510 * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_t3587542510 ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_t3587542510 * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_InitializePotentialDragHandler_5), value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t1977848392 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t1977848392 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t1977848392 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_BeginDragHandler_6), value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t972960537 * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t972960537 ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t972960537 * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((&___s_DragHandler_7), value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_t3277009892 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_t3277009892 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_t3277009892 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((&___s_EndDragHandler_8), value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t2311673543 * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t2311673543 ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t2311673543 * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_DropHandler_9), value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_t2886331738 * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_t2886331738 ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_t2886331738 * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_ScrollHandler_10), value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_t2950825503 * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_t2950825503 ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_t2950825503 * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_UpdateSelectedHandler_11), value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_t955952873 * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_t955952873 ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_t955952873 * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((&___s_SelectHandler_12), value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_t3373214253 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_t3373214253 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_t3373214253 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_DeselectHandler_13), value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_t3912835512 * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_t3912835512 ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_t3912835512 * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_MoveHandler_14), value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_t1475332338 * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_t1475332338 ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_t1475332338 * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_SubmitHandler_15), value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_t2658898854 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_t2658898854 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_t2658898854 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_CancelHandler_16), value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_t231414508 * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_t231414508 ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_t231414508 * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_HandlerListPool_17), value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_t777473367 * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_t777473367 ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_t777473367 * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalTransformList_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_19() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache0_19)); }
	inline EventFunction_1_t3995630009 * get_U3CU3Ef__mgU24cache0_19() const { return ___U3CU3Ef__mgU24cache0_19; }
	inline EventFunction_1_t3995630009 ** get_address_of_U3CU3Ef__mgU24cache0_19() { return &___U3CU3Ef__mgU24cache0_19; }
	inline void set_U3CU3Ef__mgU24cache0_19(EventFunction_1_t3995630009 * value)
	{
		___U3CU3Ef__mgU24cache0_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_20() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache1_20)); }
	inline EventFunction_1_t2867327688 * get_U3CU3Ef__mgU24cache1_20() const { return ___U3CU3Ef__mgU24cache1_20; }
	inline EventFunction_1_t2867327688 ** get_address_of_U3CU3Ef__mgU24cache1_20() { return &___U3CU3Ef__mgU24cache1_20; }
	inline void set_U3CU3Ef__mgU24cache1_20(EventFunction_1_t2867327688 * value)
	{
		___U3CU3Ef__mgU24cache1_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_21() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache2_21)); }
	inline EventFunction_1_t64614563 * get_U3CU3Ef__mgU24cache2_21() const { return ___U3CU3Ef__mgU24cache2_21; }
	inline EventFunction_1_t64614563 ** get_address_of_U3CU3Ef__mgU24cache2_21() { return &___U3CU3Ef__mgU24cache2_21; }
	inline void set_U3CU3Ef__mgU24cache2_21(EventFunction_1_t64614563 * value)
	{
		___U3CU3Ef__mgU24cache2_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_22() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache3_22)); }
	inline EventFunction_1_t3256600500 * get_U3CU3Ef__mgU24cache3_22() const { return ___U3CU3Ef__mgU24cache3_22; }
	inline EventFunction_1_t3256600500 ** get_address_of_U3CU3Ef__mgU24cache3_22() { return &___U3CU3Ef__mgU24cache3_22; }
	inline void set_U3CU3Ef__mgU24cache3_22(EventFunction_1_t3256600500 * value)
	{
		___U3CU3Ef__mgU24cache3_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_23() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache4_23)); }
	inline EventFunction_1_t3111972472 * get_U3CU3Ef__mgU24cache4_23() const { return ___U3CU3Ef__mgU24cache4_23; }
	inline EventFunction_1_t3111972472 ** get_address_of_U3CU3Ef__mgU24cache4_23() { return &___U3CU3Ef__mgU24cache4_23; }
	inline void set_U3CU3Ef__mgU24cache4_23(EventFunction_1_t3111972472 * value)
	{
		___U3CU3Ef__mgU24cache4_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_24() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache5_24)); }
	inline EventFunction_1_t3587542510 * get_U3CU3Ef__mgU24cache5_24() const { return ___U3CU3Ef__mgU24cache5_24; }
	inline EventFunction_1_t3587542510 ** get_address_of_U3CU3Ef__mgU24cache5_24() { return &___U3CU3Ef__mgU24cache5_24; }
	inline void set_U3CU3Ef__mgU24cache5_24(EventFunction_1_t3587542510 * value)
	{
		___U3CU3Ef__mgU24cache5_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_25() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache6_25)); }
	inline EventFunction_1_t1977848392 * get_U3CU3Ef__mgU24cache6_25() const { return ___U3CU3Ef__mgU24cache6_25; }
	inline EventFunction_1_t1977848392 ** get_address_of_U3CU3Ef__mgU24cache6_25() { return &___U3CU3Ef__mgU24cache6_25; }
	inline void set_U3CU3Ef__mgU24cache6_25(EventFunction_1_t1977848392 * value)
	{
		___U3CU3Ef__mgU24cache6_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_26() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache7_26)); }
	inline EventFunction_1_t972960537 * get_U3CU3Ef__mgU24cache7_26() const { return ___U3CU3Ef__mgU24cache7_26; }
	inline EventFunction_1_t972960537 ** get_address_of_U3CU3Ef__mgU24cache7_26() { return &___U3CU3Ef__mgU24cache7_26; }
	inline void set_U3CU3Ef__mgU24cache7_26(EventFunction_1_t972960537 * value)
	{
		___U3CU3Ef__mgU24cache7_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_26), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_27() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache8_27)); }
	inline EventFunction_1_t3277009892 * get_U3CU3Ef__mgU24cache8_27() const { return ___U3CU3Ef__mgU24cache8_27; }
	inline EventFunction_1_t3277009892 ** get_address_of_U3CU3Ef__mgU24cache8_27() { return &___U3CU3Ef__mgU24cache8_27; }
	inline void set_U3CU3Ef__mgU24cache8_27(EventFunction_1_t3277009892 * value)
	{
		___U3CU3Ef__mgU24cache8_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_28() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache9_28)); }
	inline EventFunction_1_t2311673543 * get_U3CU3Ef__mgU24cache9_28() const { return ___U3CU3Ef__mgU24cache9_28; }
	inline EventFunction_1_t2311673543 ** get_address_of_U3CU3Ef__mgU24cache9_28() { return &___U3CU3Ef__mgU24cache9_28; }
	inline void set_U3CU3Ef__mgU24cache9_28(EventFunction_1_t2311673543 * value)
	{
		___U3CU3Ef__mgU24cache9_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_29() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheA_29)); }
	inline EventFunction_1_t2886331738 * get_U3CU3Ef__mgU24cacheA_29() const { return ___U3CU3Ef__mgU24cacheA_29; }
	inline EventFunction_1_t2886331738 ** get_address_of_U3CU3Ef__mgU24cacheA_29() { return &___U3CU3Ef__mgU24cacheA_29; }
	inline void set_U3CU3Ef__mgU24cacheA_29(EventFunction_1_t2886331738 * value)
	{
		___U3CU3Ef__mgU24cacheA_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_30() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheB_30)); }
	inline EventFunction_1_t2950825503 * get_U3CU3Ef__mgU24cacheB_30() const { return ___U3CU3Ef__mgU24cacheB_30; }
	inline EventFunction_1_t2950825503 ** get_address_of_U3CU3Ef__mgU24cacheB_30() { return &___U3CU3Ef__mgU24cacheB_30; }
	inline void set_U3CU3Ef__mgU24cacheB_30(EventFunction_1_t2950825503 * value)
	{
		___U3CU3Ef__mgU24cacheB_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_31() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheC_31)); }
	inline EventFunction_1_t955952873 * get_U3CU3Ef__mgU24cacheC_31() const { return ___U3CU3Ef__mgU24cacheC_31; }
	inline EventFunction_1_t955952873 ** get_address_of_U3CU3Ef__mgU24cacheC_31() { return &___U3CU3Ef__mgU24cacheC_31; }
	inline void set_U3CU3Ef__mgU24cacheC_31(EventFunction_1_t955952873 * value)
	{
		___U3CU3Ef__mgU24cacheC_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheC_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_32() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheD_32)); }
	inline EventFunction_1_t3373214253 * get_U3CU3Ef__mgU24cacheD_32() const { return ___U3CU3Ef__mgU24cacheD_32; }
	inline EventFunction_1_t3373214253 ** get_address_of_U3CU3Ef__mgU24cacheD_32() { return &___U3CU3Ef__mgU24cacheD_32; }
	inline void set_U3CU3Ef__mgU24cacheD_32(EventFunction_1_t3373214253 * value)
	{
		___U3CU3Ef__mgU24cacheD_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheD_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_33() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheE_33)); }
	inline EventFunction_1_t3912835512 * get_U3CU3Ef__mgU24cacheE_33() const { return ___U3CU3Ef__mgU24cacheE_33; }
	inline EventFunction_1_t3912835512 ** get_address_of_U3CU3Ef__mgU24cacheE_33() { return &___U3CU3Ef__mgU24cacheE_33; }
	inline void set_U3CU3Ef__mgU24cacheE_33(EventFunction_1_t3912835512 * value)
	{
		___U3CU3Ef__mgU24cacheE_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheE_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_34() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheF_34)); }
	inline EventFunction_1_t1475332338 * get_U3CU3Ef__mgU24cacheF_34() const { return ___U3CU3Ef__mgU24cacheF_34; }
	inline EventFunction_1_t1475332338 ** get_address_of_U3CU3Ef__mgU24cacheF_34() { return &___U3CU3Ef__mgU24cacheF_34; }
	inline void set_U3CU3Ef__mgU24cacheF_34(EventFunction_1_t1475332338 * value)
	{
		___U3CU3Ef__mgU24cacheF_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheF_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_35() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache10_35)); }
	inline EventFunction_1_t2658898854 * get_U3CU3Ef__mgU24cache10_35() const { return ___U3CU3Ef__mgU24cache10_35; }
	inline EventFunction_1_t2658898854 ** get_address_of_U3CU3Ef__mgU24cache10_35() { return &___U3CU3Ef__mgU24cache10_35; }
	inline void set_U3CU3Ef__mgU24cache10_35(EventFunction_1_t2658898854 * value)
	{
		___U3CU3Ef__mgU24cache10_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache10_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEEVENTS_T3484638744_H
#ifndef DICTIONARY_2_T1968819495_H
#define DICTIONARY_2_T1968819495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct  Dictionary_2_t1968819495  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1968819495, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1968819495, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1968819495, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1968819495, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1968819495, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1968819495, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1968819495, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1968819495, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1968819495, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1968819495, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1968819495, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1968819495_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2448278169 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1968819495_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2448278169 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2448278169 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2448278169 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1968819495_H
#ifndef LIST_1_T3395709193_H
#define LIST_1_T3395709193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Component>
struct  List_1_t3395709193  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ComponentU5BU5D_t3294940482* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3395709193, ____items_1)); }
	inline ComponentU5BU5D_t3294940482* get__items_1() const { return ____items_1; }
	inline ComponentU5BU5D_t3294940482** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ComponentU5BU5D_t3294940482* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3395709193, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3395709193, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3395709193_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ComponentU5BU5D_t3294940482* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3395709193_StaticFields, ___EmptyArray_4)); }
	inline ComponentU5BU5D_t3294940482* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ComponentU5BU5D_t3294940482** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ComponentU5BU5D_t3294940482* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3395709193_H
#ifndef CUSTOMATTRIBUTEDATA_T1084486650_H
#define CUSTOMATTRIBUTEDATA_T1084486650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t1084486650  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t5769829 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___ctorInfo_0)); }
	inline ConstructorInfo_t5769829 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t5769829 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t5769829 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T1084486650_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef DICTIONARY_2_T3384741_H
#define DICTIONARY_2_T3384741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct  Dictionary_2_t3384741  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ObjectU5BU5D_t2843939325* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t385246372* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___keySlots_6)); }
	inline ObjectU5BU5D_t2843939325* get_keySlots_6() const { return ___keySlots_6; }
	inline ObjectU5BU5D_t2843939325** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ObjectU5BU5D_t2843939325* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___valueSlots_7)); }
	inline Int32U5BU5D_t385246372* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t385246372** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t385246372* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3384741_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1750446691 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1750446691 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1750446691 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1750446691 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3384741_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef DICTIONARY_2_T1444694249_H
#define DICTIONARY_2_T1444694249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct  Dictionary_2_t1444694249  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ObjectU5BU5D_t2843939325* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	BooleanU5BU5D_t2897418192* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1444694249, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1444694249, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1444694249, ___keySlots_6)); }
	inline ObjectU5BU5D_t2843939325* get_keySlots_6() const { return ___keySlots_6; }
	inline ObjectU5BU5D_t2843939325** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ObjectU5BU5D_t2843939325* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1444694249, ___valueSlots_7)); }
	inline BooleanU5BU5D_t2897418192* get_valueSlots_7() const { return ___valueSlots_7; }
	inline BooleanU5BU5D_t2897418192** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(BooleanU5BU5D_t2897418192* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1444694249, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1444694249, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1444694249, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1444694249, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1444694249, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1444694249, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1444694249, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1444694249_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4262618511 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1444694249_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4262618511 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4262618511 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4262618511 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1444694249_H
#ifndef ATTRIBUTEHELPERENGINE_T2735742303_H
#define ATTRIBUTEHELPERENGINE_T2735742303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AttributeHelperEngine
struct  AttributeHelperEngine_t2735742303  : public RuntimeObject
{
public:

public:
};

struct AttributeHelperEngine_t2735742303_StaticFields
{
public:
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_t3936143868* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_t3239458680* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t2245623724* ____requireComponentArray_2;

public:
	inline static int32_t get_offset_of__disallowMultipleComponentArray_0() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____disallowMultipleComponentArray_0)); }
	inline DisallowMultipleComponentU5BU5D_t3936143868* get__disallowMultipleComponentArray_0() const { return ____disallowMultipleComponentArray_0; }
	inline DisallowMultipleComponentU5BU5D_t3936143868** get_address_of__disallowMultipleComponentArray_0() { return &____disallowMultipleComponentArray_0; }
	inline void set__disallowMultipleComponentArray_0(DisallowMultipleComponentU5BU5D_t3936143868* value)
	{
		____disallowMultipleComponentArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____disallowMultipleComponentArray_0), value);
	}

	inline static int32_t get_offset_of__executeInEditModeArray_1() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____executeInEditModeArray_1)); }
	inline ExecuteInEditModeU5BU5D_t3239458680* get__executeInEditModeArray_1() const { return ____executeInEditModeArray_1; }
	inline ExecuteInEditModeU5BU5D_t3239458680** get_address_of__executeInEditModeArray_1() { return &____executeInEditModeArray_1; }
	inline void set__executeInEditModeArray_1(ExecuteInEditModeU5BU5D_t3239458680* value)
	{
		____executeInEditModeArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____executeInEditModeArray_1), value);
	}

	inline static int32_t get_offset_of__requireComponentArray_2() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____requireComponentArray_2)); }
	inline RequireComponentU5BU5D_t2245623724* get__requireComponentArray_2() const { return ____requireComponentArray_2; }
	inline RequireComponentU5BU5D_t2245623724** get_address_of__requireComponentArray_2() { return &____requireComponentArray_2; }
	inline void set__requireComponentArray_2(RequireComponentU5BU5D_t2245623724* value)
	{
		____requireComponentArray_2 = value;
		Il2CppCodeGenWriteBarrier((&____requireComponentArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEHELPERENGINE_T2735742303_H
#ifndef INTERLOCKED_T2273387594_H
#define INTERLOCKED_T2273387594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Interlocked
struct  Interlocked_t2273387594  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERLOCKED_T2273387594_H
#ifndef DICTIONARY_2_T1301971883_H
#define DICTIONARY_2_T1301971883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct  Dictionary_2_t1301971883  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	IntPtrU5BU5D_t4013366056* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1301971883, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1301971883, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1301971883, ___keySlots_6)); }
	inline IntPtrU5BU5D_t4013366056* get_keySlots_6() const { return ___keySlots_6; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(IntPtrU5BU5D_t4013366056* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1301971883, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1301971883, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1301971883, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1301971883, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1301971883, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1301971883, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1301971883, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1301971883, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1301971883_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t833711493 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1301971883_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t833711493 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t833711493 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t833711493 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1301971883_H
#ifndef RESOURCES_T2942265397_H
#define RESOURCES_T2942265397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resources
struct  Resources_t2942265397  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCES_T2942265397_H
#ifndef RANDOM_T108471755_H
#define RANDOM_T108471755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t108471755  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t385246372* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t108471755, ___SeedArray_2)); }
	inline Int32U5BU5D_t385246372* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t385246372** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t385246372* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T108471755_H
#ifndef ACTIVATOR_T1841325713_H
#define ACTIVATOR_T1841325713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Activator
struct  Activator_t1841325713  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATOR_T1841325713_H
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
#ifndef DICTIONARY_2_T132545152_H
#define DICTIONARY_2_T132545152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct  Dictionary_2_t132545152  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ObjectU5BU5D_t2843939325* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___keySlots_6)); }
	inline ObjectU5BU5D_t2843939325* get_keySlots_6() const { return ___keySlots_6; }
	inline ObjectU5BU5D_t2843939325** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ObjectU5BU5D_t2843939325* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t132545152_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4209139644 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4209139644 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4209139644 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4209139644 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T132545152_H
#ifndef HITINFO_T3229609740_H
#define HITINFO_T3229609740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t3229609740 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t1113636619 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t4157153871 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t3229609740, ___target_0)); }
	inline GameObject_t1113636619 * get_target_0() const { return ___target_0; }
	inline GameObject_t1113636619 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t1113636619 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t3229609740, ___camera_1)); }
	inline Camera_t4157153871 * get_camera_1() const { return ___camera_1; }
	inline Camera_t4157153871 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t4157153871 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3229609740_marshaled_pinvoke
{
	GameObject_t1113636619 * ___target_0;
	Camera_t4157153871 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3229609740_marshaled_com
{
	GameObject_t1113636619 * ___target_0;
	Camera_t4157153871 * ___camera_1;
};
#endif // HITINFO_T3229609740_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef KEYVALUEPAIR_2_T2401056908_H
#define KEYVALUEPAIR_2_T2401056908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
struct  KeyValuePair_2_t2401056908 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2401056908, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2401056908, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2401056908_H
#ifndef KEYFRAME_T4206410242_H
#define KEYFRAME_T4206410242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t4206410242 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T4206410242_H
#ifndef GCACHIEVEMENTDATA_T675222246_H
#define GCACHIEVEMENTDATA_T675222246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct  GcAchievementData_t675222246 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.Double UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_PercentCompleted
	double ___m_PercentCompleted_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Completed
	int32_t ___m_Completed_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Hidden
	int32_t ___m_Hidden_3;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_LastReportedDate
	int32_t ___m_LastReportedDate_4;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_Identifier_0)); }
	inline String_t* get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline String_t** get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(String_t* value)
	{
		___m_Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Identifier_0), value);
	}

	inline static int32_t get_offset_of_m_PercentCompleted_1() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_PercentCompleted_1)); }
	inline double get_m_PercentCompleted_1() const { return ___m_PercentCompleted_1; }
	inline double* get_address_of_m_PercentCompleted_1() { return &___m_PercentCompleted_1; }
	inline void set_m_PercentCompleted_1(double value)
	{
		___m_PercentCompleted_1 = value;
	}

	inline static int32_t get_offset_of_m_Completed_2() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_Completed_2)); }
	inline int32_t get_m_Completed_2() const { return ___m_Completed_2; }
	inline int32_t* get_address_of_m_Completed_2() { return &___m_Completed_2; }
	inline void set_m_Completed_2(int32_t value)
	{
		___m_Completed_2 = value;
	}

	inline static int32_t get_offset_of_m_Hidden_3() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_Hidden_3)); }
	inline int32_t get_m_Hidden_3() const { return ___m_Hidden_3; }
	inline int32_t* get_address_of_m_Hidden_3() { return &___m_Hidden_3; }
	inline void set_m_Hidden_3(int32_t value)
	{
		___m_Hidden_3 = value;
	}

	inline static int32_t get_offset_of_m_LastReportedDate_4() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_LastReportedDate_4)); }
	inline int32_t get_m_LastReportedDate_4() const { return ___m_LastReportedDate_4; }
	inline int32_t* get_address_of_m_LastReportedDate_4() { return &___m_LastReportedDate_4; }
	inline void set_m_LastReportedDate_4(int32_t value)
	{
		___m_LastReportedDate_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t675222246_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t675222246_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
#endif // GCACHIEVEMENTDATA_T675222246_H
#ifndef GCSCOREDATA_T2125309831_H
#define GCSCOREDATA_T2125309831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct  GcScoreData_t2125309831 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Category
	String_t* ___m_Category_0;
	// System.UInt32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueLow
	uint32_t ___m_ValueLow_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueHigh
	int32_t ___m_ValueHigh_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Date
	int32_t ___m_Date_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_FormattedValue
	String_t* ___m_FormattedValue_4;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_PlayerID
	String_t* ___m_PlayerID_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Rank
	int32_t ___m_Rank_6;

public:
	inline static int32_t get_offset_of_m_Category_0() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_Category_0)); }
	inline String_t* get_m_Category_0() const { return ___m_Category_0; }
	inline String_t** get_address_of_m_Category_0() { return &___m_Category_0; }
	inline void set_m_Category_0(String_t* value)
	{
		___m_Category_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Category_0), value);
	}

	inline static int32_t get_offset_of_m_ValueLow_1() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_ValueLow_1)); }
	inline uint32_t get_m_ValueLow_1() const { return ___m_ValueLow_1; }
	inline uint32_t* get_address_of_m_ValueLow_1() { return &___m_ValueLow_1; }
	inline void set_m_ValueLow_1(uint32_t value)
	{
		___m_ValueLow_1 = value;
	}

	inline static int32_t get_offset_of_m_ValueHigh_2() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_ValueHigh_2)); }
	inline int32_t get_m_ValueHigh_2() const { return ___m_ValueHigh_2; }
	inline int32_t* get_address_of_m_ValueHigh_2() { return &___m_ValueHigh_2; }
	inline void set_m_ValueHigh_2(int32_t value)
	{
		___m_ValueHigh_2 = value;
	}

	inline static int32_t get_offset_of_m_Date_3() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_Date_3)); }
	inline int32_t get_m_Date_3() const { return ___m_Date_3; }
	inline int32_t* get_address_of_m_Date_3() { return &___m_Date_3; }
	inline void set_m_Date_3(int32_t value)
	{
		___m_Date_3 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_4() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_FormattedValue_4)); }
	inline String_t* get_m_FormattedValue_4() const { return ___m_FormattedValue_4; }
	inline String_t** get_address_of_m_FormattedValue_4() { return &___m_FormattedValue_4; }
	inline void set_m_FormattedValue_4(String_t* value)
	{
		___m_FormattedValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_FormattedValue_4), value);
	}

	inline static int32_t get_offset_of_m_PlayerID_5() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_PlayerID_5)); }
	inline String_t* get_m_PlayerID_5() const { return ___m_PlayerID_5; }
	inline String_t** get_address_of_m_PlayerID_5() { return &___m_PlayerID_5; }
	inline void set_m_PlayerID_5(String_t* value)
	{
		___m_PlayerID_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerID_5), value);
	}

	inline static int32_t get_offset_of_m_Rank_6() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_Rank_6)); }
	inline int32_t get_m_Rank_6() const { return ___m_Rank_6; }
	inline int32_t* get_address_of_m_Rank_6() { return &___m_Rank_6; }
	inline void set_m_Rank_6(int32_t value)
	{
		___m_Rank_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2125309831_marshaled_pinvoke
{
	char* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	char* ___m_FormattedValue_4;
	char* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2125309831_marshaled_com
{
	Il2CppChar* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	Il2CppChar* ___m_FormattedValue_4;
	Il2CppChar* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
#endif // GCSCOREDATA_T2125309831_H
#ifndef ILTOKENINFO_T2325775114_H
#define ILTOKENINFO_T2325775114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILTokenInfo
struct  ILTokenInfo_t2325775114 
{
public:
	// System.Reflection.MemberInfo System.Reflection.Emit.ILTokenInfo::member
	MemberInfo_t * ___member_0;
	// System.Int32 System.Reflection.Emit.ILTokenInfo::code_pos
	int32_t ___code_pos_1;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(ILTokenInfo_t2325775114, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_code_pos_1() { return static_cast<int32_t>(offsetof(ILTokenInfo_t2325775114, ___code_pos_1)); }
	inline int32_t get_code_pos_1() const { return ___code_pos_1; }
	inline int32_t* get_address_of_code_pos_1() { return &___code_pos_1; }
	inline void set_code_pos_1(int32_t value)
	{
		___code_pos_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.ILTokenInfo
struct ILTokenInfo_t2325775114_marshaled_pinvoke
{
	MemberInfo_t * ___member_0;
	int32_t ___code_pos_1;
};
// Native definition for COM marshalling of System.Reflection.Emit.ILTokenInfo
struct ILTokenInfo_t2325775114_marshaled_com
{
	MemberInfo_t * ___member_0;
	int32_t ___code_pos_1;
};
#endif // ILTOKENINFO_T2325775114_H
#ifndef TABLERANGE_T3332867892_H
#define TABLERANGE_T3332867892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.CodePointIndexer/TableRange
struct  TableRange_t3332867892 
{
public:
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::Start
	int32_t ___Start_0;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::End
	int32_t ___End_1;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::Count
	int32_t ___Count_2;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::IndexStart
	int32_t ___IndexStart_3;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::IndexEnd
	int32_t ___IndexEnd_4;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(TableRange_t3332867892, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(TableRange_t3332867892, ___End_1)); }
	inline int32_t get_End_1() const { return ___End_1; }
	inline int32_t* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(int32_t value)
	{
		___End_1 = value;
	}

	inline static int32_t get_offset_of_Count_2() { return static_cast<int32_t>(offsetof(TableRange_t3332867892, ___Count_2)); }
	inline int32_t get_Count_2() const { return ___Count_2; }
	inline int32_t* get_address_of_Count_2() { return &___Count_2; }
	inline void set_Count_2(int32_t value)
	{
		___Count_2 = value;
	}

	inline static int32_t get_offset_of_IndexStart_3() { return static_cast<int32_t>(offsetof(TableRange_t3332867892, ___IndexStart_3)); }
	inline int32_t get_IndexStart_3() const { return ___IndexStart_3; }
	inline int32_t* get_address_of_IndexStart_3() { return &___IndexStart_3; }
	inline void set_IndexStart_3(int32_t value)
	{
		___IndexStart_3 = value;
	}

	inline static int32_t get_offset_of_IndexEnd_4() { return static_cast<int32_t>(offsetof(TableRange_t3332867892, ___IndexEnd_4)); }
	inline int32_t get_IndexEnd_4() const { return ___IndexEnd_4; }
	inline int32_t* get_address_of_IndexEnd_4() { return &___IndexEnd_4; }
	inline void set_IndexEnd_4(int32_t value)
	{
		___IndexEnd_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLERANGE_T3332867892_H
#ifndef LABELFIXUP_T858502054_H
#define LABELFIXUP_T858502054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator/LabelFixup
struct  LabelFixup_t858502054 
{
public:
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::offset
	int32_t ___offset_0;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::pos
	int32_t ___pos_1;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::label_idx
	int32_t ___label_idx_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(LabelFixup_t858502054, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(LabelFixup_t858502054, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_label_idx_2() { return static_cast<int32_t>(offsetof(LabelFixup_t858502054, ___label_idx_2)); }
	inline int32_t get_label_idx_2() const { return ___label_idx_2; }
	inline int32_t* get_address_of_label_idx_2() { return &___label_idx_2; }
	inline void set_label_idx_2(int32_t value)
	{
		___label_idx_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELFIXUP_T858502054_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef LINK_T3209266973_H
#define LINK_T3209266973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1/Link<System.Object>
struct  Link_t3209266973 
{
public:
	// System.Int32 System.Collections.Generic.HashSet`1/Link::HashCode
	int32_t ___HashCode_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Link::Next
	int32_t ___Next_1;

public:
	inline static int32_t get_offset_of_HashCode_0() { return static_cast<int32_t>(offsetof(Link_t3209266973, ___HashCode_0)); }
	inline int32_t get_HashCode_0() const { return ___HashCode_0; }
	inline int32_t* get_address_of_HashCode_0() { return &___HashCode_0; }
	inline void set_HashCode_0(int32_t value)
	{
		___HashCode_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Link_t3209266973, ___Next_1)); }
	inline int32_t get_Next_1() const { return ___Next_1; }
	inline int32_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(int32_t value)
	{
		___Next_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINK_T3209266973_H
#ifndef SLOT_T3975888750_H
#define SLOT_T3975888750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/Slot
struct  Slot_t3975888750 
{
public:
	// System.Object System.Collections.Hashtable/Slot::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Hashtable/Slot::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Slot_t3975888750, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Slot_t3975888750, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.Hashtable/Slot
struct Slot_t3975888750_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Collections.Hashtable/Slot
struct Slot_t3975888750_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
#endif // SLOT_T3975888750_H
#ifndef SLOT_T384495010_H
#define SLOT_T384495010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/Slot
struct  Slot_t384495010 
{
public:
	// System.Object System.Collections.SortedList/Slot::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.SortedList/Slot::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Slot_t384495010, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Slot_t384495010, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.SortedList/Slot
struct Slot_t384495010_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Collections.SortedList/Slot
struct Slot_t384495010_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
#endif // SLOT_T384495010_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef MONOWIN32RESOURCE_T1904229483_H
#define MONOWIN32RESOURCE_T1904229483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MonoWin32Resource
struct  MonoWin32Resource_t1904229483 
{
public:
	// System.Int32 System.Reflection.Emit.MonoWin32Resource::res_type
	int32_t ___res_type_0;
	// System.Int32 System.Reflection.Emit.MonoWin32Resource::res_id
	int32_t ___res_id_1;
	// System.Int32 System.Reflection.Emit.MonoWin32Resource::lang_id
	int32_t ___lang_id_2;
	// System.Byte[] System.Reflection.Emit.MonoWin32Resource::data
	ByteU5BU5D_t4116647657* ___data_3;

public:
	inline static int32_t get_offset_of_res_type_0() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___res_type_0)); }
	inline int32_t get_res_type_0() const { return ___res_type_0; }
	inline int32_t* get_address_of_res_type_0() { return &___res_type_0; }
	inline void set_res_type_0(int32_t value)
	{
		___res_type_0 = value;
	}

	inline static int32_t get_offset_of_res_id_1() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___res_id_1)); }
	inline int32_t get_res_id_1() const { return ___res_id_1; }
	inline int32_t* get_address_of_res_id_1() { return &___res_id_1; }
	inline void set_res_id_1(int32_t value)
	{
		___res_id_1 = value;
	}

	inline static int32_t get_offset_of_lang_id_2() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___lang_id_2)); }
	inline int32_t get_lang_id_2() const { return ___lang_id_2; }
	inline int32_t* get_address_of_lang_id_2() { return &___lang_id_2; }
	inline void set_lang_id_2(int32_t value)
	{
		___lang_id_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___data_3)); }
	inline ByteU5BU5D_t4116647657* get_data_3() const { return ___data_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(ByteU5BU5D_t4116647657* value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((&___data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.MonoWin32Resource
struct MonoWin32Resource_t1904229483_marshaled_pinvoke
{
	int32_t ___res_type_0;
	int32_t ___res_id_1;
	int32_t ___lang_id_2;
	uint8_t* ___data_3;
};
// Native definition for COM marshalling of System.Reflection.Emit.MonoWin32Resource
struct MonoWin32Resource_t1904229483_marshaled_com
{
	int32_t ___res_type_0;
	int32_t ___res_id_1;
	int32_t ___lang_id_2;
	uint8_t* ___data_3;
};
#endif // MONOWIN32RESOURCE_T1904229483_H
#ifndef URISCHEME_T722425697_H
#define URISCHEME_T722425697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/UriScheme
struct  UriScheme_t722425697 
{
public:
	// System.String System.Uri/UriScheme::scheme
	String_t* ___scheme_0;
	// System.String System.Uri/UriScheme::delimiter
	String_t* ___delimiter_1;
	// System.Int32 System.Uri/UriScheme::defaultPort
	int32_t ___defaultPort_2;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriScheme_t722425697, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_0), value);
	}

	inline static int32_t get_offset_of_delimiter_1() { return static_cast<int32_t>(offsetof(UriScheme_t722425697, ___delimiter_1)); }
	inline String_t* get_delimiter_1() const { return ___delimiter_1; }
	inline String_t** get_address_of_delimiter_1() { return &___delimiter_1; }
	inline void set_delimiter_1(String_t* value)
	{
		___delimiter_1 = value;
		Il2CppCodeGenWriteBarrier((&___delimiter_1), value);
	}

	inline static int32_t get_offset_of_defaultPort_2() { return static_cast<int32_t>(offsetof(UriScheme_t722425697, ___defaultPort_2)); }
	inline int32_t get_defaultPort_2() const { return ___defaultPort_2; }
	inline int32_t* get_address_of_defaultPort_2() { return &___defaultPort_2; }
	inline void set_defaultPort_2(int32_t value)
	{
		___defaultPort_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Uri/UriScheme
struct UriScheme_t722425697_marshaled_pinvoke
{
	char* ___scheme_0;
	char* ___delimiter_1;
	int32_t ___defaultPort_2;
};
// Native definition for COM marshalling of System.Uri/UriScheme
struct UriScheme_t722425697_marshaled_com
{
	Il2CppChar* ___scheme_0;
	Il2CppChar* ___delimiter_1;
	int32_t ___defaultPort_2;
};
#endif // URISCHEME_T722425697_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t881159249  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t881159249  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t881159249  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t881159249  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_7)); }
	inline TimeSpan_t881159249  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t881159249 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t881159249  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef MARK_T3471605523_H
#define MARK_T3471605523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Mark
struct  Mark_t3471605523 
{
public:
	// System.Int32 System.Text.RegularExpressions.Mark::Start
	int32_t ___Start_0;
	// System.Int32 System.Text.RegularExpressions.Mark::End
	int32_t ___End_1;
	// System.Int32 System.Text.RegularExpressions.Mark::Previous
	int32_t ___Previous_2;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(Mark_t3471605523, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(Mark_t3471605523, ___End_1)); }
	inline int32_t get_End_1() const { return ___End_1; }
	inline int32_t* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(int32_t value)
	{
		___End_1 = value;
	}

	inline static int32_t get_offset_of_Previous_2() { return static_cast<int32_t>(offsetof(Mark_t3471605523, ___Previous_2)); }
	inline int32_t get_Previous_2() const { return ___Previous_2; }
	inline int32_t* get_address_of_Previous_2() { return &___Previous_2; }
	inline void set_Previous_2(int32_t value)
	{
		___Previous_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARK_T3471605523_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
#ifndef RESOURCEINFO_T2872965302_H
#define RESOURCEINFO_T2872965302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceInfo
struct  ResourceInfo_t2872965302 
{
public:
	// System.Int64 System.Resources.ResourceReader/ResourceInfo::ValuePosition
	int64_t ___ValuePosition_0;
	// System.String System.Resources.ResourceReader/ResourceInfo::ResourceName
	String_t* ___ResourceName_1;
	// System.Int32 System.Resources.ResourceReader/ResourceInfo::TypeIndex
	int32_t ___TypeIndex_2;

public:
	inline static int32_t get_offset_of_ValuePosition_0() { return static_cast<int32_t>(offsetof(ResourceInfo_t2872965302, ___ValuePosition_0)); }
	inline int64_t get_ValuePosition_0() const { return ___ValuePosition_0; }
	inline int64_t* get_address_of_ValuePosition_0() { return &___ValuePosition_0; }
	inline void set_ValuePosition_0(int64_t value)
	{
		___ValuePosition_0 = value;
	}

	inline static int32_t get_offset_of_ResourceName_1() { return static_cast<int32_t>(offsetof(ResourceInfo_t2872965302, ___ResourceName_1)); }
	inline String_t* get_ResourceName_1() const { return ___ResourceName_1; }
	inline String_t** get_address_of_ResourceName_1() { return &___ResourceName_1; }
	inline void set_ResourceName_1(String_t* value)
	{
		___ResourceName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_1), value);
	}

	inline static int32_t get_offset_of_TypeIndex_2() { return static_cast<int32_t>(offsetof(ResourceInfo_t2872965302, ___TypeIndex_2)); }
	inline int32_t get_TypeIndex_2() const { return ___TypeIndex_2; }
	inline int32_t* get_address_of_TypeIndex_2() { return &___TypeIndex_2; }
	inline void set_TypeIndex_2(int32_t value)
	{
		___TypeIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t2872965302_marshaled_pinvoke
{
	int64_t ___ValuePosition_0;
	char* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t2872965302_marshaled_com
{
	int64_t ___ValuePosition_0;
	Il2CppChar* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
#endif // RESOURCEINFO_T2872965302_H
#ifndef RESOURCECACHEITEM_T51292791_H
#define RESOURCECACHEITEM_T51292791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceCacheItem
struct  ResourceCacheItem_t51292791 
{
public:
	// System.String System.Resources.ResourceReader/ResourceCacheItem::ResourceName
	String_t* ___ResourceName_0;
	// System.Object System.Resources.ResourceReader/ResourceCacheItem::ResourceValue
	RuntimeObject * ___ResourceValue_1;

public:
	inline static int32_t get_offset_of_ResourceName_0() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t51292791, ___ResourceName_0)); }
	inline String_t* get_ResourceName_0() const { return ___ResourceName_0; }
	inline String_t** get_address_of_ResourceName_0() { return &___ResourceName_0; }
	inline void set_ResourceName_0(String_t* value)
	{
		___ResourceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_0), value);
	}

	inline static int32_t get_offset_of_ResourceValue_1() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t51292791, ___ResourceValue_1)); }
	inline RuntimeObject * get_ResourceValue_1() const { return ___ResourceValue_1; }
	inline RuntimeObject ** get_address_of_ResourceValue_1() { return &___ResourceValue_1; }
	inline void set_ResourceValue_1(RuntimeObject * value)
	{
		___ResourceValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t51292791_marshaled_pinvoke
{
	char* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t51292791_marshaled_com
{
	Il2CppChar* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
#endif // RESOURCECACHEITEM_T51292791_H
#ifndef PARAMETERMODIFIER_T1461694466_H
#define PARAMETERMODIFIER_T1461694466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t1461694466 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byref
	BooleanU5BU5D_t2897418192* ____byref_0;

public:
	inline static int32_t get_offset_of__byref_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t1461694466, ____byref_0)); }
	inline BooleanU5BU5D_t2897418192* get__byref_0() const { return ____byref_0; }
	inline BooleanU5BU5D_t2897418192** get_address_of__byref_0() { return &____byref_0; }
	inline void set__byref_0(BooleanU5BU5D_t2897418192* value)
	{
		____byref_0 = value;
		Il2CppCodeGenWriteBarrier((&____byref_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_pinvoke
{
	int32_t* ____byref_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_com
{
	int32_t* ____byref_0;
};
#endif // PARAMETERMODIFIER_T1461694466_H
#ifndef WORKREQUEST_T1354518612_H
#define WORKREQUEST_T1354518612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t1354518612 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t2750080073 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t2750080073 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t2750080073 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t2750080073 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t451242010 * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t451242010 ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t451242010 * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_WaitHandle_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1354518612_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1354518612_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;
};
#endif // WORKREQUEST_T1354518612_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#define DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t2562230146 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifndef AXISLABEL_T4128127930_H
#define AXISLABEL_T4128127930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AxisLabel
struct  AxisLabel_t4128127930 
{
public:
	// UnityEngine.UI.Text AxisLabel::textComp
	Text_t1901882714 * ___textComp_0;
	// UnityEngine.UI.Text AxisLabel::subTextComp
	Text_t1901882714 * ___subTextComp_1;
	// System.Single AxisLabel::rawValue
	float ___rawValue_2;
	// UnityEngine.GameObject AxisLabel::obj
	GameObject_t1113636619 * ___obj_3;

public:
	inline static int32_t get_offset_of_textComp_0() { return static_cast<int32_t>(offsetof(AxisLabel_t4128127930, ___textComp_0)); }
	inline Text_t1901882714 * get_textComp_0() const { return ___textComp_0; }
	inline Text_t1901882714 ** get_address_of_textComp_0() { return &___textComp_0; }
	inline void set_textComp_0(Text_t1901882714 * value)
	{
		___textComp_0 = value;
		Il2CppCodeGenWriteBarrier((&___textComp_0), value);
	}

	inline static int32_t get_offset_of_subTextComp_1() { return static_cast<int32_t>(offsetof(AxisLabel_t4128127930, ___subTextComp_1)); }
	inline Text_t1901882714 * get_subTextComp_1() const { return ___subTextComp_1; }
	inline Text_t1901882714 ** get_address_of_subTextComp_1() { return &___subTextComp_1; }
	inline void set_subTextComp_1(Text_t1901882714 * value)
	{
		___subTextComp_1 = value;
		Il2CppCodeGenWriteBarrier((&___subTextComp_1), value);
	}

	inline static int32_t get_offset_of_rawValue_2() { return static_cast<int32_t>(offsetof(AxisLabel_t4128127930, ___rawValue_2)); }
	inline float get_rawValue_2() const { return ___rawValue_2; }
	inline float* get_address_of_rawValue_2() { return &___rawValue_2; }
	inline void set_rawValue_2(float value)
	{
		___rawValue_2 = value;
	}

	inline static int32_t get_offset_of_obj_3() { return static_cast<int32_t>(offsetof(AxisLabel_t4128127930, ___obj_3)); }
	inline GameObject_t1113636619 * get_obj_3() const { return ___obj_3; }
	inline GameObject_t1113636619 ** get_address_of_obj_3() { return &___obj_3; }
	inline void set_obj_3(GameObject_t1113636619 * value)
	{
		___obj_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of AxisLabel
struct AxisLabel_t4128127930_marshaled_pinvoke
{
	Text_t1901882714 * ___textComp_0;
	Text_t1901882714 * ___subTextComp_1;
	float ___rawValue_2;
	GameObject_t1113636619 * ___obj_3;
};
// Native definition for COM marshalling of AxisLabel
struct AxisLabel_t4128127930_marshaled_com
{
	Text_t1901882714 * ___textComp_0;
	Text_t1901882714 * ___subTextComp_1;
	float ___rawValue_2;
	GameObject_t1113636619 * ___obj_3;
};
#endif // AXISLABEL_T4128127930_H
#ifndef FIELD_T4131964166_H
#define FIELD_T4131964166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DataManager/Field
struct  Field_t4131964166 
{
public:
	// System.Single DataManager/Field::xMin
	float ___xMin_0;
	// System.Single DataManager/Field::xMax
	float ___xMax_1;
	// System.Single DataManager/Field::yMin
	float ___yMin_2;
	// System.Single DataManager/Field::yMax
	float ___yMax_3;
	// System.Int32 DataManager/Field::xIndex
	int32_t ___xIndex_4;
	// System.Int32 DataManager/Field::yIndex
	int32_t ___yIndex_5;
	// System.Single DataManager/Field::width
	float ___width_6;
	// System.Single DataManager/Field::height
	float ___height_7;

public:
	inline static int32_t get_offset_of_xMin_0() { return static_cast<int32_t>(offsetof(Field_t4131964166, ___xMin_0)); }
	inline float get_xMin_0() const { return ___xMin_0; }
	inline float* get_address_of_xMin_0() { return &___xMin_0; }
	inline void set_xMin_0(float value)
	{
		___xMin_0 = value;
	}

	inline static int32_t get_offset_of_xMax_1() { return static_cast<int32_t>(offsetof(Field_t4131964166, ___xMax_1)); }
	inline float get_xMax_1() const { return ___xMax_1; }
	inline float* get_address_of_xMax_1() { return &___xMax_1; }
	inline void set_xMax_1(float value)
	{
		___xMax_1 = value;
	}

	inline static int32_t get_offset_of_yMin_2() { return static_cast<int32_t>(offsetof(Field_t4131964166, ___yMin_2)); }
	inline float get_yMin_2() const { return ___yMin_2; }
	inline float* get_address_of_yMin_2() { return &___yMin_2; }
	inline void set_yMin_2(float value)
	{
		___yMin_2 = value;
	}

	inline static int32_t get_offset_of_yMax_3() { return static_cast<int32_t>(offsetof(Field_t4131964166, ___yMax_3)); }
	inline float get_yMax_3() const { return ___yMax_3; }
	inline float* get_address_of_yMax_3() { return &___yMax_3; }
	inline void set_yMax_3(float value)
	{
		___yMax_3 = value;
	}

	inline static int32_t get_offset_of_xIndex_4() { return static_cast<int32_t>(offsetof(Field_t4131964166, ___xIndex_4)); }
	inline int32_t get_xIndex_4() const { return ___xIndex_4; }
	inline int32_t* get_address_of_xIndex_4() { return &___xIndex_4; }
	inline void set_xIndex_4(int32_t value)
	{
		___xIndex_4 = value;
	}

	inline static int32_t get_offset_of_yIndex_5() { return static_cast<int32_t>(offsetof(Field_t4131964166, ___yIndex_5)); }
	inline int32_t get_yIndex_5() const { return ___yIndex_5; }
	inline int32_t* get_address_of_yIndex_5() { return &___yIndex_5; }
	inline void set_yIndex_5(int32_t value)
	{
		___yIndex_5 = value;
	}

	inline static int32_t get_offset_of_width_6() { return static_cast<int32_t>(offsetof(Field_t4131964166, ___width_6)); }
	inline float get_width_6() const { return ___width_6; }
	inline float* get_address_of_width_6() { return &___width_6; }
	inline void set_width_6(float value)
	{
		___width_6 = value;
	}

	inline static int32_t get_offset_of_height_7() { return static_cast<int32_t>(offsetof(Field_t4131964166, ___height_7)); }
	inline float get_height_7() const { return ___height_7; }
	inline float* get_address_of_height_7() { return &___height_7; }
	inline void set_height_7(float value)
	{
		___height_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELD_T4131964166_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef RESULTTYPE_T2923018313_H
#define RESULTTYPE_T2923018313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResultsScreen/ResultType
struct  ResultType_t2923018313 
{
public:
	// System.Int32 ResultsScreen/ResultType::difficultyLevel
	int32_t ___difficultyLevel_0;
	// System.String ResultsScreen/ResultType::gameType
	String_t* ___gameType_1;
	// System.Int32 ResultsScreen/ResultType::count
	int32_t ___count_2;

public:
	inline static int32_t get_offset_of_difficultyLevel_0() { return static_cast<int32_t>(offsetof(ResultType_t2923018313, ___difficultyLevel_0)); }
	inline int32_t get_difficultyLevel_0() const { return ___difficultyLevel_0; }
	inline int32_t* get_address_of_difficultyLevel_0() { return &___difficultyLevel_0; }
	inline void set_difficultyLevel_0(int32_t value)
	{
		___difficultyLevel_0 = value;
	}

	inline static int32_t get_offset_of_gameType_1() { return static_cast<int32_t>(offsetof(ResultType_t2923018313, ___gameType_1)); }
	inline String_t* get_gameType_1() const { return ___gameType_1; }
	inline String_t** get_address_of_gameType_1() { return &___gameType_1; }
	inline void set_gameType_1(String_t* value)
	{
		___gameType_1 = value;
		Il2CppCodeGenWriteBarrier((&___gameType_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ResultType_t2923018313, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of ResultsScreen/ResultType
struct ResultType_t2923018313_marshaled_pinvoke
{
	int32_t ___difficultyLevel_0;
	char* ___gameType_1;
	int32_t ___count_2;
};
// Native definition for COM marshalling of ResultsScreen/ResultType
struct ResultType_t2923018313_marshaled_com
{
	int32_t ___difficultyLevel_0;
	Il2CppChar* ___gameType_1;
	int32_t ___count_2;
};
#endif // RESULTTYPE_T2923018313_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef UILINEINFO_T4195266810_H
#define UILINEINFO_T4195266810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UILineInfo
struct  UILineInfo_t4195266810 
{
public:
	// System.Int32 UnityEngine.UILineInfo::startCharIdx
	int32_t ___startCharIdx_0;
	// System.Int32 UnityEngine.UILineInfo::height
	int32_t ___height_1;
	// System.Single UnityEngine.UILineInfo::topY
	float ___topY_2;
	// System.Single UnityEngine.UILineInfo::leading
	float ___leading_3;

public:
	inline static int32_t get_offset_of_startCharIdx_0() { return static_cast<int32_t>(offsetof(UILineInfo_t4195266810, ___startCharIdx_0)); }
	inline int32_t get_startCharIdx_0() const { return ___startCharIdx_0; }
	inline int32_t* get_address_of_startCharIdx_0() { return &___startCharIdx_0; }
	inline void set_startCharIdx_0(int32_t value)
	{
		___startCharIdx_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(UILineInfo_t4195266810, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_topY_2() { return static_cast<int32_t>(offsetof(UILineInfo_t4195266810, ___topY_2)); }
	inline float get_topY_2() const { return ___topY_2; }
	inline float* get_address_of_topY_2() { return &___topY_2; }
	inline void set_topY_2(float value)
	{
		___topY_2 = value;
	}

	inline static int32_t get_offset_of_leading_3() { return static_cast<int32_t>(offsetof(UILineInfo_t4195266810, ___leading_3)); }
	inline float get_leading_3() const { return ___leading_3; }
	inline float* get_address_of_leading_3() { return &___leading_3; }
	inline void set_leading_3(float value)
	{
		___leading_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UILINEINFO_T4195266810_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef LINK_T544317964_H
#define LINK_T544317964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Link
struct  Link_t544317964 
{
public:
	// System.Int32 System.Collections.Generic.Link::HashCode
	int32_t ___HashCode_0;
	// System.Int32 System.Collections.Generic.Link::Next
	int32_t ___Next_1;

public:
	inline static int32_t get_offset_of_HashCode_0() { return static_cast<int32_t>(offsetof(Link_t544317964, ___HashCode_0)); }
	inline int32_t get_HashCode_0() const { return ___HashCode_0; }
	inline int32_t* get_address_of_HashCode_0() { return &___HashCode_0; }
	inline void set_HashCode_0(int32_t value)
	{
		___HashCode_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Link_t544317964, ___Next_1)); }
	inline int32_t get_Next_1() const { return ___Next_1; }
	inline int32_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(int32_t value)
	{
		___Next_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINK_T544317964_H
#ifndef LABELDATA_T360167391_H
#define LABELDATA_T360167391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator/LabelData
struct  LabelData_t360167391 
{
public:
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelData::addr
	int32_t ___addr_0;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelData::maxStack
	int32_t ___maxStack_1;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(LabelData_t360167391, ___addr_0)); }
	inline int32_t get_addr_0() const { return ___addr_0; }
	inline int32_t* get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(int32_t value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_maxStack_1() { return static_cast<int32_t>(offsetof(LabelData_t360167391, ___maxStack_1)); }
	inline int32_t get_maxStack_1() const { return ___maxStack_1; }
	inline int32_t* get_address_of_maxStack_1() { return &___maxStack_1; }
	inline void set_maxStack_1(int32_t value)
	{
		___maxStack_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELDATA_T360167391_H
#ifndef KEYVALUEPAIR_2_T71524366_H
#define KEYVALUEPAIR_2_T71524366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t71524366 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t71524366, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t71524366, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T71524366_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
#ifndef KEYVALUEPAIR_2_T3842366416_H
#define KEYVALUEPAIR_2_T3842366416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct  KeyValuePair_2_t3842366416 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3842366416, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3842366416, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3842366416_H
#ifndef DICTIONARYENTRY_T3123975638_H
#define DICTIONARYENTRY_T3123975638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryEntry
struct  DictionaryEntry_t3123975638 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3123975638, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3123975638, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3123975638_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3123975638_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
#endif // DICTIONARYENTRY_T3123975638_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t2723150157 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2723150157, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2723150157, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2723150157_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2723150157_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef ORDERBLOCK_T1585977831_H
#define ORDERBLOCK_T1585977831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BeforeRenderHelper/OrderBlock
struct  OrderBlock_t1585977831 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t3245792599 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t1585977831, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t1585977831, ___callback_1)); }
	inline UnityAction_t3245792599 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t3245792599 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t3245792599 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___callback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t1585977831_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t1585977831_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
#endif // ORDERBLOCK_T1585977831_H
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef HITTYPE_T2597416194_H
#define HITTYPE_T2597416194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HitType
struct  HitType_t2597416194 
{
public:
	// System.Int32 HitType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HitType_t2597416194, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HITTYPE_T2597416194_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef CONTENTTYPE_T1787303396_H
#define CONTENTTYPE_T1787303396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/ContentType
struct  ContentType_t1787303396 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContentType_t1787303396, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTTYPE_T1787303396_H
#ifndef CASTHELPER_1_T2613165452_H
#define CASTHELPER_1_T2613165452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CastHelper`1<System.Object>
struct  CastHelper_1_t2613165452 
{
public:
	// T UnityEngine.CastHelper`1::t
	RuntimeObject * ___t_0;
	// System.IntPtr UnityEngine.CastHelper`1::onePointerFurtherThanT
	intptr_t ___onePointerFurtherThanT_1;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(CastHelper_1_t2613165452, ___t_0)); }
	inline RuntimeObject * get_t_0() const { return ___t_0; }
	inline RuntimeObject ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(RuntimeObject * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_0), value);
	}

	inline static int32_t get_offset_of_onePointerFurtherThanT_1() { return static_cast<int32_t>(offsetof(CastHelper_1_t2613165452, ___onePointerFurtherThanT_1)); }
	inline intptr_t get_onePointerFurtherThanT_1() const { return ___onePointerFurtherThanT_1; }
	inline intptr_t* get_address_of_onePointerFurtherThanT_1() { return &___onePointerFurtherThanT_1; }
	inline void set_onePointerFurtherThanT_1(intptr_t value)
	{
		___onePointerFurtherThanT_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTHELPER_1_T2613165452_H
#ifndef RAYCASTHIT2D_T2279581989_H
#define RAYCASTHIT2D_T2279581989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t2279581989 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t2156229523  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t2156229523  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t2156229523  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// UnityEngine.Collider2D UnityEngine.RaycastHit2D::m_Collider
	Collider2D_t2806799626 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Centroid_0)); }
	inline Vector2_t2156229523  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t2156229523 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t2156229523  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Point_1)); }
	inline Vector2_t2156229523  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t2156229523 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t2156229523  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Normal_2)); }
	inline Vector2_t2156229523  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t2156229523 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t2156229523  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Collider_5)); }
	inline Collider2D_t2806799626 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider2D_t2806799626 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider2D_t2806799626 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t2279581989_marshaled_pinvoke
{
	Vector2_t2156229523  ___m_Centroid_0;
	Vector2_t2156229523  ___m_Point_1;
	Vector2_t2156229523  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t2806799626 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t2279581989_marshaled_com
{
	Vector2_t2156229523  ___m_Centroid_0;
	Vector2_t2156229523  ___m_Point_1;
	Vector2_t2156229523  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t2806799626 * ___m_Collider_5;
};
#endif // RAYCASTHIT2D_T2279581989_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef CONTACTPOINT2D_T3390240644_H
#define CONTACTPOINT2D_T3390240644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint2D
struct  ContactPoint2D_t3390240644 
{
public:
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t2156229523  ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t2156229523  ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Point_0)); }
	inline Vector2_t2156229523  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector2_t2156229523 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector2_t2156229523  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Normal_1)); }
	inline Vector2_t2156229523  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector2_t2156229523 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector2_t2156229523  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_2() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_RelativeVelocity_2)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_2() const { return ___m_RelativeVelocity_2; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_2() { return &___m_RelativeVelocity_2; }
	inline void set_m_RelativeVelocity_2(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_Separation_3() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Separation_3)); }
	inline float get_m_Separation_3() const { return ___m_Separation_3; }
	inline float* get_address_of_m_Separation_3() { return &___m_Separation_3; }
	inline void set_m_Separation_3(float value)
	{
		___m_Separation_3 = value;
	}

	inline static int32_t get_offset_of_m_NormalImpulse_4() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_NormalImpulse_4)); }
	inline float get_m_NormalImpulse_4() const { return ___m_NormalImpulse_4; }
	inline float* get_address_of_m_NormalImpulse_4() { return &___m_NormalImpulse_4; }
	inline void set_m_NormalImpulse_4(float value)
	{
		___m_NormalImpulse_4 = value;
	}

	inline static int32_t get_offset_of_m_TangentImpulse_5() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_TangentImpulse_5)); }
	inline float get_m_TangentImpulse_5() const { return ___m_TangentImpulse_5; }
	inline float* get_address_of_m_TangentImpulse_5() { return &___m_TangentImpulse_5; }
	inline void set_m_TangentImpulse_5(float value)
	{
		___m_TangentImpulse_5 = value;
	}

	inline static int32_t get_offset_of_m_Collider_6() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Collider_6)); }
	inline int32_t get_m_Collider_6() const { return ___m_Collider_6; }
	inline int32_t* get_address_of_m_Collider_6() { return &___m_Collider_6; }
	inline void set_m_Collider_6(int32_t value)
	{
		___m_Collider_6 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_7() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_OtherCollider_7)); }
	inline int32_t get_m_OtherCollider_7() const { return ___m_OtherCollider_7; }
	inline int32_t* get_address_of_m_OtherCollider_7() { return &___m_OtherCollider_7; }
	inline void set_m_OtherCollider_7(int32_t value)
	{
		___m_OtherCollider_7 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_8() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Rigidbody_8)); }
	inline int32_t get_m_Rigidbody_8() const { return ___m_Rigidbody_8; }
	inline int32_t* get_address_of_m_Rigidbody_8() { return &___m_Rigidbody_8; }
	inline void set_m_Rigidbody_8(int32_t value)
	{
		___m_Rigidbody_8 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_9() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_OtherRigidbody_9)); }
	inline int32_t get_m_OtherRigidbody_9() const { return ___m_OtherRigidbody_9; }
	inline int32_t* get_address_of_m_OtherRigidbody_9() { return &___m_OtherRigidbody_9; }
	inline void set_m_OtherRigidbody_9(int32_t value)
	{
		___m_OtherRigidbody_9 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_10() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Enabled_10)); }
	inline int32_t get_m_Enabled_10() const { return ___m_Enabled_10; }
	inline int32_t* get_address_of_m_Enabled_10() { return &___m_Enabled_10; }
	inline void set_m_Enabled_10(int32_t value)
	{
		___m_Enabled_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT2D_T3390240644_H
#ifndef TYPETAG_T3541821701_H
#define TYPETAG_T3541821701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.TypeTag
struct  TypeTag_t3541821701 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.TypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeTag_t3541821701, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPETAG_T3541821701_H
#ifndef X509CHAINSTATUSFLAGS_T1026973125_H
#define X509CHAINSTATUSFLAGS_T1026973125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
struct  X509ChainStatusFlags_t1026973125 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainStatusFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t1026973125, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINSTATUSFLAGS_T1026973125_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef RESOURCEATTRIBUTES_T3997964906_H
#define RESOURCEATTRIBUTES_T3997964906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResourceAttributes
struct  ResourceAttributes_t3997964906 
{
public:
	// System.Int32 System.Reflection.ResourceAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResourceAttributes_t3997964906, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEATTRIBUTES_T3997964906_H
#ifndef DATASTREAMTYPE_T4132467813_H
#define DATASTREAMTYPE_T4132467813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t4132467813 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t4132467813, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T4132467813_H
#ifndef SECURITYACTION_T569814076_H
#define SECURITYACTION_T569814076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t569814076 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityAction_t569814076, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYACTION_T569814076_H
#ifndef INTERNALVERTEXCHANNELTYPE_T299736786_H
#define INTERNALVERTEXCHANNELTYPE_T299736786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalVertexChannelType
struct  InternalVertexChannelType_t299736786 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalVertexChannelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalVertexChannelType_t299736786, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALVERTEXCHANNELTYPE_T299736786_H
#ifndef INTERNALSHADERCHANNEL_T300897861_H
#define INTERNALSHADERCHANNEL_T300897861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalShaderChannel
struct  InternalShaderChannel_t300897861 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalShaderChannel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalShaderChannel_t300897861, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALSHADERCHANNEL_T300897861_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t287865710 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t2723150157  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t287865710, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t2723150157  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t2723150157 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t2723150157  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t287865710, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t287865710_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t2723150157_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t287865710_marshaled_com
{
	CustomAttributeTypedArgument_t2723150157_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
#ifndef RAYCASTHIT_T1056001966_H
#define RAYCASTHIT_T1056001966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1056001966 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2156229523  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t1773347010 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_UV_4)); }
	inline Vector2_t2156229523  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2156229523 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2156229523  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Collider_5)); }
	inline Collider_t1773347010 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t1773347010 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1056001966_marshaled_pinvoke
{
	Vector3_t3722313464  ___m_Point_0;
	Vector3_t3722313464  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2156229523  ___m_UV_4;
	Collider_t1773347010 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1056001966_marshaled_com
{
	Vector3_t3722313464  ___m_Point_0;
	Vector3_t3722313464  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2156229523  ___m_UV_4;
	Collider_t1773347010 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T1056001966_H
#ifndef UICHARINFO_T75501106_H
#define UICHARINFO_T75501106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UICharInfo
struct  UICharInfo_t75501106 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_t2156229523  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_t75501106, ___cursorPos_0)); }
	inline Vector2_t2156229523  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_t2156229523 * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_t2156229523  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_t75501106, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UICHARINFO_T75501106_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef KEYVALUEPAIR_2_T3699644050_H
#define KEYVALUEPAIR_2_T3699644050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct  KeyValuePair_2_t3699644050 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	intptr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3699644050, ___key_0)); }
	inline intptr_t get_key_0() const { return ___key_0; }
	inline intptr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(intptr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3699644050, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3699644050_H
#ifndef CLIENTCERTIFICATETYPE_T1004704908_H
#define CLIENTCERTIFICATETYPE_T1004704908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType
struct  ClientCertificateType_t1004704908 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.Handshake.ClientCertificateType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClientCertificateType_t1004704908, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTCERTIFICATETYPE_T1004704908_H
#ifndef UIVERTEX_T4057497605_H
#define UIVERTEX_T4057497605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UIVertex
struct  UIVertex_t4057497605 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t3722313464  ___normal_1;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t2600501292  ___color_2;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv0
	Vector2_t2156229523  ___uv0_3;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv1
	Vector2_t2156229523  ___uv1_4;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv2
	Vector2_t2156229523  ___uv2_5;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv3
	Vector2_t2156229523  ___uv3_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t3319028937  ___tangent_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___normal_1)); }
	inline Vector3_t3722313464  get_normal_1() const { return ___normal_1; }
	inline Vector3_t3722313464 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t3722313464  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___color_2)); }
	inline Color32_t2600501292  get_color_2() const { return ___color_2; }
	inline Color32_t2600501292 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color32_t2600501292  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_uv0_3() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv0_3)); }
	inline Vector2_t2156229523  get_uv0_3() const { return ___uv0_3; }
	inline Vector2_t2156229523 * get_address_of_uv0_3() { return &___uv0_3; }
	inline void set_uv0_3(Vector2_t2156229523  value)
	{
		___uv0_3 = value;
	}

	inline static int32_t get_offset_of_uv1_4() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv1_4)); }
	inline Vector2_t2156229523  get_uv1_4() const { return ___uv1_4; }
	inline Vector2_t2156229523 * get_address_of_uv1_4() { return &___uv1_4; }
	inline void set_uv1_4(Vector2_t2156229523  value)
	{
		___uv1_4 = value;
	}

	inline static int32_t get_offset_of_uv2_5() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv2_5)); }
	inline Vector2_t2156229523  get_uv2_5() const { return ___uv2_5; }
	inline Vector2_t2156229523 * get_address_of_uv2_5() { return &___uv2_5; }
	inline void set_uv2_5(Vector2_t2156229523  value)
	{
		___uv2_5 = value;
	}

	inline static int32_t get_offset_of_uv3_6() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv3_6)); }
	inline Vector2_t2156229523  get_uv3_6() const { return ___uv3_6; }
	inline Vector2_t2156229523 * get_address_of_uv3_6() { return &___uv3_6; }
	inline void set_uv3_6(Vector2_t2156229523  value)
	{
		___uv3_6 = value;
	}

	inline static int32_t get_offset_of_tangent_7() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___tangent_7)); }
	inline Vector4_t3319028937  get_tangent_7() const { return ___tangent_7; }
	inline Vector4_t3319028937 * get_address_of_tangent_7() { return &___tangent_7; }
	inline void set_tangent_7(Vector4_t3319028937  value)
	{
		___tangent_7 = value;
	}
};

struct UIVertex_t4057497605_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t2600501292  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t3319028937  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_t4057497605  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_t2600501292  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_t2600501292 * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_t2600501292  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t3319028937  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t3319028937 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t3319028937  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605_StaticFields, ___simpleVert_10)); }
	inline UIVertex_t4057497605  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_t4057497605 * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_t4057497605  value)
	{
		___simpleVert_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIVERTEX_T4057497605_H
#ifndef CORNER_T1493259673_H
#define CORNER_T1493259673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GridLayoutGroup/Corner
struct  Corner_t1493259673 
{
public:
	// System.Int32 UnityEngine.UI.GridLayoutGroup/Corner::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Corner_t1493259673, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CORNER_T1493259673_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef CONSTRAINT_T814224393_H
#define CONSTRAINT_T814224393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GridLayoutGroup/Constraint
struct  Constraint_t814224393 
{
public:
	// System.Int32 UnityEngine.UI.GridLayoutGroup/Constraint::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Constraint_t814224393, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINT_T814224393_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef TEXTANCHOR_T2035777396_H
#define TEXTANCHOR_T2035777396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t2035777396 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t2035777396, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTANCHOR_T2035777396_H
#ifndef AXIS_T3613393006_H
#define AXIS_T3613393006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GridLayoutGroup/Axis
struct  Axis_t3613393006 
{
public:
	// System.Int32 UnityEngine.UI.GridLayoutGroup/Axis::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Axis_t3613393006, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXIS_T3613393006_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_10)); }
	inline TimeSpan_t881159249  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t881159249 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t881159249  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_12)); }
	inline DateTime_t3738529785  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t3738529785  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_13)); }
	inline DateTime_t3738529785  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t3738529785 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t3738529785  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef HIT_T3596106040_H
#define HIT_T3596106040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DataManager/Hit
struct  Hit_t3596106040 
{
public:
	// System.Int32 DataManager/Hit::hitNumber
	int32_t ___hitNumber_0;
	// System.Single DataManager/Hit::xPos
	float ___xPos_1;
	// System.Single DataManager/Hit::yPos
	float ___yPos_2;
	// System.Single DataManager/Hit::time
	float ___time_3;
	// System.Single DataManager/Hit::distance
	float ___distance_4;
	// System.Boolean DataManager/Hit::assistanceWasActive
	bool ___assistanceWasActive_5;
	// HitType DataManager/Hit::type
	int32_t ___type_6;

public:
	inline static int32_t get_offset_of_hitNumber_0() { return static_cast<int32_t>(offsetof(Hit_t3596106040, ___hitNumber_0)); }
	inline int32_t get_hitNumber_0() const { return ___hitNumber_0; }
	inline int32_t* get_address_of_hitNumber_0() { return &___hitNumber_0; }
	inline void set_hitNumber_0(int32_t value)
	{
		___hitNumber_0 = value;
	}

	inline static int32_t get_offset_of_xPos_1() { return static_cast<int32_t>(offsetof(Hit_t3596106040, ___xPos_1)); }
	inline float get_xPos_1() const { return ___xPos_1; }
	inline float* get_address_of_xPos_1() { return &___xPos_1; }
	inline void set_xPos_1(float value)
	{
		___xPos_1 = value;
	}

	inline static int32_t get_offset_of_yPos_2() { return static_cast<int32_t>(offsetof(Hit_t3596106040, ___yPos_2)); }
	inline float get_yPos_2() const { return ___yPos_2; }
	inline float* get_address_of_yPos_2() { return &___yPos_2; }
	inline void set_yPos_2(float value)
	{
		___yPos_2 = value;
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(Hit_t3596106040, ___time_3)); }
	inline float get_time_3() const { return ___time_3; }
	inline float* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(float value)
	{
		___time_3 = value;
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(Hit_t3596106040, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}

	inline static int32_t get_offset_of_assistanceWasActive_5() { return static_cast<int32_t>(offsetof(Hit_t3596106040, ___assistanceWasActive_5)); }
	inline bool get_assistanceWasActive_5() const { return ___assistanceWasActive_5; }
	inline bool* get_address_of_assistanceWasActive_5() { return &___assistanceWasActive_5; }
	inline void set_assistanceWasActive_5(bool value)
	{
		___assistanceWasActive_5 = value;
	}

	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(Hit_t3596106040, ___type_6)); }
	inline int32_t get_type_6() const { return ___type_6; }
	inline int32_t* get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(int32_t value)
	{
		___type_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of DataManager/Hit
struct Hit_t3596106040_marshaled_pinvoke
{
	int32_t ___hitNumber_0;
	float ___xPos_1;
	float ___yPos_2;
	float ___time_3;
	float ___distance_4;
	int32_t ___assistanceWasActive_5;
	int32_t ___type_6;
};
// Native definition for COM marshalling of DataManager/Hit
struct Hit_t3596106040_marshaled_com
{
	int32_t ___hitNumber_0;
	float ___xPos_1;
	float ___yPos_2;
	float ___time_3;
	float ___distance_4;
	int32_t ___assistanceWasActive_5;
	int32_t ___type_6;
};
#endif // HIT_T3596106040_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef PLAYABLEBINDING_T354260709_H
#define PLAYABLEBINDING_T354260709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t354260709 
{
public:
	union
	{
		struct
		{
			// System.String UnityEngine.Playables.PlayableBinding::<streamName>k__BackingField
			String_t* ___U3CstreamNameU3Ek__BackingField_2;
			// UnityEngine.Playables.DataStreamType UnityEngine.Playables.PlayableBinding::<streamType>k__BackingField
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			// UnityEngine.Object UnityEngine.Playables.PlayableBinding::<sourceObject>k__BackingField
			Object_t631007953 * ___U3CsourceObjectU3Ek__BackingField_4;
			// System.Type UnityEngine.Playables.PlayableBinding::<sourceBindingType>k__BackingField
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t354260709__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CstreamNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CstreamNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CstreamNameU3Ek__BackingField_2() const { return ___U3CstreamNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CstreamNameU3Ek__BackingField_2() { return &___U3CstreamNameU3Ek__BackingField_2; }
	inline void set_U3CstreamNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CstreamNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstreamNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CstreamTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CstreamTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CstreamTypeU3Ek__BackingField_3() const { return ___U3CstreamTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CstreamTypeU3Ek__BackingField_3() { return &___U3CstreamTypeU3Ek__BackingField_3; }
	inline void set_U3CstreamTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CstreamTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CsourceObjectU3Ek__BackingField_4)); }
	inline Object_t631007953 * get_U3CsourceObjectU3Ek__BackingField_4() const { return ___U3CsourceObjectU3Ek__BackingField_4; }
	inline Object_t631007953 ** get_address_of_U3CsourceObjectU3Ek__BackingField_4() { return &___U3CsourceObjectU3Ek__BackingField_4; }
	inline void set_U3CsourceObjectU3Ek__BackingField_4(Object_t631007953 * value)
	{
		___U3CsourceObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CsourceBindingTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsourceBindingTypeU3Ek__BackingField_5() const { return ___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return &___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline void set_U3CsourceBindingTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsourceBindingTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceBindingTypeU3Ek__BackingField_5), value);
	}
};

struct PlayableBinding_t354260709_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t829358056* ___None_0;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_1;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709_StaticFields, ___None_0)); }
	inline PlayableBindingU5BU5D_t829358056* get_None_0() const { return ___None_0; }
	inline PlayableBindingU5BU5D_t829358056** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(PlayableBindingU5BU5D_t829358056* value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier((&___None_0), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709_StaticFields, ___DefaultDuration_1)); }
	inline double get_DefaultDuration_1() const { return ___DefaultDuration_1; }
	inline double* get_address_of_DefaultDuration_1() { return &___DefaultDuration_1; }
	inline void set_DefaultDuration_1(double value)
	{
		___DefaultDuration_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t354260709_marshaled_pinvoke
{
	union
	{
		struct
		{
			char* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t631007953_marshaled_pinvoke ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t354260709__padding[1];
	};
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t354260709_marshaled_com
{
	union
	{
		struct
		{
			Il2CppChar* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t631007953_marshaled_com* ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t354260709__padding[1];
	};
};
#endif // PLAYABLEBINDING_T354260709_H
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef X509CHAINSTATUS_T133602714_H
#define X509CHAINSTATUS_T133602714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct  X509ChainStatus_t133602714 
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(X509ChainStatus_t133602714, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(X509ChainStatus_t133602714, ___info_1)); }
	inline String_t* get_info_1() const { return ___info_1; }
	inline String_t** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(String_t* value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier((&___info_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t133602714_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t133602714_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};
#endif // X509CHAINSTATUS_T133602714_H
#ifndef MONORESOURCE_T4103430009_H
#define MONORESOURCE_T4103430009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MonoResource
struct  MonoResource_t4103430009 
{
public:
	// System.Byte[] System.Reflection.Emit.MonoResource::data
	ByteU5BU5D_t4116647657* ___data_0;
	// System.String System.Reflection.Emit.MonoResource::name
	String_t* ___name_1;
	// System.String System.Reflection.Emit.MonoResource::filename
	String_t* ___filename_2;
	// System.Reflection.ResourceAttributes System.Reflection.Emit.MonoResource::attrs
	int32_t ___attrs_3;
	// System.Int32 System.Reflection.Emit.MonoResource::offset
	int32_t ___offset_4;
	// System.IO.Stream System.Reflection.Emit.MonoResource::stream
	Stream_t1273022909 * ___stream_5;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___data_0)); }
	inline ByteU5BU5D_t4116647657* get_data_0() const { return ___data_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ByteU5BU5D_t4116647657* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_filename_2() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___filename_2)); }
	inline String_t* get_filename_2() const { return ___filename_2; }
	inline String_t** get_address_of_filename_2() { return &___filename_2; }
	inline void set_filename_2(String_t* value)
	{
		___filename_2 = value;
		Il2CppCodeGenWriteBarrier((&___filename_2), value);
	}

	inline static int32_t get_offset_of_attrs_3() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___attrs_3)); }
	inline int32_t get_attrs_3() const { return ___attrs_3; }
	inline int32_t* get_address_of_attrs_3() { return &___attrs_3; }
	inline void set_attrs_3(int32_t value)
	{
		___attrs_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___stream_5)); }
	inline Stream_t1273022909 * get_stream_5() const { return ___stream_5; }
	inline Stream_t1273022909 ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t1273022909 * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((&___stream_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.MonoResource
struct MonoResource_t4103430009_marshaled_pinvoke
{
	uint8_t* ___data_0;
	char* ___name_1;
	char* ___filename_2;
	int32_t ___attrs_3;
	int32_t ___offset_4;
	Stream_t1273022909 * ___stream_5;
};
// Native definition for COM marshalling of System.Reflection.Emit.MonoResource
struct MonoResource_t4103430009_marshaled_com
{
	uint8_t* ___data_0;
	Il2CppChar* ___name_1;
	Il2CppChar* ___filename_2;
	int32_t ___attrs_3;
	int32_t ___offset_4;
	Stream_t1273022909 * ___stream_5;
};
#endif // MONORESOURCE_T4103430009_H
#ifndef REFEMITPERMISSIONSET_T484390987_H
#define REFEMITPERMISSIONSET_T484390987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.RefEmitPermissionSet
struct  RefEmitPermissionSet_t484390987 
{
public:
	// System.Security.Permissions.SecurityAction System.Reflection.Emit.RefEmitPermissionSet::action
	int32_t ___action_0;
	// System.String System.Reflection.Emit.RefEmitPermissionSet::pset
	String_t* ___pset_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(RefEmitPermissionSet_t484390987, ___action_0)); }
	inline int32_t get_action_0() const { return ___action_0; }
	inline int32_t* get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(int32_t value)
	{
		___action_0 = value;
	}

	inline static int32_t get_offset_of_pset_1() { return static_cast<int32_t>(offsetof(RefEmitPermissionSet_t484390987, ___pset_1)); }
	inline String_t* get_pset_1() const { return ___pset_1; }
	inline String_t** get_address_of_pset_1() { return &___pset_1; }
	inline void set_pset_1(String_t* value)
	{
		___pset_1 = value;
		Il2CppCodeGenWriteBarrier((&___pset_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.RefEmitPermissionSet
struct RefEmitPermissionSet_t484390987_marshaled_pinvoke
{
	int32_t ___action_0;
	char* ___pset_1;
};
// Native definition for COM marshalling of System.Reflection.Emit.RefEmitPermissionSet
struct RefEmitPermissionSet_t484390987_marshaled_com
{
	int32_t ___action_0;
	Il2CppChar* ___pset_1;
};
#endif // REFEMITPERMISSIONSET_T484390987_H
#ifndef LEVELDATA_T439927600_H
#define LEVELDATA_T439927600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DataManager/LevelData
struct  LevelData_t439927600 
{
public:
	// System.Int32 DataManager/LevelData::hitCountLeft
	int32_t ___hitCountLeft_0;
	// System.Int32 DataManager/LevelData::hitCountRight
	int32_t ___hitCountRight_1;
	// System.Single DataManager/LevelData::reactionTimeRight
	float ___reactionTimeRight_2;
	// System.Single DataManager/LevelData::reactionTimeLeft
	float ___reactionTimeLeft_3;
	// System.Int32 DataManager/LevelData::levelNumber
	int32_t ___levelNumber_4;
	// System.Int32 DataManager/LevelData::errorCount
	int32_t ___errorCount_5;
	// System.Int32 DataManager/LevelData::hitCount
	int32_t ___hitCount_6;
	// System.Collections.Generic.List`1<DataManager/Hit>[0...,0...] DataManager/LevelData::levelHits
	List_1U5B0___U2C0___U5D_t4040630876* ___levelHits_7;
	// System.Single DataManager/LevelData::reactionTime
	float ___reactionTime_8;
	// System.Single DataManager/LevelData::distanceAverage
	float ___distanceAverage_9;
	// UnityEngine.Vector2 DataManager/LevelData::centerOfHit
	Vector2_t2156229523  ___centerOfHit_10;
	// System.Single DataManager/LevelData::completionTime
	float ___completionTime_11;
	// System.Single DataManager/LevelData::sessionTime
	float ___sessionTime_12;
	// System.Int32 DataManager/LevelData::levelErrorsLeft
	int32_t ___levelErrorsLeft_13;
	// System.Int32 DataManager/LevelData::levelErrorsRight
	int32_t ___levelErrorsRight_14;
	// System.DateTime DataManager/LevelData::timestampStart
	DateTime_t3738529785  ___timestampStart_15;
	// System.DateTime DataManager/LevelData::timestampEnd
	DateTime_t3738529785  ___timestampEnd_16;
	// System.Boolean DataManager/LevelData::usedLineDrawing
	bool ___usedLineDrawing_17;
	// System.Boolean DataManager/LevelData::assistanceWasActive
	bool ___assistanceWasActive_18;

public:
	inline static int32_t get_offset_of_hitCountLeft_0() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___hitCountLeft_0)); }
	inline int32_t get_hitCountLeft_0() const { return ___hitCountLeft_0; }
	inline int32_t* get_address_of_hitCountLeft_0() { return &___hitCountLeft_0; }
	inline void set_hitCountLeft_0(int32_t value)
	{
		___hitCountLeft_0 = value;
	}

	inline static int32_t get_offset_of_hitCountRight_1() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___hitCountRight_1)); }
	inline int32_t get_hitCountRight_1() const { return ___hitCountRight_1; }
	inline int32_t* get_address_of_hitCountRight_1() { return &___hitCountRight_1; }
	inline void set_hitCountRight_1(int32_t value)
	{
		___hitCountRight_1 = value;
	}

	inline static int32_t get_offset_of_reactionTimeRight_2() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___reactionTimeRight_2)); }
	inline float get_reactionTimeRight_2() const { return ___reactionTimeRight_2; }
	inline float* get_address_of_reactionTimeRight_2() { return &___reactionTimeRight_2; }
	inline void set_reactionTimeRight_2(float value)
	{
		___reactionTimeRight_2 = value;
	}

	inline static int32_t get_offset_of_reactionTimeLeft_3() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___reactionTimeLeft_3)); }
	inline float get_reactionTimeLeft_3() const { return ___reactionTimeLeft_3; }
	inline float* get_address_of_reactionTimeLeft_3() { return &___reactionTimeLeft_3; }
	inline void set_reactionTimeLeft_3(float value)
	{
		___reactionTimeLeft_3 = value;
	}

	inline static int32_t get_offset_of_levelNumber_4() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___levelNumber_4)); }
	inline int32_t get_levelNumber_4() const { return ___levelNumber_4; }
	inline int32_t* get_address_of_levelNumber_4() { return &___levelNumber_4; }
	inline void set_levelNumber_4(int32_t value)
	{
		___levelNumber_4 = value;
	}

	inline static int32_t get_offset_of_errorCount_5() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___errorCount_5)); }
	inline int32_t get_errorCount_5() const { return ___errorCount_5; }
	inline int32_t* get_address_of_errorCount_5() { return &___errorCount_5; }
	inline void set_errorCount_5(int32_t value)
	{
		___errorCount_5 = value;
	}

	inline static int32_t get_offset_of_hitCount_6() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___hitCount_6)); }
	inline int32_t get_hitCount_6() const { return ___hitCount_6; }
	inline int32_t* get_address_of_hitCount_6() { return &___hitCount_6; }
	inline void set_hitCount_6(int32_t value)
	{
		___hitCount_6 = value;
	}

	inline static int32_t get_offset_of_levelHits_7() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___levelHits_7)); }
	inline List_1U5B0___U2C0___U5D_t4040630876* get_levelHits_7() const { return ___levelHits_7; }
	inline List_1U5B0___U2C0___U5D_t4040630876** get_address_of_levelHits_7() { return &___levelHits_7; }
	inline void set_levelHits_7(List_1U5B0___U2C0___U5D_t4040630876* value)
	{
		___levelHits_7 = value;
		Il2CppCodeGenWriteBarrier((&___levelHits_7), value);
	}

	inline static int32_t get_offset_of_reactionTime_8() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___reactionTime_8)); }
	inline float get_reactionTime_8() const { return ___reactionTime_8; }
	inline float* get_address_of_reactionTime_8() { return &___reactionTime_8; }
	inline void set_reactionTime_8(float value)
	{
		___reactionTime_8 = value;
	}

	inline static int32_t get_offset_of_distanceAverage_9() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___distanceAverage_9)); }
	inline float get_distanceAverage_9() const { return ___distanceAverage_9; }
	inline float* get_address_of_distanceAverage_9() { return &___distanceAverage_9; }
	inline void set_distanceAverage_9(float value)
	{
		___distanceAverage_9 = value;
	}

	inline static int32_t get_offset_of_centerOfHit_10() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___centerOfHit_10)); }
	inline Vector2_t2156229523  get_centerOfHit_10() const { return ___centerOfHit_10; }
	inline Vector2_t2156229523 * get_address_of_centerOfHit_10() { return &___centerOfHit_10; }
	inline void set_centerOfHit_10(Vector2_t2156229523  value)
	{
		___centerOfHit_10 = value;
	}

	inline static int32_t get_offset_of_completionTime_11() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___completionTime_11)); }
	inline float get_completionTime_11() const { return ___completionTime_11; }
	inline float* get_address_of_completionTime_11() { return &___completionTime_11; }
	inline void set_completionTime_11(float value)
	{
		___completionTime_11 = value;
	}

	inline static int32_t get_offset_of_sessionTime_12() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___sessionTime_12)); }
	inline float get_sessionTime_12() const { return ___sessionTime_12; }
	inline float* get_address_of_sessionTime_12() { return &___sessionTime_12; }
	inline void set_sessionTime_12(float value)
	{
		___sessionTime_12 = value;
	}

	inline static int32_t get_offset_of_levelErrorsLeft_13() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___levelErrorsLeft_13)); }
	inline int32_t get_levelErrorsLeft_13() const { return ___levelErrorsLeft_13; }
	inline int32_t* get_address_of_levelErrorsLeft_13() { return &___levelErrorsLeft_13; }
	inline void set_levelErrorsLeft_13(int32_t value)
	{
		___levelErrorsLeft_13 = value;
	}

	inline static int32_t get_offset_of_levelErrorsRight_14() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___levelErrorsRight_14)); }
	inline int32_t get_levelErrorsRight_14() const { return ___levelErrorsRight_14; }
	inline int32_t* get_address_of_levelErrorsRight_14() { return &___levelErrorsRight_14; }
	inline void set_levelErrorsRight_14(int32_t value)
	{
		___levelErrorsRight_14 = value;
	}

	inline static int32_t get_offset_of_timestampStart_15() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___timestampStart_15)); }
	inline DateTime_t3738529785  get_timestampStart_15() const { return ___timestampStart_15; }
	inline DateTime_t3738529785 * get_address_of_timestampStart_15() { return &___timestampStart_15; }
	inline void set_timestampStart_15(DateTime_t3738529785  value)
	{
		___timestampStart_15 = value;
	}

	inline static int32_t get_offset_of_timestampEnd_16() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___timestampEnd_16)); }
	inline DateTime_t3738529785  get_timestampEnd_16() const { return ___timestampEnd_16; }
	inline DateTime_t3738529785 * get_address_of_timestampEnd_16() { return &___timestampEnd_16; }
	inline void set_timestampEnd_16(DateTime_t3738529785  value)
	{
		___timestampEnd_16 = value;
	}

	inline static int32_t get_offset_of_usedLineDrawing_17() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___usedLineDrawing_17)); }
	inline bool get_usedLineDrawing_17() const { return ___usedLineDrawing_17; }
	inline bool* get_address_of_usedLineDrawing_17() { return &___usedLineDrawing_17; }
	inline void set_usedLineDrawing_17(bool value)
	{
		___usedLineDrawing_17 = value;
	}

	inline static int32_t get_offset_of_assistanceWasActive_18() { return static_cast<int32_t>(offsetof(LevelData_t439927600, ___assistanceWasActive_18)); }
	inline bool get_assistanceWasActive_18() const { return ___assistanceWasActive_18; }
	inline bool* get_address_of_assistanceWasActive_18() { return &___assistanceWasActive_18; }
	inline void set_assistanceWasActive_18(bool value)
	{
		___assistanceWasActive_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of DataManager/LevelData
struct LevelData_t439927600_marshaled_pinvoke
{
	int32_t ___hitCountLeft_0;
	int32_t ___hitCountRight_1;
	float ___reactionTimeRight_2;
	float ___reactionTimeLeft_3;
	int32_t ___levelNumber_4;
	int32_t ___errorCount_5;
	int32_t ___hitCount_6;
	List_1_t773213486 ** ___levelHits_7;
	float ___reactionTime_8;
	float ___distanceAverage_9;
	Vector2_t2156229523  ___centerOfHit_10;
	float ___completionTime_11;
	float ___sessionTime_12;
	int32_t ___levelErrorsLeft_13;
	int32_t ___levelErrorsRight_14;
	DateTime_t3738529785  ___timestampStart_15;
	DateTime_t3738529785  ___timestampEnd_16;
	int32_t ___usedLineDrawing_17;
	int32_t ___assistanceWasActive_18;
};
// Native definition for COM marshalling of DataManager/LevelData
struct LevelData_t439927600_marshaled_com
{
	int32_t ___hitCountLeft_0;
	int32_t ___hitCountRight_1;
	float ___reactionTimeRight_2;
	float ___reactionTimeLeft_3;
	int32_t ___levelNumber_4;
	int32_t ___errorCount_5;
	int32_t ___hitCount_6;
	List_1_t773213486 ** ___levelHits_7;
	float ___reactionTime_8;
	float ___distanceAverage_9;
	Vector2_t2156229523  ___centerOfHit_10;
	float ___completionTime_11;
	float ___sessionTime_12;
	int32_t ___levelErrorsLeft_13;
	int32_t ___levelErrorsRight_14;
	DateTime_t3738529785  ___timestampStart_15;
	DateTime_t3738529785  ___timestampEnd_16;
	int32_t ___usedLineDrawing_17;
	int32_t ___assistanceWasActive_18;
};
#endif // LEVELDATA_T439927600_H
#ifndef SESSIONDATA_T844877374_H
#define SESSIONDATA_T844877374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DataManager/SessionData
struct  SessionData_t844877374 
{
public:
	// System.String DataManager/SessionData::currentProfileID
	String_t* ___currentProfileID_0;
	// System.String DataManager/SessionData::deviceModel
	String_t* ___deviceModel_1;
	// System.String DataManager/SessionData::playerName
	String_t* ___playerName_2;
	// System.String DataManager/SessionData::email
	String_t* ___email_3;
	// System.String DataManager/SessionData::playContext
	String_t* ___playContext_4;
	// System.String DataManager/SessionData::trainingReason
	String_t* ___trainingReason_5;
	// System.String DataManager/SessionData::ageGroup
	String_t* ___ageGroup_6;
	// System.Boolean DataManager/SessionData::tutorialSeen
	bool ___tutorialSeen_7;
	// System.Boolean DataManager/SessionData::laneSetting
	bool ___laneSetting_8;
	// System.Boolean DataManager/SessionData::pulseSetting
	bool ___pulseSetting_9;
	// System.Boolean DataManager/SessionData::voiceSetting
	bool ___voiceSetting_10;
	// System.Boolean DataManager/SessionData::repeatVoiceSetting
	bool ___repeatVoiceSetting_11;
	// System.Boolean DataManager/SessionData::dataVisEnabled
	bool ___dataVisEnabled_12;
	// System.String DataManager/SessionData::version
	String_t* ___version_13;
	// System.Single DataManager/SessionData::reactionTime
	float ___reactionTime_14;
	// System.Single[0...,0...] DataManager/SessionData::fieldReactionTimes
	SingleU5B0___U2C0___U5D_t1444911252* ___fieldReactionTimes_15;
	// System.Single[0...,0...] DataManager/SessionData::fieldDistances
	SingleU5B0___U2C0___U5D_t1444911252* ___fieldDistances_16;
	// System.Int32[0...,0...] DataManager/SessionData::fieldAssistanceCount
	Int32U5B0___U2C0___U5D_t385246373* ___fieldAssistanceCount_17;
	// System.Int32[0...,0...] DataManager/SessionData::fieldOutlierCount
	Int32U5B0___U2C0___U5D_t385246373* ___fieldOutlierCount_18;
	// System.Int32 DataManager/SessionData::errorCount
	int32_t ___errorCount_19;
	// System.Int32 DataManager/SessionData::hitCount
	int32_t ___hitCount_20;
	// System.Int32 DataManager/SessionData::levelCount
	int32_t ___levelCount_21;
	// System.Int32 DataManager/SessionData::difficultyLevel
	int32_t ___difficultyLevel_22;
	// System.String DataManager/SessionData::gameType
	String_t* ___gameType_23;
	// System.Single DataManager/SessionData::sessionLength
	float ___sessionLength_24;
	// System.Single DataManager/SessionData::bestCompletionTime
	float ___bestCompletionTime_25;
	// System.DateTime DataManager/SessionData::timestamp
	DateTime_t3738529785  ___timestamp_26;
	// System.Boolean DataManager/SessionData::intro
	bool ___intro_27;
	// System.Single DataManager/SessionData::worstReactionTime
	float ___worstReactionTime_28;
	// System.Single DataManager/SessionData::bestReactionTime
	float ___bestReactionTime_29;
	// System.Single DataManager/SessionData::medianReactionTime
	float ___medianReactionTime_30;
	// System.Single DataManager/SessionData::assistanceCount
	float ___assistanceCount_31;

public:
	inline static int32_t get_offset_of_currentProfileID_0() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___currentProfileID_0)); }
	inline String_t* get_currentProfileID_0() const { return ___currentProfileID_0; }
	inline String_t** get_address_of_currentProfileID_0() { return &___currentProfileID_0; }
	inline void set_currentProfileID_0(String_t* value)
	{
		___currentProfileID_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentProfileID_0), value);
	}

	inline static int32_t get_offset_of_deviceModel_1() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___deviceModel_1)); }
	inline String_t* get_deviceModel_1() const { return ___deviceModel_1; }
	inline String_t** get_address_of_deviceModel_1() { return &___deviceModel_1; }
	inline void set_deviceModel_1(String_t* value)
	{
		___deviceModel_1 = value;
		Il2CppCodeGenWriteBarrier((&___deviceModel_1), value);
	}

	inline static int32_t get_offset_of_playerName_2() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___playerName_2)); }
	inline String_t* get_playerName_2() const { return ___playerName_2; }
	inline String_t** get_address_of_playerName_2() { return &___playerName_2; }
	inline void set_playerName_2(String_t* value)
	{
		___playerName_2 = value;
		Il2CppCodeGenWriteBarrier((&___playerName_2), value);
	}

	inline static int32_t get_offset_of_email_3() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___email_3)); }
	inline String_t* get_email_3() const { return ___email_3; }
	inline String_t** get_address_of_email_3() { return &___email_3; }
	inline void set_email_3(String_t* value)
	{
		___email_3 = value;
		Il2CppCodeGenWriteBarrier((&___email_3), value);
	}

	inline static int32_t get_offset_of_playContext_4() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___playContext_4)); }
	inline String_t* get_playContext_4() const { return ___playContext_4; }
	inline String_t** get_address_of_playContext_4() { return &___playContext_4; }
	inline void set_playContext_4(String_t* value)
	{
		___playContext_4 = value;
		Il2CppCodeGenWriteBarrier((&___playContext_4), value);
	}

	inline static int32_t get_offset_of_trainingReason_5() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___trainingReason_5)); }
	inline String_t* get_trainingReason_5() const { return ___trainingReason_5; }
	inline String_t** get_address_of_trainingReason_5() { return &___trainingReason_5; }
	inline void set_trainingReason_5(String_t* value)
	{
		___trainingReason_5 = value;
		Il2CppCodeGenWriteBarrier((&___trainingReason_5), value);
	}

	inline static int32_t get_offset_of_ageGroup_6() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___ageGroup_6)); }
	inline String_t* get_ageGroup_6() const { return ___ageGroup_6; }
	inline String_t** get_address_of_ageGroup_6() { return &___ageGroup_6; }
	inline void set_ageGroup_6(String_t* value)
	{
		___ageGroup_6 = value;
		Il2CppCodeGenWriteBarrier((&___ageGroup_6), value);
	}

	inline static int32_t get_offset_of_tutorialSeen_7() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___tutorialSeen_7)); }
	inline bool get_tutorialSeen_7() const { return ___tutorialSeen_7; }
	inline bool* get_address_of_tutorialSeen_7() { return &___tutorialSeen_7; }
	inline void set_tutorialSeen_7(bool value)
	{
		___tutorialSeen_7 = value;
	}

	inline static int32_t get_offset_of_laneSetting_8() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___laneSetting_8)); }
	inline bool get_laneSetting_8() const { return ___laneSetting_8; }
	inline bool* get_address_of_laneSetting_8() { return &___laneSetting_8; }
	inline void set_laneSetting_8(bool value)
	{
		___laneSetting_8 = value;
	}

	inline static int32_t get_offset_of_pulseSetting_9() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___pulseSetting_9)); }
	inline bool get_pulseSetting_9() const { return ___pulseSetting_9; }
	inline bool* get_address_of_pulseSetting_9() { return &___pulseSetting_9; }
	inline void set_pulseSetting_9(bool value)
	{
		___pulseSetting_9 = value;
	}

	inline static int32_t get_offset_of_voiceSetting_10() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___voiceSetting_10)); }
	inline bool get_voiceSetting_10() const { return ___voiceSetting_10; }
	inline bool* get_address_of_voiceSetting_10() { return &___voiceSetting_10; }
	inline void set_voiceSetting_10(bool value)
	{
		___voiceSetting_10 = value;
	}

	inline static int32_t get_offset_of_repeatVoiceSetting_11() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___repeatVoiceSetting_11)); }
	inline bool get_repeatVoiceSetting_11() const { return ___repeatVoiceSetting_11; }
	inline bool* get_address_of_repeatVoiceSetting_11() { return &___repeatVoiceSetting_11; }
	inline void set_repeatVoiceSetting_11(bool value)
	{
		___repeatVoiceSetting_11 = value;
	}

	inline static int32_t get_offset_of_dataVisEnabled_12() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___dataVisEnabled_12)); }
	inline bool get_dataVisEnabled_12() const { return ___dataVisEnabled_12; }
	inline bool* get_address_of_dataVisEnabled_12() { return &___dataVisEnabled_12; }
	inline void set_dataVisEnabled_12(bool value)
	{
		___dataVisEnabled_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___version_13)); }
	inline String_t* get_version_13() const { return ___version_13; }
	inline String_t** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(String_t* value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((&___version_13), value);
	}

	inline static int32_t get_offset_of_reactionTime_14() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___reactionTime_14)); }
	inline float get_reactionTime_14() const { return ___reactionTime_14; }
	inline float* get_address_of_reactionTime_14() { return &___reactionTime_14; }
	inline void set_reactionTime_14(float value)
	{
		___reactionTime_14 = value;
	}

	inline static int32_t get_offset_of_fieldReactionTimes_15() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___fieldReactionTimes_15)); }
	inline SingleU5B0___U2C0___U5D_t1444911252* get_fieldReactionTimes_15() const { return ___fieldReactionTimes_15; }
	inline SingleU5B0___U2C0___U5D_t1444911252** get_address_of_fieldReactionTimes_15() { return &___fieldReactionTimes_15; }
	inline void set_fieldReactionTimes_15(SingleU5B0___U2C0___U5D_t1444911252* value)
	{
		___fieldReactionTimes_15 = value;
		Il2CppCodeGenWriteBarrier((&___fieldReactionTimes_15), value);
	}

	inline static int32_t get_offset_of_fieldDistances_16() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___fieldDistances_16)); }
	inline SingleU5B0___U2C0___U5D_t1444911252* get_fieldDistances_16() const { return ___fieldDistances_16; }
	inline SingleU5B0___U2C0___U5D_t1444911252** get_address_of_fieldDistances_16() { return &___fieldDistances_16; }
	inline void set_fieldDistances_16(SingleU5B0___U2C0___U5D_t1444911252* value)
	{
		___fieldDistances_16 = value;
		Il2CppCodeGenWriteBarrier((&___fieldDistances_16), value);
	}

	inline static int32_t get_offset_of_fieldAssistanceCount_17() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___fieldAssistanceCount_17)); }
	inline Int32U5B0___U2C0___U5D_t385246373* get_fieldAssistanceCount_17() const { return ___fieldAssistanceCount_17; }
	inline Int32U5B0___U2C0___U5D_t385246373** get_address_of_fieldAssistanceCount_17() { return &___fieldAssistanceCount_17; }
	inline void set_fieldAssistanceCount_17(Int32U5B0___U2C0___U5D_t385246373* value)
	{
		___fieldAssistanceCount_17 = value;
		Il2CppCodeGenWriteBarrier((&___fieldAssistanceCount_17), value);
	}

	inline static int32_t get_offset_of_fieldOutlierCount_18() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___fieldOutlierCount_18)); }
	inline Int32U5B0___U2C0___U5D_t385246373* get_fieldOutlierCount_18() const { return ___fieldOutlierCount_18; }
	inline Int32U5B0___U2C0___U5D_t385246373** get_address_of_fieldOutlierCount_18() { return &___fieldOutlierCount_18; }
	inline void set_fieldOutlierCount_18(Int32U5B0___U2C0___U5D_t385246373* value)
	{
		___fieldOutlierCount_18 = value;
		Il2CppCodeGenWriteBarrier((&___fieldOutlierCount_18), value);
	}

	inline static int32_t get_offset_of_errorCount_19() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___errorCount_19)); }
	inline int32_t get_errorCount_19() const { return ___errorCount_19; }
	inline int32_t* get_address_of_errorCount_19() { return &___errorCount_19; }
	inline void set_errorCount_19(int32_t value)
	{
		___errorCount_19 = value;
	}

	inline static int32_t get_offset_of_hitCount_20() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___hitCount_20)); }
	inline int32_t get_hitCount_20() const { return ___hitCount_20; }
	inline int32_t* get_address_of_hitCount_20() { return &___hitCount_20; }
	inline void set_hitCount_20(int32_t value)
	{
		___hitCount_20 = value;
	}

	inline static int32_t get_offset_of_levelCount_21() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___levelCount_21)); }
	inline int32_t get_levelCount_21() const { return ___levelCount_21; }
	inline int32_t* get_address_of_levelCount_21() { return &___levelCount_21; }
	inline void set_levelCount_21(int32_t value)
	{
		___levelCount_21 = value;
	}

	inline static int32_t get_offset_of_difficultyLevel_22() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___difficultyLevel_22)); }
	inline int32_t get_difficultyLevel_22() const { return ___difficultyLevel_22; }
	inline int32_t* get_address_of_difficultyLevel_22() { return &___difficultyLevel_22; }
	inline void set_difficultyLevel_22(int32_t value)
	{
		___difficultyLevel_22 = value;
	}

	inline static int32_t get_offset_of_gameType_23() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___gameType_23)); }
	inline String_t* get_gameType_23() const { return ___gameType_23; }
	inline String_t** get_address_of_gameType_23() { return &___gameType_23; }
	inline void set_gameType_23(String_t* value)
	{
		___gameType_23 = value;
		Il2CppCodeGenWriteBarrier((&___gameType_23), value);
	}

	inline static int32_t get_offset_of_sessionLength_24() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___sessionLength_24)); }
	inline float get_sessionLength_24() const { return ___sessionLength_24; }
	inline float* get_address_of_sessionLength_24() { return &___sessionLength_24; }
	inline void set_sessionLength_24(float value)
	{
		___sessionLength_24 = value;
	}

	inline static int32_t get_offset_of_bestCompletionTime_25() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___bestCompletionTime_25)); }
	inline float get_bestCompletionTime_25() const { return ___bestCompletionTime_25; }
	inline float* get_address_of_bestCompletionTime_25() { return &___bestCompletionTime_25; }
	inline void set_bestCompletionTime_25(float value)
	{
		___bestCompletionTime_25 = value;
	}

	inline static int32_t get_offset_of_timestamp_26() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___timestamp_26)); }
	inline DateTime_t3738529785  get_timestamp_26() const { return ___timestamp_26; }
	inline DateTime_t3738529785 * get_address_of_timestamp_26() { return &___timestamp_26; }
	inline void set_timestamp_26(DateTime_t3738529785  value)
	{
		___timestamp_26 = value;
	}

	inline static int32_t get_offset_of_intro_27() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___intro_27)); }
	inline bool get_intro_27() const { return ___intro_27; }
	inline bool* get_address_of_intro_27() { return &___intro_27; }
	inline void set_intro_27(bool value)
	{
		___intro_27 = value;
	}

	inline static int32_t get_offset_of_worstReactionTime_28() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___worstReactionTime_28)); }
	inline float get_worstReactionTime_28() const { return ___worstReactionTime_28; }
	inline float* get_address_of_worstReactionTime_28() { return &___worstReactionTime_28; }
	inline void set_worstReactionTime_28(float value)
	{
		___worstReactionTime_28 = value;
	}

	inline static int32_t get_offset_of_bestReactionTime_29() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___bestReactionTime_29)); }
	inline float get_bestReactionTime_29() const { return ___bestReactionTime_29; }
	inline float* get_address_of_bestReactionTime_29() { return &___bestReactionTime_29; }
	inline void set_bestReactionTime_29(float value)
	{
		___bestReactionTime_29 = value;
	}

	inline static int32_t get_offset_of_medianReactionTime_30() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___medianReactionTime_30)); }
	inline float get_medianReactionTime_30() const { return ___medianReactionTime_30; }
	inline float* get_address_of_medianReactionTime_30() { return &___medianReactionTime_30; }
	inline void set_medianReactionTime_30(float value)
	{
		___medianReactionTime_30 = value;
	}

	inline static int32_t get_offset_of_assistanceCount_31() { return static_cast<int32_t>(offsetof(SessionData_t844877374, ___assistanceCount_31)); }
	inline float get_assistanceCount_31() const { return ___assistanceCount_31; }
	inline float* get_address_of_assistanceCount_31() { return &___assistanceCount_31; }
	inline void set_assistanceCount_31(float value)
	{
		___assistanceCount_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of DataManager/SessionData
struct SessionData_t844877374_marshaled_pinvoke
{
	char* ___currentProfileID_0;
	char* ___deviceModel_1;
	char* ___playerName_2;
	char* ___email_3;
	char* ___playContext_4;
	char* ___trainingReason_5;
	char* ___ageGroup_6;
	int32_t ___tutorialSeen_7;
	int32_t ___laneSetting_8;
	int32_t ___pulseSetting_9;
	int32_t ___voiceSetting_10;
	int32_t ___repeatVoiceSetting_11;
	int32_t ___dataVisEnabled_12;
	char* ___version_13;
	float ___reactionTime_14;
	float* ___fieldReactionTimes_15;
	float* ___fieldDistances_16;
	int32_t* ___fieldAssistanceCount_17;
	int32_t* ___fieldOutlierCount_18;
	int32_t ___errorCount_19;
	int32_t ___hitCount_20;
	int32_t ___levelCount_21;
	int32_t ___difficultyLevel_22;
	char* ___gameType_23;
	float ___sessionLength_24;
	float ___bestCompletionTime_25;
	DateTime_t3738529785  ___timestamp_26;
	int32_t ___intro_27;
	float ___worstReactionTime_28;
	float ___bestReactionTime_29;
	float ___medianReactionTime_30;
	float ___assistanceCount_31;
};
// Native definition for COM marshalling of DataManager/SessionData
struct SessionData_t844877374_marshaled_com
{
	Il2CppChar* ___currentProfileID_0;
	Il2CppChar* ___deviceModel_1;
	Il2CppChar* ___playerName_2;
	Il2CppChar* ___email_3;
	Il2CppChar* ___playContext_4;
	Il2CppChar* ___trainingReason_5;
	Il2CppChar* ___ageGroup_6;
	int32_t ___tutorialSeen_7;
	int32_t ___laneSetting_8;
	int32_t ___pulseSetting_9;
	int32_t ___voiceSetting_10;
	int32_t ___repeatVoiceSetting_11;
	int32_t ___dataVisEnabled_12;
	Il2CppChar* ___version_13;
	float ___reactionTime_14;
	float* ___fieldReactionTimes_15;
	float* ___fieldDistances_16;
	int32_t* ___fieldAssistanceCount_17;
	int32_t* ___fieldOutlierCount_18;
	int32_t ___errorCount_19;
	int32_t ___hitCount_20;
	int32_t ___levelCount_21;
	int32_t ___difficultyLevel_22;
	Il2CppChar* ___gameType_23;
	float ___sessionLength_24;
	float ___bestCompletionTime_25;
	DateTime_t3738529785  ___timestamp_26;
	int32_t ___intro_27;
	float ___worstReactionTime_28;
	float ___bestReactionTime_29;
	float ___medianReactionTime_30;
	float ___assistanceCount_31;
};
#endif // SESSIONDATA_T844877374_H
#ifndef TRANSFORM_1_T1235930838_H
#define TRANSFORM_1_T1235930838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>
struct  Transform_1_t1235930838  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T1235930838_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TRANSFORM_1_T4165270170_H
#define TRANSFORM_1_T4165270170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
struct  Transform_1_t4165270170  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T4165270170_H
#ifndef COMPARISON_1_T3970197989_H
#define COMPARISON_1_T3970197989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<UnityEngine.UILineInfo>
struct  Comparison_1_t3970197989  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T3970197989_H
#ifndef COMPARISON_1_T3093960116_H
#define COMPARISON_1_T3093960116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<UnityEngine.Vector4>
struct  Comparison_1_t3093960116  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T3093960116_H
#ifndef COMPARISON_1_T3497244643_H
#define COMPARISON_1_T3497244643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<UnityEngine.Vector3>
struct  Comparison_1_t3497244643  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T3497244643_H
#ifndef COMPARISON_1_T1931160702_H
#define COMPARISON_1_T1931160702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<UnityEngine.Vector2>
struct  Comparison_1_t1931160702  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T1931160702_H
#ifndef PREDICATE_1_T3905400288_H
#define PREDICATE_1_T3905400288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Object>
struct  Predicate_1_t3905400288  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T3905400288_H
#ifndef SWAPPER_T2822380397_H
#define SWAPPER_T2822380397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array/Swapper
struct  Swapper_t2822380397  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWAPPER_T2822380397_H
#ifndef COMPARISON_1_T3832428784_H
#define COMPARISON_1_T3832428784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<UnityEngine.UIVertex>
struct  Comparison_1_t3832428784  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T3832428784_H
#ifndef TRANSFORM_1_T1027527961_H
#define TRANSFORM_1_T1027527961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct  Transform_1_t1027527961  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T1027527961_H
#ifndef TRANSFORM_1_T1750446691_H
#define TRANSFORM_1_T1750446691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
struct  Transform_1_t1750446691  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T1750446691_H
#ifndef TRANSFORM_1_T686041993_H
#define TRANSFORM_1_T686041993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct  Transform_1_t686041993  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T686041993_H
#ifndef TRANSFORM_1_T833711493_H
#define TRANSFORM_1_T833711493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Collections.DictionaryEntry>
struct  Transform_1_t833711493  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T833711493_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef TRANSFORM_1_T4262618511_H
#define TRANSFORM_1_T4262618511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>
struct  Transform_1_t4262618511  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T4262618511_H
#ifndef TRANSFORM_1_T1409379905_H
#define TRANSFORM_1_T1409379905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>
struct  Transform_1_t1409379905  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T1409379905_H
#ifndef TRANSFORM_1_T789842019_H
#define TRANSFORM_1_T789842019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Object>
struct  Transform_1_t789842019  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T789842019_H
#ifndef CONVERTER_2_T2442480487_H
#define CONVERTER_2_T2442480487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Converter`2<System.Object,System.Object>
struct  Converter_2_t2442480487  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERTER_2_T2442480487_H
#ifndef TRANSFORM_1_T1577416806_H
#define TRANSFORM_1_T1577416806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
struct  Transform_1_t1577416806  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T1577416806_H
#ifndef TRANSFORM_1_T2448278169_H
#define TRANSFORM_1_T2448278169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
struct  Transform_1_t2448278169  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T2448278169_H
#ifndef EVENTFUNCTION_1_T1764640198_H
#define EVENTFUNCTION_1_T1764640198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct  EventFunction_1_t1764640198  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_T1764640198_H
#ifndef TRANSFORM_1_T4209139644_H
#define TRANSFORM_1_T4209139644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
struct  Transform_1_t4209139644  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T4209139644_H
#ifndef TRANSFORM_1_T3690794193_H
#define TRANSFORM_1_T3690794193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct  Transform_1_t3690794193  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T3690794193_H
#ifndef TRANSFORM_1_T3615381325_H
#define TRANSFORM_1_T3615381325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transform_1_t3615381325  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T3615381325_H
#ifndef TRANSFORM_1_T2404408695_H
#define TRANSFORM_1_T2404408695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
struct  Transform_1_t2404408695  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T2404408695_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef UTILS_T1444179947_H
#define UTILS_T1444179947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils
struct  Utils_t1444179947  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILS_T1444179947_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef LAYOUTGROUP_T2436138090_H
#define LAYOUTGROUP_T2436138090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.LayoutGroup
struct  LayoutGroup_t2436138090  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t1369453676 * ___m_Padding_2;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_3;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t3704657025 * ___m_Rect_4;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_5;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t2156229523  ___m_TotalMinSize_6;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t2156229523  ___m_TotalPreferredSize_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t2156229523  ___m_TotalFlexibleSize_8;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t881764471 * ___m_RectChildren_9;

public:
	inline static int32_t get_offset_of_m_Padding_2() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_Padding_2)); }
	inline RectOffset_t1369453676 * get_m_Padding_2() const { return ___m_Padding_2; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_2() { return &___m_Padding_2; }
	inline void set_m_Padding_2(RectOffset_t1369453676 * value)
	{
		___m_Padding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_2), value);
	}

	inline static int32_t get_offset_of_m_ChildAlignment_3() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_ChildAlignment_3)); }
	inline int32_t get_m_ChildAlignment_3() const { return ___m_ChildAlignment_3; }
	inline int32_t* get_address_of_m_ChildAlignment_3() { return &___m_ChildAlignment_3; }
	inline void set_m_ChildAlignment_3(int32_t value)
	{
		___m_ChildAlignment_3 = value;
	}

	inline static int32_t get_offset_of_m_Rect_4() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_Rect_4)); }
	inline RectTransform_t3704657025 * get_m_Rect_4() const { return ___m_Rect_4; }
	inline RectTransform_t3704657025 ** get_address_of_m_Rect_4() { return &___m_Rect_4; }
	inline void set_m_Rect_4(RectTransform_t3704657025 * value)
	{
		___m_Rect_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rect_4), value);
	}

	inline static int32_t get_offset_of_m_Tracker_5() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_Tracker_5)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_5() const { return ___m_Tracker_5; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_5() { return &___m_Tracker_5; }
	inline void set_m_Tracker_5(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_5 = value;
	}

	inline static int32_t get_offset_of_m_TotalMinSize_6() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_TotalMinSize_6)); }
	inline Vector2_t2156229523  get_m_TotalMinSize_6() const { return ___m_TotalMinSize_6; }
	inline Vector2_t2156229523 * get_address_of_m_TotalMinSize_6() { return &___m_TotalMinSize_6; }
	inline void set_m_TotalMinSize_6(Vector2_t2156229523  value)
	{
		___m_TotalMinSize_6 = value;
	}

	inline static int32_t get_offset_of_m_TotalPreferredSize_7() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_TotalPreferredSize_7)); }
	inline Vector2_t2156229523  get_m_TotalPreferredSize_7() const { return ___m_TotalPreferredSize_7; }
	inline Vector2_t2156229523 * get_address_of_m_TotalPreferredSize_7() { return &___m_TotalPreferredSize_7; }
	inline void set_m_TotalPreferredSize_7(Vector2_t2156229523  value)
	{
		___m_TotalPreferredSize_7 = value;
	}

	inline static int32_t get_offset_of_m_TotalFlexibleSize_8() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_TotalFlexibleSize_8)); }
	inline Vector2_t2156229523  get_m_TotalFlexibleSize_8() const { return ___m_TotalFlexibleSize_8; }
	inline Vector2_t2156229523 * get_address_of_m_TotalFlexibleSize_8() { return &___m_TotalFlexibleSize_8; }
	inline void set_m_TotalFlexibleSize_8(Vector2_t2156229523  value)
	{
		___m_TotalFlexibleSize_8 = value;
	}

	inline static int32_t get_offset_of_m_RectChildren_9() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_RectChildren_9)); }
	inline List_1_t881764471 * get_m_RectChildren_9() const { return ___m_RectChildren_9; }
	inline List_1_t881764471 ** get_address_of_m_RectChildren_9() { return &___m_RectChildren_9; }
	inline void set_m_RectChildren_9(List_1_t881764471 * value)
	{
		___m_RectChildren_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectChildren_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTGROUP_T2436138090_H
#ifndef DROPDOWN_T2274391225_H
#define DROPDOWN_T2274391225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Dropdown
struct  Dropdown_t2274391225  : public Selectable_t3250028441
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t3704657025 * ___m_Template_16;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t1901882714 * ___m_CaptionText_17;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t2670269651 * ___m_CaptionImage_18;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t1901882714 * ___m_ItemText_19;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t2670269651 * ___m_ItemImage_20;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_21;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t1438173104 * ___m_Options_22;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t4040729994 * ___m_OnValueChanged_23;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t1113636619 * ___m_Dropdown_24;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t1113636619 * ___m_Blocker_25;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t2924027637 * ___m_Items_26;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t3520241082 * ___m_AlphaTweenRunner_27;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_28;

public:
	inline static int32_t get_offset_of_m_Template_16() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Template_16)); }
	inline RectTransform_t3704657025 * get_m_Template_16() const { return ___m_Template_16; }
	inline RectTransform_t3704657025 ** get_address_of_m_Template_16() { return &___m_Template_16; }
	inline void set_m_Template_16(RectTransform_t3704657025 * value)
	{
		___m_Template_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_Template_16), value);
	}

	inline static int32_t get_offset_of_m_CaptionText_17() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_CaptionText_17)); }
	inline Text_t1901882714 * get_m_CaptionText_17() const { return ___m_CaptionText_17; }
	inline Text_t1901882714 ** get_address_of_m_CaptionText_17() { return &___m_CaptionText_17; }
	inline void set_m_CaptionText_17(Text_t1901882714 * value)
	{
		___m_CaptionText_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CaptionText_17), value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_18() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_CaptionImage_18)); }
	inline Image_t2670269651 * get_m_CaptionImage_18() const { return ___m_CaptionImage_18; }
	inline Image_t2670269651 ** get_address_of_m_CaptionImage_18() { return &___m_CaptionImage_18; }
	inline void set_m_CaptionImage_18(Image_t2670269651 * value)
	{
		___m_CaptionImage_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_CaptionImage_18), value);
	}

	inline static int32_t get_offset_of_m_ItemText_19() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_ItemText_19)); }
	inline Text_t1901882714 * get_m_ItemText_19() const { return ___m_ItemText_19; }
	inline Text_t1901882714 ** get_address_of_m_ItemText_19() { return &___m_ItemText_19; }
	inline void set_m_ItemText_19(Text_t1901882714 * value)
	{
		___m_ItemText_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemText_19), value);
	}

	inline static int32_t get_offset_of_m_ItemImage_20() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_ItemImage_20)); }
	inline Image_t2670269651 * get_m_ItemImage_20() const { return ___m_ItemImage_20; }
	inline Image_t2670269651 ** get_address_of_m_ItemImage_20() { return &___m_ItemImage_20; }
	inline void set_m_ItemImage_20(Image_t2670269651 * value)
	{
		___m_ItemImage_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemImage_20), value);
	}

	inline static int32_t get_offset_of_m_Value_21() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Value_21)); }
	inline int32_t get_m_Value_21() const { return ___m_Value_21; }
	inline int32_t* get_address_of_m_Value_21() { return &___m_Value_21; }
	inline void set_m_Value_21(int32_t value)
	{
		___m_Value_21 = value;
	}

	inline static int32_t get_offset_of_m_Options_22() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Options_22)); }
	inline OptionDataList_t1438173104 * get_m_Options_22() const { return ___m_Options_22; }
	inline OptionDataList_t1438173104 ** get_address_of_m_Options_22() { return &___m_Options_22; }
	inline void set_m_Options_22(OptionDataList_t1438173104 * value)
	{
		___m_Options_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_Options_22), value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_23() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_OnValueChanged_23)); }
	inline DropdownEvent_t4040729994 * get_m_OnValueChanged_23() const { return ___m_OnValueChanged_23; }
	inline DropdownEvent_t4040729994 ** get_address_of_m_OnValueChanged_23() { return &___m_OnValueChanged_23; }
	inline void set_m_OnValueChanged_23(DropdownEvent_t4040729994 * value)
	{
		___m_OnValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_23), value);
	}

	inline static int32_t get_offset_of_m_Dropdown_24() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Dropdown_24)); }
	inline GameObject_t1113636619 * get_m_Dropdown_24() const { return ___m_Dropdown_24; }
	inline GameObject_t1113636619 ** get_address_of_m_Dropdown_24() { return &___m_Dropdown_24; }
	inline void set_m_Dropdown_24(GameObject_t1113636619 * value)
	{
		___m_Dropdown_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dropdown_24), value);
	}

	inline static int32_t get_offset_of_m_Blocker_25() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Blocker_25)); }
	inline GameObject_t1113636619 * get_m_Blocker_25() const { return ___m_Blocker_25; }
	inline GameObject_t1113636619 ** get_address_of_m_Blocker_25() { return &___m_Blocker_25; }
	inline void set_m_Blocker_25(GameObject_t1113636619 * value)
	{
		___m_Blocker_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_Blocker_25), value);
	}

	inline static int32_t get_offset_of_m_Items_26() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Items_26)); }
	inline List_1_t2924027637 * get_m_Items_26() const { return ___m_Items_26; }
	inline List_1_t2924027637 ** get_address_of_m_Items_26() { return &___m_Items_26; }
	inline void set_m_Items_26(List_1_t2924027637 * value)
	{
		___m_Items_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Items_26), value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_27() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_AlphaTweenRunner_27)); }
	inline TweenRunner_1_t3520241082 * get_m_AlphaTweenRunner_27() const { return ___m_AlphaTweenRunner_27; }
	inline TweenRunner_1_t3520241082 ** get_address_of_m_AlphaTweenRunner_27() { return &___m_AlphaTweenRunner_27; }
	inline void set_m_AlphaTweenRunner_27(TweenRunner_1_t3520241082 * value)
	{
		___m_AlphaTweenRunner_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_AlphaTweenRunner_27), value);
	}

	inline static int32_t get_offset_of_validTemplate_28() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___validTemplate_28)); }
	inline bool get_validTemplate_28() const { return ___validTemplate_28; }
	inline bool* get_address_of_validTemplate_28() { return &___validTemplate_28; }
	inline void set_validTemplate_28(bool value)
	{
		___validTemplate_28 = value;
	}
};

struct Dropdown_t2274391225_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t3270282352 * ___s_NoOptionData_29;

public:
	inline static int32_t get_offset_of_s_NoOptionData_29() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225_StaticFields, ___s_NoOptionData_29)); }
	inline OptionData_t3270282352 * get_s_NoOptionData_29() const { return ___s_NoOptionData_29; }
	inline OptionData_t3270282352 ** get_address_of_s_NoOptionData_29() { return &___s_NoOptionData_29; }
	inline void set_s_NoOptionData_29(OptionData_t3270282352 * value)
	{
		___s_NoOptionData_29 = value;
		Il2CppCodeGenWriteBarrier((&___s_NoOptionData_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DROPDOWN_T2274391225_H
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t1655937503  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UILineInfo_t4195266810  m_Items[1];

public:
	inline UILineInfo_t4195266810  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UILineInfo_t4195266810 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UILineInfo_t4195266810  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UILineInfo_t4195266810  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UILineInfo_t4195266810 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UILineInfo_t4195266810  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UIVertex_t4057497605  m_Items[1];

public:
	inline UIVertex_t4057497605  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_t4057497605 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_t4057497605  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_t4057497605  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_t4057497605 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_t4057497605  value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t3413330114  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t2770800703  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_t2156229523  m_Items[1];

public:
	inline Vector2_t2156229523  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t2156229523  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t934056436  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_t3319028937  m_Items[1];

public:
	inline Vector4_t3319028937  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t3319028937 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t3319028937  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t3319028937  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t3319028937 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t3319028937  value)
	{
		m_Items[index] = value;
	}
};
// AxisLabel[]
struct AxisLabelU5BU5D_t731696159  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AxisLabel_t4128127930  m_Items[1];

public:
	inline AxisLabel_t4128127930  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AxisLabel_t4128127930 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AxisLabel_t4128127930  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline AxisLabel_t4128127930  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AxisLabel_t4128127930 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AxisLabel_t4128127930  value)
	{
		m_Items[index] = value;
	}
};
// DataManager/Field[]
struct FieldU5BU5D_t3435812899  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Field_t4131964166  m_Items[1];

public:
	inline Field_t4131964166  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Field_t4131964166 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Field_t4131964166  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Field_t4131964166  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Field_t4131964166 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Field_t4131964166  value)
	{
		m_Items[index] = value;
	}
};
// DataManager/Hit[]
struct HitU5BU5D_t845046505  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Hit_t3596106040  m_Items[1];

public:
	inline Hit_t3596106040  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Hit_t3596106040 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Hit_t3596106040  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Hit_t3596106040  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Hit_t3596106040 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Hit_t3596106040  value)
	{
		m_Items[index] = value;
	}
};
// DataManager/LevelData[]
struct LevelDataU5BU5D_t921917969  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LevelData_t439927600  m_Items[1];

public:
	inline LevelData_t439927600  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LevelData_t439927600 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LevelData_t439927600  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LevelData_t439927600  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LevelData_t439927600 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LevelData_t439927600  value)
	{
		m_Items[index] = value;
	}
};
// DataManager/SessionData[]
struct SessionDataU5BU5D_t1570286347  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SessionData_t844877374  m_Items[1];

public:
	inline SessionData_t844877374  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SessionData_t844877374 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SessionData_t844877374  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SessionData_t844877374  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SessionData_t844877374 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SessionData_t844877374  value)
	{
		m_Items[index] = value;
	}
};
// ResultsScreen/ResultType[]
struct ResultTypeU5BU5D_t2236143732  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ResultType_t2923018313  m_Items[1];

public:
	inline ResultType_t2923018313  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ResultType_t2923018313 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ResultType_t2923018313  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ResultType_t2923018313  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ResultType_t2923018313 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ResultType_t2923018313  value)
	{
		m_Items[index] = value;
	}
};
// System.DateTime[]
struct DateTimeU5BU5D_t1184652292  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DateTime_t3738529785  m_Items[1];

public:
	inline DateTime_t3738529785  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTime_t3738529785 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTime_t3738529785  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTime_t3738529785  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTime_t3738529785 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTime_t3738529785  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t3710464795  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t287865710  m_Items[1];

public:
	inline CustomAttributeNamedArgument_t287865710  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t287865710 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t287865710  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeNamedArgument_t287865710  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t287865710 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t287865710  value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t1465843424  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeTypedArgument_t2723150157  m_Items[1];

public:
	inline CustomAttributeTypedArgument_t2723150157  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t2723150157 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_t2723150157  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeTypedArgument_t2723150157  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t2723150157 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_t2723150157  value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.BeforeRenderHelper/OrderBlock[]
struct OrderBlockU5BU5D_t2389202590  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) OrderBlock_t1585977831  m_Items[1];

public:
	inline OrderBlock_t1585977831  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OrderBlock_t1585977831 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OrderBlock_t1585977831  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OrderBlock_t1585977831  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OrderBlock_t1585977831 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OrderBlock_t1585977831  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t2600501292  m_Items[1];

public:
	inline Color32_t2600501292  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t2600501292  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t1128832444  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastResult_t3360306849  m_Items[1];

public:
	inline RaycastResult_t3360306849  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastResult_t3360306849 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastResult_t3360306849  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastResult_t3360306849  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastResult_t3360306849 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastResult_t3360306849  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1690781147  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit_t1056001966  m_Items[1];

public:
	inline RaycastHit_t1056001966  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t1056001966 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t1056001966  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t1056001966  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t1056001966 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t1056001966  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t928762055  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UICharInfo_t75501106  m_Items[1];

public:
	inline UICharInfo_t75501106  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UICharInfo_t75501106 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UICharInfo_t75501106  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UICharInfo_t75501106  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UICharInfo_t75501106 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UICharInfo_t75501106  value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.DictionaryEntry[]
struct DictionaryEntryU5BU5D_t4217117203  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DictionaryEntry_t3123975638  m_Items[1];

public:
	inline DictionaryEntry_t3123975638  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t3123975638 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t3123975638  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DictionaryEntry_t3123975638  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t3123975638 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t3123975638  value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Link_t544317964  m_Items[1];

public:
	inline Link_t544317964  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Link_t544317964 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Link_t544317964  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Link_t544317964  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Link_t544317964 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Link_t544317964  value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2652375035  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t71524366  m_Items[1];

public:
	inline KeyValuePair_2_t71524366  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t71524366 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t71524366  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t71524366  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t71524366 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t71524366  value)
	{
		m_Items[index] = value;
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>[]
struct KeyValuePair_2U5BU5D_t1037808359  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t3699644050  m_Items[1];

public:
	inline KeyValuePair_2_t3699644050  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t3699644050 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t3699644050  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t3699644050  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t3699644050 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t3699644050  value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t2897418192  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
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
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t171748081  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t3842366416  m_Items[1];

public:
	inline KeyValuePair_2_t3842366416  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t3842366416 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t3842366416  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t3842366416  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t3842366416 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t3842366416  value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1954543557  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t2401056908  m_Items[1];

public:
	inline KeyValuePair_2_t2401056908  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2401056908 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2401056908  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t2401056908  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2401056908 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2401056908  value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t118269214  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t2530217319  m_Items[1];

public:
	inline KeyValuePair_2_t2530217319  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2530217319 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2530217319  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t2530217319  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2530217319 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2530217319  value)
	{
		m_Items[index] = value;
	}
};


// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Object>::Get()
extern "C"  List_1_t257213610 * ListPool_1_Get_m1670010485_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::GetComponents<System.Object>(System.Collections.Generic.List`1<!!0>)
extern "C"  void GameObject_GetComponents_TisRuntimeObject_m1246177135_gshared (GameObject_t1113636619 * __this, List_1_t257213610 * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Release(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Release_m957266927_gshared (RuntimeObject * __this /* static, unused */, List_1_t257213610 * p0, const RuntimeMethod* method);

// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* ___paramName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Locale::GetText(System.String)
extern "C"  String_t* Locale_GetText_m3374010885 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
extern "C"  void InvalidOperationException__ctor_m1685032583 (InvalidOperationException_t56020091 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* ___paramName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor()
extern "C"  void ArgumentException__ctor_m3698743796 (ArgumentException_t132251570 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Double[],System.Int32,System.Int32,System.Array/Swapper)
extern "C"  void Array_combsort_m3017221499 (RuntimeObject * __this /* static, unused */, DoubleU5BU5D_t3413330114* ___array0, int32_t ___start1, int32_t ___size2, Swapper_t2822380397 * ___swap_items3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Int32[],System.Int32,System.Int32,System.Array/Swapper)
extern "C"  void Array_combsort_m4052486289 (RuntimeObject * __this /* static, unused */, Int32U5BU5D_t385246372* ___array0, int32_t ___start1, int32_t ___size2, Swapper_t2822380397 * ___swap_items3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Char[],System.Int32,System.Int32,System.Array/Swapper)
extern "C"  void Array_combsort_m2745184932 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___array0, int32_t ___start1, int32_t ___size2, Swapper_t2822380397 * ___swap_items3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPrimitive()
extern "C"  bool Type_get_IsPrimitive_m1114712797 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor()
extern "C"  void Exception__ctor_m213470898 (Exception_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
extern "C"  void ArgumentException__ctor_m3761792013 (ArgumentException_t132251570 * __this, String_t* ___message0, String_t* ___paramName1, Exception_t * ___innerException2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C"  void Component_GetComponentsForListInternal_m1419905927 (Component_t1923634451 * __this, Type_t * ___searchType0, RuntimeObject * ___resultList1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern "C"  String_t* UnityString_Format_m261690510 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C"  void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C"  bool GameObject_get_activeInHierarchy_m2006396688 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Component>::Get()
#define ListPool_1_Get_m2062177143(__this /* static, unused */, method) ((  List_1_t3395709193 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))ListPool_1_Get_m1670010485_gshared)(__this /* static, unused */, method)
// System.Void UnityEngine.GameObject::GetComponents<UnityEngine.Component>(System.Collections.Generic.List`1<!!0>)
#define GameObject_GetComponents_TisComponent_t1923634451_m1648148377(__this, p0, method) ((  void (*) (GameObject_t1113636619 *, List_1_t3395709193 *, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m1246177135_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32)
#define List_1_get_Item_m3306164819(__this, p0, method) ((  Component_t1923634451 * (*) (List_1_t3395709193 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count()
#define List_1_get_Count_m1294235957(__this, method) ((  int32_t (*) (List_1_t3395709193 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Component>::Release(System.Collections.Generic.List`1<T>)
#define ListPool_1_Release_m3920209327(__this /* static, unused */, p0, method) ((  void (*) (RuntimeObject * /* static, unused */, List_1_t3395709193 *, const RuntimeMethod*))ListPool_1_Release_m957266927_gshared)(__this /* static, unused */, p0, method)
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C"  RuntimeArray * GameObject_GetComponentsInternal_m4006738154 (GameObject_t1113636619 * __this, Type_t * ___type0, bool ___useSearchTypeAsArrayReturnType1, bool ___recursive2, bool ___includeInactive3, bool ___reverse4, RuntimeObject * ___resultList5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::DefaultDimensionForChannel(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  int32_t Mesh_DefaultDimensionForChannel_m576040980 (RuntimeObject * __this /* static, unused */, int32_t ___channel0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.NoAllocHelpers::ExtractArrayFromList(System.Object)
extern "C"  RuntimeArray * NoAllocHelpers_ExtractArrayFromList_m2239661248 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___list0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetSizedArrayForChannel(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32,System.Array,System.Int32)
extern "C"  void Mesh_SetSizedArrayForChannel_m2565120436 (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, RuntimeArray * ___values3, int32_t ___valuesCount4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh/InternalShaderChannel UnityEngine.Mesh::GetUVChannel(System.Int32)
extern "C"  int32_t Mesh_GetUVChannel_m1848830416 (Mesh_t3648964284 * __this, int32_t ___uvIndex0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::Equals(System.Object)
extern "C"  bool Boolean_Equals_m2410333903 (bool* __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetDirty()
extern "C"  void LayoutGroup_SetDirty_m957775107 (LayoutGroup_t2436138090 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::Equals(System.Object)
extern "C"  bool Int32_Equals_m3996243976 (int32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::Equals(System.Object)
extern "C"  bool Single_Equals_m438106747 (float* __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern "C"  bool Vector2_Equals_m832062989 (Vector2_t2156229523 * __this, RuntimeObject * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Random::.ctor()
extern "C"  void Random__ctor_m4122933043 (Random_t108471755 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type)
extern "C"  RuntimeObject * Activator_CreateInstance_m3631483688 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Length()
extern "C"  int32_t Array_get_Length_m21610649 (RuntimeArray * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Void*)
extern "C"  void IntPtr__ctor_m3384658186 (intptr_t* __this, void* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C"  void Component_GetComponentFastPath_m1180649031 (Component_t1923634451 * __this, Type_t * ___type0, intptr_t ___oneFurtherThanResultValue1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type,System.Boolean)
extern "C"  Component_t1923634451 * Component_GetComponentInChildren_m388868270 (Component_t1923634451 * __this, Type_t * ___t0, bool ___includeInactive1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern "C"  Component_t1923634451 * Component_GetComponentInParent_m779177818 (Component_t1923634451 * __this, Type_t * ___t0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C"  Component_t1923634451 * GameObject_AddComponent_m136524825 (GameObject_t1113636619 * __this, Type_t * ___componentType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern "C"  void GameObject_GetComponentFastPath_m2620139331 (GameObject_t1113636619 * __this, Type_t * ___type0, intptr_t ___oneFurtherThanResultValue1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type,System.Boolean)
extern "C"  Component_t1923634451 * GameObject_GetComponentInChildren_m2567799249 (GameObject_t1113636619 * __this, Type_t * ___type0, bool ___includeInactive1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C"  void Object_CheckNullArgument_m4237608654 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C"  Object_t631007953 * Object_Internal_CloneSingle_m1021157572 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___data0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Transform,System.Boolean)
extern "C"  Object_t631007953 * Object_Instantiate_m4029422268 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___original0, Transform_t3600365921 * ___parent1, bool ___instantiateInWorldSpace2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Object_t631007953 * Object_Instantiate_m2682941528 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___original0, Vector3_t3722313464  ___position1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
extern "C"  Object_t631007953 * Object_Instantiate_m2524886653 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___original0, Vector3_t3722313464  ___position1, Quaternion_t2301928331  ___rotation2, Transform_t3600365921 * ___parent3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
extern "C"  Object_t631007953 * Resources_GetBuiltinResource_m3641967638 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, String_t* ___path1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C"  ScriptableObject_t2528358522 * ScriptableObject_CreateInstance_m2611081756 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::get_canAccess()
extern "C"  bool Mesh_get_canAccess_m2239225054 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::HasChannel(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  bool Mesh_HasChannel_m4256962133 (Mesh_t3648964284 * __this, int32_t ___ch0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  RuntimeArray * Mesh_GetAllocArrayFromChannelImpl_m3084065604 (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  void Mesh_PrintErrorCantAccessChannel_m2109128075 (Mesh_t3648964284 * __this, int32_t ___ch0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Check::Source(System.Object)
extern "C"  void Check_Source_m4098695967 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor()
extern "C"  void InvalidOperationException__ctor_m2734335978 (InvalidOperationException_t56020091 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
extern "C"  void ExecuteEvents_GetEventChain_m2404658789 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___root0, RuntimeObject* ___eventChain1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
#define List_1_get_Item_m2402360903(__this, p0, method) ((  Transform_t3600365921 * (*) (List_1_t777473367 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
#define List_1_get_Count_m3543896146(__this, method) ((  int32_t (*) (List_1_t777473367 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C"  Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort<UnityEngine.UILineInfo>(T[],System.Int32,System.Comparison`1<T>)
extern "C"  void Array_Sort_TisUILineInfo_t4195266810_m3737783007_gshared (RuntimeObject * __this /* static, unused */, UILineInfoU5BU5D_t1655937503* ___array0, int32_t ___length1, Comparison_1_t3970197989 * ___comparison2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_Sort_TisUILineInfo_t4195266810_m3737783007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Comparison_1_t3970197989 * L_0 = ___comparison2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral193474836, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_Sort_TisUILineInfo_t4195266810_m3737783007_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		UILineInfoU5BU5D_t1655937503* L_3 = ___array0;
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		V_0 = (int32_t)0;
		int32_t L_4 = ___length1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		UILineInfoU5BU5D_t1655937503* L_5 = ___array0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		Comparison_1_t3970197989 * L_8 = ___comparison2;
		((  void (*) (RuntimeObject * /* static, unused */, UILineInfoU5BU5D_t1655937503*, int32_t, int32_t, Comparison_1_t3970197989 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (UILineInfoU5BU5D_t1655937503*)L_5, (int32_t)L_6, (int32_t)L_7, (Comparison_1_t3970197989 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		goto IL_004d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0036;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			String_t* L_9 = Locale_GetText_m3374010885(NULL /*static, unused*/, (String_t*)_stringLiteral1751657069, /*hidden argument*/NULL);
			Exception_t * L_10 = V_2;
			InvalidOperationException_t56020091 * L_11 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m1685032583(L_11, (String_t*)L_9, (Exception_t *)L_10, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11,Array_Sort_TisUILineInfo_t4195266810_m3737783007_RuntimeMethod_var);
		}

IL_0048:
		{
			goto IL_004d;
		}
	} // end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void System.Array::Sort<UnityEngine.UILineInfo>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern "C"  void Array_Sort_TisUILineInfo_t4195266810_m986157765_gshared (RuntimeObject * __this /* static, unused */, UILineInfoU5BU5D_t1655937503* ___array0, int32_t ___index1, int32_t ___length2, RuntimeObject* ___comparer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_Sort_TisUILineInfo_t4195266810_m986157765_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UILineInfoU5BU5D_t1655937503* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_Sort_TisUILineInfo_t4195266810_m986157765_RuntimeMethod_var);
	}

IL_0011:
	{
		UILineInfoU5BU5D_t1655937503* L_2 = ___array0;
		int32_t L_3 = ___index1;
		int32_t L_4 = ___length2;
		RuntimeObject* L_5 = ___comparer3;
		((  void (*) (RuntimeObject * /* static, unused */, UILineInfoU5BU5D_t1655937503*, UILineInfoU5BU5D_t1655937503*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (UILineInfoU5BU5D_t1655937503*)L_2, (UILineInfoU5BU5D_t1655937503*)(UILineInfoU5BU5D_t1655937503*)NULL, (int32_t)L_3, (int32_t)L_4, (RuntimeObject*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
// System.Void System.Array::Sort<UnityEngine.UIVertex,UnityEngine.UIVertex>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern "C"  void Array_Sort_TisUIVertex_t4057497605_TisUIVertex_t4057497605_m4243853890_gshared (RuntimeObject * __this /* static, unused */, UIVertexU5BU5D_t1981460040* ___keys0, UIVertexU5BU5D_t1981460040* ___items1, int32_t ___index2, int32_t ___length3, RuntimeObject* ___comparer4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_Sort_TisUIVertex_t4057497605_TisUIVertex_t4057497605_m4243853890_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Swapper_t2822380397 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		UIVertexU5BU5D_t1981460040* L_0 = ___keys0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral465436770, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_Sort_TisUIVertex_t4057497605_TisUIVertex_t4057497605_m4243853890_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = ___index2;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_3, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,Array_Sort_TisUIVertex_t4057497605_TisUIVertex_t4057497605_m4243853890_RuntimeMethod_var);
	}

IL_0023:
	{
		int32_t L_4 = ___length3;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_5, (String_t*)_stringLiteral1212500642, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,Array_Sort_TisUIVertex_t4057497605_TisUIVertex_t4057497605_m4243853890_RuntimeMethod_var);
	}

IL_0035:
	{
		UIVertexU5BU5D_t1981460040* L_6 = ___keys0;
		NullCheck(L_6);
		int32_t L_7 = ___index2;
		int32_t L_8 = ___length3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), (int32_t)L_7))) < ((int32_t)L_8)))
		{
			goto IL_0051;
		}
	}
	{
		UIVertexU5BU5D_t1981460040* L_9 = ___items1;
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_10 = ___index2;
		UIVertexU5BU5D_t1981460040* L_11 = ___items1;
		NullCheck(L_11);
		int32_t L_12 = ___length3;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))), (int32_t)L_12)))))
		{
			goto IL_0057;
		}
	}

IL_0051:
	{
		ArgumentException_t132251570 * L_13 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,Array_Sort_TisUIVertex_t4057497605_TisUIVertex_t4057497605_m4243853890_RuntimeMethod_var);
	}

IL_0057:
	{
		int32_t L_14 = ___length3;
		if ((((int32_t)L_14) > ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		return;
	}

IL_005f:
	{
		RuntimeObject* L_15 = ___comparer4;
		if (L_15)
		{
			goto IL_00e2;
		}
	}
	{
		UIVertexU5BU5D_t1981460040* L_16 = ___items1;
		if (L_16)
		{
			goto IL_0073;
		}
	}
	{
		V_0 = (Swapper_t2822380397 *)NULL;
		goto IL_007a;
	}

IL_0073:
	{
		UIVertexU5BU5D_t1981460040* L_17 = ___items1;
		Swapper_t2822380397 * L_18 = ((  Swapper_t2822380397 * (*) (RuntimeObject * /* static, unused */, UIVertexU5BU5D_t1981460040*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (UIVertexU5BU5D_t1981460040*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Swapper_t2822380397 *)L_18;
	}

IL_007a:
	{
		UIVertexU5BU5D_t1981460040* L_19 = ___keys0;
		if (!((DoubleU5BU5D_t3413330114*)IsInst((RuntimeObject*)L_19, DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var)))
		{
			goto IL_0099;
		}
	}
	{
		UIVertexU5BU5D_t1981460040* L_20 = ___keys0;
		int32_t L_21 = ___index2;
		int32_t L_22 = ___length3;
		Swapper_t2822380397 * L_23 = V_0;
		Array_combsort_m3017221499(NULL /*static, unused*/, (DoubleU5BU5D_t3413330114*)((DoubleU5BU5D_t3413330114*)IsInst((RuntimeObject*)L_20, DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var)), (int32_t)L_21, (int32_t)L_22, (Swapper_t2822380397 *)L_23, /*hidden argument*/NULL);
		return;
	}

IL_0099:
	{
		UIVertexU5BU5D_t1981460040* L_24 = ___keys0;
		if (((UInt32U5BU5D_t2770800703*)IsInst((RuntimeObject*)L_24, UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var)))
		{
			goto IL_00c3;
		}
	}
	{
		UIVertexU5BU5D_t1981460040* L_25 = ___keys0;
		if (!((Int32U5BU5D_t385246372*)IsInst((RuntimeObject*)L_25, Int32U5BU5D_t385246372_il2cpp_TypeInfo_var)))
		{
			goto IL_00c3;
		}
	}
	{
		UIVertexU5BU5D_t1981460040* L_26 = ___keys0;
		int32_t L_27 = ___index2;
		int32_t L_28 = ___length3;
		Swapper_t2822380397 * L_29 = V_0;
		Array_combsort_m4052486289(NULL /*static, unused*/, (Int32U5BU5D_t385246372*)((Int32U5BU5D_t385246372*)IsInst((RuntimeObject*)L_26, Int32U5BU5D_t385246372_il2cpp_TypeInfo_var)), (int32_t)L_27, (int32_t)L_28, (Swapper_t2822380397 *)L_29, /*hidden argument*/NULL);
		return;
	}

IL_00c3:
	{
		UIVertexU5BU5D_t1981460040* L_30 = ___keys0;
		if (!((CharU5BU5D_t3528271667*)IsInst((RuntimeObject*)L_30, CharU5BU5D_t3528271667_il2cpp_TypeInfo_var)))
		{
			goto IL_00e2;
		}
	}
	{
		UIVertexU5BU5D_t1981460040* L_31 = ___keys0;
		int32_t L_32 = ___index2;
		int32_t L_33 = ___length3;
		Swapper_t2822380397 * L_34 = V_0;
		Array_combsort_m2745184932(NULL /*static, unused*/, (CharU5BU5D_t3528271667*)((CharU5BU5D_t3528271667*)IsInst((RuntimeObject*)L_31, CharU5BU5D_t3528271667_il2cpp_TypeInfo_var)), (int32_t)L_32, (int32_t)L_33, (Swapper_t2822380397 *)L_34, /*hidden argument*/NULL);
		return;
	}

IL_00e2:
	try
	{ // begin try (depth: 1)
		int32_t L_35 = ___index2;
		V_1 = (int32_t)L_35;
		int32_t L_36 = ___index2;
		int32_t L_37 = ___length3;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)L_37)), (int32_t)1));
		UIVertexU5BU5D_t1981460040* L_38 = ___keys0;
		UIVertexU5BU5D_t1981460040* L_39 = ___items1;
		int32_t L_40 = V_1;
		int32_t L_41 = V_2;
		RuntimeObject* L_42 = ___comparer4;
		((  void (*) (RuntimeObject * /* static, unused */, UIVertexU5BU5D_t1981460040*, UIVertexU5BU5D_t1981460040*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (UIVertexU5BU5D_t1981460040*)L_38, (UIVertexU5BU5D_t1981460040*)L_39, (int32_t)L_40, (int32_t)L_41, (RuntimeObject*)L_42, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		goto IL_0111;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00fa;
		throw e;
	}

CATCH_00fa:
	{ // begin catch(System.Exception)
		{
			V_3 = (Exception_t *)((Exception_t *)__exception_local);
			String_t* L_43 = Locale_GetText_m3374010885(NULL /*static, unused*/, (String_t*)_stringLiteral3166607389, /*hidden argument*/NULL);
			Exception_t * L_44 = V_3;
			InvalidOperationException_t56020091 * L_45 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m1685032583(L_45, (String_t*)L_43, (Exception_t *)L_44, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_45,Array_Sort_TisUIVertex_t4057497605_TisUIVertex_t4057497605_m4243853890_RuntimeMethod_var);
		}

IL_010c:
		{
			goto IL_0111;
		}
	} // end catch (depth: 1)

IL_0111:
	{
		return;
	}
}
// System.Void System.Array::Sort<UnityEngine.UIVertex>(T[],System.Int32,System.Comparison`1<T>)
extern "C"  void Array_Sort_TisUIVertex_t4057497605_m3996333845_gshared (RuntimeObject * __this /* static, unused */, UIVertexU5BU5D_t1981460040* ___array0, int32_t ___length1, Comparison_1_t3832428784 * ___comparison2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_Sort_TisUIVertex_t4057497605_m3996333845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Comparison_1_t3832428784 * L_0 = ___comparison2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral193474836, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_Sort_TisUIVertex_t4057497605_m3996333845_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		UIVertexU5BU5D_t1981460040* L_3 = ___array0;
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		V_0 = (int32_t)0;
		int32_t L_4 = ___length1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		UIVertexU5BU5D_t1981460040* L_5 = ___array0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		Comparison_1_t3832428784 * L_8 = ___comparison2;
		((  void (*) (RuntimeObject * /* static, unused */, UIVertexU5BU5D_t1981460040*, int32_t, int32_t, Comparison_1_t3832428784 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (UIVertexU5BU5D_t1981460040*)L_5, (int32_t)L_6, (int32_t)L_7, (Comparison_1_t3832428784 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		goto IL_004d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0036;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			String_t* L_9 = Locale_GetText_m3374010885(NULL /*static, unused*/, (String_t*)_stringLiteral1751657069, /*hidden argument*/NULL);
			Exception_t * L_10 = V_2;
			InvalidOperationException_t56020091 * L_11 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m1685032583(L_11, (String_t*)L_9, (Exception_t *)L_10, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11,Array_Sort_TisUIVertex_t4057497605_m3996333845_RuntimeMethod_var);
		}

IL_0048:
		{
			goto IL_004d;
		}
	} // end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void System.Array::Sort<UnityEngine.UIVertex>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern "C"  void Array_Sort_TisUIVertex_t4057497605_m448896013_gshared (RuntimeObject * __this /* static, unused */, UIVertexU5BU5D_t1981460040* ___array0, int32_t ___index1, int32_t ___length2, RuntimeObject* ___comparer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_Sort_TisUIVertex_t4057497605_m448896013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UIVertexU5BU5D_t1981460040* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_Sort_TisUIVertex_t4057497605_m448896013_RuntimeMethod_var);
	}

IL_0011:
	{
		UIVertexU5BU5D_t1981460040* L_2 = ___array0;
		int32_t L_3 = ___index1;
		int32_t L_4 = ___length2;
		RuntimeObject* L_5 = ___comparer3;
		((  void (*) (RuntimeObject * /* static, unused */, UIVertexU5BU5D_t1981460040*, UIVertexU5BU5D_t1981460040*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (UIVertexU5BU5D_t1981460040*)L_2, (UIVertexU5BU5D_t1981460040*)(UIVertexU5BU5D_t1981460040*)NULL, (int32_t)L_3, (int32_t)L_4, (RuntimeObject*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
// System.Void System.Array::Sort<UnityEngine.Vector2,UnityEngine.Vector2>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern "C"  void Array_Sort_TisVector2_t2156229523_TisVector2_t2156229523_m3828039457_gshared (RuntimeObject * __this /* static, unused */, Vector2U5BU5D_t1457185986* ___keys0, Vector2U5BU5D_t1457185986* ___items1, int32_t ___index2, int32_t ___length3, RuntimeObject* ___comparer4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_Sort_TisVector2_t2156229523_TisVector2_t2156229523_m3828039457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Swapper_t2822380397 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Vector2U5BU5D_t1457185986* L_0 = ___keys0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral465436770, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_Sort_TisVector2_t2156229523_TisVector2_t2156229523_m3828039457_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = ___index2;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_3, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,Array_Sort_TisVector2_t2156229523_TisVector2_t2156229523_m3828039457_RuntimeMethod_var);
	}

IL_0023:
	{
		int32_t L_4 = ___length3;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_5, (String_t*)_stringLiteral1212500642, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,Array_Sort_TisVector2_t2156229523_TisVector2_t2156229523_m3828039457_RuntimeMethod_var);
	}

IL_0035:
	{
		Vector2U5BU5D_t1457185986* L_6 = ___keys0;
		NullCheck(L_6);
		int32_t L_7 = ___index2;
		int32_t L_8 = ___length3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), (int32_t)L_7))) < ((int32_t)L_8)))
		{
			goto IL_0051;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_9 = ___items1;
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_10 = ___index2;
		Vector2U5BU5D_t1457185986* L_11 = ___items1;
		NullCheck(L_11);
		int32_t L_12 = ___length3;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))), (int32_t)L_12)))))
		{
			goto IL_0057;
		}
	}

IL_0051:
	{
		ArgumentException_t132251570 * L_13 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,Array_Sort_TisVector2_t2156229523_TisVector2_t2156229523_m3828039457_RuntimeMethod_var);
	}

IL_0057:
	{
		int32_t L_14 = ___length3;
		if ((((int32_t)L_14) > ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		return;
	}

IL_005f:
	{
		RuntimeObject* L_15 = ___comparer4;
		if (L_15)
		{
			goto IL_00e2;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_16 = ___items1;
		if (L_16)
		{
			goto IL_0073;
		}
	}
	{
		V_0 = (Swapper_t2822380397 *)NULL;
		goto IL_007a;
	}

IL_0073:
	{
		Vector2U5BU5D_t1457185986* L_17 = ___items1;
		Swapper_t2822380397 * L_18 = ((  Swapper_t2822380397 * (*) (RuntimeObject * /* static, unused */, Vector2U5BU5D_t1457185986*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Vector2U5BU5D_t1457185986*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Swapper_t2822380397 *)L_18;
	}

IL_007a:
	{
		Vector2U5BU5D_t1457185986* L_19 = ___keys0;
		if (!((DoubleU5BU5D_t3413330114*)IsInst((RuntimeObject*)L_19, DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var)))
		{
			goto IL_0099;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_20 = ___keys0;
		int32_t L_21 = ___index2;
		int32_t L_22 = ___length3;
		Swapper_t2822380397 * L_23 = V_0;
		Array_combsort_m3017221499(NULL /*static, unused*/, (DoubleU5BU5D_t3413330114*)((DoubleU5BU5D_t3413330114*)IsInst((RuntimeObject*)L_20, DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var)), (int32_t)L_21, (int32_t)L_22, (Swapper_t2822380397 *)L_23, /*hidden argument*/NULL);
		return;
	}

IL_0099:
	{
		Vector2U5BU5D_t1457185986* L_24 = ___keys0;
		if (((UInt32U5BU5D_t2770800703*)IsInst((RuntimeObject*)L_24, UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var)))
		{
			goto IL_00c3;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_25 = ___keys0;
		if (!((Int32U5BU5D_t385246372*)IsInst((RuntimeObject*)L_25, Int32U5BU5D_t385246372_il2cpp_TypeInfo_var)))
		{
			goto IL_00c3;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_26 = ___keys0;
		int32_t L_27 = ___index2;
		int32_t L_28 = ___length3;
		Swapper_t2822380397 * L_29 = V_0;
		Array_combsort_m4052486289(NULL /*static, unused*/, (Int32U5BU5D_t385246372*)((Int32U5BU5D_t385246372*)IsInst((RuntimeObject*)L_26, Int32U5BU5D_t385246372_il2cpp_TypeInfo_var)), (int32_t)L_27, (int32_t)L_28, (Swapper_t2822380397 *)L_29, /*hidden argument*/NULL);
		return;
	}

IL_00c3:
	{
		Vector2U5BU5D_t1457185986* L_30 = ___keys0;
		if (!((CharU5BU5D_t3528271667*)IsInst((RuntimeObject*)L_30, CharU5BU5D_t3528271667_il2cpp_TypeInfo_var)))
		{
			goto IL_00e2;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_31 = ___keys0;
		int32_t L_32 = ___index2;
		int32_t L_33 = ___length3;
		Swapper_t2822380397 * L_34 = V_0;
		Array_combsort_m2745184932(NULL /*static, unused*/, (CharU5BU5D_t3528271667*)((CharU5BU5D_t3528271667*)IsInst((RuntimeObject*)L_31, CharU5BU5D_t3528271667_il2cpp_TypeInfo_var)), (int32_t)L_32, (int32_t)L_33, (Swapper_t2822380397 *)L_34, /*hidden argument*/NULL);
		return;
	}

IL_00e2:
	try
	{ // begin try (depth: 1)
		int32_t L_35 = ___index2;
		V_1 = (int32_t)L_35;
		int32_t L_36 = ___index2;
		int32_t L_37 = ___length3;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)L_37)), (int32_t)1));
		Vector2U5BU5D_t1457185986* L_38 = ___keys0;
		Vector2U5BU5D_t1457185986* L_39 = ___items1;
		int32_t L_40 = V_1;
		int32_t L_41 = V_2;
		RuntimeObject* L_42 = ___comparer4;
		((  void (*) (RuntimeObject * /* static, unused */, Vector2U5BU5D_t1457185986*, Vector2U5BU5D_t1457185986*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (Vector2U5BU5D_t1457185986*)L_38, (Vector2U5BU5D_t1457185986*)L_39, (int32_t)L_40, (int32_t)L_41, (RuntimeObject*)L_42, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		goto IL_0111;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00fa;
		throw e;
	}

CATCH_00fa:
	{ // begin catch(System.Exception)
		{
			V_3 = (Exception_t *)((Exception_t *)__exception_local);
			String_t* L_43 = Locale_GetText_m3374010885(NULL /*static, unused*/, (String_t*)_stringLiteral3166607389, /*hidden argument*/NULL);
			Exception_t * L_44 = V_3;
			InvalidOperationException_t56020091 * L_45 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m1685032583(L_45, (String_t*)L_43, (Exception_t *)L_44, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_45,Array_Sort_TisVector2_t2156229523_TisVector2_t2156229523_m3828039457_RuntimeMethod_var);
		}

IL_010c:
		{
			goto IL_0111;
		}
	} // end catch (depth: 1)

IL_0111:
	{
		return;
	}
}
// System.Void System.Array::Sort<UnityEngine.Vector2>(T[],System.Int32,System.Comparison`1<T>)
extern "C"  void Array_Sort_TisVector2_t2156229523_m3889577259_gshared (RuntimeObject * __this /* static, unused */, Vector2U5BU5D_t1457185986* ___array0, int32_t ___length1, Comparison_1_t1931160702 * ___comparison2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_Sort_TisVector2_t2156229523_m3889577259_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Comparison_1_t1931160702 * L_0 = ___comparison2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral193474836, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_Sort_TisVector2_t2156229523_m3889577259_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_3 = ___array0;
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		V_0 = (int32_t)0;
		int32_t L_4 = ___length1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		Vector2U5BU5D_t1457185986* L_5 = ___array0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		Comparison_1_t1931160702 * L_8 = ___comparison2;
		((  void (*) (RuntimeObject * /* static, unused */, Vector2U5BU5D_t1457185986*, int32_t, int32_t, Comparison_1_t1931160702 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Vector2U5BU5D_t1457185986*)L_5, (int32_t)L_6, (int32_t)L_7, (Comparison_1_t1931160702 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		goto IL_004d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0036;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			String_t* L_9 = Locale_GetText_m3374010885(NULL /*static, unused*/, (String_t*)_stringLiteral1751657069, /*hidden argument*/NULL);
			Exception_t * L_10 = V_2;
			InvalidOperationException_t56020091 * L_11 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m1685032583(L_11, (String_t*)L_9, (Exception_t *)L_10, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11,Array_Sort_TisVector2_t2156229523_m3889577259_RuntimeMethod_var);
		}

IL_0048:
		{
			goto IL_004d;
		}
	} // end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void System.Array::Sort<UnityEngine.Vector2>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern "C"  void Array_Sort_TisVector2_t2156229523_m1227407869_gshared (RuntimeObject * __this /* static, unused */, Vector2U5BU5D_t1457185986* ___array0, int32_t ___index1, int32_t ___length2, RuntimeObject* ___comparer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_Sort_TisVector2_t2156229523_m1227407869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2U5BU5D_t1457185986* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_Sort_TisVector2_t2156229523_m1227407869_RuntimeMethod_var);
	}

IL_0011:
	{
		Vector2U5BU5D_t1457185986* L_2 = ___array0;
		int32_t L_3 = ___index1;
		int32_t L_4 = ___length2;
		RuntimeObject* L_5 = ___comparer3;
		((  void (*) (RuntimeObject * /* static, unused */, Vector2U5BU5D_t1457185986*, Vector2U5BU5D_t1457185986*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Vector2U5BU5D_t1457185986*)L_2, (Vector2U5BU5D_t1457185986*)(Vector2U5BU5D_t1457185986*)NULL, (int32_t)L_3, (int32_t)L_4, (RuntimeObject*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
// System.Void System.Array::Sort<UnityEngine.Vector3,UnityEngine.Vector3>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern "C"  void Array_Sort_TisVector3_t3722313464_TisVector3_t3722313464_m3923377973_gshared (RuntimeObject * __this /* static, unused */, Vector3U5BU5D_t1718750761* ___keys0, Vector3U5BU5D_t1718750761* ___items1, int32_t ___index2, int32_t ___length3, RuntimeObject* ___comparer4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_Sort_TisVector3_t3722313464_TisVector3_t3722313464_m3923377973_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Swapper_t2822380397 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Vector3U5BU5D_t1718750761* L_0 = ___keys0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral465436770, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_Sort_TisVector3_t3722313464_TisVector3_t3722313464_m3923377973_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = ___index2;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_3, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,Array_Sort_TisVector3_t3722313464_TisVector3_t3722313464_m3923377973_RuntimeMethod_var);
	}

IL_0023:
	{
		int32_t L_4 = ___length3;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_5, (String_t*)_stringLiteral1212500642, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,Array_Sort_TisVector3_t3722313464_TisVector3_t3722313464_m3923377973_RuntimeMethod_var);
	}

IL_0035:
	{
		Vector3U5BU5D_t1718750761* L_6 = ___keys0;
		NullCheck(L_6);
		int32_t L_7 = ___index2;
		int32_t L_8 = ___length3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), (int32_t)L_7))) < ((int32_t)L_8)))
		{
			goto IL_0051;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_9 = ___items1;
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_10 = ___index2;
		Vector3U5BU5D_t1718750761* L_11 = ___items1;
		NullCheck(L_11);
		int32_t L_12 = ___length3;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))), (int32_t)L_12)))))
		{
			goto IL_0057;
		}
	}

IL_0051:
	{
		ArgumentException_t132251570 * L_13 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,Array_Sort_TisVector3_t3722313464_TisVector3_t3722313464_m3923377973_RuntimeMethod_var);
	}

IL_0057:
	{
		int32_t L_14 = ___length3;
		if ((((int32_t)L_14) > ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		return;
	}

IL_005f:
	{
		RuntimeObject* L_15 = ___comparer4;
		if (L_15)
		{
			goto IL_00e2;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_16 = ___items1;
		if (L_16)
		{
			goto IL_0073;
		}
	}
	{
		V_0 = (Swapper_t2822380397 *)NULL;
		goto IL_007a;
	}

IL_0073:
	{
		Vector3U5BU5D_t1718750761* L_17 = ___items1;
		Swapper_t2822380397 * L_18 = ((  Swapper_t2822380397 * (*) (RuntimeObject * /* static, unused */, Vector3U5BU5D_t1718750761*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Vector3U5BU5D_t1718750761*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Swapper_t2822380397 *)L_18;
	}

IL_007a:
	{
		Vector3U5BU5D_t1718750761* L_19 = ___keys0;
		if (!((DoubleU5BU5D_t3413330114*)IsInst((RuntimeObject*)L_19, DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var)))
		{
			goto IL_0099;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_20 = ___keys0;
		int32_t L_21 = ___index2;
		int32_t L_22 = ___length3;
		Swapper_t2822380397 * L_23 = V_0;
		Array_combsort_m3017221499(NULL /*static, unused*/, (DoubleU5BU5D_t3413330114*)((DoubleU5BU5D_t3413330114*)IsInst((RuntimeObject*)L_20, DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var)), (int32_t)L_21, (int32_t)L_22, (Swapper_t2822380397 *)L_23, /*hidden argument*/NULL);
		return;
	}

IL_0099:
	{
		Vector3U5BU5D_t1718750761* L_24 = ___keys0;
		if (((UInt32U5BU5D_t2770800703*)IsInst((RuntimeObject*)L_24, UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var)))
		{
			goto IL_00c3;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_25 = ___keys0;
		if (!((Int32U5BU5D_t385246372*)IsInst((RuntimeObject*)L_25, Int32U5BU5D_t385246372_il2cpp_TypeInfo_var)))
		{
			goto IL_00c3;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_26 = ___keys0;
		int32_t L_27 = ___index2;
		int32_t L_28 = ___length3;
		Swapper_t2822380397 * L_29 = V_0;
		Array_combsort_m4052486289(NULL /*static, unused*/, (Int32U5BU5D_t385246372*)((Int32U5BU5D_t385246372*)IsInst((RuntimeObject*)L_26, Int32U5BU5D_t385246372_il2cpp_TypeInfo_var)), (int32_t)L_27, (int32_t)L_28, (Swapper_t2822380397 *)L_29, /*hidden argument*/NULL);
		return;
	}

IL_00c3:
	{
		Vector3U5BU5D_t1718750761* L_30 = ___keys0;
		if (!((CharU5BU5D_t3528271667*)IsInst((RuntimeObject*)L_30, CharU5BU5D_t3528271667_il2cpp_TypeInfo_var)))
		{
			goto IL_00e2;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_31 = ___keys0;
		int32_t L_32 = ___index2;
		int32_t L_33 = ___length3;
		Swapper_t2822380397 * L_34 = V_0;
		Array_combsort_m2745184932(NULL /*static, unused*/, (CharU5BU5D_t3528271667*)((CharU5BU5D_t3528271667*)IsInst((RuntimeObject*)L_31, CharU5BU5D_t3528271667_il2cpp_TypeInfo_var)), (int32_t)L_32, (int32_t)L_33, (Swapper_t2822380397 *)L_34, /*hidden argument*/NULL);
		return;
	}

IL_00e2:
	try
	{ // begin try (depth: 1)
		int32_t L_35 = ___index2;
		V_1 = (int32_t)L_35;
		int32_t L_36 = ___index2;
		int32_t L_37 = ___length3;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)L_37)), (int32_t)1));
		Vector3U5BU5D_t1718750761* L_38 = ___keys0;
		Vector3U5BU5D_t1718750761* L_39 = ___items1;
		int32_t L_40 = V_1;
		int32_t L_41 = V_2;
		RuntimeObject* L_42 = ___comparer4;
		((  void (*) (RuntimeObject * /* static, unused */, Vector3U5BU5D_t1718750761*, Vector3U5BU5D_t1718750761*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (Vector3U5BU5D_t1718750761*)L_38, (Vector3U5BU5D_t1718750761*)L_39, (int32_t)L_40, (int32_t)L_41, (RuntimeObject*)L_42, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		goto IL_0111;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00fa;
		throw e;
	}

CATCH_00fa:
	{ // begin catch(System.Exception)
		{
			V_3 = (Exception_t *)((Exception_t *)__exception_local);
			String_t* L_43 = Locale_GetText_m3374010885(NULL /*static, unused*/, (String_t*)_stringLiteral3166607389, /*hidden argument*/NULL);
			Exception_t * L_44 = V_3;
			InvalidOperationException_t56020091 * L_45 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m1685032583(L_45, (String_t*)L_43, (Exception_t *)L_44, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_45,Array_Sort_TisVector3_t3722313464_TisVector3_t3722313464_m3923377973_RuntimeMethod_var);
		}

IL_010c:
		{
			goto IL_0111;
		}
	} // end catch (depth: 1)

IL_0111:
	{
		return;
	}
}
// System.Void System.Array::Sort<UnityEngine.Vector3>(T[],System.Int32,System.Comparison`1<T>)
extern "C"  void Array_Sort_TisVector3_t3722313464_m1915176437_gshared (RuntimeObject * __this /* static, unused */, Vector3U5BU5D_t1718750761* ___array0, int32_t ___length1, Comparison_1_t3497244643 * ___comparison2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_Sort_TisVector3_t3722313464_m1915176437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Comparison_1_t3497244643 * L_0 = ___comparison2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral193474836, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_Sort_TisVector3_t3722313464_m1915176437_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_3 = ___array0;
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		V_0 = (int32_t)0;
		int32_t L_4 = ___length1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		Vector3U5BU5D_t1718750761* L_5 = ___array0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		Comparison_1_t3497244643 * L_8 = ___comparison2;
		((  void (*) (RuntimeObject * /* static, unused */, Vector3U5BU5D_t1718750761*, int32_t, int32_t, Comparison_1_t3497244643 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Vector3U5BU5D_t1718750761*)L_5, (int32_t)L_6, (int32_t)L_7, (Comparison_1_t3497244643 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		goto IL_004d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0036;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			String_t* L_9 = Locale_GetText_m3374010885(NULL /*static, unused*/, (String_t*)_stringLiteral1751657069, /*hidden argument*/NULL);
			Exception_t * L_10 = V_2;
			InvalidOperationException_t56020091 * L_11 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m1685032583(L_11, (String_t*)L_9, (Exception_t *)L_10, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11,Array_Sort_TisVector3_t3722313464_m1915176437_RuntimeMethod_var);
		}

IL_0048:
		{
			goto IL_004d;
		}
	} // end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void System.Array::Sort<UnityEngine.Vector3>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern "C"  void Array_Sort_TisVector3_t3722313464_m1030213405_gshared (RuntimeObject * __this /* static, unused */, Vector3U5BU5D_t1718750761* ___array0, int32_t ___index1, int32_t ___length2, RuntimeObject* ___comparer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_Sort_TisVector3_t3722313464_m1030213405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3U5BU5D_t1718750761* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_Sort_TisVector3_t3722313464_m1030213405_RuntimeMethod_var);
	}

IL_0011:
	{
		Vector3U5BU5D_t1718750761* L_2 = ___array0;
		int32_t L_3 = ___index1;
		int32_t L_4 = ___length2;
		RuntimeObject* L_5 = ___comparer3;
		((  void (*) (RuntimeObject * /* static, unused */, Vector3U5BU5D_t1718750761*, Vector3U5BU5D_t1718750761*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Vector3U5BU5D_t1718750761*)L_2, (Vector3U5BU5D_t1718750761*)(Vector3U5BU5D_t1718750761*)NULL, (int32_t)L_3, (int32_t)L_4, (RuntimeObject*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
// System.Void System.Array::Sort<UnityEngine.Vector4,UnityEngine.Vector4>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern "C"  void Array_Sort_TisVector4_t3319028937_TisVector4_t3319028937_m4254533673_gshared (RuntimeObject * __this /* static, unused */, Vector4U5BU5D_t934056436* ___keys0, Vector4U5BU5D_t934056436* ___items1, int32_t ___index2, int32_t ___length3, RuntimeObject* ___comparer4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_Sort_TisVector4_t3319028937_TisVector4_t3319028937_m4254533673_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Swapper_t2822380397 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Vector4U5BU5D_t934056436* L_0 = ___keys0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral465436770, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_Sort_TisVector4_t3319028937_TisVector4_t3319028937_m4254533673_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = ___index2;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_3, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,Array_Sort_TisVector4_t3319028937_TisVector4_t3319028937_m4254533673_RuntimeMethod_var);
	}

IL_0023:
	{
		int32_t L_4 = ___length3;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_5, (String_t*)_stringLiteral1212500642, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,Array_Sort_TisVector4_t3319028937_TisVector4_t3319028937_m4254533673_RuntimeMethod_var);
	}

IL_0035:
	{
		Vector4U5BU5D_t934056436* L_6 = ___keys0;
		NullCheck(L_6);
		int32_t L_7 = ___index2;
		int32_t L_8 = ___length3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), (int32_t)L_7))) < ((int32_t)L_8)))
		{
			goto IL_0051;
		}
	}
	{
		Vector4U5BU5D_t934056436* L_9 = ___items1;
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_10 = ___index2;
		Vector4U5BU5D_t934056436* L_11 = ___items1;
		NullCheck(L_11);
		int32_t L_12 = ___length3;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))), (int32_t)L_12)))))
		{
			goto IL_0057;
		}
	}

IL_0051:
	{
		ArgumentException_t132251570 * L_13 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,Array_Sort_TisVector4_t3319028937_TisVector4_t3319028937_m4254533673_RuntimeMethod_var);
	}

IL_0057:
	{
		int32_t L_14 = ___length3;
		if ((((int32_t)L_14) > ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		return;
	}

IL_005f:
	{
		RuntimeObject* L_15 = ___comparer4;
		if (L_15)
		{
			goto IL_00e2;
		}
	}
	{
		Vector4U5BU5D_t934056436* L_16 = ___items1;
		if (L_16)
		{
			goto IL_0073;
		}
	}
	{
		V_0 = (Swapper_t2822380397 *)NULL;
		goto IL_007a;
	}

IL_0073:
	{
		Vector4U5BU5D_t934056436* L_17 = ___items1;
		Swapper_t2822380397 * L_18 = ((  Swapper_t2822380397 * (*) (RuntimeObject * /* static, unused */, Vector4U5BU5D_t934056436*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Vector4U5BU5D_t934056436*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Swapper_t2822380397 *)L_18;
	}

IL_007a:
	{
		Vector4U5BU5D_t934056436* L_19 = ___keys0;
		if (!((DoubleU5BU5D_t3413330114*)IsInst((RuntimeObject*)L_19, DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var)))
		{
			goto IL_0099;
		}
	}
	{
		Vector4U5BU5D_t934056436* L_20 = ___keys0;
		int32_t L_21 = ___index2;
		int32_t L_22 = ___length3;
		Swapper_t2822380397 * L_23 = V_0;
		Array_combsort_m3017221499(NULL /*static, unused*/, (DoubleU5BU5D_t3413330114*)((DoubleU5BU5D_t3413330114*)IsInst((RuntimeObject*)L_20, DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var)), (int32_t)L_21, (int32_t)L_22, (Swapper_t2822380397 *)L_23, /*hidden argument*/NULL);
		return;
	}

IL_0099:
	{
		Vector4U5BU5D_t934056436* L_24 = ___keys0;
		if (((UInt32U5BU5D_t2770800703*)IsInst((RuntimeObject*)L_24, UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var)))
		{
			goto IL_00c3;
		}
	}
	{
		Vector4U5BU5D_t934056436* L_25 = ___keys0;
		if (!((Int32U5BU5D_t385246372*)IsInst((RuntimeObject*)L_25, Int32U5BU5D_t385246372_il2cpp_TypeInfo_var)))
		{
			goto IL_00c3;
		}
	}
	{
		Vector4U5BU5D_t934056436* L_26 = ___keys0;
		int32_t L_27 = ___index2;
		int32_t L_28 = ___length3;
		Swapper_t2822380397 * L_29 = V_0;
		Array_combsort_m4052486289(NULL /*static, unused*/, (Int32U5BU5D_t385246372*)((Int32U5BU5D_t385246372*)IsInst((RuntimeObject*)L_26, Int32U5BU5D_t385246372_il2cpp_TypeInfo_var)), (int32_t)L_27, (int32_t)L_28, (Swapper_t2822380397 *)L_29, /*hidden argument*/NULL);
		return;
	}

IL_00c3:
	{
		Vector4U5BU5D_t934056436* L_30 = ___keys0;
		if (!((CharU5BU5D_t3528271667*)IsInst((RuntimeObject*)L_30, CharU5BU5D_t3528271667_il2cpp_TypeInfo_var)))
		{
			goto IL_00e2;
		}
	}
	{
		Vector4U5BU5D_t934056436* L_31 = ___keys0;
		int32_t L_32 = ___index2;
		int32_t L_33 = ___length3;
		Swapper_t2822380397 * L_34 = V_0;
		Array_combsort_m2745184932(NULL /*static, unused*/, (CharU5BU5D_t3528271667*)((CharU5BU5D_t3528271667*)IsInst((RuntimeObject*)L_31, CharU5BU5D_t3528271667_il2cpp_TypeInfo_var)), (int32_t)L_32, (int32_t)L_33, (Swapper_t2822380397 *)L_34, /*hidden argument*/NULL);
		return;
	}

IL_00e2:
	try
	{ // begin try (depth: 1)
		int32_t L_35 = ___index2;
		V_1 = (int32_t)L_35;
		int32_t L_36 = ___index2;
		int32_t L_37 = ___length3;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)L_37)), (int32_t)1));
		Vector4U5BU5D_t934056436* L_38 = ___keys0;
		Vector4U5BU5D_t934056436* L_39 = ___items1;
		int32_t L_40 = V_1;
		int32_t L_41 = V_2;
		RuntimeObject* L_42 = ___comparer4;
		((  void (*) (RuntimeObject * /* static, unused */, Vector4U5BU5D_t934056436*, Vector4U5BU5D_t934056436*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (Vector4U5BU5D_t934056436*)L_38, (Vector4U5BU5D_t934056436*)L_39, (int32_t)L_40, (int32_t)L_41, (RuntimeObject*)L_42, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		goto IL_0111;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00fa;
		throw e;
	}

CATCH_00fa:
	{ // begin catch(System.Exception)
		{
			V_3 = (Exception_t *)((Exception_t *)__exception_local);
			String_t* L_43 = Locale_GetText_m3374010885(NULL /*static, unused*/, (String_t*)_stringLiteral3166607389, /*hidden argument*/NULL);
			Exception_t * L_44 = V_3;
			InvalidOperationException_t56020091 * L_45 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m1685032583(L_45, (String_t*)L_43, (Exception_t *)L_44, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_45,Array_Sort_TisVector4_t3319028937_TisVector4_t3319028937_m4254533673_RuntimeMethod_var);
		}

IL_010c:
		{
			goto IL_0111;
		}
	} // end catch (depth: 1)

IL_0111:
	{
		return;
	}
}
// System.Void System.Array::Sort<UnityEngine.Vector4>(T[],System.Int32,System.Comparison`1<T>)
extern "C"  void Array_Sort_TisVector4_t3319028937_m3668240704_gshared (RuntimeObject * __this /* static, unused */, Vector4U5BU5D_t934056436* ___array0, int32_t ___length1, Comparison_1_t3093960116 * ___comparison2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_Sort_TisVector4_t3319028937_m3668240704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Comparison_1_t3093960116 * L_0 = ___comparison2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral193474836, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_Sort_TisVector4_t3319028937_m3668240704_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		Vector4U5BU5D_t934056436* L_3 = ___array0;
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		V_0 = (int32_t)0;
		int32_t L_4 = ___length1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		Vector4U5BU5D_t934056436* L_5 = ___array0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		Comparison_1_t3093960116 * L_8 = ___comparison2;
		((  void (*) (RuntimeObject * /* static, unused */, Vector4U5BU5D_t934056436*, int32_t, int32_t, Comparison_1_t3093960116 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Vector4U5BU5D_t934056436*)L_5, (int32_t)L_6, (int32_t)L_7, (Comparison_1_t3093960116 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		goto IL_004d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0036;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			String_t* L_9 = Locale_GetText_m3374010885(NULL /*static, unused*/, (String_t*)_stringLiteral1751657069, /*hidden argument*/NULL);
			Exception_t * L_10 = V_2;
			InvalidOperationException_t56020091 * L_11 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m1685032583(L_11, (String_t*)L_9, (Exception_t *)L_10, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11,Array_Sort_TisVector4_t3319028937_m3668240704_RuntimeMethod_var);
		}

IL_0048:
		{
			goto IL_004d;
		}
	} // end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void System.Array::Sort<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern "C"  void Array_Sort_TisVector4_t3319028937_m2797285308_gshared (RuntimeObject * __this /* static, unused */, Vector4U5BU5D_t934056436* ___array0, int32_t ___index1, int32_t ___length2, RuntimeObject* ___comparer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_Sort_TisVector4_t3319028937_m2797285308_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4U5BU5D_t934056436* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_Sort_TisVector4_t3319028937_m2797285308_RuntimeMethod_var);
	}

IL_0011:
	{
		Vector4U5BU5D_t934056436* L_2 = ___array0;
		int32_t L_3 = ___index1;
		int32_t L_4 = ___length2;
		RuntimeObject* L_5 = ___comparer3;
		((  void (*) (RuntimeObject * /* static, unused */, Vector4U5BU5D_t934056436*, Vector4U5BU5D_t934056436*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Vector4U5BU5D_t934056436*)L_2, (Vector4U5BU5D_t934056436*)(Vector4U5BU5D_t934056436*)NULL, (int32_t)L_3, (int32_t)L_4, (RuntimeObject*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
// System.Void System.Array::swap<AxisLabel,AxisLabel>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisAxisLabel_t4128127930_TisAxisLabel_t4128127930_m2920624505_gshared (RuntimeObject * __this /* static, unused */, AxisLabelU5BU5D_t731696159* ___keys0, AxisLabelU5BU5D_t731696159* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	AxisLabel_t4128127930  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AxisLabel_t4128127930  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		AxisLabelU5BU5D_t731696159* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		AxisLabel_t4128127930  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (AxisLabel_t4128127930 )L_3;
		AxisLabelU5BU5D_t731696159* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		AxisLabelU5BU5D_t731696159* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		AxisLabel_t4128127930  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (AxisLabel_t4128127930 )L_9);
		AxisLabelU5BU5D_t731696159* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		AxisLabel_t4128127930  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (AxisLabel_t4128127930 )L_12);
		AxisLabelU5BU5D_t731696159* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		AxisLabelU5BU5D_t731696159* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		AxisLabel_t4128127930  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (AxisLabel_t4128127930 )L_17;
		AxisLabelU5BU5D_t731696159* L_18 = ___items1;
		int32_t L_19 = ___i2;
		AxisLabelU5BU5D_t731696159* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		AxisLabel_t4128127930  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (AxisLabel_t4128127930 )L_23);
		AxisLabelU5BU5D_t731696159* L_24 = ___items1;
		int32_t L_25 = ___j3;
		AxisLabel_t4128127930  L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (AxisLabel_t4128127930 )L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<AxisLabel>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisAxisLabel_t4128127930_m455507741_gshared (RuntimeObject * __this /* static, unused */, AxisLabelU5BU5D_t731696159* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	AxisLabel_t4128127930  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		AxisLabelU5BU5D_t731696159* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		AxisLabel_t4128127930  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (AxisLabel_t4128127930 )L_3;
		AxisLabelU5BU5D_t731696159* L_4 = ___array0;
		int32_t L_5 = ___i1;
		AxisLabelU5BU5D_t731696159* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		AxisLabel_t4128127930  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (AxisLabel_t4128127930 )L_9);
		AxisLabelU5BU5D_t731696159* L_10 = ___array0;
		int32_t L_11 = ___j2;
		AxisLabel_t4128127930  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (AxisLabel_t4128127930 )L_12);
		return;
	}
}
// System.Void System.Array::swap<DataManager/Field,DataManager/Field>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisField_t4131964166_TisField_t4131964166_m3106815779_gshared (RuntimeObject * __this /* static, unused */, FieldU5BU5D_t3435812899* ___keys0, FieldU5BU5D_t3435812899* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	Field_t4131964166  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Field_t4131964166  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		FieldU5BU5D_t3435812899* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Field_t4131964166  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (Field_t4131964166 )L_3;
		FieldU5BU5D_t3435812899* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		FieldU5BU5D_t3435812899* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Field_t4131964166  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Field_t4131964166 )L_9);
		FieldU5BU5D_t3435812899* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		Field_t4131964166  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Field_t4131964166 )L_12);
		FieldU5BU5D_t3435812899* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		FieldU5BU5D_t3435812899* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Field_t4131964166  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (Field_t4131964166 )L_17;
		FieldU5BU5D_t3435812899* L_18 = ___items1;
		int32_t L_19 = ___i2;
		FieldU5BU5D_t3435812899* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Field_t4131964166  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Field_t4131964166 )L_23);
		FieldU5BU5D_t3435812899* L_24 = ___items1;
		int32_t L_25 = ___j3;
		Field_t4131964166  L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Field_t4131964166 )L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<DataManager/Field>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisField_t4131964166_m1081343350_gshared (RuntimeObject * __this /* static, unused */, FieldU5BU5D_t3435812899* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	Field_t4131964166  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		FieldU5BU5D_t3435812899* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Field_t4131964166  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (Field_t4131964166 )L_3;
		FieldU5BU5D_t3435812899* L_4 = ___array0;
		int32_t L_5 = ___i1;
		FieldU5BU5D_t3435812899* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Field_t4131964166  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Field_t4131964166 )L_9);
		FieldU5BU5D_t3435812899* L_10 = ___array0;
		int32_t L_11 = ___j2;
		Field_t4131964166  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Field_t4131964166 )L_12);
		return;
	}
}
// System.Void System.Array::swap<DataManager/Hit,DataManager/Hit>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisHit_t3596106040_TisHit_t3596106040_m2225284048_gshared (RuntimeObject * __this /* static, unused */, HitU5BU5D_t845046505* ___keys0, HitU5BU5D_t845046505* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	Hit_t3596106040  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Hit_t3596106040  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		HitU5BU5D_t845046505* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Hit_t3596106040  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (Hit_t3596106040 )L_3;
		HitU5BU5D_t845046505* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		HitU5BU5D_t845046505* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Hit_t3596106040  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Hit_t3596106040 )L_9);
		HitU5BU5D_t845046505* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		Hit_t3596106040  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Hit_t3596106040 )L_12);
		HitU5BU5D_t845046505* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		HitU5BU5D_t845046505* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Hit_t3596106040  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (Hit_t3596106040 )L_17;
		HitU5BU5D_t845046505* L_18 = ___items1;
		int32_t L_19 = ___i2;
		HitU5BU5D_t845046505* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Hit_t3596106040  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Hit_t3596106040 )L_23);
		HitU5BU5D_t845046505* L_24 = ___items1;
		int32_t L_25 = ___j3;
		Hit_t3596106040  L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Hit_t3596106040 )L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<DataManager/Hit>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisHit_t3596106040_m174943443_gshared (RuntimeObject * __this /* static, unused */, HitU5BU5D_t845046505* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	Hit_t3596106040  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		HitU5BU5D_t845046505* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Hit_t3596106040  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (Hit_t3596106040 )L_3;
		HitU5BU5D_t845046505* L_4 = ___array0;
		int32_t L_5 = ___i1;
		HitU5BU5D_t845046505* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Hit_t3596106040  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Hit_t3596106040 )L_9);
		HitU5BU5D_t845046505* L_10 = ___array0;
		int32_t L_11 = ___j2;
		Hit_t3596106040  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Hit_t3596106040 )L_12);
		return;
	}
}
// System.Void System.Array::swap<DataManager/LevelData,DataManager/LevelData>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisLevelData_t439927600_TisLevelData_t439927600_m1477640779_gshared (RuntimeObject * __this /* static, unused */, LevelDataU5BU5D_t921917969* ___keys0, LevelDataU5BU5D_t921917969* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	LevelData_t439927600  V_0;
	memset(&V_0, 0, sizeof(V_0));
	LevelData_t439927600  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		LevelDataU5BU5D_t921917969* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		LevelData_t439927600  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (LevelData_t439927600 )L_3;
		LevelDataU5BU5D_t921917969* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		LevelDataU5BU5D_t921917969* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		LevelData_t439927600  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (LevelData_t439927600 )L_9);
		LevelDataU5BU5D_t921917969* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		LevelData_t439927600  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (LevelData_t439927600 )L_12);
		LevelDataU5BU5D_t921917969* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		LevelDataU5BU5D_t921917969* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		LevelData_t439927600  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (LevelData_t439927600 )L_17;
		LevelDataU5BU5D_t921917969* L_18 = ___items1;
		int32_t L_19 = ___i2;
		LevelDataU5BU5D_t921917969* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		LevelData_t439927600  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (LevelData_t439927600 )L_23);
		LevelDataU5BU5D_t921917969* L_24 = ___items1;
		int32_t L_25 = ___j3;
		LevelData_t439927600  L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (LevelData_t439927600 )L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<DataManager/LevelData>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisLevelData_t439927600_m2573885929_gshared (RuntimeObject * __this /* static, unused */, LevelDataU5BU5D_t921917969* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	LevelData_t439927600  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		LevelDataU5BU5D_t921917969* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		LevelData_t439927600  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (LevelData_t439927600 )L_3;
		LevelDataU5BU5D_t921917969* L_4 = ___array0;
		int32_t L_5 = ___i1;
		LevelDataU5BU5D_t921917969* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		LevelData_t439927600  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (LevelData_t439927600 )L_9);
		LevelDataU5BU5D_t921917969* L_10 = ___array0;
		int32_t L_11 = ___j2;
		LevelData_t439927600  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (LevelData_t439927600 )L_12);
		return;
	}
}
// System.Void System.Array::swap<DataManager/SessionData,DataManager/SessionData>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisSessionData_t844877374_TisSessionData_t844877374_m3964906886_gshared (RuntimeObject * __this /* static, unused */, SessionDataU5BU5D_t1570286347* ___keys0, SessionDataU5BU5D_t1570286347* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	SessionData_t844877374  V_0;
	memset(&V_0, 0, sizeof(V_0));
	SessionData_t844877374  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		SessionDataU5BU5D_t1570286347* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SessionData_t844877374  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (SessionData_t844877374 )L_3;
		SessionDataU5BU5D_t1570286347* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		SessionDataU5BU5D_t1570286347* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		SessionData_t844877374  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (SessionData_t844877374 )L_9);
		SessionDataU5BU5D_t1570286347* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		SessionData_t844877374  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (SessionData_t844877374 )L_12);
		SessionDataU5BU5D_t1570286347* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		SessionDataU5BU5D_t1570286347* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		SessionData_t844877374  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (SessionData_t844877374 )L_17;
		SessionDataU5BU5D_t1570286347* L_18 = ___items1;
		int32_t L_19 = ___i2;
		SessionDataU5BU5D_t1570286347* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		SessionData_t844877374  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (SessionData_t844877374 )L_23);
		SessionDataU5BU5D_t1570286347* L_24 = ___items1;
		int32_t L_25 = ___j3;
		SessionData_t844877374  L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (SessionData_t844877374 )L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<DataManager/SessionData>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisSessionData_t844877374_m4008421289_gshared (RuntimeObject * __this /* static, unused */, SessionDataU5BU5D_t1570286347* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	SessionData_t844877374  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		SessionDataU5BU5D_t1570286347* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SessionData_t844877374  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (SessionData_t844877374 )L_3;
		SessionDataU5BU5D_t1570286347* L_4 = ___array0;
		int32_t L_5 = ___i1;
		SessionDataU5BU5D_t1570286347* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		SessionData_t844877374  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (SessionData_t844877374 )L_9);
		SessionDataU5BU5D_t1570286347* L_10 = ___array0;
		int32_t L_11 = ___j2;
		SessionData_t844877374  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (SessionData_t844877374 )L_12);
		return;
	}
}
// System.Void System.Array::swap<ResultsScreen/ResultType,ResultsScreen/ResultType>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisResultType_t2923018313_TisResultType_t2923018313_m620487072_gshared (RuntimeObject * __this /* static, unused */, ResultTypeU5BU5D_t2236143732* ___keys0, ResultTypeU5BU5D_t2236143732* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	ResultType_t2923018313  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ResultType_t2923018313  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		ResultTypeU5BU5D_t2236143732* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ResultType_t2923018313  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (ResultType_t2923018313 )L_3;
		ResultTypeU5BU5D_t2236143732* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		ResultTypeU5BU5D_t2236143732* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		ResultType_t2923018313  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (ResultType_t2923018313 )L_9);
		ResultTypeU5BU5D_t2236143732* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		ResultType_t2923018313  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (ResultType_t2923018313 )L_12);
		ResultTypeU5BU5D_t2236143732* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		ResultTypeU5BU5D_t2236143732* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		ResultType_t2923018313  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (ResultType_t2923018313 )L_17;
		ResultTypeU5BU5D_t2236143732* L_18 = ___items1;
		int32_t L_19 = ___i2;
		ResultTypeU5BU5D_t2236143732* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		ResultType_t2923018313  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (ResultType_t2923018313 )L_23);
		ResultTypeU5BU5D_t2236143732* L_24 = ___items1;
		int32_t L_25 = ___j3;
		ResultType_t2923018313  L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (ResultType_t2923018313 )L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<ResultsScreen/ResultType>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisResultType_t2923018313_m2731811397_gshared (RuntimeObject * __this /* static, unused */, ResultTypeU5BU5D_t2236143732* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	ResultType_t2923018313  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ResultTypeU5BU5D_t2236143732* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ResultType_t2923018313  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (ResultType_t2923018313 )L_3;
		ResultTypeU5BU5D_t2236143732* L_4 = ___array0;
		int32_t L_5 = ___i1;
		ResultTypeU5BU5D_t2236143732* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		ResultType_t2923018313  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (ResultType_t2923018313 )L_9);
		ResultTypeU5BU5D_t2236143732* L_10 = ___array0;
		int32_t L_11 = ___j2;
		ResultType_t2923018313  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (ResultType_t2923018313 )L_12);
		return;
	}
}
// System.Void System.Array::swap<System.DateTime,System.DateTime>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisDateTime_t3738529785_TisDateTime_t3738529785_m1752231004_gshared (RuntimeObject * __this /* static, unused */, DateTimeU5BU5D_t1184652292* ___keys0, DateTimeU5BU5D_t1184652292* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		DateTimeU5BU5D_t1184652292* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		DateTime_t3738529785  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (DateTime_t3738529785 )L_3;
		DateTimeU5BU5D_t1184652292* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		DateTimeU5BU5D_t1184652292* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		DateTime_t3738529785  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (DateTime_t3738529785 )L_9);
		DateTimeU5BU5D_t1184652292* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		DateTime_t3738529785  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (DateTime_t3738529785 )L_12);
		DateTimeU5BU5D_t1184652292* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		DateTimeU5BU5D_t1184652292* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		DateTime_t3738529785  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (DateTime_t3738529785 )L_17;
		DateTimeU5BU5D_t1184652292* L_18 = ___items1;
		int32_t L_19 = ___i2;
		DateTimeU5BU5D_t1184652292* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		DateTime_t3738529785  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (DateTime_t3738529785 )L_23);
		DateTimeU5BU5D_t1184652292* L_24 = ___items1;
		int32_t L_25 = ___j3;
		DateTime_t3738529785  L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (DateTime_t3738529785 )L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<System.DateTime>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisDateTime_t3738529785_m316766841_gshared (RuntimeObject * __this /* static, unused */, DateTimeU5BU5D_t1184652292* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		DateTimeU5BU5D_t1184652292* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		DateTime_t3738529785  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (DateTime_t3738529785 )L_3;
		DateTimeU5BU5D_t1184652292* L_4 = ___array0;
		int32_t L_5 = ___i1;
		DateTimeU5BU5D_t1184652292* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		DateTime_t3738529785  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (DateTime_t3738529785 )L_9);
		DateTimeU5BU5D_t1184652292* L_10 = ___array0;
		int32_t L_11 = ___j2;
		DateTime_t3738529785  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (DateTime_t3738529785 )L_12);
		return;
	}
}
// System.Void System.Array::swap<System.Int32,System.Int32>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisInt32_t2950945753_TisInt32_t2950945753_m844545456_gshared (RuntimeObject * __this /* static, unused */, Int32U5BU5D_t385246372* ___keys0, Int32U5BU5D_t385246372* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t385246372* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (int32_t)L_3;
		Int32U5BU5D_t385246372* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		Int32U5BU5D_t385246372* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_9);
		Int32U5BU5D_t385246372* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		int32_t L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int32_t)L_12);
		Int32U5BU5D_t385246372* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		Int32U5BU5D_t385246372* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (int32_t)L_17;
		Int32U5BU5D_t385246372* L_18 = ___items1;
		int32_t L_19 = ___i2;
		Int32U5BU5D_t385246372* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)L_23);
		Int32U5BU5D_t385246372* L_24 = ___items1;
		int32_t L_25 = ___j3;
		int32_t L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (int32_t)L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<System.Int32>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisInt32_t2950945753_m1434801513_gshared (RuntimeObject * __this /* static, unused */, Int32U5BU5D_t385246372* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t385246372* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (int32_t)L_3;
		Int32U5BU5D_t385246372* L_4 = ___array0;
		int32_t L_5 = ___i1;
		Int32U5BU5D_t385246372* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_9);
		Int32U5BU5D_t385246372* L_10 = ___array0;
		int32_t L_11 = ___j2;
		int32_t L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int32_t)L_12);
		return;
	}
}
// System.Void System.Array::swap<System.Object,System.Object>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisRuntimeObject_TisRuntimeObject_m3366857751_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___keys0, ObjectU5BU5D_t2843939325* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (RuntimeObject *)L_3;
		ObjectU5BU5D_t2843939325* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		ObjectU5BU5D_t2843939325* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		RuntimeObject * L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (RuntimeObject *)L_17;
		ObjectU5BU5D_t2843939325* L_18 = ___items1;
		int32_t L_19 = ___i2;
		ObjectU5BU5D_t2843939325* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (RuntimeObject *)L_23);
		ObjectU5BU5D_t2843939325* L_24 = ___items1;
		int32_t L_25 = ___j3;
		RuntimeObject * L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (RuntimeObject *)L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<System.Object>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisRuntimeObject_m3281757310_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (RuntimeObject *)L_3;
		ObjectU5BU5D_t2843939325* L_4 = ___array0;
		int32_t L_5 = ___i1;
		ObjectU5BU5D_t2843939325* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = ___array0;
		int32_t L_11 = ___j2;
		RuntimeObject * L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (RuntimeObject *)L_12);
		return;
	}
}
// System.Void System.Array::swap<System.Reflection.CustomAttributeNamedArgument,System.Reflection.CustomAttributeNamedArgument>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisCustomAttributeNamedArgument_t287865710_TisCustomAttributeNamedArgument_t287865710_m881919420_gshared (RuntimeObject * __this /* static, unused */, CustomAttributeNamedArgumentU5BU5D_t3710464795* ___keys0, CustomAttributeNamedArgumentU5BU5D_t3710464795* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	CustomAttributeNamedArgument_t287865710  V_0;
	memset(&V_0, 0, sizeof(V_0));
	CustomAttributeNamedArgument_t287865710  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		CustomAttributeNamedArgument_t287865710  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (CustomAttributeNamedArgument_t287865710 )L_3;
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		CustomAttributeNamedArgument_t287865710  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (CustomAttributeNamedArgument_t287865710 )L_9);
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		CustomAttributeNamedArgument_t287865710  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (CustomAttributeNamedArgument_t287865710 )L_12);
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		CustomAttributeNamedArgument_t287865710  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (CustomAttributeNamedArgument_t287865710 )L_17;
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_18 = ___items1;
		int32_t L_19 = ___i2;
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		CustomAttributeNamedArgument_t287865710  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (CustomAttributeNamedArgument_t287865710 )L_23);
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_24 = ___items1;
		int32_t L_25 = ___j3;
		CustomAttributeNamedArgument_t287865710  L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (CustomAttributeNamedArgument_t287865710 )L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<System.Reflection.CustomAttributeNamedArgument>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisCustomAttributeNamedArgument_t287865710_m2628186452_gshared (RuntimeObject * __this /* static, unused */, CustomAttributeNamedArgumentU5BU5D_t3710464795* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	CustomAttributeNamedArgument_t287865710  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		CustomAttributeNamedArgument_t287865710  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (CustomAttributeNamedArgument_t287865710 )L_3;
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_4 = ___array0;
		int32_t L_5 = ___i1;
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		CustomAttributeNamedArgument_t287865710  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (CustomAttributeNamedArgument_t287865710 )L_9);
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_10 = ___array0;
		int32_t L_11 = ___j2;
		CustomAttributeNamedArgument_t287865710  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (CustomAttributeNamedArgument_t287865710 )L_12);
		return;
	}
}
// System.Void System.Array::swap<System.Reflection.CustomAttributeTypedArgument,System.Reflection.CustomAttributeTypedArgument>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisCustomAttributeTypedArgument_t2723150157_TisCustomAttributeTypedArgument_t2723150157_m365781156_gshared (RuntimeObject * __this /* static, unused */, CustomAttributeTypedArgumentU5BU5D_t1465843424* ___keys0, CustomAttributeTypedArgumentU5BU5D_t1465843424* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	CustomAttributeTypedArgument_t2723150157  V_0;
	memset(&V_0, 0, sizeof(V_0));
	CustomAttributeTypedArgument_t2723150157  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		CustomAttributeTypedArgument_t2723150157  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (CustomAttributeTypedArgument_t2723150157 )L_3;
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		CustomAttributeTypedArgument_t2723150157  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (CustomAttributeTypedArgument_t2723150157 )L_9);
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		CustomAttributeTypedArgument_t2723150157  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (CustomAttributeTypedArgument_t2723150157 )L_12);
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		CustomAttributeTypedArgument_t2723150157  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (CustomAttributeTypedArgument_t2723150157 )L_17;
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_18 = ___items1;
		int32_t L_19 = ___i2;
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		CustomAttributeTypedArgument_t2723150157  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (CustomAttributeTypedArgument_t2723150157 )L_23);
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_24 = ___items1;
		int32_t L_25 = ___j3;
		CustomAttributeTypedArgument_t2723150157  L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (CustomAttributeTypedArgument_t2723150157 )L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<System.Reflection.CustomAttributeTypedArgument>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisCustomAttributeTypedArgument_t2723150157_m399037025_gshared (RuntimeObject * __this /* static, unused */, CustomAttributeTypedArgumentU5BU5D_t1465843424* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	CustomAttributeTypedArgument_t2723150157  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		CustomAttributeTypedArgument_t2723150157  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (CustomAttributeTypedArgument_t2723150157 )L_3;
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_4 = ___array0;
		int32_t L_5 = ___i1;
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		CustomAttributeTypedArgument_t2723150157  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (CustomAttributeTypedArgument_t2723150157 )L_9);
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_10 = ___array0;
		int32_t L_11 = ___j2;
		CustomAttributeTypedArgument_t2723150157  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (CustomAttributeTypedArgument_t2723150157 )L_12);
		return;
	}
}
// System.Void System.Array::swap<System.Single,System.Single>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisSingle_t1397266774_TisSingle_t1397266774_m3453509928_gshared (RuntimeObject * __this /* static, unused */, SingleU5BU5D_t1444911251* ___keys0, SingleU5BU5D_t1444911251* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		SingleU5BU5D_t1444911251* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		float L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (float)L_3;
		SingleU5BU5D_t1444911251* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		SingleU5BU5D_t1444911251* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (float)L_9);
		SingleU5BU5D_t1444911251* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		float L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (float)L_12);
		SingleU5BU5D_t1444911251* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		SingleU5BU5D_t1444911251* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		float L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (float)L_17;
		SingleU5BU5D_t1444911251* L_18 = ___items1;
		int32_t L_19 = ___i2;
		SingleU5BU5D_t1444911251* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		float L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (float)L_23);
		SingleU5BU5D_t1444911251* L_24 = ___items1;
		int32_t L_25 = ___j3;
		float L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (float)L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<System.Single>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisSingle_t1397266774_m2114136250_gshared (RuntimeObject * __this /* static, unused */, SingleU5BU5D_t1444911251* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		SingleU5BU5D_t1444911251* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		float L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (float)L_3;
		SingleU5BU5D_t1444911251* L_4 = ___array0;
		int32_t L_5 = ___i1;
		SingleU5BU5D_t1444911251* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (float)L_9);
		SingleU5BU5D_t1444911251* L_10 = ___array0;
		int32_t L_11 = ___j2;
		float L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (float)L_12);
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.BeforeRenderHelper/OrderBlock,UnityEngine.BeforeRenderHelper/OrderBlock>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisOrderBlock_t1585977831_TisOrderBlock_t1585977831_m1022164620_gshared (RuntimeObject * __this /* static, unused */, OrderBlockU5BU5D_t2389202590* ___keys0, OrderBlockU5BU5D_t2389202590* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	OrderBlock_t1585977831  V_0;
	memset(&V_0, 0, sizeof(V_0));
	OrderBlock_t1585977831  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		OrderBlockU5BU5D_t2389202590* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		OrderBlock_t1585977831  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (OrderBlock_t1585977831 )L_3;
		OrderBlockU5BU5D_t2389202590* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		OrderBlockU5BU5D_t2389202590* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		OrderBlock_t1585977831  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (OrderBlock_t1585977831 )L_9);
		OrderBlockU5BU5D_t2389202590* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		OrderBlock_t1585977831  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (OrderBlock_t1585977831 )L_12);
		OrderBlockU5BU5D_t2389202590* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		OrderBlockU5BU5D_t2389202590* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		OrderBlock_t1585977831  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (OrderBlock_t1585977831 )L_17;
		OrderBlockU5BU5D_t2389202590* L_18 = ___items1;
		int32_t L_19 = ___i2;
		OrderBlockU5BU5D_t2389202590* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		OrderBlock_t1585977831  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (OrderBlock_t1585977831 )L_23);
		OrderBlockU5BU5D_t2389202590* L_24 = ___items1;
		int32_t L_25 = ___j3;
		OrderBlock_t1585977831  L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (OrderBlock_t1585977831 )L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.BeforeRenderHelper/OrderBlock>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisOrderBlock_t1585977831_m2373872313_gshared (RuntimeObject * __this /* static, unused */, OrderBlockU5BU5D_t2389202590* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	OrderBlock_t1585977831  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		OrderBlockU5BU5D_t2389202590* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		OrderBlock_t1585977831  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (OrderBlock_t1585977831 )L_3;
		OrderBlockU5BU5D_t2389202590* L_4 = ___array0;
		int32_t L_5 = ___i1;
		OrderBlockU5BU5D_t2389202590* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		OrderBlock_t1585977831  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (OrderBlock_t1585977831 )L_9);
		OrderBlockU5BU5D_t2389202590* L_10 = ___array0;
		int32_t L_11 = ___j2;
		OrderBlock_t1585977831  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (OrderBlock_t1585977831 )L_12);
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.Color32,UnityEngine.Color32>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisColor32_t2600501292_TisColor32_t2600501292_m3946335354_gshared (RuntimeObject * __this /* static, unused */, Color32U5BU5D_t3850468773* ___keys0, Color32U5BU5D_t3850468773* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	Color32_t2600501292  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Color32_t2600501292  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Color32U5BU5D_t3850468773* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Color32_t2600501292  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (Color32_t2600501292 )L_3;
		Color32U5BU5D_t3850468773* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		Color32U5BU5D_t3850468773* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Color32_t2600501292  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Color32_t2600501292 )L_9);
		Color32U5BU5D_t3850468773* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		Color32_t2600501292  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Color32_t2600501292 )L_12);
		Color32U5BU5D_t3850468773* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		Color32U5BU5D_t3850468773* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Color32_t2600501292  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (Color32_t2600501292 )L_17;
		Color32U5BU5D_t3850468773* L_18 = ___items1;
		int32_t L_19 = ___i2;
		Color32U5BU5D_t3850468773* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Color32_t2600501292  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Color32_t2600501292 )L_23);
		Color32U5BU5D_t3850468773* L_24 = ___items1;
		int32_t L_25 = ___j3;
		Color32_t2600501292  L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Color32_t2600501292 )L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.Color32>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisColor32_t2600501292_m1370892172_gshared (RuntimeObject * __this /* static, unused */, Color32U5BU5D_t3850468773* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	Color32_t2600501292  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Color32U5BU5D_t3850468773* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Color32_t2600501292  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (Color32_t2600501292 )L_3;
		Color32U5BU5D_t3850468773* L_4 = ___array0;
		int32_t L_5 = ___i1;
		Color32U5BU5D_t3850468773* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Color32_t2600501292  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Color32_t2600501292 )L_9);
		Color32U5BU5D_t3850468773* L_10 = ___array0;
		int32_t L_11 = ___j2;
		Color32_t2600501292  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Color32_t2600501292 )L_12);
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.EventSystems.RaycastResult,UnityEngine.EventSystems.RaycastResult>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisRaycastResult_t3360306849_TisRaycastResult_t3360306849_m3400922624_gshared (RuntimeObject * __this /* static, unused */, RaycastResultU5BU5D_t1128832444* ___keys0, RaycastResultU5BU5D_t1128832444* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	RaycastResult_t3360306849  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RaycastResult_t3360306849  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		RaycastResultU5BU5D_t1128832444* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RaycastResult_t3360306849  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (RaycastResult_t3360306849 )L_3;
		RaycastResultU5BU5D_t1128832444* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		RaycastResultU5BU5D_t1128832444* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RaycastResult_t3360306849  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RaycastResult_t3360306849 )L_9);
		RaycastResultU5BU5D_t1128832444* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		RaycastResult_t3360306849  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (RaycastResult_t3360306849 )L_12);
		RaycastResultU5BU5D_t1128832444* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		RaycastResultU5BU5D_t1128832444* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		RaycastResult_t3360306849  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (RaycastResult_t3360306849 )L_17;
		RaycastResultU5BU5D_t1128832444* L_18 = ___items1;
		int32_t L_19 = ___i2;
		RaycastResultU5BU5D_t1128832444* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		RaycastResult_t3360306849  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (RaycastResult_t3360306849 )L_23);
		RaycastResultU5BU5D_t1128832444* L_24 = ___items1;
		int32_t L_25 = ___j3;
		RaycastResult_t3360306849  L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (RaycastResult_t3360306849 )L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.EventSystems.RaycastResult>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisRaycastResult_t3360306849_m1471156646_gshared (RuntimeObject * __this /* static, unused */, RaycastResultU5BU5D_t1128832444* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	RaycastResult_t3360306849  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RaycastResultU5BU5D_t1128832444* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RaycastResult_t3360306849  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (RaycastResult_t3360306849 )L_3;
		RaycastResultU5BU5D_t1128832444* L_4 = ___array0;
		int32_t L_5 = ___i1;
		RaycastResultU5BU5D_t1128832444* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RaycastResult_t3360306849  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RaycastResult_t3360306849 )L_9);
		RaycastResultU5BU5D_t1128832444* L_10 = ___array0;
		int32_t L_11 = ___j2;
		RaycastResult_t3360306849  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (RaycastResult_t3360306849 )L_12);
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.RaycastHit>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisRaycastHit_t1056001966_m1004856983_gshared (RuntimeObject * __this /* static, unused */, RaycastHitU5BU5D_t1690781147* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	RaycastHit_t1056001966  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RaycastHitU5BU5D_t1690781147* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RaycastHit_t1056001966  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (RaycastHit_t1056001966 )L_3;
		RaycastHitU5BU5D_t1690781147* L_4 = ___array0;
		int32_t L_5 = ___i1;
		RaycastHitU5BU5D_t1690781147* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RaycastHit_t1056001966  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RaycastHit_t1056001966 )L_9);
		RaycastHitU5BU5D_t1690781147* L_10 = ___array0;
		int32_t L_11 = ___j2;
		RaycastHit_t1056001966  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (RaycastHit_t1056001966 )L_12);
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.UICharInfo,UnityEngine.UICharInfo>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisUICharInfo_t75501106_TisUICharInfo_t75501106_m585514134_gshared (RuntimeObject * __this /* static, unused */, UICharInfoU5BU5D_t928762055* ___keys0, UICharInfoU5BU5D_t928762055* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	UICharInfo_t75501106  V_0;
	memset(&V_0, 0, sizeof(V_0));
	UICharInfo_t75501106  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		UICharInfoU5BU5D_t928762055* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		UICharInfo_t75501106  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (UICharInfo_t75501106 )L_3;
		UICharInfoU5BU5D_t928762055* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		UICharInfoU5BU5D_t928762055* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		UICharInfo_t75501106  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (UICharInfo_t75501106 )L_9);
		UICharInfoU5BU5D_t928762055* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		UICharInfo_t75501106  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (UICharInfo_t75501106 )L_12);
		UICharInfoU5BU5D_t928762055* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		UICharInfoU5BU5D_t928762055* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		UICharInfo_t75501106  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (UICharInfo_t75501106 )L_17;
		UICharInfoU5BU5D_t928762055* L_18 = ___items1;
		int32_t L_19 = ___i2;
		UICharInfoU5BU5D_t928762055* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		UICharInfo_t75501106  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (UICharInfo_t75501106 )L_23);
		UICharInfoU5BU5D_t928762055* L_24 = ___items1;
		int32_t L_25 = ___j3;
		UICharInfo_t75501106  L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (UICharInfo_t75501106 )L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.UICharInfo>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisUICharInfo_t75501106_m3934244159_gshared (RuntimeObject * __this /* static, unused */, UICharInfoU5BU5D_t928762055* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	UICharInfo_t75501106  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		UICharInfoU5BU5D_t928762055* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		UICharInfo_t75501106  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (UICharInfo_t75501106 )L_3;
		UICharInfoU5BU5D_t928762055* L_4 = ___array0;
		int32_t L_5 = ___i1;
		UICharInfoU5BU5D_t928762055* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		UICharInfo_t75501106  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (UICharInfo_t75501106 )L_9);
		UICharInfoU5BU5D_t928762055* L_10 = ___array0;
		int32_t L_11 = ___j2;
		UICharInfo_t75501106  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (UICharInfo_t75501106 )L_12);
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.UILineInfo,UnityEngine.UILineInfo>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisUILineInfo_t4195266810_TisUILineInfo_t4195266810_m3310375275_gshared (RuntimeObject * __this /* static, unused */, UILineInfoU5BU5D_t1655937503* ___keys0, UILineInfoU5BU5D_t1655937503* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	UILineInfo_t4195266810  V_0;
	memset(&V_0, 0, sizeof(V_0));
	UILineInfo_t4195266810  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		UILineInfoU5BU5D_t1655937503* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		UILineInfo_t4195266810  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (UILineInfo_t4195266810 )L_3;
		UILineInfoU5BU5D_t1655937503* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		UILineInfoU5BU5D_t1655937503* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		UILineInfo_t4195266810  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (UILineInfo_t4195266810 )L_9);
		UILineInfoU5BU5D_t1655937503* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		UILineInfo_t4195266810  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (UILineInfo_t4195266810 )L_12);
		UILineInfoU5BU5D_t1655937503* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		UILineInfoU5BU5D_t1655937503* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		UILineInfo_t4195266810  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (UILineInfo_t4195266810 )L_17;
		UILineInfoU5BU5D_t1655937503* L_18 = ___items1;
		int32_t L_19 = ___i2;
		UILineInfoU5BU5D_t1655937503* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		UILineInfo_t4195266810  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (UILineInfo_t4195266810 )L_23);
		UILineInfoU5BU5D_t1655937503* L_24 = ___items1;
		int32_t L_25 = ___j3;
		UILineInfo_t4195266810  L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (UILineInfo_t4195266810 )L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.UILineInfo>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisUILineInfo_t4195266810_m270936006_gshared (RuntimeObject * __this /* static, unused */, UILineInfoU5BU5D_t1655937503* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	UILineInfo_t4195266810  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		UILineInfoU5BU5D_t1655937503* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		UILineInfo_t4195266810  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (UILineInfo_t4195266810 )L_3;
		UILineInfoU5BU5D_t1655937503* L_4 = ___array0;
		int32_t L_5 = ___i1;
		UILineInfoU5BU5D_t1655937503* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		UILineInfo_t4195266810  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (UILineInfo_t4195266810 )L_9);
		UILineInfoU5BU5D_t1655937503* L_10 = ___array0;
		int32_t L_11 = ___j2;
		UILineInfo_t4195266810  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (UILineInfo_t4195266810 )L_12);
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.UIVertex,UnityEngine.UIVertex>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisUIVertex_t4057497605_TisUIVertex_t4057497605_m2109706212_gshared (RuntimeObject * __this /* static, unused */, UIVertexU5BU5D_t1981460040* ___keys0, UIVertexU5BU5D_t1981460040* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	UIVertex_t4057497605  V_0;
	memset(&V_0, 0, sizeof(V_0));
	UIVertex_t4057497605  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		UIVertexU5BU5D_t1981460040* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		UIVertex_t4057497605  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (UIVertex_t4057497605 )L_3;
		UIVertexU5BU5D_t1981460040* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		UIVertexU5BU5D_t1981460040* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		UIVertex_t4057497605  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (UIVertex_t4057497605 )L_9);
		UIVertexU5BU5D_t1981460040* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		UIVertex_t4057497605  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (UIVertex_t4057497605 )L_12);
		UIVertexU5BU5D_t1981460040* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		UIVertexU5BU5D_t1981460040* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		UIVertex_t4057497605  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (UIVertex_t4057497605 )L_17;
		UIVertexU5BU5D_t1981460040* L_18 = ___items1;
		int32_t L_19 = ___i2;
		UIVertexU5BU5D_t1981460040* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		UIVertex_t4057497605  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (UIVertex_t4057497605 )L_23);
		UIVertexU5BU5D_t1981460040* L_24 = ___items1;
		int32_t L_25 = ___j3;
		UIVertex_t4057497605  L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (UIVertex_t4057497605 )L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.UIVertex>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisUIVertex_t4057497605_m790807762_gshared (RuntimeObject * __this /* static, unused */, UIVertexU5BU5D_t1981460040* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	UIVertex_t4057497605  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		UIVertexU5BU5D_t1981460040* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		UIVertex_t4057497605  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (UIVertex_t4057497605 )L_3;
		UIVertexU5BU5D_t1981460040* L_4 = ___array0;
		int32_t L_5 = ___i1;
		UIVertexU5BU5D_t1981460040* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		UIVertex_t4057497605  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (UIVertex_t4057497605 )L_9);
		UIVertexU5BU5D_t1981460040* L_10 = ___array0;
		int32_t L_11 = ___j2;
		UIVertex_t4057497605  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (UIVertex_t4057497605 )L_12);
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.Vector2,UnityEngine.Vector2>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisVector2_t2156229523_TisVector2_t2156229523_m345092822_gshared (RuntimeObject * __this /* static, unused */, Vector2U5BU5D_t1457185986* ___keys0, Vector2U5BU5D_t1457185986* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector2U5BU5D_t1457185986* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vector2_t2156229523  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (Vector2_t2156229523 )L_3;
		Vector2U5BU5D_t1457185986* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		Vector2U5BU5D_t1457185986* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vector2_t2156229523  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vector2_t2156229523 )L_9);
		Vector2U5BU5D_t1457185986* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		Vector2_t2156229523  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Vector2_t2156229523 )L_12);
		Vector2U5BU5D_t1457185986* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Vector2_t2156229523  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (Vector2_t2156229523 )L_17;
		Vector2U5BU5D_t1457185986* L_18 = ___items1;
		int32_t L_19 = ___i2;
		Vector2U5BU5D_t1457185986* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Vector2_t2156229523  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Vector2_t2156229523 )L_23);
		Vector2U5BU5D_t1457185986* L_24 = ___items1;
		int32_t L_25 = ___j3;
		Vector2_t2156229523  L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Vector2_t2156229523 )L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.Vector2>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisVector2_t2156229523_m1892649339_gshared (RuntimeObject * __this /* static, unused */, Vector2U5BU5D_t1457185986* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector2U5BU5D_t1457185986* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vector2_t2156229523  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (Vector2_t2156229523 )L_3;
		Vector2U5BU5D_t1457185986* L_4 = ___array0;
		int32_t L_5 = ___i1;
		Vector2U5BU5D_t1457185986* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vector2_t2156229523  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vector2_t2156229523 )L_9);
		Vector2U5BU5D_t1457185986* L_10 = ___array0;
		int32_t L_11 = ___j2;
		Vector2_t2156229523  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Vector2_t2156229523 )L_12);
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.Vector3,UnityEngine.Vector3>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisVector3_t3722313464_TisVector3_t3722313464_m3112357809_gshared (RuntimeObject * __this /* static, unused */, Vector3U5BU5D_t1718750761* ___keys0, Vector3U5BU5D_t1718750761* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector3U5BU5D_t1718750761* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vector3_t3722313464  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (Vector3_t3722313464 )L_3;
		Vector3U5BU5D_t1718750761* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		Vector3U5BU5D_t1718750761* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vector3_t3722313464  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vector3_t3722313464 )L_9);
		Vector3U5BU5D_t1718750761* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		Vector3_t3722313464  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Vector3_t3722313464 )L_12);
		Vector3U5BU5D_t1718750761* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Vector3_t3722313464  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (Vector3_t3722313464 )L_17;
		Vector3U5BU5D_t1718750761* L_18 = ___items1;
		int32_t L_19 = ___i2;
		Vector3U5BU5D_t1718750761* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Vector3_t3722313464  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Vector3_t3722313464 )L_23);
		Vector3U5BU5D_t1718750761* L_24 = ___items1;
		int32_t L_25 = ___j3;
		Vector3_t3722313464  L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Vector3_t3722313464 )L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.Vector3>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisVector3_t3722313464_m3753546221_gshared (RuntimeObject * __this /* static, unused */, Vector3U5BU5D_t1718750761* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3U5BU5D_t1718750761* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vector3_t3722313464  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (Vector3_t3722313464 )L_3;
		Vector3U5BU5D_t1718750761* L_4 = ___array0;
		int32_t L_5 = ___i1;
		Vector3U5BU5D_t1718750761* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vector3_t3722313464  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vector3_t3722313464 )L_9);
		Vector3U5BU5D_t1718750761* L_10 = ___array0;
		int32_t L_11 = ___j2;
		Vector3_t3722313464  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Vector3_t3722313464 )L_12);
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.Vector4,UnityEngine.Vector4>(K[],V[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisVector4_t3319028937_TisVector4_t3319028937_m2655697434_gshared (RuntimeObject * __this /* static, unused */, Vector4U5BU5D_t934056436* ___keys0, Vector4U5BU5D_t934056436* ___items1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector4_t3319028937  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector4U5BU5D_t934056436* L_0 = ___keys0;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vector4_t3319028937  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (Vector4_t3319028937 )L_3;
		Vector4U5BU5D_t934056436* L_4 = ___keys0;
		int32_t L_5 = ___i2;
		Vector4U5BU5D_t934056436* L_6 = ___keys0;
		int32_t L_7 = ___j3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vector4_t3319028937  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vector4_t3319028937 )L_9);
		Vector4U5BU5D_t934056436* L_10 = ___keys0;
		int32_t L_11 = ___j3;
		Vector4_t3319028937  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Vector4_t3319028937 )L_12);
		Vector4U5BU5D_t934056436* L_13 = ___items1;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		Vector4U5BU5D_t934056436* L_14 = ___items1;
		int32_t L_15 = ___i2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Vector4_t3319028937  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = (Vector4_t3319028937 )L_17;
		Vector4U5BU5D_t934056436* L_18 = ___items1;
		int32_t L_19 = ___i2;
		Vector4U5BU5D_t934056436* L_20 = ___items1;
		int32_t L_21 = ___j3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Vector4_t3319028937  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Vector4_t3319028937 )L_23);
		Vector4U5BU5D_t934056436* L_24 = ___items1;
		int32_t L_25 = ___j3;
		Vector4_t3319028937  L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Vector4_t3319028937 )L_26);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Array::swap<UnityEngine.Vector4>(T[],System.Int32,System.Int32)
extern "C"  void Array_swap_TisVector4_t3319028937_m1435064612_gshared (RuntimeObject * __this /* static, unused */, Vector4U5BU5D_t934056436* ___array0, int32_t ___i1, int32_t ___j2, const RuntimeMethod* method)
{
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector4U5BU5D_t934056436* L_0 = ___array0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vector4_t3319028937  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (Vector4_t3319028937 )L_3;
		Vector4U5BU5D_t934056436* L_4 = ___array0;
		int32_t L_5 = ___i1;
		Vector4U5BU5D_t934056436* L_6 = ___array0;
		int32_t L_7 = ___j2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vector4_t3319028937  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vector4_t3319028937 )L_9);
		Vector4U5BU5D_t934056436* L_10 = ___array0;
		int32_t L_11 = ___j2;
		Vector4_t3319028937  L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Vector4_t3319028937 )L_12);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t3123975638_TisDictionaryEntry_t3123975638_m1126292988_gshared (Dictionary_2_t1968819495 * __this, DictionaryEntryU5BU5D_t4217117203* ___array0, int32_t ___index1, Transform_1_t2448278169 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		DictionaryEntryU5BU5D_t4217117203* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t2448278169 * L_6 = ___transform2;
		Int32U5BU5D_t385246372* L_7 = (Int32U5BU5D_t385246372*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t2448278169 *)L_6);
		DictionaryEntry_t3123975638  L_15 = ((  DictionaryEntry_t3123975638  (*) (Transform_1_t2448278169 *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t2448278169 *)L_6, (int32_t)L_10, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		DictionaryEntry_t3123975638  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (DictionaryEntry_t3123975638 )((*(DictionaryEntry_t3123975638 *)((DictionaryEntry_t3123975638 *)UnBox(L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t71524366_TisKeyValuePair_2_t71524366_m3786648427_gshared (Dictionary_2_t1968819495 * __this, KeyValuePair_2U5BU5D_t2652375035* ___array0, int32_t ___index1, Transform_1_t3690794193 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2652375035* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t3690794193 * L_6 = ___transform2;
		Int32U5BU5D_t385246372* L_7 = (Int32U5BU5D_t385246372*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t3690794193 *)L_6);
		KeyValuePair_2_t71524366  L_15 = ((  KeyValuePair_2_t71524366  (*) (Transform_1_t3690794193 *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t3690794193 *)L_6, (int32_t)L_10, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		KeyValuePair_2_t71524366  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (KeyValuePair_2_t71524366 )((*(KeyValuePair_2_t71524366 *)((KeyValuePair_2_t71524366 *)UnBox(L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t71524366_TisRuntimeObject_m2292807765_gshared (Dictionary_2_t1968819495 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___index1, Transform_1_t3690794193 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t3690794193 * L_6 = ___transform2;
		Int32U5BU5D_t385246372* L_7 = (Int32U5BU5D_t385246372*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t3690794193 *)L_6);
		KeyValuePair_2_t71524366  L_15 = ((  KeyValuePair_2_t71524366  (*) (Transform_1_t3690794193 *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t3690794193 *)L_6, (int32_t)L_10, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		KeyValuePair_2_t71524366  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Object,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisRuntimeObject_TisRuntimeObject_m2344529027_gshared (Dictionary_2_t1968819495 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___index1, Transform_1_t2404408695 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t2404408695 * L_6 = ___transform2;
		Int32U5BU5D_t385246372* L_7 = (Int32U5BU5D_t385246372*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t2404408695 *)L_6);
		RuntimeObject * L_15 = ((  RuntimeObject * (*) (Transform_1_t2404408695 *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t2404408695 *)L_6, (int32_t)L_10, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t71524366_m795489160_gshared (Dictionary_2_t1968819495 * __this, RuntimeArray * ___array0, int32_t ___index1, Transform_1_t3690794193 * ___transform2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t71524366_m795489160_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, (Type_t *)L_3);
		V_1 = (Type_t *)L_4;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_5 = V_0;
			NullCheck((Type_t *)L_5);
			bool L_6 = Type_get_IsPrimitive_m1114712797((Type_t *)L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_002d;
			}
		}

IL_0022:
		{
			Type_t * L_7 = V_1;
			NullCheck((Type_t *)L_7);
			bool L_8 = Type_get_IsPrimitive_m1114712797((Type_t *)L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			Type_t * L_9 = V_1;
			Type_t * L_10 = V_0;
			NullCheck((Type_t *)L_9);
			bool L_11 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_9, (Type_t *)L_10);
			if (L_11)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m213470898(L_12, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12,Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t71524366_m795489160_RuntimeMethod_var);
		}

IL_003f:
		{
			RuntimeArray * L_13 = ___array0;
			int32_t L_14 = ___index1;
			Transform_1_t3690794193 * L_15 = ___transform2;
			NullCheck((Dictionary_2_t1968819495 *)__this);
			((  void (*) (Dictionary_2_t1968819495 *, ObjectU5BU5D_t2843939325*, int32_t, Transform_1_t3690794193 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t1968819495 *)__this, (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_13, ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var)), (int32_t)L_14, (Transform_1_t3690794193 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_0069;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0052;
		throw e;
	}

CATCH_0052:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			Exception_t * L_16 = V_2;
			ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3761792013(L_17, (String_t*)_stringLiteral1492106003, (String_t*)_stringLiteral4007973390, (Exception_t *)L_16, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17,Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t71524366_m795489160_RuntimeMethod_var);
		}

IL_0064:
		{
			goto IL_0069;
		}
	} // end catch (depth: 1)

IL_0069:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m3233307772_gshared (Dictionary_2_t1968819495 * __this, RuntimeArray * ___array0, int32_t ___index1, Transform_1_t2404408695 * ___transform2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m3233307772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, (Type_t *)L_3);
		V_1 = (Type_t *)L_4;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_5 = V_0;
			NullCheck((Type_t *)L_5);
			bool L_6 = Type_get_IsPrimitive_m1114712797((Type_t *)L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_002d;
			}
		}

IL_0022:
		{
			Type_t * L_7 = V_1;
			NullCheck((Type_t *)L_7);
			bool L_8 = Type_get_IsPrimitive_m1114712797((Type_t *)L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			Type_t * L_9 = V_1;
			Type_t * L_10 = V_0;
			NullCheck((Type_t *)L_9);
			bool L_11 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_9, (Type_t *)L_10);
			if (L_11)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m213470898(L_12, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12,Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m3233307772_RuntimeMethod_var);
		}

IL_003f:
		{
			RuntimeArray * L_13 = ___array0;
			int32_t L_14 = ___index1;
			Transform_1_t2404408695 * L_15 = ___transform2;
			NullCheck((Dictionary_2_t1968819495 *)__this);
			((  void (*) (Dictionary_2_t1968819495 *, ObjectU5BU5D_t2843939325*, int32_t, Transform_1_t2404408695 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t1968819495 *)__this, (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_13, ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var)), (int32_t)L_14, (Transform_1_t2404408695 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_0069;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0052;
		throw e;
	}

CATCH_0052:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			Exception_t * L_16 = V_2;
			ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3761792013(L_17, (String_t*)_stringLiteral1492106003, (String_t*)_stringLiteral4007973390, (Exception_t *)L_16, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17,Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m3233307772_RuntimeMethod_var);
		}

IL_0064:
		{
			goto IL_0069;
		}
	} // end catch (depth: 1)

IL_0069:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t3123975638_TisDictionaryEntry_t3123975638_m3342175092_gshared (Dictionary_2_t1301971883 * __this, DictionaryEntryU5BU5D_t4217117203* ___array0, int32_t ___index1, Transform_1_t833711493 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		DictionaryEntryU5BU5D_t4217117203* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t833711493 * L_6 = ___transform2;
		IntPtrU5BU5D_t4013366056* L_7 = (IntPtrU5BU5D_t4013366056*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		intptr_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t833711493 *)L_6);
		DictionaryEntry_t3123975638  L_15 = ((  DictionaryEntry_t3123975638  (*) (Transform_1_t833711493 *, intptr_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t833711493 *)L_6, (intptr_t)L_10, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		DictionaryEntry_t3123975638  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (DictionaryEntry_t3123975638 )((*(DictionaryEntry_t3123975638 *)((DictionaryEntry_t3123975638 *)UnBox(L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>,System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3699644050_TisKeyValuePair_2_t3699644050_m3191587108_gshared (Dictionary_2_t1301971883 * __this, KeyValuePair_2U5BU5D_t1037808359* ___array0, int32_t ___index1, Transform_1_t1409379905 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		KeyValuePair_2U5BU5D_t1037808359* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t1409379905 * L_6 = ___transform2;
		IntPtrU5BU5D_t4013366056* L_7 = (IntPtrU5BU5D_t4013366056*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		intptr_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t1409379905 *)L_6);
		KeyValuePair_2_t3699644050  L_15 = ((  KeyValuePair_2_t3699644050  (*) (Transform_1_t1409379905 *, intptr_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t1409379905 *)L_6, (intptr_t)L_10, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		KeyValuePair_2_t3699644050  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (KeyValuePair_2_t3699644050 )((*(KeyValuePair_2_t3699644050 *)((KeyValuePair_2_t3699644050 *)UnBox(L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3699644050_TisRuntimeObject_m2224738096_gshared (Dictionary_2_t1301971883 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___index1, Transform_1_t1409379905 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t1409379905 * L_6 = ___transform2;
		IntPtrU5BU5D_t4013366056* L_7 = (IntPtrU5BU5D_t4013366056*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		intptr_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t1409379905 *)L_6);
		KeyValuePair_2_t3699644050  L_15 = ((  KeyValuePair_2_t3699644050  (*) (Transform_1_t1409379905 *, intptr_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t1409379905 *)L_6, (intptr_t)L_10, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		KeyValuePair_2_t3699644050  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Do_CopyTo<System.Object,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisRuntimeObject_TisRuntimeObject_m4057022474_gshared (Dictionary_2_t1301971883 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___index1, Transform_1_t789842019 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t789842019 * L_6 = ___transform2;
		IntPtrU5BU5D_t4013366056* L_7 = (IntPtrU5BU5D_t4013366056*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		intptr_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t789842019 *)L_6);
		RuntimeObject * L_15 = ((  RuntimeObject * (*) (Transform_1_t789842019 *, intptr_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t789842019 *)L_6, (intptr_t)L_10, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3699644050_m4159638770_gshared (Dictionary_2_t1301971883 * __this, RuntimeArray * ___array0, int32_t ___index1, Transform_1_t1409379905 * ___transform2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3699644050_m4159638770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, (Type_t *)L_3);
		V_1 = (Type_t *)L_4;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_5 = V_0;
			NullCheck((Type_t *)L_5);
			bool L_6 = Type_get_IsPrimitive_m1114712797((Type_t *)L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_002d;
			}
		}

IL_0022:
		{
			Type_t * L_7 = V_1;
			NullCheck((Type_t *)L_7);
			bool L_8 = Type_get_IsPrimitive_m1114712797((Type_t *)L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			Type_t * L_9 = V_1;
			Type_t * L_10 = V_0;
			NullCheck((Type_t *)L_9);
			bool L_11 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_9, (Type_t *)L_10);
			if (L_11)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m213470898(L_12, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12,Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3699644050_m4159638770_RuntimeMethod_var);
		}

IL_003f:
		{
			RuntimeArray * L_13 = ___array0;
			int32_t L_14 = ___index1;
			Transform_1_t1409379905 * L_15 = ___transform2;
			NullCheck((Dictionary_2_t1301971883 *)__this);
			((  void (*) (Dictionary_2_t1301971883 *, ObjectU5BU5D_t2843939325*, int32_t, Transform_1_t1409379905 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t1301971883 *)__this, (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_13, ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var)), (int32_t)L_14, (Transform_1_t1409379905 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_0069;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0052;
		throw e;
	}

CATCH_0052:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			Exception_t * L_16 = V_2;
			ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3761792013(L_17, (String_t*)_stringLiteral1492106003, (String_t*)_stringLiteral4007973390, (Exception_t *)L_16, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17,Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3699644050_m4159638770_RuntimeMethod_var);
		}

IL_0064:
		{
			goto IL_0069;
		}
	} // end catch (depth: 1)

IL_0069:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m1855083806_gshared (Dictionary_2_t1301971883 * __this, RuntimeArray * ___array0, int32_t ___index1, Transform_1_t789842019 * ___transform2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m1855083806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, (Type_t *)L_3);
		V_1 = (Type_t *)L_4;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_5 = V_0;
			NullCheck((Type_t *)L_5);
			bool L_6 = Type_get_IsPrimitive_m1114712797((Type_t *)L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_002d;
			}
		}

IL_0022:
		{
			Type_t * L_7 = V_1;
			NullCheck((Type_t *)L_7);
			bool L_8 = Type_get_IsPrimitive_m1114712797((Type_t *)L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			Type_t * L_9 = V_1;
			Type_t * L_10 = V_0;
			NullCheck((Type_t *)L_9);
			bool L_11 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_9, (Type_t *)L_10);
			if (L_11)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m213470898(L_12, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12,Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m1855083806_RuntimeMethod_var);
		}

IL_003f:
		{
			RuntimeArray * L_13 = ___array0;
			int32_t L_14 = ___index1;
			Transform_1_t789842019 * L_15 = ___transform2;
			NullCheck((Dictionary_2_t1301971883 *)__this);
			((  void (*) (Dictionary_2_t1301971883 *, ObjectU5BU5D_t2843939325*, int32_t, Transform_1_t789842019 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t1301971883 *)__this, (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_13, ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var)), (int32_t)L_14, (Transform_1_t789842019 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_0069;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0052;
		throw e;
	}

CATCH_0052:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			Exception_t * L_16 = V_2;
			ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3761792013(L_17, (String_t*)_stringLiteral1492106003, (String_t*)_stringLiteral4007973390, (Exception_t *)L_16, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17,Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m1855083806_RuntimeMethod_var);
		}

IL_0064:
		{
			goto IL_0069;
		}
	} // end catch (depth: 1)

IL_0069:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Do_CopyTo<System.Boolean,System.Boolean>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisBoolean_t97287965_TisBoolean_t97287965_m1437308888_gshared (Dictionary_2_t1444694249 * __this, BooleanU5BU5D_t2897418192* ___array0, int32_t ___index1, Transform_1_t1235930838 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		BooleanU5BU5D_t2897418192* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t1235930838 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		BooleanU5BU5D_t2897418192* L_11 = (BooleanU5BU5D_t2897418192*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		bool L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t1235930838 *)L_6);
		bool L_15 = ((  bool (*) (Transform_1_t1235930838 *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t1235930838 *)L_6, (RuntimeObject *)L_10, (bool)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (bool)((*(bool*)((bool*)UnBox(L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Do_CopyTo<System.Boolean,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisBoolean_t97287965_TisRuntimeObject_m2553524024_gshared (Dictionary_2_t1444694249 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___index1, Transform_1_t1235930838 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t1235930838 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		BooleanU5BU5D_t2897418192* L_11 = (BooleanU5BU5D_t2897418192*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		bool L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t1235930838 *)L_6);
		bool L_15 = ((  bool (*) (Transform_1_t1235930838 *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t1235930838 *)L_6, (RuntimeObject *)L_10, (bool)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t3123975638_TisDictionaryEntry_t3123975638_m3122235210_gshared (Dictionary_2_t1444694249 * __this, DictionaryEntryU5BU5D_t4217117203* ___array0, int32_t ___index1, Transform_1_t4262618511 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		DictionaryEntryU5BU5D_t4217117203* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t4262618511 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		BooleanU5BU5D_t2897418192* L_11 = (BooleanU5BU5D_t2897418192*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		bool L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t4262618511 *)L_6);
		DictionaryEntry_t3123975638  L_15 = ((  DictionaryEntry_t3123975638  (*) (Transform_1_t4262618511 *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t4262618511 *)L_6, (RuntimeObject *)L_10, (bool)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		DictionaryEntry_t3123975638  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (DictionaryEntry_t3123975638 )((*(DictionaryEntry_t3123975638 *)((DictionaryEntry_t3123975638 *)UnBox(L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3842366416_TisKeyValuePair_2_t3842366416_m2795443209_gshared (Dictionary_2_t1444694249 * __this, KeyValuePair_2U5BU5D_t171748081* ___array0, int32_t ___index1, Transform_1_t686041993 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		KeyValuePair_2U5BU5D_t171748081* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t686041993 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		BooleanU5BU5D_t2897418192* L_11 = (BooleanU5BU5D_t2897418192*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		bool L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t686041993 *)L_6);
		KeyValuePair_2_t3842366416  L_15 = ((  KeyValuePair_2_t3842366416  (*) (Transform_1_t686041993 *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t686041993 *)L_6, (RuntimeObject *)L_10, (bool)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		KeyValuePair_2_t3842366416  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (KeyValuePair_2_t3842366416 )((*(KeyValuePair_2_t3842366416 *)((KeyValuePair_2_t3842366416 *)UnBox(L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3842366416_TisRuntimeObject_m1564656153_gshared (Dictionary_2_t1444694249 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___index1, Transform_1_t686041993 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t686041993 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		BooleanU5BU5D_t2897418192* L_11 = (BooleanU5BU5D_t2897418192*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		bool L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t686041993 *)L_6);
		KeyValuePair_2_t3842366416  L_15 = ((  KeyValuePair_2_t3842366416  (*) (Transform_1_t686041993 *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t686041993 *)L_6, (RuntimeObject *)L_10, (bool)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		KeyValuePair_2_t3842366416  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Do_ICollectionCopyTo<System.Boolean>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_ICollectionCopyTo_TisBoolean_t97287965_m3600337818_gshared (Dictionary_2_t1444694249 * __this, RuntimeArray * ___array0, int32_t ___index1, Transform_1_t1235930838 * ___transform2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dictionary_2_Do_ICollectionCopyTo_TisBoolean_t97287965_m3600337818_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, (Type_t *)L_3);
		V_1 = (Type_t *)L_4;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_5 = V_0;
			NullCheck((Type_t *)L_5);
			bool L_6 = Type_get_IsPrimitive_m1114712797((Type_t *)L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_002d;
			}
		}

IL_0022:
		{
			Type_t * L_7 = V_1;
			NullCheck((Type_t *)L_7);
			bool L_8 = Type_get_IsPrimitive_m1114712797((Type_t *)L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			Type_t * L_9 = V_1;
			Type_t * L_10 = V_0;
			NullCheck((Type_t *)L_9);
			bool L_11 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_9, (Type_t *)L_10);
			if (L_11)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m213470898(L_12, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12,Dictionary_2_Do_ICollectionCopyTo_TisBoolean_t97287965_m3600337818_RuntimeMethod_var);
		}

IL_003f:
		{
			RuntimeArray * L_13 = ___array0;
			int32_t L_14 = ___index1;
			Transform_1_t1235930838 * L_15 = ___transform2;
			NullCheck((Dictionary_2_t1444694249 *)__this);
			((  void (*) (Dictionary_2_t1444694249 *, ObjectU5BU5D_t2843939325*, int32_t, Transform_1_t1235930838 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t1444694249 *)__this, (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_13, ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var)), (int32_t)L_14, (Transform_1_t1235930838 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_0069;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0052;
		throw e;
	}

CATCH_0052:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			Exception_t * L_16 = V_2;
			ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3761792013(L_17, (String_t*)_stringLiteral1492106003, (String_t*)_stringLiteral4007973390, (Exception_t *)L_16, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17,Dictionary_2_Do_ICollectionCopyTo_TisBoolean_t97287965_m3600337818_RuntimeMethod_var);
		}

IL_0064:
		{
			goto IL_0069;
		}
	} // end catch (depth: 1)

IL_0069:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3842366416_m1399105608_gshared (Dictionary_2_t1444694249 * __this, RuntimeArray * ___array0, int32_t ___index1, Transform_1_t686041993 * ___transform2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3842366416_m1399105608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, (Type_t *)L_3);
		V_1 = (Type_t *)L_4;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_5 = V_0;
			NullCheck((Type_t *)L_5);
			bool L_6 = Type_get_IsPrimitive_m1114712797((Type_t *)L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_002d;
			}
		}

IL_0022:
		{
			Type_t * L_7 = V_1;
			NullCheck((Type_t *)L_7);
			bool L_8 = Type_get_IsPrimitive_m1114712797((Type_t *)L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			Type_t * L_9 = V_1;
			Type_t * L_10 = V_0;
			NullCheck((Type_t *)L_9);
			bool L_11 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_9, (Type_t *)L_10);
			if (L_11)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m213470898(L_12, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12,Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3842366416_m1399105608_RuntimeMethod_var);
		}

IL_003f:
		{
			RuntimeArray * L_13 = ___array0;
			int32_t L_14 = ___index1;
			Transform_1_t686041993 * L_15 = ___transform2;
			NullCheck((Dictionary_2_t1444694249 *)__this);
			((  void (*) (Dictionary_2_t1444694249 *, ObjectU5BU5D_t2843939325*, int32_t, Transform_1_t686041993 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t1444694249 *)__this, (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_13, ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var)), (int32_t)L_14, (Transform_1_t686041993 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_0069;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0052;
		throw e;
	}

CATCH_0052:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			Exception_t * L_16 = V_2;
			ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3761792013(L_17, (String_t*)_stringLiteral1492106003, (String_t*)_stringLiteral4007973390, (Exception_t *)L_16, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17,Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3842366416_m1399105608_RuntimeMethod_var);
		}

IL_0064:
		{
			goto IL_0069;
		}
	} // end catch (depth: 1)

IL_0069:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t3123975638_TisDictionaryEntry_t3123975638_m3300127835_gshared (Dictionary_2_t3384741 * __this, DictionaryEntryU5BU5D_t4217117203* ___array0, int32_t ___index1, Transform_1_t1750446691 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		DictionaryEntryU5BU5D_t4217117203* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t1750446691 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Int32U5BU5D_t385246372* L_11 = (Int32U5BU5D_t385246372*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t1750446691 *)L_6);
		DictionaryEntry_t3123975638  L_15 = ((  DictionaryEntry_t3123975638  (*) (Transform_1_t1750446691 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t1750446691 *)L_6, (RuntimeObject *)L_10, (int32_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		DictionaryEntry_t3123975638  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (DictionaryEntry_t3123975638 )((*(DictionaryEntry_t3123975638 *)((DictionaryEntry_t3123975638 *)UnBox(L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2401056908_TisKeyValuePair_2_t2401056908_m676905794_gshared (Dictionary_2_t3384741 * __this, KeyValuePair_2U5BU5D_t1954543557* ___array0, int32_t ___index1, Transform_1_t1027527961 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		KeyValuePair_2U5BU5D_t1954543557* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t1027527961 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Int32U5BU5D_t385246372* L_11 = (Int32U5BU5D_t385246372*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t1027527961 *)L_6);
		KeyValuePair_2_t2401056908  L_15 = ((  KeyValuePair_2_t2401056908  (*) (Transform_1_t1027527961 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t1027527961 *)L_6, (RuntimeObject *)L_10, (int32_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		KeyValuePair_2_t2401056908  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (KeyValuePair_2_t2401056908 )((*(KeyValuePair_2_t2401056908 *)((KeyValuePair_2_t2401056908 *)UnBox(L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2401056908_TisRuntimeObject_m4084399341_gshared (Dictionary_2_t3384741 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___index1, Transform_1_t1027527961 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t1027527961 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Int32U5BU5D_t385246372* L_11 = (Int32U5BU5D_t385246372*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t1027527961 *)L_6);
		KeyValuePair_2_t2401056908  L_15 = ((  KeyValuePair_2_t2401056908  (*) (Transform_1_t1027527961 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t1027527961 *)L_6, (RuntimeObject *)L_10, (int32_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		KeyValuePair_2_t2401056908  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisInt32_t2950945753_TisInt32_t2950945753_m3384108308_gshared (Dictionary_2_t3384741 * __this, Int32U5BU5D_t385246372* ___array0, int32_t ___index1, Transform_1_t1577416806 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		Int32U5BU5D_t385246372* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t1577416806 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Int32U5BU5D_t385246372* L_11 = (Int32U5BU5D_t385246372*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t1577416806 *)L_6);
		int32_t L_15 = ((  int32_t (*) (Transform_1_t1577416806 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t1577416806 *)L_6, (RuntimeObject *)L_10, (int32_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)((*(int32_t*)((int32_t*)UnBox(L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Int32,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisInt32_t2950945753_TisRuntimeObject_m3783191429_gshared (Dictionary_2_t3384741 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___index1, Transform_1_t1577416806 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t1577416806 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Int32U5BU5D_t385246372* L_11 = (Int32U5BU5D_t385246372*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t1577416806 *)L_6);
		int32_t L_15 = ((  int32_t (*) (Transform_1_t1577416806 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t1577416806 *)L_6, (RuntimeObject *)L_10, (int32_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2401056908_m1169495264_gshared (Dictionary_2_t3384741 * __this, RuntimeArray * ___array0, int32_t ___index1, Transform_1_t1027527961 * ___transform2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2401056908_m1169495264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, (Type_t *)L_3);
		V_1 = (Type_t *)L_4;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_5 = V_0;
			NullCheck((Type_t *)L_5);
			bool L_6 = Type_get_IsPrimitive_m1114712797((Type_t *)L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_002d;
			}
		}

IL_0022:
		{
			Type_t * L_7 = V_1;
			NullCheck((Type_t *)L_7);
			bool L_8 = Type_get_IsPrimitive_m1114712797((Type_t *)L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			Type_t * L_9 = V_1;
			Type_t * L_10 = V_0;
			NullCheck((Type_t *)L_9);
			bool L_11 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_9, (Type_t *)L_10);
			if (L_11)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m213470898(L_12, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12,Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2401056908_m1169495264_RuntimeMethod_var);
		}

IL_003f:
		{
			RuntimeArray * L_13 = ___array0;
			int32_t L_14 = ___index1;
			Transform_1_t1027527961 * L_15 = ___transform2;
			NullCheck((Dictionary_2_t3384741 *)__this);
			((  void (*) (Dictionary_2_t3384741 *, ObjectU5BU5D_t2843939325*, int32_t, Transform_1_t1027527961 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t3384741 *)__this, (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_13, ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var)), (int32_t)L_14, (Transform_1_t1027527961 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_0069;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0052;
		throw e;
	}

CATCH_0052:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			Exception_t * L_16 = V_2;
			ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3761792013(L_17, (String_t*)_stringLiteral1492106003, (String_t*)_stringLiteral4007973390, (Exception_t *)L_16, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17,Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2401056908_m1169495264_RuntimeMethod_var);
		}

IL_0064:
		{
			goto IL_0069;
		}
	} // end catch (depth: 1)

IL_0069:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t2950945753_m1134171305_gshared (Dictionary_2_t3384741 * __this, RuntimeArray * ___array0, int32_t ___index1, Transform_1_t1577416806 * ___transform2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dictionary_2_Do_ICollectionCopyTo_TisInt32_t2950945753_m1134171305_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, (Type_t *)L_3);
		V_1 = (Type_t *)L_4;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_5 = V_0;
			NullCheck((Type_t *)L_5);
			bool L_6 = Type_get_IsPrimitive_m1114712797((Type_t *)L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_002d;
			}
		}

IL_0022:
		{
			Type_t * L_7 = V_1;
			NullCheck((Type_t *)L_7);
			bool L_8 = Type_get_IsPrimitive_m1114712797((Type_t *)L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			Type_t * L_9 = V_1;
			Type_t * L_10 = V_0;
			NullCheck((Type_t *)L_9);
			bool L_11 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_9, (Type_t *)L_10);
			if (L_11)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m213470898(L_12, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12,Dictionary_2_Do_ICollectionCopyTo_TisInt32_t2950945753_m1134171305_RuntimeMethod_var);
		}

IL_003f:
		{
			RuntimeArray * L_13 = ___array0;
			int32_t L_14 = ___index1;
			Transform_1_t1577416806 * L_15 = ___transform2;
			NullCheck((Dictionary_2_t3384741 *)__this);
			((  void (*) (Dictionary_2_t3384741 *, ObjectU5BU5D_t2843939325*, int32_t, Transform_1_t1577416806 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t3384741 *)__this, (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_13, ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var)), (int32_t)L_14, (Transform_1_t1577416806 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_0069;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0052;
		throw e;
	}

CATCH_0052:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			Exception_t * L_16 = V_2;
			ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3761792013(L_17, (String_t*)_stringLiteral1492106003, (String_t*)_stringLiteral4007973390, (Exception_t *)L_16, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17,Dictionary_2_Do_ICollectionCopyTo_TisInt32_t2950945753_m1134171305_RuntimeMethod_var);
		}

IL_0064:
		{
			goto IL_0069;
		}
	} // end catch (depth: 1)

IL_0069:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t3123975638_TisDictionaryEntry_t3123975638_m3864993650_gshared (Dictionary_2_t132545152 * __this, DictionaryEntryU5BU5D_t4217117203* ___array0, int32_t ___index1, Transform_1_t4209139644 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		DictionaryEntryU5BU5D_t4217117203* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t4209139644 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t4209139644 *)L_6);
		DictionaryEntry_t3123975638  L_15 = ((  DictionaryEntry_t3123975638  (*) (Transform_1_t4209139644 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t4209139644 *)L_6, (RuntimeObject *)L_10, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		DictionaryEntry_t3123975638  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (DictionaryEntry_t3123975638 )((*(DictionaryEntry_t3123975638 *)((DictionaryEntry_t3123975638 *)UnBox(L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2530217319_TisKeyValuePair_2_t2530217319_m985448706_gshared (Dictionary_2_t132545152 * __this, KeyValuePair_2U5BU5D_t118269214* ___array0, int32_t ___index1, Transform_1_t3615381325 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		KeyValuePair_2U5BU5D_t118269214* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t3615381325 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t3615381325 *)L_6);
		KeyValuePair_2_t2530217319  L_15 = ((  KeyValuePair_2_t2530217319  (*) (Transform_1_t3615381325 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t3615381325 *)L_6, (RuntimeObject *)L_10, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		KeyValuePair_2_t2530217319  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (KeyValuePair_2_t2530217319 )((*(KeyValuePair_2_t2530217319 *)((KeyValuePair_2_t2530217319 *)UnBox(L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2530217319_TisRuntimeObject_m311023789_gshared (Dictionary_2_t132545152 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___index1, Transform_1_t3615381325 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t3615381325 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t3615381325 *)L_6);
		KeyValuePair_2_t2530217319  L_15 = ((  KeyValuePair_2_t2530217319  (*) (Transform_1_t3615381325 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t3615381325 *)L_6, (RuntimeObject *)L_10, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		KeyValuePair_2_t2530217319  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_CopyTo_TisRuntimeObject_TisRuntimeObject_m976542334_gshared (Dictionary_2_t132545152 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___index1, Transform_1_t4165270170 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t4165270170 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t4165270170 *)L_6);
		RuntimeObject * L_15 = ((  RuntimeObject * (*) (Transform_1_t4165270170 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t4165270170 *)L_6, (RuntimeObject *)L_10, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2530217319_m1439704807_gshared (Dictionary_2_t132545152 * __this, RuntimeArray * ___array0, int32_t ___index1, Transform_1_t3615381325 * ___transform2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2530217319_m1439704807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, (Type_t *)L_3);
		V_1 = (Type_t *)L_4;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_5 = V_0;
			NullCheck((Type_t *)L_5);
			bool L_6 = Type_get_IsPrimitive_m1114712797((Type_t *)L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_002d;
			}
		}

IL_0022:
		{
			Type_t * L_7 = V_1;
			NullCheck((Type_t *)L_7);
			bool L_8 = Type_get_IsPrimitive_m1114712797((Type_t *)L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			Type_t * L_9 = V_1;
			Type_t * L_10 = V_0;
			NullCheck((Type_t *)L_9);
			bool L_11 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_9, (Type_t *)L_10);
			if (L_11)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m213470898(L_12, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12,Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2530217319_m1439704807_RuntimeMethod_var);
		}

IL_003f:
		{
			RuntimeArray * L_13 = ___array0;
			int32_t L_14 = ___index1;
			Transform_1_t3615381325 * L_15 = ___transform2;
			NullCheck((Dictionary_2_t132545152 *)__this);
			((  void (*) (Dictionary_2_t132545152 *, ObjectU5BU5D_t2843939325*, int32_t, Transform_1_t3615381325 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t132545152 *)__this, (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_13, ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var)), (int32_t)L_14, (Transform_1_t3615381325 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_0069;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0052;
		throw e;
	}

CATCH_0052:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			Exception_t * L_16 = V_2;
			ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3761792013(L_17, (String_t*)_stringLiteral1492106003, (String_t*)_stringLiteral4007973390, (Exception_t *)L_16, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17,Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2530217319_m1439704807_RuntimeMethod_var);
		}

IL_0064:
		{
			goto IL_0069;
		}
	} // end catch (depth: 1)

IL_0069:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C"  void Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m3942192587_gshared (Dictionary_2_t132545152 * __this, RuntimeArray * ___array0, int32_t ___index1, Transform_1_t4165270170 * ___transform2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m3942192587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, (Type_t *)L_3);
		V_1 = (Type_t *)L_4;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_5 = V_0;
			NullCheck((Type_t *)L_5);
			bool L_6 = Type_get_IsPrimitive_m1114712797((Type_t *)L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_002d;
			}
		}

IL_0022:
		{
			Type_t * L_7 = V_1;
			NullCheck((Type_t *)L_7);
			bool L_8 = Type_get_IsPrimitive_m1114712797((Type_t *)L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			Type_t * L_9 = V_1;
			Type_t * L_10 = V_0;
			NullCheck((Type_t *)L_9);
			bool L_11 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_9, (Type_t *)L_10);
			if (L_11)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m213470898(L_12, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12,Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m3942192587_RuntimeMethod_var);
		}

IL_003f:
		{
			RuntimeArray * L_13 = ___array0;
			int32_t L_14 = ___index1;
			Transform_1_t4165270170 * L_15 = ___transform2;
			NullCheck((Dictionary_2_t132545152 *)__this);
			((  void (*) (Dictionary_2_t132545152 *, ObjectU5BU5D_t2843939325*, int32_t, Transform_1_t4165270170 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t132545152 *)__this, (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_13, ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var)), (int32_t)L_14, (Transform_1_t4165270170 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_0069;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0052;
		throw e;
	}

CATCH_0052:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			Exception_t * L_16 = V_2;
			ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3761792013(L_17, (String_t*)_stringLiteral1492106003, (String_t*)_stringLiteral4007973390, (Exception_t *)L_16, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17,Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m3942192587_RuntimeMethod_var);
		}

IL_0064:
		{
			goto IL_0069;
		}
	} // end catch (depth: 1)

IL_0069:
	{
		return;
	}
}
// System.Void UnityEngine.Component::GetComponents<System.Object>(System.Collections.Generic.List`1<T>)
extern "C"  void Component_GetComponents_TisRuntimeObject_m2416546752_gshared (Component_t1923634451 * __this, List_1_t257213610 * ___results0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Component_GetComponents_TisRuntimeObject_m2416546752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		List_1_t257213610 * L_2 = ___results0;
		NullCheck((Component_t1923634451 *)__this);
		Component_GetComponentsForListInternal_m1419905927((Component_t1923634451 *)__this, (Type_t *)L_1, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean,System.Collections.Generic.List`1<T>)
extern "C"  void Component_GetComponentsInChildren_TisRuntimeObject_m674916799_gshared (Component_t1923634451 * __this, bool ___includeInactive0, List_1_t257213610 * ___result1, const RuntimeMethod* method)
{
	{
		NullCheck((Component_t1923634451 *)__this);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142((Component_t1923634451 *)__this, /*hidden argument*/NULL);
		bool L_1 = ___includeInactive0;
		List_1_t257213610 * L_2 = ___result1;
		NullCheck((GameObject_t1113636619 *)L_0);
		((  void (*) (GameObject_t1113636619 *, bool, List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t1113636619 *)L_0, (bool)L_1, (List_1_t257213610 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Collections.Generic.List`1<T>)
extern "C"  void Component_GetComponentsInChildren_TisRuntimeObject_m35549932_gshared (Component_t1923634451 * __this, List_1_t257213610 * ___results0, const RuntimeMethod* method)
{
	{
		List_1_t257213610 * L_0 = ___results0;
		NullCheck((Component_t1923634451 *)__this);
		((  void (*) (Component_t1923634451 *, bool, List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t1923634451 *)__this, (bool)0, (List_1_t257213610 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Component::GetComponentsInParent<System.Object>(System.Boolean,System.Collections.Generic.List`1<T>)
extern "C"  void Component_GetComponentsInParent_TisRuntimeObject_m3603136339_gshared (Component_t1923634451 * __this, bool ___includeInactive0, List_1_t257213610 * ___results1, const RuntimeMethod* method)
{
	{
		NullCheck((Component_t1923634451 *)__this);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142((Component_t1923634451 *)__this, /*hidden argument*/NULL);
		bool L_1 = ___includeInactive0;
		List_1_t257213610 * L_2 = ___results1;
		NullCheck((GameObject_t1113636619 *)L_0);
		((  void (*) (GameObject_t1113636619 *, bool, List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t1113636619 *)L_0, (bool)L_1, (List_1_t257213610 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Boolean>(System.Object)
extern "C"  void BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t97287965_m3019671566_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t97287965_m3019671566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___arg0;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject * L_1 = ___arg0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003e;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject * L_3 = ___arg0;
		NullCheck((RuntimeObject *)L_3);
		Type_t * L_4 = Object_GetType_m88164663((RuntimeObject *)L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)L_2;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		String_t* L_8 = UnityString_Format_m261690510(NULL /*static, unused*/, (String_t*)_stringLiteral273595399, (ObjectU5BU5D_t2843939325*)L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_9, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9,BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t97287965_m3019671566_RuntimeMethod_var);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
extern "C"  void BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t2950945753_m635860201_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t2950945753_m635860201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___arg0;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject * L_1 = ___arg0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003e;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject * L_3 = ___arg0;
		NullCheck((RuntimeObject *)L_3);
		Type_t * L_4 = Object_GetType_m88164663((RuntimeObject *)L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)L_2;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		String_t* L_8 = UnityString_Format_m261690510(NULL /*static, unused*/, (String_t*)_stringLiteral273595399, (ObjectU5BU5D_t2843939325*)L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_9, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9,BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t2950945753_m635860201_RuntimeMethod_var);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
extern "C"  void BaseInvokableCall_ThrowOnInvalidArg_TisRuntimeObject_m2266633109_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseInvokableCall_ThrowOnInvalidArg_TisRuntimeObject_m2266633109_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___arg0;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject * L_1 = ___arg0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003e;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject * L_3 = ___arg0;
		NullCheck((RuntimeObject *)L_3);
		Type_t * L_4 = Object_GetType_m88164663((RuntimeObject *)L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)L_2;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		String_t* L_8 = UnityString_Format_m261690510(NULL /*static, unused*/, (String_t*)_stringLiteral273595399, (ObjectU5BU5D_t2843939325*)L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_9, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9,BaseInvokableCall_ThrowOnInvalidArg_TisRuntimeObject_m2266633109_RuntimeMethod_var);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Single>(System.Object)
extern "C"  void BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t1397266774_m3110598205_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t1397266774_m3110598205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___arg0;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject * L_1 = ___arg0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003e;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject * L_3 = ___arg0;
		NullCheck((RuntimeObject *)L_3);
		Type_t * L_4 = Object_GetType_m88164663((RuntimeObject *)L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)L_2;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		String_t* L_8 = UnityString_Format_m261690510(NULL /*static, unused*/, (String_t*)_stringLiteral273595399, (ObjectU5BU5D_t2843939325*)L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_9, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9,BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t1397266774_m3110598205_RuntimeMethod_var);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Color>(System.Object)
extern "C"  void BaseInvokableCall_ThrowOnInvalidArg_TisColor_t2555686324_m2926971203_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseInvokableCall_ThrowOnInvalidArg_TisColor_t2555686324_m2926971203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___arg0;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject * L_1 = ___arg0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003e;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject * L_3 = ___arg0;
		NullCheck((RuntimeObject *)L_3);
		Type_t * L_4 = Object_GetType_m88164663((RuntimeObject *)L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)L_2;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		String_t* L_8 = UnityString_Format_m261690510(NULL /*static, unused*/, (String_t*)_stringLiteral273595399, (ObjectU5BU5D_t2843939325*)L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_9, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9,BaseInvokableCall_ThrowOnInvalidArg_TisColor_t2555686324_m2926971203_RuntimeMethod_var);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Vector2>(System.Object)
extern "C"  void BaseInvokableCall_ThrowOnInvalidArg_TisVector2_t2156229523_m2162634795_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseInvokableCall_ThrowOnInvalidArg_TisVector2_t2156229523_m2162634795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___arg0;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject * L_1 = ___arg0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003e;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject * L_3 = ___arg0;
		NullCheck((RuntimeObject *)L_3);
		Type_t * L_4 = Object_GetType_m88164663((RuntimeObject *)L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)L_2;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		String_t* L_8 = UnityString_Format_m261690510(NULL /*static, unused*/, (String_t*)_stringLiteral273595399, (ObjectU5BU5D_t2843939325*)L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_9, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9,BaseInvokableCall_ThrowOnInvalidArg_TisVector2_t2156229523_m2162634795_RuntimeMethod_var);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventList<System.Object>(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>)
extern "C"  void ExecuteEvents_GetEventList_TisRuntimeObject_m3803188029_gshared (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___go0, RuntimeObject* ___results1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventList_TisRuntimeObject_m3803188029_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3395709193 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___results1;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_1, (String_t*)_stringLiteral1261396091, (String_t*)_stringLiteral2001578372, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,ExecuteEvents_GetEventList_TisRuntimeObject_m3803188029_RuntimeMethod_var);
	}

IL_0017:
	{
		GameObject_t1113636619 * L_2 = ___go0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1113636619 * L_4 = ___go0;
		NullCheck((GameObject_t1113636619 *)L_4);
		bool L_5 = GameObject_get_activeInHierarchy_m2006396688((GameObject_t1113636619 *)L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0033;
		}
	}

IL_002e:
	{
		goto IL_0087;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t2953223642_il2cpp_TypeInfo_var);
		List_1_t3395709193 * L_6 = ListPool_1_Get_m2062177143(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m2062177143_RuntimeMethod_var);
		V_0 = (List_1_t3395709193 *)L_6;
		GameObject_t1113636619 * L_7 = ___go0;
		List_1_t3395709193 * L_8 = V_0;
		NullCheck((GameObject_t1113636619 *)L_7);
		GameObject_GetComponents_TisComponent_t1923634451_m1648148377((GameObject_t1113636619 *)L_7, (List_1_t3395709193 *)L_8, /*hidden argument*/GameObject_GetComponents_TisComponent_t1923634451_m1648148377_RuntimeMethod_var);
		V_1 = (int32_t)0;
		goto IL_0075;
	}

IL_0047:
	{
		List_1_t3395709193 * L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck((List_1_t3395709193 *)L_9);
		Component_t1923634451 * L_11 = List_1_get_Item_m3306164819((List_1_t3395709193 *)L_9, (int32_t)L_10, /*hidden argument*/List_1_get_Item_m3306164819_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		bool L_12 = ((  bool (*) (RuntimeObject * /* static, unused */, Component_t1923634451 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Component_t1923634451 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_12)
		{
			goto IL_005e;
		}
	}
	{
		goto IL_0071;
	}

IL_005e:
	{
		RuntimeObject* L_13 = ___results1;
		List_1_t3395709193 * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_t3395709193 *)L_14);
		Component_t1923634451 * L_16 = List_1_get_Item_m3306164819((List_1_t3395709193 *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_m3306164819_RuntimeMethod_var);
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>::Add(!0) */, ICollection_1_t1887868788_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_16, IEventSystemHandler_t3354683850_il2cpp_TypeInfo_var)));
	}

IL_0071:
	{
		int32_t L_17 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0075:
	{
		int32_t L_18 = V_1;
		List_1_t3395709193 * L_19 = V_0;
		NullCheck((List_1_t3395709193 *)L_19);
		int32_t L_20 = List_1_get_Count_m1294235957((List_1_t3395709193 *)L_19, /*hidden argument*/List_1_get_Count_m1294235957_RuntimeMethod_var);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0047;
		}
	}
	{
		List_1_t3395709193 * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t2953223642_il2cpp_TypeInfo_var);
		ListPool_1_Release_m3920209327(NULL /*static, unused*/, (List_1_t3395709193 *)L_21, /*hidden argument*/ListPool_1_Release_m3920209327_RuntimeMethod_var);
	}

IL_0087:
	{
		return;
	}
}
// System.Void UnityEngine.GameObject::GetComponents<System.Object>(System.Collections.Generic.List`1<T>)
extern "C"  void GameObject_GetComponents_TisRuntimeObject_m1246177135_gshared (GameObject_t1113636619 * __this, List_1_t257213610 * ___results0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponents_TisRuntimeObject_m1246177135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		List_1_t257213610 * L_2 = ___results0;
		NullCheck((GameObject_t1113636619 *)__this);
		GameObject_GetComponentsInternal_m4006738154((GameObject_t1113636619 *)__this, (Type_t *)L_1, (bool)0, (bool)0, (bool)1, (bool)0, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean,System.Collections.Generic.List`1<T>)
extern "C"  void GameObject_GetComponentsInChildren_TisRuntimeObject_m467804091_gshared (GameObject_t1113636619 * __this, bool ___includeInactive0, List_1_t257213610 * ___results1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentsInChildren_TisRuntimeObject_m467804091_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		List_1_t257213610 * L_3 = ___results1;
		NullCheck((GameObject_t1113636619 *)__this);
		GameObject_GetComponentsInternal_m4006738154((GameObject_t1113636619 *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)0, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameObject::GetComponentsInParent<System.Object>(System.Boolean,System.Collections.Generic.List`1<T>)
extern "C"  void GameObject_GetComponentsInParent_TisRuntimeObject_m947018401_gshared (GameObject_t1113636619 * __this, bool ___includeInactive0, List_1_t257213610 * ___results1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentsInParent_TisRuntimeObject_m947018401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		List_1_t257213610 * L_3 = ___results1;
		NullCheck((GameObject_t1113636619 *)__this);
		GameObject_GetComponentsInternal_m4006738154((GameObject_t1113636619 *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)1, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<System.Object>(UnityEngine.Mesh/InternalShaderChannel,System.Collections.Generic.List`1<T>)
extern "C"  void Mesh_SetListForChannel_TisRuntimeObject_m1409743534_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, List_1_t257213610 * ___values1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m576040980(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		List_1_t257213610 * L_3 = ___values1;
		RuntimeArray * L_4 = NoAllocHelpers_ExtractArrayFromList_m2239661248(NULL /*static, unused*/, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t257213610 * L_5 = ___values1;
		int32_t L_6 = ((  int32_t (*) (RuntimeObject * /* static, unused */, List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (List_1_t257213610 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_SetSizedArrayForChannel_m2565120436((Mesh_t3648964284 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<System.Object>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32,System.Collections.Generic.List`1<T>)
extern "C"  void Mesh_SetListForChannel_TisRuntimeObject_m3859265206_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, List_1_t257213610 * ___values3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___format1;
		int32_t L_2 = ___dim2;
		List_1_t257213610 * L_3 = ___values3;
		RuntimeArray * L_4 = NoAllocHelpers_ExtractArrayFromList_m2239661248(NULL /*static, unused*/, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t257213610 * L_5 = ___values3;
		int32_t L_6 = ((  int32_t (*) (RuntimeObject * /* static, unused */, List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (List_1_t257213610 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_SetSizedArrayForChannel_m2565120436((Mesh_t3648964284 *)__this, (int32_t)L_0, (int32_t)L_1, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<UnityEngine.Color32>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32,System.Collections.Generic.List`1<T>)
extern "C"  void Mesh_SetListForChannel_TisColor32_t2600501292_m1879759408_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, List_1_t4072576034 * ___values3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___format1;
		int32_t L_2 = ___dim2;
		List_1_t4072576034 * L_3 = ___values3;
		RuntimeArray * L_4 = NoAllocHelpers_ExtractArrayFromList_m2239661248(NULL /*static, unused*/, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t4072576034 * L_5 = ___values3;
		int32_t L_6 = ((  int32_t (*) (RuntimeObject * /* static, unused */, List_1_t4072576034 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (List_1_t4072576034 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_SetSizedArrayForChannel_m2565120436((Mesh_t3648964284 *)__this, (int32_t)L_0, (int32_t)L_1, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<UnityEngine.Vector2>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32,System.Collections.Generic.List`1<T>)
extern "C"  void Mesh_SetListForChannel_TisVector2_t2156229523_m2884693793_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, List_1_t3628304265 * ___values3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___format1;
		int32_t L_2 = ___dim2;
		List_1_t3628304265 * L_3 = ___values3;
		RuntimeArray * L_4 = NoAllocHelpers_ExtractArrayFromList_m2239661248(NULL /*static, unused*/, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t3628304265 * L_5 = ___values3;
		int32_t L_6 = ((  int32_t (*) (RuntimeObject * /* static, unused */, List_1_t3628304265 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (List_1_t3628304265 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_SetSizedArrayForChannel_m2565120436((Mesh_t3648964284 *)__this, (int32_t)L_0, (int32_t)L_1, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<UnityEngine.Vector3>(UnityEngine.Mesh/InternalShaderChannel,System.Collections.Generic.List`1<T>)
extern "C"  void Mesh_SetListForChannel_TisVector3_t3722313464_m2465014356_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, List_1_t899420910 * ___values1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m576040980(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		List_1_t899420910 * L_3 = ___values1;
		RuntimeArray * L_4 = NoAllocHelpers_ExtractArrayFromList_m2239661248(NULL /*static, unused*/, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t899420910 * L_5 = ___values1;
		int32_t L_6 = ((  int32_t (*) (RuntimeObject * /* static, unused */, List_1_t899420910 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (List_1_t899420910 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_SetSizedArrayForChannel_m2565120436((Mesh_t3648964284 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<UnityEngine.Vector4>(UnityEngine.Mesh/InternalShaderChannel,System.Collections.Generic.List`1<T>)
extern "C"  void Mesh_SetListForChannel_TisVector4_t3319028937_m1475644498_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, List_1_t496136383 * ___values1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m576040980(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		List_1_t496136383 * L_3 = ___values1;
		RuntimeArray * L_4 = NoAllocHelpers_ExtractArrayFromList_m2239661248(NULL /*static, unused*/, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t496136383 * L_5 = ___values1;
		int32_t L_6 = ((  int32_t (*) (RuntimeObject * /* static, unused */, List_1_t496136383 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (List_1_t496136383 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_SetSizedArrayForChannel_m2565120436((Mesh_t3648964284 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetUvsImpl<System.Object>(System.Int32,System.Int32,System.Collections.Generic.List`1<T>)
extern "C"  void Mesh_SetUvsImpl_TisRuntimeObject_m2275316106_gshared (Mesh_t3648964284 * __this, int32_t ___uvIndex0, int32_t ___dim1, List_1_t257213610 * ___uvs2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Mesh_SetUvsImpl_TisRuntimeObject_m2275316106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___uvIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___uvIndex0;
		if ((((int32_t)L_1) <= ((int32_t)3)))
		{
			goto IL_001f;
		}
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral2415889112, /*hidden argument*/NULL);
		goto IL_002f;
	}

IL_001f:
	{
		int32_t L_2 = ___uvIndex0;
		NullCheck((Mesh_t3648964284 *)__this);
		int32_t L_3 = Mesh_GetUVChannel_m1848830416((Mesh_t3648964284 *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___dim1;
		List_1_t257213610 * L_5 = ___uvs2;
		NullCheck((Mesh_t3648964284 *)__this);
		((  void (*) (Mesh_t3648964284 *, int32_t, int32_t, int32_t, List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t3648964284 *)__this, (int32_t)L_3, (int32_t)0, (int32_t)L_4, (List_1_t257213610 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.Mesh::SetUvsImpl<UnityEngine.Vector2>(System.Int32,System.Int32,System.Collections.Generic.List`1<T>)
extern "C"  void Mesh_SetUvsImpl_TisVector2_t2156229523_m3009194955_gshared (Mesh_t3648964284 * __this, int32_t ___uvIndex0, int32_t ___dim1, List_1_t3628304265 * ___uvs2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Mesh_SetUvsImpl_TisVector2_t2156229523_m3009194955_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___uvIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___uvIndex0;
		if ((((int32_t)L_1) <= ((int32_t)3)))
		{
			goto IL_001f;
		}
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral2415889112, /*hidden argument*/NULL);
		goto IL_002f;
	}

IL_001f:
	{
		int32_t L_2 = ___uvIndex0;
		NullCheck((Mesh_t3648964284 *)__this);
		int32_t L_3 = Mesh_GetUVChannel_m1848830416((Mesh_t3648964284 *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___dim1;
		List_1_t3628304265 * L_5 = ___uvs2;
		NullCheck((Mesh_t3648964284 *)__this);
		((  void (*) (Mesh_t3648964284 *, int32_t, int32_t, int32_t, List_1_t3628304265 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t3648964284 *)__this, (int32_t)L_3, (int32_t)0, (int32_t)L_4, (List_1_t3628304265 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<System.Boolean>(T&,T)
extern "C"  void LayoutGroup_SetProperty_TisBoolean_t97287965_m3903959758_gshared (LayoutGroup_t2436138090 * __this, bool* ___currentValue0, bool ___newValue1, const RuntimeMethod* method)
{
	{
		goto IL_001c;
	}
	{
	}

IL_001c:
	{
	}
	{
		bool* L_3 = ___currentValue0;
		bool L_4 = ___newValue1;
		bool L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_5);
		bool L_7 = Boolean_Equals_m2410333903((bool*)L_3, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}

IL_0043:
	{
		goto IL_0055;
	}

IL_0048:
	{
		bool* L_8 = ___currentValue0;
		bool L_9 = ___newValue1;
		*(bool*)L_8 = L_9;
		NullCheck((LayoutGroup_t2436138090 *)__this);
		LayoutGroup_SetDirty_m957775107((LayoutGroup_t2436138090 *)__this, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<System.Int32>(T&,T)
extern "C"  void LayoutGroup_SetProperty_TisInt32_t2950945753_m3911895589_gshared (LayoutGroup_t2436138090 * __this, int32_t* ___currentValue0, int32_t ___newValue1, const RuntimeMethod* method)
{
	{
		goto IL_001c;
	}
	{
	}

IL_001c:
	{
	}
	{
		int32_t* L_3 = ___currentValue0;
		int32_t L_4 = ___newValue1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_5);
		bool L_7 = Int32_Equals_m3996243976((int32_t*)L_3, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}

IL_0043:
	{
		goto IL_0055;
	}

IL_0048:
	{
		int32_t* L_8 = ___currentValue0;
		int32_t L_9 = ___newValue1;
		*(int32_t*)L_8 = L_9;
		NullCheck((LayoutGroup_t2436138090 *)__this);
		LayoutGroup_SetDirty_m957775107((LayoutGroup_t2436138090 *)__this, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<System.Object>(T&,T)
extern "C"  void LayoutGroup_SetProperty_TisRuntimeObject_m3460819731_gshared (LayoutGroup_t2436138090 * __this, RuntimeObject ** ___currentValue0, RuntimeObject * ___newValue1, const RuntimeMethod* method)
{
	{
		RuntimeObject ** L_0 = ___currentValue0;
		if ((*(RuntimeObject **)L_0))
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject * L_1 = ___newValue1;
		if (!L_1)
		{
			goto IL_0043;
		}
	}

IL_001c:
	{
		RuntimeObject ** L_2 = ___currentValue0;
		if (!(*(RuntimeObject **)L_2))
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject ** L_3 = ___currentValue0;
		RuntimeObject * L_4 = ___newValue1;
		NullCheck((RuntimeObject *)(*L_3));
		bool L_5 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)(*L_3), (RuntimeObject *)L_4);
		if (!L_5)
		{
			goto IL_0048;
		}
	}

IL_0043:
	{
		goto IL_0055;
	}

IL_0048:
	{
		RuntimeObject ** L_6 = ___currentValue0;
		RuntimeObject * L_7 = ___newValue1;
		*(RuntimeObject **)L_6 = L_7;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_6, L_7);
		NullCheck((LayoutGroup_t2436138090 *)__this);
		LayoutGroup_SetDirty_m957775107((LayoutGroup_t2436138090 *)__this, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<System.Single>(T&,T)
extern "C"  void LayoutGroup_SetProperty_TisSingle_t1397266774_m793506911_gshared (LayoutGroup_t2436138090 * __this, float* ___currentValue0, float ___newValue1, const RuntimeMethod* method)
{
	{
		goto IL_001c;
	}
	{
	}

IL_001c:
	{
	}
	{
		float* L_3 = ___currentValue0;
		float L_4 = ___newValue1;
		float L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_5);
		bool L_7 = Single_Equals_m438106747((float*)L_3, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}

IL_0043:
	{
		goto IL_0055;
	}

IL_0048:
	{
		float* L_8 = ___currentValue0;
		float L_9 = ___newValue1;
		*(float*)L_8 = L_9;
		NullCheck((LayoutGroup_t2436138090 *)__this);
		LayoutGroup_SetDirty_m957775107((LayoutGroup_t2436138090 *)__this, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<UnityEngine.TextAnchor>(T&,T)
extern "C"  void LayoutGroup_SetProperty_TisTextAnchor_t2035777396_m2990589179_gshared (LayoutGroup_t2436138090 * __this, int32_t* ___currentValue0, int32_t ___newValue1, const RuntimeMethod* method)
{
	{
		goto IL_001c;
	}
	{
	}

IL_001c:
	{
	}
	{
		int32_t* L_3 = ___currentValue0;
		int32_t L_4 = ___newValue1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_5);
		RuntimeObject * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_3);
		NullCheck((RuntimeObject *)L_7);
		bool L_8 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_7, (RuntimeObject *)L_6);
		*L_3 = *(int32_t*)UnBox(L_7);
		if (!L_8)
		{
			goto IL_0048;
		}
	}

IL_0043:
	{
		goto IL_0055;
	}

IL_0048:
	{
		int32_t* L_9 = ___currentValue0;
		int32_t L_10 = ___newValue1;
		*(int32_t*)L_9 = L_10;
		NullCheck((LayoutGroup_t2436138090 *)__this);
		LayoutGroup_SetDirty_m957775107((LayoutGroup_t2436138090 *)__this, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<UnityEngine.UI.GridLayoutGroup/Axis>(T&,T)
extern "C"  void LayoutGroup_SetProperty_TisAxis_t3613393006_m3591044743_gshared (LayoutGroup_t2436138090 * __this, int32_t* ___currentValue0, int32_t ___newValue1, const RuntimeMethod* method)
{
	{
		goto IL_001c;
	}
	{
	}

IL_001c:
	{
	}
	{
		int32_t* L_3 = ___currentValue0;
		int32_t L_4 = ___newValue1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_5);
		RuntimeObject * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_3);
		NullCheck((RuntimeObject *)L_7);
		bool L_8 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_7, (RuntimeObject *)L_6);
		*L_3 = *(int32_t*)UnBox(L_7);
		if (!L_8)
		{
			goto IL_0048;
		}
	}

IL_0043:
	{
		goto IL_0055;
	}

IL_0048:
	{
		int32_t* L_9 = ___currentValue0;
		int32_t L_10 = ___newValue1;
		*(int32_t*)L_9 = L_10;
		NullCheck((LayoutGroup_t2436138090 *)__this);
		LayoutGroup_SetDirty_m957775107((LayoutGroup_t2436138090 *)__this, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<UnityEngine.UI.GridLayoutGroup/Constraint>(T&,T)
extern "C"  void LayoutGroup_SetProperty_TisConstraint_t814224393_m1820208910_gshared (LayoutGroup_t2436138090 * __this, int32_t* ___currentValue0, int32_t ___newValue1, const RuntimeMethod* method)
{
	{
		goto IL_001c;
	}
	{
	}

IL_001c:
	{
	}
	{
		int32_t* L_3 = ___currentValue0;
		int32_t L_4 = ___newValue1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_5);
		RuntimeObject * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_3);
		NullCheck((RuntimeObject *)L_7);
		bool L_8 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_7, (RuntimeObject *)L_6);
		*L_3 = *(int32_t*)UnBox(L_7);
		if (!L_8)
		{
			goto IL_0048;
		}
	}

IL_0043:
	{
		goto IL_0055;
	}

IL_0048:
	{
		int32_t* L_9 = ___currentValue0;
		int32_t L_10 = ___newValue1;
		*(int32_t*)L_9 = L_10;
		NullCheck((LayoutGroup_t2436138090 *)__this);
		LayoutGroup_SetDirty_m957775107((LayoutGroup_t2436138090 *)__this, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<UnityEngine.UI.GridLayoutGroup/Corner>(T&,T)
extern "C"  void LayoutGroup_SetProperty_TisCorner_t1493259673_m3558432704_gshared (LayoutGroup_t2436138090 * __this, int32_t* ___currentValue0, int32_t ___newValue1, const RuntimeMethod* method)
{
	{
		goto IL_001c;
	}
	{
	}

IL_001c:
	{
	}
	{
		int32_t* L_3 = ___currentValue0;
		int32_t L_4 = ___newValue1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_5);
		RuntimeObject * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_3);
		NullCheck((RuntimeObject *)L_7);
		bool L_8 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_7, (RuntimeObject *)L_6);
		*L_3 = *(int32_t*)UnBox(L_7);
		if (!L_8)
		{
			goto IL_0048;
		}
	}

IL_0043:
	{
		goto IL_0055;
	}

IL_0048:
	{
		int32_t* L_9 = ___currentValue0;
		int32_t L_10 = ___newValue1;
		*(int32_t*)L_9 = L_10;
		NullCheck((LayoutGroup_t2436138090 *)__this);
		LayoutGroup_SetDirty_m957775107((LayoutGroup_t2436138090 *)__this, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<UnityEngine.Vector2>(T&,T)
extern "C"  void LayoutGroup_SetProperty_TisVector2_t2156229523_m2721164497_gshared (LayoutGroup_t2436138090 * __this, Vector2_t2156229523 * ___currentValue0, Vector2_t2156229523  ___newValue1, const RuntimeMethod* method)
{
	{
		goto IL_001c;
	}
	{
	}

IL_001c:
	{
	}
	{
		Vector2_t2156229523 * L_3 = ___currentValue0;
		Vector2_t2156229523  L_4 = ___newValue1;
		Vector2_t2156229523  L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_5);
		bool L_7 = Vector2_Equals_m832062989((Vector2_t2156229523 *)L_3, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}

IL_0043:
	{
		goto IL_0055;
	}

IL_0048:
	{
		Vector2_t2156229523 * L_8 = ___currentValue0;
		Vector2_t2156229523  L_9 = ___newValue1;
		*(Vector2_t2156229523 *)L_8 = L_9;
		NullCheck((LayoutGroup_t2436138090 *)__this);
		LayoutGroup_SetDirty_m957775107((LayoutGroup_t2436138090 *)__this, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
// System.Void Utils::Shuffle<DataManager/Field>(System.Collections.Generic.IList`1<T>)
extern "C"  void Utils_Shuffle_TisField_t4131964166_m769604636_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_Shuffle_TisField_t4131964166_m769604636_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Random_t108471755 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Field_t4131964166  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Random_t108471755 * L_0 = (Random_t108471755 *)il2cpp_codegen_object_new(Random_t108471755_il2cpp_TypeInfo_var);
		Random__ctor_m4122933043(L_0, /*hidden argument*/NULL);
		V_0 = (Random_t108471755 *)L_0;
		RuntimeObject* L_1 = ___list0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<DataManager/Field>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_1);
		V_1 = (int32_t)L_2;
		goto IL_003e;
	}

IL_0012:
	{
		int32_t L_3 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		Random_t108471755 * L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck((Random_t108471755 *)L_4);
		int32_t L_6 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32) */, (Random_t108471755 *)L_4, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		V_2 = (int32_t)L_6;
		RuntimeObject* L_7 = ___list0;
		int32_t L_8 = V_2;
		NullCheck((RuntimeObject*)L_7);
		Field_t4131964166  L_9 = InterfaceFuncInvoker1< Field_t4131964166 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<DataManager/Field>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_7, (int32_t)L_8);
		V_3 = (Field_t4131964166 )L_9;
		RuntimeObject* L_10 = ___list0;
		int32_t L_11 = V_2;
		RuntimeObject* L_12 = ___list0;
		int32_t L_13 = V_1;
		NullCheck((RuntimeObject*)L_12);
		Field_t4131964166  L_14 = InterfaceFuncInvoker1< Field_t4131964166 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<DataManager/Field>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_12, (int32_t)L_13);
		NullCheck((RuntimeObject*)L_10);
		InterfaceActionInvoker2< int32_t, Field_t4131964166  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<DataManager/Field>::set_Item(System.Int32,!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_10, (int32_t)L_11, (Field_t4131964166 )L_14);
		RuntimeObject* L_15 = ___list0;
		int32_t L_16 = V_1;
		Field_t4131964166  L_17 = V_3;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< int32_t, Field_t4131964166  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<DataManager/Field>::set_Item(System.Int32,!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_15, (int32_t)L_16, (Field_t4131964166 )L_17);
	}

IL_003e:
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) > ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.Void Utils::Shuffle<System.Object>(System.Collections.Generic.IList`1<T>)
extern "C"  void Utils_Shuffle_TisRuntimeObject_m1619218395_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_Shuffle_TisRuntimeObject_m1619218395_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Random_t108471755 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		Random_t108471755 * L_0 = (Random_t108471755 *)il2cpp_codegen_object_new(Random_t108471755_il2cpp_TypeInfo_var);
		Random__ctor_m4122933043(L_0, /*hidden argument*/NULL);
		V_0 = (Random_t108471755 *)L_0;
		RuntimeObject* L_1 = ___list0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_1);
		V_1 = (int32_t)L_2;
		goto IL_003e;
	}

IL_0012:
	{
		int32_t L_3 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		Random_t108471755 * L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck((Random_t108471755 *)L_4);
		int32_t L_6 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32) */, (Random_t108471755 *)L_4, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		V_2 = (int32_t)L_6;
		RuntimeObject* L_7 = ___list0;
		int32_t L_8 = V_2;
		NullCheck((RuntimeObject*)L_7);
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_7, (int32_t)L_8);
		V_3 = (RuntimeObject *)L_9;
		RuntimeObject* L_10 = ___list0;
		int32_t L_11 = V_2;
		RuntimeObject* L_12 = ___list0;
		int32_t L_13 = V_1;
		NullCheck((RuntimeObject*)L_12);
		RuntimeObject * L_14 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_12, (int32_t)L_13);
		NullCheck((RuntimeObject*)L_10);
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Object>::set_Item(System.Int32,!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_10, (int32_t)L_11, (RuntimeObject *)L_14);
		RuntimeObject* L_15 = ___list0;
		int32_t L_16 = V_1;
		RuntimeObject * L_17 = V_3;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Object>::set_Item(System.Int32,!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_15, (int32_t)L_16, (RuntimeObject *)L_17);
	}

IL_003e:
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) > ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.Void Utils::Shuffle<UnityEngine.Vector2>(System.Collections.Generic.IList`1<T>)
extern "C"  void Utils_Shuffle_TisVector2_t2156229523_m1177834145_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_Shuffle_TisVector2_t2156229523_m1177834145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Random_t108471755 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Random_t108471755 * L_0 = (Random_t108471755 *)il2cpp_codegen_object_new(Random_t108471755_il2cpp_TypeInfo_var);
		Random__ctor_m4122933043(L_0, /*hidden argument*/NULL);
		V_0 = (Random_t108471755 *)L_0;
		RuntimeObject* L_1 = ___list0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_1);
		V_1 = (int32_t)L_2;
		goto IL_003e;
	}

IL_0012:
	{
		int32_t L_3 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		Random_t108471755 * L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck((Random_t108471755 *)L_4);
		int32_t L_6 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32) */, (Random_t108471755 *)L_4, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		V_2 = (int32_t)L_6;
		RuntimeObject* L_7 = ___list0;
		int32_t L_8 = V_2;
		NullCheck((RuntimeObject*)L_7);
		Vector2_t2156229523  L_9 = InterfaceFuncInvoker1< Vector2_t2156229523 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<UnityEngine.Vector2>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_7, (int32_t)L_8);
		V_3 = (Vector2_t2156229523 )L_9;
		RuntimeObject* L_10 = ___list0;
		int32_t L_11 = V_2;
		RuntimeObject* L_12 = ___list0;
		int32_t L_13 = V_1;
		NullCheck((RuntimeObject*)L_12);
		Vector2_t2156229523  L_14 = InterfaceFuncInvoker1< Vector2_t2156229523 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<UnityEngine.Vector2>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_12, (int32_t)L_13);
		NullCheck((RuntimeObject*)L_10);
		InterfaceActionInvoker2< int32_t, Vector2_t2156229523  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::set_Item(System.Int32,!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_10, (int32_t)L_11, (Vector2_t2156229523 )L_14);
		RuntimeObject* L_15 = ___list0;
		int32_t L_16 = V_1;
		Vector2_t2156229523  L_17 = V_3;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< int32_t, Vector2_t2156229523  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::set_Item(System.Int32,!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_15, (int32_t)L_16, (Vector2_t2156229523 )L_17);
	}

IL_003e:
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) > ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.Void Utils::ShuffleArray<System.Object>(T[])
extern "C"  void Utils_ShuffleArray_TisRuntimeObject_m2163977941_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___arr0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___arr0;
		NullCheck(L_0);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)1));
		goto IL_0035;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = Random_Range_m4054026115(NULL /*static, unused*/, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		V_1 = (int32_t)L_2;
		ObjectU5BU5D_t2843939325* L_3 = ___arr0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = (RuntimeObject *)L_6;
		ObjectU5BU5D_t2843939325* L_7 = ___arr0;
		int32_t L_8 = V_0;
		ObjectU5BU5D_t2843939325* L_9 = ___arr0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = ___arr0;
		int32_t L_14 = V_1;
		RuntimeObject * L_15 = V_2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (RuntimeObject *)L_15);
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
	}

IL_0035:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// T System.Activator::CreateInstance<System.Object>()
extern "C"  RuntimeObject * Activator_CreateInstance_TisRuntimeObject_m729575857_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Activator_CreateInstance_TisRuntimeObject_m729575857_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = Activator_CreateInstance_m3631483688(NULL /*static, unused*/, (Type_t *)L_1, /*hidden argument*/NULL);
		return ((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
extern "C"  RuntimeObject * Array_Find_TisRuntimeObject_m2705709394_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, Predicate_1_t3905400288 * ___match1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_Find_TisRuntimeObject_m2705709394_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_Find_TisRuntimeObject_m2705709394_RuntimeMethod_var);
	}

IL_0011:
	{
		Predicate_1_t3905400288 * L_2 = ___match1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, (String_t*)_stringLiteral461028519, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,Array_Find_TisRuntimeObject_m2705709394_RuntimeMethod_var);
	}

IL_0022:
	{
		ObjectU5BU5D_t2843939325* L_4 = ___array0;
		V_1 = (ObjectU5BU5D_t2843939325*)L_4;
		V_2 = (int32_t)0;
		goto IL_0045;
	}

IL_002b:
	{
		ObjectU5BU5D_t2843939325* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = (RuntimeObject *)L_8;
		Predicate_1_t3905400288 * L_9 = ___match1;
		RuntimeObject * L_10 = V_0;
		NullCheck((Predicate_1_t3905400288 *)L_9);
		bool L_11 = ((  bool (*) (Predicate_1_t3905400288 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Predicate_1_t3905400288 *)L_9, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_11)
		{
			goto IL_0041;
		}
	}
	{
		RuntimeObject * L_12 = V_0;
		return L_12;
	}

IL_0041:
	{
		int32_t L_13 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0045:
	{
		int32_t L_14 = V_2;
		ObjectU5BU5D_t2843939325* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_16 = V_3;
		return L_16;
	}
}
// T System.Array::FindLast<System.Object>(T[],System.Predicate`1<T>)
extern "C"  RuntimeObject * Array_FindLast_TisRuntimeObject_m1088586648_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, Predicate_1_t3905400288 * ___match1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_FindLast_TisRuntimeObject_m1088586648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_FindLast_TisRuntimeObject_m1088586648_RuntimeMethod_var);
	}

IL_0011:
	{
		Predicate_1_t3905400288 * L_2 = ___match1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, (String_t*)_stringLiteral461028519, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,Array_FindLast_TisRuntimeObject_m1088586648_RuntimeMethod_var);
	}

IL_0022:
	{
		ObjectU5BU5D_t2843939325* L_4 = ___array0;
		NullCheck(L_4);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), (int32_t)1));
		goto IL_004b;
	}

IL_002d:
	{
		Predicate_1_t3905400288 * L_5 = ___match1;
		ObjectU5BU5D_t2843939325* L_6 = ___array0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck((Predicate_1_t3905400288 *)L_5);
		bool L_10 = ((  bool (*) (Predicate_1_t3905400288 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Predicate_1_t3905400288 *)L_5, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_10)
		{
			goto IL_0047;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_11 = ___array0;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		return L_14;
	}

IL_0047:
	{
		int32_t L_15 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
	}

IL_004b:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_17 = V_1;
		return L_17;
	}
}
// T System.Array::InternalArray__get_Item<AxisLabel>(System.Int32)
extern "C"  AxisLabel_t4128127930  Array_InternalArray__get_Item_TisAxisLabel_t4128127930_m165134455_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisAxisLabel_t4128127930_m165134455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AxisLabel_t4128127930  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisAxisLabel_t4128127930_m165134455_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (AxisLabel_t4128127930 *)(&V_0));
		AxisLabel_t4128127930  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<DataManager/Field>(System.Int32)
extern "C"  Field_t4131964166  Array_InternalArray__get_Item_TisField_t4131964166_m2844063530_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisField_t4131964166_m2844063530_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Field_t4131964166  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisField_t4131964166_m2844063530_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Field_t4131964166 *)(&V_0));
		Field_t4131964166  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<DataManager/Hit>(System.Int32)
extern "C"  Hit_t3596106040  Array_InternalArray__get_Item_TisHit_t3596106040_m2544346727_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisHit_t3596106040_m2544346727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Hit_t3596106040  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisHit_t3596106040_m2544346727_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Hit_t3596106040 *)(&V_0));
		Hit_t3596106040  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<DataManager/LevelData>(System.Int32)
extern "C"  LevelData_t439927600  Array_InternalArray__get_Item_TisLevelData_t439927600_m2513005712_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisLevelData_t439927600_m2513005712_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LevelData_t439927600  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisLevelData_t439927600_m2513005712_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (LevelData_t439927600 *)(&V_0));
		LevelData_t439927600  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<DataManager/SessionData>(System.Int32)
extern "C"  SessionData_t844877374  Array_InternalArray__get_Item_TisSessionData_t844877374_m634226541_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisSessionData_t844877374_m634226541_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SessionData_t844877374  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisSessionData_t844877374_m634226541_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (SessionData_t844877374 *)(&V_0));
		SessionData_t844877374  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
extern "C"  TableRange_t3332867892  Array_InternalArray__get_Item_TisTableRange_t3332867892_m1483480711_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisTableRange_t3332867892_m1483480711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TableRange_t3332867892  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisTableRange_t3332867892_m1483480711_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (TableRange_t3332867892 *)(&V_0));
		TableRange_t3332867892  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
extern "C"  int32_t Array_InternalArray__get_Item_TisClientCertificateType_t1004704908_m2297379651_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisClientCertificateType_t1004704908_m2297379651_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisClientCertificateType_t1004704908_m2297379651_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<ResultsScreen/ResultType>(System.Int32)
extern "C"  ResultType_t2923018313  Array_InternalArray__get_Item_TisResultType_t2923018313_m1028891236_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisResultType_t2923018313_m1028891236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResultType_t2923018313  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisResultType_t2923018313_m1028891236_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ResultType_t2923018313 *)(&V_0));
		ResultType_t2923018313  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Boolean>(System.Int32)
extern "C"  bool Array_InternalArray__get_Item_TisBoolean_t97287965_m1407010309_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisBoolean_t97287965_m1407010309_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisBoolean_t97287965_m1407010309_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (bool*)(&V_0));
		bool L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
extern "C"  uint8_t Array_InternalArray__get_Item_TisByte_t1134296376_m3566214066_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisByte_t1134296376_m3566214066_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisByte_t1134296376_m3566214066_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint8_t*)(&V_0));
		uint8_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Char>(System.Int32)
extern "C"  Il2CppChar Array_InternalArray__get_Item_TisChar_t3634460470_m324132692_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisChar_t3634460470_m324132692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisChar_t3634460470_m324132692_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Il2CppChar*)(&V_0));
		Il2CppChar L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.DictionaryEntry>(System.Int32)
extern "C"  DictionaryEntry_t3123975638  Array_InternalArray__get_Item_TisDictionaryEntry_t3123975638_m479537688_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisDictionaryEntry_t3123975638_m479537688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryEntry_t3123975638  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisDictionaryEntry_t3123975638_m479537688_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (DictionaryEntry_t3123975638 *)(&V_0));
		DictionaryEntry_t3123975638  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.HashSet`1/Link<System.Object>>(System.Int32)
extern "C"  Link_t3209266973  Array_InternalArray__get_Item_TisLink_t3209266973_m1574224299_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisLink_t3209266973_m1574224299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Link_t3209266973  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisLink_t3209266973_m1574224299_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Link_t3209266973 *)(&V_0));
		Link_t3209266973  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(System.Int32)
extern "C"  KeyValuePair_2_t71524366  Array_InternalArray__get_Item_TisKeyValuePair_2_t71524366_m252172060_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t71524366_m252172060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t71524366  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisKeyValuePair_2_t71524366_m252172060_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t71524366 *)(&V_0));
		KeyValuePair_2_t71524366  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>(System.Int32)
extern "C"  KeyValuePair_2_t3699644050  Array_InternalArray__get_Item_TisKeyValuePair_2_t3699644050_m2010289903_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t3699644050_m2010289903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t3699644050  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisKeyValuePair_2_t3699644050_m2010289903_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t3699644050 *)(&V_0));
		KeyValuePair_2_t3699644050  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>(System.Int32)
extern "C"  KeyValuePair_2_t3842366416  Array_InternalArray__get_Item_TisKeyValuePair_2_t3842366416_m3937535230_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t3842366416_m3937535230_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t3842366416  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisKeyValuePair_2_t3842366416_m3937535230_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t3842366416 *)(&V_0));
		KeyValuePair_2_t3842366416  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Int32)
extern "C"  KeyValuePair_2_t2401056908  Array_InternalArray__get_Item_TisKeyValuePair_2_t2401056908_m3647027688_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t2401056908_m3647027688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t2401056908  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisKeyValuePair_2_t2401056908_m3647027688_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t2401056908 *)(&V_0));
		KeyValuePair_2_t2401056908  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
extern "C"  KeyValuePair_2_t2530217319  Array_InternalArray__get_Item_TisKeyValuePair_2_t2530217319_m2886833132_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t2530217319_m2886833132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t2530217319  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisKeyValuePair_2_t2530217319_m2886833132_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t2530217319 *)(&V_0));
		KeyValuePair_2_t2530217319  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.Link>(System.Int32)
extern "C"  Link_t544317964  Array_InternalArray__get_Item_TisLink_t544317964_m1669566993_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisLink_t544317964_m1669566993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Link_t544317964  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisLink_t544317964_m1669566993_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Link_t544317964 *)(&V_0));
		Link_t544317964  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
extern "C"  Slot_t3975888750  Array_InternalArray__get_Item_TisSlot_t3975888750_m905303097_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisSlot_t3975888750_m905303097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Slot_t3975888750  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisSlot_t3975888750_m905303097_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Slot_t3975888750 *)(&V_0));
		Slot_t3975888750  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
extern "C"  Slot_t384495010  Array_InternalArray__get_Item_TisSlot_t384495010_m2861978404_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisSlot_t384495010_m2861978404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Slot_t384495010  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisSlot_t384495010_m2861978404_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Slot_t384495010 *)(&V_0));
		Slot_t384495010  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
extern "C"  DateTime_t3738529785  Array_InternalArray__get_Item_TisDateTime_t3738529785_m623181444_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisDateTime_t3738529785_m623181444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisDateTime_t3738529785_m623181444_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (DateTime_t3738529785 *)(&V_0));
		DateTime_t3738529785  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
extern "C"  Decimal_t2948259380  Array_InternalArray__get_Item_TisDecimal_t2948259380_m3511003792_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisDecimal_t2948259380_m3511003792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Decimal_t2948259380  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisDecimal_t2948259380_m3511003792_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Decimal_t2948259380 *)(&V_0));
		Decimal_t2948259380  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Double>(System.Int32)
extern "C"  double Array_InternalArray__get_Item_TisDouble_t594665363_m850827605_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisDouble_t594665363_m850827605_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisDouble_t594665363_m850827605_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (double*)(&V_0));
		double L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
extern "C"  int16_t Array_InternalArray__get_Item_TisInt16_t2552820387_m76930473_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisInt16_t2552820387_m76930473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int16_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisInt16_t2552820387_m76930473_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int16_t*)(&V_0));
		int16_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
extern "C"  int32_t Array_InternalArray__get_Item_TisInt32_t2950945753_m714868479_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisInt32_t2950945753_m714868479_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisInt32_t2950945753_m714868479_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
extern "C"  int64_t Array_InternalArray__get_Item_TisInt64_t3736567304_m3562990826_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisInt64_t3736567304_m3562990826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisInt64_t3736567304_m3562990826_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int64_t*)(&V_0));
		int64_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.IntPtr>(System.Int32)
extern "C"  intptr_t Array_InternalArray__get_Item_TisIntPtr_t_m784054003_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisIntPtr_t_m784054003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisIntPtr_t_m784054003_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (intptr_t*)(&V_0));
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C"  RuntimeObject * Array_InternalArray__get_Item_TisRuntimeObject_m3347010206_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRuntimeObject_m3347010206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisRuntimeObject_m3347010206_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RuntimeObject **)(&V_0));
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.CustomAttributeNamedArgument>(System.Int32)
extern "C"  CustomAttributeNamedArgument_t287865710  Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t287865710_m2282658220_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t287865710_m2282658220_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CustomAttributeNamedArgument_t287865710  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t287865710_m2282658220_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (CustomAttributeNamedArgument_t287865710 *)(&V_0));
		CustomAttributeNamedArgument_t287865710  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.CustomAttributeTypedArgument>(System.Int32)
extern "C"  CustomAttributeTypedArgument_t2723150157  Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_t2723150157_m2639399822_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_t2723150157_m2639399822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CustomAttributeTypedArgument_t2723150157  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_t2723150157_m2639399822_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (CustomAttributeTypedArgument_t2723150157 *)(&V_0));
		CustomAttributeTypedArgument_t2723150157  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.ILGenerator/LabelData>(System.Int32)
extern "C"  LabelData_t360167391  Array_InternalArray__get_Item_TisLabelData_t360167391_m1054702781_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisLabelData_t360167391_m1054702781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LabelData_t360167391  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisLabelData_t360167391_m1054702781_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (LabelData_t360167391 *)(&V_0));
		LabelData_t360167391  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.ILGenerator/LabelFixup>(System.Int32)
extern "C"  LabelFixup_t858502054  Array_InternalArray__get_Item_TisLabelFixup_t858502054_m3276643490_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisLabelFixup_t858502054_m3276643490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LabelFixup_t858502054  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisLabelFixup_t858502054_m3276643490_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (LabelFixup_t858502054 *)(&V_0));
		LabelFixup_t858502054  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.ILTokenInfo>(System.Int32)
extern "C"  ILTokenInfo_t2325775114  Array_InternalArray__get_Item_TisILTokenInfo_t2325775114_m3110830457_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisILTokenInfo_t2325775114_m3110830457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ILTokenInfo_t2325775114  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisILTokenInfo_t2325775114_m3110830457_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ILTokenInfo_t2325775114 *)(&V_0));
		ILTokenInfo_t2325775114  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.MonoResource>(System.Int32)
extern "C"  MonoResource_t4103430009  Array_InternalArray__get_Item_TisMonoResource_t4103430009_m2937222811_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisMonoResource_t4103430009_m2937222811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MonoResource_t4103430009  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisMonoResource_t4103430009_m2937222811_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (MonoResource_t4103430009 *)(&V_0));
		MonoResource_t4103430009  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.MonoWin32Resource>(System.Int32)
extern "C"  MonoWin32Resource_t1904229483  Array_InternalArray__get_Item_TisMonoWin32Resource_t1904229483_m513901999_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisMonoWin32Resource_t1904229483_m513901999_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MonoWin32Resource_t1904229483  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisMonoWin32Resource_t1904229483_m513901999_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (MonoWin32Resource_t1904229483 *)(&V_0));
		MonoWin32Resource_t1904229483  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.RefEmitPermissionSet>(System.Int32)
extern "C"  RefEmitPermissionSet_t484390987  Array_InternalArray__get_Item_TisRefEmitPermissionSet_t484390987_m1505876205_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRefEmitPermissionSet_t484390987_m1505876205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RefEmitPermissionSet_t484390987  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisRefEmitPermissionSet_t484390987_m1505876205_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RefEmitPermissionSet_t484390987 *)(&V_0));
		RefEmitPermissionSet_t484390987  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.ParameterModifier>(System.Int32)
extern "C"  ParameterModifier_t1461694466  Array_InternalArray__get_Item_TisParameterModifier_t1461694466_m29553316_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisParameterModifier_t1461694466_m29553316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ParameterModifier_t1461694466  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisParameterModifier_t1461694466_m29553316_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ParameterModifier_t1461694466 *)(&V_0));
		ParameterModifier_t1461694466  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Resources.ResourceReader/ResourceCacheItem>(System.Int32)
extern "C"  ResourceCacheItem_t51292791  Array_InternalArray__get_Item_TisResourceCacheItem_t51292791_m1306056717_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisResourceCacheItem_t51292791_m1306056717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResourceCacheItem_t51292791  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisResourceCacheItem_t51292791_m1306056717_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ResourceCacheItem_t51292791 *)(&V_0));
		ResourceCacheItem_t51292791  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Resources.ResourceReader/ResourceInfo>(System.Int32)
extern "C"  ResourceInfo_t2872965302  Array_InternalArray__get_Item_TisResourceInfo_t2872965302_m3865610257_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisResourceInfo_t2872965302_m3865610257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResourceInfo_t2872965302  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisResourceInfo_t2872965302_m3865610257_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ResourceInfo_t2872965302 *)(&V_0));
		ResourceInfo_t2872965302  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
extern "C"  uint8_t Array_InternalArray__get_Item_TisTypeTag_t3541821701_m4208350471_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisTypeTag_t3541821701_m4208350471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisTypeTag_t3541821701_m4208350471_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint8_t*)(&V_0));
		uint8_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
extern "C"  int8_t Array_InternalArray__get_Item_TisSByte_t1669577662_m2349608172_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisSByte_t1669577662_m2349608172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int8_t V_0 = 0x0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisSByte_t1669577662_m2349608172_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int8_t*)(&V_0));
		int8_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32)
extern "C"  X509ChainStatus_t133602714  Array_InternalArray__get_Item_TisX509ChainStatus_t133602714_m2237651489_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisX509ChainStatus_t133602714_m2237651489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509ChainStatus_t133602714  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisX509ChainStatus_t133602714_m2237651489_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (X509ChainStatus_t133602714 *)(&V_0));
		X509ChainStatus_t133602714  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Single>(System.Int32)
extern "C"  float Array_InternalArray__get_Item_TisSingle_t1397266774_m1672589487_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisSingle_t1397266774_m1672589487_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisSingle_t1397266774_m1672589487_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (float*)(&V_0));
		float L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Mark>(System.Int32)
extern "C"  Mark_t3471605523  Array_InternalArray__get_Item_TisMark_t3471605523_m3397473850_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisMark_t3471605523_m3397473850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Mark_t3471605523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisMark_t3471605523_m3397473850_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Mark_t3471605523 *)(&V_0));
		Mark_t3471605523  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
extern "C"  TimeSpan_t881159249  Array_InternalArray__get_Item_TisTimeSpan_t881159249_m1885583191_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisTimeSpan_t881159249_m1885583191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t881159249  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisTimeSpan_t881159249_m1885583191_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (TimeSpan_t881159249 *)(&V_0));
		TimeSpan_t881159249  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.UInt16>(System.Int32)
extern "C"  uint16_t Array_InternalArray__get_Item_TisUInt16_t2177724958_m3601205466_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUInt16_t2177724958_m3601205466_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisUInt16_t2177724958_m3601205466_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint16_t*)(&V_0));
		uint16_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
extern "C"  uint32_t Array_InternalArray__get_Item_TisUInt32_t2560061978_m1955195035_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUInt32_t2560061978_m1955195035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisUInt32_t2560061978_m1955195035_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint32_t*)(&V_0));
		uint32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
extern "C"  uint64_t Array_InternalArray__get_Item_TisUInt64_t4134040092_m129291315_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUInt64_t4134040092_m129291315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisUInt64_t4134040092_m129291315_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint64_t*)(&V_0));
		uint64_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Uri/UriScheme>(System.Int32)
extern "C"  UriScheme_t722425697  Array_InternalArray__get_Item_TisUriScheme_t722425697_m2816273040_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUriScheme_t722425697_m2816273040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UriScheme_t722425697  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisUriScheme_t722425697_m2816273040_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (UriScheme_t722425697 *)(&V_0));
		UriScheme_t722425697  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.BeforeRenderHelper/OrderBlock>(System.Int32)
extern "C"  OrderBlock_t1585977831  Array_InternalArray__get_Item_TisOrderBlock_t1585977831_m2406385050_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisOrderBlock_t1585977831_m2406385050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OrderBlock_t1585977831  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisOrderBlock_t1585977831_m2406385050_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (OrderBlock_t1585977831 *)(&V_0));
		OrderBlock_t1585977831  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Color>(System.Int32)
extern "C"  Color_t2555686324  Array_InternalArray__get_Item_TisColor_t2555686324_m2985413820_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisColor_t2555686324_m2985413820_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisColor_t2555686324_m2985413820_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Color_t2555686324 *)(&V_0));
		Color_t2555686324  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Color32>(System.Int32)
extern "C"  Color32_t2600501292  Array_InternalArray__get_Item_TisColor32_t2600501292_m1325986122_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisColor32_t2600501292_m1325986122_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color32_t2600501292  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisColor32_t2600501292_m1325986122_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Color32_t2600501292 *)(&V_0));
		Color32_t2600501292  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.ContactPoint2D>(System.Int32)
extern "C"  ContactPoint2D_t3390240644  Array_InternalArray__get_Item_TisContactPoint2D_t3390240644_m1483798952_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisContactPoint2D_t3390240644_m1483798952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ContactPoint2D_t3390240644  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisContactPoint2D_t3390240644_m1483798952_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ContactPoint2D_t3390240644 *)(&V_0));
		ContactPoint2D_t3390240644  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.RaycastResult>(System.Int32)
extern "C"  RaycastResult_t3360306849  Array_InternalArray__get_Item_TisRaycastResult_t3360306849_m1872700081_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRaycastResult_t3360306849_m1872700081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastResult_t3360306849  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisRaycastResult_t3360306849_m1872700081_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RaycastResult_t3360306849 *)(&V_0));
		RaycastResult_t3360306849  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
extern "C"  Keyframe_t4206410242  Array_InternalArray__get_Item_TisKeyframe_t4206410242_m27698365_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyframe_t4206410242_m27698365_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Keyframe_t4206410242  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisKeyframe_t4206410242_m27698365_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Keyframe_t4206410242 *)(&V_0));
		Keyframe_t4206410242  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Playables.PlayableBinding>(System.Int32)
extern "C"  PlayableBinding_t354260709  Array_InternalArray__get_Item_TisPlayableBinding_t354260709_m3837494573_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisPlayableBinding_t354260709_m3837494573_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableBinding_t354260709  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisPlayableBinding_t354260709_m3837494573_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (PlayableBinding_t354260709 *)(&V_0));
		PlayableBinding_t354260709  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
extern "C"  RaycastHit_t1056001966  Array_InternalArray__get_Item_TisRaycastHit_t1056001966_m3352067444_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRaycastHit_t1056001966_m3352067444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t1056001966  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisRaycastHit_t1056001966_m3352067444_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RaycastHit_t1056001966 *)(&V_0));
		RaycastHit_t1056001966  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.RaycastHit2D>(System.Int32)
extern "C"  RaycastHit2D_t2279581989  Array_InternalArray__get_Item_TisRaycastHit2D_t2279581989_m2440275162_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRaycastHit2D_t2279581989_m2440275162_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t2279581989  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisRaycastHit2D_t2279581989_m2440275162_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RaycastHit2D_t2279581989 *)(&V_0));
		RaycastHit2D_t2279581989  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
extern "C"  HitInfo_t3229609740  Array_InternalArray__get_Item_TisHitInfo_t3229609740_m2260995172_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisHitInfo_t3229609740_m2260995172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HitInfo_t3229609740  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisHitInfo_t3229609740_m2260995172_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (HitInfo_t3229609740 *)(&V_0));
		HitInfo_t3229609740  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>(System.Int32)
extern "C"  GcAchievementData_t675222246  Array_InternalArray__get_Item_TisGcAchievementData_t675222246_m2680268485_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisGcAchievementData_t675222246_m2680268485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GcAchievementData_t675222246  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisGcAchievementData_t675222246_m2680268485_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (GcAchievementData_t675222246 *)(&V_0));
		GcAchievementData_t675222246  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>(System.Int32)
extern "C"  GcScoreData_t2125309831  Array_InternalArray__get_Item_TisGcScoreData_t2125309831_m174676143_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisGcScoreData_t2125309831_m174676143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GcScoreData_t2125309831  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisGcScoreData_t2125309831_m174676143_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (GcScoreData_t2125309831 *)(&V_0));
		GcScoreData_t2125309831  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/ContentType>(System.Int32)
extern "C"  int32_t Array_InternalArray__get_Item_TisContentType_t1787303396_m421427711_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisContentType_t1787303396_m421427711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisContentType_t1787303396_m421427711_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.UICharInfo>(System.Int32)
extern "C"  UICharInfo_t75501106  Array_InternalArray__get_Item_TisUICharInfo_t75501106_m1797321427_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUICharInfo_t75501106_m1797321427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UICharInfo_t75501106  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisUICharInfo_t75501106_m1797321427_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (UICharInfo_t75501106 *)(&V_0));
		UICharInfo_t75501106  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.UILineInfo>(System.Int32)
extern "C"  UILineInfo_t4195266810  Array_InternalArray__get_Item_TisUILineInfo_t4195266810_m1305614921_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUILineInfo_t4195266810_m1305614921_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UILineInfo_t4195266810  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisUILineInfo_t4195266810_m1305614921_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (UILineInfo_t4195266810 *)(&V_0));
		UILineInfo_t4195266810  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.UIVertex>(System.Int32)
extern "C"  UIVertex_t4057497605  Array_InternalArray__get_Item_TisUIVertex_t4057497605_m289307453_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUIVertex_t4057497605_m289307453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UIVertex_t4057497605  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisUIVertex_t4057497605_m289307453_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (UIVertex_t4057497605 *)(&V_0));
		UIVertex_t4057497605  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.UnitySynchronizationContext/WorkRequest>(System.Int32)
extern "C"  WorkRequest_t1354518612  Array_InternalArray__get_Item_TisWorkRequest_t1354518612_m2694410850_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisWorkRequest_t1354518612_m2694410850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WorkRequest_t1354518612  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisWorkRequest_t1354518612_m2694410850_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (WorkRequest_t1354518612 *)(&V_0));
		WorkRequest_t1354518612  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Vector2>(System.Int32)
extern "C"  Vector2_t2156229523  Array_InternalArray__get_Item_TisVector2_t2156229523_m2502961026_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisVector2_t2156229523_m2502961026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisVector2_t2156229523_m2502961026_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Vector2_t2156229523 *)(&V_0));
		Vector2_t2156229523  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Vector3>(System.Int32)
extern "C"  Vector3_t3722313464  Array_InternalArray__get_Item_TisVector3_t3722313464_m2720091419_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisVector3_t3722313464_m2720091419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisVector3_t3722313464_m2720091419_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Vector3_t3722313464 *)(&V_0));
		Vector3_t3722313464  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Vector4>(System.Int32)
extern "C"  Vector4_t3319028937  Array_InternalArray__get_Item_TisVector4_t3319028937_m1117939728_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisVector4_t3319028937_m1117939728_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Array_InternalArray__get_Item_TisVector4_t3319028937_m1117939728_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Vector4_t3319028937 *)(&V_0));
		Vector4_t3319028937  L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.AttributeHelperEngine::GetCustomAttributeOfType<System.Object>(System.Type)
extern "C"  RuntimeObject * AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m429013101_gshared (RuntimeObject * __this /* static, unused */, Type_t * ___klass0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m429013101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		Type_t * L_2 = ___klass0;
		Type_t * L_3 = V_0;
		NullCheck((MemberInfo_t *)L_2);
		ObjectU5BU5D_t2843939325* L_4 = VirtFuncInvoker2< ObjectU5BU5D_t2843939325*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, (MemberInfo_t *)L_2, (Type_t *)L_3, (bool)1);
		V_1 = (ObjectU5BU5D_t2843939325*)L_4;
		ObjectU5BU5D_t2843939325* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_6 = V_1;
		NullCheck(L_6);
		if (!(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = 0;
		RuntimeObject * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_003d;
	}

IL_0031:
	{
		V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)NULL, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_003d;
	}

IL_003d:
	{
		RuntimeObject * L_10 = V_2;
		return L_10;
	}
}
// T UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Component_GetComponent_TisRuntimeObject_m2906321015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CastHelper_1_t2613165452  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CastHelper_1_t2613165452 ));
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		intptr_t* L_2 = (intptr_t*)(&V_0)->get_address_of_onePointerFurtherThanT_1();
		intptr_t L_3;
		memset(&L_3, 0, sizeof(L_3));
		IntPtr__ctor_m3384658186((&L_3), (void*)(void*)L_2, /*hidden argument*/NULL);
		NullCheck((Component_t1923634451 *)__this);
		Component_GetComponentFastPath_m1180649031((Component_t1923634451 *)__this, (Type_t *)L_1, (intptr_t)L_3, /*hidden argument*/NULL);
		RuntimeObject * L_4 = (RuntimeObject *)(&V_0)->get_t_0();
		V_1 = (RuntimeObject *)L_4;
		goto IL_0032;
	}

IL_0032:
	{
		RuntimeObject * L_5 = V_1;
		return L_5;
	}
}
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (bool)0;
		bool L_0 = V_0;
		NullCheck((Component_t1923634451 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (Component_t1923634451 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t1923634451 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (RuntimeObject *)L_1;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject * L_2 = V_1;
		return L_2;
	}
}
// T UnityEngine.Component::GetComponentInChildren<System.Object>(System.Boolean)
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m3151737292_gshared (Component_t1923634451 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Component_GetComponentInChildren_TisRuntimeObject_m3151737292_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((Component_t1923634451 *)__this);
		Component_t1923634451 * L_3 = Component_GetComponentInChildren_m388868270((Component_t1923634451 *)__this, (Type_t *)L_1, (bool)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001d;
	}

IL_001d:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.Component::GetComponentInParent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_m3491943679_gshared (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Component_GetComponentInParent_TisRuntimeObject_m3491943679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		NullCheck((Component_t1923634451 *)__this);
		Component_t1923634451 * L_2 = Component_GetComponentInParent_m779177818((Component_t1923634451 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001c;
	}

IL_001c:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
extern "C"  RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m1594546529_gshared (RuntimeObject * __this /* static, unused */, BaseEventData_t3903027533 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ValidateEventData_TisRuntimeObject_m1594546529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		BaseEventData_t3903027533 * L_0 = ___data0;
		if (((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003b;
		}
	}
	{
		BaseEventData_t3903027533 * L_1 = ___data0;
		NullCheck((RuntimeObject *)L_1);
		Type_t * L_2 = Object_GetType_m88164663((RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m2556382932(NULL /*static, unused*/, (String_t*)_stringLiteral2964872255, (RuntimeObject *)L_2, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_6, (String_t*)L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6,ExecuteEvents_ValidateEventData_TisRuntimeObject_m1594546529_RuntimeMethod_var);
	}

IL_003b:
	{
		BaseEventData_t3903027533 * L_7 = ___data0;
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0051;
	}

IL_0051:
	{
		RuntimeObject * L_8 = V_0;
		return L_8;
	}
}
// T UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_AddComponent_TisRuntimeObject_m3469369570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)__this);
		Component_t1923634451 * L_2 = GameObject_AddComponent_m136524825((GameObject_t1113636619 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0021;
	}

IL_0021:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponent_TisRuntimeObject_m2049753423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CastHelper_1_t2613165452  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CastHelper_1_t2613165452 ));
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		intptr_t* L_2 = (intptr_t*)(&V_0)->get_address_of_onePointerFurtherThanT_1();
		intptr_t L_3;
		memset(&L_3, 0, sizeof(L_3));
		IntPtr__ctor_m3384658186((&L_3), (void*)(void*)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)__this);
		GameObject_GetComponentFastPath_m2620139331((GameObject_t1113636619 *)__this, (Type_t *)L_1, (intptr_t)L_3, /*hidden argument*/NULL);
		RuntimeObject * L_4 = (RuntimeObject *)(&V_0)->get_t_0();
		V_1 = (RuntimeObject *)L_4;
		goto IL_0032;
	}

IL_0032:
	{
		RuntimeObject * L_5 = V_1;
		return L_5;
	}
}
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m1513755678_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (bool)0;
		bool L_0 = V_0;
		NullCheck((GameObject_t1113636619 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (GameObject_t1113636619 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t1113636619 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (RuntimeObject *)L_1;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject * L_2 = V_1;
		return L_2;
	}
}
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>(System.Boolean)
extern "C"  RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m1310240902_gshared (GameObject_t1113636619 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentInChildren_TisRuntimeObject_m1310240902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_t1113636619 *)__this);
		Component_t1923634451 * L_3 = GameObject_GetComponentInChildren_m2567799249((GameObject_t1113636619 *)__this, (Type_t *)L_1, (bool)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001d;
	}

IL_001d:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___original0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_Instantiate_TisRuntimeObject_m2446893047_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___original0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_CheckNullArgument_m4237608654(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)_stringLiteral2475671027, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___original0;
		Object_t631007953 * L_2 = Object_Internal_CloneSingle_m1021157572(NULL /*static, unused*/, (Object_t631007953 *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1061214600_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___original0, Transform_t3600365921 * ___parent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_Instantiate_TisRuntimeObject_m1061214600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___original0;
		Transform_t3600365921 * L_1 = ___parent1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject *, Transform_t3600365921 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_0, (Transform_t3600365921 *)L_1, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (RuntimeObject *)L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform,System.Boolean)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1149750522_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___original0, Transform_t3600365921 * ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_Instantiate_TisRuntimeObject_m1149750522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___original0;
		Transform_t3600365921 * L_1 = ___parent1;
		bool L_2 = ___worldPositionStays2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_t631007953 * L_3 = Object_Instantiate_m4029422268(NULL /*static, unused*/, (Object_t631007953 *)L_0, (Transform_t3600365921 *)L_1, (bool)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___original0, Vector3_t3722313464  ___position1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_Instantiate_TisRuntimeObject_m1135049463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___original0;
		Vector3_t3722313464  L_1 = ___position1;
		Quaternion_t2301928331  L_2 = ___rotation2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_t631007953 * L_3 = Object_Instantiate_m2682941528(NULL /*static, unused*/, (Object_t631007953 *)L_0, (Vector3_t3722313464 )L_1, (Quaternion_t2301928331 )L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1193484509_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___original0, Vector3_t3722313464  ___position1, Quaternion_t2301928331  ___rotation2, Transform_t3600365921 * ___parent3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_Instantiate_TisRuntimeObject_m1193484509_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___original0;
		Vector3_t3722313464  L_1 = ___position1;
		Quaternion_t2301928331  L_2 = ___rotation2;
		Transform_t3600365921 * L_3 = ___parent3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_t631007953 * L_4 = Object_Instantiate_m2524886653(NULL /*static, unused*/, (Object_t631007953 *)L_0, (Vector3_t3722313464 )L_1, (Quaternion_t2301928331 )L_2, (Transform_t3600365921 *)L_3, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject * L_5 = V_0;
		return L_5;
	}
}
// T UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
extern "C"  RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared (RuntimeObject * __this /* static, unused */, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___path0;
		Object_t631007953 * L_3 = Resources_GetBuiltinResource_m3641967638(NULL /*static, unused*/, (Type_t *)L_1, (String_t*)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001c;
	}

IL_001c:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
extern "C"  RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		ScriptableObject_t2528358522 * L_2 = ScriptableObject_CreateInstance_m2611081756(NULL /*static, unused*/, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.UI.Dropdown::GetOrAddComponent<System.Object>(UnityEngine.GameObject)
extern "C"  RuntimeObject * Dropdown_GetOrAddComponent_TisRuntimeObject_m769901662_gshared (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dropdown_GetOrAddComponent_TisRuntimeObject_m769901662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___go0;
		NullCheck((GameObject_t1113636619 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (GameObject_t1113636619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t1113636619 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (RuntimeObject *)L_1;
		RuntimeObject * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, (Object_t631007953 *)L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		GameObject_t1113636619 * L_4 = ___go0;
		NullCheck((GameObject_t1113636619 *)L_4);
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (GameObject_t1113636619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((GameObject_t1113636619 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_5;
	}

IL_001f:
	{
		RuntimeObject * L_6 = V_0;
		V_1 = (RuntimeObject *)L_6;
		goto IL_0026;
	}

IL_0026:
	{
		RuntimeObject * L_7 = V_1;
		return L_7;
	}
}
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
extern "C"  ObjectU5BU5D_t2843939325* Array_FindAll_TisRuntimeObject_m3566631088_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, Predicate_1_t3905400288 * ___match1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_FindAll_TisRuntimeObject_m3566631088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	ObjectU5BU5D_t2843939325* V_3 = NULL;
	int32_t V_4 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_FindAll_TisRuntimeObject_m3566631088_RuntimeMethod_var);
	}

IL_0011:
	{
		Predicate_1_t3905400288 * L_2 = ___match1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, (String_t*)_stringLiteral461028519, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,Array_FindAll_TisRuntimeObject_m3566631088_RuntimeMethod_var);
	}

IL_0022:
	{
		V_0 = (int32_t)0;
		ObjectU5BU5D_t2843939325* L_4 = ___array0;
		NullCheck(L_4);
		V_1 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))));
		ObjectU5BU5D_t2843939325* L_5 = ___array0;
		V_3 = (ObjectU5BU5D_t2843939325*)L_5;
		V_4 = (int32_t)0;
		goto IL_005e;
	}

IL_0037:
	{
		ObjectU5BU5D_t2843939325* L_6 = V_3;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = (RuntimeObject *)L_9;
		Predicate_1_t3905400288 * L_10 = ___match1;
		RuntimeObject * L_11 = V_2;
		NullCheck((Predicate_1_t3905400288 *)L_10);
		bool L_12 = ((  bool (*) (Predicate_1_t3905400288 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Predicate_1_t3905400288 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_13 = V_1;
		int32_t L_14 = V_0;
		int32_t L_15 = (int32_t)L_14;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		RuntimeObject * L_16 = V_2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (RuntimeObject *)L_16);
	}

IL_0058:
	{
		int32_t L_17 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_005e:
	{
		int32_t L_18 = V_4;
		ObjectU5BU5D_t2843939325* L_19 = V_3;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_20 = V_0;
		((  void (*) (RuntimeObject * /* static, unused */, ObjectU5BU5D_t2843939325**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (ObjectU5BU5D_t2843939325**)(&V_1), (int32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		ObjectU5BU5D_t2843939325* L_21 = V_1;
		return L_21;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Object>(System.Object[])
extern "C"  ObjectU5BU5D_t2843939325* CustomAttributeData_UnboxValues_TisRuntimeObject_m160061819_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___values0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))));
		V_1 = (int32_t)0;
		goto IL_0023;
	}

IL_0010:
	{
		ObjectU5BU5D_t2843939325* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t2843939325* L_3 = ___values0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_7 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		ObjectU5BU5D_t2843939325* L_9 = ___values0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_10 = V_0;
		return L_10;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeNamedArgument>(System.Object[])
extern "C"  CustomAttributeNamedArgumentU5BU5D_t3710464795* CustomAttributeData_UnboxValues_TisCustomAttributeNamedArgument_t287865710_m2244692512_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___values0, const RuntimeMethod* method)
{
	CustomAttributeNamedArgumentU5BU5D_t3710464795* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = (CustomAttributeNamedArgumentU5BU5D_t3710464795*)((CustomAttributeNamedArgumentU5BU5D_t3710464795*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))));
		V_1 = (int32_t)0;
		goto IL_0023;
	}

IL_0010:
	{
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t2843939325* L_3 = ___values0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (CustomAttributeNamedArgument_t287865710 )((*(CustomAttributeNamedArgument_t287865710 *)((CustomAttributeNamedArgument_t287865710 *)UnBox(L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_7 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		ObjectU5BU5D_t2843939325* L_9 = ___values0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_10 = V_0;
		return L_10;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeTypedArgument>(System.Object[])
extern "C"  CustomAttributeTypedArgumentU5BU5D_t1465843424* CustomAttributeData_UnboxValues_TisCustomAttributeTypedArgument_t2723150157_m679789813_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___values0, const RuntimeMethod* method)
{
	CustomAttributeTypedArgumentU5BU5D_t1465843424* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = (CustomAttributeTypedArgumentU5BU5D_t1465843424*)((CustomAttributeTypedArgumentU5BU5D_t1465843424*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))));
		V_1 = (int32_t)0;
		goto IL_0023;
	}

IL_0010:
	{
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t2843939325* L_3 = ___values0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (CustomAttributeTypedArgument_t2723150157 )((*(CustomAttributeTypedArgument_t2723150157 *)((CustomAttributeTypedArgument_t2723150157 *)UnBox(L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_7 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		ObjectU5BU5D_t2843939325* L_9 = ___values0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_10 = V_0;
		return L_10;
	}
}
// T[] UnityEngine.Component::GetComponents<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponents_TisRuntimeObject_m539078962_gshared (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		NullCheck((Component_t1923634451 *)__this);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142((Component_t1923634451 *)__this, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)L_0);
		ObjectU5BU5D_t2843939325* L_1 = ((  ObjectU5BU5D_t2843939325* (*) (GameObject_t1113636619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t1113636619 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t2843939325*)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		ObjectU5BU5D_t2843939325* L_2 = V_0;
		return L_2;
	}
}
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m1308288322_gshared (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		NullCheck((Component_t1923634451 *)__this);
		ObjectU5BU5D_t2843939325* L_0 = ((  ObjectU5BU5D_t2843939325* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t1923634451 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t2843939325*)L_0;
		goto IL_000e;
	}

IL_000e:
	{
		ObjectU5BU5D_t2843939325* L_1 = V_0;
		return L_1;
	}
}
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m3825404836_gshared (Component_t1923634451 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		NullCheck((Component_t1923634451 *)__this);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142((Component_t1923634451 *)__this, /*hidden argument*/NULL);
		bool L_1 = ___includeInactive0;
		NullCheck((GameObject_t1113636619 *)L_0);
		ObjectU5BU5D_t2843939325* L_2 = ((  ObjectU5BU5D_t2843939325* (*) (GameObject_t1113636619 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t1113636619 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t2843939325*)L_2;
		goto IL_0013;
	}

IL_0013:
	{
		ObjectU5BU5D_t2843939325* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponents<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* GameObject_GetComponents_TisRuntimeObject_m1550324888_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponents_TisRuntimeObject_m1550324888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)__this);
		RuntimeArray * L_2 = GameObject_GetComponentsInternal_m4006738154((GameObject_t1113636619 *)__this, (Type_t *)L_1, (bool)1, (bool)0, (bool)1, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0021;
	}

IL_0021:
	{
		ObjectU5BU5D_t2843939325* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* GameObject_GetComponentsInChildren_TisRuntimeObject_m1982918030_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		NullCheck((GameObject_t1113636619 *)__this);
		ObjectU5BU5D_t2843939325* L_0 = ((  ObjectU5BU5D_t2843939325* (*) (GameObject_t1113636619 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t1113636619 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t2843939325*)L_0;
		goto IL_000e;
	}

IL_000e:
	{
		ObjectU5BU5D_t2843939325* L_1 = V_0;
		return L_1;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C"  ObjectU5BU5D_t2843939325* GameObject_GetComponentsInChildren_TisRuntimeObject_m2621777305_gshared (GameObject_t1113636619 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentsInChildren_TisRuntimeObject_m2621777305_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_t1113636619 *)__this);
		RuntimeArray * L_3 = GameObject_GetComponentsInternal_m4006738154((GameObject_t1113636619 *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0021;
	}

IL_0021:
	{
		ObjectU5BU5D_t2843939325* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  ObjectU5BU5D_t2843939325* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_m3566760165_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m576040980(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t3648964284 *)__this);
		ObjectU5BU5D_t2843939325* L_3 = ((  ObjectU5BU5D_t2843939325* (*) (Mesh_t3648964284 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t3648964284 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t2843939325*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  ObjectU5BU5D_t2843939325* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_m1538119140_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_0 = Mesh_get_canAccess_m2239225054((Mesh_t3648964284 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_2 = Mesh_HasChannel_m4256962133((Mesh_t3648964284 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3648964284 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m3084065604((Mesh_t3648964284 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_PrintErrorCantAccessChannel_m2109128075((Mesh_t3648964284 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		V_0 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0));
		goto IL_0048;
	}

IL_0048:
	{
		ObjectU5BU5D_t2843939325* L_8 = V_0;
		return L_8;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color32>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  Color32U5BU5D_t3850468773* Mesh_GetAllocArrayFromChannel_TisColor32_t2600501292_m3180365313_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Color32U5BU5D_t3850468773* V_0 = NULL;
	{
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_0 = Mesh_get_canAccess_m2239225054((Mesh_t3648964284 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_2 = Mesh_HasChannel_m4256962133((Mesh_t3648964284 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3648964284 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m3084065604((Mesh_t3648964284 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Color32U5BU5D_t3850468773*)((Color32U5BU5D_t3850468773*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_PrintErrorCantAccessChannel_m2109128075((Mesh_t3648964284 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		V_0 = (Color32U5BU5D_t3850468773*)((Color32U5BU5D_t3850468773*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0));
		goto IL_0048;
	}

IL_0048:
	{
		Color32U5BU5D_t3850468773* L_8 = V_0;
		return L_8;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  Vector2U5BU5D_t1457185986* Mesh_GetAllocArrayFromChannel_TisVector2_t2156229523_m1057679375_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector2U5BU5D_t1457185986* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m576040980(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t3648964284 *)__this);
		Vector2U5BU5D_t1457185986* L_3 = ((  Vector2U5BU5D_t1457185986* (*) (Mesh_t3648964284 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t3648964284 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector2U5BU5D_t1457185986*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2U5BU5D_t1457185986* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  Vector2U5BU5D_t1457185986* Mesh_GetAllocArrayFromChannel_TisVector2_t2156229523_m1394090975_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector2U5BU5D_t1457185986* V_0 = NULL;
	{
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_0 = Mesh_get_canAccess_m2239225054((Mesh_t3648964284 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_2 = Mesh_HasChannel_m4256962133((Mesh_t3648964284 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3648964284 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m3084065604((Mesh_t3648964284 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector2U5BU5D_t1457185986*)((Vector2U5BU5D_t1457185986*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_PrintErrorCantAccessChannel_m2109128075((Mesh_t3648964284 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		V_0 = (Vector2U5BU5D_t1457185986*)((Vector2U5BU5D_t1457185986*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0));
		goto IL_0048;
	}

IL_0048:
	{
		Vector2U5BU5D_t1457185986* L_8 = V_0;
		return L_8;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  Vector3U5BU5D_t1718750761* Mesh_GetAllocArrayFromChannel_TisVector3_t3722313464_m4289135201_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector3U5BU5D_t1718750761* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m576040980(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t3648964284 *)__this);
		Vector3U5BU5D_t1718750761* L_3 = ((  Vector3U5BU5D_t1718750761* (*) (Mesh_t3648964284 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t3648964284 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3U5BU5D_t1718750761*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3U5BU5D_t1718750761* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  Vector3U5BU5D_t1718750761* Mesh_GetAllocArrayFromChannel_TisVector3_t3722313464_m2332439905_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector3U5BU5D_t1718750761* V_0 = NULL;
	{
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_0 = Mesh_get_canAccess_m2239225054((Mesh_t3648964284 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_2 = Mesh_HasChannel_m4256962133((Mesh_t3648964284 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3648964284 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m3084065604((Mesh_t3648964284 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector3U5BU5D_t1718750761*)((Vector3U5BU5D_t1718750761*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_PrintErrorCantAccessChannel_m2109128075((Mesh_t3648964284 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		V_0 = (Vector3U5BU5D_t1718750761*)((Vector3U5BU5D_t1718750761*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0));
		goto IL_0048;
	}

IL_0048:
	{
		Vector3U5BU5D_t1718750761* L_8 = V_0;
		return L_8;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  Vector4U5BU5D_t934056436* Mesh_GetAllocArrayFromChannel_TisVector4_t3319028937_m3479135907_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector4U5BU5D_t934056436* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m576040980(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t3648964284 *)__this);
		Vector4U5BU5D_t934056436* L_3 = ((  Vector4U5BU5D_t934056436* (*) (Mesh_t3648964284 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t3648964284 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector4U5BU5D_t934056436*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector4U5BU5D_t934056436* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  Vector4U5BU5D_t934056436* Mesh_GetAllocArrayFromChannel_TisVector4_t3319028937_m1010044762_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector4U5BU5D_t934056436* V_0 = NULL;
	{
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_0 = Mesh_get_canAccess_m2239225054((Mesh_t3648964284 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_2 = Mesh_HasChannel_m4256962133((Mesh_t3648964284 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3648964284 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m3084065604((Mesh_t3648964284 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector4U5BU5D_t934056436*)((Vector4U5BU5D_t934056436*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_PrintErrorCantAccessChannel_m2109128075((Mesh_t3648964284 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		V_0 = (Vector4U5BU5D_t934056436*)((Vector4U5BU5D_t934056436*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0));
		goto IL_0048;
	}

IL_0048:
	{
		Vector4U5BU5D_t934056436* L_8 = V_0;
		return L_8;
	}
}
// TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
extern "C"  ObjectU5BU5D_t2843939325* Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, Converter_2_t2442480487 * ___converter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_RuntimeMethod_var);
	}

IL_0011:
	{
		Converter_2_t2442480487 * L_2 = ___converter1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, (String_t*)_stringLiteral879148213, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_RuntimeMethod_var);
	}

IL_0022:
	{
		ObjectU5BU5D_t2843939325* L_4 = ___array0;
		NullCheck(L_4);
		V_0 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))));
		V_1 = (int32_t)0;
		goto IL_004a;
	}

IL_0032:
	{
		ObjectU5BU5D_t2843939325* L_5 = V_0;
		int32_t L_6 = V_1;
		Converter_2_t2442480487 * L_7 = ___converter1;
		ObjectU5BU5D_t2843939325* L_8 = ___array0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck((Converter_2_t2442480487 *)L_7);
		RuntimeObject * L_12 = ((  RuntimeObject * (*) (Converter_2_t2442480487 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Converter_2_t2442480487 *)L_7, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RuntimeObject *)L_12);
		int32_t L_13 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_14 = V_1;
		ObjectU5BU5D_t2843939325* L_15 = ___array0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0032;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_16 = V_0;
		return L_16;
	}
}
// TSource System.Linq.Enumerable::First<System.DateTime>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  DateTime_t3738529785  Enumerable_First_TisDateTime_t3738529785_m995981923_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_First_TisDateTime_t3738529785_m995981923_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	DateTime_t3738529785  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.DateTime>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_3);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck((RuntimeObject*)L_5);
		DateTime_t3738529785  L_6 = InterfaceFuncInvoker1< DateTime_t3738529785 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.DateTime>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (int32_t)0);
		return L_6;
	}

IL_0026:
	{
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7,Enumerable_First_TisDateTime_t3738529785_m995981923_RuntimeMethod_var);
	}

IL_002c:
	{
		RuntimeObject* L_8 = ___source0;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.DateTime>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_8);
		V_1 = (RuntimeObject*)L_9;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			NullCheck((RuntimeObject*)L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
			if (!L_11)
			{
				goto IL_004a;
			}
		}

IL_003e:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck((RuntimeObject*)L_12);
			DateTime_t3738529785  L_13 = InterfaceFuncInvoker0< DateTime_t3738529785  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.DateTime>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_12);
			V_2 = (DateTime_t3738529785 )L_13;
			IL2CPP_LEAVE(0x62, FINALLY_004f);
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_005b;
			}
		}

IL_0055:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck((RuntimeObject*)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
		}

IL_005b:
		{
			IL2CPP_END_FINALLY(79)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005c:
	{
		InvalidOperationException_t56020091 * L_16 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16,Enumerable_First_TisDateTime_t3738529785_m995981923_RuntimeMethod_var);
	}

IL_0062:
	{
		DateTime_t3738529785  L_17 = V_2;
		return L_17;
	}
}
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  RuntimeObject * Enumerable_First_TisRuntimeObject_m4173419911_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_First_TisRuntimeObject_m4173419911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_3);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (int32_t)0);
		return L_6;
	}

IL_0026:
	{
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7,Enumerable_First_TisRuntimeObject_m4173419911_RuntimeMethod_var);
	}

IL_002c:
	{
		RuntimeObject* L_8 = ___source0;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_8);
		V_1 = (RuntimeObject*)L_9;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			NullCheck((RuntimeObject*)L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
			if (!L_11)
			{
				goto IL_004a;
			}
		}

IL_003e:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck((RuntimeObject*)L_12);
			RuntimeObject * L_13 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_12);
			V_2 = (RuntimeObject *)L_13;
			IL2CPP_LEAVE(0x62, FINALLY_004f);
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_005b;
			}
		}

IL_0055:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck((RuntimeObject*)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
		}

IL_005b:
		{
			IL2CPP_END_FINALLY(79)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005c:
	{
		InvalidOperationException_t56020091 * L_16 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16,Enumerable_First_TisRuntimeObject_m4173419911_RuntimeMethod_var);
	}

IL_0062:
	{
		RuntimeObject * L_17 = V_2;
		return L_17;
	}
}
// TSource System.Linq.Enumerable::Last<DataManager/SessionData>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  SessionData_t844877374  Enumerable_Last_TisSessionData_t844877374_m1492087251_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Last_TisSessionData_t844877374_m1492087251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	SessionData_t844877374  V_3;
	memset(&V_3, 0, sizeof(V_3));
	SessionData_t844877374  V_4;
	memset(&V_4, 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	SessionData_t844877374  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<DataManager/SessionData>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		InvalidOperationException_t56020091 * L_5 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,Enumerable_Last_TisSessionData_t844877374_m1492087251_RuntimeMethod_var);
	}

IL_0024:
	{
		RuntimeObject* L_6 = ___source0;
		V_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = V_1;
		NullCheck((RuntimeObject*)L_9);
		int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<DataManager/SessionData>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_9);
		NullCheck((RuntimeObject*)L_8);
		SessionData_t844877374  L_11 = InterfaceFuncInvoker1< SessionData_t844877374 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<DataManager/SessionData>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_8, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
		return L_11;
	}

IL_0040:
	{
		V_2 = (bool)1;
		il2cpp_codegen_initobj((&V_6), sizeof(SessionData_t844877374 ));
		SessionData_t844877374  L_12 = V_6;
		V_3 = (SessionData_t844877374 )L_12;
		RuntimeObject* L_13 = ___source0;
		NullCheck((RuntimeObject*)L_13);
		RuntimeObject* L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<DataManager/SessionData>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_13);
		V_5 = (RuntimeObject*)L_14;
	}

IL_0055:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0068;
		}

IL_005a:
		{
			RuntimeObject* L_15 = V_5;
			NullCheck((RuntimeObject*)L_15);
			SessionData_t844877374  L_16 = InterfaceFuncInvoker0< SessionData_t844877374  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<DataManager/SessionData>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_15);
			V_4 = (SessionData_t844877374 )L_16;
			SessionData_t844877374  L_17 = V_4;
			V_3 = (SessionData_t844877374 )L_17;
			V_2 = (bool)0;
		}

IL_0068:
		{
			RuntimeObject* L_18 = V_5;
			NullCheck((RuntimeObject*)L_18);
			bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
			if (L_19)
			{
				goto IL_005a;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x86, FINALLY_0079);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_20 = V_5;
			if (L_20)
			{
				goto IL_007e;
			}
		}

IL_007d:
		{
			IL2CPP_END_FINALLY(121)
		}

IL_007e:
		{
			RuntimeObject* L_21 = V_5;
			NullCheck((RuntimeObject*)L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_21);
			IL2CPP_END_FINALLY(121)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_JUMP_TBL(0x86, IL_0086)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0086:
	{
		bool L_22 = V_2;
		if (L_22)
		{
			goto IL_008e;
		}
	}
	{
		SessionData_t844877374  L_23 = V_3;
		return L_23;
	}

IL_008e:
	{
		InvalidOperationException_t56020091 * L_24 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24,Enumerable_Last_TisSessionData_t844877374_m1492087251_RuntimeMethod_var);
	}
}
// TSource System.Linq.Enumerable::Last<System.DateTime>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  DateTime_t3738529785  Enumerable_Last_TisDateTime_t3738529785_m1417534003_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Last_TisDateTime_t3738529785_m1417534003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	DateTime_t3738529785  V_3;
	memset(&V_3, 0, sizeof(V_3));
	DateTime_t3738529785  V_4;
	memset(&V_4, 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	DateTime_t3738529785  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.DateTime>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		InvalidOperationException_t56020091 * L_5 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,Enumerable_Last_TisDateTime_t3738529785_m1417534003_RuntimeMethod_var);
	}

IL_0024:
	{
		RuntimeObject* L_6 = ___source0;
		V_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = V_1;
		NullCheck((RuntimeObject*)L_9);
		int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.DateTime>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_9);
		NullCheck((RuntimeObject*)L_8);
		DateTime_t3738529785  L_11 = InterfaceFuncInvoker1< DateTime_t3738529785 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.DateTime>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_8, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
		return L_11;
	}

IL_0040:
	{
		V_2 = (bool)1;
		il2cpp_codegen_initobj((&V_6), sizeof(DateTime_t3738529785 ));
		DateTime_t3738529785  L_12 = V_6;
		V_3 = (DateTime_t3738529785 )L_12;
		RuntimeObject* L_13 = ___source0;
		NullCheck((RuntimeObject*)L_13);
		RuntimeObject* L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.DateTime>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_13);
		V_5 = (RuntimeObject*)L_14;
	}

IL_0055:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0068;
		}

IL_005a:
		{
			RuntimeObject* L_15 = V_5;
			NullCheck((RuntimeObject*)L_15);
			DateTime_t3738529785  L_16 = InterfaceFuncInvoker0< DateTime_t3738529785  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.DateTime>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_15);
			V_4 = (DateTime_t3738529785 )L_16;
			DateTime_t3738529785  L_17 = V_4;
			V_3 = (DateTime_t3738529785 )L_17;
			V_2 = (bool)0;
		}

IL_0068:
		{
			RuntimeObject* L_18 = V_5;
			NullCheck((RuntimeObject*)L_18);
			bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
			if (L_19)
			{
				goto IL_005a;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x86, FINALLY_0079);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_20 = V_5;
			if (L_20)
			{
				goto IL_007e;
			}
		}

IL_007d:
		{
			IL2CPP_END_FINALLY(121)
		}

IL_007e:
		{
			RuntimeObject* L_21 = V_5;
			NullCheck((RuntimeObject*)L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_21);
			IL2CPP_END_FINALLY(121)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_JUMP_TBL(0x86, IL_0086)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0086:
	{
		bool L_22 = V_2;
		if (L_22)
		{
			goto IL_008e;
		}
	}
	{
		DateTime_t3738529785  L_23 = V_3;
		return L_23;
	}

IL_008e:
	{
		InvalidOperationException_t56020091 * L_24 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24,Enumerable_Last_TisDateTime_t3738529785_m1417534003_RuntimeMethod_var);
	}
}
// TSource System.Linq.Enumerable::Last<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  RuntimeObject * Enumerable_Last_TisRuntimeObject_m2128274449_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Last_TisRuntimeObject_m2128274449_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		InvalidOperationException_t56020091 * L_5 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,Enumerable_Last_TisRuntimeObject_m2128274449_RuntimeMethod_var);
	}

IL_0024:
	{
		RuntimeObject* L_6 = ___source0;
		V_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = V_1;
		NullCheck((RuntimeObject*)L_9);
		int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_9);
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_11 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_8, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
		return L_11;
	}

IL_0040:
	{
		V_2 = (bool)1;
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject *));
		RuntimeObject * L_12 = V_6;
		V_3 = (RuntimeObject *)L_12;
		RuntimeObject* L_13 = ___source0;
		NullCheck((RuntimeObject*)L_13);
		RuntimeObject* L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_13);
		V_5 = (RuntimeObject*)L_14;
	}

IL_0055:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0068;
		}

IL_005a:
		{
			RuntimeObject* L_15 = V_5;
			NullCheck((RuntimeObject*)L_15);
			RuntimeObject * L_16 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_15);
			V_4 = (RuntimeObject *)L_16;
			RuntimeObject * L_17 = V_4;
			V_3 = (RuntimeObject *)L_17;
			V_2 = (bool)0;
		}

IL_0068:
		{
			RuntimeObject* L_18 = V_5;
			NullCheck((RuntimeObject*)L_18);
			bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
			if (L_19)
			{
				goto IL_005a;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x86, FINALLY_0079);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_20 = V_5;
			if (L_20)
			{
				goto IL_007e;
			}
		}

IL_007d:
		{
			IL2CPP_END_FINALLY(121)
		}

IL_007e:
		{
			RuntimeObject* L_21 = V_5;
			NullCheck((RuntimeObject*)L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_21);
			IL2CPP_END_FINALLY(121)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_JUMP_TBL(0x86, IL_0086)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0086:
	{
		bool L_22 = V_2;
		if (L_22)
		{
			goto IL_008e;
		}
	}
	{
		RuntimeObject * L_23 = V_3;
		return L_23;
	}

IL_008e:
	{
		InvalidOperationException_t56020091 * L_24 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24,Enumerable_Last_TisRuntimeObject_m2128274449_RuntimeMethod_var);
	}
}
// TSource System.Linq.Enumerable::Last<System.Single>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  float Enumerable_Last_TisSingle_t1397266774_m2502546029_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Last_TisSingle_t1397266774_m2502546029_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	RuntimeObject* V_5 = NULL;
	float V_6 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Single>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		InvalidOperationException_t56020091 * L_5 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,Enumerable_Last_TisSingle_t1397266774_m2502546029_RuntimeMethod_var);
	}

IL_0024:
	{
		RuntimeObject* L_6 = ___source0;
		V_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = V_1;
		NullCheck((RuntimeObject*)L_9);
		int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Single>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_9);
		NullCheck((RuntimeObject*)L_8);
		float L_11 = InterfaceFuncInvoker1< float, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Single>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_8, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
		return L_11;
	}

IL_0040:
	{
		V_2 = (bool)1;
		il2cpp_codegen_initobj((&V_6), sizeof(float));
		float L_12 = V_6;
		V_3 = (float)L_12;
		RuntimeObject* L_13 = ___source0;
		NullCheck((RuntimeObject*)L_13);
		RuntimeObject* L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_13);
		V_5 = (RuntimeObject*)L_14;
	}

IL_0055:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0068;
		}

IL_005a:
		{
			RuntimeObject* L_15 = V_5;
			NullCheck((RuntimeObject*)L_15);
			float L_16 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_15);
			V_4 = (float)L_16;
			float L_17 = V_4;
			V_3 = (float)L_17;
			V_2 = (bool)0;
		}

IL_0068:
		{
			RuntimeObject* L_18 = V_5;
			NullCheck((RuntimeObject*)L_18);
			bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
			if (L_19)
			{
				goto IL_005a;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x86, FINALLY_0079);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_20 = V_5;
			if (L_20)
			{
				goto IL_007e;
			}
		}

IL_007d:
		{
			IL2CPP_END_FINALLY(121)
		}

IL_007e:
		{
			RuntimeObject* L_21 = V_5;
			NullCheck((RuntimeObject*)L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_21);
			IL2CPP_END_FINALLY(121)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_JUMP_TBL(0x86, IL_0086)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0086:
	{
		bool L_22 = V_2;
		if (L_22)
		{
			goto IL_008e;
		}
	}
	{
		float L_23 = V_3;
		return L_23;
	}

IL_008e:
	{
		InvalidOperationException_t56020091 * L_24 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24,Enumerable_Last_TisSingle_t1397266774_m2502546029_RuntimeMethod_var);
	}
}
// TSource[] System.Linq.Enumerable::ToArray<DataManager/SessionData>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  SessionDataU5BU5D_t1570286347* Enumerable_ToArray_TisSessionData_t844877374_m282521475_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	SessionDataU5BU5D_t1570286347* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<DataManager/SessionData>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_3);
		V_1 = (SessionDataU5BU5D_t1570286347*)((SessionDataU5BU5D_t1570286347*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_4));
		RuntimeObject* L_5 = V_0;
		SessionDataU5BU5D_t1570286347* L_6 = V_1;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker2< SessionDataU5BU5D_t1570286347*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<DataManager/SessionData>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (SessionDataU5BU5D_t1570286347*)L_6, (int32_t)0);
		SessionDataU5BU5D_t1570286347* L_7 = V_1;
		return L_7;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___source0;
		List_1_t2316952116 * L_9 = (List_1_t2316952116 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (List_1_t2316952116 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_9, (RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		NullCheck((List_1_t2316952116 *)L_9);
		SessionDataU5BU5D_t1570286347* L_10 = ((  SessionDataU5BU5D_t1570286347* (*) (List_1_t2316952116 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t2316952116 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return L_10;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.DateTime>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  DateTimeU5BU5D_t1184652292* Enumerable_ToArray_TisDateTime_t3738529785_m1737531767_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	DateTimeU5BU5D_t1184652292* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.DateTime>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_3);
		V_1 = (DateTimeU5BU5D_t1184652292*)((DateTimeU5BU5D_t1184652292*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_4));
		RuntimeObject* L_5 = V_0;
		DateTimeU5BU5D_t1184652292* L_6 = V_1;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker2< DateTimeU5BU5D_t1184652292*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.DateTime>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (DateTimeU5BU5D_t1184652292*)L_6, (int32_t)0);
		DateTimeU5BU5D_t1184652292* L_7 = V_1;
		return L_7;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___source0;
		List_1_t915637231 * L_9 = (List_1_t915637231 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (List_1_t915637231 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_9, (RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		NullCheck((List_1_t915637231 *)L_9);
		DateTimeU5BU5D_t1184652292* L_10 = ((  DateTimeU5BU5D_t1184652292* (*) (List_1_t915637231 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t915637231 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return L_10;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  Int32U5BU5D_t385246372* Enumerable_ToArray_TisInt32_t2950945753_m3074856039_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	Int32U5BU5D_t385246372* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_3);
		V_1 = (Int32U5BU5D_t385246372*)((Int32U5BU5D_t385246372*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_4));
		RuntimeObject* L_5 = V_0;
		Int32U5BU5D_t385246372* L_6 = V_1;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker2< Int32U5BU5D_t385246372*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (Int32U5BU5D_t385246372*)L_6, (int32_t)0);
		Int32U5BU5D_t385246372* L_7 = V_1;
		return L_7;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___source0;
		List_1_t128053199 * L_9 = (List_1_t128053199 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (List_1_t128053199 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_9, (RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		NullCheck((List_1_t128053199 *)L_9);
		Int32U5BU5D_t385246372* L_10 = ((  Int32U5BU5D_t385246372* (*) (List_1_t128053199 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t128053199 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return L_10;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  ObjectU5BU5D_t2843939325* Enumerable_ToArray_TisRuntimeObject_m2312436077_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_3);
		V_1 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_4));
		RuntimeObject* L_5 = V_0;
		ObjectU5BU5D_t2843939325* L_6 = V_1;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker2< ObjectU5BU5D_t2843939325*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (ObjectU5BU5D_t2843939325*)L_6, (int32_t)0);
		ObjectU5BU5D_t2843939325* L_7 = V_1;
		return L_7;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___source0;
		List_1_t257213610 * L_9 = (List_1_t257213610 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (List_1_t257213610 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_9, (RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		NullCheck((List_1_t257213610 *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = ((  ObjectU5BU5D_t2843939325* (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t257213610 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return L_10;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
extern "C"  GameObject_t1113636619 * ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m3266560969_gshared (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___root0, BaseEventData_t3903027533 * ___eventData1, EventFunction_1_t1764640198 * ___callbackFunction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m3266560969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_t3600365921 * V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		List_1_t777473367 * L_1 = ((ExecuteEvents_t3484638744_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		ExecuteEvents_GetEventChain_m2404658789(NULL /*static, unused*/, (GameObject_t1113636619 *)L_0, (RuntimeObject*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)0;
		goto IL_0043;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		List_1_t777473367 * L_2 = ((ExecuteEvents_t3484638744_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		int32_t L_3 = V_0;
		NullCheck((List_1_t777473367 *)L_2);
		Transform_t3600365921 * L_4 = List_1_get_Item_m2402360903((List_1_t777473367 *)L_2, (int32_t)L_3, /*hidden argument*/List_1_get_Item_m2402360903_RuntimeMethod_var);
		V_1 = (Transform_t3600365921 *)L_4;
		Transform_t3600365921 * L_5 = V_1;
		NullCheck((Component_t1923634451 *)L_5);
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_5, /*hidden argument*/NULL);
		BaseEventData_t3903027533 * L_7 = ___eventData1;
		EventFunction_1_t1764640198 * L_8 = ___callbackFunction2;
		bool L_9 = ((  bool (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, BaseEventData_t3903027533 *, EventFunction_1_t1764640198 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (GameObject_t1113636619 *)L_6, (BaseEventData_t3903027533 *)L_7, (EventFunction_1_t1764640198 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		Transform_t3600365921 * L_10 = V_1;
		NullCheck((Component_t1923634451 *)L_10);
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_10, /*hidden argument*/NULL);
		V_2 = (GameObject_t1113636619 *)L_11;
		goto IL_005a;
	}

IL_003e:
	{
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		List_1_t777473367 * L_14 = ((ExecuteEvents_t3484638744_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		NullCheck((List_1_t777473367 *)L_14);
		int32_t L_15 = List_1_get_Count_m3543896146((List_1_t777473367 *)L_14, /*hidden argument*/List_1_get_Count_m3543896146_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		V_2 = (GameObject_t1113636619 *)NULL;
		goto IL_005a;
	}

IL_005a:
	{
		GameObject_t1113636619 * L_16 = V_2;
		return L_16;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
extern "C"  GameObject_t1113636619 * ExecuteEvents_GetEventHandler_TisRuntimeObject_m3687647312_gshared (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventHandler_TisRuntimeObject_m3687647312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Transform_t3600365921 * V_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		V_0 = (GameObject_t1113636619 *)NULL;
		goto IL_0058;
	}

IL_0014:
	{
		GameObject_t1113636619 * L_2 = ___root0;
		NullCheck((GameObject_t1113636619 *)L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730((GameObject_t1113636619 *)L_2, /*hidden argument*/NULL);
		V_1 = (Transform_t3600365921 *)L_3;
		goto IL_0045;
	}

IL_0020:
	{
		Transform_t3600365921 * L_4 = V_1;
		NullCheck((Component_t1923634451 *)L_4);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		bool L_6 = ((  bool (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (GameObject_t1113636619 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		Transform_t3600365921 * L_7 = V_1;
		NullCheck((Component_t1923634451 *)L_7);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_7, /*hidden argument*/NULL);
		V_0 = (GameObject_t1113636619 *)L_8;
		goto IL_0058;
	}

IL_003d:
	{
		Transform_t3600365921 * L_9 = V_1;
		NullCheck((Transform_t3600365921 *)L_9);
		Transform_t3600365921 * L_10 = Transform_get_parent_m835071599((Transform_t3600365921 *)L_9, /*hidden argument*/NULL);
		V_1 = (Transform_t3600365921 *)L_10;
	}

IL_0045:
	{
		Transform_t3600365921 * L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, (Object_t631007953 *)L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0020;
		}
	}
	{
		V_0 = (GameObject_t1113636619 *)NULL;
		goto IL_0058;
	}

IL_0058:
	{
		GameObject_t1113636619 * L_13 = V_0;
		return L_13;
	}
}
