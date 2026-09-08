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
struct Task_1_t13594BD064D52253F9CC25E4B5E593A08A8A881F;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BufferOffsetSize_t46A7671E4C06281BB2D4C4AC98A6263715BDAC71;
struct HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A;
struct IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8;
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8;
struct WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9;
struct IInput_tA336A8C821C040EC469D064AE0D59F6A6713C31E;

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
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 
{
	bool ___Item1;
};
struct ValueTuple_3_t6C5EE1D6FC24D28BEFABA73041F27430DA67F24D 
{
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ___Item1;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Item2;
	int32_t ___Item3;
};
typedef Il2CppFullySharedGenericStruct ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98;
typedef Il2CppFullySharedGenericStruct ValueTuple_4_tC84FAA888D71F1EEFA9404956966C93E7171155F;
struct ValueTuple_4_tA9D9E60B440115BD989F1F1FF6C209E6CFF37B4D 
{
	bool ___Item1;
	bool ___Item2;
	Task_1_t13594BD064D52253F9CC25E4B5E593A08A8A881F* ___Item3;
	WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* ___Item4;
};
struct ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA 
{
	uint8_t ___Item1;
	uint8_t ___Item2;
	uint8_t ___Item3;
	uint8_t ___Item4;
};
struct ValueTuple_4_t784C8D5C582AC2847ED64473EA0EEC79C2A500DD 
{
	int32_t ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
	int32_t ___Item4;
};
typedef Il2CppFullySharedGenericStruct ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F;
typedef Il2CppFullySharedGenericStruct ValueTuple_5_t0372F0E081F7940A88ECA2C5C0C5EBCD0CCCEDD8;
struct ValueTuple_5_tB20F533B613C3A284DF2DB06B100D3C182419098 
{
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* ___Item1;
	bool ___Item2;
	bool ___Item3;
	BufferOffsetSize_t46A7671E4C06281BB2D4C4AC98A6263715BDAC71* ___Item4;
	WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9* ___Item5;
};
typedef Il2CppFullySharedGenericStruct ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56;
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
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
struct ValueTuple_3_t0B34872478323DF7D99036588F9C4302DB1D93DC 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Item1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Item2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Item3;
};
typedef Il2CppFullySharedGenericStruct ValueTuple_3_t34750CDE6ACE638F856B4A634017B59174492309;
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	bool ___Item5;
};
struct ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	intptr_t ___Item5;
	int32_t ___Item6;
	bool ___Item7;
	ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 ___Rest;
};
struct BindingStatus_t72E69C73FEA899A1FE65BCA04E6B79E30157EB43 
{
	int32_t ___value__;
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
struct NavigationDeviceType_t848E9C4AEC98044C60FBD9CCF9A460289562D90C 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct Direction_t7783E528E50FAB7F36720CD0F263B96ED3DE80F8 
{
	int32_t ___value__;
};
struct ValueTuple_3_tAEDE7E99B302CFDAE4D7927105EE6014B0407F10 
{
	int32_t ___Item1;
	int32_t ___Item2;
	RuntimeObject* ___Item3;
};
struct ValueTuple_3_t7B77074A02A5A178E0792CA2F0C1F97CF1877D40 
{
	int32_t ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
};
struct ValueTuple_4_t371A20F56E5F22E5A33B94BFDB9F1C0F356BE280 
{
	int32_t ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___Item4;
};
struct BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB 
{
	int32_t ___U3CstatusU3Ek__BackingField;
	String_t* ___U3CmessageU3Ek__BackingField;
};
struct BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB_marshaled_pinvoke
{
	int32_t ___U3CstatusU3Ek__BackingField;
	char* ___U3CmessageU3Ek__BackingField;
};
struct BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB_marshaled_com
{
	int32_t ___U3CstatusU3Ek__BackingField;
	Il2CppChar* ___U3CmessageU3Ek__BackingField;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ValueTuple_4_t3F8C71A2E0F0EE198DA1968B4EA9B8BDA3DD9F6F 
{
	bool ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
	BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___Item4;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCodeCore_m33A8FA4704589007BFD95252E15C89CFDC3D7642_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_IValueTupleInternal_GetHashCode_mF4FA0E951A78739A0DA2416A08FFDE9388320AAA_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_3_System_IValueTupleInternal_ToStringEnd_mBA0C6359D2897615B5C51B341FB79F4F9C639F31_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Runtime_CompilerServices_ITuple_get_Length_m5C7DEC7C8EBD2A0F0FDFA89009D316BBBD41FC5A_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_4__ctor_mFF0D3A69E30DE69A5DB3A2559A8901F1E9851FCB_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, Il2CppFullySharedGenericAny ___3_item4, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_Equals_mA6E7E6D2B61BCEE388C695E55241E3D23B136E92_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_Equals_mB24DD728F77D42F7BA367887EE8BCC1AEAC2B86E_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m88F5EA4CCB9B7F414EB6FE747DCDBDC088459208_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_CompareTo_mFD48E2AA15064CAC797A24D6595473A41F755F23_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_IComparable_CompareTo_m9B7539113D2B5D30818A1A60D51E010B7DBE1BD8_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_m8EFEB9D7B5790959B79D8E53DD14DB1A038C304C_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_GetHashCode_mD228930A54E53FF9E9F3370361B0D81F05BBB828_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_GetHashCodeCore_m5E8ECC19294F8DFC3FBEA99FFC32F0D41D5FBA77_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_mE44B3DB721B4562AA53675B76D454998D8883828_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_IValueTupleInternal_GetHashCode_m611C902045E4669D57C34E6609AB0626823B19CD_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_4_ToString_m05CC5E764EFAAE3D2796762E7A3B9729474CF8D4_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_4_System_IValueTupleInternal_ToStringEnd_mC81C0F3DF892B61082B42A6CDE5A39B18F692814_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_Runtime_CompilerServices_ITuple_get_Length_m10BCA13E3F340EE4467F6DD105E60646F0D563F9_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m137533B18C66876071676469953787BAFAA5AEFF_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, Il2CppFullySharedGenericAny ___3_item4, Il2CppFullySharedGenericAny ___4_item5, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_mCAC2EA3BE3C748840BE08F742B272274BB7E171A_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IValueTupleInternal_GetHashCode_m76348DC65A7A91FB4C0B2994EFA9ECFE288F7E4F_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_System_IValueTupleInternal_ToStringEnd_m6CEF8C4D0881F16FD3EB0677334CB013A03D2D6D_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Runtime_CompilerServices_ITuple_get_Length_m8B407CEF945B739D7AB2AB153EE9EBEDCAA67755_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared (const RuntimeMethod* method) ;

inline void ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759_gshared)((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)__this, ___0_item1, ___1_item2, ___2_item3, method);
}
inline bool ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98, const RuntimeMethod*))ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4_gshared)((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)__this, ___0_other, method);
}
inline bool ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820_gshared)(__this, ___0_obj, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline)(method);
}
inline bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB_gshared)(__this, ___0_other, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
inline int32_t ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98, const RuntimeMethod*))ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377_gshared)((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)__this, ___0_other, method);
}
inline int32_t ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725_gshared)(__this, ___0_other, method);
}
inline Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290 (const RuntimeMethod* method)
{
	return ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared)(method);
}
inline int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B_gshared)(__this, ___0_other, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9 (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) ;
inline int32_t ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, const RuntimeMethod*))ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC_gshared)(__this, method);
}
inline int32_t ValueTuple_3_GetHashCodeCore_m33A8FA4704589007BFD95252E15C89CFDC3D7642 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_GetHashCodeCore_m33A8FA4704589007BFD95252E15C89CFDC3D7642_gshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A_gshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_3_System_IValueTupleInternal_GetHashCode_mF4FA0E951A78739A0DA2416A08FFDE9388320AAA (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_IValueTupleInternal_GetHashCode_mF4FA0E951A78739A0DA2416A08FFDE9388320AAA_gshared)(__this, ___0_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
inline String_t* ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, const RuntimeMethod*))ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744_gshared)(__this, method);
}
inline String_t* ValueTuple_3_System_IValueTupleInternal_ToStringEnd_mBA0C6359D2897615B5C51B341FB79F4F9C639F31 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, const RuntimeMethod*))ValueTuple_3_System_IValueTupleInternal_ToStringEnd_mBA0C6359D2897615B5C51B341FB79F4F9C639F31_gshared)(__this, method);
}
inline int32_t ValueTuple_3_System_Runtime_CompilerServices_ITuple_get_Length_m5C7DEC7C8EBD2A0F0FDFA89009D316BBBD41FC5A (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, const RuntimeMethod*))ValueTuple_3_System_Runtime_CompilerServices_ITuple_get_Length_m5C7DEC7C8EBD2A0F0FDFA89009D316BBBD41FC5A_gshared)(__this, method);
}
inline void ValueTuple_4__ctor_mFF0D3A69E30DE69A5DB3A2559A8901F1E9851FCB (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, Il2CppFullySharedGenericAny ___3_item4, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))ValueTuple_4__ctor_mFF0D3A69E30DE69A5DB3A2559A8901F1E9851FCB_gshared)((ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*)__this, ___0_item1, ___1_item2, ___2_item3, ___3_item4, method);
}
inline bool ValueTuple_4_Equals_mA6E7E6D2B61BCEE388C695E55241E3D23B136E92 (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F, const RuntimeMethod*))ValueTuple_4_Equals_mA6E7E6D2B61BCEE388C695E55241E3D23B136E92_gshared)((ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*)__this, ___0_other, method);
}
inline bool ValueTuple_4_Equals_mB24DD728F77D42F7BA367887EE8BCC1AEAC2B86E (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_Equals_mB24DD728F77D42F7BA367887EE8BCC1AEAC2B86E_gshared)(__this, ___0_obj, method);
}
inline bool ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m88F5EA4CCB9B7F414EB6FE747DCDBDC088459208 (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m88F5EA4CCB9B7F414EB6FE747DCDBDC088459208_gshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_4_CompareTo_mFD48E2AA15064CAC797A24D6595473A41F755F23 (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F, const RuntimeMethod*))ValueTuple_4_CompareTo_mFD48E2AA15064CAC797A24D6595473A41F755F23_gshared)((ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*)__this, ___0_other, method);
}
inline int32_t ValueTuple_4_System_IComparable_CompareTo_m9B7539113D2B5D30818A1A60D51E010B7DBE1BD8 (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_System_IComparable_CompareTo_m9B7539113D2B5D30818A1A60D51E010B7DBE1BD8_gshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_m8EFEB9D7B5790959B79D8E53DD14DB1A038C304C (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_m8EFEB9D7B5790959B79D8E53DD14DB1A038C304C_gshared)(__this, ___0_other, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m863E563B61FAA1177BECF19EE331D5B8574C5813 (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, int32_t ___3_h4, const RuntimeMethod* method) ;
inline int32_t ValueTuple_4_GetHashCode_mD228930A54E53FF9E9F3370361B0D81F05BBB828 (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, const RuntimeMethod*))ValueTuple_4_GetHashCode_mD228930A54E53FF9E9F3370361B0D81F05BBB828_gshared)(__this, method);
}
inline int32_t ValueTuple_4_GetHashCodeCore_m5E8ECC19294F8DFC3FBEA99FFC32F0D41D5FBA77 (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_GetHashCodeCore_m5E8ECC19294F8DFC3FBEA99FFC32F0D41D5FBA77_gshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_mE44B3DB721B4562AA53675B76D454998D8883828 (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_mE44B3DB721B4562AA53675B76D454998D8883828_gshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_4_System_IValueTupleInternal_GetHashCode_m611C902045E4669D57C34E6609AB0626823B19CD (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_System_IValueTupleInternal_GetHashCode_m611C902045E4669D57C34E6609AB0626823B19CD_gshared)(__this, ___0_comparer, method);
}
inline String_t* ValueTuple_4_ToString_m05CC5E764EFAAE3D2796762E7A3B9729474CF8D4 (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, const RuntimeMethod*))ValueTuple_4_ToString_m05CC5E764EFAAE3D2796762E7A3B9729474CF8D4_gshared)(__this, method);
}
inline String_t* ValueTuple_4_System_IValueTupleInternal_ToStringEnd_mC81C0F3DF892B61082B42A6CDE5A39B18F692814 (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, const RuntimeMethod*))ValueTuple_4_System_IValueTupleInternal_ToStringEnd_mC81C0F3DF892B61082B42A6CDE5A39B18F692814_gshared)(__this, method);
}
inline int32_t ValueTuple_4_System_Runtime_CompilerServices_ITuple_get_Length_m10BCA13E3F340EE4467F6DD105E60646F0D563F9 (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, const RuntimeMethod*))ValueTuple_4_System_Runtime_CompilerServices_ITuple_get_Length_m10BCA13E3F340EE4467F6DD105E60646F0D563F9_gshared)(__this, method);
}
inline void ValueTuple_5__ctor_m137533B18C66876071676469953787BAFAA5AEFF (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, Il2CppFullySharedGenericAny ___3_item4, Il2CppFullySharedGenericAny ___4_item5, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))ValueTuple_5__ctor_m137533B18C66876071676469953787BAFAA5AEFF_gshared)((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)__this, ___0_item1, ___1_item2, ___2_item3, ___3_item4, ___4_item5, method);
}
inline bool ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9 (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56, const RuntimeMethod*))ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9_gshared)((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)__this, ___0_other, method);
}
inline bool ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82 (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82_gshared)(__this, ___0_obj, method);
}
inline bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE_gshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56, const RuntimeMethod*))ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A_gshared)((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)__this, ___0_other, method);
}
inline int32_t ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F_gshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E_gshared)(__this, ___0_other, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, int32_t ___3_h4, int32_t ___4_h5, const RuntimeMethod* method) ;
inline int32_t ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0 (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, const RuntimeMethod*))ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0_gshared)(__this, method);
}
inline int32_t ValueTuple_5_GetHashCodeCore_mCAC2EA3BE3C748840BE08F742B272274BB7E171A (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_GetHashCodeCore_mCAC2EA3BE3C748840BE08F742B272274BB7E171A_gshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C_gshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_5_System_IValueTupleInternal_GetHashCode_m76348DC65A7A91FB4C0B2994EFA9ECFE288F7E4F (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_IValueTupleInternal_GetHashCode_m76348DC65A7A91FB4C0B2994EFA9ECFE288F7E4F_gshared)(__this, ___0_comparer, method);
}
inline String_t* ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814 (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, const RuntimeMethod*))ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814_gshared)(__this, method);
}
inline String_t* ValueTuple_5_System_IValueTupleInternal_ToStringEnd_m6CEF8C4D0881F16FD3EB0677334CB013A03D2D6D (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, const RuntimeMethod*))ValueTuple_5_System_IValueTupleInternal_ToStringEnd_m6CEF8C4D0881F16FD3EB0677334CB013A03D2D6D_gshared)(__this, method);
}
inline int32_t ValueTuple_5_System_Runtime_CompilerServices_ITuple_get_Length_m8B407CEF945B739D7AB2AB153EE9EBEDCAA67755 (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, const RuntimeMethod*))ValueTuple_5_System_Runtime_CompilerServices_ITuple_get_Length_m8B407CEF945B739D7AB2AB153EE9EBEDCAA67755_gshared)(__this, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0), L_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___1_item2 : &___1_item2), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1), L_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? ___2_item3 : &___2_item3), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2), L_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759(_thisAdjusted, ___0_item1, ___1_item2, ___2_item3, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_2 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
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
		L_3 = ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4(__this, il2cpp_codegen_memcpy(L_2, (((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98)(ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_2 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_7 = L_2;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_12 = L_2;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? L_3: *(void**)L_3));
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_7, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		NullCheck(L_5);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_10;
		L_10 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_12, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		NullCheck(L_10);
		bool L_14;
		L_14 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? L_13: *(void**)L_13));
		return L_14;
	}

IL_0047:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4_AdjustorThunk (RuntimeObject* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_6 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_13 = L_6;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_20 = L_6;
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 V_0 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	memset(V_0, 0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
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
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98)(ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)UnBox(L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_4);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_7);
		NullCheck(L_3);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_11);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_14);
		NullCheck(L_10);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		if (!L_16)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_17 = ___1_comparer;
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_18);
		il2cpp_codegen_memcpy(L_20, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_21);
		NullCheck(L_17);
		bool L_23;
		L_23 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_17, L_19, L_22);
		return L_23;
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_2 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_9 = L_2;
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
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
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
		L_10 = ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377(__this, il2cpp_codegen_memcpy(L_9, (((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98)(ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)UnBox(L_8, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_2 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_9 = L_2;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_16 = L_2;
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
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
		L_7 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_9, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		NullCheck(L_7);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_10: *(void**)L_10));
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_14;
		L_14 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_16, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		NullCheck(L_14);
		int32_t L_18;
		L_18 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? L_17: *(void**)L_17));
		return L_18;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377_AdjustorThunk (RuntimeObject* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_2 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_12 = L_2;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_21 = L_2;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_30 = L_2;
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 V_0 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	memset(V_0, 0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
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
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
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
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98)(ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)UnBox(L_8, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		RuntimeObject* L_9 = ___1_comparer;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_10);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
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
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_19);
		il2cpp_codegen_memcpy(L_21, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_22);
		NullCheck(L_18);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_20, L_23);
		V_1 = L_24;
		int32_t L_25 = V_1;
		if (!L_25)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_26 = V_1;
		return L_26;
	}

