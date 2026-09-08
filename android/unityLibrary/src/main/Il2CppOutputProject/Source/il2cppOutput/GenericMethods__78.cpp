#include "pch-cpp.hpp"





template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};

struct Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195;
struct Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629;
struct TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeType* Delegate_t_0_0_0_var;
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
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9  : public RuntimeObject
{
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426 
{
	Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629* ___m_Converters;
	Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195* ___m_LazyConverters;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_marshaled_pinvoke
{
	Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629* ___m_Converters;
	Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195* ___m_LazyConverters;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_marshaled_com
{
	Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629* ___m_Converters;
	Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195* ___m_LazyConverters;
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
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
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
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields
{
	ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426 ___s_GlobalConverters;
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TypeConverter_2_Invoke_m22213A88AF14CB4CFBD0CCA1547E1476B01580F9_gshared_inline (TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845* __this, Il2CppFullySharedGenericAny* ___0_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C_gshared (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertNullable_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m3959031A1EAAC71266F10C78EF750D75D865E2C4_gshared (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertEnum_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFAC87EA481D46BD0A2678FF3C3565960666D0E00_gshared (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mBA69D37B4DED14E1204D55EB28F6BA7FA787ADBA_gshared (Il2CppFullySharedGenericAny ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD (ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426* __this, Type_t* ___0_source, Type_t* ___1_destination, Delegate_t** ___2_converter, const RuntimeMethod* method) ;
inline void TypeConverter_2_Invoke_m22213A88AF14CB4CFBD0CCA1547E1476B01580F9_inline (TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845* __this, Il2CppFullySharedGenericAny* ___0_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))TypeConverter_2_Invoke_m22213A88AF14CB4CFBD0CCA1547E1476B01580F9_gshared_inline)((TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845*)__this, ___0_value, il2cppRetVal, method);
}
inline Il2CppFullySharedGenericAny* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvertNullable_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m3959031A1EAAC71266F10C78EF750D75D865E2C4 (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))TypeConversion_TryConvertNullable_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m3959031A1EAAC71266F10C78EF750D75D865E2C4_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvertEnum_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFAC87EA481D46BD0A2678FF3C3565960666D0E00 (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))TypeConversion_TryConvertEnum_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFAC87EA481D46BD0A2678FF3C3565960666D0E00_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mBA69D37B4DED14E1204D55EB28F6BA7FA787ADBA (Il2CppFullySharedGenericAny ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))TypeConversion_TryConvertToUnityEngineObject_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mBA69D37B4DED14E1204D55EB28F6BA7FA787ADBA_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F (Type_t* ___0_enumType, String_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936 (Type_t* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mC18DF87EC56E149F05CE5A957357981A256F363B_gshared (ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426* ___0_registry, Il2CppFullySharedGenericAny* ___1_source, Il2CppFullySharedGenericAny* ___2_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_60 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
	const Il2CppFullySharedGenericAny L_34 = L_26;
	const Il2CppFullySharedGenericAny L_37 = L_26;
	const Il2CppFullySharedGenericAny L_50 = L_26;
	const Il2CppFullySharedGenericAny L_55 = L_26;
	const Il2CppFullySharedGenericAny L_57 = L_26;
	const Il2CppFullySharedGenericAny L_70 = L_26;
	const Il2CppFullySharedGenericAny L_74 = L_26;
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
	const Il2CppFullySharedGenericAny L_35 = L_28;
	const Il2CppFullySharedGenericAny L_58 = L_28;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
	const Il2CppFullySharedGenericAny L_15 = L_10;
	const Il2CppFullySharedGenericAny L_39 = L_10;
	const Il2CppFullySharedGenericAny L_51 = L_10;
	const Il2CppFullySharedGenericAny L_65 = L_10;
	const Il2CppFullySharedGenericAny L_71 = L_10;
	const Il2CppFullySharedGenericAny L_42 = alloca(SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
	Delegate_t* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
	memset(V_1, 0, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
	TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845* V_2 = NULL;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
	memset(V_3, 0, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_registry), (&___1_source), (&___2_destination));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), V_1, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3252));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3253));
	Il2CppFullySharedGenericAny* G_B23_0 = NULL;
	Il2CppFullySharedGenericAny* G_B23_1 = NULL;
	Il2CppFullySharedGenericAny* G_B21_0 = NULL;
	Il2CppFullySharedGenericAny* G_B21_1 = NULL;
	Il2CppFullySharedGenericAny G_B22_0 = alloca(SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
	memset(G_B22_0, 0, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
	Il2CppFullySharedGenericAny* G_B22_1 = NULL;
	String_t* G_B24_0 = NULL;
	Il2CppFullySharedGenericAny* G_B24_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3254));
		ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426* L_0 = ___0_registry;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3255));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3255));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3256));
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3256));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3257));
		bool L_5;
		L_5 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD(L_0, L_2, L_4, (&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3257));
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3258));
		Delegate_t* L_6 = V_0;
		V_2 = ((TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 4)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3259));
		Il2CppFullySharedGenericAny* L_7 = ___2_destination;
		TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845* L_8 = V_2;
		Il2CppFullySharedGenericAny* L_9 = ___1_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3260));
		NullCheck(L_8);
		TypeConverter_2_Invoke_m22213A88AF14CB4CFBD0CCA1547E1476B01580F9_inline(L_8, L_9, (Il2CppFullySharedGenericAny*)L_10, il2cpp_rgctx_method(method->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3260));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_7, L_10, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_7, (void*)L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3261));
		return (bool)1;
	}

