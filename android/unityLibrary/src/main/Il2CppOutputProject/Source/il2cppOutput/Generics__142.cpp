#include "pch-cpp.hpp"





template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct CollectionPool_2_t52F904C53EDF28249537FE2D26BA96E1EA03DF70;
struct CollectionPool_2_t010265BE2E6280164CBDAF3A6FA76A68D5023DAE;
struct HashSetPool_1_t292B975119AA34E5926F2EB3FC031334A496C1F9;
struct HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED;
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
struct IEqualityComparer_1_t5445BA980CDDC03DF94C7CBCA48FC9D661C5F008;
struct IEqualityComparer_1_t0FD77626ECC867C51E80375D213A11E13F49043A;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_tEA6D87A5AB670819FF91305D215B209552281584;
struct IEqualityComparer_1_tE6B9DA002A35D6F58856181BEAC9DAC9D371E3E3;
struct IEqualityComparer_1_t6FE30305ED686025427F2E3AF3C177EA120CF9A5;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct ObjectPool_1_tD696C5601DC9639451687274BC17113C94B67590;
struct ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20;
struct ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150;
struct ObjectPool_1_t1BF53E631D2563ED2CFA4ED38919CC939FA2951C;
struct SetElementProperty_t289C8D92DD4214A46FC3E74E8FE7C6EDE8B1C0C9;
struct SetPropertyBagBase_2_t535BA9B7846680B8FE7F234EEED4881B81612A78;
struct SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF;
struct Stack_1_t2CB236599BE1BE25AA9FC0C3F10A27404E72E223;
struct UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409;
struct UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259;
struct SlotU5BU5D_t69CC52DFE07B8DA1D9030713E2D5308DE7E3C8DF;
struct SlotU5BU5D_tFD52E53D3D49D5B46CDB157540D91BA6413FF4C4;
struct SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7;
struct SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0;
struct SlotU5BU5D_t1E1D50DD434168A53A88988DE7E903942C0A86A8;
struct SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C;
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_MathematicsModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Collections[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_RenderPipelines_Core_Runtime[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0F19052576940E4C653C32FF5A8A81D0ABB73F97;
IL2CPP_EXTERN_C String_t* _stringLiteral325E9B626B8674DB0D0742BC125F644ED8FFFFCB;
IL2CPP_EXTERN_C String_t* _stringLiteralE8697FF635A0BB21392DD8D91CB3D0303148C10A;
IL2CPP_EXTERN_C const RuntimeMethod* Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* math_ceilpow2_m6873BD56787A2362EE6780DD54A9847561B11629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* math_lzcnt_m4BDBABBBAA2F9B553AE1155DFBDB552E23BB2F73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* math_lzcnt_mCD77943688E8533316BC0238E5B9344B6433E3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* math_min_m0D183243301588F5000801E35B451374CD10DFC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ByteU2A_t7A03686A8034AF92EF1EA2D09B280EF590D1174D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HashSetPropertyBag_1_t7F15EDFB949AF3B211F77A906E5919696ABFCAC8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32U2A_t49A648948B5A176D1945F61EB07A64274F3A9D47_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* LongDoubleUnion_t17011746129284B81F310F56E20D549A6F6710D0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArray_1_t6E2931CC2E1AA6B9F666FF4270BD177E2114779B_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_t0FF56B0CA81E481CEA50A59D56491E25FF6104C7  : public RuntimeObject
{
};
struct CollectionPool_2_t52F904C53EDF28249537FE2D26BA96E1EA03DF70  : public RuntimeObject
{
};
struct HashSetPool_1_tCDE4475FE632D305A8B40C161E3E5D5E24FB73B2  : public RuntimeObject
{
};
struct HashSetPool_1_t703447E09A777B65F717CFC90E4FB4CA574AADA6  : public RuntimeObject
{
};
struct HashSet_1_t45A6B1395B0B04F5FFA274B3B6CAF12FF1CD9D67  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t69CC52DFE07B8DA1D9030713E2D5308DE7E3C8DF* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t079A33BC313C233180D2B4A99D6B9DDC5AE4EBCB  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tFD52E53D3D49D5B46CDB157540D91BA6413FF4C4* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t88F867DE8E0319AAADB295DD64B668188685B40B  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t1E1D50DD434168A53A88988DE7E903942C0A86A8* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150  : public RuntimeObject
{
	Stack_1_t2CB236599BE1BE25AA9FC0C3F10A27404E72E223* ___m_Stack;
	UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409* ___m_ActionOnGet;
	UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409* ___m_ActionOnRelease;
	bool ___m_CollectionCheck;
	int32_t ___U3CcountAllU3Ek__BackingField;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct HashSetPool_1_t292B975119AA34E5926F2EB3FC031334A496C1F9  : public CollectionPool_2_t52F904C53EDF28249537FE2D26BA96E1EA03DF70
{
};
struct PooledObject_t432123EBFF2674A3A6835051E8FF82B14E1A757A 
{
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___m_ToReturn;
	ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150* ___m_Pool;
};
typedef Il2CppFullySharedGenericStruct PooledObject_t09583705438F90A72D9CE4141A4126E91452D86C;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
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
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct LongDoubleUnion_t17011746129284B81F310F56E20D549A6F6710D0 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___longValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___longValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___doubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_forAlignmentOnly;
		};
	};
};
struct HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B 
{
	uint8_t* ___Ptr;
	int32_t* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC 
{
	uint8_t* ___Ptr;
	Il2CppFullySharedGenericStruct* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct PropertyBag_1_t474B4314A78E9CC97DD8CF6E3ADACCDDAFB0841A  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct SetPropertyBagBase_2_t535BA9B7846680B8FE7F234EEED4881B81612A78  : public PropertyBag_1_t474B4314A78E9CC97DD8CF6E3ADACCDDAFB0841A
{
	SetElementProperty_t289C8D92DD4214A46FC3E74E8FE7C6EDE8B1C0C9* ___m_Property;
};
struct UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED  : public SetPropertyBagBase_2_t535BA9B7846680B8FE7F234EEED4881B81612A78
{
};
struct U3CU3Ec_t0FF56B0CA81E481CEA50A59D56491E25FF6104C7_StaticFields
{
	U3CU3Ec_t0FF56B0CA81E481CEA50A59D56491E25FF6104C7* ___U3CU3E9;
};
struct CollectionPool_2_t52F904C53EDF28249537FE2D26BA96E1EA03DF70_StaticFields
{
	ObjectPool_1_tD696C5601DC9639451687274BC17113C94B67590* ___s_Pool;
};
struct HashSetPool_1_tCDE4475FE632D305A8B40C161E3E5D5E24FB73B2_StaticFields
{
	ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20* ___s_Pool;
};
struct HashSetPool_1_t703447E09A777B65F717CFC90E4FB4CA574AADA6_StaticFields
{
	ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150* ___s_Pool;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_CalcCapacityCeilPow2_m9E11DDA5C0E69FAD3BB1FB92BB81D4B3CFFBADC5_gshared_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HashMapHelper_1_get_IsCreated_mFD6A2975F04E9C84A9886543625D8E8BCA71E398_gshared_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HashMapHelper_1_get_IsEmpty_mE0B74C2611A6136BF9AB2B9588804B95871588A4_gshared_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Clear_m08F7FBA8BE840C96DBB073B5BFBC33BC2745AEBE_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetBucketSize_m2A7DED1791178844328490156FD5FF62C0684DDD_gshared (int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t HashMapHelper_1_CalculateDataSize_m391E36E42648D8D3005D220873B0F2245C662BEA_gshared (int32_t ___0_capacity, int32_t ___1_bucketCapacity, int32_t ___2_sizeOfTValue, int64_t* ___3_outKeyOffset, int64_t* ___4_outNextOffset, int64_t* ___5_outBucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Init_m927F4885890F61CA66BFC81AB69DC7930051AD6C_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_capacity, int32_t ___1_sizeOfValueT, int32_t ___2_minGrowth, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisIl2CppFullySharedGenericStruct_mC5E4D92A647D08D8B3B7CCF667B40D0ECD8ACB83_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Dispose_mB9A6E998C327368FCA81FFF52F90700CE2557703_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_ResizeExact_m1D828032D51F4A98A49FCBD93E69F6B6266C052B_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_newCapacity, int32_t ___1_newBucketCapacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Resize_mC3DBB7AC2D19CA5947C27ABAF144A44EDC4CBC9F_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_newCapacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_TryAdd_mEA7DF62C16993CE3B2D2C3C6484114D7C2526580_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, Il2CppFullySharedGenericStruct* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_TrimExcess_m11F65CDF4D06B72940C6253AB3E86A6EA8E3962E_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetCount_mC24710C302A59B9751759EF7F815AF1E624D02B7_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetBucket_mE1172E80C9E112134E2C0611F1583E709528EFB1_gshared_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, Il2CppFullySharedGenericStruct* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_Find_m230136C2D470770694EF15C9C0F2637F623E02BD_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_gshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_TryRemove_mF0EBAE2241D4A51420C87201DDFF160F83CC271B_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashMapHelper_1_MoveNextSearch_m5B2FF1D7B41C3BA34939652BB8BB2629DD498626_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HashMapHelper_1_MoveNext_mC9D28D7DE9EB2A526DFD790777D5E118D33E86BC_gshared_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m4005EA9C29BA1075D9F591B6CBD82B5D22255763_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_gshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_gshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 HashMapHelper_1_GetKeyArray_m8C41E3030AFCF52994AB7EAFD3A1CBD600466A9D_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashMapHelper_1_CheckIndexOutOfBounds_mDCEA1C2E040CE097BFFA931B9AEE32C201AA467E_gshared_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_idx, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__ctor_mB9B0C907EB0FDEAA649B3788BC46DE923AD22B45_gshared (CollectionPool_2_t010265BE2E6280164CBDAF3A6FA76A68D5023DAE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Get_mF6DDC7B7BBA77052B2DBE758F17EA702929D0085_gshared (ObjectPool_1_t1BF53E631D2563ED2CFA4ED38919CC939FA2951C* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Get_m744C3025D734204ECBD95997AA3344F10ADC1123_gshared (ObjectPool_1_t1BF53E631D2563ED2CFA4ED38919CC939FA2951C* __this, Il2CppFullySharedGenericAny* ___0_v, PooledObject_t09583705438F90A72D9CE4141A4126E91452D86C* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m1F005F27628EA5018E3B5AB7ECA4FDDEDE1295AB_gshared (ObjectPool_1_t1BF53E631D2563ED2CFA4ED38919CC939FA2951C* __this, Il2CppFullySharedGenericAny ___0_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_mDEEC30EDF8D8348A8348CC3F5769FAB691CB11C4_gshared (ObjectPool_1_t1BF53E631D2563ED2CFA4ED38919CC939FA2951C* __this, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259* ___0_actionOnGet, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259* ___1_actionOnRelease, bool ___2_collectionCheck, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyBagBase_2__ctor_m649EC64E71E2806820C40AECE38739D04311DE79_gshared (SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF* __this, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_ceilpow2_m6873BD56787A2362EE6780DD54A9847561B11629_inline (int32_t ___0_x, const RuntimeMethod* method) ;
inline int32_t HashMapHelper_1_CalcCapacityCeilPow2_m9E11DDA5C0E69FAD3BB1FB92BB81D4B3CFFBADC5_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, int32_t, const RuntimeMethod*))HashMapHelper_1_CalcCapacityCeilPow2_m9E11DDA5C0E69FAD3BB1FB92BB81D4B3CFFBADC5_gshared_inline)(__this, ___0_capacity, method);
}
inline bool HashMapHelper_1_get_IsCreated_mFD6A2975F04E9C84A9886543625D8E8BCA71E398_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, const RuntimeMethod*))HashMapHelper_1_get_IsCreated_mFD6A2975F04E9C84A9886543625D8E8BCA71E398_gshared_inline)(__this, method);
}
inline bool HashMapHelper_1_get_IsEmpty_mE0B74C2611A6136BF9AB2B9588804B95871588A4_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, const RuntimeMethod*))HashMapHelper_1_get_IsEmpty_mE0B74C2611A6136BF9AB2B9588804B95871588A4_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B (void* ___0_destination, uint8_t ___1_value, int64_t ___2_size, const RuntimeMethod* method) ;
inline void HashMapHelper_1_Clear_m08F7FBA8BE840C96DBB073B5BFBC33BC2745AEBE (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method)
{
	((  void (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, const RuntimeMethod*))HashMapHelper_1_Clear_m08F7FBA8BE840C96DBB073B5BFBC33BC2745AEBE_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_lzcnt_m4BDBABBBAA2F9B553AE1155DFBDB552E23BB2F73_inline (int32_t ___0_x, const RuntimeMethod* method) ;
inline int32_t HashMapHelper_1_GetBucketSize_m2A7DED1791178844328490156FD5FF62C0684DDD (int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, const RuntimeMethod*))HashMapHelper_1_GetBucketSize_m2A7DED1791178844328490156FD5FF62C0684DDD_gshared)(___0_capacity, method);
}
inline int64_t HashMapHelper_1_CalculateDataSize_m391E36E42648D8D3005D220873B0F2245C662BEA (int32_t ___0_capacity, int32_t ___1_bucketCapacity, int32_t ___2_sizeOfTValue, int64_t* ___3_outKeyOffset, int64_t* ___4_outNextOffset, int64_t* ___5_outBucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int32_t, int32_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))HashMapHelper_1_CalculateDataSize_m391E36E42648D8D3005D220873B0F2245C662BEA_gshared)(___0_capacity, ___1_bucketCapacity, ___2_sizeOfTValue, ___3_outKeyOffset, ___4_outNextOffset, ___5_outBucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5 (int64_t ___0_size, int32_t ___1_align, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) ;
inline void HashMapHelper_1_Init_m927F4885890F61CA66BFC81AB69DC7930051AD6C (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_capacity, int32_t ___1_sizeOfValueT, int32_t ___2_minGrowth, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	((  void (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, int32_t, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))HashMapHelper_1_Init_m927F4885890F61CA66BFC81AB69DC7930051AD6C_gshared)(__this, ___0_capacity, ___1_sizeOfValueT, ___2_minGrowth, ___3_allocator, method);
}
inline void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271 (uint8_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (uint8_t*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Unmanaged_Free_TisIl2CppFullySharedGenericStruct_mC5E4D92A647D08D8B3B7CCF667B40D0ECD8ACB83_gshared)(___0_pointer, ___1_allocator, method);
}
inline void HashMapHelper_1_Dispose_mB9A6E998C327368FCA81FFF52F90700CE2557703 (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method)
{
	((  void (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, const RuntimeMethod*))HashMapHelper_1_Dispose_mB9A6E998C327368FCA81FFF52F90700CE2557703_gshared)(__this, method);
}
inline int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC_m4CFEDB246A6DFBCC7F08F33E4943183C36118937 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Unmanaged_Free_TisHashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC_mA4BE8F35021AE81424071BFDF8D84175D5F6E3A2 (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Unmanaged_Free_TisIl2CppFullySharedGenericStruct_mC5E4D92A647D08D8B3B7CCF667B40D0ECD8ACB83_gshared)(___0_pointer, ___1_allocator, method);
}
inline void HashMapHelper_1_ResizeExact_m1D828032D51F4A98A49FCBD93E69F6B6266C052B (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_newCapacity, int32_t ___1_newBucketCapacity, const RuntimeMethod* method)
{
	((  void (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, int32_t, int32_t, const RuntimeMethod*))HashMapHelper_1_ResizeExact_m1D828032D51F4A98A49FCBD93E69F6B6266C052B_gshared)(__this, ___0_newCapacity, ___1_newBucketCapacity, method);
}
inline void HashMapHelper_1_Resize_mC3DBB7AC2D19CA5947C27ABAF144A44EDC4CBC9F (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_newCapacity, const RuntimeMethod* method)
{
	((  void (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, int32_t, const RuntimeMethod*))HashMapHelper_1_Resize_mC3DBB7AC2D19CA5947C27ABAF144A44EDC4CBC9F_gshared)(__this, ___0_newCapacity, method);
}
inline int32_t HashMapHelper_1_TryAdd_mEA7DF62C16993CE3B2D2C3C6484114D7C2526580 (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, Il2CppFullySharedGenericStruct* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))HashMapHelper_1_TryAdd_mEA7DF62C16993CE3B2D2C3C6484114D7C2526580_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline void HashMapHelper_1_TrimExcess_m11F65CDF4D06B72940C6253AB3E86A6EA8E3962E (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method)
{
	((  void (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, const RuntimeMethod*))HashMapHelper_1_TrimExcess_m11F65CDF4D06B72940C6253AB3E86A6EA8E3962E_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
inline int32_t HashMapHelper_1_GetCount_mC24710C302A59B9751759EF7F815AF1E624D02B7 (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, const RuntimeMethod*))HashMapHelper_1_GetCount_mC24710C302A59B9751759EF7F815AF1E624D02B7_gshared)(__this, method);
}
inline int32_t HashMapHelper_1_GetBucket_mE1172E80C9E112134E2C0611F1583E709528EFB1_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, Il2CppFullySharedGenericStruct* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))HashMapHelper_1_GetBucket_mE1172E80C9E112134E2C0611F1583E709528EFB1_gshared_inline)(__this, ___0_key, method);
}
inline int32_t HashMapHelper_1_Find_m230136C2D470770694EF15C9C0F2637F623E02BD (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))HashMapHelper_1_Find_m230136C2D470770694EF15C9C0F2637F623E02BD_gshared)((HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*)__this, ___0_key, method);
}
inline void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_gshared_inline)(___0_destination, ___1_index, (Il2CppFullySharedGenericAny)___2_value, method);
}
inline void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
inline int32_t HashMapHelper_1_TryRemove_mF0EBAE2241D4A51420C87201DDFF160F83CC271B (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))HashMapHelper_1_TryRemove_mF0EBAE2241D4A51420C87201DDFF160F83CC271B_gshared)((HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*)__this, ___0_key, method);
}
inline bool HashMapHelper_1_MoveNextSearch_m5B2FF1D7B41C3BA34939652BB8BB2629DD498626 (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method)
{
	return ((  bool (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))HashMapHelper_1_MoveNextSearch_m5B2FF1D7B41C3BA34939652BB8BB2629DD498626_gshared)(__this, ___0_bucketIndex, ___1_nextIndex, ___2_index, method);
}
inline bool HashMapHelper_1_MoveNext_mC9D28D7DE9EB2A526DFD790777D5E118D33E86BC_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method)
{
	return ((  bool (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))HashMapHelper_1_MoveNext_mC9D28D7DE9EB2A526DFD790777D5E118D33E86BC_gshared_inline)(__this, ___0_bucketIndex, ___1_nextIndex, ___2_index, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m4005EA9C29BA1075D9F591B6CBD82B5D22255763 (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m4005EA9C29BA1075D9F591B6CBD82B5D22255763_gshared)(___0_length, ___1_allocator, ___2_options, method);
}
inline int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_gshared_inline)(__this, method);
}
inline void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct, const RuntimeMethod*))NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_gshared_inline)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_index, ___1_value, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 HashMapHelper_1_GetKeyArray_m8C41E3030AFCF52994AB7EAFD3A1CBD600466A9D (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))HashMapHelper_1_GetKeyArray_m8C41E3030AFCF52994AB7EAFD3A1CBD600466A9D_gshared)(__this, ___0_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
inline void HashMapHelper_1_CheckIndexOutOfBounds_mDCEA1C2E040CE097BFFA931B9AEE32C201AA467E_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_idx, const RuntimeMethod* method)
{
	((  void (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, int32_t, const RuntimeMethod*))HashMapHelper_1_CheckIndexOutOfBounds_mDCEA1C2E040CE097BFFA931B9AEE32C201AA467E_gshared_inline)(__this, ___0_idx, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void CollectionPool_2__ctor_mAABEACF317EC7EECBFC0456C64FD5FCED27F92DC (CollectionPool_2_t52F904C53EDF28249537FE2D26BA96E1EA03DF70* __this, const RuntimeMethod* method)
{
	((  void (*) (CollectionPool_2_t52F904C53EDF28249537FE2D26BA96E1EA03DF70*, const RuntimeMethod*))CollectionPool_2__ctor_mB9B0C907EB0FDEAA649B3788BC46DE923AD22B45_gshared)(__this, method);
}
inline HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ObjectPool_1_Get_m23D52E8180BD0D409EC687C2289EBA230E16D96A (ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150* __this, const RuntimeMethod* method)
{
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* il2cppRetVal;
	((  void (*) (ObjectPool_1_t1BF53E631D2563ED2CFA4ED38919CC939FA2951C*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))ObjectPool_1_Get_mF6DDC7B7BBA77052B2DBE758F17EA702929D0085_gshared)((ObjectPool_1_t1BF53E631D2563ED2CFA4ED38919CC939FA2951C*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline PooledObject_t432123EBFF2674A3A6835051E8FF82B14E1A757A ObjectPool_1_Get_m4115816D2DE85165CF8D78947DC6663230D0C574 (ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87** ___0_v, const RuntimeMethod* method)
{
	PooledObject_t432123EBFF2674A3A6835051E8FF82B14E1A757A il2cppRetVal;
	((  void (*) (ObjectPool_1_t1BF53E631D2563ED2CFA4ED38919CC939FA2951C*, Il2CppFullySharedGenericAny*, PooledObject_t09583705438F90A72D9CE4141A4126E91452D86C*, const RuntimeMethod*))ObjectPool_1_Get_m744C3025D734204ECBD95997AA3344F10ADC1123_gshared)((ObjectPool_1_t1BF53E631D2563ED2CFA4ED38919CC939FA2951C*)__this, (Il2CppFullySharedGenericAny*)___0_v, (PooledObject_t09583705438F90A72D9CE4141A4126E91452D86C*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void ObjectPool_1_Release_mED23CEC0DB73254E08F5D82A5F43298CE54BDE98 (ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_element, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t1BF53E631D2563ED2CFA4ED38919CC939FA2951C*, Il2CppFullySharedGenericAny, const RuntimeMethod*))ObjectPool_1_Release_m1F005F27628EA5018E3B5AB7ECA4FDDEDE1295AB_gshared)((ObjectPool_1_t1BF53E631D2563ED2CFA4ED38919CC939FA2951C*)__this, (Il2CppFullySharedGenericAny)___0_element, method);
}
inline void UnityAction_1__ctor_m438887D98CC716F4FA73B0BC87997B55361534C4 (UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ObjectPool_1__ctor_m56A4B02DD4747A849CEA8CF443EAB5AA053CCF2E (ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150* __this, UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409* ___0_actionOnGet, UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409* ___1_actionOnRelease, bool ___2_collectionCheck, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150*, UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409*, UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409*, bool, const RuntimeMethod*))ObjectPool_1__ctor_mDEEC30EDF8D8348A8348CC3F5769FAB691CB11C4_gshared)(__this, ___0_actionOnGet, ___1_actionOnRelease, ___2_collectionCheck, method);
}
inline void HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120 (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared)(__this, method);
}
inline void SetPropertyBagBase_2__ctor_mBC63BADE70EFC95DA72703DD39A8EF3E1F0130B3 (SetPropertyBagBase_2_t535BA9B7846680B8FE7F234EEED4881B81612A78* __this, const RuntimeMethod* method)
{
	((  void (*) (SetPropertyBagBase_2_t535BA9B7846680B8FE7F234EEED4881B81612A78*, const RuntimeMethod*))SetPropertyBagBase_2__ctor_m649EC64E71E2806820C40AECE38739D04311DE79_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_lzcnt_mCD77943688E8533316BC0238E5B9344B6433E3C0_inline (uint32_t ___0_x, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_CalcCapacityCeilPow2_m9E11DDA5C0E69FAD3BB1FB92BB81D4B3CFFBADC5_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_capacity));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32596));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32597));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32598));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32599));
		int32_t L_0 = __this->___Count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32600));
		int32_t L_1;
		L_1 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(1, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32600));
		int32_t L_2 = ___0_capacity;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32601));
		int32_t L_3;
		L_3 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32601));
		___0_capacity = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32602));
		int32_t L_4 = ___0_capacity;
		int32_t L_5 = __this->___Log2MinGrowth;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32603));
		int32_t L_6;
		L_6 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(L_4, ((int32_t)(1<<((int32_t)(L_5&((int32_t)31))))), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32603));
		V_0 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32604));
		int32_t L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32605));
		int32_t L_8;
		L_8 = math_ceilpow2_m6873BD56787A2362EE6780DD54A9847561B11629_inline(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32605));
		V_1 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32606));
		int32_t L_9 = V_1;
		V_2 = L_9;
		goto IL_0032;
	}