IL_0082:
	{
		RuntimeObject* L_27 = ___1_comparer;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_28);
		il2cpp_codegen_memcpy(L_30, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_31);
		NullCheck(L_27);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_27, L_29, L_32);
		return L_33;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_12 = L_10;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_22 = L_20;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	memset(V_0, 0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	memset(V_1, 0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	memset(V_2, 0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	memset(G_B2_0, 0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	int32_t G_B4_0 = 0;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	memset(G_B6_0, 0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	memset(G_B10_0, 0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_0);
		if (L_1)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
			goto IL_002a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
	}
	{
		il2cpp_codegen_memcpy(L_2, G_B1_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			goto IL_002a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32), (void*)G_B3_0, &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B4_0 = L_9;
	}

IL_0035:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
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
		il2cpp_codegen_memcpy(L_12, G_B5_0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(V_1, L_12, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_13, V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_13);
		if (L_14)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
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
		Il2CppMethodPointer L_17 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33), (void*)G_B7_0, &L_16, L_15);
		typedef int32_t ( *func_L_18)(void*,const RuntimeMethod*);
		int32_t L_19 = ((func_L_18)L_17)(L_16.thisPtr,L_16.method);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_20, V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_21 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_20);
		if (L_21)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))));
			G_B11_1 = G_B8_0;
			G_B11_2 = G_B8_1;
			goto IL_0094;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))));
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}
	{
		il2cpp_codegen_memcpy(L_22, G_B9_0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(V_2, L_22, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_23, V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_24 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_23);
		if (L_24)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0094;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		Il2CppConstrainedCallData L_26;
		Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 34), (void*)G_B11_0, &L_26, L_25);
		typedef int32_t ( *func_L_28)(void*,const RuntimeMethod*);
		int32_t L_29 = ((func_L_28)L_27)(L_26.thisPtr,L_26.method);
		G_B12_0 = L_29;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		int32_t L_30;
		L_30 = ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9(G_B12_2, G_B12_1, G_B12_0, NULL);
		return L_30;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_3_GetHashCodeCore_m33A8FA4704589007BFD95252E15C89CFDC3D7642(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 38));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCodeCore_m33A8FA4704589007BFD95252E15C89CFDC3D7642_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_1);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_4 = ___0_comparer;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_5);
		NullCheck(L_4);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_6);
		RuntimeObject* L_8 = ___0_comparer;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_9);
		NullCheck(L_8);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_10);
		int32_t L_12;
		L_12 = ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9(L_3, L_7, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_GetHashCodeCore_m33A8FA4704589007BFD95252E15C89CFDC3D7642_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_GetHashCodeCore_m33A8FA4704589007BFD95252E15C89CFDC3D7642(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_IValueTupleInternal_GetHashCode_mF4FA0E951A78739A0DA2416A08FFDE9388320AAA_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_3_GetHashCodeCore_m33A8FA4704589007BFD95252E15C89CFDC3D7642(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 38));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_IValueTupleInternal_GetHashCode_mF4FA0E951A78739A0DA2416A08FFDE9388320AAA_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_IValueTupleInternal_GetHashCode_mF4FA0E951A78739A0DA2416A08FFDE9388320AAA(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
	void* L_32 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_17 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_29 = L_27;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	memset(V_0, 0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	memset(V_1, 0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	memset(V_2, 0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
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
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	memset(G_B2_0, 0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
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
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	memset(G_B6_0, 0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	memset(G_B10_0, 0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
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
		il2cpp_codegen_memcpy(L_5, G_B1_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_6);
		if (L_7)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
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
		Il2CppMethodPointer L_10 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 39), (void*)G_B3_0, &L_9, L_8);
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
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_15, V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
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
		il2cpp_codegen_memcpy(L_17, G_B5_0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_18);
		if (L_19)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007a;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
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
		Il2CppMethodPointer L_22 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 40), (void*)G_B7_0, &L_21, L_20);
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
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_27, V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_28 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_27);
		if (L_28)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))));
			G_B11_1 = 5;
			G_B11_2 = L_26;
			G_B11_3 = L_26;
			goto IL_00ba;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))));
		G_B9_1 = 5;
		G_B9_2 = L_26;
		G_B9_3 = L_26;
	}
	{
		il2cpp_codegen_memcpy(L_29, G_B9_0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_30, V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_30);
		if (L_31)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00ba;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c5;
	}

