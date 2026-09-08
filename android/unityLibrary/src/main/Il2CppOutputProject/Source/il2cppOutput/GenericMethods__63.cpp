#include "pch-cpp.hpp"





template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};

struct ArrayPropertyBag_1_t67AE577E71602886054243EF2602EC6BBCBE2999;
struct ConcurrentDictionary_2_t289EA16AA3198E74A1ED327115892A1325FDE582;
struct DelegateProperty_2_tEF04A831D1787C45A1B56C36935D689DB49E2266;
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934;
struct HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED;
struct ICollectionPropertyBagAccept_1_tC319C0599D8868D3234B339C0F41CEAA9B721A81;
struct IDictionaryPropertyBagAccept_1_t90C955A74EF2A1BC67BFFF32B619D2C7BEFD0F83;
struct IListPropertyBagAccept_1_tA440060D65E6B55D2CB9D6C13F7EDF6B5BDB3630;
struct IPropertyBag_1_t30978BE747408788B89F37E0AF54EB81C020BCE7;
struct IPropertyBag_1_t8566C5C7AB3570D306E0B06845F7FAE6DB787054;
struct IPropertyBag_1_tB0ACB524E024522FBAC3BC7E6F8573FF9965178C;
struct IPropertyBag_1_t23290570490455A7A08C8177851B81B17BD72D3A;
struct IPropertyBag_1_t0FC9C8779AC28BD3D8A442EA99692A1A3C2176AC;
struct IPropertyBag_1_t6D4F2DD950DF51C173488DE43F9A4A2298F158D1;
struct IPropertyBag_1_tD6112F86F5AF883B85696DAF0945E9448E60D119;
struct IPropertyBag_1_t62C77663667B180AF17D47314285F542E3E1A83E;
struct IPropertyBag_1_t115E9B7FA5F06C0542E10625FF535354D72F19D9;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct ISetPropertyBagAccept_1_t2515F61BF0A7E57B2ECA9072027948C3201AB11D;
struct IndexedCollectionPropertyBag_2_t8A1B3CDCD4EEE6077DA6B18334A936E1A9C20FC7;
struct KeyValueCollectionPropertyBag_3_tCF870BA05A86A98FBB786FA41A24B15AB3ADC415;
struct KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85;
struct KeyValuePairProperty_t1FD0D2BA91EB5ACD2513F7960E2C302BD70E47FA;
struct KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E;
struct ListElementProperty_tBCD14CEEDC46D04C5AE8E531734D85F572D3926E;
struct ListElementProperty_t760420A6FA3FE23DD5B711AE40D8FE4152C4BA68;
struct ListElementProperty_t615C280FCD7BA320329E2CB3E3B52EE88FA09282;
struct ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26;
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72;
struct PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409;
struct SetElementProperty_t289C8D92DD4214A46FC3E74E8FE7C6EDE8B1C0C9;
struct SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1;
struct SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ICollectionPropertyBagVisitor_tD04FBC29596B15EED398387AFB40AD1D9E97353A;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryPropertyBagVisitor_t7120799BDDCF202E031AC75A352F9BDE2F8DE55C;
struct IListPropertyBagVisitor_t1A65A434B433FAF0020BD155458FAE263408B1A4;
struct IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2;
struct IPropertyBagVisitor_tE8B9B7E14DBF946E6E65BD0ECC8679268715BF5A;
struct ISetPropertyBagVisitor_t1414256EA563CF39B3B347E72D40A647EFA02264;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF;
struct ReflectedPropertyBagProvider_tFAAE287D4BED97ACD16EECAEA6DD5DE506D157CF;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollectionPropertyBagVisitor_tD04FBC29596B15EED398387AFB40AD1D9E97353A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionaryPropertyBagVisitor_t7120799BDDCF202E031AC75A352F9BDE2F8DE55C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IListPropertyBagVisitor_t1A65A434B433FAF0020BD155458FAE263408B1A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISetPropertyBagVisitor_t1414256EA563CF39B3B347E72D40A647EFA02264_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1;
IL2CPP_EXTERN_C const RuntimeType* ICollectionPropertyBagVisitor_tD04FBC29596B15EED398387AFB40AD1D9E97353A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IDictionaryPropertyBagVisitor_t7120799BDDCF202E031AC75A352F9BDE2F8DE55C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IListPropertyBagVisitor_t1A65A434B433FAF0020BD155458FAE263408B1A4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ISetPropertyBagVisitor_t1414256EA563CF39B3B347E72D40A647EFA02264_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct MemberInfo_t  : public RuntimeObject
{
};
struct PropertyBag_t2F42343455C93CC5FB7CAD060175209F8A75AF92  : public RuntimeObject
{
};
struct PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C  : public RuntimeObject
{
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
struct TypedStore_1_t189E1E4D9C81609B924BD4A6EF16C4E510C84D54 
{
	union
	{
		struct
		{
		};
		uint8_t TypedStore_1_t9BD4FFD497AA2C3541EB5A0330E63325EA4F2435__padding[1];
	};
};
struct TypedStore_1_tED7A6B8370A88A47B7AC3DF6346C28A79A2840A6 
{
	union
	{
		struct
		{
		};
		uint8_t TypedStore_1_t9BD4FFD497AA2C3541EB5A0330E63325EA4F2435__padding[1];
	};
};
struct TypedStore_1_t4BEBA0F954F2F121FBFD4C5FB8389747FF8B669E 
{
	union
	{
		struct
		{
		};
		uint8_t TypedStore_1_t9BD4FFD497AA2C3541EB5A0330E63325EA4F2435__padding[1];
	};
};
struct TypedStore_1_t3B8F215CFDA805DB5899C1DDB518863876690479 
{
	union
	{
		struct
		{
		};
		uint8_t TypedStore_1_t9BD4FFD497AA2C3541EB5A0330E63325EA4F2435__padding[1];
	};
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
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
struct IntPtr_t 
{
	void* ___m_value;
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
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t474B4314A78E9CC97DD8CF6E3ADACCDDAFB0841A  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t9B0D7D63F90D24F16F87AF8413E98E8C803A81B9  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t42CD4AA6C3B0FB863CBC2D8227FFEF4C2214906B  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t5F26DBA1727EF005A1A4F925DB79E403C05F7E83  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF  : public Exception_t
{
	Type_t* ___U3CTypeU3Ek__BackingField;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct IndexedCollectionPropertyBag_2_t9CFEACD6C16F18DE7CFC0FF1B789D5E4C3E70488  : public PropertyBag_1_t42CD4AA6C3B0FB863CBC2D8227FFEF4C2214906B
{
	ListElementProperty_tBCD14CEEDC46D04C5AE8E531734D85F572D3926E* ___m_Property;
};
struct IndexedCollectionPropertyBag_2_t72CA9F59930D9856E976488FB1CF6D78C94403E9  : public PropertyBag_1_t5F26DBA1727EF005A1A4F925DB79E403C05F7E83
{
	ListElementProperty_t760420A6FA3FE23DD5B711AE40D8FE4152C4BA68* ___m_Property;
};
struct IndexedCollectionPropertyBag_2_t8A1B3CDCD4EEE6077DA6B18334A936E1A9C20FC7  : public PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409
{
	ListElementProperty_t615C280FCD7BA320329E2CB3E3B52EE88FA09282* ___m_Property;
};
struct KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08  : public PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1
{
	KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85* ___m_KeyValuePairProperty;
};
struct KeyValueCollectionPropertyBag_3_tCF870BA05A86A98FBB786FA41A24B15AB3ADC415  : public PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409
{
	KeyValuePairProperty_t1FD0D2BA91EB5ACD2513F7960E2C302BD70E47FA* ___m_KeyValuePairProperty;
};
struct KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E  : public PropertyBag_1_t9B0D7D63F90D24F16F87AF8413E98E8C803A81B9
{
};
struct SetPropertyBagBase_2_t535BA9B7846680B8FE7F234EEED4881B81612A78  : public PropertyBag_1_t474B4314A78E9CC97DD8CF6E3ADACCDDAFB0841A
{
	SetElementProperty_t289C8D92DD4214A46FC3E74E8FE7C6EDE8B1C0C9* ___m_Property;
};
struct SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF  : public PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409
{
	SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* ___m_Property;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayPropertyBag_1_t67AE577E71602886054243EF2602EC6BBCBE2999  : public IndexedCollectionPropertyBag_2_t72CA9F59930D9856E976488FB1CF6D78C94403E9
{
};
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934  : public KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08
{
};
struct HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED  : public SetPropertyBagBase_2_t535BA9B7846680B8FE7F234EEED4881B81612A78
{
};
struct ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26  : public IndexedCollectionPropertyBag_2_t9CFEACD6C16F18DE7CFC0FF1B789D5E4C3E70488
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticFields
{
	ConcurrentDictionary_2_t289EA16AA3198E74A1ED327115892A1325FDE582* ___s_PropertyBags;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___s_RegisteredTypes;
	ReflectedPropertyBagProvider_tFAAE287D4BED97ACD16EECAEA6DD5DE506D157CF* ___s_PropertyBagProvider;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct TypedStore_1_t189E1E4D9C81609B924BD4A6EF16C4E510C84D54_StaticFields
{
	RuntimeObject* ___PropertyBag;
};
struct TypedStore_1_tED7A6B8370A88A47B7AC3DF6346C28A79A2840A6_StaticFields
{
	RuntimeObject* ___PropertyBag;
};
struct TypedStore_1_t4BEBA0F954F2F121FBFD4C5FB8389747FF8B669E_StaticFields
{
	RuntimeObject* ___PropertyBag;
};
struct TypedStore_1_t3B8F215CFDA805DB5899C1DDB518863876690479_StaticFields
{
	RuntimeObject* ___PropertyBag;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E_StaticFields
{
	DelegateProperty_2_tEF04A831D1787C45A1B56C36935D689DB49E2266* ___s_KeyProperty;
	DelegateProperty_2_tEF04A831D1787C45A1B56C36935D689DB49E2266* ___s_ValueProperty;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBagStore_Exists_TisIl2CppFullySharedGenericAny_m0AD14B25ADD5381999EBC9819E5F1BED65D49C3A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBagStore_AddPropertyBag_TisIl2CppFullySharedGenericAny_mB0AA53F19CB33A3C2A29AC822452167CB955F19D_gshared (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPropertyBag_1__ctor_m8A9D3D2E609D27372E45F78266E4D3D49341668C_gshared (ArrayPropertyBag_1_t67AE577E71602886054243EF2602EC6BBCBE2999* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterArray_TisIl2CppFullySharedGenericAny_m04B363EA869CC7C158803293A8E8900DD74E853A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPropertyBag_2__ctor_m8FC636BBC54135160381FA25CF825CCC925E5E33_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5F1171B4857DF895A375976303AF32AF03BEBBF6_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetPropertyBag_1__ctor_m97B9FF0A7C7B1247E10A3C8A5114080B3A6571D1_gshared (HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterHashSet_TisIl2CppFullySharedGenericAny_mD32CBCE2604346A23E543758A6030C4ED75AD8CF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueCollectionPropertyBag_3__ctor_m2B0FFB3AC934F3B3B68202F8E1002B6B5E22EE30_gshared (KeyValueCollectionPropertyBag_3_tCF870BA05A86A98FBB786FA41A24B15AB3ADC415* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePairPropertyBag_2__ctor_m4145E0D4FEFD0347C5C90E8CFBA4FCC1AD92A71E_gshared (KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterIDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m713CF2EB361D3AC8165DB291B538B160A72CF506_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedCollectionPropertyBag_2__ctor_mFFA32DC1A42A98F8C472CC0042D92A65CEB3A1EE_gshared (IndexedCollectionPropertyBag_2_t8A1B3CDCD4EEE6077DA6B18334A936E1A9C20FC7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterIList_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9B615A477241D7166808BF91B2D7BF19CA81CF12_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyBagBase_2__ctor_m649EC64E71E2806820C40AECE38739D04311DE79_gshared (SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterISet_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mB598549688EE8380DA045A1B4E7019EEFE8068D0_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPropertyBag_1__ctor_m13B50B342F6F11640D2535EF8957D87BA7DA8147_gshared (ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterList_TisIl2CppFullySharedGenericAny_m00D2338E47219067671C5D8EB3DED57F074FEA78_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBagStore_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_mDEAE1F0D7155B39794D7B007BD7EC479891ED7BD_gshared (Il2CppFullySharedGenericAny* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
inline bool PropertyBagStore_Exists_TisIl2CppFullySharedGenericAny_m0AD14B25ADD5381999EBC9819E5F1BED65D49C3A (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))PropertyBagStore_Exists_TisIl2CppFullySharedGenericAny_m0AD14B25ADD5381999EBC9819E5F1BED65D49C3A_gshared)(method);
}
inline void PropertyBagStore_AddPropertyBag_TisIl2CppFullySharedGenericAny_mB0AA53F19CB33A3C2A29AC822452167CB955F19D (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))PropertyBagStore_AddPropertyBag_TisIl2CppFullySharedGenericAny_mB0AA53F19CB33A3C2A29AC822452167CB955F19D_gshared)(___0_propertyBag, method);
}
inline void ArrayPropertyBag_1__ctor_m8A9D3D2E609D27372E45F78266E4D3D49341668C (ArrayPropertyBag_1_t67AE577E71602886054243EF2602EC6BBCBE2999* __this, const RuntimeMethod* method)
{
	((  void (*) (ArrayPropertyBag_1_t67AE577E71602886054243EF2602EC6BBCBE2999*, const RuntimeMethod*))ArrayPropertyBag_1__ctor_m8A9D3D2E609D27372E45F78266E4D3D49341668C_gshared)(__this, method);
}
inline void PropertyBagStore_AddPropertyBag_Tis__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC_mE545A03C70F2F0AFA1A17C623EA577D4DD3201F1 (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))PropertyBagStore_AddPropertyBag_TisIl2CppFullySharedGenericAny_mB0AA53F19CB33A3C2A29AC822452167CB955F19D_gshared)(___0_propertyBag, method);
}
inline void PropertyBag_RegisterArray_TisIl2CppFullySharedGenericAny_m04B363EA869CC7C158803293A8E8900DD74E853A (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))PropertyBag_RegisterArray_TisIl2CppFullySharedGenericAny_m04B363EA869CC7C158803293A8E8900DD74E853A_gshared)(method);
}
inline void DictionaryPropertyBag_2__ctor_m8FC636BBC54135160381FA25CF825CCC925E5E33 (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method)
{
	((  void (*) (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934*, const RuntimeMethod*))DictionaryPropertyBag_2__ctor_m8FC636BBC54135160381FA25CF825CCC925E5E33_gshared)(__this, method);
}
inline void PropertyBagStore_AddPropertyBag_TisDictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E_m9CF92F84EE7D60A4CD09994BE862D8C724616846 (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))PropertyBagStore_AddPropertyBag_TisIl2CppFullySharedGenericAny_mB0AA53F19CB33A3C2A29AC822452167CB955F19D_gshared)(___0_propertyBag, method);
}
inline void PropertyBag_RegisterDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5F1171B4857DF895A375976303AF32AF03BEBBF6 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))PropertyBag_RegisterDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5F1171B4857DF895A375976303AF32AF03BEBBF6_gshared)(method);
}
inline void HashSetPropertyBag_1__ctor_m97B9FF0A7C7B1247E10A3C8A5114080B3A6571D1 (HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED*, const RuntimeMethod*))HashSetPropertyBag_1__ctor_m97B9FF0A7C7B1247E10A3C8A5114080B3A6571D1_gshared)(__this, method);
}
inline void PropertyBagStore_AddPropertyBag_TisHashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87_mADECCB96898CCF58055BFEC5C93386A4BB16AC87 (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))PropertyBagStore_AddPropertyBag_TisIl2CppFullySharedGenericAny_mB0AA53F19CB33A3C2A29AC822452167CB955F19D_gshared)(___0_propertyBag, method);
}
inline void PropertyBag_RegisterHashSet_TisIl2CppFullySharedGenericAny_mD32CBCE2604346A23E543758A6030C4ED75AD8CF (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))PropertyBag_RegisterHashSet_TisIl2CppFullySharedGenericAny_mD32CBCE2604346A23E543758A6030C4ED75AD8CF_gshared)(method);
}
inline void KeyValueCollectionPropertyBag_3__ctor_m2B0FFB3AC934F3B3B68202F8E1002B6B5E22EE30 (KeyValueCollectionPropertyBag_3_tCF870BA05A86A98FBB786FA41A24B15AB3ADC415* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyValueCollectionPropertyBag_3_tCF870BA05A86A98FBB786FA41A24B15AB3ADC415*, const RuntimeMethod*))KeyValueCollectionPropertyBag_3__ctor_m2B0FFB3AC934F3B3B68202F8E1002B6B5E22EE30_gshared)(__this, method);
}
inline void KeyValuePairPropertyBag_2__ctor_m4145E0D4FEFD0347C5C90E8CFBA4FCC1AD92A71E (KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E*, const RuntimeMethod*))KeyValuePairPropertyBag_2__ctor_m4145E0D4FEFD0347C5C90E8CFBA4FCC1AD92A71E_gshared)(__this, method);
}
inline void PropertyBagStore_AddPropertyBag_TisKeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669_m018E4FAACE18CF45D63C64F220D3F4BEBAC5757B (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))PropertyBagStore_AddPropertyBag_TisIl2CppFullySharedGenericAny_mB0AA53F19CB33A3C2A29AC822452167CB955F19D_gshared)(___0_propertyBag, method);
}
inline void PropertyBag_RegisterIDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m713CF2EB361D3AC8165DB291B538B160A72CF506 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))PropertyBag_RegisterIDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m713CF2EB361D3AC8165DB291B538B160A72CF506_gshared)(method);
}
inline void IndexedCollectionPropertyBag_2__ctor_mFFA32DC1A42A98F8C472CC0042D92A65CEB3A1EE (IndexedCollectionPropertyBag_2_t8A1B3CDCD4EEE6077DA6B18334A936E1A9C20FC7* __this, const RuntimeMethod* method)
{
	((  void (*) (IndexedCollectionPropertyBag_2_t8A1B3CDCD4EEE6077DA6B18334A936E1A9C20FC7*, const RuntimeMethod*))IndexedCollectionPropertyBag_2__ctor_mFFA32DC1A42A98F8C472CC0042D92A65CEB3A1EE_gshared)(__this, method);
}
inline void PropertyBag_RegisterIList_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9B615A477241D7166808BF91B2D7BF19CA81CF12 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))PropertyBag_RegisterIList_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9B615A477241D7166808BF91B2D7BF19CA81CF12_gshared)(method);
}
inline void SetPropertyBagBase_2__ctor_m649EC64E71E2806820C40AECE38739D04311DE79 (SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF* __this, const RuntimeMethod* method)
{
	((  void (*) (SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF*, const RuntimeMethod*))SetPropertyBagBase_2__ctor_m649EC64E71E2806820C40AECE38739D04311DE79_gshared)(__this, method);
}
inline void PropertyBag_RegisterISet_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mB598549688EE8380DA045A1B4E7019EEFE8068D0 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))PropertyBag_RegisterISet_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mB598549688EE8380DA045A1B4E7019EEFE8068D0_gshared)(method);
}
inline void ListPropertyBag_1__ctor_m13B50B342F6F11640D2535EF8957D87BA7DA8147 (ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26* __this, const RuntimeMethod* method)
{
	((  void (*) (ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26*, const RuntimeMethod*))ListPropertyBag_1__ctor_m13B50B342F6F11640D2535EF8957D87BA7DA8147_gshared)(__this, method);
}
inline void PropertyBagStore_AddPropertyBag_TisList_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_mF45C3CC41C57522410732D7A76D1342114D1A46D (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))PropertyBagStore_AddPropertyBag_TisIl2CppFullySharedGenericAny_mB0AA53F19CB33A3C2A29AC822452167CB955F19D_gshared)(___0_propertyBag, method);
}
inline void PropertyBag_RegisterList_TisIl2CppFullySharedGenericAny_m00D2338E47219067671C5D8EB3DED57F074FEA78 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))PropertyBag_RegisterList_TisIl2CppFullySharedGenericAny_m00D2338E47219067671C5D8EB3DED57F074FEA78_gshared)(method);
}
inline bool PropertyBagStore_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_mDEAE1F0D7155B39794D7B007BD7EC479891ED7BD (Il2CppFullySharedGenericAny* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, RuntimeObject**, const RuntimeMethod*))PropertyBagStore_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_mDEAE1F0D7155B39794D7B007BD7EC479891ED7BD_gshared)(___0_value, ___1_propertyBag, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_AcceptWithSpecializedVisitor_TisIl2CppFullySharedGenericAny_mDB91562B01F9A25F2996347A1981D24A0DFBBFF1_gshared (RuntimeObject* ___0_properties, RuntimeObject* ___1_visitor, Il2CppFullySharedGenericAny* ___2_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionPropertyBagVisitor_tD04FBC29596B15EED398387AFB40AD1D9E97353A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionPropertyBagVisitor_tD04FBC29596B15EED398387AFB40AD1D9E97353A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionaryPropertyBagVisitor_t7120799BDDCF202E031AC75A352F9BDE2F8DE55C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionaryPropertyBagVisitor_t7120799BDDCF202E031AC75A352F9BDE2F8DE55C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListPropertyBagVisitor_t1A65A434B433FAF0020BD155458FAE263408B1A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListPropertyBagVisitor_t1A65A434B433FAF0020BD155458FAE263408B1A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISetPropertyBagVisitor_t1414256EA563CF39B3B347E72D40A647EFA02264_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISetPropertyBagVisitor_t1414256EA563CF39B3B347E72D40A647EFA02264_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_properties), (&___1_visitor), (&___2_container));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), (&V_7));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2085));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2086));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2087));
		RuntimeObject* L_0 = ___0_properties;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2088));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2089));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2089));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2090));
		RuntimeObject* L_2 = ___0_properties;
		V_8 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2091));
		RuntimeObject* L_3 = V_8;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_4 = V_0;
		if (L_4)
		{
			goto IL_0043;
		}
	}