IL_0032:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32607));
		int32_t L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t HashMapHelper_1_CalcCapacityCeilPow2_m9E11DDA5C0E69FAD3BB1FB92BB81D4B3CFFBADC5_AdjustorThunk (RuntimeObject* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC>(__this);
	int32_t _returnValue;
	_returnValue = HashMapHelper_1_CalcCapacityCeilPow2_m9E11DDA5C0E69FAD3BB1FB92BB81D4B3CFFBADC5_inline(_thisAdjusted, ___0_capacity, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetBucketSize_m2A7DED1791178844328490156FD5FF62C0684DDD_gshared (int32_t ___0_capacity, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_capacity));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32608));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32609));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32610));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32611));
		int32_t L_0 = ___0_capacity;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, 2));
		goto IL_0007;
	}

IL_0007:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32612));
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashMapHelper_1_get_IsCreated_mFD6A2975F04E9C84A9886543625D8E8BCA71E398_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32613));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32614));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32615));
		uint8_t* L_0 = __this->___Ptr;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool HashMapHelper_1_get_IsCreated_mFD6A2975F04E9C84A9886543625D8E8BCA71E398_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC>(__this);
	bool _returnValue;
	_returnValue = HashMapHelper_1_get_IsCreated_mFD6A2975F04E9C84A9886543625D8E8BCA71E398_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashMapHelper_1_get_IsEmpty_mE0B74C2611A6136BF9AB2B9588804B95871588A4_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32616));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32617));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32618));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32619));
		bool L_0;
		L_0 = HashMapHelper_1_get_IsCreated_mFD6A2975F04E9C84A9886543625D8E8BCA71E398_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32619));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->___Count;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		return (bool)G_B3_0;
	}
}
IL2CPP_EXTERN_C  bool HashMapHelper_1_get_IsEmpty_mE0B74C2611A6136BF9AB2B9588804B95871588A4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC>(__this);
	bool _returnValue;
	_returnValue = HashMapHelper_1_get_IsEmpty_mE0B74C2611A6136BF9AB2B9588804B95871588A4_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Clear_m08F7FBA8BE840C96DBB073B5BFBC33BC2745AEBE_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32620));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32621));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32622));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32623));
		int32_t* L_0 = __this->___Buckets;
		int32_t L_1 = __this->___BucketCapacity;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32624));
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_0, (uint8_t)((int32_t)255), ((int64_t)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32624));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32625));
		int32_t* L_4 = __this->___Next;
		int32_t L_5 = __this->___Capacity;
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32626));
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_4, (uint8_t)((int32_t)255), ((int64_t)il2cpp_codegen_multiply(L_6, L_7)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32626));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32627));
		__this->___Count = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32628));
		__this->___FirstFreeIdx = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32629));
		__this->___AllocatedIndex = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32630));
		return;
	}
}
IL2CPP_EXTERN_C  void HashMapHelper_1_Clear_m08F7FBA8BE840C96DBB073B5BFBC33BC2745AEBE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC>(__this);
	HashMapHelper_1_Clear_m08F7FBA8BE840C96DBB073B5BFBC33BC2745AEBE(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Init_m927F4885890F61CA66BFC81AB69DC7930051AD6C_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_capacity, int32_t ___1_sizeOfValueT, int32_t ___2_minGrowth, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_capacity), (&___1_sizeOfValueT), (&___2_minGrowth), (&___3_allocator));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32631));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32632));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32633));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32634));
		__this->___Count = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32635));
		int32_t L_0 = ___2_minGrowth;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32636));
		int32_t L_1;
		L_1 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(1, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32636));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32637));
		int32_t L_2;
		L_2 = math_lzcnt_m4BDBABBBAA2F9B553AE1155DFBDB552E23BB2F73_inline(((int32_t)il2cpp_codegen_subtract(L_1, 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32637));
		uint8_t L_3 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_2)),NULL));
		__this->___Log2MinGrowth = (int32_t)L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32638));
		int32_t L_4 = ___0_capacity;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32639));
		int32_t L_5;
		L_5 = HashMapHelper_1_CalcCapacityCeilPow2_m9E11DDA5C0E69FAD3BB1FB92BB81D4B3CFFBADC5_inline(__this, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32639));
		___0_capacity = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32640));
		int32_t L_6 = ___0_capacity;
		__this->___Capacity = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32641));
		int32_t L_7 = ___0_capacity;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32642));
		int32_t L_8;
		L_8 = HashMapHelper_1_GetBucketSize_m2A7DED1791178844328490156FD5FF62C0684DDD(L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32642));
		__this->___BucketCapacity = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32643));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_9 = ___3_allocator;
		__this->___Allocator = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32644));
		int32_t L_10 = ___1_sizeOfValueT;
		__this->___SizeOfTValue = L_10;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32645));
		int32_t L_11 = ___0_capacity;
		int32_t L_12 = __this->___BucketCapacity;
		int32_t L_13 = ___1_sizeOfValueT;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32646));
		int64_t L_14;
		L_14 = HashMapHelper_1_CalculateDataSize_m391E36E42648D8D3005D220873B0F2245C662BEA(L_11, L_12, L_13, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32646));
		V_3 = L_14;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32647));
		int64_t L_15 = V_3;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_16 = ___3_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32648));
		void* L_17;
		L_17 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_15, ((int32_t)64), L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32648));
		__this->___Ptr = (uint8_t*)L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32649));
		uint8_t* L_18 = __this->___Ptr;
		int64_t L_19 = V_0;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_19,NULL));
		__this->___Keys = (Il2CppFullySharedGenericStruct*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, L_20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32650));
		uint8_t* L_21 = __this->___Ptr;
		int64_t L_22 = V_1;
		intptr_t L_23 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_22,NULL));
		__this->___Next = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, L_23));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32651));
		uint8_t* L_24 = __this->___Ptr;
		int64_t L_25 = V_2;
		intptr_t L_26 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_25,NULL));
		__this->___Buckets = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, L_26));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32652));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32653));
		HashMapHelper_1_Clear_m08F7FBA8BE840C96DBB073B5BFBC33BC2745AEBE(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32653));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32654));
		return;
	}
}
IL2CPP_EXTERN_C  void HashMapHelper_1_Init_m927F4885890F61CA66BFC81AB69DC7930051AD6C_AdjustorThunk (RuntimeObject* __this, int32_t ___0_capacity, int32_t ___1_sizeOfValueT, int32_t ___2_minGrowth, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC>(__this);
	HashMapHelper_1_Init_m927F4885890F61CA66BFC81AB69DC7930051AD6C(_thisAdjusted, ___0_capacity, ___1_sizeOfValueT, ___2_minGrowth, ___3_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Dispose_mB9A6E998C327368FCA81FFF52F90700CE2557703_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32655));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32656));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32657));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32658));
		uint8_t* L_0 = __this->___Ptr;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = __this->___Allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32659));
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_0, L_1, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32659));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32660));
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___Ptr = (uint8_t*)L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32661));
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___Keys = (Il2CppFullySharedGenericStruct*)L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32662));
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___Next = (int32_t*)L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32663));
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___Buckets = (int32_t*)L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32664));
		__this->___Count = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32665));
		__this->___BucketCapacity = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32666));
		return;
	}
}
IL2CPP_EXTERN_C  void HashMapHelper_1_Dispose_mB9A6E998C327368FCA81FFF52F90700CE2557703_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC>(__this);
	HashMapHelper_1_Dispose_mB9A6E998C327368FCA81FFF52F90700CE2557703(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* HashMapHelper_1_Alloc_mA587387A73A1ABBDF140977263E65406EB478C9B_gshared (int32_t ___0_capacity, int32_t ___1_sizeOfValueT, int32_t ___2_minGrowth, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* V_0 = NULL;
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* V_1 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_capacity), (&___1_sizeOfValueT), (&___2_minGrowth), (&___3_allocator));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32667));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32668));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32669));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32670));
		uint32_t L_0 = sizeof(HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC);
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_0,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32671));
		int32_t L_2;
		L_2 = UnsafeUtility_AlignOf_TisHashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC_m4CFEDB246A6DFBCC7F08F33E4943183C36118937(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32671));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32672));
		void* L_4;
		L_4 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_1, L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32672));
		V_0 = (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*)L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32673));
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_5 = V_0;
		int32_t L_6 = ___0_capacity;
		int32_t L_7 = ___1_sizeOfValueT;
		int32_t L_8 = ___2_minGrowth;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_9 = ___3_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32674));
		HashMapHelper_1_Init_m927F4885890F61CA66BFC81AB69DC7930051AD6C((HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*)L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32674));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32675));
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_10 = V_0;
		V_1 = L_10;
		goto IL_0023;
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32676));
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Free_m1ED84E39838BC07764D22979A69F466B5437B4B4_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* ___0_data, const RuntimeMethod* method) 
{
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32677));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32678));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32679));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32680));
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_0 = ___0_data;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32681));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32682));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32683));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32684));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8697FF635A0BB21392DD8D91CB3D0303148C10A)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32684));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32685));
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_4 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32686));
		HashMapHelper_1_Dispose_mB9A6E998C327368FCA81FFF52F90700CE2557703((HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*)L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32686));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32687));
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_5 = ___0_data;
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_6 = ___0_data;
		NullCheck(L_6);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = L_6->___Allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32688));
		Unmanaged_Free_TisHashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC_mA4BE8F35021AE81424071BFDF8D84175D5F6E3A2(L_5, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32688));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32689));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Resize_mC3DBB7AC2D19CA5947C27ABAF144A44EDC4CBC9F_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_newCapacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_newCapacity));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32690));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32691));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32692));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32693));
		int32_t L_0 = ___0_newCapacity;
		int32_t L_1 = __this->___Count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32694));
		int32_t L_2;
		L_2 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32694));
		___0_newCapacity = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32695));
		int32_t L_3 = ___0_newCapacity;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32696));
		int32_t L_4;
		L_4 = HashMapHelper_1_GetBucketSize_m2A7DED1791178844328490156FD5FF62C0684DDD(L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32696));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32697));
		int32_t L_5;
		L_5 = math_ceilpow2_m6873BD56787A2362EE6780DD54A9847561B11629_inline(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32697));
		V_0 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32698));
		int32_t L_6 = __this->___Capacity;
		int32_t L_7 = ___0_newCapacity;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_8 = __this->___BucketCapacity;
		int32_t L_9 = V_0;
		G_B3_0 = ((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 0;
	}

IL_0030:
	{
		V_1 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32699));
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0037;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32700));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32701));
		goto IL_0040;
	}

