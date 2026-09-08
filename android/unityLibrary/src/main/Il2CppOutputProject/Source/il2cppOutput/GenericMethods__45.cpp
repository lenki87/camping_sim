#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
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
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2* p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualActionInvoker4Invoker;
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualActionInvoker4Invoker<T1*, T2, T3, T4>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[4] = { p1, &p2, &p3, &p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
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

struct Action_1_t68F947CFF3E836EB3A2C880E204C2D89F5AEB115;
struct Action_1_tCB2600FFD386071D232B22D0FFBB8989B853DFD5;
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09;
struct Action_1_tF311BFE8BC297CED8D99EFB2A859FD81D3E05188;
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
struct Dictionary_2_t65444DA3399B4C226AD4446C74787F6DEC14FC82;
struct Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct DynamicHeightVirtualizationController_1_t4265F83636B572C276F38D3677CDD716F02FD211;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct FixedHeightVirtualizationController_1_t02CCCBFAC87126C717076BE9B913FDBDB623F168;
struct Func_2_tD62FEF82C38D2F936C4A0BE93BCEEE9CF7A7DB06;
struct Func_2_tB008453FB2AEC254EDA582B30C36A8A98998AAF0;
struct Func_2_tAA84235D71BA06591784319703175CFB5E386A7F;
struct Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D;
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
struct HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7;
struct IEnumerable_1_tDA3DB14A8C53E0EFBEA9554E60CD303E733E672C;
struct IEnumerable_1_tAC7D005B012CF8B1D2C962451C23F66FEE9DB464;
struct IEnumerator_1_t45F3F7FD63BD81FEABDE4F646B59715C819D84FC;
struct IIndexedCollectionPropertyBagEnumerator_1_t10A3FE79120150E0A39D2649E6366925E3E7977A;
struct IListPropertyAccept_1_t7B2903FDBB8507340BE13D2629CF96AF67B2A373;
struct IList_1_t1F79F22F068EBEEE2FC8D080E405FD5F950258E3;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct IProperty_1_t47DF8E7CFAFA47596FCFDA6775C02B5B3C05AAE5;
struct ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C;
struct List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_t592DF2E59D6E244DA0041698383484A07C7E0480;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t0EBD8BA582D3F66E8AC5DBDC4A635DEB08086465;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3;
struct Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15;
struct BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7;
struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768;
struct CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801;
struct ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A;
struct DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct IBinding_t02FD99E9C9F2072B28E110F16C157666F5B2DBC7;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2;
struct IPropertyBagVisitor_tE8B9B7E14DBF946E6E65BD0ECC8679268715BF5A;
struct IVisualElementScheduledItem_t309F1A5445514122A9E3F64182D0D8A4DE34C48F;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct KeyboardNavigationManipulator_t7E9BA3568ADC1660C4E09B924ECD457E33B835B3;
struct ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55;
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9;
struct SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB;
struct String_t;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct Type_t;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA;
struct Selection_tDC7A99533BDD2EB0142DB028DB38A7B4D4BBC93B;
struct CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1;
struct UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21;
struct EqualityComparer_tF8FCE99C5DBB2F35D74728CB65346435381CFD5B;
struct Data_t6BD087CC0FA9794D342D260035A70E365224C66E;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_RenderPipelines_Universal_Runtime[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollectionVirtualizationMethod_tF4A3B1303302D2B17F74CDB7D8A5287C8B056C88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1CEF7A5E7543C267F2B8C35F9EC881F8DF3A2179;
IL2CPP_EXTERN_C String_t* _stringLiteralA65DB61A85A66A6CD92054C1547154199765565C;
IL2CPP_EXTERN_C String_t* _stringLiteralC61356ECF43F815CADD86943C995264057299D08;
IL2CPP_EXTERN_C String_t* _stringLiteralDC79A2F3567AC1BF116F04E9CECFDFA90B0B134C;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVerticalCollectionView_get_virtualizationMethod_mB374D38B21D6CE19A96F6B547C5FB3F4A98F35A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledArray_Free_mBE46430B7DABEA80D8D7349FCD2434389C29C9CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PathVisitor_get_ReturnCode_m900403F09B0392B4D8C2E2E0EBD06148FCFA2734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PathVisitor_set_Path_m8E3F004534B73D33C70C3BD20729F5987F11627B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIPathVisitor_get_result_m1BE68B1EF9A54DEE0C58EB323670224B57A405A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIPathVisitor_set_bindingContext_mD358FF971532C5C9015F395A3918DDD7050D2378_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIPathVisitor_set_binding_m72939ACF73E3671B6DACF6107AAC6AC069D8B2FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIPathVisitor_set_direction_m617B40AD904ACA9CA4F6644CA5361A579A8DE6C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_4__ctor_mD27E7512AA0D94DC4197898D284DBA11B7DFAB48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ArrayByRefMarshallingAccessor_2_tA659376B38B29F70F2F6632621B72DAA357F7BC5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BlittableListWrapper_tE39AB35B42449CFD1FDCBB7DC4F0D1A1EA2312C4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CollectionVirtualizationMethod_tF4A3B1303302D2B17F74CDB7D8A5287C8B056C88_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DataOwner_tA0DC6C81C2140574EF77C582BCE44DF0A1D0EA34_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enumerator_tD310794DECC848363CBBAD7016FBD21AD52C4562_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ListMarshallingAccessor_2_tFD1F582FC2926CE6B941BA251661DF41E46BCF9C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisitedPropertyScope_tE05035FCF84C4F135E88B893FC40CF5F3B43CFFE_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4  : public RuntimeObject
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15  : public RuntimeObject
{
	VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___m_VisitContext;
	int32_t ___U3CmaxDepthU3Ek__BackingField;
};
struct BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339  : public RuntimeObject
{
};
struct BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA  : public RuntimeObject
{
};
struct BindingsAllocator_t6B99687FB385789709676DA0598E04365724E4CE  : public RuntimeObject
{
};
struct Buffer_tF5DDA52AA39735125D710A126AC80BADEB900CD4  : public RuntimeObject
{
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801  : public RuntimeObject
{
	ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* ___m_ScrollView;
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
struct ArrayByRefMarshallingAccessor_2_t1C5A53EDFEB30C62E19DFC65819CADB6D5E31894 
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___array;
};
struct ArrayByRefMarshallingAccessor_2_t3250EFF3C48E9AA12D5428D7EAB384BD54FEB68A 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array;
};
struct CustomStyleProperty_1_t6871E5DBF19AB4DC7E1134B32A03B7A458D52E9F 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63 
{
	List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
typedef Il2CppFullySharedGenericStruct IndexedCollectionPropertyBagEnumerable_1_t2B3DE6D978823100869CD2618FBDF5807E3B997E;
struct InspectedTypeScope_1_t02FE7CB83945A2462C3B101968ABFD80AF129E73 
{
	VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___m_VisitContext;
};
#ifndef InspectedTypeScope_1_tF3E2B61DB028D759D53AA4A727B61ADB5FBCF069_marshaled_pinvoke_define
#define InspectedTypeScope_1_tF3E2B61DB028D759D53AA4A727B61ADB5FBCF069_marshaled_pinvoke_define
struct InspectedTypeScope_1_tF3E2B61DB028D759D53AA4A727B61ADB5FBCF069_marshaled_pinvoke
{
	VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___m_VisitContext;
};
#endif
#ifndef InspectedTypeScope_1_tF3E2B61DB028D759D53AA4A727B61ADB5FBCF069_marshaled_com_define
#define InspectedTypeScope_1_tF3E2B61DB028D759D53AA4A727B61ADB5FBCF069_marshaled_com_define
struct InspectedTypeScope_1_tF3E2B61DB028D759D53AA4A727B61ADB5FBCF069_marshaled_com
{
	VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___m_VisitContext;
};
#endif
struct ListMarshallingAccessor_2_t782671FA36B08F58817019DBA40F148D30D1C80F 
{
	List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___list;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___array;
};
struct ListMarshallingAccessor_2_t4774A83BC60753470972766012AC4A6CA9EE7816 
{
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___list;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array;
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	bool ___hasValue;
	float ___value;
};
typedef Il2CppFullySharedGenericStruct TreeViewItemData_1_t3E2C741B77BE0CA5BE82E36F13DE84F4E7AE117C;
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
typedef Il2CppFullySharedGenericStruct ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829;
typedef Il2CppFullySharedGenericStruct ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
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
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	bool ___m_Focusable;
	int32_t ___m_TabIndex;
	bool ___m_DelegatesFocus;
	bool ___m_ExcludeFromFocusRing;
	bool ___U3CisEligibleToReceiveFocusFromDisabledChildU3Ek__BackingField;
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
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
struct VisitedPropertyScope_tE05035FCF84C4F135E88B893FC40CF5F3B43CFFE 
{
	VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___m_VisitContext;
};
struct VisitedPropertyScope_tE05035FCF84C4F135E88B893FC40CF5F3B43CFFE_marshaled_pinvoke
{
	VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___m_VisitContext;
};
struct VisitedPropertyScope_tE05035FCF84C4F135E88B893FC40CF5F3B43CFFE_marshaled_com
{
	VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___m_VisitContext;
};
struct NativeOwnedMemory_t5AAA42C857604F899F989EFBDE4DE8FD01BBC771 
{
	void* ___data;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct EnumeratorType_t213060DC702D8C5D779B12D7E6CE6AFC2D7BB6CA 
{
	int32_t ___value__;
};
typedef Il2CppFullySharedGenericStruct IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479;
struct ScrollDirection_t43D6F2589DBA5082E97C9C4BB9034898AACD22FE 
{
	int32_t ___value__;
};
struct VerticalVirtualizationController_1_t6252D1481BD1E825EF5F5A9287BD95D7FC9A9D96  : public CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801
{
	ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* ___m_Pool;
	BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___m_CollectionView;
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___m_ActiveItems;
	Il2CppSharedGenericObject* ___m_DraggedItem;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___m_DeferredScrollToItemIndex;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_PerformDeferredScrollToItem;
	RuntimeObject* ___m_ScheduleDeferredScrollToItem;
	RuntimeObject* ___m_ScrollScheduledItem;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_ScrollCallback;
	int32_t ___m_LastFocusedElementIndex;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_LastFocusedElementTreeChildIndexes;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___m_VisibleItemPredicateDelegate;
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___m_ScrollInsertionList;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_EmptyRows;
};
struct VirtualizationChange_t85224FECC9D57953ADCF7B66A8A399FD83684725 
{
	int32_t ___value__;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AlternatingRowBackground_t5970E82515609444BB4F9E993645CA4A9A9803E5 
{
	int32_t ___value__;
};
struct BindingMode_t14EA605BB56B087ECA15C8BF7826E98F12D30E61 
{
	int32_t ___value__;
};
struct BindingStatus_t72E69C73FEA899A1FE65BCA04E6B79E30157EB43 
{
	int32_t ___value__;
};
struct BindingUpdateStage_t91119CD89F37505ED96D2FC473F486E5ED112762 
{
	int32_t ___value__;
};
struct BindingUpdateTrigger_t5237F1E29F5B5604BB57907C83EE6B1CFA261234 
{
	int32_t ___value__;
};
struct CollectionVirtualizationMethod_tF4A3B1303302D2B17F74CDB7D8A5287C8B056C88 
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
struct LanguageDirection_t30A3B6BBCEE6A6F57641E4E008E0DCC40603558C 
{
	int32_t ___value__;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct PseudoStates_tF4AB056E8743741BCE464A0983A060A53AAB7E4D 
{
	int32_t ___value__;
};
struct RenderHints_t4032FC4AB3FD946FD2A484865B8861730D9035E7 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SelectionType_t606E5DED60240D7E52388344A8A1EF4EC4E54079 
{
	int32_t ___value__;
};
struct VisitExceptionKind_t7E6C3EABD5439F2B4CA31C246B2AA4AC16A77DF5 
{
	int32_t ___value__;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct VisualElementFlags_t4D1066E11400967A1A2DA7331391ACDC4AA14409 
{
	int32_t ___value__;
};
struct RangeSelectionDirection_tA0E89B09AD2ABB3577538BB776B21FD02B22D926 
{
	int32_t ___value__;
};
struct pointerProcessingStateEnum_t2D3DC8562647C7FE0A8927E876089172625FCFF5 
{
	int32_t ___value__;
};
struct DataOwner_tA0DC6C81C2140574EF77C582BCE44DF0A1D0EA34 
{
	int32_t ___value__;
};
struct DynamicHeightVirtualizationController_1_t4265F83636B572C276F38D3677CDD716F02FD211  : public VerticalVirtualizationController_1_t6252D1481BD1E825EF5F5A9287BD95D7FC9A9D96
{
	int32_t ___m_HighestCachedIndex;
	Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC* ___m_ItemHeightCache;
	Dictionary_2_t65444DA3399B4C226AD4446C74787F6DEC14FC82* ___m_ContentHeightCache;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___m_WaitingCache;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___m_ScrolledToItemIndex;
	int32_t ___m_ForcedFirstVisibleItem;
	int32_t ___m_ForcedLastVisibleItem;
	bool ___m_StickToBottom;
	int32_t ___m_LastChange;
	int32_t ___m_ScrollDirection;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_DelayedScrollOffset;
	float ___m_AccumulatedHeight;
	float ___m_MinimumItemHeight;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_FillCallback;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_ScrollResetCallback;
	Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09* ___m_GeometryChangedCallback;
	RuntimeObject* ___m_ScheduledItem;
	RuntimeObject* ___m_ScrollResetScheduledItem;
	RuntimeObject* ___m_RefreshScrollOffsetScheduledItem;
	Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___m_IndexOutOfBoundsPredicate;
	bool ___m_FillExecuted;
	int64_t ___m_TimeSinceFillScheduledMs;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE;
struct FixedHeightVirtualizationController_1_t02CCCBFAC87126C717076BE9B913FDBDB623F168  : public VerticalVirtualizationController_1_t6252D1481BD1E825EF5F5A9287BD95D7FC9A9D96
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___m_ScrolledToItemIndex;
	bool ___m_ForcedScroll;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
typedef Il2CppFullySharedGenericStruct PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D;
struct ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Binding_tA1358A155852138C1926082E4F3245B6F631CBED  : public RuntimeObject
{
	bool ___m_Dirty;
	int32_t ___m_UpdateTrigger;
	String_t* ___U3CpropertyU3Ek__BackingField;
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
struct BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB 
{
	void* ___m_Data;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_ActiveFreeMaskCounts;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMasksStorage;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMaskIndicesStorage;
	int32_t ___m_Allocator;
};
struct BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB_marshaled_pinvoke
{
	void* ___m_Data;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_ActiveFreeMaskCounts;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMasksStorage;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMaskIndicesStorage;
	int32_t ___m_Allocator;
};
struct BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB_marshaled_com
{
	void* ___m_Data;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_ActiveFreeMaskCounts;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMasksStorage;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMaskIndicesStorage;
	int32_t ___m_Allocator;
};
struct MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1 
{
	void* ___data;
	int32_t ___size;
	int32_t ___capacity;
	int32_t ___dataOwner;
};
struct MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 
{
	union
	{
		struct
		{
			intptr_t ___pointer;
			int32_t ___allocator;
		};
		uint8_t MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2__padding[16];
	};
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE 
{
	int32_t ___U3CIgnoreExceptionsU3Ek__BackingField;
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
struct BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59 
{
	MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1 ___arrayWrapper;
};
struct BlittableListWrapper_tE39AB35B42449CFD1FDCBB7DC4F0D1A1EA2312C4 
{
	MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1 ___arrayWrapper;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 
{
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
	Data_t6BD087CC0FA9794D342D260035A70E365224C66E* ___m_Data;
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E 
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_PropertyPath;
	String_t* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___m_PropertyPath;
	char* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___m_PropertyPath;
	Il2CppChar* ___m_Path;
};
struct DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA  : public Binding_tA1358A155852138C1926082E4F3245B6F631CBED
{
	int32_t ___m_BindingMode;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___m_SourceToUiConverters;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___m_UiToSourceConverters;
	RuntimeObject* ___U3CdataSourceU3Ek__BackingField;
	Type_t* ___U3CdataSourceTypeU3Ek__BackingField;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CdataSourcePathU3Ek__BackingField;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_SourceToUIConvertersString;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_UiToSourceConvertersString;
};
struct LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA 
{
	int32_t ___m_Manager;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Nodes;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Configs;
};
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446  : public RuntimeObject
{
	int32_t ___m_PathIndex;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
	bool ___U3CReadonlyVisitU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
};
struct VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA  : public RuntimeObject
{
	List_1_t0EBD8BA582D3F66E8AC5DBDC4A635DEB08086465* ___U3CpropertyPathInfosU3Ek__BackingField;
	HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* ___U3CtypesU3Ek__BackingField;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CcurrentU3Ek__BackingField;
	int32_t ___U3CcurrentDepthU3Ek__BackingField;
};
struct BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_TargetElement;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___m_BindingId;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_DataSourcePath;
	RuntimeObject* ___m_DataSource;
};
struct BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_TargetElement;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke ___m_BindingId;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___m_DataSourcePath;
	Il2CppIUnknown* ___m_DataSource;
};
struct BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_TargetElement;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com ___m_BindingId;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___m_DataSourcePath;
	Il2CppIUnknown* ___m_DataSource;
};
struct LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 ___m_Handle;
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField;
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField;
	String_t* ___m_Name;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList;
	Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35* ___m_PropertyBag;
	int32_t ___m_Flags;
	String_t* ___m_ViewDataKey;
	int32_t ___m_RenderHints;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding;
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___nestedRenderData;
	int32_t ___hierarchyDepth;
	int32_t ___insertionIndex;
	int32_t ___triggerPseudoMask;
	int32_t ___dependencyPseudoMask;
	int32_t ___m_PseudoStates;
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField;
	LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE ___m_LayoutNode;
	VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3* ___m_TransformDataPTr;
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext;
	int32_t ___inheritedStylesHash;
	uint32_t ___controlid;
	int32_t ___imguiContainerDescendantCount;
	bool ___m_EnabledSelf;
	int32_t ___m_LanguageDirection;
	int32_t ___m_LocalLanguageDirection;
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField;
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations;
	RuntimeObject* ___m_DataSource;
	PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55* ___m_DataSourcePath;
	List_1_t592DF2E59D6E244DA0041698383484A07C7E0480* ___m_Bindings;
	Type_t* ___U3CdataSourceTypeU3Ek__BackingField;
	int32_t ___m_TrickleDownHandleEventCategories;
	int32_t ___m_BubbleUpHandleEventCategories;
	int32_t ___m_BubbleUpEventCallbackCategories;
	int32_t ___m_TrickleDownEventCallbackCategories;
	int32_t ___m_EventInterestSelfCategories;
	int32_t ___m_CachedEventInterestParentCategories;
	uint32_t ___m_NextParentCachedVersion;
	uint32_t ___m_NextParentRequiredVersion;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CachedNextParentWithEventInterests;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField;
	bool ___U3CcacheAsBitmapU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource;
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess;
	ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45* ___resolvedStyleAccess;
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList;
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData;
};
struct UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* ___U3CbindingU3Ek__BackingField;
	int32_t ___U3CdirectionU3Ek__BackingField;
	BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 ___U3CbindingContextU3Ek__BackingField;
	BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___U3CresultU3Ek__BackingField;
};
struct BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	RuntimeObject* ___U3CbindingU3Ek__BackingField;
	String_t* ___U3CbindingPathU3Ek__BackingField;
};
struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE  : public BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C
{
	Action_1_tCB2600FFD386071D232B22D0FFBB8989B853DFD5* ___itemsChosen;
	Action_1_tCB2600FFD386071D232B22D0FFBB8989B853DFD5* ___selectionChanged;
	Action_1_t68F947CFF3E836EB3A2C880E204C2D89F5AEB115* ___selectedIndicesChanged;
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___itemIndexChanged;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___itemsSourceChanged;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_SelectionNotChanged;
	Func_2_tD62FEF82C38D2F936C4A0BE93BCEEE9CF7A7DB06* ___canStartDrag;
	Func_2_tAA84235D71BA06591784319703175CFB5E386A7F* ___setupDragAndDrop;
	Func_2_tB008453FB2AEC254EDA582B30C36A8A98998AAF0* ___dragAndDropUpdate;
	Func_2_tB008453FB2AEC254EDA582B30C36A8A98998AAF0* ___handleDrop;
	int32_t ___m_SelectionType;
	bool ___allowSingleClickChoice;
	bool ___m_HorizontalScrollingEnabled;
	int32_t ___m_ShowAlternatingRowBackgrounds;
	float ___m_FixedItemHeight;
	bool ___m_ItemHeightIsInline;
	int32_t ___m_VirtualizationMethod;
	ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* ___m_ScrollView;
	CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* ___m_ViewController;
	CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801* ___m_VirtualizationController;
	KeyboardNavigationManipulator_t7E9BA3568ADC1660C4E09B924ECD457E33B835B3* ___m_NavigationManipulator;
	SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* ___serializedVirtualizationData;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_SelectedIds;
	Selection_tDC7A99533BDD2EB0142DB028DB38A7B4D4BBC93B* ___m_Selection;
	float ___m_LastHeight;
	int32_t ___m_RangeSelectionDirection;
	ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* ___m_Dragger;
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___m_ItemIndexChangedCallback;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_ItemsSourceChangedCallback;
	RuntimeObject* ___m_RebuildScheduled;
	int32_t ___U3CpointerProcessingStateU3Ek__BackingField;
	int32_t ___U3CcurrentPointerButtonU3Ek__BackingField;
	int32_t ___m_PreviousRefreshedCount;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_TouchDownPosition;
	int64_t ___m_LastPointerDownTimeStamp;
	int32_t ___m_PointerDownCount;
};
struct BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7  : public BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE
{
	Action_1_tF311BFE8BC297CED8D99EFB2A859FD81D3E05188* ___itemExpandedChanged;
	bool ___m_AutoExpand;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_ExpandedItemIds;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CcustomIdentU3Ek__BackingField;
};
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4_StaticFields
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_StaticFields
{
	CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* ___s_VisitDataSourceAsRootVisitor;
	UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* ___s_VisitDataSourceAtPathVisitor;
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
struct DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA_StaticFields
{
	MethodInfo_t* ___s_UpdateUIMethodInfo;
};
struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_StaticFields
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___itemsSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectionTypeProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectedItemProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectedItemsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectedIndexProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectedIndicesProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___showBorderProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___reorderableProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___horizontalScrollingEnabledProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___showAlternatingRowBackgroundsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___virtualizationMethodProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___fixedItemHeightProperty;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_RefreshMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_RebuildMarker;
	String_t* ___k_InvalidTemplateError;
	CustomStyleProperty_1_t6871E5DBF19AB4DC7E1134B32A03B7A458D52E9F ___s_ItemHeightProperty;
	String_t* ___ussClassName;
	String_t* ___borderUssClassName;
	String_t* ___itemUssClassName;
	String_t* ___dragHoverBarUssClassName;
	String_t* ___dragHoverMarkerUssClassName;
	String_t* ___itemDragHoverUssClassName;
	String_t* ___itemSelectedVariantUssClassName;
	String_t* ___itemAlternativeBackgroundUssClassName;
	String_t* ___listScrollViewUssClassName;
	String_t* ___backgroundFillUssClassName;
};
struct BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7_StaticFields
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___autoExpandProperty;
	CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 ___s_TreeViewIndentProperty;
	int32_t ___invalidId;
	String_t* ___ussClassName;
	String_t* ___itemUssClassName;
	String_t* ___itemToggleUssClassName;
	String_t* ___itemIndentsContainerUssClassName;
	String_t* ___itemIndentUssClassName;
	String_t* ___itemContentContainerUssClassName;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_m60E7BF3AACB59F7E085E19E4B6DC8C612F6D5534_gshared (Il2CppFullySharedGenericAny* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_m1B11483698339D3A0D40CD7247EE834DA473E24A_gshared (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m717E818AD74F7A7F438B2FAD3245F1EA356FF56F_gshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InspectedTypeScope_1__ctor_m81574608CF3C47E48CC6FF4C8EA96C099422648C_gshared (InspectedTypeScope_1_t02FE7CB83945A2462C3B101968ABFD80AF129E73* __this, VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___0_context, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InspectedTypeScope_1_Dispose_m59F33FE5783A60AF674C2CA0167736D2A851FE78_gshared (InspectedTypeScope_1_t02FE7CB83945A2462C3B101968ABFD80AF129E73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBag_GetPropertyBag_TisIl2CppFullySharedGenericAny_m640BEA3D9C9EB8D8E5120B304862BCC23F0D6C1B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261_gshared (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* __this, Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_gshared_inline (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F_gshared (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedHeightVirtualizationController_1__ctor_m02185FC407F96D7677A1DBBFEE52D370A56FC8E9_gshared (FixedHeightVirtualizationController_1_t02CCCBFAC87126C717076BE9B913FDBDB623F168* __this, BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___0_collectionView, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicHeightVirtualizationController_1__ctor_mDA2E7AE573A3F57800D60BE9280031DA968C06B1_gshared (DynamicHeightVirtualizationController_1_t4265F83636B572C276F38D3677CDD716F02FD211* __this, BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___0_collectionView, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6_gshared (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_4__ctor_mFF0D3A69E30DE69A5DB3A2559A8901F1E9851FCB_gshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, Il2CppFullySharedGenericAny ___3_item4, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m87850B36DC83BF310EC6136E6D14DC5634F96F05_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrayByRefMarshallingAccessor_2__ctor_m82E30054144C4DFDBB7366FE5C9CD799530C8CD7_gshared_inline (ArrayByRefMarshallingAccessor_2_t3250EFF3C48E9AA12D5428D7EAB384BD54FEB68A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarshalledArray_UnmarshalBlittable_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m0AE921532C431C3402CDC31F56D0099570FF3C04_gshared_inline (MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1* __this, Il2CppFullySharedGenericStruct* ___0_collectionAccessor, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArrayByRefMarshallingAccessor_2_GetArray_m45C81DDDD92285E385274FB34A74E290D68A6D0A_gshared_inline (ArrayByRefMarshallingAccessor_2_t3250EFF3C48E9AA12D5428D7EAB384BD54FEB68A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ListMarshallingAccessor_2__ctor_mB2BA6FA40433FFD9FB5177EB70C0E371FA054806_gshared_inline (ListMarshallingAccessor_2_t4774A83BC60753470972766012AC4A6CA9EE7816* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionMarshallingAccessorsAsserts_AssertElementTypePunning_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mCA3B6133320D22565B668F4872ECF81B0BB9C435_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared (RuntimeObject* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m0EA73CEAF52AB31E2713E59AB88541332594D914_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericAny_m86C3B8CC91B7D7314F277C8EE09559E89700607E_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_inline (Type_t* ___0_type, const RuntimeMethod* method) ;
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline)(method);
}
inline bool PropertyBag_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_m60E7BF3AACB59F7E085E19E4B6DC8C612F6D5534 (Il2CppFullySharedGenericAny* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, RuntimeObject**, const RuntimeMethod*))PropertyBag_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_m60E7BF3AACB59F7E085E19E4B6DC8C612F6D5534_gshared)(___0_value, ___1_propertyBag, method);
}
inline bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_m1B11483698339D3A0D40CD7247EE834DA473E24A (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_m1B11483698339D3A0D40CD7247EE834DA473E24A_gshared)(___0_visitor, ___1_container, ___2_parameters, method);
}
inline Type_t* Property_2_DeclaredValueType_m717E818AD74F7A7F438B2FAD3245F1EA356FF56F (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))Property_2_DeclaredValueType_m717E818AD74F7A7F438B2FAD3245F1EA356FF56F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoCompletePathVisitor_VisitPropertyType_m93CA1A7ADF8BB5E1A1FD73FF0D2F153C21834583 (AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AutoCompletePathVisitor_HasReachedEnd_mEACD20D3E93C66F53CDD2970D12E1C538956BB8E (AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15* __this, Type_t* ___0_containerType, const RuntimeMethod* method) ;
inline void InspectedTypeScope_1__ctor_m81574608CF3C47E48CC6FF4C8EA96C099422648C (InspectedTypeScope_1_t02FE7CB83945A2462C3B101968ABFD80AF129E73* __this, VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___0_context, const RuntimeMethod* method)
{
	((  void (*) (InspectedTypeScope_1_t02FE7CB83945A2462C3B101968ABFD80AF129E73*, VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA*, const RuntimeMethod*))InspectedTypeScope_1__ctor_m81574608CF3C47E48CC6FF4C8EA96C099422648C_gshared)(__this, ___0_context, method);
}
inline void InspectedTypeScope_1_Dispose_m59F33FE5783A60AF674C2CA0167736D2A851FE78 (InspectedTypeScope_1_t02FE7CB83945A2462C3B101968ABFD80AF129E73* __this, const RuntimeMethod* method)
{
	((  void (*) (InspectedTypeScope_1_t02FE7CB83945A2462C3B101968ABFD80AF129E73*, const RuntimeMethod*))InspectedTypeScope_1_Dispose_m59F33FE5783A60AF674C2CA0167736D2A851FE78_gshared)(__this, method);
}
inline RuntimeObject* PropertyBag_GetPropertyBag_TisIl2CppFullySharedGenericAny_m640BEA3D9C9EB8D8E5120B304862BCC23F0D6C1B (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBag_GetPropertyBag_TisIl2CppFullySharedGenericAny_m640BEA3D9C9EB8D8E5120B304862BCC23F0D6C1B_gshared)(method);
}
inline void PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261 (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* __this, Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*, Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261_gshared)((PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_inline (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisitedPropertyScope__ctor_m5BA295E7B5ECD4EAD4B51A54A9933667BDD6549A (VisitedPropertyScope_tE05035FCF84C4F135E88B893FC40CF5F3B43CFFE* __this, VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___0_context, RuntimeObject* ___1_property, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisitedPropertyScope_Dispose_m49D22C9237E70EBD320BC1B5122940EE68276760 (VisitedPropertyScope_tE05035FCF84C4F135E88B893FC40CF5F3B43CFFE* __this, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseVerticalCollectionView_get_virtualizationMethod_mB374D38B21D6CE19A96F6B547C5FB3F4A98F35A7_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
inline void FixedHeightVirtualizationController_1__ctor_m02185FC407F96D7677A1DBBFEE52D370A56FC8E9 (FixedHeightVirtualizationController_1_t02CCCBFAC87126C717076BE9B913FDBDB623F168* __this, BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___0_collectionView, const RuntimeMethod* method)
{
	((  void (*) (FixedHeightVirtualizationController_1_t02CCCBFAC87126C717076BE9B913FDBDB623F168*, BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*, const RuntimeMethod*))FixedHeightVirtualizationController_1__ctor_m02185FC407F96D7677A1DBBFEE52D370A56FC8E9_gshared)(__this, ___0_collectionView, method);
}
inline void DynamicHeightVirtualizationController_1__ctor_mDA2E7AE573A3F57800D60BE9280031DA968C06B1 (DynamicHeightVirtualizationController_1_t4265F83636B572C276F38D3677CDD716F02FD211* __this, BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___0_collectionView, const RuntimeMethod* method)
{
	((  void (*) (DynamicHeightVirtualizationController_1_t4265F83636B572C276F38D3677CDD716F02FD211*, BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*, const RuntimeMethod*))DynamicHeightVirtualizationController_1__ctor_mDA2E7AE573A3F57800D60BE9280031DA968C06B1_gshared)(__this, ___0_collectionView, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIPathVisitor_set_binding_m72939ACF73E3671B6DACF6107AAC6AC069D8B2FC_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIPathVisitor_set_direction_m617B40AD904ACA9CA4F6644CA5361A579A8DE6C5_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_Path_m8E3F004534B73D33C70C3BD20729F5987F11627B_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIPathVisitor_set_bindingContext_mD358FF971532C5C9015F395A3918DDD7050D2378_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 ___0_value, const RuntimeMethod* method) ;
inline bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6 (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PathVisitor_get_ReturnCode_m900403F09B0392B4D8C2E2E0EBD06148FCFA2734_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB UIPathVisitor_get_result_m1BE68B1EF9A54DEE0C58EB323670224B57A405A7_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) ;
inline void ValueTuple_4__ctor_mD27E7512AA0D94DC4197898D284DBA11B7DFAB48 (ValueTuple_4_t3F8C71A2E0F0EE198DA1968B4EA9B8BDA3DD9F6F* __this, bool ___0_item1, int32_t ___1_item2, int32_t ___2_item3, BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___3_item4, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))ValueTuple_4__ctor_mFF0D3A69E30DE69A5DB3A2559A8901F1E9851FCB_gshared)((ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*)__this, (Il2CppFullySharedGenericAny)&___0_item1, (Il2CppFullySharedGenericAny)&___1_item2, (Il2CppFullySharedGenericAny)&___2_item3, (Il2CppFullySharedGenericAny)&___3_item4, method);
}
inline int32_t Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BindingsAllocator_Malloc_m8AFEBBAC8AFDEB713BE39CB6C945A29BF1B95C25 (int32_t ___0_size, const RuntimeMethod* method) ;
inline void Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline void Span_1_CopyTo_mC87816F92C911740C3511C4A9DF085020A7D0F28 (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))Span_1_CopyTo_m87850B36DC83BF310EC6136E6D14DC5634F96F05_gshared)(__this, ___0_destination, method);
}
inline void ArrayByRefMarshallingAccessor_2__ctor_mC551EB7FEB5BE76675A5A332E3DF261173F668BA_inline (ArrayByRefMarshallingAccessor_2_t1C5A53EDFEB30C62E19DFC65819CADB6D5E31894* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ArrayByRefMarshallingAccessor_2_t1C5A53EDFEB30C62E19DFC65819CADB6D5E31894*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, const RuntimeMethod*))ArrayByRefMarshallingAccessor_2__ctor_m82E30054144C4DFDBB7366FE5C9CD799530C8CD7_gshared_inline)(__this, ___0_array, method);
}
inline void MarshalledArray_UnmarshalBlittable_TisIl2CppFullySharedGenericStruct_TisArrayByRefMarshallingAccessor_2_t1C5A53EDFEB30C62E19DFC65819CADB6D5E31894_m7B33E5ECB3BCFE5D5A18EE3DF29D5B3D69AB7CFC_inline (MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1* __this, ArrayByRefMarshallingAccessor_2_t1C5A53EDFEB30C62E19DFC65819CADB6D5E31894* ___0_collectionAccessor, const RuntimeMethod* method)
{
	((  void (*) (MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1*, ArrayByRefMarshallingAccessor_2_t1C5A53EDFEB30C62E19DFC65819CADB6D5E31894*, const RuntimeMethod*))MarshalledArray_UnmarshalBlittable_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m0AE921532C431C3402CDC31F56D0099570FF3C04_gshared_inline)(__this, ___0_collectionAccessor, method);
}
inline __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ArrayByRefMarshallingAccessor_2_GetArray_mDDC1FB61DC6AF112BFC6301CFCD66677472A5E0B_inline (ArrayByRefMarshallingAccessor_2_t1C5A53EDFEB30C62E19DFC65819CADB6D5E31894* __this, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (ArrayByRefMarshallingAccessor_2_t1C5A53EDFEB30C62E19DFC65819CADB6D5E31894*, const RuntimeMethod*))ArrayByRefMarshallingAccessor_2_GetArray_m45C81DDDD92285E385274FB34A74E290D68A6D0A_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarshalledArray_Free_mBE46430B7DABEA80D8D7349FCD2434389C29C9CA_inline (MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1* __this, const RuntimeMethod* method) ;
inline void ListMarshallingAccessor_2__ctor_mE02BF743DA6B3D6BFF7AA1F6E7DAD59431707B65_inline (ListMarshallingAccessor_2_t782671FA36B08F58817019DBA40F148D30D1C80F* __this, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ListMarshallingAccessor_2_t782671FA36B08F58817019DBA40F148D30D1C80F*, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))ListMarshallingAccessor_2__ctor_mB2BA6FA40433FFD9FB5177EB70C0E371FA054806_gshared_inline)(__this, ___0_list, method);
}
inline void MarshalledArray_UnmarshalBlittable_TisIl2CppFullySharedGenericStruct_TisListMarshallingAccessor_2_t782671FA36B08F58817019DBA40F148D30D1C80F_m7F7E2BF9EABE1902D0EA977370F48C8BCDD7AAF0_inline (MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1* __this, ListMarshallingAccessor_2_t782671FA36B08F58817019DBA40F148D30D1C80F* ___0_collectionAccessor, const RuntimeMethod* method)
{
	((  void (*) (MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1*, ListMarshallingAccessor_2_t782671FA36B08F58817019DBA40F148D30D1C80F*, const RuntimeMethod*))MarshalledArray_UnmarshalBlittable_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m0AE921532C431C3402CDC31F56D0099570FF3C04_gshared_inline)(__this, ___0_collectionAccessor, method);
}
inline int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BuddyAllocator_AlignForward_m91CB70C4C1EF7525861F09D940734D5F28CE948E (int32_t ___0_offset, int32_t ___1_alignment, const RuntimeMethod* method) ;
inline void ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, int32_t ___0_item1, int32_t ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_gshared)((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)__this, (Il2CppFullySharedGenericAny)&___0_item1, (Il2CppFullySharedGenericAny)&___1_item2, method);
}
inline int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BuddyAllocator_PtrAdd_m71AE1A734C306F6E5BE090A52FF71F5FD43D9651 (void* ___0_ptr, int32_t ___1_bytes, const RuntimeMethod* method) ;
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2 (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*, int32_t, int32_t, const RuntimeMethod*))BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2_gshared)(__this, ___0_offset, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsAllocator_Free_mE33931DED45B75A6FB87B7276A67F4D978926890 (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656 (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void MarshalledArray_ThrowUnimplementedDataOwnerCase_m9150E1B9B3FC842F81F701FE83077753341A5EC9 (int32_t ___0_dataOwner, const RuntimeMethod* method) ;
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
inline void CollectionMarshallingAccessorsAsserts_AssertElementTypePunning_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mCA3B6133320D22565B668F4872ECF81B0BB9C435 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))CollectionMarshallingAccessorsAsserts_AssertElementTypePunning_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mCA3B6133320D22565B668F4872ECF81B0BB9C435_gshared)(method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* UnsafeUtility_As_Tis__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC_m07554F11A56C4741F72B2A445681BE0D3D68B67B (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared)(___0_from, method);
}
inline void ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline void ReadOnlySpan_1_CopyTo_m50A3A496B3D51522906BB81E1F4FF1899D5C8AA6 (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m0EA73CEAF52AB31E2713E59AB88541332594D914_gshared)(__this, ___0_destination, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1_inline (void* ___0_ptr, const RuntimeMethod* method) ;
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericAny_m86C3B8CC91B7D7314F277C8EE09559E89700607E_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericAny_m86C3B8CC91B7D7314F277C8EE09559E89700607E_gshared_inline)(___0_list, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_inline (const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline)(method);
}
inline ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* UnsafeUtility_As_TisListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C_m6BEC4E15003DEBC3B54982D8B583886DBEA18582 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared)(___0_from, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoCompletePathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0190457B53C68B5A2FD0BF9212788DD637EB87AA_gshared (AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t1135249BCED3CD25FACFB19752FAD7112A0A6CCD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t1135249BCED3CD25FACFB19752FAD7112A0A6CCD);
	const Il2CppFullySharedGenericAny L_10 = L_5;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_t1135249BCED3CD25FACFB19752FAD7112A0A6CCD);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t1135249BCED3CD25FACFB19752FAD7112A0A6CCD);
	memset(V_0, 0, SizeOf_TValue_t1135249BCED3CD25FACFB19752FAD7112A0A6CCD);
	RuntimeObject* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_t1135249BCED3CD25FACFB19752FAD7112A0A6CCD);
	memset(V_2, 0, SizeOf_TValue_t1135249BCED3CD25FACFB19752FAD7112A0A6CCD);
	RuntimeObject* V_3 = NULL;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_4;
	memset((&V_4), 0, sizeof(V_4));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_property), (&___1_container));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0, (&V_1), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151130));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151131));
	int32_t G_B5_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151132));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151133));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151133));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151134));
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151134));
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151135));
		return;
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151136));
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_3 = ___0_property;
		Il2CppFullySharedGenericAny* L_4 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151137));
		NullCheck(L_3);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(21, L_3, L_4, (Il2CppFullySharedGenericAny*)L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151137));
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_TValue_t1135249BCED3CD25FACFB19752FAD7112A0A6CCD);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151138));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151139));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151139));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151140));
		bool L_8;
		L_8 = TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_inline(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151140));
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151141));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_9;
		L_9 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151141));
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_TValue_t1135249BCED3CD25FACFB19752FAD7112A0A6CCD);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_TValue_t1135249BCED3CD25FACFB19752FAD7112A0A6CCD);
		il2cpp_codegen_memcpy(L_11, V_2, SizeOf_TValue_t1135249BCED3CD25FACFB19752FAD7112A0A6CCD);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151142));
		NullCheck(L_9);
		bool L_12;
		L_12 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_10: *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_11: *(void**)L_11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151142));
		G_B5_0 = ((int32_t)(L_12));
		goto IL_0042;
	}

