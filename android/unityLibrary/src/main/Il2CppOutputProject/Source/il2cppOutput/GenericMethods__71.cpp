#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3Invoker;
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3Invoker<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3Invoker;
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3Invoker<R, T1*, T2*, T3*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};

struct IDictionaryPropertyBag_3_t873F2D938FE68DCBD7EC26C421A7A540B65367CA;
struct IEnumerable_1_tDA3DB14A8C53E0EFBEA9554E60CD303E733E672C;
struct IEnumerator_1_t45F3F7FD63BD81FEABDE4F646B59715C819D84FC;
struct IExcludeContravariantPropertyAdapter_1_t921182EFC038C9D3D1E922564615774AB5F9EC11;
struct IExcludeContravariantPropertyAdapter_2_t9F1CB5A00482E5CBEA1B3168A0214D4603844F1E;
struct IExcludePropertyAdapter_1_tD74232A48D8490AD10769C41C3E48BF07100F460;
struct IExcludePropertyAdapter_2_t36F02DFC4D1D3E5CE8E698832057207002D6564E;
struct IIndexedCollectionPropertyBagEnumerator_1_t10A3FE79120150E0A39D2649E6366925E3E7977A;
struct IListPropertyBag_2_tA6E8BEEFB970402E6489BB8E08B3FC1953D7D192;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct IProperty_1_t47DF8E7CFAFA47596FCFDA6775C02B5B3C05AAE5;
struct List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_t948BEA99EC45AC7F41C18ABA972FF722CFD0DDAD;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IExcludePropertyAdapter_t553948B45E949399921D322873B330C0C81DB889;
struct IPropertyVisitorAdapter_tD1C948315A7A2D15460BBF32AABDA0DDDE4A4B19;
struct PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4;
struct String_t;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C RuntimeClass* IExcludePropertyAdapter_t553948B45E949399921D322873B330C0C81DB889_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m04BC5F9017ED6F738688CB8FD2543E21C287CD4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enumerator_tD310794DECC848363CBBAD7016FBD21AD52C4562_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IExcludePropertyAdapter_t553948B45E949399921D322873B330C0C81DB889_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IPropertyVisitorAdapter_tD1C948315A7A2D15460BBF32AABDA0DDDE4A4B19_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4_0_0_0_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4  : public RuntimeObject
{
	List_1_t948BEA99EC45AC7F41C18ABA972FF722CFD0DDAD* ___m_Adapters;
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
struct Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63 
{
	List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct ExcludeContext_1_t15D82A43C7A1953965E34A4D2010B0F3FD9A9854 
{
	PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* ___m_Visitor;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
};
struct ExcludeContext_2_tC7EB50D349E3C6CAD9556E61761F203292727420 
{
	PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* ___m_Visitor;
	Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___U3CPropertyU3Ek__BackingField;
};
typedef Il2CppFullySharedGenericStruct IndexedCollectionPropertyBagEnumerable_1_t2B3DE6D978823100869CD2618FBDF5807E3B997E;
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
struct IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 
{
	int32_t ___Index;
	bool ___IsReadOnly;
};
struct IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79_marshaled_pinvoke
{
	int32_t ___Index;
	int32_t ___IsReadOnly;
};
struct IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79_marshaled_com
{
	int32_t ___Index;
	int32_t ___IsReadOnly;
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
struct Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F 
{
	List_1_t948BEA99EC45AC7F41C18ABA972FF722CFD0DDAD* ___m_Adapters;
	int32_t ___m_Index;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F_marshaled_pinvoke
{
	List_1_t948BEA99EC45AC7F41C18ABA972FF722CFD0DDAD* ___m_Adapters;
	int32_t ___m_Index;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F_marshaled_com
{
	List_1_t948BEA99EC45AC7F41C18ABA972FF722CFD0DDAD* ___m_Adapters;
	int32_t ___m_Index;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct EnumeratorType_t213060DC702D8C5D779B12D7E6CE6AFC2D7BB6CA 
{
	int32_t ___value__;
};
typedef Il2CppFullySharedGenericStruct IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479;
typedef Il2CppFullySharedGenericStruct Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE;
typedef Il2CppFullySharedGenericStruct PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExcludeContext_2_tC7EB50D349E3C6CAD9556E61761F203292727420 ExcludeContext_2_FromProperty_m3EB904F507E22123D873F3FDE6C08898F9D0029C_gshared (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* ___0_visitor, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___1_property, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExcludeContext_1_t15D82A43C7A1953965E34A4D2010B0F3FD9A9854 ExcludeContext_1_FromProperty_TisIl2CppFullySharedGenericAny_mA6559D1D7F5A1E20BCB2659D19C0E9266A2C148C_gshared (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* ___0_visitor, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___1_property, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261_gshared (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* __this, Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_gshared_inline (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F_gshared (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m04BC5F9017ED6F738688CB8FD2543E21C287CD4B_inline (Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F* __this, const RuntimeMethod* method) ;
inline ExcludeContext_2_tC7EB50D349E3C6CAD9556E61761F203292727420 ExcludeContext_2_FromProperty_m3EB904F507E22123D873F3FDE6C08898F9D0029C (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* ___0_visitor, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___1_property, const RuntimeMethod* method)
{
	return ((  ExcludeContext_2_tC7EB50D349E3C6CAD9556E61761F203292727420 (*) (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4*, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))ExcludeContext_2_FromProperty_m3EB904F507E22123D873F3FDE6C08898F9D0029C_gshared)(___0_visitor, ___1_property, method);
}
inline ExcludeContext_1_t15D82A43C7A1953965E34A4D2010B0F3FD9A9854 ExcludeContext_1_FromProperty_TisIl2CppFullySharedGenericAny_mA6559D1D7F5A1E20BCB2659D19C0E9266A2C148C (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* ___0_visitor, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___1_property, const RuntimeMethod* method)
{
	return ((  ExcludeContext_1_t15D82A43C7A1953965E34A4D2010B0F3FD9A9854 (*) (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4*, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))ExcludeContext_1_FromProperty_TisIl2CppFullySharedGenericAny_mA6559D1D7F5A1E20BCB2659D19C0E9266A2C148C_gshared)(___0_visitor, ___1_property, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7A7E22E7314145847E7D9CA3719F0B04C4F3E49B (Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F* __this, const RuntimeMethod* method) ;
inline void PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261 (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* __this, Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*, Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261_gshared)((PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_inline (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyVisitor_IsExcluded_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m66DB68FF96FB42034000EF17C9780D36B2ED84DC_gshared (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F ___1_enumerator, Il2CppFullySharedGenericAny* ___2_container, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IExcludePropertyAdapter_t553948B45E949399921D322873B330C0C81DB889_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IExcludePropertyAdapter_t553948B45E949399921D322873B330C0C81DB889_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyVisitorAdapter_tD1C948315A7A2D15460BBF32AABDA0DDDE4A4B19_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_tCC1B7316BFFA72EFA336E172C40C9D84CA193124 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_tCC1B7316BFFA72EFA336E172C40C9D84CA193124);
	const Il2CppFullySharedGenericAny L_39 = L_22;
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_TValue_tCC1B7316BFFA72EFA336E172C40C9D84CA193124);
	const Il2CppFullySharedGenericAny L_44 = L_27;
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	ExcludeContext_2_tC7EB50D349E3C6CAD9556E61761F203292727420 V_6;
	memset((&V_6), 0, sizeof(V_6));
	ExcludeContext_1_t15D82A43C7A1953965E34A4D2010B0F3FD9A9854 V_7;
	memset((&V_7), 0, sizeof(V_7));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_property), (&___1_enumerator), (&___2_container), (&___3_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2864));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2865));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2866));
		goto IL_00ee;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2867));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2868));
		RuntimeObject* L_0;
		L_0 = Enumerator_get_Current_m04BC5F9017ED6F738688CB8FD2543E21C287CD4B_inline((&___1_enumerator), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2868));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2869));
		RuntimeObject* L_1 = V_0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_1;
		if (L_2)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_4 = V_2;
		if (L_4)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 2)));
		RuntimeObject* L_6 = V_3;
		if (L_6)
		{
			goto IL_0091;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3)));
		RuntimeObject* L_8 = V_4;
		if (L_8)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_9 = V_0;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IExcludePropertyAdapter_t553948B45E949399921D322873B330C0C81DB889_il2cpp_TypeInfo_var));
		RuntimeObject* L_10 = V_5;
		if (L_10)
		{
			goto IL_00d5;
		}
	}
	{
		goto IL_00ee;
	}