IL_0037:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32702));
		int32_t L_11 = ___0_newCapacity;
		int32_t L_12 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32703));
		HashMapHelper_1_ResizeExact_m1D828032D51F4A98A49FCBD93E69F6B6266C052B(__this, L_11, L_12, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32703));
	}

IL_0040:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32704));
		return;
	}
}
IL2CPP_EXTERN_C  void HashMapHelper_1_Resize_mC3DBB7AC2D19CA5947C27ABAF144A44EDC4CBC9F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_newCapacity, const RuntimeMethod* method)
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC>(__this);
	HashMapHelper_1_Resize_mC3DBB7AC2D19CA5947C27ABAF144A44EDC4CBC9F(_thisAdjusted, ___0_newCapacity, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_ResizeExact_m1D828032D51F4A98A49FCBD93E69F6B6266C052B_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_newCapacity, int32_t ___1_newBucketCapacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU2A_t7A03686A8034AF92EF1EA2D09B280EF590D1174D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U2A_t49A648948B5A176D1945F61EB07A64274F3A9D47_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15));
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	uint8_t* V_4 = NULL;
	Il2CppFullySharedGenericStruct* V_5 = NULL;
	int32_t* V_6 = NULL;
	int32_t* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_newCapacity), (&___1_newBucketCapacity));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), (&V_7), (&V_8), (&V_9), (&V_10), (&V_11), (&V_12));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32705));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32706));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32707));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32708));
		int32_t L_0 = ___0_newCapacity;
		int32_t L_1 = ___1_newBucketCapacity;
		int32_t L_2 = __this->___SizeOfTValue;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32709));
		int64_t L_3;
		L_3 = HashMapHelper_1_CalculateDataSize_m391E36E42648D8D3005D220873B0F2245C662BEA(L_0, L_1, L_2, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32709));
		V_3 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32710));
		uint8_t* L_4 = __this->___Ptr;
		V_4 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32711));
		Il2CppFullySharedGenericStruct* L_5 = __this->___Keys;
		V_5 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32712));
		int32_t* L_6 = __this->___Next;
		V_6 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32713));
		int32_t* L_7 = __this->___Buckets;
		V_7 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32714));
		int32_t L_8 = __this->___BucketCapacity;
		V_8 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32715));
		int64_t L_9 = V_3;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_10 = __this->___Allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32716));
		void* L_11;
		L_11 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_9, ((int32_t)64), L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32716));
		__this->___Ptr = (uint8_t*)L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32717));
		uint8_t* L_12 = __this->___Ptr;
		int64_t L_13 = V_0;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_13,NULL));
		__this->___Keys = (Il2CppFullySharedGenericStruct*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, L_14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32718));
		uint8_t* L_15 = __this->___Ptr;
		int64_t L_16 = V_1;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_16,NULL));
		__this->___Next = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_17));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32719));
		uint8_t* L_18 = __this->___Ptr;
		int64_t L_19 = V_2;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_19,NULL));
		__this->___Buckets = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, L_20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32720));
		int32_t L_21 = ___0_newCapacity;
		__this->___Capacity = L_21;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32721));
		int32_t L_22 = ___1_newBucketCapacity;
		__this->___BucketCapacity = L_22;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32722));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32723));
		HashMapHelper_1_Clear_m08F7FBA8BE840C96DBB073B5BFBC33BC2745AEBE(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32723));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32724));
		V_9 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32725));
		int32_t L_23 = V_8;
		V_10 = L_23;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32726));
		goto IL_010a;
	}