IL_0041:
	{
		G_B5_0 = 0;
	}

IL_0042:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151143));
		if (G_B5_0)
		{
			goto IL_0079;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151144));
		bool L_13;
		L_13 = PropertyBag_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_m60E7BF3AACB59F7E085E19E4B6DC8C612F6D5534((Il2CppFullySharedGenericAny*)V_0, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151144));
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151145));
		RuntimeObject* L_14 = V_1;
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_14, il2cpp_rgctx_data(method->rgctx_data, 11)));
		RuntimeObject* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151146));
		RuntimeObject* L_16 = V_3;
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_17 = ___0_property;
		Il2CppFullySharedGenericAny* L_18 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151147));
		NullCheck(L_16);
		GenericInterfaceActionInvoker4< RuntimeObject*, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 12), L_16, (RuntimeObject*)__this, L_17, L_18, (Il2CppFullySharedGenericAny*)V_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151147));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151148));
		return;
	}

IL_0065:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151149));
		il2cpp_codegen_initobj((&V_4), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_19 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151150));
		bool L_20;
		L_20 = PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_m1B11483698339D3A0D40CD7247EE834DA473E24A((RuntimeObject*)__this, (Il2CppFullySharedGenericAny*)V_0, L_19, il2cpp_rgctx_method(method->rgctx_data, 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151150));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151151));
		return;
	}