IL_001c:
	{
		RuntimeObject* L_5 = V_8;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 2)));
		RuntimeObject* L_6 = V_2;
		if (L_6)
		{
			goto IL_0056;
		}
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_8;
		V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3)));
		RuntimeObject* L_8 = V_4;
		if (L_8)
		{
			goto IL_0069;
		}
	}

IL_0034:
	{
		RuntimeObject* L_9 = V_8;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 4)));
		RuntimeObject* L_10 = V_6;
		if (L_10)
		{
			goto IL_0080;
		}
	}
	{
		goto IL_0097;
	}

IL_0043:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2092));
		RuntimeObject* L_11 = ___1_visitor;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDictionaryPropertyBagVisitor_t7120799BDDCF202E031AC75A352F9BDE2F8DE55C_il2cpp_TypeInfo_var));
		RuntimeObject* L_12 = V_1;
		if (!L_12)
		{
			goto IL_001c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2093));
		RuntimeObject* L_13 = V_0;
		RuntimeObject* L_14 = V_1;
		Il2CppFullySharedGenericAny* L_15 = ___2_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2094));
		NullCheck(L_13);
		InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_13, L_14, L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2094));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2095));
		return;
	}

IL_0056:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2096));
		RuntimeObject* L_16 = ___1_visitor;
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IListPropertyBagVisitor_t1A65A434B433FAF0020BD155458FAE263408B1A4_il2cpp_TypeInfo_var));
		RuntimeObject* L_17 = V_3;
		if (!L_17)
		{
			goto IL_0027;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2097));
		RuntimeObject* L_18 = V_2;
		RuntimeObject* L_19 = V_3;
		Il2CppFullySharedGenericAny* L_20 = ___2_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2098));
		NullCheck(L_18);
		InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 2), L_18, L_19, L_20);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2098));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2099));
		return;
	}