IL_009c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32727));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32728));
		int32_t* L_24 = V_7;
		int32_t L_25 = V_9;
		intptr_t L_26 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_25,NULL));
		int32_t L_27 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(L_26, 4)))));
		V_11 = L_27;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32729));
		goto IL_00f5;
	}

IL_00aa:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32730));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32731));
		Il2CppFullySharedGenericStruct* L_28 = V_5;
		int32_t L_29 = V_11;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		uint32_t L_31 = SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32732));
		int32_t L_32;
		L_32 = HashMapHelper_1_TryAdd_mEA7DF62C16993CE3B2D2C3C6484114D7C2526580(__this, (Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, (int32_t)L_31)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32732));
		V_12 = L_32;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32733));
		uint8_t* L_33 = __this->___Ptr;
		int32_t L_34 = __this->___SizeOfTValue;
		int32_t L_35 = V_12;
		uint8_t* L_36 = V_4;
		int32_t L_37 = __this->___SizeOfTValue;
		int32_t L_38 = V_11;
		int32_t L_39 = __this->___SizeOfTValue;
		int64_t L_40 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_39,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32734));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_33, ((int32_t)il2cpp_codegen_multiply(L_34, L_35)))), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_36, ((int32_t)il2cpp_codegen_multiply(L_37, L_38)))), L_40, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32734));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32735));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32736));
		int32_t* L_41 = V_6;
		int32_t L_42 = V_11;
		intptr_t L_43 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_42,NULL));
		int32_t L_44 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_41, ((intptr_t)il2cpp_codegen_multiply(L_43, 4)))));
		V_11 = L_44;
	}