IL_0079:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151152));
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_21 = ___0_property;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151153));
		NullCheck(L_21);
		Type_t* L_22;
		L_22 = Property_2_DeclaredValueType_m717E818AD74F7A7F438B2FAD3245F1EA356FF56F(L_21, il2cpp_rgctx_method(method->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151153));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151154));
		AutoCompletePathVisitor_VisitPropertyType_m93CA1A7ADF8BB5E1A1FD73FF0D2F153C21834583(__this, L_22, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151154));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151155));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoCompletePathVisitor_Unity_Properties_ITypeVisitor_Visit_TisIl2CppFullySharedGenericAny_m4BF465988F32F89FC9D7B5F920DEC4C97C955132_gshared (AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitedPropertyScope_tE05035FCF84C4F135E88B893FC40CF5F3B43CFFE_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_Enumerator_t5310E6123FEF6F45D0CB0E92F3AE34C674A38287 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
	const uint32_t SizeOf_PropertyCollection_1_tD7D716F8631DB1BFE18704C0AD2FD7CD8D607F23 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)));
	const Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE L_8 = alloca(SizeOf_Enumerator_t5310E6123FEF6F45D0CB0E92F3AE34C674A38287);
	const PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D L_7 = alloca(SizeOf_PropertyCollection_1_tD7D716F8631DB1BFE18704C0AD2FD7CD8D607F23);
	InspectedTypeScope_1_t02FE7CB83945A2462C3B101968ABFD80AF129E73 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE V_2 = alloca(SizeOf_Enumerator_t5310E6123FEF6F45D0CB0E92F3AE34C674A38287);
	memset(V_2, 0, SizeOf_Enumerator_t5310E6123FEF6F45D0CB0E92F3AE34C674A38287);
	PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D V_3 = alloca(SizeOf_PropertyCollection_1_tD7D716F8631DB1BFE18704C0AD2FD7CD8D607F23);
	memset(V_3, 0, SizeOf_PropertyCollection_1_tD7D716F8631DB1BFE18704C0AD2FD7CD8D607F23);
	RuntimeObject* V_4 = NULL;
	VisitedPropertyScope_tE05035FCF84C4F135E88B893FC40CF5F3B43CFFE V_5;
	memset((&V_5), 0, sizeof(V_5));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_4), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151056));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151057));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151058));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151059));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151059));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151060));
		bool L_2;
		L_2 = AutoCompletePathVisitor_HasReachedEnd_mEACD20D3E93C66F53CDD2970D12E1C538956BB8E(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151060));
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151061));
		return;
	}