IL_0069:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2100));
		RuntimeObject* L_21 = ___1_visitor;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_21, ISetPropertyBagVisitor_t1414256EA563CF39B3B347E72D40A647EFA02264_il2cpp_TypeInfo_var));
		RuntimeObject* L_22 = V_5;
		if (!L_22)
		{
			goto IL_0034;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2101));
		RuntimeObject* L_23 = V_4;
		RuntimeObject* L_24 = V_5;
		Il2CppFullySharedGenericAny* L_25 = ___2_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2102));
		NullCheck(L_23);
		InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), L_23, L_24, L_25);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2102));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2103));
		return;
	}

IL_0080:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2104));
		RuntimeObject* L_26 = ___1_visitor;
		V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_26, ICollectionPropertyBagVisitor_tD04FBC29596B15EED398387AFB40AD1D9E97353A_il2cpp_TypeInfo_var));
		RuntimeObject* L_27 = V_7;
		if (!L_27)
		{
			goto IL_0097;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2105));
		RuntimeObject* L_28 = V_6;
		RuntimeObject* L_29 = V_7;
		Il2CppFullySharedGenericAny* L_30 = ___2_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2106));
		NullCheck(L_28);
		InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 4), L_28, L_29, L_30);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2106));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2107));
		return;
	}

IL_0097:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2108));
		RuntimeObject* L_31 = ___0_properties;
		RuntimeObject* L_32 = ___1_visitor;
		Il2CppFullySharedGenericAny* L_33 = ___2_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2109));
		NullCheck(L_31);
		InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(4, il2cpp_rgctx_data(method->rgctx_data, 0), L_31, L_32, L_33);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2109));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2110));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_CreateInstance_TisIl2CppFullySharedGenericAny_m169595AD43A26D76D81C19D3BFAF73F5A5421C50_gshared (Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TContainer_t3225A3EA4F3D1DBA8902480467F73C6177E887FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TContainer_t3225A3EA4F3D1DBA8902480467F73C6177E887FA);
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2203));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2204));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2205));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2206));
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2206));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2207));
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2208));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2209));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2209));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2210));
		MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_4 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
		MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_4, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2210));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2211));
		RuntimeObject* L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2212));
		NullCheck(L_5);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(2, il2cpp_rgctx_data(method->rgctx_data, 1), L_5, (Il2CppFullySharedGenericAny*)L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2212));
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_TContainer_t3225A3EA4F3D1DBA8902480467F73C6177E887FA);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_Exists_TisIl2CppFullySharedGenericAny_mA3593FC98E49249FF9D89846BFD9598BCD4303A1_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2225));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2226));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2227));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2228));
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PropertyBagStore_Exists_TisIl2CppFullySharedGenericAny_m0AD14B25ADD5381999EBC9819E5F1BED65D49C3A(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2228));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBag_GetPropertyBag_TisIl2CppFullySharedGenericAny_m640BEA3D9C9EB8D8E5120B304862BCC23F0D6C1B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2217));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2218));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2219));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2220));
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2220));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_Register_TisIl2CppFullySharedGenericAny_m16216813C7B91C3BF19C8BC30D700CC77D2B2DC2_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* ___0_propertyBag, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_propertyBag));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2111));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2112));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2113));
		PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* L_0 = ___0_propertyBag;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2114));
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		PropertyBagStore_AddPropertyBag_TisIl2CppFullySharedGenericAny_mB0AA53F19CB33A3C2A29AC822452167CB955F19D((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2114));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2115));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterArray_TisIl2CppFullySharedGenericAny_m04B363EA869CC7C158803293A8E8900DD74E853A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2116));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2117));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2118));
		RuntimeObject* L_0 = ((TypedStore_1_t4BEBA0F954F2F121FBFD4C5FB8389747FF8B669E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___PropertyBag;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2119));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2120));
		ArrayPropertyBag_1_t67AE577E71602886054243EF2602EC6BBCBE2999* L_1 = (ArrayPropertyBag_1_t67AE577E71602886054243EF2602EC6BBCBE2999*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		ArrayPropertyBag_1__ctor_m8A9D3D2E609D27372E45F78266E4D3D49341668C(L_1, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2120));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2121));
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		PropertyBagStore_AddPropertyBag_Tis__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC_mE545A03C70F2F0AFA1A17C623EA577D4DD3201F1((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2121));
	}