IL_00f5:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32737));
		int32_t L_45 = V_11;
		V_13 = (bool)((((int32_t)((((int32_t)L_45) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32738));
		bool L_46 = V_13;
		if (L_46)
		{
			goto IL_00aa;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32739));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32740));
		int32_t L_47 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_010a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32741));
		int32_t L_48 = V_9;
		int32_t L_49 = V_10;
		V_14 = (bool)((((int32_t)L_48) < ((int32_t)L_49))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32742));
		bool L_50 = V_14;
		if (L_50)
		{
			goto IL_009c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32743));
		uint8_t* L_51 = V_4;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_52 = __this->___Allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32744));
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_51, L_52, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32744));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32745));
		return;
	}
}
IL2CPP_EXTERN_C  void HashMapHelper_1_ResizeExact_m1D828032D51F4A98A49FCBD93E69F6B6266C052B_AdjustorThunk (RuntimeObject* __this, int32_t ___0_newCapacity, int32_t ___1_newBucketCapacity, const RuntimeMethod* method)
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC>(__this);
	HashMapHelper_1_ResizeExact_m1D828032D51F4A98A49FCBD93E69F6B6266C052B(_thisAdjusted, ___0_newCapacity, ___1_newBucketCapacity, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_TrimExcess_m11F65CDF4D06B72940C6253AB3E86A6EA8E3962E_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32746));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32747));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32748));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32749));
		int32_t L_0 = __this->___Count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32750));
		int32_t L_1;
		L_1 = HashMapHelper_1_CalcCapacityCeilPow2_m9E11DDA5C0E69FAD3BB1FB92BB81D4B3CFFBADC5_inline(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32750));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32751));
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32752));
		int32_t L_4;
		L_4 = HashMapHelper_1_GetBucketSize_m2A7DED1791178844328490156FD5FF62C0684DDD(L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32752));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32753));
		HashMapHelper_1_ResizeExact_m1D828032D51F4A98A49FCBD93E69F6B6266C052B(__this, L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32753));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32754));
		return;
	}
}
IL2CPP_EXTERN_C  void HashMapHelper_1_TrimExcess_m11F65CDF4D06B72940C6253AB3E86A6EA8E3962E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC>(__this);
	HashMapHelper_1_TrimExcess_m11F65CDF4D06B72940C6253AB3E86A6EA8E3962E(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t HashMapHelper_1_CalculateDataSize_m391E36E42648D8D3005D220873B0F2245C662BEA_gshared (int32_t ___0_capacity, int32_t ___1_bucketCapacity, int32_t ___2_sizeOfTValue, int64_t* ___3_outKeyOffset, int64_t* ___4_outNextOffset, int64_t* ___5_outBucketOffset, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15));
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	int64_t V_7 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_capacity), (&___1_bucketCapacity), (&___2_sizeOfTValue), (&___3_outKeyOffset), (&___4_outNextOffset), (&___5_outBucketOffset));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32755));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32756));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32757));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32758));
		uint32_t L_0 = SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA;
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_0,NULL));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32759));
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_1 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32760));
		int32_t L_3 = ___2_sizeOfTValue;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5 = ___0_capacity;
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_4, L_6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32761));
		int64_t L_7 = V_0;
		int32_t L_8 = ___0_capacity;
		int64_t L_9 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_8,NULL));
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_7, L_9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32762));
		int64_t L_10 = V_1;
		int32_t L_11 = ___0_capacity;
		int64_t L_12 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_11,NULL));
		V_4 = ((int64_t)il2cpp_codegen_multiply(L_10, L_12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32763));
		int64_t L_13 = V_1;
		int32_t L_14 = ___1_bucketCapacity;
		int64_t L_15 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_14,NULL));
		V_5 = ((int64_t)il2cpp_codegen_multiply(L_13, L_15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32764));
		int64_t L_16 = V_2;
		int64_t L_17 = V_3;
		int64_t L_18 = V_4;
		int64_t L_19 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_16, L_17)), L_18)), L_19));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32765));
		int64_t* L_20 = ___3_outKeyOffset;
		int64_t L_21 = V_2;
		il2cpp_codegen_stind<int64_t>((int64_t*)L_20, (int64_t)L_21);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32766));
		int64_t* L_22 = ___4_outNextOffset;
		int64_t* L_23 = ___3_outKeyOffset;
		int64_t L_24 = il2cpp_codegen_ldind<int64_t, int64_t>(L_23);
		int64_t L_25 = V_3;
		il2cpp_codegen_stind<int64_t>((int64_t*)L_22, (int64_t)((int64_t)il2cpp_codegen_add(L_24, L_25)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32767));
		int64_t* L_26 = ___5_outBucketOffset;
		int64_t* L_27 = ___4_outNextOffset;
		int64_t L_28 = il2cpp_codegen_ldind<int64_t, int64_t>(L_27);
		int64_t L_29 = V_4;
		il2cpp_codegen_stind<int64_t>((int64_t*)L_26, (int64_t)((int64_t)il2cpp_codegen_add(L_28, L_29)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32768));
		int64_t L_30 = V_6;
		V_7 = L_30;
		goto IL_0047;
	}

IL_0047:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32769));
		int64_t L_31 = V_7;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetCount_mC24710C302A59B9751759EF7F815AF1E624D02B7_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32770));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32771));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32772));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32773));
		int32_t L_0 = __this->___AllocatedIndex;
		V_1 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32774));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32775));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32776));
		V_2 = 0;
		goto IL_0057;
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32777));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32778));
		int32_t L_2 = __this->___FirstFreeIdx;
		V_3 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32779));
		goto IL_0034;
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32780));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32781));
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32782));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32783));
		int32_t* L_4 = __this->___Next;
		int32_t L_5 = V_3;
		intptr_t L_6 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_5,NULL));
		int32_t L_7 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(L_6, 4)))));
		V_3 = L_7;
	}

IL_0034:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32784));
		int32_t L_8 = V_3;
		V_4 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32785));
		bool L_9 = V_4;
		if (L_9)
		{
			goto IL_0021;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32786));
		int32_t L_10 = __this->___Capacity;
		int32_t L_11 = __this->___AllocatedIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32787));
		int32_t L_12;
		L_12 = math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline(L_10, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32787));
		int32_t L_13 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, L_13));
		goto IL_0057;
	}

IL_0057:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32788));
		int32_t L_14 = V_2;
		return L_14;
	}
}
IL2CPP_EXTERN_C  int32_t HashMapHelper_1_GetCount_mC24710C302A59B9751759EF7F815AF1E624D02B7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC>(__this);
	int32_t _returnValue;
	_returnValue = HashMapHelper_1_GetCount_mC24710C302A59B9751759EF7F815AF1E624D02B7(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetBucket_mE1172E80C9E112134E2C0611F1583E709528EFB1_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, Il2CppFullySharedGenericStruct* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15));
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	memset(V_0, 0, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	int32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_key));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32789));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32790));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32791));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32792));
		Il2CppFullySharedGenericStruct* L_0 = ___0_key;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32793));
		Il2CppConstrainedCallData L_3;
		Il2CppMethodPointer L_4 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19), (void*)(Il2CppFullySharedGenericStruct*)V_0, &L_3, L_2);
		typedef int32_t ( *func_L_5)(void*,const RuntimeMethod*);
		int32_t L_6 = ((func_L_5)L_4)(L_3.thisPtr,L_3.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32793));
		uint64_t L_7 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8 = __this->___BucketCapacity;
		int64_t L_9 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_8, 1)),NULL));
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_7&L_9)),NULL));
		V_1 = L_10;
		goto IL_0024;
	}

IL_0024:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32794));
		int32_t L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t HashMapHelper_1_GetBucket_mE1172E80C9E112134E2C0611F1583E709528EFB1_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_key, const RuntimeMethod* method)
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC>(__this);
	int32_t _returnValue;
	_returnValue = HashMapHelper_1_GetBucket_mE1172E80C9E112134E2C0611F1583E709528EFB1_inline(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_TryAdd_mEA7DF62C16993CE3B2D2C3C6484114D7C2526580_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, Il2CppFullySharedGenericStruct* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U2A_t49A648948B5A176D1945F61EB07A64274F3A9D47_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	const Il2CppFullySharedGenericStruct L_28 = L_1;
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	const Il2CppFullySharedGenericStruct L_29 = L_2;
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_key));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1), (&V_2), (&V_3), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32795));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32796));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32797));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32798));
		Il2CppFullySharedGenericStruct* L_0 = ___0_key;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32799));
		int32_t L_3;
		L_3 = HashMapHelper_1_Find_m230136C2D470770694EF15C9C0F2637F623E02BD(__this, il2cpp_codegen_memcpy(L_2, L_1, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32799));
		V_0 = (bool)((((int32_t)(-1)) == ((int32_t)L_3))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32800));
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_010f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32801));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32802));
		int32_t L_5 = __this->___AllocatedIndex;
		int32_t L_6 = __this->___Capacity;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_7 = __this->___FirstFreeIdx;
		G_B4_0 = ((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B4_0 = 0;
	}

IL_0032:
	{
		V_4 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32803));
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0079;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32804));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32805));
		int32_t L_9 = __this->___Capacity;
		V_6 = (bool)((((int32_t)L_9) == ((int32_t)((int32_t)536870912)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32806));
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32807));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32808));
		V_7 = (-1);
		goto IL_0114;
	}

IL_0055:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32809));
		int32_t L_11 = __this->___Capacity;
		int32_t L_12 = __this->___Log2MinGrowth;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32810));
		int32_t L_13;
		L_13 = HashMapHelper_1_CalcCapacityCeilPow2_m9E11DDA5C0E69FAD3BB1FB92BB81D4B3CFFBADC5_inline(__this, ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)(1<<((int32_t)(L_12&((int32_t)31))))))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32810));
		V_5 = L_13;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32811));
		int32_t L_14 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32812));
		HashMapHelper_1_Resize_mC3DBB7AC2D19CA5947C27ABAF144A44EDC4CBC9F(__this, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32812));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32813));
	}

IL_0079:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32814));
		int32_t L_15 = __this->___FirstFreeIdx;
		V_1 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32815));
		int32_t L_16 = V_1;
		V_8 = (bool)((((int32_t)((((int32_t)L_16) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32816));
		bool L_17 = V_8;
		if (!L_17)
		{
			goto IL_00a3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32817));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32818));
		int32_t* L_18 = __this->___Next;
		int32_t L_19 = V_1;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		__this->___FirstFreeIdx = L_21;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32819));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32820));
		goto IL_00ba;
	}

IL_00a3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32821));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32822));
		int32_t L_22 = __this->___AllocatedIndex;
		V_9 = L_22;
		int32_t L_23 = V_9;
		__this->___AllocatedIndex = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_24 = V_9;
		V_1 = L_24;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32823));
	}

