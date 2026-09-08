#include "pch-cpp.hpp"





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
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*,T1,T2,T3,T4,const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj,p1,p2,p3,p4,invokeData.method);
	}
};

struct ICollectionPropertyAccept_1_t47CC862E67F2C0CDF06B7F14894F7E2ACE8DDF36;
struct IDictionaryPropertyAccept_1_tBB13581A3F3EBD8015396E979734D2ACEF4E5EA0;
struct IListPropertyAccept_1_t7B2903FDBB8507340BE13D2629CF96AF67B2A373;
struct ISetPropertyAccept_1_t9995C297F2325BEA2BE3781A339B837B8CB1C9CB;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_t948BEA99EC45AC7F41C18ABA972FF722CFD0DDAD;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2;
struct PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4;
struct String_t;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C RuntimeClass* PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeType* IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_0_0_0_var;
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBagStore_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_mDEAE1F0D7155B39794D7B007BD7EC479891ED7BD_gshared (Il2CppFullySharedGenericAny* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;

inline bool PropertyBagStore_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_mDEAE1F0D7155B39794D7B007BD7EC479891ED7BD (Il2CppFullySharedGenericAny* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, RuntimeObject**, const RuntimeMethod*))PropertyBagStore_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_mDEAE1F0D7155B39794D7B007BD7EC479891ED7BD_gshared)(___0_value, ___1_propertyBag, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyVisitor_ContinueVisitation_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m77E2E5452254696D7971C9BD5E9F5FC09768A71A_gshared (PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_property), (&___1_container), (&___2_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2796));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2797));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2798));
		Il2CppFullySharedGenericAny* L_0 = ___2_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2799));
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PropertyBagStore_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_mDEAE1F0D7155B39794D7B007BD7EC479891ED7BD(L_0, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2799));
		if (!L_1)
		{
			goto IL_0063;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2800));
		RuntimeObject* L_2 = V_0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 2)));
		RuntimeObject* L_3 = V_1;
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 3)));
		RuntimeObject* L_5 = V_2;
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 4)));
		RuntimeObject* L_7 = V_3;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 5)));
		RuntimeObject* L_9 = V_4;
		if (L_9)
		{
			goto IL_0057;
		}
	}
	{
		goto IL_0063;
	}

IL_0036:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2801));
		RuntimeObject* L_10 = V_1;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_11 = ___0_property;
		Il2CppFullySharedGenericAny* L_12 = ___1_container;
		Il2CppFullySharedGenericAny* L_13 = ___2_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2802));
		NullCheck(L_10);
		GenericInterfaceActionInvoker4< RuntimeObject*, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 8), L_10, (RuntimeObject*)__this, L_11, L_12, L_13);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2802));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2803));
		return;
	}

IL_0041:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2804));
		RuntimeObject* L_14 = V_2;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_15 = ___0_property;
		Il2CppFullySharedGenericAny* L_16 = ___1_container;
		Il2CppFullySharedGenericAny* L_17 = ___2_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2805));
		NullCheck(L_14);
		GenericInterfaceActionInvoker4< RuntimeObject*, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 9), L_14, (RuntimeObject*)__this, L_15, L_16, L_17);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2805));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2806));
		return;
	}

IL_004c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2807));
		RuntimeObject* L_18 = V_3;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_19 = ___0_property;
		Il2CppFullySharedGenericAny* L_20 = ___1_container;
		Il2CppFullySharedGenericAny* L_21 = ___2_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2808));
		NullCheck(L_18);
		GenericInterfaceActionInvoker4< RuntimeObject*, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 10), L_18, (RuntimeObject*)__this, L_19, L_20, L_21);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2808));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2809));
		return;
	}

IL_0057:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2810));
		RuntimeObject* L_22 = V_4;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_23 = ___0_property;
		Il2CppFullySharedGenericAny* L_24 = ___1_container;
		Il2CppFullySharedGenericAny* L_25 = ___2_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2811));
		NullCheck(L_22);
		GenericInterfaceActionInvoker4< RuntimeObject*, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 11), L_22, (RuntimeObject*)__this, L_23, L_24, L_25);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2811));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2812));
		return;
	}

IL_0063:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2813));
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_26 = ___0_property;
		Il2CppFullySharedGenericAny* L_27 = ___1_container;
		Il2CppFullySharedGenericAny* L_28 = ___2_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2814));
		GenericVirtualActionInvoker3< Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 12), __this, L_26, L_27, L_28);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2814));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2815));
		return;
	}
}