IL_0013:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151062));
		VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* L_3 = __this->___m_VisitContext;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151063));
		InspectedTypeScope_1__ctor_m81574608CF3C47E48CC6FF4C8EA96C099422648C((&V_0), L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151063));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151085));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151086));
				InspectedTypeScope_1_Dispose_m59F33FE5783A60AF674C2CA0167736D2A851FE78((&V_0), il2cpp_rgctx_method(method->rgctx_data, 17));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151086));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151064));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151065));
				RuntimeObject* L_4;
				L_4 = PropertyBag_GetPropertyBag_TisIl2CppFullySharedGenericAny_m640BEA3D9C9EB8D8E5120B304862BCC23F0D6C1B(il2cpp_rgctx_method(method->rgctx_data, 4));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151065));
				V_1 = L_4;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151066));
				RuntimeObject* L_5 = V_1;
				if (L_5)
				{
					goto IL_002b_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151067));
				goto IL_0098;
			}

IL_002b_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151068));
				RuntimeObject* L_6 = V_1;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151069));
				NullCheck(L_6);
				InterfaceActionInvoker1Invoker< PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), L_6, (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)L_7);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151069));
				il2cpp_codegen_memcpy(V_3, L_7, SizeOf_PropertyCollection_1_tD7D716F8631DB1BFE18704C0AD2FD7CD8D607F23);
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151070));
				il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 9));
				PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261((PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)V_3, (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)L_8, il2cpp_rgctx_method(method->rgctx_data, 8));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151070));
				il2cpp_codegen_memcpy(V_2, L_8, SizeOf_Enumerator_t5310E6123FEF6F45D0CB0E92F3AE34C674A38287);
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_007c_1:
					{
						STORE_TRY_ID(methodExecutionContext, 0);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151083));
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151084));
						Il2CppConstrainedCallData L_10;
						Il2CppMethodPointer L_11 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 10), il2cpp_rgctx_method(method->rgctx_data, 15), (void*)(Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_2, &L_10, L_9);
						typedef void ( *func_L_12)(void*,const RuntimeMethod*);
						((func_L_12)L_11)(L_10.thisPtr,L_10.method);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151084));
						return;
					}
				});
				try
				{
					STORE_TRY_ID(methodExecutionContext, 1);
					{
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151071));
						goto IL_0071_2;
					}