IL_00ba:
	{
		Il2CppConstrainedCallData L_33;
		Il2CppMethodPointer L_34 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 41), (void*)G_B11_0, &L_33, L_32);
		typedef String_t* ( *func_L_35)(void*,const RuntimeMethod*);
		String_t* L_36 = ((func_L_35)L_34)(L_33.thisPtr,L_33.method);
		G_B12_0 = L_36;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c5:
	{
		NullCheck(G_B12_2);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = G_B12_3;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_38;
		L_38 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_37, NULL);
		return L_38;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_3_System_IValueTupleInternal_ToStringEnd_mBA0C6359D2897615B5C51B341FB79F4F9C639F31_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
	void* L_31 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_16 = L_14;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_28 = L_26;
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	memset(V_0, 0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	memset(V_1, 0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	memset(V_2, 0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
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
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	memset(G_B2_0, 0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
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
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	memset(G_B6_0, 0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	memset(G_B10_0, 0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_2);
		if (L_3)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
			G_B3_1 = 0;
			G_B3_2 = L_1;
			G_B3_3 = L_1;
			goto IL_0032;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
		G_B1_1 = 0;
		G_B1_2 = L_1;
		G_B1_3 = L_1;
	}
	{
		il2cpp_codegen_memcpy(L_4, G_B1_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_6 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_5);
		if (L_6)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_0032;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_003d;
	}

IL_0032:
	{
		Il2CppConstrainedCallData L_8;
		Il2CppMethodPointer L_9 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 39), (void*)G_B3_0, &L_8, L_7);
		typedef String_t* ( *func_L_10)(void*,const RuntimeMethod*);
		String_t* L_11 = ((func_L_10)L_9)(L_8.thisPtr,L_8.method);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_003d:
	{
		NullCheck(G_B4_2);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = G_B4_3;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_14, V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_15 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_14);
		if (L_15)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)))));
			G_B7_1 = 2;
			G_B7_2 = L_13;
			G_B7_3 = L_13;
			goto IL_0072;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)))));
		G_B5_1 = 2;
		G_B5_2 = L_13;
		G_B5_3 = L_13;
	}
	{
		il2cpp_codegen_memcpy(L_16, G_B5_0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(V_1, L_16, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_17, V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_18 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_17);
		if (L_18)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_0072;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_007d;
	}

IL_0072:
	{
		Il2CppConstrainedCallData L_20;
		Il2CppMethodPointer L_21 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 40), (void*)G_B7_0, &L_20, L_19);
		typedef String_t* ( *func_L_22)(void*,const RuntimeMethod*);
		String_t* L_23 = ((func_L_22)L_21)(L_20.thisPtr,L_20.method);
		G_B8_0 = L_23;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_007d:
	{
		NullCheck(G_B8_2);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = G_B8_3;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_26, V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_27 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_26);
		if (L_27)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))));
			G_B11_1 = 4;
			G_B11_2 = L_25;
			G_B11_3 = L_25;
			goto IL_00b2;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))));
		G_B9_1 = 4;
		G_B9_2 = L_25;
		G_B9_3 = L_25;
	}
	{
		il2cpp_codegen_memcpy(L_28, G_B9_0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(V_2, L_28, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_29, V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_30 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_29);
		if (L_30)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00b2;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00bd;
	}

IL_00b2:
	{
		Il2CppConstrainedCallData L_32;
		Il2CppMethodPointer L_33 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 41), (void*)G_B11_0, &L_32, L_31);
		typedef String_t* ( *func_L_34)(void*,const RuntimeMethod*);
		String_t* L_35 = ((func_L_34)L_33)(L_32.thisPtr,L_32.method);
		G_B12_0 = L_35;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00bd:
	{
		NullCheck(G_B12_2);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = G_B12_3;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_37;
		L_37 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_36, NULL);
		return L_37;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_3_System_IValueTupleInternal_ToStringEnd_mBA0C6359D2897615B5C51B341FB79F4F9C639F31_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_3_System_IValueTupleInternal_ToStringEnd_mBA0C6359D2897615B5C51B341FB79F4F9C639F31(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Runtime_CompilerServices_ITuple_get_Length_m5C7DEC7C8EBD2A0F0FDFA89009D316BBBD41FC5A_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return 3;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_Runtime_CompilerServices_ITuple_get_Length_m5C7DEC7C8EBD2A0F0FDFA89009D316BBBD41FC5A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_Runtime_CompilerServices_ITuple_get_Length_m5C7DEC7C8EBD2A0F0FDFA89009D316BBBD41FC5A(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_4__ctor_mFF0D3A69E30DE69A5DB3A2559A8901F1E9851FCB_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, Il2CppFullySharedGenericAny ___3_item4, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0), L_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___1_item2 : &___1_item2), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1), L_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? ___2_item3 : &___2_item3), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2), L_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? ___3_item4 : &___3_item4), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3), L_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_4__ctor_mFF0D3A69E30DE69A5DB3A2559A8901F1E9851FCB_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, Il2CppFullySharedGenericAny ___3_item4, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	ValueTuple_4__ctor_mFF0D3A69E30DE69A5DB3A2559A8901F1E9851FCB(_thisAdjusted, ___0_item1, ___1_item2, ___2_item3, ___3_item4, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_Equals_mB24DD728F77D42F7BA367887EE8BCC1AEAC2B86E_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_2 = alloca(SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
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
		L_3 = ValueTuple_4_Equals_mA6E7E6D2B61BCEE388C695E55241E3D23B136E92(__this, il2cpp_codegen_memcpy(L_2, (((ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F)(ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_4_Equals_mB24DD728F77D42F7BA367887EE8BCC1AEAC2B86E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_4_Equals_mB24DD728F77D42F7BA367887EE8BCC1AEAC2B86E(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_Equals_mA6E7E6D2B61BCEE388C695E55241E3D23B136E92_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_2 = alloca(SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_7 = L_2;
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_12 = L_2;
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_17 = L_2;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? L_3: *(void**)L_3));
		if (!L_4)
		{
			goto IL_005f;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(L_7, ___0_other, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		NullCheck(L_5);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_10;
		L_10 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(L_12, ___0_other, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		NullCheck(L_10);
		bool L_14;
		L_14 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? L_13: *(void**)L_13));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_15;
		L_15 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(L_17, ___0_other, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		NullCheck(L_15);
		bool L_19;
		L_19 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_16: *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_18: *(void**)L_18));
		return L_19;
	}

IL_005f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_4_Equals_mA6E7E6D2B61BCEE388C695E55241E3D23B136E92_AdjustorThunk (RuntimeObject* __this, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F ___0_other, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_4_Equals_mA6E7E6D2B61BCEE388C695E55241E3D23B136E92(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m88F5EA4CCB9B7F414EB6FE747DCDBDC088459208_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_6 = alloca(SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_13 = L_6;
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_20 = L_6;
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_27 = L_6;
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F V_0 = alloca(SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
	memset(V_0, 0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
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
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F)(ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*)UnBox(L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_4);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_7);
		NullCheck(L_3);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_11);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_14);
		NullCheck(L_10);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		if (!L_16)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_17 = ___1_comparer;
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_18);
		il2cpp_codegen_memcpy(L_20, V_0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_21);
		NullCheck(L_17);
		bool L_23;
		L_23 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_17, L_19, L_22);
		if (!L_23)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_24 = ___1_comparer;
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		RuntimeObject* L_26 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_25);
		il2cpp_codegen_memcpy(L_27, V_0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_28);
		NullCheck(L_24);
		bool L_30;
		L_30 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_24, L_26, L_29);
		return L_30;
	}

IL_008b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m88F5EA4CCB9B7F414EB6FE747DCDBDC088459208_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m88F5EA4CCB9B7F414EB6FE747DCDBDC088459208(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_IComparable_CompareTo_m9B7539113D2B5D30818A1A60D51E010B7DBE1BD8_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_2 = alloca(SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_9 = L_2;
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
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
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
		L_10 = ValueTuple_4_CompareTo_mFD48E2AA15064CAC797A24D6595473A41F755F23(__this, il2cpp_codegen_memcpy(L_9, (((ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F)(ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*)UnBox(L_8, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_System_IComparable_CompareTo_m9B7539113D2B5D30818A1A60D51E010B7DBE1BD8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_System_IComparable_CompareTo_m9B7539113D2B5D30818A1A60D51E010B7DBE1BD8(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_CompareTo_mFD48E2AA15064CAC797A24D6595473A41F755F23_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_2 = alloca(SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_9 = L_2;
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_16 = L_2;
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_23 = L_2;
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
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
		L_7 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(L_9, ___0_other, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		NullCheck(L_7);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_10: *(void**)L_10));
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_14;
		L_14 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(L_16, ___0_other, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		NullCheck(L_14);
		int32_t L_18;
		L_18 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? L_17: *(void**)L_17));
		V_0 = L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return L_20;
	}

IL_0054:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_21;
		L_21 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 37));
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(L_23, ___0_other, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		NullCheck(L_21);
		int32_t L_25;
		L_25 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_22: *(void**)L_22), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_24: *(void**)L_24));
		return L_25;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_CompareTo_mFD48E2AA15064CAC797A24D6595473A41F755F23_AdjustorThunk (RuntimeObject* __this, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F ___0_other, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_CompareTo_mFD48E2AA15064CAC797A24D6595473A41F755F23(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_m8EFEB9D7B5790959B79D8E53DD14DB1A038C304C_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_37 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const Il2CppFullySharedGenericAny L_40 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_2 = alloca(SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_12 = L_2;
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_21 = L_2;
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_30 = L_2;
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_39 = L_2;
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F V_0 = alloca(SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
	memset(V_0, 0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
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
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
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
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F)(ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*)UnBox(L_8, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		RuntimeObject* L_9 = ___1_comparer;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_10);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
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
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_19);
		il2cpp_codegen_memcpy(L_21, V_0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_22);
		NullCheck(L_18);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_20, L_23);
		V_1 = L_24;
		int32_t L_25 = V_1;
		if (!L_25)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_26 = V_1;
		return L_26;
	}

IL_0082:
	{
		RuntimeObject* L_27 = ___1_comparer;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_28);
		il2cpp_codegen_memcpy(L_30, V_0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_31);
		NullCheck(L_27);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_27, L_29, L_32);
		V_1 = L_33;
		int32_t L_34 = V_1;
		if (!L_34)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_35 = V_1;
		return L_35;
	}

IL_00a4:
	{
		RuntimeObject* L_36 = ___1_comparer;
		il2cpp_codegen_memcpy(L_37, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		RuntimeObject* L_38 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_37);
		il2cpp_codegen_memcpy(L_39, V_0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_40, il2cpp_codegen_get_instance_field_data_pointer(L_39, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_40);
		NullCheck(L_36);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_36, L_38, L_41);
		return L_42;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_m8EFEB9D7B5790959B79D8E53DD14DB1A038C304C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_m8EFEB9D7B5790959B79D8E53DD14DB1A038C304C(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_GetHashCode_mD228930A54E53FF9E9F3370361B0D81F05BBB828_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	void* L_35 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_12 = L_10;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_22 = L_20;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const Il2CppFullySharedGenericAny L_32 = L_30;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	memset(V_0, 0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	memset(V_1, 0, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	memset(V_2, 0, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	memset(V_3, 0, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	memset(G_B2_0, 0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	int32_t G_B4_0 = 0;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	memset(G_B6_0, 0, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	memset(G_B10_0, 0, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	Il2CppFullySharedGenericAny* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	Il2CppFullySharedGenericAny* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B13_3 = 0;
	Il2CppFullySharedGenericAny G_B14_0 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	memset(G_B14_0, 0, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_0);
		if (L_1)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
			goto IL_002a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
	}
	{
		il2cpp_codegen_memcpy(L_2, G_B1_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			goto IL_002a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 41), (void*)G_B3_0, &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B4_0 = L_9;
	}

IL_0035:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
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
		il2cpp_codegen_memcpy(L_12, G_B5_0, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(V_1, L_12, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(L_13, V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_13);
		if (L_14)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
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
		Il2CppMethodPointer L_17 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 42), (void*)G_B7_0, &L_16, L_15);
		typedef int32_t ( *func_L_18)(void*,const RuntimeMethod*);
		int32_t L_19 = ((func_L_18)L_17)(L_16.thisPtr,L_16.method);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(L_20, V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		bool L_21 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_20);
		if (L_21)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))));
			G_B11_1 = G_B8_0;
			G_B11_2 = G_B8_1;
			goto IL_0094;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))));
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}
	{
		il2cpp_codegen_memcpy(L_22, G_B9_0, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(V_2, L_22, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(L_23, V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		bool L_24 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_23);
		if (L_24)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0094;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		Il2CppConstrainedCallData L_26;
		Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 43), (void*)G_B11_0, &L_26, L_25);
		typedef int32_t ( *func_L_28)(void*,const RuntimeMethod*);
		int32_t L_29 = ((func_L_28)L_27)(L_26.thisPtr,L_26.method);
		G_B12_0 = L_29;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(L_30, V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_30);
		if (L_31)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)))));
			G_B15_1 = G_B12_0;
			G_B15_2 = G_B12_1;
			G_B15_3 = G_B12_2;
			goto IL_00c9;
		}
		G_B13_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)))));
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}
	{
		il2cpp_codegen_memcpy(L_32, G_B13_0, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(V_3, L_32, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(L_33, V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		bool L_34 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_33);
		if (L_34)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00c9;
		}
		il2cpp_codegen_memcpy(G_B14_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00d4;
	}

IL_00c9:
	{
		Il2CppConstrainedCallData L_36;
		Il2CppMethodPointer L_37 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 44), (void*)G_B15_0, &L_36, L_35);
		typedef int32_t ( *func_L_38)(void*,const RuntimeMethod*);
		int32_t L_39 = ((func_L_38)L_37)(L_36.thisPtr,L_36.method);
		G_B16_0 = L_39;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		int32_t L_40;
		L_40 = ValueTuple_CombineHashCodes_m863E563B61FAA1177BECF19EE331D5B8574C5813(G_B16_3, G_B16_2, G_B16_1, G_B16_0, NULL);
		return L_40;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_GetHashCode_mD228930A54E53FF9E9F3370361B0D81F05BBB828_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_GetHashCode_mD228930A54E53FF9E9F3370361B0D81F05BBB828(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_mE44B3DB721B4562AA53675B76D454998D8883828_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_4_GetHashCodeCore_m5E8ECC19294F8DFC3FBEA99FFC32F0D41D5FBA77(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 49));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_mE44B3DB721B4562AA53675B76D454998D8883828_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_mE44B3DB721B4562AA53675B76D454998D8883828(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_GetHashCodeCore_m5E8ECC19294F8DFC3FBEA99FFC32F0D41D5FBA77_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_1);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_4 = ___0_comparer;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_5);
		NullCheck(L_4);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_6);
		RuntimeObject* L_8 = ___0_comparer;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_9);
		NullCheck(L_8);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_10);
		RuntimeObject* L_12 = ___0_comparer;
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_13);
		NullCheck(L_12);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_14);
		int32_t L_16;
		L_16 = ValueTuple_CombineHashCodes_m863E563B61FAA1177BECF19EE331D5B8574C5813(L_3, L_7, L_11, L_15, NULL);
		return L_16;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_GetHashCodeCore_m5E8ECC19294F8DFC3FBEA99FFC32F0D41D5FBA77_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_GetHashCodeCore_m5E8ECC19294F8DFC3FBEA99FFC32F0D41D5FBA77(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_IValueTupleInternal_GetHashCode_m611C902045E4669D57C34E6609AB0626823B19CD_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_4_GetHashCodeCore_m5E8ECC19294F8DFC3FBEA99FFC32F0D41D5FBA77(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 49));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_System_IValueTupleInternal_GetHashCode_m611C902045E4669D57C34E6609AB0626823B19CD_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_System_IValueTupleInternal_GetHashCode_m611C902045E4669D57C34E6609AB0626823B19CD(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_4_ToString_m05CC5E764EFAAE3D2796762E7A3B9729474CF8D4_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
	void* L_32 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	void* L_44 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_17 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_29 = L_27;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_39 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const Il2CppFullySharedGenericAny L_41 = L_39;
	const Il2CppFullySharedGenericAny L_42 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	memset(V_0, 0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	memset(V_1, 0, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	memset(V_2, 0, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	memset(V_3, 0, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
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
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	memset(G_B2_0, 0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
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
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	memset(G_B6_0, 0, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	memset(G_B10_0, 0, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	Il2CppFullySharedGenericAny* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_3 = NULL;
	Il2CppFullySharedGenericAny* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_3 = NULL;
	Il2CppFullySharedGenericAny G_B14_0 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	memset(G_B14_0, 0, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	int32_t G_B14_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003b;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B1_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_6);
		if (L_7)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003b;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0046;
	}

IL_003b:
	{
		Il2CppConstrainedCallData L_9;
		Il2CppMethodPointer L_10 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 50), (void*)G_B3_0, &L_9, L_8);
		typedef String_t* ( *func_L_11)(void*,const RuntimeMethod*);
		String_t* L_12 = ((func_L_11)L_10)(L_9.thisPtr,L_9.method);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		NullCheck(G_B4_2);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B4_3;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(L_15, V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		bool L_16 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_15);
		if (L_16)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)))));
			G_B7_1 = 3;
			G_B7_2 = L_14;
			G_B7_3 = L_14;
			goto IL_007b;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)))));
		G_B5_1 = 3;
		G_B5_2 = L_14;
		G_B5_3 = L_14;
	}
	{
		il2cpp_codegen_memcpy(L_17, G_B5_0, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_18);
		if (L_19)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007b;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0086;
	}