IL_0034:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3262));
		bool L_11 = (il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3266));
		Il2CppFullySharedGenericAny* L_12 = ___2_destination;
		Il2CppFullySharedGenericAny* L_13 = ___1_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3267));
		Il2CppFullySharedGenericAny* L_14;
		L_14 = UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_inline(L_13, il2cpp_rgctx_method(method->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3267));
		il2cpp_codegen_memcpy(L_15, L_14, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_12, L_15, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_12, (void*)L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3268));
		return (bool)1;
	}

IL_0062:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3269));
		Il2CppFullySharedGenericAny* L_16 = ___1_source;
		Il2CppFullySharedGenericAny* L_17 = ___2_destination;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3270));
		bool L_18;
		L_18 = PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C(L_16, L_17, il2cpp_rgctx_method(method->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3270));
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3271));
		return (bool)1;
	}

IL_006d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3272));
		Il2CppFullySharedGenericAny* L_19 = ___1_source;
		Il2CppFullySharedGenericAny* L_20 = ___2_destination;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3273));
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = TypeConversion_TryConvertNullable_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m3959031A1EAAC71266F10C78EF750D75D865E2C4(L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3273));
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3274));
		return (bool)1;
	}

IL_0078:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3275));
		Il2CppFullySharedGenericAny* L_22 = ___1_source;
		Il2CppFullySharedGenericAny* L_23 = ___2_destination;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3276));
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = TypeConversion_TryConvertEnum_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFAC87EA481D46BD0A2678FF3C3565960666D0E00(L_22, L_23, il2cpp_rgctx_method(method->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3276));
		if (!L_24)
		{
			goto IL_0083;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3277));
		return (bool)1;
	}

IL_0083:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3278));
		Il2CppFullySharedGenericAny* L_25 = ___1_source;
		il2cpp_codegen_memcpy(L_26, L_25, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		Il2CppFullySharedGenericAny* L_27 = ___2_destination;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3279));
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = TypeConversion_TryConvertToUnityEngineObject_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mBA69D37B4DED14E1204D55EB28F6BA7FA787ADBA((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_28, L_26, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A): *(void**)L_26), L_27, il2cpp_rgctx_method(method->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3279));
		if (!L_29)
		{
			goto IL_0093;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3280));
		return (bool)1;
	}

IL_0093:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3281));
		bool L_30 = il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_30)
		{
			goto IL_00be;
		}
	}
	{
		bool L_31 = il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		if (!L_31)
		{
			goto IL_00be;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3286));
		Il2CppFullySharedGenericAny* L_32 = ___2_destination;
		il2cpp_codegen_initobj(L_32, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3287));
		return (bool)0;
	}