IL_003c_2:
					{
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151072));
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151073));
						RuntimeObject* L_13;
						L_13 = Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_inline((Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_2, il2cpp_rgctx_method(method->rgctx_data, 11));
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151073));
						V_4 = L_13;
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151074));
						VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* L_14 = __this->___m_VisitContext;
						RuntimeObject* L_15 = V_4;
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151075));
						VisitedPropertyScope__ctor_m5BA295E7B5ECD4EAD4B51A54A9933667BDD6549A((&V_5), L_14, (RuntimeObject*)L_15, NULL);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151075));
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0063_2:
							{
								STORE_TRY_ID(methodExecutionContext, 1);
								CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151079));
								STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151080));
								VisitedPropertyScope_Dispose_m49D22C9237E70EBD320BC1B5122940EE68276760((&V_5), NULL);
								CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151080));
								return;
							}
						});
						try
						{
							STORE_TRY_ID(methodExecutionContext, 2);
							CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151076));
							RuntimeObject* L_16 = V_4;
							STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151077));
							NullCheck((RuntimeObject*)L_16);
							Type_t* L_17;
							L_17 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
							CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151077));
							STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151078));
							AutoCompletePathVisitor_VisitPropertyType_m93CA1A7ADF8BB5E1A1FD73FF0D2F153C21834583(__this, L_17, NULL);
							CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151078));
							goto IL_0071_2;
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