IL_007b:
	{
		Il2CppConstrainedCallData L_21;
		Il2CppMethodPointer L_22 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 51), (void*)G_B7_0, &L_21, L_20);
		typedef String_t* ( *func_L_23)(void*,const RuntimeMethod*);
		String_t* L_24 = ((func_L_23)L_22)(L_21.thisPtr,L_21.method);
		G_B8_0 = L_24;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		NullCheck(G_B8_2);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = G_B8_3;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(L_27, V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		bool L_28 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_27);
		if (L_28)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))));
			G_B11_1 = 5;
			G_B11_2 = L_26;
			G_B11_3 = L_26;
			goto IL_00bb;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))));
		G_B9_1 = 5;
		G_B9_2 = L_26;
		G_B9_3 = L_26;
	}
	{
		il2cpp_codegen_memcpy(L_29, G_B9_0, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(L_30, V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_30);
		if (L_31)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00bb;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c6;
	}

IL_00bb:
	{
		Il2CppConstrainedCallData L_33;
		Il2CppMethodPointer L_34 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 52), (void*)G_B11_0, &L_33, L_32);
		typedef String_t* ( *func_L_35)(void*,const RuntimeMethod*);
		String_t* L_36 = ((func_L_35)L_34)(L_33.thisPtr,L_33.method);
		G_B12_0 = L_36;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		NullCheck(G_B12_2);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = G_B12_3;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(L_39, V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		bool L_40 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_39);
		if (L_40)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)))));
			G_B15_1 = 7;
			G_B15_2 = L_38;
			G_B15_3 = L_38;
			goto IL_00fb;
		}
		G_B13_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)))));
		G_B13_1 = 7;
		G_B13_2 = L_38;
		G_B13_3 = L_38;
	}
	{
		il2cpp_codegen_memcpy(L_41, G_B13_0, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(V_3, L_41, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(L_42, V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		bool L_43 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_42);
		if (L_43)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00fb;
		}
		il2cpp_codegen_memcpy(G_B14_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_0106;
	}

IL_00fb:
	{
		Il2CppConstrainedCallData L_45;
		Il2CppMethodPointer L_46 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 53), (void*)G_B15_0, &L_45, L_44);
		typedef String_t* ( *func_L_47)(void*,const RuntimeMethod*);
		String_t* L_48 = ((func_L_47)L_46)(L_45.thisPtr,L_45.method);
		G_B16_0 = L_48;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		NullCheck(G_B16_2);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = G_B16_3;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_50;
		L_50 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_49, NULL);
		return L_50;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_4_ToString_m05CC5E764EFAAE3D2796762E7A3B9729474CF8D4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_4_ToString_m05CC5E764EFAAE3D2796762E7A3B9729474CF8D4(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_4_System_IValueTupleInternal_ToStringEnd_mC81C0F3DF892B61082B42A6CDE5A39B18F692814_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
	void* L_31 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	void* L_43 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_16 = L_14;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_28 = L_26;
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_38 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const Il2CppFullySharedGenericAny L_40 = L_38;
	const Il2CppFullySharedGenericAny L_41 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	memset(V_0, 0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	memset(V_1, 0, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	memset(V_2, 0, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	memset(V_3, 0, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
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
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	memset(G_B2_0, 0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
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
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	memset(G_B6_0, 0, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	memset(G_B10_0, 0, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	Il2CppFullySharedGenericAny* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_3 = NULL;
	Il2CppFullySharedGenericAny* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_3 = NULL;
	Il2CppFullySharedGenericAny G_B14_0 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	memset(G_B14_0, 0, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	int32_t G_B14_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_2);
		if (L_3)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
			G_B3_1 = 0;
			G_B3_2 = L_1;
			G_B3_3 = L_1;
			goto IL_0032;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
		G_B1_1 = 0;
		G_B1_2 = L_1;
		G_B1_3 = L_1;
	}
	{
		il2cpp_codegen_memcpy(L_4, G_B1_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		bool L_6 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_5);
		if (L_6)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_0032;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_003d;
	}

IL_0032:
	{
		Il2CppConstrainedCallData L_8;
		Il2CppMethodPointer L_9 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 50), (void*)G_B3_0, &L_8, L_7);
		typedef String_t* ( *func_L_10)(void*,const RuntimeMethod*);
		String_t* L_11 = ((func_L_10)L_9)(L_8.thisPtr,L_8.method);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_003d:
	{
		NullCheck(G_B4_2);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = G_B4_3;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(L_14, V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		bool L_15 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_14);
		if (L_15)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)))));
			G_B7_1 = 2;
			G_B7_2 = L_13;
			G_B7_3 = L_13;
			goto IL_0072;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)))));
		G_B5_1 = 2;
		G_B5_2 = L_13;
		G_B5_3 = L_13;
	}
	{
		il2cpp_codegen_memcpy(L_16, G_B5_0, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(V_1, L_16, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(L_17, V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		bool L_18 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_17);
		if (L_18)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_0072;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_007d;
	}

IL_0072:
	{
		Il2CppConstrainedCallData L_20;
		Il2CppMethodPointer L_21 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 51), (void*)G_B7_0, &L_20, L_19);
		typedef String_t* ( *func_L_22)(void*,const RuntimeMethod*);
		String_t* L_23 = ((func_L_22)L_21)(L_20.thisPtr,L_20.method);
		G_B8_0 = L_23;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_007d:
	{
		NullCheck(G_B8_2);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = G_B8_3;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(L_26, V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		bool L_27 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_26);
		if (L_27)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))));
			G_B11_1 = 4;
			G_B11_2 = L_25;
			G_B11_3 = L_25;
			goto IL_00b2;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))));
		G_B9_1 = 4;
		G_B9_2 = L_25;
		G_B9_3 = L_25;
	}
	{
		il2cpp_codegen_memcpy(L_28, G_B9_0, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(V_2, L_28, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(L_29, V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		bool L_30 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_29);
		if (L_30)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00b2;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00bd;
	}

IL_00b2:
	{
		Il2CppConstrainedCallData L_32;
		Il2CppMethodPointer L_33 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 52), (void*)G_B11_0, &L_32, L_31);
		typedef String_t* ( *func_L_34)(void*,const RuntimeMethod*);
		String_t* L_35 = ((func_L_34)L_33)(L_32.thisPtr,L_32.method);
		G_B12_0 = L_35;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00bd:
	{
		NullCheck(G_B12_2);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = G_B12_3;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(L_38, V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		bool L_39 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_38);
		if (L_39)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)))));
			G_B15_1 = 6;
			G_B15_2 = L_37;
			G_B15_3 = L_37;
			goto IL_00f2;
		}
		G_B13_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)))));
		G_B13_1 = 6;
		G_B13_2 = L_37;
		G_B13_3 = L_37;
	}
	{
		il2cpp_codegen_memcpy(L_40, G_B13_0, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(V_3, L_40, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(L_41, V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		bool L_42 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_41);
		if (L_42)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00f2;
		}
		il2cpp_codegen_memcpy(G_B14_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00fd;
	}

IL_00f2:
	{
		Il2CppConstrainedCallData L_44;
		Il2CppMethodPointer L_45 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 53), (void*)G_B15_0, &L_44, L_43);
		typedef String_t* ( *func_L_46)(void*,const RuntimeMethod*);
		String_t* L_47 = ((func_L_46)L_45)(L_44.thisPtr,L_44.method);
		G_B16_0 = L_47;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00fd:
	{
		NullCheck(G_B16_2);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = G_B16_3;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_49;
		L_49 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_48, NULL);
		return L_49;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_4_System_IValueTupleInternal_ToStringEnd_mC81C0F3DF892B61082B42A6CDE5A39B18F692814_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_4_System_IValueTupleInternal_ToStringEnd_mC81C0F3DF892B61082B42A6CDE5A39B18F692814(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_Runtime_CompilerServices_ITuple_get_Length_m10BCA13E3F340EE4467F6DD105E60646F0D563F9_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return 4;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_System_Runtime_CompilerServices_ITuple_get_Length_m10BCA13E3F340EE4467F6DD105E60646F0D563F9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_System_Runtime_CompilerServices_ITuple_get_Length_m10BCA13E3F340EE4467F6DD105E60646F0D563F9(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m137533B18C66876071676469953787BAFAA5AEFF_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, Il2CppFullySharedGenericAny ___3_item4, Il2CppFullySharedGenericAny ___4_item5, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0), L_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___1_item2 : &___1_item2), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1), L_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? ___2_item3 : &___2_item3), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2), L_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? ___3_item4 : &___3_item4), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3), L_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? ___4_item5 : &___4_item5), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4), L_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_5__ctor_m137533B18C66876071676469953787BAFAA5AEFF_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, Il2CppFullySharedGenericAny ___3_item4, Il2CppFullySharedGenericAny ___4_item5, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	ValueTuple_5__ctor_m137533B18C66876071676469953787BAFAA5AEFF(_thisAdjusted, ___0_item1, ___1_item2, ___2_item3, ___3_item4, ___4_item5, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_2 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
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
		L_3 = ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9(__this, il2cpp_codegen_memcpy(L_2, (((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56)(ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_2 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_7 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_12 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_17 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_22 = L_2;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? L_3: *(void**)L_3));
		if (!L_4)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_7, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		NullCheck(L_5);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_10;
		L_10 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_12, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		NullCheck(L_10);
		bool L_14;
		L_14 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? L_13: *(void**)L_13));
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_15;
		L_15 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_17, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		NullCheck(L_15);
		bool L_19;
		L_19 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_16: *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_18: *(void**)L_18));
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_20;
		L_20 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_22, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_23, il2cpp_codegen_get_instance_field_data_pointer(L_22, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_23: *(void**)L_23));
		return L_24;
	}