IL_00be:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3288));
		Il2CppFullySharedGenericAny* L_33 = ___1_source;
		il2cpp_codegen_memcpy(L_34, L_33, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		il2cpp_codegen_memcpy(V_3, L_34, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		il2cpp_codegen_memcpy(L_35, V_3, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		bool L_36 = il2cpp_codegen_isinst_runtime_check(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_35);
		if (!L_36)
		{
			goto IL_00ec;
		}
	}
	{
		il2cpp_codegen_memcpy(L_37, V_3, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		RuntimeObject* L_38 = il2cpp_codegen_isinst_runtime(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_37);;
		void* L_40 = UnBox_Any(L_38, il2cpp_rgctx_data(method->rgctx_data, 3), L_39);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_40)), SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3289));
		Il2CppFullySharedGenericAny* L_41 = ___2_destination;
		il2cpp_codegen_memcpy(L_42, V_1, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_41, L_42, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_41, (void*)L_42);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3290));
		return (bool)1;
	}

IL_00ec:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3291));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3292));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3292));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3293));
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3293));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3294));
		NullCheck(L_44);
		bool L_47;
		L_47 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_44, L_46);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3294));
		if (!L_47)
		{
			goto IL_011f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3295));
		Il2CppFullySharedGenericAny* L_48 = ___2_destination;
		Il2CppFullySharedGenericAny* L_49 = ___1_source;
		il2cpp_codegen_memcpy(L_50, L_49, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		il2cpp_codegen_box_unbox(L_50, L_51, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB, il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_data(method->rgctx_data, 3));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_48, L_51, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_48, (void*)L_51);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3296));
		return (bool)1;
	}

IL_011f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3297));
		bool L_52 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		if (!L_52)
		{
			goto IL_0177;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3301));
		Il2CppFullySharedGenericAny* L_53 = ___2_destination;
		Il2CppFullySharedGenericAny* L_54 = ___1_source;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		il2cpp_codegen_memcpy(L_55, V_3, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		bool L_56 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_55);
		if (L_56)
		{
			G_B23_0 = ((Il2CppFullySharedGenericAny*)L_54);
			G_B23_1 = ((Il2CppFullySharedGenericAny*)L_53);
			goto IL_0160;
		}
		G_B21_0 = ((Il2CppFullySharedGenericAny*)L_54);
		G_B21_1 = ((Il2CppFullySharedGenericAny*)L_53);
	}
	{
		il2cpp_codegen_memcpy(L_57, G_B21_0, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		il2cpp_codegen_memcpy(V_3, L_57, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		il2cpp_codegen_memcpy(L_58, V_3, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		bool L_59 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_58);
		if (L_59)
		{
			G_B23_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B23_1 = ((Il2CppFullySharedGenericAny*)G_B21_1);
			goto IL_0160;
		}
		il2cpp_codegen_memcpy(G_B22_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		G_B22_1 = ((Il2CppFullySharedGenericAny*)G_B21_1);
	}
	{
		G_B24_0 = ((String_t*)(NULL));
		G_B24_1 = ((Il2CppFullySharedGenericAny*)G_B22_1);
		goto IL_016b;
	}

IL_0160:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3302));
		Il2CppConstrainedCallData L_61;
		Il2CppMethodPointer L_62 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 13), (void*)G_B23_0, &L_61, L_60);
		typedef String_t* ( *func_L_63)(void*,const RuntimeMethod*);
		String_t* L_64 = ((func_L_63)L_62)(L_61.thisPtr,L_61.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3302));
		G_B24_0 = L_64;
		G_B24_1 = ((Il2CppFullySharedGenericAny*)G_B23_1);
	}

IL_016b:
	{
		void* L_66 = UnBox_Any((RuntimeObject*)G_B24_0, il2cpp_rgctx_data(method->rgctx_data, 3), L_65);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)G_B24_1, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_66)), SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)G_B24_1, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_66)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3303));
		return (bool)1;
	}