IL_00ba:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32824));
		Il2CppFullySharedGenericStruct* L_25 = __this->___Keys;
		int32_t L_26 = V_1;
		Il2CppFullySharedGenericStruct* L_27 = ___0_key;
		il2cpp_codegen_memcpy(L_28, L_27, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32825));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline((void*)L_25, L_26, il2cpp_codegen_memcpy(L_29, L_28, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32825));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32826));
		Il2CppFullySharedGenericStruct* L_30 = ___0_key;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32827));
		int32_t L_31;
		L_31 = HashMapHelper_1_GetBucket_mE1172E80C9E112134E2C0611F1583E709528EFB1_inline(__this, L_30, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32827));
		V_3 = L_31;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32828));
		int32_t* L_32 = __this->___Next;
		V_2 = L_32;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32829));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_1;
		intptr_t L_35 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_34,NULL));
		int32_t* L_36 = __this->___Buckets;
		int32_t L_37 = V_3;
		intptr_t L_38 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_37,NULL));
		int32_t L_39 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(L_38, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(L_35, 4)))), (int32_t)L_39);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32830));
		int32_t* L_40 = __this->___Buckets;
		int32_t L_41 = V_3;
		intptr_t L_42 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_41,NULL));
		int32_t L_43 = V_1;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(L_42, 4)))), (int32_t)L_43);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32831));
		int32_t L_44 = __this->___Count;
		__this->___Count = ((int32_t)il2cpp_codegen_add(L_44, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32832));
		int32_t L_45 = V_1;
		V_7 = L_45;
		goto IL_0114;
	}

IL_010f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32833));
		V_7 = (-1);
		goto IL_0114;
	}

IL_0114:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32834));
		int32_t L_46 = V_7;
		return L_46;
	}
}
IL2CPP_EXTERN_C  int32_t HashMapHelper_1_TryAdd_mEA7DF62C16993CE3B2D2C3C6484114D7C2526580_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_key, const RuntimeMethod* method)
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC>(__this);
	int32_t _returnValue;
	_returnValue = HashMapHelper_1_TryAdd_mEA7DF62C16993CE3B2D2C3C6484114D7C2526580(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_Find_m230136C2D470770694EF15C9C0F2637F623E02BD_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U2A_t49A648948B5A176D1945F61EB07A64274F3A9D47_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15));
	void* L_22 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)));
	const Il2CppFullySharedGenericStruct L_20 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	const Il2CppFullySharedGenericStruct L_21 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	Il2CppFullySharedGenericStruct V_8 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	memset(V_8, 0, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)) ? ___0_key : &___0_key));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1), (&V_2), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32835));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32836));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32837));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32838));
		int32_t L_0 = __this->___AllocatedIndex;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32839));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_008b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32840));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32841));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32842));
		int32_t L_2;
		L_2 = HashMapHelper_1_GetBucket_mE1172E80C9E112134E2C0611F1583E709528EFB1_inline(__this, (Il2CppFullySharedGenericStruct*)___0_key, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32842));
		V_1 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32843));
		int32_t* L_3 = __this->___Buckets;
		int32_t L_4 = V_1;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, 4)))));
		V_2 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32844));
		int32_t L_7 = V_2;
		int32_t L_8 = __this->___Capacity;
		V_3 = (bool)((!(((uint32_t)L_7) >= ((uint32_t)L_8)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32845));
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_008a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32846));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32847));
		int32_t* L_10 = __this->___Next;
		V_4 = L_10;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32848));
		goto IL_0060;
	}

IL_003d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32849));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32850));
		int32_t* L_11 = V_4;
		int32_t L_12 = V_2;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 4)))));
		V_2 = L_14;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32851));
		int32_t L_15 = V_2;
		int32_t L_16 = __this->___Capacity;
		V_5 = (bool)((((int32_t)((!(((uint32_t)L_15) >= ((uint32_t)L_16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32852));
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_005f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32853));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32854));
		V_6 = (-1);
		goto IL_0090;
	}

IL_005f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32855));
	}

IL_0060:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32856));
		Il2CppFullySharedGenericStruct* L_18 = __this->___Keys;
		int32_t L_19 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32857));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_18, L_19, (Il2CppFullySharedGenericStruct*)L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32857));
		il2cpp_codegen_memcpy(V_8, L_20, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
		il2cpp_codegen_memcpy(L_21, ___0_key, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32858));
		Il2CppConstrainedCallData L_23;
		Il2CppMethodPointer L_24 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27), (void*)(Il2CppFullySharedGenericStruct*)V_8, &L_23, L_22);
		bool L_25 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_24, L_23.method,L_23.thisPtr, L_21);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32858));
		V_7 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32859));
		bool L_26 = V_7;
		if (L_26)
		{
			goto IL_003d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32860));
		int32_t L_27 = V_2;
		V_6 = L_27;
		goto IL_0090;
	}

IL_008a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32861));
	}

IL_008b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32862));
		V_6 = (-1);
		goto IL_0090;
	}

IL_0090:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32863));
		int32_t L_28 = V_6;
		return L_28;
	}
}
IL2CPP_EXTERN_C  int32_t HashMapHelper_1_Find_m230136C2D470770694EF15C9C0F2637F623E02BD_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method)
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC>(__this);
	int32_t _returnValue;
	_returnValue = HashMapHelper_1_Find_m230136C2D470770694EF15C9C0F2637F623E02BD(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_TryRemove_mF0EBAE2241D4A51420C87201DDFF160F83CC271B_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)));
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	Il2CppFullySharedGenericStruct V_6 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	memset(V_6, 0, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)) ? ___0_key : &___0_key));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1), (&V_2), (&V_3), (&V_4), (&V_7));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32878));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32879));
	int32_t G_B11_0 = 0;
	int32_t G_B15_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32880));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32881));
		int32_t L_0 = __this->___Capacity;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32882));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0116;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32883));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32884));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32885));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32886));
		int32_t L_2;
		L_2 = HashMapHelper_1_GetBucket_mE1172E80C9E112134E2C0611F1583E709528EFB1_inline(__this, (Il2CppFullySharedGenericStruct*)___0_key, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32886));
		V_2 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32887));
		V_3 = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32888));
		int32_t* L_3 = __this->___Buckets;
		int32_t L_4 = V_2;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, 4)))));
		V_4 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32889));
		goto IL_00e2;
	}

IL_0032:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32890));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32891));
		Il2CppFullySharedGenericStruct* L_7 = __this->___Keys;
		int32_t L_8 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32892));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_7, L_8, (Il2CppFullySharedGenericStruct*)L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32892));
		il2cpp_codegen_memcpy(V_6, L_9, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
		il2cpp_codegen_memcpy(L_10, ___0_key, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32893));
		Il2CppConstrainedCallData L_12;
		Il2CppMethodPointer L_13 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27), (void*)(Il2CppFullySharedGenericStruct*)V_6, &L_12, L_11);
		bool L_14 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_13, L_12.method,L_12.thisPtr, L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32893));
		V_5 = L_14;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32894));
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_00cd;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32895));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32896));
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32897));
		int32_t L_17 = V_3;
		V_8 = (bool)((((int32_t)L_17) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32898));
		bool L_18 = V_8;
		if (!L_18)
		{
			goto IL_0082;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32899));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32900));
		int32_t* L_19 = __this->___Buckets;
		int32_t L_20 = V_2;
		intptr_t L_21 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_20,NULL));
		int32_t* L_22 = __this->___Next;
		int32_t L_23 = V_4;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_21, 4)))), (int32_t)L_25);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32901));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32902));
		goto IL_009d;
	}

IL_0082:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32903));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32904));
		int32_t* L_26 = __this->___Next;
		int32_t L_27 = V_3;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t* L_29 = __this->___Next;
		int32_t L_30 = V_4;
		intptr_t L_31 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_30,NULL));
		int32_t L_32 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(L_31, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))), (int32_t)L_32);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32905));
	}

IL_009d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32906));
		int32_t* L_33 = __this->___Next;
		int32_t L_34 = V_4;
		intptr_t L_35 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_34,NULL));
		int32_t L_36 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(L_35, 4)))));
		V_7 = L_36;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32907));
		int32_t* L_37 = __this->___Next;
		int32_t L_38 = V_4;
		intptr_t L_39 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_38,NULL));
		int32_t L_40 = __this->___FirstFreeIdx;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(L_39, 4)))), (int32_t)L_40);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32908));
		int32_t L_41 = V_4;
		__this->___FirstFreeIdx = L_41;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32909));
		int32_t L_42 = V_7;
		V_4 = L_42;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32910));
		goto IL_00fd;
	}

IL_00cd:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32911));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32912));
		int32_t L_43 = V_4;
		V_3 = L_43;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32913));
		int32_t* L_44 = __this->___Next;
		int32_t L_45 = V_4;
		intptr_t L_46 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_45,NULL));
		int32_t L_47 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(L_46, 4)))));
		V_4 = L_47;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32914));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32915));
	}

IL_00e2:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32916));
		int32_t L_48 = V_4;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_49 = V_4;
		int32_t L_50 = __this->___Capacity;
		G_B11_0 = ((((int32_t)L_49) < ((int32_t)L_50))? 1 : 0);
		goto IL_00f4;
	}

IL_00f3:
	{
		G_B11_0 = 0;
	}

IL_00f4:
	{
		V_9 = (bool)G_B11_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32917));
		bool L_51 = V_9;
		if (L_51)
		{
			goto IL_0032;
		}
	}

IL_00fd:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32918));
		int32_t L_52 = __this->___Count;
		int32_t L_53 = V_1;
		__this->___Count = ((int32_t)il2cpp_codegen_subtract(L_52, L_53));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32919));
		int32_t L_54 = V_1;
		if (L_54)
		{
			goto IL_0111;
		}
	}
	{
		G_B15_0 = (-1);
		goto IL_0112;
	}

IL_0111:
	{
		int32_t L_55 = V_1;
		G_B15_0 = L_55;
	}

IL_0112:
	{
		V_10 = G_B15_0;
		goto IL_011b;
	}

IL_0116:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32920));
		V_10 = (-1);
		goto IL_011b;
	}

IL_011b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32921));
		int32_t L_56 = V_10;
		return L_56;
	}
}
IL2CPP_EXTERN_C  int32_t HashMapHelper_1_TryRemove_mF0EBAE2241D4A51420C87201DDFF160F83CC271B_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method)
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC>(__this);
	int32_t _returnValue;
	_returnValue = HashMapHelper_1_TryRemove_mF0EBAE2241D4A51420C87201DDFF160F83CC271B(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashMapHelper_1_MoveNextSearch_m5B2FF1D7B41C3BA34939652BB8BB2629DD498626_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_bucketIndex), (&___1_nextIndex), (&___2_index));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32922));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32923));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32924));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32925));
		int32_t* L_0 = ___0_bucketIndex;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32926));
		int32_t L_2 = __this->___BucketCapacity;
		V_1 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32927));
		goto IL_0047;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32928));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32929));
		int32_t* L_3 = __this->___Buckets;
		int32_t L_4 = V_0;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, 4)))));
		V_2 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32930));
		int32_t L_7 = V_2;
		V_3 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32931));
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32932));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32933));
		int32_t* L_9 = ___2_index;
		int32_t L_10 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_9, (int32_t)L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32934));
		int32_t* L_11 = ___0_bucketIndex;
		int32_t L_12 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_11, (int32_t)((int32_t)il2cpp_codegen_add(L_12, 1)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32935));
		int32_t* L_13 = ___1_nextIndex;
		int32_t* L_14 = __this->___Next;
		int32_t L_15 = V_2;
		intptr_t L_16 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_15,NULL));
		int32_t L_17 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(L_16, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_13, (int32_t)L_17);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32936));
		V_4 = (bool)1;
		goto IL_0064;
	}