IL_0011:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2122));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterArray_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m3A5626CC1C89796D27DFEFF6FD0DD0AEEEA7E979_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2123));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2124));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2125));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2126));
		PropertyBag_RegisterArray_TisIl2CppFullySharedGenericAny_m04B363EA869CC7C158803293A8E8900DD74E853A(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2126));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2127));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5F1171B4857DF895A375976303AF32AF03BEBBF6_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2152));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2153));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2154));
		RuntimeObject* L_0 = ((TypedStore_1_t189E1E4D9C81609B924BD4A6EF16C4E510C84D54_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___PropertyBag;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2155));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2156));
		DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* L_1 = (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		DictionaryPropertyBag_2__ctor_m8FC636BBC54135160381FA25CF825CCC925E5E33(L_1, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2156));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2157));
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		PropertyBagStore_AddPropertyBag_TisDictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E_m9CF92F84EE7D60A4CD09994BE862D8C724616846((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2157));
	}

IL_0011:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2158));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mC94D92C42F6C45B262C2BFD79AE49FF1F5F9994A_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2159));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2160));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2161));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2162));
		PropertyBag_RegisterDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5F1171B4857DF895A375976303AF32AF03BEBBF6(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2162));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2163));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterHashSet_TisIl2CppFullySharedGenericAny_mD32CBCE2604346A23E543758A6030C4ED75AD8CF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2140));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2141));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2142));
		RuntimeObject* L_0 = ((TypedStore_1_tED7A6B8370A88A47B7AC3DF6346C28A79A2840A6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___PropertyBag;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2143));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2144));
		HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED* L_1 = (HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		HashSetPropertyBag_1__ctor_m97B9FF0A7C7B1247E10A3C8A5114080B3A6571D1(L_1, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2144));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2145));
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		PropertyBagStore_AddPropertyBag_TisHashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87_mADECCB96898CCF58055BFEC5C93386A4BB16AC87((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2145));
	}