IL_0177:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3304));
		bool L_67 = (il2cpp_defaults.object_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		if (!L_67)
		{
			goto IL_01aa;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3308));
		Il2CppFullySharedGenericAny* L_68 = ___2_destination;
		Il2CppFullySharedGenericAny* L_69 = ___1_source;
		il2cpp_codegen_memcpy(L_70, L_69, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		il2cpp_codegen_box_unbox(L_70, L_71, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB, il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_data(method->rgctx_data, 3));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_68, L_71, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_68, (void*)L_71);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3309));
		return (bool)1;
	}

IL_01aa:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3310));
		bool L_72 = (il2cpp_defaults.object_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_72)
		{
			goto IL_01db;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_73 = ___1_source;
		il2cpp_codegen_memcpy(L_74, L_73, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		bool L_75 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_74);
		if (L_75)
		{
			goto IL_01db;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3314));
		Il2CppFullySharedGenericAny* L_76 = ___2_destination;
		il2cpp_codegen_initobj(L_76, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3315));
		return (bool)1;
	}

IL_01db:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3316));
		Il2CppFullySharedGenericAny* L_77 = ___2_destination;
		il2cpp_codegen_initobj(L_77, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3317));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertEnum_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFAC87EA481D46BD0A2678FF3C3565960666D0E00_gshared (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TSource_t27EFB7DA2797243A2139A72CF6726931E51738C9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_TDestination_t61AEFD2917D4C21FD8F6C382C42E0814507DC4C2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_t27EFB7DA2797243A2139A72CF6726931E51738C9);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TDestination_t61AEFD2917D4C21FD8F6C382C42E0814507DC4C2);
	const Il2CppFullySharedGenericAny L_19 = L_9;
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_destination));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3361));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3362));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3363));
		bool L_0 = il2cpp_codegen_class_is_enum(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_008a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3366));
		bool L_1 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3370));
		Il2CppFullySharedGenericAny* L_2 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3371));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3371));
		Il2CppFullySharedGenericAny* L_5 = ___0_source;
		il2cpp_codegen_memcpy(L_6, L_5, SizeOf_TSource_t27EFB7DA2797243A2139A72CF6726931E51738C9);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_6);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3372));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		RuntimeObject* L_8;
		L_8 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_4, ((String_t*)CastclassSealed((RuntimeObject*)L_7, il2cpp_defaults.string_class)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3372));
		void* L_10 = UnBox_Any(L_8, il2cpp_rgctx_data(method->rgctx_data, 1), L_9);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_10)), SizeOf_TDestination_t61AEFD2917D4C21FD8F6C382C42E0814507DC4C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_2, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_10)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3373));
		goto IL_0064;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0058;
		}
		throw e;
	}

CATCH_0058:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3374));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3375));
		Il2CppFullySharedGenericAny* L_12 = ___1_destination;
		il2cpp_codegen_initobj(L_12, SizeOf_TDestination_t61AEFD2917D4C21FD8F6C382C42E0814507DC4C2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3376));
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0093;
	}

IL_0064:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3377));
		return (bool)1;
	}

IL_0066:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3378));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3379));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3379));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3380));
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3380));
		if (!L_15)
		{
			goto IL_008a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3381));
		Il2CppFullySharedGenericAny* L_16 = ___1_destination;
		Il2CppFullySharedGenericAny* L_17 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3382));
		Il2CppFullySharedGenericAny* L_18;
		L_18 = UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_inline(L_17, il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3382));
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_TDestination_t61AEFD2917D4C21FD8F6C382C42E0814507DC4C2);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_16, L_19, SizeOf_TDestination_t61AEFD2917D4C21FD8F6C382C42E0814507DC4C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_16, (void*)L_19);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3383));
		return (bool)1;
	}

IL_008a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3384));
		Il2CppFullySharedGenericAny* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, SizeOf_TDestination_t61AEFD2917D4C21FD8F6C382C42E0814507DC4C2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3385));
		return (bool)0;
	}

IL_0093:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3386));
		bool L_21 = V_0;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TypeConverter_2_Invoke_m22213A88AF14CB4CFBD0CCA1547E1476B01580F9_gshared_inline (TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845* __this, Il2CppFullySharedGenericAny* ___0_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_from));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3756));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3757));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3758));
		Il2CppFullySharedGenericAny* L_0 = ___0_from;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