IL_0042:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32937));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32938));
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0047:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32939));
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		V_5 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32940));
		bool L_21 = V_5;
		if (L_21)
		{
			goto IL_000d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32941));
		int32_t* L_22 = ___2_index;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_22, (int32_t)(-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32942));
		int32_t* L_23 = ___0_bucketIndex;
		int32_t L_24 = __this->___BucketCapacity;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_23, (int32_t)L_24);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32943));
		int32_t* L_25 = ___1_nextIndex;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_25, (int32_t)(-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32944));
		V_4 = (bool)0;
		goto IL_0064;
	}

IL_0064:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32945));
		bool L_26 = V_4;
		return L_26;
	}
}
IL2CPP_EXTERN_C  bool HashMapHelper_1_MoveNextSearch_m5B2FF1D7B41C3BA34939652BB8BB2629DD498626_AdjustorThunk (RuntimeObject* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method)
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC>(__this);
	bool _returnValue;
	_returnValue = HashMapHelper_1_MoveNextSearch_m5B2FF1D7B41C3BA34939652BB8BB2629DD498626(_thisAdjusted, ___0_bucketIndex, ___1_nextIndex, ___2_index, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashMapHelper_1_MoveNext_mC9D28D7DE9EB2A526DFD790777D5E118D33E86BC_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_bucketIndex), (&___1_nextIndex), (&___2_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32946));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32947));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32948));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32949));
		int32_t* L_0 = ___1_nextIndex;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32950));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32951));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32952));
		int32_t* L_3 = ___2_index;
		int32_t* L_4 = ___1_nextIndex;
		int32_t L_5 = il2cpp_codegen_ldind<int32_t, int32_t>(L_4);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_3, (int32_t)L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32953));
		int32_t* L_6 = ___1_nextIndex;
		int32_t* L_7 = __this->___Next;
		int32_t* L_8 = ___1_nextIndex;
		int32_t L_9 = il2cpp_codegen_ldind<int32_t, int32_t>(L_8);
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		int32_t L_11 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_10, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_6, (int32_t)L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32954));
		V_1 = (bool)1;
		goto IL_0031;
	}

IL_0025:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32955));
		int32_t* L_12 = ___0_bucketIndex;
		int32_t* L_13 = ___1_nextIndex;
		int32_t* L_14 = ___2_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32956));
		bool L_15;
		L_15 = HashMapHelper_1_MoveNextSearch_m5B2FF1D7B41C3BA34939652BB8BB2629DD498626(__this, L_12, L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32956));
		V_1 = L_15;
		goto IL_0031;
	}

IL_0031:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32957));
		bool L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C  bool HashMapHelper_1_MoveNext_mC9D28D7DE9EB2A526DFD790777D5E118D33E86BC_AdjustorThunk (RuntimeObject* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method)
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC>(__this);
	bool _returnValue;
	_returnValue = HashMapHelper_1_MoveNext_mC9D28D7DE9EB2A526DFD790777D5E118D33E86BC_inline(_thisAdjusted, ___0_bucketIndex, ___1_nextIndex, ___2_index, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 HashMapHelper_1_GetKeyArray_m8C41E3030AFCF52994AB7EAFD3A1CBD600466A9D_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_8;
	memset((&V_8), 0, sizeof(V_8));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_allocator));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32958));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32959));
	int32_t G_B8_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32960));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32961));
		int32_t L_0 = __this->___Count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___0_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32962));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2;
		L_2 = CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m4005EA9C29BA1075D9F591B6CBD82B5D22255763(L_0, L_1, (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32962));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32963));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32964));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32965));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32966));
		int32_t L_3;
		L_3 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32966));
		V_3 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32967));
		int32_t L_4 = __this->___BucketCapacity;
		V_4 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32968));
		goto IL_0074;
	}

IL_0025:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32969));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32970));
		int32_t* L_5 = __this->___Buckets;
		int32_t L_6 = V_1;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 4)))));
		V_5 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32971));
		goto IL_0061;
	}

IL_0036:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32972));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32973));
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		Il2CppFullySharedGenericStruct* L_11 = __this->___Keys;
		int32_t L_12 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32974));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_11, L_12, (Il2CppFullySharedGenericStruct*)L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32974));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32975));
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline((&V_0), L_10, il2cpp_codegen_memcpy(L_14, L_13, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32975));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32976));
		int32_t* L_15 = __this->___Next;
		int32_t L_16 = V_5;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t L_18 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))));
		V_5 = L_18;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32977));
	}

IL_0061:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32978));
		int32_t L_19 = V_5;
		V_6 = (bool)((((int32_t)((((int32_t)L_19) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32979));
		bool L_20 = V_6;
		if (L_20)
		{
			goto IL_0036;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32980));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32981));
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0074:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32982));
		int32_t L_22 = V_1;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_3;
		G_B8_0 = ((((int32_t)L_24) < ((int32_t)L_25))? 1 : 0);
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_7 = (bool)G_B8_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32983));
		bool L_26 = V_7;
		if (L_26)
		{
			goto IL_0025;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32984));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_27 = V_0;
		V_8 = L_27;
		goto IL_008b;
	}

IL_008b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32985));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_28 = V_8;
		return L_28;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 HashMapHelper_1_GetKeyArray_m8C41E3030AFCF52994AB7EAFD3A1CBD600466A9D_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC>(__this);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = HashMapHelper_1_GetKeyArray_m8C41E3030AFCF52994AB7EAFD3A1CBD600466A9D(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_CheckIndexOutOfBounds_mDCEA1C2E040CE097BFFA931B9AEE32C201AA467E_gshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_idx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_idx));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33046));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 33047));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33048));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33049));
		int32_t L_0 = ___0_idx;
		int32_t L_1 = __this->___Capacity;
		V_0 = (bool)((((int32_t)((!(((uint32_t)L_0) >= ((uint32_t)L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33050));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33051));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33052));
		int32_t L_3 = ___0_idx;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33053));
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral325E9B626B8674DB0D0742BC125F644ED8FFFFCB)), L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33053));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33054));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33054));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0028:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33055));
		return;
	}
}
IL2CPP_EXTERN_C  void HashMapHelper_1_CheckIndexOutOfBounds_mDCEA1C2E040CE097BFFA931B9AEE32C201AA467E_AdjustorThunk (RuntimeObject* __this, int32_t ___0_idx, const RuntimeMethod* method)
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC>(__this);
	HashMapHelper_1_CheckIndexOutOfBounds_mDCEA1C2E040CE097BFFA931B9AEE32C201AA467E_inline(_thisAdjusted, ___0_idx, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_CheckCapacity_mC1FA3EF072EB64DF9F09EDAD94364D72FC5CCFB2_gshared (int32_t ___0_capacity, const RuntimeMethod* method) 
{
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_capacity));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33056));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 33057));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33058));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33059));
		int32_t L_0 = ___0_capacity;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)((int32_t)536870912)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33060));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33061));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33062));
		int32_t L_2 = ___0_capacity;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ((int32_t)536870912);
		RuntimeObject* L_6 = Box(il2cpp_defaults.int32_class, &L_5);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33063));
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0F19052576940E4C653C32FF5A8A81D0ABB73F97)), L_4, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33063));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33064));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33064));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33065));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetPool_1__ctor_mA41BF4638AB4E108F21762D14AD73C960B5F3F4A_gshared (HashSetPool_1_t292B975119AA34E5926F2EB3FC031334A496C1F9* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		CollectionPool_2__ctor_mAABEACF317EC7EECBFC0456C64FD5FCED27F92DC((CollectionPool_2_t52F904C53EDF28249537FE2D26BA96E1EA03DF70*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* HashSetPool_1_Get_mF44FDE252EA5D4E55773EE003CC29AD9CF6394F7_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9496));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9497));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9498));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150* L_0 = ((HashSetPool_1_t703447E09A777B65F717CFC90E4FB4CA574AADA6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9499));
		NullCheck(L_0);
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_1;
		L_1 = ObjectPool_1_Get_m23D52E8180BD0D409EC687C2289EBA230E16D96A(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9499));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_t432123EBFF2674A3A6835051E8FF82B14E1A757A HashSetPool_1_Get_mE3F0BA3CFD1753DFAEBADD152F27DF9506395EA0_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87** ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9500));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9501));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9502));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150* L_0 = ((HashSetPool_1_t703447E09A777B65F717CFC90E4FB4CA574AADA6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87** L_1 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9503));
		NullCheck(L_0);
		PooledObject_t432123EBFF2674A3A6835051E8FF82B14E1A757A L_2;
		L_2 = ObjectPool_1_Get_m4115816D2DE85165CF8D78947DC6663230D0C574(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9503));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetPool_1_Release_mAD67B6A9557295CD786CA50619536ED6F823E6F8_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_toRelease, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_toRelease));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9504));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9505));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9506));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150* L_0 = ((HashSetPool_1_t703447E09A777B65F717CFC90E4FB4CA574AADA6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_1 = ___0_toRelease;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9507));
		NullCheck(L_0);
		ObjectPool_1_Release_mED23CEC0DB73254E08F5D82A5F43298CE54BDE98(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9507));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetPool_1__cctor_m870F053DDD336DB877E3F699952F5901872D3D85_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9508));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9509));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9510));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_t0FF56B0CA81E481CEA50A59D56491E25FF6104C7* L_0 = ((U3CU3Ec_t0FF56B0CA81E481CEA50A59D56491E25FF6104C7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9511));
		UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409* L_1 = (UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		UnityAction_1__ctor_m438887D98CC716F4FA73B0BC87997B55361534C4(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9511));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9512));
		ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150* L_2 = (ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m56A4B02DD4747A849CEA8CF443EAB5AA053CCF2E(L_2, (UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409*)NULL, L_1, (bool)1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9512));
		((HashSetPool_1_t703447E09A777B65F717CFC90E4FB4CA574AADA6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((HashSetPool_1_t703447E09A777B65F717CFC90E4FB4CA574AADA6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_2);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSetPropertyBag_1_get_InstantiationKind_m542C648FC9442316698457076FBC5B8C17656097_gshared (HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSetPropertyBag_1_t7F15EDFB949AF3B211F77A906E5919696ABFCAC8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1757));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1758));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1759));
		return (int32_t)(1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* HashSetPropertyBag_1_Instantiate_m40B346AADC5FFAA079D2DD84ED0FD4843585E19E_gshared (HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSetPropertyBag_1_t7F15EDFB949AF3B211F77A906E5919696ABFCAC8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1760));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1761));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1762));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1763));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1763));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetPropertyBag_1__ctor_m97B9FF0A7C7B1247E10A3C8A5114080B3A6571D1_gshared (HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SetPropertyBagBase_2__ctor_mBC63BADE70EFC95DA72703DD39A8EF3E1F0130B3((SetPropertyBagBase_2_t535BA9B7846680B8FE7F234EEED4881B81612A78*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x), (&___1_y));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 8113));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 8114));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 8115));
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_x;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_ceilpow2_m6873BD56787A2362EE6780DD54A9847561B11629_inline (int32_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&math_ceilpow2_m6873BD56787A2362EE6780DD54A9847561B11629_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, math_ceilpow2_m6873BD56787A2362EE6780DD54A9847561B11629_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11388));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11389));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11390));
		int32_t L_0 = ___0_x;
		___0_x = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11391));
		int32_t L_1 = ___0_x;
		int32_t L_2 = ___0_x;
		___0_x = ((int32_t)(L_1|((int32_t)(L_2>>1))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11392));
		int32_t L_3 = ___0_x;
		int32_t L_4 = ___0_x;
		___0_x = ((int32_t)(L_3|((int32_t)(L_4>>2))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11393));
		int32_t L_5 = ___0_x;
		int32_t L_6 = ___0_x;
		___0_x = ((int32_t)(L_5|((int32_t)(L_6>>4))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11394));
		int32_t L_7 = ___0_x;
		int32_t L_8 = ___0_x;
		___0_x = ((int32_t)(L_7|((int32_t)(L_8>>8))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11395));
		int32_t L_9 = ___0_x;
		int32_t L_10 = ___0_x;
		___0_x = ((int32_t)(L_9|((int32_t)(L_10>>((int32_t)16)))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11396));
		int32_t L_11 = ___0_x;
		return ((int32_t)il2cpp_codegen_add(L_11, 1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_lzcnt_m4BDBABBBAA2F9B553AE1155DFBDB552E23BB2F73_inline (int32_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&math_lzcnt_m4BDBABBBAA2F9B553AE1155DFBDB552E23BB2F73_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, math_lzcnt_m4BDBABBBAA2F9B553AE1155DFBDB552E23BB2F73_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11017));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11018));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11019));
		int32_t L_0 = ___0_x;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11020));
		int32_t L_1;
		L_1 = math_lzcnt_mCD77943688E8533316BC0238E5B9344B6433E3C0_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11020));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&math_min_m0D183243301588F5000801E35B451374CD10DFC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x), (&___1_y));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, math_min_m0D183243301588F5000801E35B451374CD10DFC1_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 8009));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 8010));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 8011));
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_x;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_CalcCapacityCeilPow2_m9E11DDA5C0E69FAD3BB1FB92BB81D4B3CFFBADC5_gshared_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_capacity));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32596));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32597));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32598));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32599));
		int32_t L_0 = __this->___Count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32600));
		int32_t L_1;
		L_1 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(1, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32600));
		int32_t L_2 = ___0_capacity;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32601));
		int32_t L_3;
		L_3 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32601));
		___0_capacity = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32602));
		int32_t L_4 = ___0_capacity;
		int32_t L_5 = __this->___Log2MinGrowth;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32603));
		int32_t L_6;
		L_6 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(L_4, ((int32_t)(1<<((int32_t)(L_5&((int32_t)31))))), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32603));
		V_0 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32604));
		int32_t L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32605));
		int32_t L_8;
		L_8 = math_ceilpow2_m6873BD56787A2362EE6780DD54A9847561B11629_inline(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32605));
		V_1 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32606));
		int32_t L_9 = V_1;
		V_2 = L_9;
		goto IL_0032;
	}