IL_0011:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2146));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterHashSet_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9D5F20C5E16B66E3B9721B19C6FBA627B86F6245_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2147));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2148));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2149));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2150));
		PropertyBag_RegisterHashSet_TisIl2CppFullySharedGenericAny_mD32CBCE2604346A23E543758A6030C4ED75AD8CF(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2150));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2151));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterIDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m713CF2EB361D3AC8165DB291B538B160A72CF506_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2188));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2189));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2190));
		RuntimeObject* L_0 = ((TypedStore_1_t3B8F215CFDA805DB5899C1DDB518863876690479_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___PropertyBag;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2191));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2192));
		KeyValueCollectionPropertyBag_3_tCF870BA05A86A98FBB786FA41A24B15AB3ADC415* L_1 = (KeyValueCollectionPropertyBag_3_tCF870BA05A86A98FBB786FA41A24B15AB3ADC415*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		KeyValueCollectionPropertyBag_3__ctor_m2B0FFB3AC934F3B3B68202F8E1002B6B5E22EE30(L_1, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2192));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2193));
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		PropertyBagStore_AddPropertyBag_TisIl2CppFullySharedGenericAny_mB0AA53F19CB33A3C2A29AC822452167CB955F19D((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2193));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2194));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2195));
		KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E* L_2 = (KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
		KeyValuePairPropertyBag_2__ctor_m4145E0D4FEFD0347C5C90E8CFBA4FCC1AD92A71E(L_2, il2cpp_rgctx_method(method->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2195));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2196));
		PropertyBagStore_AddPropertyBag_TisKeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669_m018E4FAACE18CF45D63C64F220D3F4BEBAC5757B((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2196));
	}