IL_004b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2870));
		RuntimeObject* L_11 = V_1;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_12 = ___0_property;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2871));
		ExcludeContext_2_tC7EB50D349E3C6CAD9556E61761F203292727420 L_13;
		L_13 = ExcludeContext_2_FromProperty_m3EB904F507E22123D873F3FDE6C08898F9D0029C(__this, L_12, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2871));
		V_6 = L_13;
		Il2CppFullySharedGenericAny* L_14 = ___2_container;
		Il2CppFullySharedGenericAny* L_15 = ___3_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2872));
		NullCheck(L_11);
		bool L_16;
		L_16 = InterfaceFuncInvoker3< bool, ExcludeContext_2_tC7EB50D349E3C6CAD9556E61761F203292727420*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_11, (&V_6), L_14, L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2872));
		if (!L_16)
		{
			goto IL_00ee;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2873));
		return (bool)1;
	}

IL_0066:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2874));
		RuntimeObject* L_17 = V_2;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_18 = ___0_property;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2875));
		ExcludeContext_1_t15D82A43C7A1953965E34A4D2010B0F3FD9A9854 L_19;
		L_19 = ExcludeContext_1_FromProperty_TisIl2CppFullySharedGenericAny_mA6559D1D7F5A1E20BCB2659D19C0E9266A2C148C(__this, L_18, il2cpp_rgctx_method(method->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2875));
		V_7 = L_19;
		Il2CppFullySharedGenericAny* L_20 = ___2_container;
		Il2CppFullySharedGenericAny* L_21 = ___3_value;
		il2cpp_codegen_memcpy(L_22, L_21, SizeOf_TValue_tCC1B7316BFFA72EFA336E172C40C9D84CA193124);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2876));
		NullCheck(L_17);
		bool L_23;
		L_23 = InterfaceFuncInvoker3Invoker< bool, ExcludeContext_1_t15D82A43C7A1953965E34A4D2010B0F3FD9A9854*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_17, (&V_7), L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 15)) ? L_22: *(void**)L_22));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2876));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2877));
		Il2CppFullySharedGenericAny* L_24 = ___3_value;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_25 = ___0_property;
		Il2CppFullySharedGenericAny* L_26 = ___2_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2878));
		NullCheck(L_25);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(21, L_25, L_26, (Il2CppFullySharedGenericAny*)L_27);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2878));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_24, L_27, SizeOf_TValue_tCC1B7316BFFA72EFA336E172C40C9D84CA193124);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 15), (void**)(Il2CppFullySharedGenericAny*)L_24, (void*)L_27);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2879));
		if (!L_23)
		{
			goto IL_00ee;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2880));
		return (bool)1;
	}