IL_0077:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9_AdjustorThunk (RuntimeObject* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_32 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_6 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_13 = L_6;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_20 = L_6;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_27 = L_6;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_34 = L_6;
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 V_0 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	memset(V_0, 0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
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
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56)(ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)UnBox(L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_4);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_7);
		NullCheck(L_3);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_11);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_14);
		NullCheck(L_10);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_17 = ___1_comparer;
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_18);
		il2cpp_codegen_memcpy(L_20, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_21);
		NullCheck(L_17);
		bool L_23;
		L_23 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_17, L_19, L_22);
		if (!L_23)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_24 = ___1_comparer;
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_26 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_25);
		il2cpp_codegen_memcpy(L_27, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_28);
		NullCheck(L_24);
		bool L_30;
		L_30 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_24, L_26, L_29);
		if (!L_30)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_31 = ___1_comparer;
		il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_32);
		il2cpp_codegen_memcpy(L_34, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_35, il2cpp_codegen_get_instance_field_data_pointer(L_34, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_35);
		NullCheck(L_31);
		bool L_37;
		L_37 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_31, L_33, L_36);
		return L_37;
	}

IL_00a9:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_2 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_9 = L_2;
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
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
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
		L_10 = ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A(__this, il2cpp_codegen_memcpy(L_9, (((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56)(ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)UnBox(L_8, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_2 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_9 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_16 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_23 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_30 = L_2;
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
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
		L_7 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 34));
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_9, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		NullCheck(L_7);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_10: *(void**)L_10));
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_14;
		L_14 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 38));
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_16, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		NullCheck(L_14);
		int32_t L_18;
		L_18 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? L_17: *(void**)L_17));
		V_0 = L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return L_20;
	}

