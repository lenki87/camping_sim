#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};

struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScriptTypeDescriptor_t217D83EB2122B4DEA21A50E9525D681978EF27A9;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377;
struct WebConnection_tA0CBB804ED8C101A5D64C7C17C63949D763C53FC;
struct WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9;
struct IPayload_t623870586E14855228EEC736B1D2476DCFDA4C78;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
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
struct ValueTuple_2_t9E9C0D0322F308B1269C210EC6E1FE0D52061B04 
{
	int32_t ___Item1;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Item2;
};
struct ValueTuple_2_tB358DB210B9947851BE1C2586AD7532BEB639942 
{
	int32_t ___Item1;
	bool ___Item2;
};
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t401848AEFAD85958596581A12FE51C58224D202B 
{
	int32_t ___Item1;
	String_t* ___Item2;
};
struct ValueTuple_2_tE3CBF4947E2EEAEB4DC6C2F7877FFDA4AFCF3FAD 
{
	int32_t ___Item1;
	Il2CppSharedGenericObject* ___Item2;
};
struct ValueTuple_2_tC3AECC35C8C5A0E0288CD2C3BFF250D56BFCAB6E 
{
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t3014E6FF50941C6CE0596DCC7F74C81C8A9BC0E8 
{
	ScriptTypeDescriptor_t217D83EB2122B4DEA21A50E9525D681978EF27A9* ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t9700044DDBCB472B3F3F6E8691934C35DCD8E798 
{
	float ___Item1;
	float ___Item2;
};
struct ValueTuple_2_tDF58E88222DF6F172577426BC20BC23EB9CAB8C4 
{
	String_t* ___Item1;
	uint8_t ___Item2;
};
struct ValueTuple_2_tF34EACCF71A708BBFA7545E7D3A1298BB2019C7D 
{
	Type_t* ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 
{
	uint32_t ___Item1;
	uint32_t ___Item2;
};
struct ValueTuple_2_t58F922754242CA7DD28E75FAD3302597DBCB39EF 
{
	Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___Item1;
	float ___Item2;
};
struct ValueTuple_2_t2909147DB71401C73A2A1319B78B1703716F6C7F 
{
	WebConnection_tA0CBB804ED8C101A5D64C7C17C63949D763C53FC* ___Item1;
	bool ___Item2;
};
struct ValueTuple_2_t7A46D5C155CEB5421A6C27D6CBEEE8746FEF81E3 
{
	WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9* ___Item1;
	bool ___Item2;
};
typedef Il2CppFullySharedGenericStruct ValueTuple_2_tBB886D48FE1B678C16C81FC8DD0FAD326AA60D96;
typedef Il2CppFullySharedGenericStruct ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829;
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
struct GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB 
{
	int16_t ___U3CindexU3Ek__BackingField;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MachineLearningTensorShape_tB77DBE335F1F51D0E33C78CA2B10E79995ACF957 
{
	uint32_t ___rank;
	uint32_t ___D0;
	uint32_t ___D1;
	uint32_t ___D2;
	uint32_t ___D3;
	uint32_t ___D4;
	uint32_t ___D5;
	uint32_t ___D6;
	uint32_t ___D7;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct ValueTuple_2_tF0041945FE1FEEB3770B95F69A09EAC0A6D2CEAD 
{
	GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t7AE8E7A5A19F51E3A65342280939B177B13E11DC 
{
	intptr_t ___Item1;
	String_t* ___Item2;
};
struct ValueTuple_2_tF84FEBD8A912F24572EFCF15570D16C3346CEB6E 
{
	RuntimeObject* ___Item1;
	ValueTuple_2_tF34EACCF71A708BBFA7545E7D3A1298BB2019C7D ___Item2;
};
struct ValueTuple_2_tDBCAC88C96635D7EB29EBE0C3BEA340F68D6DE4E 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Item1;
	bool ___Item2;
};
struct ValueTuple_2_t05010CA1EDA09F02C7ADFC1E8C90141D6388EF26 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Item1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___Item2;
};
struct ValueTuple_2_t17C52585DB4A62738FC66EFB364F711F8FD236F6 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Item1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Item2;
};
struct EventModifiers_tB9DEEF73F8FC4C312B8E0C34336C7D9C3023B270 
{
	int32_t ___value__;
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
struct MachineLearningDataType_t7767160E484E4FA4F6C534972EEA59EC56BFC5F6 
{
	int32_t ___value__;
};
struct NativeTextInfo_t374114235115CC53DD8E337DD2ECB1EE4504FE19 
{
	intptr_t ___m_MeshInfosPtr;
	int32_t ___meshInfoCount;
	int32_t ___totalWidth;
	int32_t ___totalHeight;
	bool ___isElided;
};
struct NativeTextInfo_t374114235115CC53DD8E337DD2ECB1EE4504FE19_marshaled_pinvoke
{
	intptr_t ___m_MeshInfosPtr;
	int32_t ___meshInfoCount;
	int32_t ___totalWidth;
	int32_t ___totalHeight;
	int32_t ___isElided;
};
struct NativeTextInfo_t374114235115CC53DD8E337DD2ECB1EE4504FE19_marshaled_com
{
	intptr_t ___m_MeshInfosPtr;
	int32_t ___meshInfoCount;
	int32_t ___totalWidth;
	int32_t ___totalHeight;
	int32_t ___isElided;
};
struct NavigationDeviceType_t848E9C4AEC98044C60FBD9CCF9A460289562D90C 
{
	int32_t ___value__;
};
struct RenderGraphResourceType_t5F552AF06E38DEC5775B77F13C8783A895FCD086 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SType_tE3DFFE5B3B024FA464DDA118517A9392E882E1C4 
{
	uint8_t ___value__;
};
struct VisualElementFlags_t4D1066E11400967A1A2DA7331391ACDC4AA14409 
{
	int32_t ___value__;
};
struct VisualElementTransformFlags_t47F836489394ED28F75EAD7C76A8F70FAB5E4A10 
{
	int32_t ___value__;
};
struct ScopeTransitionType_t6E07CFC7F104E66937274EA67AF2704D03670F82 
{
	int32_t ___value__;
};
struct MessageType_t4D4BB9B792D5A93B6925CEE30CECB29566AD7A94 
{
	uint8_t ___value__;
};
struct ValueTuple_2_t08AE87B2F2362276BF074960D2251557CAB67F36 
{
	int32_t ___Item1;
	uint8_t ___Item2;
};
struct ValueTuple_2_t818B853441B2F4ACFFEF21303AA3AF885CFC28F2 
{
	int32_t ___Item1;
	MachineLearningTensorShape_tB77DBE335F1F51D0E33C78CA2B10E79995ACF957 ___Item2;
};
struct ValueTuple_2_t574B6BCEAD8D42DD3951CB8E7AE7E3687B044600 
{
	NativeTextInfo_t374114235115CC53DD8E337DD2ECB1EE4504FE19 ___Item1;
	bool ___Item2;
};
struct ValueTuple_2_t925C33637AABA7F7C2692FD105E0C00874C8C565 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t830CE206EC3AE35D63C87A86218FA8A287B7E282 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t225725AC1D0F8A5AECD63C25426AEE2326B8342A 
{
	Type_t* ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t4C3654491F7ADC0ACBB35A70F3152176BF3DBF1B 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t4EC9E7926C32073000FAA1B453C82EB5986A46FA 
{
	uint8_t ___Item1;
	IPayload_t623870586E14855228EEC736B1D2476DCFDA4C78* ___Item2;
};
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C 
{
	uint32_t ___m_VersionIndex;
	uint32_t ___m_Validity;
	int32_t ___m_Type;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	bool ___builtin;
};
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_pinvoke
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___builtin;
};
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_com
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___builtin;
};
struct ValueTuple_2_t441643900DE75EDC780AF50BC751CFA37BAA7C67 
{
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 ___Item1;
	int32_t ___Item2;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m691065991CED657BB7925B16C9C654A09F3292DA_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4FC09D4CA21099E02F8DA2E9E2DAC07DADDE7596_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_mF8C76C36693FDDA83BE43D8D76A91386E69A9959_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mBE4DB6C73A3970373B450757CC80C03D318C4269_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m4BA7B2997C6450C829DC80A188E4DD22AE712A75_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_m67662E6D7F40D4FD382E0E75F15CEC0B7FDDB429_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mFF86F83A0C3ECE4DBC8519A067043F2670CBAF0C_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IValueTupleInternal_GetHashCode_m9CF6EB50E064F7FFE19AF23697500FAB1168DE2B_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m3A385F535CA53166311E733E7699676231CFD10F_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_System_IValueTupleInternal_ToStringEnd_m00CF3AC7D704F0DB5D633B3D18B4CACEE08B8172_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Runtime_CompilerServices_ITuple_get_Length_m4228CA61B034F353ABC6547567B3D7F748B43ED8_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared (const RuntimeMethod* method) ;

inline void ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_gshared)((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)__this, ___0_item1, ___1_item2, method);
}
inline bool ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829, const RuntimeMethod*))ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085_gshared)((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)__this, ___0_other, method);
}
inline bool ValueTuple_2_Equals_m691065991CED657BB7925B16C9C654A09F3292DA (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_Equals_m691065991CED657BB7925B16C9C654A09F3292DA_gshared)(__this, ___0_obj, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline)(method);
}
inline bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4FC09D4CA21099E02F8DA2E9E2DAC07DADDE7596 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4FC09D4CA21099E02F8DA2E9E2DAC07DADDE7596_gshared)(__this, ___0_other, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
inline int32_t ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829, const RuntimeMethod*))ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7_gshared)((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)__this, ___0_other, method);
}
inline int32_t ValueTuple_2_System_IComparable_CompareTo_mF8C76C36693FDDA83BE43D8D76A91386E69A9959 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_IComparable_CompareTo_mF8C76C36693FDDA83BE43D8D76A91386E69A9959_gshared)(__this, ___0_other, method);
}
inline Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290 (const RuntimeMethod* method)
{
	return ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared)(method);
}
inline int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mBE4DB6C73A3970373B450757CC80C03D318C4269 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mBE4DB6C73A3970373B450757CC80C03D318C4269_gshared)(__this, ___0_other, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97 (int32_t ___0_h1, int32_t ___1_h2, const RuntimeMethod* method) ;
inline int32_t ValueTuple_2_GetHashCode_m4BA7B2997C6450C829DC80A188E4DD22AE712A75 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m4BA7B2997C6450C829DC80A188E4DD22AE712A75_gshared)(__this, method);
}
inline int32_t ValueTuple_2_GetHashCodeCore_m67662E6D7F40D4FD382E0E75F15CEC0B7FDDB429 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_GetHashCodeCore_m67662E6D7F40D4FD382E0E75F15CEC0B7FDDB429_gshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mFF86F83A0C3ECE4DBC8519A067043F2670CBAF0C (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mFF86F83A0C3ECE4DBC8519A067043F2670CBAF0C_gshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_2_System_IValueTupleInternal_GetHashCode_m9CF6EB50E064F7FFE19AF23697500FAB1168DE2B (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_IValueTupleInternal_GetHashCode_m9CF6EB50E064F7FFE19AF23697500FAB1168DE2B_gshared)(__this, ___0_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
inline String_t* ValueTuple_2_ToString_m3A385F535CA53166311E733E7699676231CFD10F (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, const RuntimeMethod*))ValueTuple_2_ToString_m3A385F535CA53166311E733E7699676231CFD10F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
inline String_t* ValueTuple_2_System_IValueTupleInternal_ToStringEnd_m00CF3AC7D704F0DB5D633B3D18B4CACEE08B8172 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, const RuntimeMethod*))ValueTuple_2_System_IValueTupleInternal_ToStringEnd_m00CF3AC7D704F0DB5D633B3D18B4CACEE08B8172_gshared)(__this, method);
}
inline int32_t ValueTuple_2_System_Runtime_CompilerServices_ITuple_get_Length_m4228CA61B034F353ABC6547567B3D7F748B43ED8 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, const RuntimeMethod*))ValueTuple_2_System_Runtime_CompilerServices_ITuple_get_Length_m4228CA61B034F353ABC6547567B3D7F748B43ED8_gshared)(__this, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared)(method);
}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0), L_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___1_item2 : &___1_item2), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1), L_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD(_thisAdjusted, ___0_item1, ___1_item2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m691065991CED657BB7925B16C9C654A09F3292DA_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_2 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_3;
		L_3 = ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085(__this, il2cpp_codegen_memcpy(L_2, (((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829)(ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_m691065991CED657BB7925B16C9C654A09F3292DA_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_m691065991CED657BB7925B16C9C654A09F3292DA(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_2 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_7 = L_2;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? L_3: *(void**)L_3));
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_7, ___0_other, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		NullCheck(L_5);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_8: *(void**)L_8));
		return L_9;
	}

IL_002f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085_AdjustorThunk (RuntimeObject* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4FC09D4CA21099E02F8DA2E9E2DAC07DADDE7596_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_6 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_13 = L_6;
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 V_0 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	memset(V_0, 0, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829)(ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)UnBox(L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_4);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_7);
		NullCheck(L_3);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_11);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_14);
		NullCheck(L_10);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		return L_16;
	}