IL_0091:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2881));
		RuntimeObject* L_28 = V_3;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_29 = ___0_property;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2882));
		ExcludeContext_2_tC7EB50D349E3C6CAD9556E61761F203292727420 L_30;
		L_30 = ExcludeContext_2_FromProperty_m3EB904F507E22123D873F3FDE6C08898F9D0029C(__this, L_29, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2882));
		V_6 = L_30;
		Il2CppFullySharedGenericAny* L_31 = ___2_container;
		Il2CppFullySharedGenericAny* L_32 = ___3_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2883));
		NullCheck(L_28);
		bool L_33;
		L_33 = GenericInterfaceFuncInvoker3< bool, ExcludeContext_2_tC7EB50D349E3C6CAD9556E61761F203292727420*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 19), L_28, (&V_6), L_31, L_32);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2883));
		if (!L_33)
		{
			goto IL_00ee;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2884));
		return (bool)1;
	}

IL_00a9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2885));
		RuntimeObject* L_34 = V_4;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_35 = ___0_property;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2886));
		ExcludeContext_1_t15D82A43C7A1953965E34A4D2010B0F3FD9A9854 L_36;
		L_36 = ExcludeContext_1_FromProperty_TisIl2CppFullySharedGenericAny_mA6559D1D7F5A1E20BCB2659D19C0E9266A2C148C(__this, L_35, il2cpp_rgctx_method(method->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2886));
		V_7 = L_36;
		Il2CppFullySharedGenericAny* L_37 = ___2_container;
		Il2CppFullySharedGenericAny* L_38 = ___3_value;
		il2cpp_codegen_memcpy(L_39, L_38, SizeOf_TValue_tCC1B7316BFFA72EFA336E172C40C9D84CA193124);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2887));
		NullCheck(L_34);
		bool L_40;
		L_40 = GenericInterfaceFuncInvoker3Invoker< bool, ExcludeContext_1_t15D82A43C7A1953965E34A4D2010B0F3FD9A9854*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 20), L_34, (&V_7), L_37, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 15)) ? L_39: *(void**)L_39));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2887));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2888));
		Il2CppFullySharedGenericAny* L_41 = ___3_value;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_42 = ___0_property;
		Il2CppFullySharedGenericAny* L_43 = ___2_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2889));
		NullCheck(L_42);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(21, L_42, L_43, (Il2CppFullySharedGenericAny*)L_44);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2889));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_41, L_44, SizeOf_TValue_tCC1B7316BFFA72EFA336E172C40C9D84CA193124);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 15), (void**)(Il2CppFullySharedGenericAny*)L_41, (void*)L_44);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2890));
		if (!L_40)
		{
			goto IL_00ee;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2891));
		return (bool)1;
	}