IL_0054:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_21;
		L_21 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 42));
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_23, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		NullCheck(L_21);
		int32_t L_25;
		L_25 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_22: *(void**)L_22), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_24: *(void**)L_24));
		V_0 = L_25;
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_27 = V_0;
		return L_27;
	}

IL_0070:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_28;
		L_28 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 46));
		il2cpp_codegen_memcpy(L_29, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_30, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		NullCheck(L_28);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_29: *(void**)L_29), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_31: *(void**)L_31));
		return L_32;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A_AdjustorThunk (RuntimeObject* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_37 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_40 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_46 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_49 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_2 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_12 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_21 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_30 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_39 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_48 = L_2;
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 V_0 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	memset(V_0, 0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
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
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
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
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56)(ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)UnBox(L_8, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		RuntimeObject* L_9 = ___1_comparer;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_10);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
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
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_19);
		il2cpp_codegen_memcpy(L_21, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_22);
		NullCheck(L_18);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_20, L_23);
		V_1 = L_24;
		int32_t L_25 = V_1;
		if (!L_25)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_26 = V_1;
		return L_26;
	}

IL_0082:
	{
		RuntimeObject* L_27 = ___1_comparer;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_28);
		il2cpp_codegen_memcpy(L_30, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_31);
		NullCheck(L_27);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_27, L_29, L_32);
		V_1 = L_33;
		int32_t L_34 = V_1;
		if (!L_34)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_35 = V_1;
		return L_35;
	}

IL_00a4:
	{
		RuntimeObject* L_36 = ___1_comparer;
		il2cpp_codegen_memcpy(L_37, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_38 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_37);
		il2cpp_codegen_memcpy(L_39, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_40, il2cpp_codegen_get_instance_field_data_pointer(L_39, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_40);
		NullCheck(L_36);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_36, L_38, L_41);
		V_1 = L_42;
		int32_t L_43 = V_1;
		if (!L_43)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_44 = V_1;
		return L_44;
	}