IL_0071_2:
					{
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151081));
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151082));
						bool L_18;
						L_18 = Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F((Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_2, il2cpp_rgctx_method(method->rgctx_data, 14));
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151082));
						if (L_18)
						{
							goto IL_003c_2;
						}
					}
					{
						goto IL_0098;
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

IL_0098:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 151087));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInvokableCall_ThrowOnInvalidArg_TisIl2CppFullySharedGenericAny_m026889759F9CEE39A9DBEE06EBE557156991C15F_gshared (RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_arg));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38341));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38342));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38343));
		RuntimeObject* L_0 = ___0_arg;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_arg;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_002b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38344));
		RuntimeObject* L_2 = ___0_arg;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38345));
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type(L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38345));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38346));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38346));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38347));
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC61356ECF43F815CADD86943C995264057299D08)), (RuntimeObject*)L_3, (RuntimeObject*)L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38347));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38348));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38348));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_002b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38349));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTreeView_AddItem_TisIl2CppFullySharedGenericAny_m7CCAD32E8A3F45FEF58B560E3E7EC828394C8A39_gshared (BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7* __this, TreeViewItemData_1_t3E2C741B77BE0CA5BE82E36F13DE84F4E7AE117C ___0_item, int32_t ___1_parentId, int32_t ___2_childIndex, bool ___3_rebuildTree, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TreeViewItemData_1_t2F2E39699663F266EE62FBCDDC6A4EBBD2C833F5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const TreeViewItemData_1_t3E2C741B77BE0CA5BE82E36F13DE84F4E7AE117C L_0 = alloca(SizeOf_TreeViewItemData_1_t2F2E39699663F266EE62FBCDDC6A4EBBD2C833F5);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_item : &___0_item), (&___1_parentId), (&___2_childIndex), (&___3_rebuildTree));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14113));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14114));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14115));
		il2cpp_codegen_memcpy(L_0, ___0_item, SizeOf_TreeViewItemData_1_t2F2E39699663F266EE62FBCDDC6A4EBBD2C833F5);
		int32_t L_1 = ___1_parentId;
		int32_t L_2 = ___2_childIndex;
		bool L_3 = ___3_rebuildTree;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14116));
		GenericVirtualActionInvoker4Invoker< TreeViewItemData_1_t3E2C741B77BE0CA5BE82E36F13DE84F4E7AE117C, int32_t, int32_t, bool >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_1, L_2, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14116));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14117));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTreeView_GetItemDataForId_TisIl2CppFullySharedGenericAny_mE36AF5BC5E1A537BE4D91CB9452BE9129022AD27_gshared (BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7* __this, int32_t ___0_id, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t3576D4C4F8154D3B898A11BCB719BD6FBEAE7ACC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t3576D4C4F8154D3B898A11BCB719BD6FBEAE7ACC);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_id));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14109));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14110));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14111));
		int32_t L_0 = ___0_id;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14112));
		GenericVirtualActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14112));
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t3576D4C4F8154D3B898A11BCB719BD6FBEAE7ACC);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTreeView_GetItemDataForIndex_TisIl2CppFullySharedGenericAny_mBA0929A005F6129C0EA0FE7331850F476D61BB34_gshared (BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t33205C0A717DCF003297DB053FABC1D8B1157302 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t33205C0A717DCF003297DB053FABC1D8B1157302);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14105));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14106));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14107));
		int32_t L_0 = ___0_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14108));
		GenericVirtualActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14108));
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t33205C0A717DCF003297DB053FABC1D8B1157302);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseTreeView_GetSelectedItems_TisIl2CppFullySharedGenericAny_m2C5AB41198B883DA1B675C45201C548821C32D56_gshared (BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14101));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14102));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14103));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14104));
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14104));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTreeView_SetRootItems_TisIl2CppFullySharedGenericAny_mE99F7CFF27A606E8034CF5581950A512DC6B4FEA_gshared (BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7* __this, RuntimeObject* ___0_rootItems, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_rootItems));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 13980));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 13981));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 13982));
		RuntimeObject* L_0 = ___0_rootItems;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 13983));
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 13983));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 13984));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVerticalCollectionView_CreateVirtualizationController_TisIl2CppSharedGenericObject_m5353D1D683816AFF71705A333CE9EEBF2D75CE16_gshared (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionVirtualizationMethod_tF4A3B1303302D2B17F74CDB7D8A5287C8B056C88_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14765));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14766));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14767));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14768));
		int32_t L_0;
		L_0 = BaseVerticalCollectionView_get_virtualizationMethod_mB374D38B21D6CE19A96F6B547C5FB3F4A98F35A7_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14768));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14769));
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001d;
		}
	}
	{
		goto IL_002a;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14770));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14771));
		FixedHeightVirtualizationController_1_t02CCCBFAC87126C717076BE9B913FDBDB623F168* L_3 = (FixedHeightVirtualizationController_1_t02CCCBFAC87126C717076BE9B913FDBDB623F168*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
		FixedHeightVirtualizationController_1__ctor_m02185FC407F96D7677A1DBBFEE52D370A56FC8E9(L_3, __this, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14771));
		__this->___m_VirtualizationController = (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VirtualizationController), (void*)(CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14772));
		return;
	}

IL_001d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14773));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14774));
		DynamicHeightVirtualizationController_1_t4265F83636B572C276F38D3677CDD716F02FD211* L_4 = (DynamicHeightVirtualizationController_1_t4265F83636B572C276F38D3677CDD716F02FD211*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		DynamicHeightVirtualizationController_1__ctor_mDA2E7AE573A3F57800D60BE9280031DA968C06B1(L_4, __this, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14774));
		__this->___m_VirtualizationController = (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VirtualizationController), (void*)(CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14775));
		return;
	}