IL_004f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4FC09D4CA21099E02F8DA2E9E2DAC07DADDE7596_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4FC09D4CA21099E02F8DA2E9E2DAC07DADDE7596(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_mF8C76C36693FDDA83BE43D8D76A91386E69A9959_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_2 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_9 = L_2;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		NullCheck((RuntimeObject*)L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		int32_t L_10;
		L_10 = ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7(__this, il2cpp_codegen_memcpy(L_9, (((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829)(ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)UnBox(L_8, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_IComparable_CompareTo_mF8C76C36693FDDA83BE43D8D76A91386E69A9959_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_IComparable_CompareTo_mF8C76C36693FDDA83BE43D8D76A91386E69A9959(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_2 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_9 = L_2;
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? L_3: *(void**)L_3));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_7;
		L_7 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_9, ___0_other, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		NullCheck(L_7);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_10: *(void**)L_10));
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7_AdjustorThunk (RuntimeObject* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mBE4DB6C73A3970373B450757CC80C03D318C4269_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_2 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_12 = L_2;
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_21 = L_2;
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 V_0 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	memset(V_0, 0, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		NullCheck((RuntimeObject*)L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829)(ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)UnBox(L_8, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		RuntimeObject* L_9 = ___1_comparer;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_10);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_13);
		NullCheck(L_9);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_9, L_11, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0060:
	{
		RuntimeObject* L_18 = ___1_comparer;
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_19);
		il2cpp_codegen_memcpy(L_21, V_0, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_22);
		NullCheck(L_18);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_20, L_23);
		return L_24;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mBE4DB6C73A3970373B450757CC80C03D318C4269_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mBE4DB6C73A3970373B450757CC80C03D318C4269(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m4BA7B2997C6450C829DC80A188E4DD22AE712A75_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_12 = L_10;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	memset(V_0, 0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	memset(V_1, 0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	memset(G_B2_0, 0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	int32_t G_B4_0 = 0;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	memset(G_B6_0, 0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_0);
		if (L_1)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
			goto IL_002a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
	}
	{
		il2cpp_codegen_memcpy(L_2, G_B1_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			goto IL_002a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23), (void*)G_B3_0, &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B4_0 = L_9;
	}

IL_0035:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		bool L_11 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_10);
		if (L_11)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)))));
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)))));
		G_B5_1 = G_B4_0;
	}
	{
		il2cpp_codegen_memcpy(L_12, G_B5_0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(V_1, L_12, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_13, V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_13);
		if (L_14)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		Il2CppConstrainedCallData L_16;
		Il2CppMethodPointer L_17 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24), (void*)G_B7_0, &L_16, L_15);
		typedef int32_t ( *func_L_18)(void*,const RuntimeMethod*);
		int32_t L_19 = ((func_L_18)L_17)(L_16.thisPtr,L_16.method);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		int32_t L_20;
		L_20 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(G_B8_1, G_B8_0, NULL);
		return L_20;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_GetHashCode_m4BA7B2997C6450C829DC80A188E4DD22AE712A75_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_GetHashCode_m4BA7B2997C6450C829DC80A188E4DD22AE712A75(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mFF86F83A0C3ECE4DBC8519A067043F2670CBAF0C_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_2_GetHashCodeCore_m67662E6D7F40D4FD382E0E75F15CEC0B7FDDB429(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mFF86F83A0C3ECE4DBC8519A067043F2670CBAF0C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mFF86F83A0C3ECE4DBC8519A067043F2670CBAF0C(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_m67662E6D7F40D4FD382E0E75F15CEC0B7FDDB429_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_1);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_4 = ___0_comparer;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_5);
		NullCheck(L_4);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_6);
		int32_t L_8;
		L_8 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(L_3, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_GetHashCodeCore_m67662E6D7F40D4FD382E0E75F15CEC0B7FDDB429_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_GetHashCodeCore_m67662E6D7F40D4FD382E0E75F15CEC0B7FDDB429(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IValueTupleInternal_GetHashCode_m9CF6EB50E064F7FFE19AF23697500FAB1168DE2B_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_2_GetHashCodeCore_m67662E6D7F40D4FD382E0E75F15CEC0B7FDDB429(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_IValueTupleInternal_GetHashCode_m9CF6EB50E064F7FFE19AF23697500FAB1168DE2B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_IValueTupleInternal_GetHashCode_m9CF6EB50E064F7FFE19AF23697500FAB1168DE2B(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m3A385F535CA53166311E733E7699676231CFD10F_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_17 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	memset(V_0, 0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	memset(V_1, 0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	memset(G_B2_0, 0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	memset(G_B6_0, 0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B1_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_6);
		if (L_7)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0045;
	}

IL_003a:
	{
		Il2CppConstrainedCallData L_9;
		Il2CppMethodPointer L_10 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28), (void*)G_B3_0, &L_9, L_8);
		typedef String_t* ( *func_L_11)(void*,const RuntimeMethod*);
		String_t* L_12 = ((func_L_11)L_10)(L_9.thisPtr,L_9.method);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		NullCheck(G_B4_2);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B4_3;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_15, V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		bool L_16 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_15);
		if (L_16)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)))));
			G_B7_1 = 3;
			G_B7_2 = L_14;
			G_B7_3 = L_14;
			goto IL_007a;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)))));
		G_B5_1 = 3;
		G_B5_2 = L_14;
		G_B5_3 = L_14;
	}
	{
		il2cpp_codegen_memcpy(L_17, G_B5_0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_18);
		if (L_19)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007a;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0085;
	}