IL_00c6:
	{
		RuntimeObject* L_45 = ___1_comparer;
		il2cpp_codegen_memcpy(L_46, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_47 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_46);
		il2cpp_codegen_memcpy(L_48, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_instance_field_data_pointer(L_48, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_50 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_49);
		NullCheck(L_45);
		int32_t L_51;
		L_51 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_45, L_47, L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	void* L_35 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)));
	void* L_45 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_12 = L_10;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_22 = L_20;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_32 = L_30;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_40 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_42 = L_40;
	const Il2CppFullySharedGenericAny L_43 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	memset(V_0, 0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	memset(V_1, 0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	memset(V_2, 0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	memset(V_3, 0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	memset(V_4, 0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	memset(G_B2_0, 0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	int32_t G_B4_0 = 0;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	memset(G_B6_0, 0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	memset(G_B10_0, 0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	Il2CppFullySharedGenericAny* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	Il2CppFullySharedGenericAny* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B13_3 = 0;
	Il2CppFullySharedGenericAny G_B14_0 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	memset(G_B14_0, 0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	Il2CppFullySharedGenericAny* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	int32_t G_B19_3 = 0;
	int32_t G_B19_4 = 0;
	Il2CppFullySharedGenericAny* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	int32_t G_B17_3 = 0;
	int32_t G_B17_4 = 0;
	Il2CppFullySharedGenericAny G_B18_0 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	memset(G_B18_0, 0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	int32_t G_B18_3 = 0;
	int32_t G_B18_4 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	int32_t G_B20_4 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_0);
		if (L_1)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
			goto IL_002a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
	}
	{
		il2cpp_codegen_memcpy(L_2, G_B1_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			goto IL_002a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 50), (void*)G_B3_0, &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B4_0 = L_9;
	}

IL_0035:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
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
		il2cpp_codegen_memcpy(L_12, G_B5_0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(V_1, L_12, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_13, V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_13);
		if (L_14)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
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
		Il2CppMethodPointer L_17 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 51), (void*)G_B7_0, &L_16, L_15);
		typedef int32_t ( *func_L_18)(void*,const RuntimeMethod*);
		int32_t L_19 = ((func_L_18)L_17)(L_16.thisPtr,L_16.method);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_20, V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_21 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_20);
		if (L_21)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))));
			G_B11_1 = G_B8_0;
			G_B11_2 = G_B8_1;
			goto IL_0094;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))));
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}
	{
		il2cpp_codegen_memcpy(L_22, G_B9_0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(V_2, L_22, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_23, V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_24 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_23);
		if (L_24)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0094;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		Il2CppConstrainedCallData L_26;
		Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 52), (void*)G_B11_0, &L_26, L_25);
		typedef int32_t ( *func_L_28)(void*,const RuntimeMethod*);
		int32_t L_29 = ((func_L_28)L_27)(L_26.thisPtr,L_26.method);
		G_B12_0 = L_29;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_30, V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_30);
		if (L_31)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)))));
			G_B15_1 = G_B12_0;
			G_B15_2 = G_B12_1;
			G_B15_3 = G_B12_2;
			goto IL_00c9;
		}
		G_B13_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)))));
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}
	{
		il2cpp_codegen_memcpy(L_32, G_B13_0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(V_3, L_32, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_33, V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_34 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_33);
		if (L_34)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00c9;
		}
		il2cpp_codegen_memcpy(G_B14_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00d4;
	}

IL_00c9:
	{
		Il2CppConstrainedCallData L_36;
		Il2CppMethodPointer L_37 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 53), (void*)G_B15_0, &L_36, L_35);
		typedef int32_t ( *func_L_38)(void*,const RuntimeMethod*);
		int32_t L_39 = ((func_L_38)L_37)(L_36.thisPtr,L_36.method);
		G_B16_0 = L_39;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_40, V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_41 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_40);
		if (L_41)
		{
			G_B19_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)))));
			G_B19_1 = G_B16_0;
			G_B19_2 = G_B16_1;
			G_B19_3 = G_B16_2;
			G_B19_4 = G_B16_3;
			goto IL_0101;
		}
		G_B17_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)))));
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
	}
	{
		il2cpp_codegen_memcpy(L_42, G_B17_0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(V_4, L_42, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_43, V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_44 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_43);
		if (L_44)
		{
			G_B19_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			G_B19_4 = G_B17_4;
			goto IL_0101;
		}
		il2cpp_codegen_memcpy(G_B18_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		G_B18_4 = G_B17_4;
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		G_B20_4 = G_B18_4;
		goto IL_010c;
	}

IL_0101:
	{
		Il2CppConstrainedCallData L_46;
		Il2CppMethodPointer L_47 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 54), (void*)G_B19_0, &L_46, L_45);
		typedef int32_t ( *func_L_48)(void*,const RuntimeMethod*);
		int32_t L_49 = ((func_L_48)L_47)(L_46.thisPtr,L_46.method);
		G_B20_0 = L_49;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
		G_B20_4 = G_B19_4;
	}

IL_010c:
	{
		int32_t L_50;
		L_50 = ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A(G_B20_4, G_B20_3, G_B20_2, G_B20_1, G_B20_0, NULL);
		return L_50;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_5_GetHashCodeCore_mCAC2EA3BE3C748840BE08F742B272274BB7E171A(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_mCAC2EA3BE3C748840BE08F742B272274BB7E171A_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_1);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_4 = ___0_comparer;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_5);
		NullCheck(L_4);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_6);
		RuntimeObject* L_8 = ___0_comparer;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_9);
		NullCheck(L_8);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_10);
		RuntimeObject* L_12 = ___0_comparer;
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_13);
		NullCheck(L_12);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_14);
		RuntimeObject* L_16 = ___0_comparer;
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_17);
		NullCheck(L_16);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_16, L_18);
		int32_t L_20;
		L_20 = ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A(L_3, L_7, L_11, L_15, L_19, NULL);
		return L_20;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCodeCore_mCAC2EA3BE3C748840BE08F742B272274BB7E171A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCodeCore_mCAC2EA3BE3C748840BE08F742B272274BB7E171A(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IValueTupleInternal_GetHashCode_m76348DC65A7A91FB4C0B2994EFA9ECFE288F7E4F_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_5_GetHashCodeCore_mCAC2EA3BE3C748840BE08F742B272274BB7E171A(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_IValueTupleInternal_GetHashCode_m76348DC65A7A91FB4C0B2994EFA9ECFE288F7E4F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_IValueTupleInternal_GetHashCode_m76348DC65A7A91FB4C0B2994EFA9ECFE288F7E4F(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
	void* L_32 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	void* L_44 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)));
	void* L_56 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_17 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_29 = L_27;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_39 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_41 = L_39;
	const Il2CppFullySharedGenericAny L_42 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_51 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_53 = L_51;
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	memset(V_0, 0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	memset(V_1, 0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	memset(V_2, 0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	memset(V_3, 0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	memset(V_4, 0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
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
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	memset(G_B2_0, 0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
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
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	memset(G_B6_0, 0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	memset(G_B10_0, 0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	Il2CppFullySharedGenericAny* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_3 = NULL;
	Il2CppFullySharedGenericAny* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_3 = NULL;
	Il2CppFullySharedGenericAny G_B14_0 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	memset(G_B14_0, 0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	int32_t G_B14_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_3 = NULL;
	Il2CppFullySharedGenericAny* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_3 = NULL;
	Il2CppFullySharedGenericAny* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_3 = NULL;
	Il2CppFullySharedGenericAny G_B18_0 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	memset(G_B18_0, 0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	int32_t G_B18_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003b;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B1_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_6);
		if (L_7)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003b;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0046;
	}

IL_003b:
	{
		Il2CppConstrainedCallData L_9;
		Il2CppMethodPointer L_10 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 61), (void*)G_B3_0, &L_9, L_8);
		typedef String_t* ( *func_L_11)(void*,const RuntimeMethod*);
		String_t* L_12 = ((func_L_11)L_10)(L_9.thisPtr,L_9.method);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		NullCheck(G_B4_2);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B4_3;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_15, V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_16 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_15);
		if (L_16)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)))));
			G_B7_1 = 3;
			G_B7_2 = L_14;
			G_B7_3 = L_14;
			goto IL_007b;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)))));
		G_B5_1 = 3;
		G_B5_2 = L_14;
		G_B5_3 = L_14;
	}
	{
		il2cpp_codegen_memcpy(L_17, G_B5_0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_18);
		if (L_19)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007b;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0086;
	}

IL_007b:
	{
		Il2CppConstrainedCallData L_21;
		Il2CppMethodPointer L_22 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62), (void*)G_B7_0, &L_21, L_20);
		typedef String_t* ( *func_L_23)(void*,const RuntimeMethod*);
		String_t* L_24 = ((func_L_23)L_22)(L_21.thisPtr,L_21.method);
		G_B8_0 = L_24;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		NullCheck(G_B8_2);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = G_B8_3;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_27, V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_28 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_27);
		if (L_28)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))));
			G_B11_1 = 5;
			G_B11_2 = L_26;
			G_B11_3 = L_26;
			goto IL_00bb;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))));
		G_B9_1 = 5;
		G_B9_2 = L_26;
		G_B9_3 = L_26;
	}
	{
		il2cpp_codegen_memcpy(L_29, G_B9_0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_30, V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_30);
		if (L_31)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00bb;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c6;
	}