IL_002a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14776));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14777));
		int32_t L_5;
		L_5 = BaseVerticalCollectionView_get_virtualizationMethod_mB374D38B21D6CE19A96F6B547C5FB3F4A98F35A7_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14777));
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CollectionVirtualizationMethod_tF4A3B1303302D2B17F74CDB7D8A5287C8B056C88_il2cpp_TypeInfo_var)), &L_6);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14778));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA65DB61A85A66A6CD92054C1547154199765565C)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC79A2F3567AC1BF116F04E9CECFDFA90B0B134C)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14778));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_4_t3F8C71A2E0F0EE198DA1968B4EA9B8BDA3DD9F6F BindingUpdater_VisitAtPath_TisIl2CppFullySharedGenericAny_m1E18B4FBEEEBDD5545FA7829DA2607BF5961D4CC_gshared (DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* ___0_dataBinding, int32_t ___1_direction, Il2CppFullySharedGenericAny* ___2_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___3_path, BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2* ___4_context, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_4__ctor_mD27E7512AA0D94DC4197898D284DBA11B7DFAB48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dataBinding), (&___1_direction), (&___2_container), (&___3_path), (&___4_context));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1487));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1488));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1489));
		il2cpp_codegen_runtime_class_init_inline(BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_il2cpp_TypeInfo_var);
		UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* L_0 = ((BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_StaticFields*)il2cpp_codegen_static_fields_for(BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_il2cpp_TypeInfo_var))->___s_VisitDataSourceAtPathVisitor;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1490));
		NullCheck((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_0);
		VirtualActionInvoker0::Invoke(6, (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1490));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1491));
		UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* L_1 = ((BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_StaticFields*)il2cpp_codegen_static_fields_for(BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_il2cpp_TypeInfo_var))->___s_VisitDataSourceAtPathVisitor;
		DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* L_2 = ___0_dataBinding;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1492));
		NullCheck(L_1);
		UIPathVisitor_set_binding_m72939ACF73E3671B6DACF6107AAC6AC069D8B2FC_inline(L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1492));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1493));
		UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* L_3 = ((BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_StaticFields*)il2cpp_codegen_static_fields_for(BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_il2cpp_TypeInfo_var))->___s_VisitDataSourceAtPathVisitor;
		int32_t L_4 = ___1_direction;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1494));
		NullCheck(L_3);
		UIPathVisitor_set_direction_m617B40AD904ACA9CA4F6644CA5361A579A8DE6C5_inline(L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1494));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1495));
		UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* L_5 = ((BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_StaticFields*)il2cpp_codegen_static_fields_for(BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_il2cpp_TypeInfo_var))->___s_VisitDataSourceAtPathVisitor;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* L_6 = ___3_path;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_7 = (*(PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79*)L_6);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1496));
		NullCheck((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_5);
		PathVisitor_set_Path_m8E3F004534B73D33C70C3BD20729F5987F11627B_inline((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_5, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1496));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1497));
		UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* L_8 = ((BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_StaticFields*)il2cpp_codegen_static_fields_for(BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_il2cpp_TypeInfo_var))->___s_VisitDataSourceAtPathVisitor;
		BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2* L_9 = ___4_context;
		BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 L_10 = (*(BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2*)L_9);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1498));
		NullCheck(L_8);
		UIPathVisitor_set_bindingContext_mD358FF971532C5C9015F395A3918DDD7050D2378_inline(L_8, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1498));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1499));
		UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* L_11 = ((BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_StaticFields*)il2cpp_codegen_static_fields_for(BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_il2cpp_TypeInfo_var))->___s_VisitDataSourceAtPathVisitor;
		Il2CppFullySharedGenericAny* L_12 = ___2_container;
		il2cpp_codegen_initobj((&V_1), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_13 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1500));
		bool L_14;
		L_14 = PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6((RuntimeObject*)L_11, L_12, (&V_0), L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1500));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1501));
		int32_t L_15 = V_0;
		UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* L_16 = ((BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_StaticFields*)il2cpp_codegen_static_fields_for(BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_il2cpp_TypeInfo_var))->___s_VisitDataSourceAtPathVisitor;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1502));
		NullCheck((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_16);
		int32_t L_17;
		L_17 = PathVisitor_get_ReturnCode_m900403F09B0392B4D8C2E2E0EBD06148FCFA2734_inline((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1502));
		UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* L_18 = ((BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_StaticFields*)il2cpp_codegen_static_fields_for(BindingUpdater_t2FDF8C31DF08A4283D7F6480BD84C181FE9041BA_il2cpp_TypeInfo_var))->___s_VisitDataSourceAtPathVisitor;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1503));
		NullCheck(L_18);
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_19;
		L_19 = UIPathVisitor_get_result_m1BE68B1EF9A54DEE0C58EB323670224B57A405A7_inline(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1503));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1504));
		ValueTuple_4_t3F8C71A2E0F0EE198DA1968B4EA9B8BDA3DD9F6F L_20;
		memset((&L_20), 0, sizeof(L_20));
		ValueTuple_4__ctor_mD27E7512AA0D94DC4197898D284DBA11B7DFAB48((&L_20), L_14, L_15, L_17, L_19, ValueTuple_4__ctor_mD27E7512AA0D94DC4197898D284DBA11B7DFAB48_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1504));
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* BindingsAllocator_AllocateAndCopyToBuffer_TisIl2CppFullySharedGenericStruct_m4F0B1D353AB760A62C8733C5D8C5A0C69093C7C1_gshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, int32_t ___1_allocLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tF8012E8E413CE4EBEA4D0B6BE3EE316D5C6BD785 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_span), (&___1_allocLength));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40172));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40173));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40174));
		int32_t L_0 = ___1_allocLength;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40175));
		int32_t L_1;
		L_1 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40175));
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_002c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40176));
		int32_t L_2 = ___1_allocLength;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40177));
		int32_t L_5;
		L_5 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40177));
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40178));
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1CEF7A5E7543C267F2B8C35F9EC881F8DF3A2179)), L_4, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40178));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40179));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40179));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_002c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40180));
		uint32_t L_10 = SizeOf_T_tF8012E8E413CE4EBEA4D0B6BE3EE316D5C6BD785;
		int32_t L_11 = ___1_allocLength;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40181));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40182));
		void* L_12;
		L_12 = BindingsAllocator_Malloc_m8AFEBBAC8AFDEB713BE39CB6C945A29BF1B95C25(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, L_11)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40182));
		V_0 = (Il2CppFullySharedGenericStruct*)L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40183));
		Il2CppFullySharedGenericStruct* L_13 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40184));
		int32_t L_14;
		L_14 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40184));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40185));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_15;
		memset((&L_15), 0, sizeof(L_15));
		Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline((&L_15), (void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40185));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40186));
		Span_1_CopyTo_mC87816F92C911740C3511C4A9DF085020A7D0F28((&___0_span), L_15, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40186));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40187));
		Il2CppFullySharedGenericStruct* L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisIl2CppFullySharedGenericStruct_m35850DF980659B66DA8B433E7D0C8DAA91E9D8FF_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1** ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ArrayByRefMarshallingAccessor_2_t1C5A53EDFEB30C62E19DFC65819CADB6D5E31894 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40196));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40197));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40198));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1** L_0 = ___0_array;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_1 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*>(L_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40199));
		ArrayByRefMarshallingAccessor_2__ctor_mC551EB7FEB5BE76675A5A332E3DF261173F668BA_inline((&V_0), L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40199));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40200));
		MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1* L_2 = (MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1*)(&__this->___arrayWrapper);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40201));
		MarshalledArray_UnmarshalBlittable_TisIl2CppFullySharedGenericStruct_TisArrayByRefMarshallingAccessor_2_t1C5A53EDFEB30C62E19DFC65819CADB6D5E31894_m7B33E5ECB3BCFE5D5A18EE3DF29D5B3D69AB7CFC_inline(L_2, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40201));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40202));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1** L_3 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40203));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4;
		L_4 = ArrayByRefMarshallingAccessor_2_GetArray_mDDC1FB61DC6AF112BFC6301CFCD66677472A5E0B_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40203));
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_3, (RuntimeObject*)L_4);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40204));
		MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1* L_5 = (MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1*)(&__this->___arrayWrapper);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40205));
		MarshalledArray_Free_mBE46430B7DABEA80D8D7349FCD2434389C29C9CA_inline(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40205));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40206));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableListWrapper_Unmarshal_TisIl2CppFullySharedGenericStruct_m257E6306DF72620621451F4359EE021A87DCBA7C_gshared (BlittableListWrapper_tE39AB35B42449CFD1FDCBB7DC4F0D1A1EA2312C4* __this, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_list, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlittableListWrapper_tE39AB35B42449CFD1FDCBB7DC4F0D1A1EA2312C4_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ListMarshallingAccessor_2_t782671FA36B08F58817019DBA40F148D30D1C80F V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40212));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40213));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40214));
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_0 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40215));
		ListMarshallingAccessor_2__ctor_mE02BF743DA6B3D6BFF7AA1F6E7DAD59431707B65_inline((&V_0), L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40215));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40216));
		MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1* L_1 = (MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1*)(&__this->___arrayWrapper);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40217));
		MarshalledArray_UnmarshalBlittable_TisIl2CppFullySharedGenericStruct_TisListMarshallingAccessor_2_t782671FA36B08F58817019DBA40F148D30D1C80F_m7F7E2BF9EABE1902D0EA977370F48C8BCDD7AAF0_inline(L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40217));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40218));
		MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1* L_2 = (MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1*)(&__this->___arrayWrapper);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40219));
		MarshalledArray_Free_mBE46430B7DABEA80D8D7349FCD2434389C29C9CA_inline(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40219));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40220));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D BuddyAllocator_AllocateRange_TisIl2CppFullySharedGenericStruct_m4185EDFE641B55BCD995908A4D2E69571C464694_gshared (int32_t ___0_length, int32_t* ___1_dataSize, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_0;
	memset((&V_0), 0, sizeof(V_0));
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_length), (&___1_dataSize));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 13000));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 13001));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 13002));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 13003));
		int32_t* L_0 = ___1_dataSize;
		int32_t* L_1 = ___1_dataSize;
		int32_t L_2 = il2cpp_codegen_ldind<int32_t, int32_t>(L_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 13004));
		int32_t L_3;
		L_3 = UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 13004));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 13005));
		int32_t L_4;
		L_4 = BuddyAllocator_AlignForward_m91CB70C4C1EF7525861F09D940734D5F28CE948E(L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 13005));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_0, (int32_t)L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 13006));
		int32_t* L_5 = ___1_dataSize;
		int32_t L_6 = il2cpp_codegen_ldind<int32_t, int32_t>(L_5);
		int32_t L_7 = ___0_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 13007));
		ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477((&V_0), L_6, L_7, ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 13007));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 13008));
		int32_t* L_8 = ___1_dataSize;
		int32_t* L_9 = ___1_dataSize;
		int32_t L_10 = il2cpp_codegen_ldind<int32_t, int32_t>(L_9);
		int32_t L_11 = ___0_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 13009));
		int32_t L_12;
		L_12 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 13009));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_8, (int32_t)((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply(L_11, L_12)))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 13010));
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_13 = V_0;
		V_1 = L_13;
		goto IL_0029;
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 13011));
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_offset), (&___1_length));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 12971));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 12972));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 12973));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 12974));
		void* L_0 = __this->___m_Data;
		int32_t L_1 = ___0_offset;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 12975));
		void* L_2;
		L_2 = BuddyAllocator_PtrAdd_m71AE1A734C306F6E5BE090A52FF71F5FD43D9651(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 12975));
		int32_t L_3 = ___1_length;
		int32_t L_4 = __this->___m_Allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 12976));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5;
		L_5 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52(L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 12976));
		V_0 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 12977));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6 = V_0;
		V_1 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 12978));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB>(__this);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2(_thisAdjusted, ___0_offset, ___1_length, method);
	return _returnValue;
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_inline (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_type));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4847));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4848));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4849));
		Type_t* L_0 = ___0_type;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4850));
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4850));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Type_t* L_2 = ___0_type;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4851));
		Type_t* L_3;
		L_3 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4851));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4852));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_4;
		L_4 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, (Type_t*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4852));
		return L_4;
	}

IL_0015:
	{
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseVerticalCollectionView_get_virtualizationMethod_mB374D38B21D6CE19A96F6B547C5FB3F4A98F35A7_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVerticalCollectionView_get_virtualizationMethod_mB374D38B21D6CE19A96F6B547C5FB3F4A98F35A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BaseVerticalCollectionView_get_virtualizationMethod_mB374D38B21D6CE19A96F6B547C5FB3F4A98F35A7_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14707));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14708));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 14709));
		int32_t L_0 = __this->___m_VirtualizationMethod;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIPathVisitor_set_binding_m72939ACF73E3671B6DACF6107AAC6AC069D8B2FC_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIPathVisitor_set_binding_m72939ACF73E3671B6DACF6107AAC6AC069D8B2FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UIPathVisitor_set_binding_m72939ACF73E3671B6DACF6107AAC6AC069D8B2FC_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1643));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1644));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1645));
		DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* L_0 = ___0_value;
		__this->___U3CbindingU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbindingU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIPathVisitor_set_direction_m617B40AD904ACA9CA4F6644CA5361A579A8DE6C5_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIPathVisitor_set_direction_m617B40AD904ACA9CA4F6644CA5361A579A8DE6C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UIPathVisitor_set_direction_m617B40AD904ACA9CA4F6644CA5361A579A8DE6C5_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1649));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1650));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1651));
		int32_t L_0 = ___0_value;
		__this->___U3CdirectionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_Path_m8E3F004534B73D33C70C3BD20729F5987F11627B_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathVisitor_set_Path_m8E3F004534B73D33C70C3BD20729F5987F11627B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PathVisitor_set_Path_m8E3F004534B73D33C70C3BD20729F5987F11627B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2561));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2562));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2563));
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0 = ___0_value;
		__this->___U3CPathU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CPathU3Ek__BackingField))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CPathU3Ek__BackingField))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CPathU3Ek__BackingField))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CPathU3Ek__BackingField))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CPathU3Ek__BackingField))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CPathU3Ek__BackingField))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CPathU3Ek__BackingField))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CPathU3Ek__BackingField))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CPathU3Ek__BackingField))->___m_AdditionalParts), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIPathVisitor_set_bindingContext_mD358FF971532C5C9015F395A3918DDD7050D2378_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIPathVisitor_set_bindingContext_mD358FF971532C5C9015F395A3918DDD7050D2378_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UIPathVisitor_set_bindingContext_mD358FF971532C5C9015F395A3918DDD7050D2378_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1655));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1656));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1657));
		BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 L_0 = ___0_value;
		__this->___U3CbindingContextU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_TargetElement), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_BindingId))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_BindingId))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_BindingId))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_BindingId))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_BindingId))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_BindingId))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_BindingId))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_BindingId))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_BindingId))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_BindingId))->___m_Path), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_DataSourcePath))->___m_Part0))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_DataSourcePath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_DataSourcePath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_DataSourcePath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_DataSourcePath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_DataSourcePath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_DataSourcePath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_DataSourcePath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_DataSourcePath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbindingContextU3Ek__BackingField))->___m_DataSource), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PathVisitor_get_ReturnCode_m900403F09B0392B4D8C2E2E0EBD06148FCFA2734_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathVisitor_get_ReturnCode_m900403F09B0392B4D8C2E2E0EBD06148FCFA2734_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PathVisitor_get_ReturnCode_m900403F09B0392B4D8C2E2E0EBD06148FCFA2734_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2586));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2587));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2588));
		int32_t L_0 = __this->___U3CReturnCodeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB UIPathVisitor_get_result_m1BE68B1EF9A54DEE0C58EB323670224B57A405A7_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIPathVisitor_get_result_m1BE68B1EF9A54DEE0C58EB323670224B57A405A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UIPathVisitor_get_result_m1BE68B1EF9A54DEE0C58EB323670224B57A405A7_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1658));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1659));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 1660));
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_0 = __this->___U3CresultU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarshalledArray_Free_mBE46430B7DABEA80D8D7349FCD2434389C29C9CA_inline (MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataOwner_tA0DC6C81C2140574EF77C582BCE44DF0A1D0EA34_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledArray_Free_mBE46430B7DABEA80D8D7349FCD2434389C29C9CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MarshalledArray_Free_mBE46430B7DABEA80D8D7349FCD2434389C29C9CA_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40119));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40120));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40121));
		int32_t L_0 = __this->___dataOwner;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40122));
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_004e;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_002b;
			}
			case 3:
			{
				goto IL_004e;
			}
			case 4:
			{
				goto IL_0037;
			}
			case 5:
			{
				goto IL_004e;
			}
			case 6:
			{
				goto IL_004e;
			}
		}
	}
	{
		goto IL_0043;
	}