IL_00d5:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2892));
		RuntimeObject* L_45 = V_5;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_46 = ___0_property;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2893));
		ExcludeContext_2_tC7EB50D349E3C6CAD9556E61761F203292727420 L_47;
		L_47 = ExcludeContext_2_FromProperty_m3EB904F507E22123D873F3FDE6C08898F9D0029C(__this, L_46, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2893));
		V_6 = L_47;
		Il2CppFullySharedGenericAny* L_48 = ___2_container;
		Il2CppFullySharedGenericAny* L_49 = ___3_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2894));
		NullCheck(L_45);
		bool L_50;
		L_50 = GenericInterfaceFuncInvoker3< bool, ExcludeContext_2_tC7EB50D349E3C6CAD9556E61761F203292727420*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 21), L_45, (&V_6), L_48, L_49);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2894));
		if (!L_50)
		{
			goto IL_00ee;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2895));
		return (bool)1;
	}

IL_00ee:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2896));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2897));
		bool L_51;
		L_51 = Enumerator_MoveNext_m7A7E22E7314145847E7D9CA3719F0B04C4F3E49B((&___1_enumerator), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2897));
		if (L_51)
		{
			goto IL_0005;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2898));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyVisitor_Unity_Properties_ICollectionPropertyVisitor_Visit_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m924FA931A1255ED8F906DF5C44A1B15632CED50D_gshared (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, Il2CppFullySharedGenericAny* ___2_collection, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_property), (&___1_container), (&___2_collection));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2816));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2817));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2818));
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_0 = ___0_property;
		Il2CppFullySharedGenericAny* L_1 = ___1_container;
		Il2CppFullySharedGenericAny* L_2 = ___2_collection;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2819));
		GenericVirtualActionInvoker3< Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), __this, L_0, L_1, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2819));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2820));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyVisitor_Unity_Properties_IDictionaryPropertyBagVisitor_Visit_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m160949F2CC24EBFFCD9DADC4F99945494B5F3E05_gshared (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* __this, RuntimeObject* ___0_properties, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_Enumerator_tC0ED8CBB5D83B67319BCE3C4C7D36192E12EAFD4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	const uint32_t SizeOf_PropertyCollection_1_t0FF9E6F506DBEF4A7C2D3E2FB4D11C39A216D786 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)));
	const Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE L_3 = alloca(SizeOf_Enumerator_tC0ED8CBB5D83B67319BCE3C4C7D36192E12EAFD4);
	const PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D L_2 = alloca(SizeOf_PropertyCollection_1_t0FF9E6F506DBEF4A7C2D3E2FB4D11C39A216D786);
	Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE V_0 = alloca(SizeOf_Enumerator_tC0ED8CBB5D83B67319BCE3C4C7D36192E12EAFD4);
	memset(V_0, 0, SizeOf_Enumerator_tC0ED8CBB5D83B67319BCE3C4C7D36192E12EAFD4);
	PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D V_1 = alloca(SizeOf_PropertyCollection_1_t0FF9E6F506DBEF4A7C2D3E2FB4D11C39A216D786);
	memset(V_1, 0, SizeOf_PropertyCollection_1_t0FF9E6F506DBEF4A7C2D3E2FB4D11C39A216D786);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_properties), (&___1_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2760));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2761));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2762));
		RuntimeObject* L_0 = ___0_properties;
		Il2CppFullySharedGenericAny* L_1 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2763));
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny*, PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* >::Invoke(1, il2cpp_rgctx_data(method->rgctx_data, 2), (RuntimeObject*)L_0, L_1, (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2763));
		il2cpp_codegen_memcpy(V_1, L_2, SizeOf_PropertyCollection_1_t0FF9E6F506DBEF4A7C2D3E2FB4D11C39A216D786);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2764));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
		PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261((PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)V_1, (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)L_3, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2764));
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_Enumerator_tC0ED8CBB5D83B67319BCE3C4C7D36192E12EAFD4);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2772));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2773));
				Il2CppConstrainedCallData L_5;
				Il2CppMethodPointer L_6 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 7), il2cpp_rgctx_method(method->rgctx_data, 14), (void*)(Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_0, &L_5, L_4);
				typedef void ( *func_L_7)(void*,const RuntimeMethod*);
				((func_L_7)L_6)(L_5.thisPtr,L_5.method);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2773));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2765));
				goto IL_0020_1;
			}

