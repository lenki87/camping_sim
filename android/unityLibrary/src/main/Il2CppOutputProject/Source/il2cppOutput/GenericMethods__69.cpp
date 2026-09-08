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
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};

struct IProperty_1_t47DF8E7CFAFA47596FCFDA6775C02B5B3C05AAE5;
struct IVisitContravariantPropertyAdapter_1_t840FD11CAE88DB3BD63A5012AC34F37EF3BECACA;
struct IVisitContravariantPropertyAdapter_2_t5A583947F63DF9C841F5658F79220E239BD16406;
struct IVisitPropertyAdapter_1_t983629D42741CA23C65220AF1EB20488C04899EC;
struct IVisitPropertyAdapter_2_tC4ED171BEB3E49737FAE122B605B8700B95ECAC1;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_t948BEA99EC45AC7F41C18ABA972FF722CFD0DDAD;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct VisitDelegate_tD52AF62B386AEFB01695B524AB163DC1D4340AF4;
struct VisitWithoutAdaptersDelegate_t2B04EE11C8D1728AAD72DAACAFA0006B25055C87;
struct IPropertyVisitorAdapter_tD1C948315A7A2D15460BBF32AABDA0DDDE4A4B19;
struct IVisitPropertyAdapter_tD5E1FEF53B588CECEBF72E92CF6BB6A06192C92E;
struct PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4;
struct String_t;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C RuntimeClass* IVisitPropertyAdapter_tD5E1FEF53B588CECEBF72E92CF6BB6A06192C92E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m04BC5F9017ED6F738688CB8FD2543E21C287CD4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IPropertyVisitorAdapter_tD1C948315A7A2D15460BBF32AABDA0DDDE4A4B19_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IVisitPropertyAdapter_tD5E1FEF53B588CECEBF72E92CF6BB6A06192C92E_0_0_0_var;
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
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
struct VisitContext_1_t40748C9A25E6C59AB765934F3E9CFB772E9EC11B 
{
	Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F ___m_Enumerator;
	PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* ___m_Visitor;
	VisitDelegate_tD52AF62B386AEFB01695B524AB163DC1D4340AF4* ___m_Continue;
	VisitWithoutAdaptersDelegate_t2B04EE11C8D1728AAD72DAACAFA0006B25055C87* ___m_ContinueWithoutAdapters;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
};
struct VisitContext_2_t73456C24C2269C80C9B0050A61970CA7287E4844 
{
	Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F ___m_Enumerator;
	PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* ___m_Visitor;
	Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___U3CPropertyU3Ek__BackingField;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisitContext_2_t73456C24C2269C80C9B0050A61970CA7287E4844 VisitContext_2_FromProperty_m9B4CF52E51C2353486A9C38C084E38330E467D8A_gshared (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* ___0_visitor, Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F ___1_enumerator, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___2_property, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisitContext_1_t40748C9A25E6C59AB765934F3E9CFB772E9EC11B VisitContext_1_FromProperty_TisIl2CppFullySharedGenericAny_mFE005668E97B38EC137E7D2AA5D4A83A37D82C94_gshared (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* ___0_visitor, Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F ___1_enumerator, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___2_property, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyVisitor_ContinueVisitationWithoutAdapters_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m2F51E7FA6C4DC27ADB4889AF827DEAE1DDE158FF_gshared (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F ___1_enumerator, Il2CppFullySharedGenericAny* ___2_container, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyVisitor_ContinueVisitation_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m77E2E5452254696D7971C9BD5E9F5FC09768A71A_gshared (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m04BC5F9017ED6F738688CB8FD2543E21C287CD4B_inline (Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F* __this, const RuntimeMethod* method) ;
inline VisitContext_2_t73456C24C2269C80C9B0050A61970CA7287E4844 VisitContext_2_FromProperty_m9B4CF52E51C2353486A9C38C084E38330E467D8A (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* ___0_visitor, Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F ___1_enumerator, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___2_property, const RuntimeMethod* method)
{
	return ((  VisitContext_2_t73456C24C2269C80C9B0050A61970CA7287E4844 (*) (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4*, Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))VisitContext_2_FromProperty_m9B4CF52E51C2353486A9C38C084E38330E467D8A_gshared)(___0_visitor, ___1_enumerator, ___2_property, method);
}
inline VisitContext_1_t40748C9A25E6C59AB765934F3E9CFB772E9EC11B VisitContext_1_FromProperty_TisIl2CppFullySharedGenericAny_mFE005668E97B38EC137E7D2AA5D4A83A37D82C94 (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* ___0_visitor, Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F ___1_enumerator, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___2_property, const RuntimeMethod* method)
{
	return ((  VisitContext_1_t40748C9A25E6C59AB765934F3E9CFB772E9EC11B (*) (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4*, Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))VisitContext_1_FromProperty_TisIl2CppFullySharedGenericAny_mFE005668E97B38EC137E7D2AA5D4A83A37D82C94_gshared)(___0_visitor, ___1_enumerator, ___2_property, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7A7E22E7314145847E7D9CA3719F0B04C4F3E49B (Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F* __this, const RuntimeMethod* method) ;
inline void PropertyVisitor_ContinueVisitationWithoutAdapters_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m2F51E7FA6C4DC27ADB4889AF827DEAE1DDE158FF (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F ___1_enumerator, Il2CppFullySharedGenericAny* ___2_container, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method)
{
	((  void (*) (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4*, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PropertyVisitor_ContinueVisitationWithoutAdapters_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m2F51E7FA6C4DC27ADB4889AF827DEAE1DDE158FF_gshared)(__this, ___0_property, ___1_enumerator, ___2_container, ___3_value, method);
}
inline void PropertyVisitor_ContinueVisitation_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m77E2E5452254696D7971C9BD5E9F5FC09768A71A (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method)
{
	((  void (*) (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4*, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PropertyVisitor_ContinueVisitation_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m77E2E5452254696D7971C9BD5E9F5FC09768A71A_gshared)(__this, ___0_property, ___1_container, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyVisitor_ContinueVisitation_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m28133B55D11B2602B1692C3909FB4911F98535A1_gshared (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F ___1_enumerator, Il2CppFullySharedGenericAny* ___2_container, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyVisitorAdapter_tD1C948315A7A2D15460BBF32AABDA0DDDE4A4B19_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVisitPropertyAdapter_tD5E1FEF53B588CECEBF72E92CF6BB6A06192C92E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVisitPropertyAdapter_tD5E1FEF53B588CECEBF72E92CF6BB6A06192C92E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t9D87F4ACE979E5E47258F283F5C19DB4AA7624B6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_TValue_t9D87F4ACE979E5E47258F283F5C19DB4AA7624B6);
	const Il2CppFullySharedGenericAny L_40 = L_23;
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_TValue_t9D87F4ACE979E5E47258F283F5C19DB4AA7624B6);
	const Il2CppFullySharedGenericAny L_44 = L_27;
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	VisitContext_2_t73456C24C2269C80C9B0050A61970CA7287E4844 V_6;
	memset((&V_6), 0, sizeof(V_6));
	VisitContext_1_t40748C9A25E6C59AB765934F3E9CFB772E9EC11B V_7;
	memset((&V_7), 0, sizeof(V_7));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_property), (&___1_enumerator), (&___2_container), (&___3_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2899));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2900));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2901));
		goto IL_00e1;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2902));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2903));
		RuntimeObject* L_0;
		L_0 = Enumerator_get_Current_m04BC5F9017ED6F738688CB8FD2543E21C287CD4B_inline((&___1_enumerator), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2903));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2904));
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
			goto IL_0061;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 2)));
		RuntimeObject* L_6 = V_3;
		if (L_6)
		{
			goto IL_008a;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3)));
		RuntimeObject* L_8 = V_4;
		if (L_8)
		{
			goto IL_00a0;
		}
	}
	{
		RuntimeObject* L_9 = V_0;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IVisitPropertyAdapter_tD5E1FEF53B588CECEBF72E92CF6BB6A06192C92E_il2cpp_TypeInfo_var));
		RuntimeObject* L_10 = V_5;
		if (L_10)
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_00e1;
	}