IL_001b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2197));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterIDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m1D110D325CF0904B7AADCC00D50FBBDEF6C06AC2_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2198));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2199));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2200));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2201));
		PropertyBag_RegisterIDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m713CF2EB361D3AC8165DB291B538B160A72CF506(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2201));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2202));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterIList_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9B615A477241D7166808BF91B2D7BF19CA81CF12_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2164));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2165));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2166));
		RuntimeObject* L_0 = ((TypedStore_1_t3B8F215CFDA805DB5899C1DDB518863876690479_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___PropertyBag;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2167));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2168));
		IndexedCollectionPropertyBag_2_t8A1B3CDCD4EEE6077DA6B18334A936E1A9C20FC7* L_1 = (IndexedCollectionPropertyBag_2_t8A1B3CDCD4EEE6077DA6B18334A936E1A9C20FC7*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		IndexedCollectionPropertyBag_2__ctor_mFFA32DC1A42A98F8C472CC0042D92A65CEB3A1EE(L_1, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2168));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2169));
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		PropertyBagStore_AddPropertyBag_TisIl2CppFullySharedGenericAny_mB0AA53F19CB33A3C2A29AC822452167CB955F19D((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2169));
	}

IL_0011:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2170));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterIList_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA60A63E9334F0568894C96F461730D5724DB6D65_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2171));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2172));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2173));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2174));
		PropertyBag_RegisterIList_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9B615A477241D7166808BF91B2D7BF19CA81CF12(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2174));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2175));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterISet_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mB598549688EE8380DA045A1B4E7019EEFE8068D0_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2176));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2177));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2178));
		RuntimeObject* L_0 = ((TypedStore_1_t3B8F215CFDA805DB5899C1DDB518863876690479_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___PropertyBag;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2179));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2180));
		SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF* L_1 = (SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		SetPropertyBagBase_2__ctor_m649EC64E71E2806820C40AECE38739D04311DE79(L_1, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2180));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2181));
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		PropertyBagStore_AddPropertyBag_TisIl2CppFullySharedGenericAny_mB0AA53F19CB33A3C2A29AC822452167CB955F19D((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2181));
	}