IL_00bb:
	{
		Il2CppConstrainedCallData L_33;
		Il2CppMethodPointer L_34 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63), (void*)G_B11_0, &L_33, L_32);
		typedef String_t* ( *func_L_35)(void*,const RuntimeMethod*);
		String_t* L_36 = ((func_L_35)L_34)(L_33.thisPtr,L_33.method);
		G_B12_0 = L_36;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		NullCheck(G_B12_2);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = G_B12_3;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_39, V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_40 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_39);
		if (L_40)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)))));
			G_B15_1 = 7;
			G_B15_2 = L_38;
			G_B15_3 = L_38;
			goto IL_00fb;
		}
		G_B13_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)))));
		G_B13_1 = 7;
		G_B13_2 = L_38;
		G_B13_3 = L_38;
	}
	{
		il2cpp_codegen_memcpy(L_41, G_B13_0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(V_3, L_41, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_42, V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_43 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_42);
		if (L_43)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00fb;
		}
		il2cpp_codegen_memcpy(G_B14_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_0106;
	}

IL_00fb:
	{
		Il2CppConstrainedCallData L_45;
		Il2CppMethodPointer L_46 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 64), (void*)G_B15_0, &L_45, L_44);
		typedef String_t* ( *func_L_47)(void*,const RuntimeMethod*);
		String_t* L_48 = ((func_L_47)L_46)(L_45.thisPtr,L_45.method);
		G_B16_0 = L_48;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		NullCheck(G_B16_2);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = G_B16_3;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_49;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_51, V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_52 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_51);
		if (L_52)
		{
			G_B19_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)))));
			G_B19_1 = ((int32_t)9);
			G_B19_2 = L_50;
			G_B19_3 = L_50;
			goto IL_013f;
		}
		G_B17_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)))));
		G_B17_1 = ((int32_t)9);
		G_B17_2 = L_50;
		G_B17_3 = L_50;
	}
	{
		il2cpp_codegen_memcpy(L_53, G_B17_0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(V_4, L_53, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_54, V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_55 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_54);
		if (L_55)
		{
			G_B19_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_013f;
		}
		il2cpp_codegen_memcpy(G_B18_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		goto IL_014a;
	}

IL_013f:
	{
		Il2CppConstrainedCallData L_57;
		Il2CppMethodPointer L_58 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 65), (void*)G_B19_0, &L_57, L_56);
		typedef String_t* ( *func_L_59)(void*,const RuntimeMethod*);
		String_t* L_60 = ((func_L_59)L_58)(L_57.thisPtr,L_57.method);
		G_B20_0 = L_60;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_014a:
	{
		NullCheck(G_B20_2);
		(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = G_B20_3;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_62;
		L_62 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_61, NULL);
		return L_62;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_System_IValueTupleInternal_ToStringEnd_m6CEF8C4D0881F16FD3EB0677334CB013A03D2D6D_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
	void* L_31 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	void* L_43 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)));
	void* L_55 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_16 = L_14;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_28 = L_26;
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_38 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_40 = L_38;
	const Il2CppFullySharedGenericAny L_41 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_50 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_52 = L_50;
	const Il2CppFullySharedGenericAny L_53 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	memset(V_0, 0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	memset(V_1, 0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	memset(V_2, 0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	memset(V_3, 0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	memset(V_4, 0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
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
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	memset(G_B2_0, 0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
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
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	memset(G_B6_0, 0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	memset(G_B10_0, 0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	Il2CppFullySharedGenericAny* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_3 = NULL;
	Il2CppFullySharedGenericAny* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_3 = NULL;
	Il2CppFullySharedGenericAny G_B14_0 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	memset(G_B14_0, 0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	int32_t G_B14_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_3 = NULL;
	Il2CppFullySharedGenericAny* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_3 = NULL;
	Il2CppFullySharedGenericAny* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_3 = NULL;
	Il2CppFullySharedGenericAny G_B18_0 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	memset(G_B18_0, 0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	int32_t G_B18_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_2);
		if (L_3)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
			G_B3_1 = 0;
			G_B3_2 = L_1;
			G_B3_3 = L_1;
			goto IL_0033;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)))));
		G_B1_1 = 0;
		G_B1_2 = L_1;
		G_B1_3 = L_1;
	}
	{
		il2cpp_codegen_memcpy(L_4, G_B1_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_6 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_5);
		if (L_6)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_0033;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_003e;
	}

IL_0033:
	{
		Il2CppConstrainedCallData L_8;
		Il2CppMethodPointer L_9 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 61), (void*)G_B3_0, &L_8, L_7);
		typedef String_t* ( *func_L_10)(void*,const RuntimeMethod*);
		String_t* L_11 = ((func_L_10)L_9)(L_8.thisPtr,L_8.method);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_003e:
	{
		NullCheck(G_B4_2);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = G_B4_3;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_14, V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_15 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_14);
		if (L_15)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)))));
			G_B7_1 = 2;
			G_B7_2 = L_13;
			G_B7_3 = L_13;
			goto IL_0073;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)))));
		G_B5_1 = 2;
		G_B5_2 = L_13;
		G_B5_3 = L_13;
	}
	{
		il2cpp_codegen_memcpy(L_16, G_B5_0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(V_1, L_16, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_17, V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_18 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_17);
		if (L_18)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_0073;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_007e;
	}

IL_0073:
	{
		Il2CppConstrainedCallData L_20;
		Il2CppMethodPointer L_21 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62), (void*)G_B7_0, &L_20, L_19);
		typedef String_t* ( *func_L_22)(void*,const RuntimeMethod*);
		String_t* L_23 = ((func_L_22)L_21)(L_20.thisPtr,L_20.method);
		G_B8_0 = L_23;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_007e:
	{
		NullCheck(G_B8_2);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = G_B8_3;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_26, V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_27 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_26);
		if (L_27)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))));
			G_B11_1 = 4;
			G_B11_2 = L_25;
			G_B11_3 = L_25;
			goto IL_00b3;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))));
		G_B9_1 = 4;
		G_B9_2 = L_25;
		G_B9_3 = L_25;
	}
	{
		il2cpp_codegen_memcpy(L_28, G_B9_0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(V_2, L_28, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_29, V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_30 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_29);
		if (L_30)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00b3;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00be;
	}

IL_00b3:
	{
		Il2CppConstrainedCallData L_32;
		Il2CppMethodPointer L_33 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63), (void*)G_B11_0, &L_32, L_31);
		typedef String_t* ( *func_L_34)(void*,const RuntimeMethod*);
		String_t* L_35 = ((func_L_34)L_33)(L_32.thisPtr,L_32.method);
		G_B12_0 = L_35;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00be:
	{
		NullCheck(G_B12_2);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = G_B12_3;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_38, V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_39 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_38);
		if (L_39)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)))));
			G_B15_1 = 6;
			G_B15_2 = L_37;
			G_B15_3 = L_37;
			goto IL_00f3;
		}
		G_B13_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)))));
		G_B13_1 = 6;
		G_B13_2 = L_37;
		G_B13_3 = L_37;
	}
	{
		il2cpp_codegen_memcpy(L_40, G_B13_0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(V_3, L_40, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_41, V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_42 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_41);
		if (L_42)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00f3;
		}
		il2cpp_codegen_memcpy(G_B14_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00fe;
	}

IL_00f3:
	{
		Il2CppConstrainedCallData L_44;
		Il2CppMethodPointer L_45 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 64), (void*)G_B15_0, &L_44, L_43);
		typedef String_t* ( *func_L_46)(void*,const RuntimeMethod*);
		String_t* L_47 = ((func_L_46)L_45)(L_44.thisPtr,L_44.method);
		G_B16_0 = L_47;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00fe:
	{
		NullCheck(G_B16_2);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = G_B16_3;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_48;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_50, V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_51 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_50);
		if (L_51)
		{
			G_B19_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)))));
			G_B19_1 = 8;
			G_B19_2 = L_49;
			G_B19_3 = L_49;
			goto IL_0136;
		}
		G_B17_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)))));
		G_B17_1 = 8;
		G_B17_2 = L_49;
		G_B17_3 = L_49;
	}
	{
		il2cpp_codegen_memcpy(L_52, G_B17_0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(V_4, L_52, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_53, V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_54 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_53);
		if (L_54)
		{
			G_B19_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_0136;
		}
		il2cpp_codegen_memcpy(G_B18_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		goto IL_0141;
	}

IL_0136:
	{
		Il2CppConstrainedCallData L_56;
		Il2CppMethodPointer L_57 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 65), (void*)G_B19_0, &L_56, L_55);
		typedef String_t* ( *func_L_58)(void*,const RuntimeMethod*);
		String_t* L_59 = ((func_L_58)L_57)(L_56.thisPtr,L_56.method);
		G_B20_0 = L_59;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_0141:
	{
		NullCheck(G_B20_2);
		(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = G_B20_3;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_61;
		L_61 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_60, NULL);
		return L_61;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_5_System_IValueTupleInternal_ToStringEnd_m6CEF8C4D0881F16FD3EB0677334CB013A03D2D6D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_5_System_IValueTupleInternal_ToStringEnd_m6CEF8C4D0881F16FD3EB0677334CB013A03D2D6D(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Runtime_CompilerServices_ITuple_get_Length_m8B407CEF945B739D7AB2AB153EE9EBEDCAA67755_gshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return 5;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Runtime_CompilerServices_ITuple_get_Length_m8B407CEF945B739D7AB2AB153EE9EBEDCAA67755_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Runtime_CompilerServices_ITuple_get_Length_m8B407CEF945B739D7AB2AB153EE9EBEDCAA67755(_thisAdjusted, method);
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