IL_004b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2905));
		RuntimeObject* L_11 = V_1;
		Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F L_12 = ___1_enumerator;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_13 = ___0_property;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2906));
		VisitContext_2_t73456C24C2269C80C9B0050A61970CA7287E4844 L_14;
		L_14 = VisitContext_2_FromProperty_m9B4CF52E51C2353486A9C38C084E38330E467D8A(__this, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2906));
		V_6 = L_14;
		Il2CppFullySharedGenericAny* L_15 = ___2_container;
		Il2CppFullySharedGenericAny* L_16 = ___3_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2907));
		NullCheck(L_11);
		InterfaceActionInvoker3< VisitContext_2_t73456C24C2269C80C9B0050A61970CA7287E4844*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_11, (&V_6), L_15, L_16);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2907));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2908));
		return;
	}

IL_0061:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2909));
		RuntimeObject* L_17 = V_2;
		Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F L_18 = ___1_enumerator;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_19 = ___0_property;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2910));
		VisitContext_1_t40748C9A25E6C59AB765934F3E9CFB772E9EC11B L_20;
		L_20 = VisitContext_1_FromProperty_TisIl2CppFullySharedGenericAny_mFE005668E97B38EC137E7D2AA5D4A83A37D82C94(__this, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2910));
		V_7 = L_20;
		Il2CppFullySharedGenericAny* L_21 = ___2_container;
		Il2CppFullySharedGenericAny* L_22 = ___3_value;
		il2cpp_codegen_memcpy(L_23, L_22, SizeOf_TValue_t9D87F4ACE979E5E47258F283F5C19DB4AA7624B6);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2911));
		NullCheck(L_17);
		InterfaceActionInvoker3Invoker< VisitContext_1_t40748C9A25E6C59AB765934F3E9CFB772E9EC11B*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_17, (&V_7), L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 15)) ? L_23: *(void**)L_23));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2911));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2912));
		Il2CppFullySharedGenericAny* L_24 = ___3_value;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_25 = ___0_property;
		Il2CppFullySharedGenericAny* L_26 = ___2_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2913));
		NullCheck(L_25);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(21, L_25, L_26, (Il2CppFullySharedGenericAny*)L_27);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2913));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_24, L_27, SizeOf_TValue_t9D87F4ACE979E5E47258F283F5C19DB4AA7624B6);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 15), (void**)(Il2CppFullySharedGenericAny*)L_24, (void*)L_27);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2914));
		return;
	}