IL_0011:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2182));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterISet_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mCACBE601B4B96EB115725CF08327D6863C3754DA_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2183));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2184));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2185));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2186));
		PropertyBag_RegisterISet_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mB598549688EE8380DA045A1B4E7019EEFE8068D0(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2186));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2187));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterList_TisIl2CppFullySharedGenericAny_m00D2338E47219067671C5D8EB3DED57F074FEA78_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2128));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2129));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2130));
		RuntimeObject* L_0 = ((TypedStore_1_t4BEBA0F954F2F121FBFD4C5FB8389747FF8B669E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___PropertyBag;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2131));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2132));
		ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26* L_1 = (ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		ListPropertyBag_1__ctor_m13B50B342F6F11640D2535EF8957D87BA7DA8147(L_1, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2132));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2133));
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		PropertyBagStore_AddPropertyBag_TisList_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_mF45C3CC41C57522410732D7A76D1342114D1A46D((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2133));
	}

IL_0011:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2134));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_RegisterList_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5D20C629FDAE08BDEAD0086D6562A127F50966B9_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2135));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2136));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2137));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2138));
		PropertyBag_RegisterList_TisIl2CppFullySharedGenericAny_m00D2338E47219067671C5D8EB3DED57F074FEA78(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2138));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2139));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_m60E7BF3AACB59F7E085E19E4B6DC8C612F6D5534_gshared (Il2CppFullySharedGenericAny* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value), (&___1_propertyBag));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2221));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2222));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2223));
		Il2CppFullySharedGenericAny* L_0 = ___0_value;
		RuntimeObject** L_1 = ___1_propertyBag;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2224));
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PropertyBagStore_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_mDEAE1F0D7155B39794D7B007BD7EC479891ED7BD(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2224));
		return L_2;
	}
}