IL_0012_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2766));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2767));
				RuntimeObject* L_8;
				L_8 = Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_inline((Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_0, il2cpp_rgctx_method(method->rgctx_data, 8));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2767));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2768));
				Il2CppFullySharedGenericAny* L_9 = ___1_container;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2769));
				NullCheck((RuntimeObject*)L_8);
				InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 11), (RuntimeObject*)L_8, (RuntimeObject*)__this, L_9);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2769));
			}

IL_0020_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2770));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2771));
				bool L_10;
				L_10 = Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F((Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_0, il2cpp_rgctx_method(method->rgctx_data, 13));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2771));
				if (L_10)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_0039;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2774));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyVisitor_Unity_Properties_IDictionaryPropertyVisitor_Visit_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m3815D6A9A0916AFC65461CAD3A7BDFCA844D4A78_gshared (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, Il2CppFullySharedGenericAny* ___2_dictionary, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_property), (&___1_container), (&___2_dictionary));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2831));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2832));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2833));
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_0 = ___0_property;
		Il2CppFullySharedGenericAny* L_1 = ___1_container;
		Il2CppFullySharedGenericAny* L_2 = ___2_dictionary;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2834));
		GenericVirtualActionInvoker3< Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), __this, L_0, L_1, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2834));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2835));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyVisitor_Unity_Properties_IListPropertyBagVisitor_Visit_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mF8506A565BDC26F98F441497DD1AEC0BDB38F435_gshared (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* __this, RuntimeObject* ___0_properties, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_Enumerator_t81BCCB302BD659807C8286D053BEEC6406DA84E7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	const uint32_t SizeOf_PropertyCollection_1_t66D3B42193A72157B5C96FBA707524688F42FE5A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)));
	const Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE L_3 = alloca(SizeOf_Enumerator_t81BCCB302BD659807C8286D053BEEC6406DA84E7);
	const PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D L_2 = alloca(SizeOf_PropertyCollection_1_t66D3B42193A72157B5C96FBA707524688F42FE5A);
	Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE V_0 = alloca(SizeOf_Enumerator_t81BCCB302BD659807C8286D053BEEC6406DA84E7);
	memset(V_0, 0, SizeOf_Enumerator_t81BCCB302BD659807C8286D053BEEC6406DA84E7);
	PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D V_1 = alloca(SizeOf_PropertyCollection_1_t66D3B42193A72157B5C96FBA707524688F42FE5A);
	memset(V_1, 0, SizeOf_PropertyCollection_1_t66D3B42193A72157B5C96FBA707524688F42FE5A);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_properties), (&___1_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2745));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2746));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2747));
		RuntimeObject* L_0 = ___0_properties;
		Il2CppFullySharedGenericAny* L_1 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2748));
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny*, PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* >::Invoke(1, il2cpp_rgctx_data(method->rgctx_data, 2), (RuntimeObject*)L_0, L_1, (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2748));
		il2cpp_codegen_memcpy(V_1, L_2, SizeOf_PropertyCollection_1_t66D3B42193A72157B5C96FBA707524688F42FE5A);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2749));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
		PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261((PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)V_1, (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)L_3, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2749));
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_Enumerator_t81BCCB302BD659807C8286D053BEEC6406DA84E7);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2757));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2758));
				Il2CppConstrainedCallData L_5;
				Il2CppMethodPointer L_6 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 7), il2cpp_rgctx_method(method->rgctx_data, 14), (void*)(Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_0, &L_5, L_4);
				typedef void ( *func_L_7)(void*,const RuntimeMethod*);
				((func_L_7)L_6)(L_5.thisPtr,L_5.method);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2758));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2750));
				goto IL_0020_1;
			}

IL_0012_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2751));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2752));
				RuntimeObject* L_8;
				L_8 = Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_inline((Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_0, il2cpp_rgctx_method(method->rgctx_data, 8));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2752));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2753));
				Il2CppFullySharedGenericAny* L_9 = ___1_container;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2754));
				NullCheck((RuntimeObject*)L_8);
				InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 11), (RuntimeObject*)L_8, (RuntimeObject*)__this, L_9);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2754));
			}