IL_008a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2915));
		RuntimeObject* L_28 = V_3;
		Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F L_29 = ___1_enumerator;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_30 = ___0_property;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2916));
		VisitContext_2_t73456C24C2269C80C9B0050A61970CA7287E4844 L_31;
		L_31 = VisitContext_2_FromProperty_m9B4CF52E51C2353486A9C38C084E38330E467D8A(__this, L_29, L_30, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2916));
		V_6 = L_31;
		Il2CppFullySharedGenericAny* L_32 = ___2_container;
		Il2CppFullySharedGenericAny* L_33 = ___3_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2917));
		NullCheck(L_28);
		GenericInterfaceActionInvoker3< VisitContext_2_t73456C24C2269C80C9B0050A61970CA7287E4844*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 19), L_28, (&V_6), L_32, L_33);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2917));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2918));
		return;
	}

IL_00a0:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2919));
		RuntimeObject* L_34 = V_4;
		Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F L_35 = ___1_enumerator;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_36 = ___0_property;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2920));
		VisitContext_1_t40748C9A25E6C59AB765934F3E9CFB772E9EC11B L_37;
		L_37 = VisitContext_1_FromProperty_TisIl2CppFullySharedGenericAny_mFE005668E97B38EC137E7D2AA5D4A83A37D82C94(__this, L_35, L_36, il2cpp_rgctx_method(method->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2920));
		V_7 = L_37;
		Il2CppFullySharedGenericAny* L_38 = ___2_container;
		Il2CppFullySharedGenericAny* L_39 = ___3_value;
		il2cpp_codegen_memcpy(L_40, L_39, SizeOf_TValue_t9D87F4ACE979E5E47258F283F5C19DB4AA7624B6);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2921));
		NullCheck(L_34);
		GenericInterfaceActionInvoker3Invoker< VisitContext_1_t40748C9A25E6C59AB765934F3E9CFB772E9EC11B*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 20), L_34, (&V_7), L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 15)) ? L_40: *(void**)L_40));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2921));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2922));
		Il2CppFullySharedGenericAny* L_41 = ___3_value;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_42 = ___0_property;
		Il2CppFullySharedGenericAny* L_43 = ___2_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2923));
		NullCheck(L_42);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(21, L_42, L_43, (Il2CppFullySharedGenericAny*)L_44);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2923));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_41, L_44, SizeOf_TValue_t9D87F4ACE979E5E47258F283F5C19DB4AA7624B6);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 15), (void**)(Il2CppFullySharedGenericAny*)L_41, (void*)L_44);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2924));
		return;
	}