IL_0032:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32607));
		int32_t L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HashMapHelper_1_get_IsCreated_mFD6A2975F04E9C84A9886543625D8E8BCA71E398_gshared_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32613));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32614));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32615));
		uint8_t* L_0 = __this->___Ptr;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HashMapHelper_1_get_IsEmpty_mE0B74C2611A6136BF9AB2B9588804B95871588A4_gshared_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32616));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32617));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32618));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32619));
		bool L_0;
		L_0 = HashMapHelper_1_get_IsCreated_mFD6A2975F04E9C84A9886543625D8E8BCA71E398_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32619));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->___Count;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		return (bool)G_B3_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetBucket_mE1172E80C9E112134E2C0611F1583E709528EFB1_gshared_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, Il2CppFullySharedGenericStruct* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15));
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	memset(V_0, 0, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	int32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_key));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32789));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32790));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32791));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32792));
		Il2CppFullySharedGenericStruct* L_0 = ___0_key;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32793));
		Il2CppConstrainedCallData L_3;
		Il2CppMethodPointer L_4 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19), (void*)(Il2CppFullySharedGenericStruct*)V_0, &L_3, L_2);
		typedef int32_t ( *func_L_5)(void*,const RuntimeMethod*);
		int32_t L_6 = ((func_L_5)L_4)(L_3.thisPtr,L_3.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32793));
		uint64_t L_7 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8 = __this->___BucketCapacity;
		int64_t L_9 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_8, 1)),NULL));
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_7&L_9)),NULL));
		V_1 = L_10;
		goto IL_0024;
	}

IL_0024:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32794));
		int32_t L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_gshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_destination), (&___1_index), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_value : &___2_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3744));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3745));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3746));
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), L_6, SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), (void*)L_6);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3738));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3739));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3740));
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		il2cpp_codegen_memcpy(L_6, ((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HashMapHelper_1_MoveNext_mC9D28D7DE9EB2A526DFD790777D5E118D33E86BC_gshared_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_bucketIndex), (&___1_nextIndex), (&___2_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32946));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 32947));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32948));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32949));
		int32_t* L_0 = ___1_nextIndex;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32950));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32951));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32952));
		int32_t* L_3 = ___2_index;
		int32_t* L_4 = ___1_nextIndex;
		int32_t L_5 = il2cpp_codegen_ldind<int32_t, int32_t>(L_4);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_3, (int32_t)L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32953));
		int32_t* L_6 = ___1_nextIndex;
		int32_t* L_7 = __this->___Next;
		int32_t* L_8 = ___1_nextIndex;
		int32_t L_9 = il2cpp_codegen_ldind<int32_t, int32_t>(L_8);
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		int32_t L_11 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_10, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_6, (int32_t)L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32954));
		V_1 = (bool)1;
		goto IL_0031;
	}

IL_0025:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32955));
		int32_t* L_12 = ___0_bucketIndex;
		int32_t* L_13 = ___1_nextIndex;
		int32_t* L_14 = ___2_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32956));
		bool L_15;
		L_15 = HashMapHelper_1_MoveNextSearch_m5B2FF1D7B41C3BA34939652BB8BB2629DD498626(__this, L_12, L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32956));
		V_1 = L_15;
		goto IL_0031;
	}

IL_0031:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 32957));
		bool L_16 = V_1;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_gshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_t6E2931CC2E1AA6B9F666FF4270BD177E2114779B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2642));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2643));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2644));
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_gshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_t6E2931CC2E1AA6B9F666FF4270BD177E2114779B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2665));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2666));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2667));
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		il2cpp_codegen_memcpy(L_2, ___1_value, SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2668));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_0, L_1, il2cpp_codegen_memcpy(L_3, L_2, SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2668));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2669));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashMapHelper_1_CheckIndexOutOfBounds_mDCEA1C2E040CE097BFFA931B9AEE32C201AA467E_gshared_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_idx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashMapHelper_1_t05FC66AA124D80EA281FCF3E908B77ED7E064AE7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_idx));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33046));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 33047));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33048));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33049));
		int32_t L_0 = ___0_idx;
		int32_t L_1 = __this->___Capacity;
		V_0 = (bool)((((int32_t)((!(((uint32_t)L_0) >= ((uint32_t)L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33050));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33051));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33052));
		int32_t L_3 = ___0_idx;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33053));
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral325E9B626B8674DB0D0742BC125F644ED8FFFFCB)), L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33053));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33054));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33054));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0028:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33055));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_lzcnt_mCD77943688E8533316BC0238E5B9344B6433E3C0_inline (uint32_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongDoubleUnion_t17011746129284B81F310F56E20D549A6F6710D0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&math_lzcnt_mCD77943688E8533316BC0238E5B9344B6433E3C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LongDoubleUnion_t17011746129284B81F310F56E20D549A6F6710D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, math_lzcnt_mCD77943688E8533316BC0238E5B9344B6433E3C0_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11042));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11043));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11044));
		uint32_t L_0 = ___0_x;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11045));
		return ((int32_t)32);
	}

IL_0006:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11046));
		(&V_0)->___doubleValue = (0.0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11047));
		uint32_t L_1 = ___0_x;
		uint64_t L_2 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_1,NULL));
		(&V_0)->___longValue = ((int64_t)il2cpp_codegen_add(((int64_t)4841369599423283200LL), (int64_t)L_2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11048));
		double* L_3 = (double*)(&(&V_0)->___doubleValue);
		double* L_4 = L_3;
		double L_5 = il2cpp_codegen_ldind<double, double>(L_4);
		il2cpp_codegen_stind<double>((double*)L_4, (double)((double)il2cpp_codegen_subtract(L_5, (4503599627370496.0))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 11049));
		LongDoubleUnion_t17011746129284B81F310F56E20D549A6F6710D0 L_6 = V_0;
		int64_t L_7 = L_6.___longValue;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(L_7>>((int32_t)52))),NULL));
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)1054), L_8));
	}
}