IL_002b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40123));
		void* L_2 = __this->___data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40124));
		BindingsAllocator_Free_mE33931DED45B75A6FB87B7276A67F4D978926890(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40124));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40125));
		return;
	}

IL_0037:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40126));
		void* L_3 = __this->___data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40127));
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40127));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40128));
		return;
	}

IL_0043:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40129));
		int32_t L_4 = __this->___dataOwner;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40130));
		MarshalledArray_ThrowUnimplementedDataOwnerCase_m9150E1B9B3FC842F81F701FE83077753341A5EC9(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40130));
	}

IL_004e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40131));
		return;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 8)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrayByRefMarshallingAccessor_2__ctor_m82E30054144C4DFDBB7366FE5C9CD799530C8CD7_gshared_inline (ArrayByRefMarshallingAccessor_2_t3250EFF3C48E9AA12D5428D7EAB384BD54FEB68A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayByRefMarshallingAccessor_2_tA659376B38B29F70F2F6632621B72DAA357F7BC5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40355));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40356));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40357));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40358));
		CollectionMarshallingAccessorsAsserts_AssertElementTypePunning_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mCA3B6133320D22565B668F4872ECF81B0BB9C435(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40358));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40359));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40360));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = UnsafeUtility_As_Tis__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC_m07554F11A56C4741F72B2A445681BE0D3D68B67B((RuntimeObject*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40360));
		__this->___array = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___array), (void*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40361));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarshalledArray_UnmarshalBlittable_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m0AE921532C431C3402CDC31F56D0099570FF3C04_gshared_inline (MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1* __this, Il2CppFullySharedGenericStruct* ___0_collectionAccessor, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataOwner_tA0DC6C81C2140574EF77C582BCE44DF0A1D0EA34_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledArray_t6112059F305818BB635DC4F9A29D623D8EBF7DD1_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)));
	void* L_28 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)));
	void* L_34 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)));
	void* L_39 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)));
	int32_t V_0 = 0;
	ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_collectionAccessor));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40069));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40070));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40071));
		int32_t L_0 = __this->___dataOwner;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40072));
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_00c8;
			}
			case 2:
			{
				goto IL_00bd;
			}
			case 3:
			{
				goto IL_002e;
			}
			case 4:
			{
				goto IL_0066;
			}
			case 5:
			{
				goto IL_00a3;
			}
			case 6:
			{
				goto IL_00b0;
			}
		}
	}
	{
		goto IL_00bd;
	}

IL_002e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40073));
		Il2CppFullySharedGenericStruct* L_2 = ___0_collectionAccessor;
		int32_t L_3 = __this->___size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40074));
		Il2CppConstrainedCallData L_5;
		Il2CppMethodPointer L_6 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)L_2, &L_5, L_4);
		typedef void ( *func_L_7)(void*,int32_t,const RuntimeMethod*);
		((func_L_7)L_6)(L_5.thisPtr, L_3,L_5.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40074));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40075));
		void* L_8 = __this->___data;
		int32_t L_9 = __this->___size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40076));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40076));
		V_1 = L_10;
		Il2CppFullySharedGenericStruct* L_11 = ___0_collectionAccessor;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40077));
		Il2CppConstrainedCallData L_13;
		Il2CppMethodPointer L_14 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 6), (void*)L_11, &L_13, L_12);
		typedef Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ( *func_L_15)(void*,const RuntimeMethod*);
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_16 = ((func_L_15)L_14)(L_13.thisPtr,L_13.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40077));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40078));
		ReadOnlySpan_1_CopyTo_m50A3A496B3D51522906BB81E1F4FF1899D5C8AA6((&V_1), L_16, il2cpp_rgctx_method(method->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40078));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40079));
		return;
	}

IL_0066:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40080));
		Il2CppFullySharedGenericStruct* L_17 = ___0_collectionAccessor;
		int32_t L_18 = __this->___size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40081));
		Il2CppConstrainedCallData L_20;
		Il2CppMethodPointer L_21 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)L_17, &L_20, L_19);
		typedef void ( *func_L_22)(void*,int32_t,const RuntimeMethod*);
		((func_L_22)L_21)(L_20.thisPtr, L_18,L_20.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40081));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40082));
		void* L_23 = __this->___data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40083));
		void* L_24;
		L_24 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1_inline(L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40083));
		int32_t L_25 = __this->___size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40084));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_26;
		memset((&L_26), 0, sizeof(L_26));
		ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline((&L_26), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40084));
		V_1 = L_26;
		Il2CppFullySharedGenericStruct* L_27 = ___0_collectionAccessor;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40085));
		Il2CppConstrainedCallData L_29;
		Il2CppMethodPointer L_30 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 6), (void*)L_27, &L_29, L_28);
		typedef Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ( *func_L_31)(void*,const RuntimeMethod*);
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_32 = ((func_L_31)L_30)(L_29.thisPtr,L_29.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40085));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40086));
		ReadOnlySpan_1_CopyTo_m50A3A496B3D51522906BB81E1F4FF1899D5C8AA6((&V_1), L_32, il2cpp_rgctx_method(method->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40086));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40087));
		return;
	}

IL_00a3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40088));
		Il2CppFullySharedGenericStruct* L_33 = ___0_collectionAccessor;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40089));
		Il2CppConstrainedCallData L_35;
		Il2CppMethodPointer L_36 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 10), (void*)L_33, &L_35, L_34);
		typedef void ( *func_L_37)(void*,const RuntimeMethod*);
		((func_L_37)L_36)(L_35.thisPtr,L_35.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40089));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40090));
		return;
	}

IL_00b0:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40091));
		Il2CppFullySharedGenericStruct* L_38 = ___0_collectionAccessor;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40092));
		Il2CppConstrainedCallData L_40;
		Il2CppMethodPointer L_41 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 11), (void*)L_38, &L_40, L_39);
		typedef void ( *func_L_42)(void*,const RuntimeMethod*);
		((func_L_42)L_41)(L_40.thisPtr,L_40.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40092));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40093));
		return;
	}

IL_00bd:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40094));
		int32_t L_43 = __this->___dataOwner;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40095));
		MarshalledArray_ThrowUnimplementedDataOwnerCase_m9150E1B9B3FC842F81F701FE83077753341A5EC9(L_43, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40095));
	}

IL_00c8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40096));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArrayByRefMarshallingAccessor_2_GetArray_m45C81DDDD92285E385274FB34A74E290D68A6D0A_gshared_inline (ArrayByRefMarshallingAccessor_2_t3250EFF3C48E9AA12D5428D7EAB384BD54FEB68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayByRefMarshallingAccessor_2_tA659376B38B29F70F2F6632621B72DAA357F7BC5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40402));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40403));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40404));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40405));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = UnsafeUtility_As_Tis__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC_m07554F11A56C4741F72B2A445681BE0D3D68B67B((RuntimeObject*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40405));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ListMarshallingAccessor_2__ctor_mB2BA6FA40433FFD9FB5177EB70C0E371FA054806_gshared_inline (ListMarshallingAccessor_2_t4774A83BC60753470972766012AC4A6CA9EE7816* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListMarshallingAccessor_2_tFD1F582FC2926CE6B941BA251661DF41E46BCF9C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40409));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40410));
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B2_0 = NULL;
	ListMarshallingAccessor_2_t4774A83BC60753470972766012AC4A6CA9EE7816* G_B2_1 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B1_0 = NULL;
	ListMarshallingAccessor_2_t4774A83BC60753470972766012AC4A6CA9EE7816* G_B1_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40411));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40412));
		CollectionMarshallingAccessorsAsserts_AssertElementTypePunning_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mCA3B6133320D22565B668F4872ECF81B0BB9C435(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40412));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40413));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		__this->___list = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40414));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40415));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2;
		L_2 = NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericAny_m86C3B8CC91B7D7314F277C8EE09559E89700607E_inline(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40415));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40416));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3;
		L_3 = UnsafeUtility_As_Tis__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC_m07554F11A56C4741F72B2A445681BE0D3D68B67B((RuntimeObject*)L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40416));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = L_3;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = __this;
			goto IL_0021;
		}
		G_B1_0 = L_4;
		G_B1_1 = __this;
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40417));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5;
		L_5 = Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40417));
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		G_B2_1->___array = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___array), (void*)G_B2_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40418));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3753));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3754));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3755));
		uint32_t L_0 = SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2;
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1_inline (void* ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40188));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40189));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40190));
		void* L_0 = ___0_ptr;
		NullCheck(L_0);
		void* L_1 = ((NativeOwnedMemory_t5AAA42C857604F899F989EFBDE4DE8FD01BBC771*)L_0)->___data;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericAny_m86C3B8CC91B7D7314F277C8EE09559E89700607E_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31761));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31762));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31763));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31764));
		return (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31765));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31766));
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_2;
		L_2 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C_m6BEC4E15003DEBC3B54982D8B583886DBEA18582((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31766));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31767));
		NullCheck(L_2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = L_2->____items;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