IL_00ca:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2925));
		RuntimeObject* L_45 = V_5;
		Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F L_46 = ___1_enumerator;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_47 = ___0_property;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2926));
		VisitContext_2_t73456C24C2269C80C9B0050A61970CA7287E4844 L_48;
		L_48 = VisitContext_2_FromProperty_m9B4CF52E51C2353486A9C38C084E38330E467D8A(__this, L_46, L_47, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2926));
		V_6 = L_48;
		Il2CppFullySharedGenericAny* L_49 = ___2_container;
		Il2CppFullySharedGenericAny* L_50 = ___3_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2927));
		NullCheck(L_45);
		GenericInterfaceActionInvoker3< VisitContext_2_t73456C24C2269C80C9B0050A61970CA7287E4844*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 21), L_45, (&V_6), L_49, L_50);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2927));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2928));
		return;
	}

IL_00e1:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2929));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2930));
		bool L_51;
		L_51 = Enumerator_MoveNext_m7A7E22E7314145847E7D9CA3719F0B04C4F3E49B((&___1_enumerator), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2930));
		if (L_51)
		{
			goto IL_0005;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2931));
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_52 = ___0_property;
		Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F L_53 = ___1_enumerator;
		Il2CppFullySharedGenericAny* L_54 = ___2_container;
		Il2CppFullySharedGenericAny* L_55 = ___3_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2932));
		PropertyVisitor_ContinueVisitationWithoutAdapters_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m2F51E7FA6C4DC27ADB4889AF827DEAE1DDE158FF(__this, L_52, L_53, L_54, L_55, il2cpp_rgctx_method(method->rgctx_data, 22));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2932));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2933));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyVisitor_ContinueVisitationWithoutAdapters_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m2F51E7FA6C4DC27ADB4889AF827DEAE1DDE158FF_gshared (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Enumerator_t1F8731B0A3B3867BCA326BFB2503114EC716066F ___1_enumerator, Il2CppFullySharedGenericAny* ___2_container, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_property), (&___1_enumerator), (&___2_container), (&___3_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2934));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2935));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2936));
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_0 = ___0_property;
		Il2CppFullySharedGenericAny* L_1 = ___2_container;
		Il2CppFullySharedGenericAny* L_2 = ___3_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2937));
		PropertyVisitor_ContinueVisitation_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m77E2E5452254696D7971C9BD5E9F5FC09768A71A(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2937));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2938));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyVisitor_IsExcluded_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m2435765330DAF6651612293B7DA80840B4AC190F_gshared (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_property), (&___1_container), (&___2_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2836));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2837));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2838));
		return (bool)0;
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