IL_0020_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2755));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2756));
				bool L_10;
				L_10 = Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F((Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_0, il2cpp_rgctx_method(method->rgctx_data, 13));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2756));
				if (L_10)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_0039;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2759));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyVisitor_Unity_Properties_IListPropertyVisitor_Visit_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m08D7BD92A0DE2915FF4E57EE5E6DF4DE3D2DCBB0_gshared (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, Il2CppFullySharedGenericAny* ___2_list, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_property), (&___1_container), (&___2_list));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2821));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2822));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2823));
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_0 = ___0_property;
		Il2CppFullySharedGenericAny* L_1 = ___1_container;
		Il2CppFullySharedGenericAny* L_2 = ___2_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2824));
		GenericVirtualActionInvoker3< Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), __this, L_0, L_1, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2824));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2825));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisIl2CppFullySharedGenericAny_m30F19782E135A711E6DBF8BFDEDBA103CE36B778_gshared (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* __this, RuntimeObject* ___0_properties, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_Enumerator_tA9E9BE27584C250EB0CAFB43A0F5001DBB6D5AF1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
	const uint32_t SizeOf_PropertyCollection_1_tE707A7F4A1D3E0A14238D9880AD41BA8CE3CF986 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)));
	const Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE L_3 = alloca(SizeOf_Enumerator_tA9E9BE27584C250EB0CAFB43A0F5001DBB6D5AF1);
	const PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D L_2 = alloca(SizeOf_PropertyCollection_1_tE707A7F4A1D3E0A14238D9880AD41BA8CE3CF986);
	Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE V_0 = alloca(SizeOf_Enumerator_tA9E9BE27584C250EB0CAFB43A0F5001DBB6D5AF1);
	memset(V_0, 0, SizeOf_Enumerator_tA9E9BE27584C250EB0CAFB43A0F5001DBB6D5AF1);
	PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D V_1 = alloca(SizeOf_PropertyCollection_1_tE707A7F4A1D3E0A14238D9880AD41BA8CE3CF986);
	memset(V_1, 0, SizeOf_PropertyCollection_1_tE707A7F4A1D3E0A14238D9880AD41BA8CE3CF986);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_properties), (&___1_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2730));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2731));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2732));
		RuntimeObject* L_0 = ___0_properties;
		Il2CppFullySharedGenericAny* L_1 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2733));
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny*, PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* >::Invoke(1, il2cpp_rgctx_data(method->rgctx_data, 0), L_0, L_1, (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2733));
		il2cpp_codegen_memcpy(V_1, L_2, SizeOf_PropertyCollection_1_tE707A7F4A1D3E0A14238D9880AD41BA8CE3CF986);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2734));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
		PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261((PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)V_1, (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)L_3, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2734));
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_Enumerator_tA9E9BE27584C250EB0CAFB43A0F5001DBB6D5AF1);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2742));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2743));
				Il2CppConstrainedCallData L_5;
				Il2CppMethodPointer L_6 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 6), il2cpp_rgctx_method(method->rgctx_data, 13), (void*)(Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_0, &L_5, L_4);
				typedef void ( *func_L_7)(void*,const RuntimeMethod*);
				((func_L_7)L_6)(L_5.thisPtr,L_5.method);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2743));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2735));
				goto IL_0020_1;
			}

IL_0012_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2736));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2737));
				RuntimeObject* L_8;
				L_8 = Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_inline((Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_0, il2cpp_rgctx_method(method->rgctx_data, 7));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2737));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2738));
				Il2CppFullySharedGenericAny* L_9 = ___1_container;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2739));
				NullCheck((RuntimeObject*)L_8);
				InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 10), (RuntimeObject*)L_8, (RuntimeObject*)__this, L_9);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2739));
			}

IL_0020_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2740));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2741));
				bool L_10;
				L_10 = Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F((Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_0, il2cpp_rgctx_method(method->rgctx_data, 12));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2741));
				if (L_10)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_0039;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2744));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m04BC5F9017ED6F738688CB8FD2543E21C287CD4B_inline (Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m04BC5F9017ED6F738688CB8FD2543E21C287CD4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Enumerator_get_Current_m04BC5F9017ED6F738688CB8FD2543E21C287CD4B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 6349));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 6350));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 6351));
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_gshared_inline (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tD310794DECC848363CBBAD7016FBD21AD52C4562_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2358));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2359));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2360));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4));
		return L_0;
	}
}