IL_007a:
	{
		Il2CppConstrainedCallData L_21;
		Il2CppMethodPointer L_22 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29), (void*)G_B7_0, &L_21, L_20);
		typedef String_t* ( *func_L_23)(void*,const RuntimeMethod*);
		String_t* L_24 = ((func_L_23)L_22)(L_21.thisPtr,L_21.method);
		G_B8_0 = L_24;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		NullCheck(G_B8_2);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = G_B8_3;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_26;
		L_26 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_25, NULL);
		return L_26;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_2_ToString_m3A385F535CA53166311E733E7699676231CFD10F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_2_ToString_m3A385F535CA53166311E733E7699676231CFD10F(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_System_IValueTupleInternal_ToStringEnd_m00CF3AC7D704F0DB5D633B3D18B4CACEE08B8172_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_12 = L_10;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	memset(V_0, 0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	memset(V_1, 0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	memset(G_B2_0, 0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	String_t* G_B4_0 = NULL;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B7_2 = NULL;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	memset(G_B6_0, 0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	String_t* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	String_t* G_B8_2 = NULL;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_0);
		if (L_1)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
			goto IL_002a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
	}
	{
		il2cpp_codegen_memcpy(L_2, G_B1_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			goto IL_002a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		goto IL_0035;
	}

IL_002a:
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28), (void*)G_B3_0, &L_6, L_5);
		typedef String_t* ( *func_L_8)(void*,const RuntimeMethod*);
		String_t* L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B4_0 = L_9;
	}

IL_0035:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		bool L_11 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_10);
		if (L_11)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)))));
			G_B7_1 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
			G_B7_2 = G_B4_0;
			goto IL_0064;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)))));
		G_B5_1 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
		G_B5_2 = G_B4_0;
	}
	{
		il2cpp_codegen_memcpy(L_12, G_B5_0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(V_1, L_12, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_13, V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_13);
		if (L_14)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			goto IL_0064;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		goto IL_006f;
	}

IL_0064:
	{
		Il2CppConstrainedCallData L_16;
		Il2CppMethodPointer L_17 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29), (void*)G_B7_0, &L_16, L_15);
		typedef String_t* ( *func_L_18)(void*,const RuntimeMethod*);
		String_t* L_19 = ((func_L_18)L_17)(L_16.thisPtr,L_16.method);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_006f:
	{
		String_t* L_20;
		L_20 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B8_2, G_B8_1, G_B8_0, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		return L_20;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_2_System_IValueTupleInternal_ToStringEnd_m00CF3AC7D704F0DB5D633B3D18B4CACEE08B8172_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_2_System_IValueTupleInternal_ToStringEnd_m00CF3AC7D704F0DB5D633B3D18B4CACEE08B8172(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Runtime_CompilerServices_ITuple_get_Length_m4228CA61B034F353ABC6547567B3D7F748B43ED8_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return 2;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Runtime_CompilerServices_ITuple_get_Length_m4228CA61B034F353ABC6547567B3D7F748B43ED8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Runtime_CompilerServices_ITuple_get_Length_m4228CA61B034F353ABC6547567B3D7F748B43ED8(_thisAdjusted, method);
	return _returnValue;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0 = ((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_4 = V_0;
		return L_4;
	}
}
