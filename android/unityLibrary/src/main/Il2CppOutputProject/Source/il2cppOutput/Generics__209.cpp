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
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};

struct Action_1_t9263CBDD3B27E6E13E51B59BEE88BF4FC29B7132;
struct Action_1_t96B1BE3FD2624C3880B1FBA89B7B7411D40A7F99;
struct Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53;
struct Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6;
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505;
struct Action_2_t8A22776B983FC159A556DCE6E74222D43670F873;
struct Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct Dictionary_2_tA0F0759ACFE489A515318F7FEC7C252100C65E0E;
struct Dictionary_2_t29C8BF28A8478B079C61631B473BB09AF77C7D01;
struct EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F;
struct EventCallback_1_t60C47C21A9D275310FAE06FCE9A258A7BDB26297;
struct Func_1_tA8142C82F6807E3ECF316299D5B91FFE4FEA7343;
struct IEqualityComparer_1_t7E0D6C2C69B591539CAB3E27CE56FCB46686B345;
struct IEqualityComparer_1_t4DE5D611F582A8EF69C28B2A51F059A0FF0F44AA;
struct IEqualityComparer_1_t00A4F390758B8395116E53D8F66B6C84872CDFB1;
struct IEqualityComparer_1_t3710AE75BEBB88CDB4F1DBA0A2E0D42AA27229E1;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352;
struct ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87;
struct Lazy_1_t564A33A7F423595D3F62B04F731E53A42FB37575;
struct List_1_t9FDBAD47CE85CE4F82C403A5ADDC271FD0F593D1;
struct List_1_t86CEEDD235E596954775CA0742BC77B3779A0347;
struct List_1_t592DF2E59D6E244DA0041698383484A07C7E0480;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9;
struct ManagerCallback_t28D36691D76482F717019D47129402A9538A3736;
struct MemoryDebugView_1_tE58388022143D55B8020F917C382224DE98A8F88;
struct MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487;
struct MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91;
struct MouseCaptureEventBase_1_t22B283B27FCD61274E7CEDD317FC2E9F4BD61350;
struct MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B;
struct NativeArrayDebugView_1_t822A40A26B069D94A4D21875C23D557566F1CBB1;
struct NativeArrayReadOnlyDebugView_1_t9602DD9F52F478794DD161C2E2EF8153A126CB09;
struct Node_tBEF81DD6C8E4523DE5F5F5A828279366160A3BEE;
struct Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB;
struct ObjectPool_1_t9CFCA41CD780F7424037FA2A3EE846F2FBFEE4D0;
struct PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744;
struct PopupNotification_1_tA47F61CDEEF4744EF013C872073F20EFCB577774;
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E;
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41;
struct SortedInt32KeyNode_1_t8D8DB6F733B5380172E9A1F0219E9058184E38D1;
struct SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169;
struct SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909;
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B;
struct DataBindingManager_tE7B33E64EBBDCAB0A89B6A8421529F9BA0D066E1;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904;
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0;
struct Handler_t6FB851C86EF75451F6C6D94F0F5470324D915F23;
struct HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct ICursorManager_t78B026DED2559C62810B21C54C5F882457073A8B;
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
struct IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E;
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
struct IPanelRenderer_tEB4A39BEC71B3B49302393D8DAFF7599E7F9ED9E;
struct IPinnable_tA3989EA495C0118966BAAF8848C0009947BB49C0;
struct IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7;
struct IVisualElementScheduledItem_t309F1A5445514122A9E3F64182D0D8A4DE34C48F;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct RepaintData_t90534752135661579EC254884F550545D001B5EA;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct String_t;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct TimeFunction_tF79523F25DE24287C8CF4D87F09E8CA51568EC9F;
struct TimerEventScheduler_tAF33EE8B1C54425235E4893B0C5088629FBE7862;
struct Type_t;
struct UIElementsBridge_tC28FCEDF493CD746D1973AB27BA2CBA393EB4BA8;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct EqualityComparer_tF8FCE99C5DBB2F35D74728CB65346435381CFD5B;
struct Data_t6BD087CC0FA9794D342D260035A70E365224C66E;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_AppUI[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Collections[];
IL2CPP_EXTERN_C RuntimeClass* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerEventInternal_tF0950F230320BC22B077741EA08AC538EE878833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral09B8A6EA35B75288D90AC15479A1E9A5D9A18113;
IL2CPP_EXTERN_C String_t* _stringLiteral12656D1A20150F14E6EA7A874F2D1F9A1C248387;
IL2CPP_EXTERN_C String_t* _stringLiteral47E8CCB1C331C9476E88F8A6179C1466CBA62167;
IL2CPP_EXTERN_C String_t* _stringLiteral65CD3F5C6944CD23E9BCF80AE6F43AADA3E20A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralA2E138AD319A0E08FFC4A185CE05933BF5C01D5C;
IL2CPP_EXTERN_C String_t* _stringLiteralACAE3DE011E4C429609CA3219C3F13E876D2AF69;
IL2CPP_EXTERN_C String_t* _stringLiteralB246FA9AAC8A513F752DC148312F96745C14263D;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8F70CB030D88DE0A66D6B4778D2B08506F7427;
IL2CPP_EXTERN_C const RuntimeMethod* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_get_currentTarget_m6F265B85FF86C35F62CFDF144B80B383DA9C503B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_get_elementTarget_mF6CFD6372FB247718797DB8927654F781821B94D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ManagedObjectStore_1_t9DAE7A373B9F884EA2D98897CCA9D4EA76BF716F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ManagerCallback_t51748194B8FE73F1BBCCF99A28F803329728027E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MouseCaptureEventBase_1_tC6D1E5F84B3F544BEDDE660826AB3AA3B109F884_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArrayAllocator_tC56FDB52B7742CFDBAFDF1B03DF9E9746A668DFF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArrayDebugView_1_tE87495FA18D5F8A71C5C739CC4D4E219FDE6A7BF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArrayReadOnlyDebugView_1_t0C571856AC525866709B940F559CB3B41248BA27_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArray_1_t6E2931CC2E1AA6B9F666FF4270BD177E2114779B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PointerCaptureEventBase_1_t15BA0021A879320FBC36AEEC5A6F64B62371293C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReadOnly_t1B08AA4D86F690C0C3566681B43FE4727DD112AB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9  : public RuntimeObject
{
	RuntimeObject* ____keyComparer;
	RuntimeObject* ____valueComparer;
};
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};
struct ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352  : public RuntimeObject
{
	int32_t ____count;
	SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* ____root;
	Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* ____comparers;
};
struct ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87  : public RuntimeObject
{
	RuntimeObject* ____equalityComparer;
	int32_t ____count;
	SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ____root;
	RuntimeObject* ____hashBucketEqualityComparer;
};
struct List_1_t86CEEDD235E596954775CA0742BC77B3779A0347  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ____items;
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
struct ManagedObjectStore_1_tB6B1AAC350E134C60B467801BCA08CB64AB8506E  : public RuntimeObject
{
	int32_t ___m_ChunkSize;
	int32_t ___m_Length;
	List_1_t9FDBAD47CE85CE4F82C403A5ADDC271FD0F593D1* ___m_Chunks;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___m_Free;
};
struct ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9  : public RuntimeObject
{
	int32_t ___m_ChunkSize;
	int32_t ___m_Length;
	List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* ___m_Chunks;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___m_Free;
};
struct ManagerCallback_t28D36691D76482F717019D47129402A9538A3736  : public RuntimeObject
{
	RuntimeObject* ___U3CobjU3Ek__BackingField;
};
struct MemoryManager_1_t100DF41C3091DFD72208C03DE3334C81417EF8B5  : public RuntimeObject
{
};
struct MemoryManager_1_t594C1E932F5A55B181EE783C6A960F5C49FCA096  : public RuntimeObject
{
};
struct MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E  : public RuntimeObject
{
};
struct MemoryManager_1_t9E713A8E4F8473E685FE4A73C98D29C9DB1EE583  : public RuntimeObject
{
};
struct MemoryManager_1_t9ECCF7BFD988CCEDB507A21058AD015B851F4ED7  : public RuntimeObject
{
};
struct MemoryManager_1_t322E687A7B9077D69D338DBBD54DF91A448C1174  : public RuntimeObject
{
};
struct MemoryManager_1_t1593A9905BC31E0AB720A0BFCF726C320767CBAB  : public RuntimeObject
{
};
struct MemoryManager_1_tCCB8500139282500A63D8BBBE2F5E237DB895855  : public RuntimeObject
{
};
struct MemoryManager_1_t385B6EACD3480CA6B643CB4F6BBA1E77EA77326F  : public RuntimeObject
{
};
struct MemoryManager_1_t5F570D64FAA3B08400B9A2BBC7B59A4D401C92F3  : public RuntimeObject
{
};
struct MemoryManager_1_tD7F0DD3F59F3D394171F079D3FCB221B88F500C1  : public RuntimeObject
{
};
struct MemoryManager_1_tE5160D0FA11B9D92F1D29878B196589CD37BD360  : public RuntimeObject
{
};
struct MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487  : public RuntimeObject
{
};
struct MemoryManager_1_t0F13F8ABADE525C75E021D40EB9CD0F787DB0D37  : public RuntimeObject
{
};
struct MemoryManager_1_tC804A7013E7154D24A68EC590A9767F24F603D39  : public RuntimeObject
{
};
struct MemoryManager_1_t01F5033FA1A31184437739862FF334033DC6D7E4  : public RuntimeObject
{
};
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C  : public RuntimeObject
{
};
struct Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A  : public RuntimeObject
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_InvokeShownAction;
	Handler_t6FB851C86EF75451F6C6D94F0F5470324D915F23* ___m_Handler;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_PrepareAnimateViewInAction;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnLayoutReadyToAnimateInAction;
	RuntimeObject* ___m_ScheduledPrepareAnimateViewIn;
	RuntimeObject* ___m_ScheduledAnimateViewIn;
	RuntimeObject* ___m_ScheduledLayoutReadyToAnimateIn;
	bool ___U3CkeyboardDismissEnabledU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CviewU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CcontainerViewU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CreferenceViewU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CcontentViewU3Ek__BackingField;
	bool ___U3CfocusOutDismissableU3Ek__BackingField;
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
struct ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____offset;
	int32_t ____count;
};
typedef Il2CppFullySharedGenericStruct HashBucket_t31FCCF0BDD6808CC6078033BE249017344ACE4ED;
struct ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct Memory_1_t6A56D299C28C0C9A8723424F38AE7F419F3FE4F8 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_t7D37DF6A780B39D4C578E862DE2B17EE5124104C 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_t48D1B1093D181D6F37155EB644659FD7D1DF616E 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_t0A005593038317BC77D248381C07821F39837518 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_t08D6291C9D6C58C6FF1619C8FB5E584448A2EFB9 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_tE16C25CB4A76F4869ACDC7D490587CEE923089A6 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_t8307775D7EC7531811A87E41AE4D5194CD409349 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_tBAEF4486E3EBF7BD70B1D5E29AC1E7DB1015C736 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_t61F22B59AD45D0DE05647FB5EB5D17B50071A5D9 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_t4B15AC6390D6A3CCC59CE39B7FDC455BB4D3AB65 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_t31D1C361DE9552E0770BB40635AA5F056972518A 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_t5672AA3797F891F218C82DAC7564F2AAA1B9E843 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_t1CCBE619EB97A267908BC51B09248CC3A11AE47A 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_t506FDFB656844F4377008E991AAA4C1441B4A74F 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct MutationInput_tAFEC36CAC1122ED9960252834A1AFA7E7E279CA1 
{
	SortedInt32KeyNode_1_t8D8DB6F733B5380172E9A1F0219E9058184E38D1* ____root;
	RuntimeObject* ____equalityComparer;
	int32_t ____count;
	RuntimeObject* ____hashBucketEqualityComparer;
};
struct MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034 
{
	SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ____root;
	RuntimeObject* ____equalityComparer;
	int32_t ____count;
	RuntimeObject* ____hashBucketEqualityComparer;
};
struct MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8 
{
	SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* ____root;
	Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* ____comparers;
};
struct MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689 
{
	SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* ____root;
	int32_t ____countAdjustment;
};
struct NativeArrayStaticId_1_t50C709E712A83F94158359DA374799781680B83C 
{
	union
	{
		struct
		{
		};
		uint8_t NativeArrayStaticId_1_t4D99ED470E60088BA55990F9274D24F2AEEC3F9B__padding[1];
	};
};
struct Popup_1_tD6BBE7B9C18054FA9988518B43C91C9C2F9D36B3  : public Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A
{
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___m_LastFocusedElement;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___shown;
	Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* ___dismissed;
};
struct ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct SharedStatic_1_t91D24BF9DAB0EDD81AA3013F2C4CBD0A98040667 
{
	void* ____buffer;
};
struct SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C 
{
	void* ____buffer;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
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
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	int32_t ___id;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC 
{
	uint8_t ____rawValue;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct CountType_t64787F0F8EF0E339203F5055436F546C0D72E896 
{
	int32_t ___value__;
};
struct CountType_tB3BC41C2CC1A1C916201F2288ED75E0AEF78A106 
{
	int32_t ___value__;
};
typedef Il2CppFullySharedGenericStruct HashBucket_tD9E961ABFBD36A4CB5F704E40582C04EA6CFCDEF;
struct MemoryDebugView_1_tE58388022143D55B8020F917C382224DE98A8F88  : public RuntimeObject
{
	ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ____memory;
};
struct MemoryPressure_t211225B7C4B31AFD064E1D7ABDD38BD64F5C97C2 
{
	int32_t ___value__;
};
struct MemoryPressure_tF20E59A2FCD73572EF954182450F33E0A686455A 
{
	int32_t ___value__;
};
struct MemoryPressure_tDDA5D8E48826B4CBA5699D6EE80C85F2F0F4B717 
{
	int32_t ___value__;
};
struct MemoryPressure_t842F850D315484F407FE5A0D42F82BC882AD9402 
{
	int32_t ___value__;
};
struct MemoryPressure_t7AAFC0465C6ACE5222645A59D867C7FD22F28381 
{
	int32_t ___value__;
};
typedef Il2CppFullySharedGenericStruct MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB;
struct NativeArrayReadOnlyDebugView_1_t9602DD9F52F478794DD161C2E2EF8153A126CB09  : public RuntimeObject
{
	ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___m_Array;
};
struct SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169 : public RuntimeObject {};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AnimationMode_tD46D25065A1462D02B8ECD0B7F48CEF53BC00DC3 
{
	int32_t ___value__;
};
struct ContextType_t50FAC10DB1D4E29B37E532DED9CAA804FC4E59A0 
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
struct DismissType_tC0BA1632E781EBB8E0190DB4FBB81E53F7D5BC8F 
{
	int32_t ___value__;
};
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct EventCategory_tCFC347F164A2525B4C39DA6A9B7A9B5A541E3FFA 
{
	int32_t ___value__;
};
struct EventModifiers_tB9DEEF73F8FC4C312B8E0C34336C7D9C3023B270 
{
	int32_t ___value__;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GCHandleType_t4CD45A3495E593D093AB0CE36EF9EC1A1572F82A 
{
	int32_t ___value__;
};
struct LanguageDirection_t30A3B6BBCEE6A6F57641E4E008E0DCC40603558C 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct NotificationDuration_tD562238B426E181B87C065BBAC1F2369528749C2 
{
	int32_t ___value__;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 
{
	bool ___clearDepthStencil;
	bool ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_pinvoke
{
	int32_t ___clearDepthStencil;
	int32_t ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_com
{
	int32_t ___clearDepthStencil;
	int32_t ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PopupNotificationPlacement_tD0898107BDC86355AE7B6F2C3A6537FC6BAA594F 
{
	int32_t ___value__;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PropagationPhase_tF3BE8BF5ED45FC52A828B7B6F078B64F01FAE6D6 
{
	int32_t ___value__;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct PseudoStates_tF4AB056E8743741BCE464A0983A060A53AAB7E4D 
{
	int32_t ___value__;
};
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction;
};
struct RenderHints_t4032FC4AB3FD946FD2A484865B8861730D9035E7 
{
	int32_t ___value__;
};
struct RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct VisualElementFlags_t4D1066E11400967A1A2DA7331391ACDC4AA14409 
{
	int32_t ___value__;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct EventPropagation_t024AF56F7A787C03AA21B065B624553EF52E7B83 
{
	int32_t ___value__;
};
struct LifeCycleStatus_tEE500629F5431B574B8047EB70864747D348D38C 
{
	int32_t ___value__;
};
struct MutationResult_tD44DE8AA8FA4C1B597D3B23E8D8A606D222000A9 
{
	SortedInt32KeyNode_1_t8D8DB6F733B5380172E9A1F0219E9058184E38D1* ____root;
	int32_t ____count;
	int32_t ____countType;
};
struct MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC 
{
	SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ____root;
	int32_t ____count;
	int32_t ____countType;
};
struct NativeArray_1_tF4834C92AB2B4C985AE73C9844F50A71400236FC 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 
{
	bool ___hasValue;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___value;
};
struct PopupNotification_1_tA47F61CDEEF4744EF013C872073F20EFCB577774  : public Popup_1_tD6BBE7B9C18054FA9988518B43C91C9C2F9D36B3
{
	ManagerCallback_t28D36691D76482F717019D47129402A9538A3736* ___m_ManagerCallback;
	int32_t ___m_AnimationMode;
	int32_t ___m_Duration;
	int32_t ___m_Placement;
	int32_t ___m_AnimateViewOutReason;
	EventCallback_1_t60C47C21A9D275310FAE06FCE9A258A7BDB26297* ___m_OnInAnimationEnded;
	EventCallback_1_t60C47C21A9D275310FAE06FCE9A258A7BDB26297* ___m_OnOutAnimationEnded;
};
struct SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909 : public RuntimeObject {};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C  : public RuntimeObject
{
	int32_t ___U3CeventCategoriesU3Ek__BackingField;
	int64_t ___U3CtimestampU3Ek__BackingField;
	uint64_t ___U3CeventIdU3Ek__BackingField;
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField;
	int32_t ___U3CpropagationU3Ek__BackingField;
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CelementTargetU3Ek__BackingField;
	int32_t ___U3CpropagationPhaseU3Ek__BackingField;
	RuntimeObject* ___m_CurrentTarget;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ImguiEvent;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CoriginalMousePositionU3Ek__BackingField;
};
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD 
{
	void* ____pointer;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle;
	RuntimeObject* ____pinnable;
};
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshaled_pinvoke
{
	void* ____pointer;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle;
	RuntimeObject* ____pinnable;
};
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshaled_com
{
	void* ____pointer;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle;
	RuntimeObject* ____pinnable;
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
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91  : public MulticastDelegate_t
{
};
struct NativeArrayAllocator_t26840BC165D783F0FB52061DC70D297E3AF7D28E 
{
	int32_t ___m_Allocator;
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
};
struct NativeArrayAllocator_t3708FF11DA1D8F1E666473BCA311E72E2A39250A 
{
	int32_t ___m_Allocator;
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
};
struct NativeArrayAllocator_tBE5CF641484EFFF7ED506443BFF9EED193D947FC 
{
	int32_t ___m_Allocator;
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
};
struct NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492 
{
	int32_t ___m_Allocator;
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
};
struct NativeArrayAllocator_t60748B6A3A7FB52B1E41A4D6F12C18F2D6FD7798 
{
	int32_t ___m_Allocator;
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
};
struct NativeArrayDebugView_1_t822A40A26B069D94A4D21875C23D557566F1CBB1  : public RuntimeObject
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___m_Array;
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
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
struct MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B  : public EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F
{
	int32_t ___U3CmodifiersU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CmousePositionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ClocalMousePositionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CmouseDeltaU3Ek__BackingField;
	int32_t ___U3CclickCountU3Ek__BackingField;
	int32_t ___U3CbuttonU3Ek__BackingField;
	int32_t ___U3CpressedButtonsU3Ek__BackingField;
	RuntimeObject* ___U3CsourcePointerEventU3Ek__BackingField;
	bool ___U3CrecomputeTopElementUnderMouseU3Ek__BackingField;
	Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 ___U3CpanelRayU3Ek__BackingField;
};
struct PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744  : public EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F
{
	RuntimeObject* ___U3CrelatedTargetU3Ek__BackingField;
	int32_t ___U3CpointerIdU3Ek__BackingField;
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
struct LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA 
{
	int32_t ___m_Manager;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Nodes;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Configs;
};
struct MouseCaptureEventBase_1_t22B283B27FCD61274E7CEDD317FC2E9F4BD61350  : public PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744
{
};
struct LayoutConfig_tD448909812F1AA8DE14EAC340688D6FF41B52C87 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 ___m_Handle;
};
struct LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 ___m_Handle;
};
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303  : public RuntimeObject
{
	Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53* ___panelDisposed;
	Dictionary_2_t29C8BF28A8478B079C61631B473BB09AF77C7D01* ___MemberElementsByHandle;
	UIElementsBridge_tC28FCEDF493CD746D1973AB27BA2CBA393EB4BA8* ___m_UIElementsBridge;
	float ___m_Scale;
	LayoutConfig_tD448909812F1AA8DE14EAC340688D6FF41B52C87 ___layoutConfig;
	float ___m_PixelsPerPoint;
	float ___U3CreferenceSpritePixelsPerUnitU3Ek__BackingField;
	PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 ___U3CclearSettingsU3Ek__BackingField;
	RuntimeObject* ___panelRenderer;
	RepaintData_t90534752135661579EC254884F550545D001B5EA* ___U3CrepaintDataU3Ek__BackingField;
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField;
	ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B* ___U3CcontextualMenuManagerU3Ek__BackingField;
	DataBindingManager_tE7B33E64EBBDCAB0A89B6A8421529F9BA0D066E1* ___U3CdataBindingManagerU3Ek__BackingField;
	TimerEventScheduler_tAF33EE8B1C54425235E4893B0C5088629FBE7862* ___m_Scheduler;
	TimeFunction_tF79523F25DE24287C8CF4D87F09E8CA51568EC9F* ___m_TimeSinceStartupFunc;
	bool ___U3CdisposedU3Ek__BackingField;
	ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904* ___m_TopElementUnderPointers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___isFlatChanged;
	bool ___m_DrawsInCameras;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___atlasChanged;
	HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705* ___hierarchyChanged;
	Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6* ___beforeUpdate;
	Lazy_1_t564A33A7F423595D3F62B04F731E53A42FB37575* ___textElementRegistry;
	Func_1_tA8142C82F6807E3ECF316299D5B91FFE4FEA7343* ___CreateMenuFunctor;
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
struct Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9_StaticFields
{
	Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* ___Default;
};
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value;
};
struct ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352_StaticFields
{
	ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* ___Empty;
	Action_1_t96B1BE3FD2624C3880B1FBA89B7B7411D40A7F99* ___s_FreezeBucketAction;
};
struct ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87_StaticFields
{
	ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* ___Empty;
	Action_1_t9263CBDD3B27E6E13E51B59BEE88BF4FC29B7132* ___s_FreezeBucketAction;
};
struct List_1_t86CEEDD235E596954775CA0742BC77B3779A0347_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields
{
	int32_t ___maxPointers;
	int32_t ___invalidPointerId;
	int32_t ___mousePointerId;
	int32_t ___touchPointerIdBase;
	int32_t ___touchPointerCount;
	int32_t ___penPointerIdBase;
	int32_t ___penPointerCount;
	int32_t ___trackedPointerIdBase;
	int32_t ___trackedPointerCount;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___screenHoveringPointers;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178_StaticFields
{
	ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 ___U3CEmptyU3Ek__BackingField;
};
struct ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B_StaticFields
{
	ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B ___Empty;
};
struct NativeArrayStaticId_1_t50C709E712A83F94158359DA374799781680B83C_StaticFields
{
	SharedStatic_1_t91D24BF9DAB0EDD81AA3013F2C4CBD0A98040667 ___s_staticSafetyId;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169_StaticFields
{
	SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___EmptyNode;
};
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields
{
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_Current;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_MasterEvent;
};
struct SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909_StaticFields
{
	SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* ___EmptyNode;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_StaticFields
{
	int64_t ___s_LastTypeId;
	uint64_t ___s_NextEventId;
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
struct EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F_StaticFields
{
	int64_t ___s_TypeId;
	ObjectPool_1_t9CFCA41CD780F7424037FA2A3EE846F2FBFEE4D0* ___s_Pool;
	int32_t ___EventCategory;
};
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_StaticFields
{
	Dictionary_2_tA0F0759ACFE489A515318F7FEC7C252100C65E0E* ___PanelsByHandle;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s_OutsidePanelCoordinates;
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	uint32_t ___s_NextId;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey;
	String_t* ___disabledUssClassName;
	int32_t ___s_FinalizerCount;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___childCountProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___contentRectProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourcePathProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___disablePlayModeTintProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledInHierarchyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledSelfProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___layoutProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___languageDirectionProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___localBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___nameProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___panelProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___pickingModeProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___styleSheetsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___tooltipProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___usageHintsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___userDataProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___viewDataKeyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visibleProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visualTreeAssetSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldTransformProperty;
	uint32_t ___s_NextParentVersion;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList;
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey;
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m657BFA58DFD6AB5B1B4B69AA6E963CD569637EAD_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m9159DC6A9BC5528A3444329C408F4101004CF652_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_gshared_inline (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Dequeue_m80C152387A53656EC4AEF450BCBA9087DC51EEE3_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ManagerCallback_get_obj_mCC14E9648BBB5AA50205A291CE07E156786DE171_gshared_inline (ManagerCallback_t28D36691D76482F717019D47129402A9538A3736* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_memory, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ReadOnlyMemory_1_ToArray_m44807420910F7442D09F80751674CF30711B0764_gshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_gshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m39F9C3933A6F0AD9E9CE3A5B597A770C54F6FECF_gshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m5ABFBF1303AB4B2B8AD03A4586CC52B6098DCBE9_gshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m7EA183117D6958FFAC919F291510339F7792C7CD_gshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* ___0_manager, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m58BECFC48979D14A69D6AC373301B755043ACA9B_gshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* ___0_manager, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_gshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_gshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_gshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_gshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_get_Length_m0D3942C435EEDB938ADDA2CE7C625761CEAB520E_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_get_IsEmpty_mFE27DC49FE38E33AD226323A42DB57922F00B0C8_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_gshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m51B73F86825C26B44AF2E5C9152D807780EB84ED_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Memory_1_ToString_m8587562831B505E363617A254DE467726D4C6351_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_Slice_mB1A59814638EB046790D5DB854A8D42BA2CB686F_gshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, int32_t ___0_start, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_Slice_m6D92DFA60814F303301792ABF267BA35242FACA4_gshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m87850B36DC83BF310EC6136E6D14DC5634F96F05_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1_CopyTo_mDB8DD4693F007CBBDC70454425C368FD0614D3FC_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_TryCopyTo_mA894E1A58E1FB0ACB1FEDECD7DDA18A8ABFD4CD3_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_Add_TisIl2CppFullySharedGenericAny_m25356A475C0867B15741BD80812E4EBA4394F3C5_gshared (void* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD Memory_1_Pin_m9EEBCD8E7B6269C02BFBD57F2E67854920DFB85B_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Span_1_ToArray_mBB0A9E11BBAA9FDE1D0C045FBA14F4CD3E84773E_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Memory_1_ToArray_mF5FFD4A0E8AC951FDA34807539E9631310B6D757_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61_gshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_Equals_m03AA1FCD0E395B27BD53551C06FDC8ED34F10A9A_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_CombineHashCodes_mAF5A2B57827992A931D66D37B330E11439075F2B_gshared (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_GetHashCode_m7A4C30D97D133B153A50D638A7D596CDA1BD11B5_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_CombineHashCodes_mEB42331AAFED3F227F0E7520FA03E6804637F84F_gshared (int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC MethodSignature_1_get_Header_m32123B412AAB6BAFBD90229B0704486F87175C8D_gshared_inline (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MethodSignature_1_get_ReturnType_m98A0D6B3A151625D6F80D6F377D2F5EF9AD02228_gshared_inline (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MethodSignature_1_get_RequiredParameterCount_m7917A3923C0105288D1B752E46A2FC1598BA4729_gshared_inline (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MethodSignature_1_get_GenericParameterCount_m51ECBE9A64B13A577BF9FB25259C14D4DBB73975_gshared_inline (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B MethodSignature_1_get_ParameterTypes_mE7FC3F1E7EF4B7A01FE761DDE1EF5A38A5499DDA_gshared_inline (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodSignature_1__ctor_mF784840EA0615986BE95433A09D5DD5A9F37B87C_gshared (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC ___0_header, Il2CppFullySharedGenericAny ___1_returnType, int32_t ___2_requiredParameterCount, int32_t ___3_genericParameterCount, ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B ___4_parameterTypes, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PointerCaptureEventBase_1_get_relatedTarget_mF2EDDB5F566EA8D9259348F5484661FB10656465_gshared_inline (PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PointerCaptureEventBase_1_GetPooled_mBB52B5855A465C8C2ABE3A66D4106169793C9B8C_gshared (RuntimeObject* ___0_target, RuntimeObject* ___1_relatedTarget, int32_t ___2_pointerId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCaptureEventBase_1__ctor_m6504E51BF3B701E614E30F22DD97E3E2E68EB5CD_gshared (PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_commandKey_m55FF4BF6C66063A081ADDD1EA8E0E654E2186243_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_ctrlKey_m96AD34ADFBB5A39300F76AA72AF966C4216AB287_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_mouseDelta_mA9B00E7C5EAD63AE805FF883D81C73B88F781F3C_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 MouseEventBase_1_get_panelRay_m15BF165696F29D7A1F371DEC030C1E57CFA7E682_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1_Init_m810FE185606F5EB505285FEDEDB759E3DDB0E934_gshared (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_LocalInit_m85C31C18C63B13944050FE4C8F328E12465C8132_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_recomputeTopElementUnderMouse_m5D34798DE02C9783D4F623F4F5BFAD3C254B51E5_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m13C3E655268E03D8CDA8E82FBC4C2B8B0C910511_gshared (RuntimeObject* ___0_triggerEvent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* EventBase_1_GetPooled_m567E588C708778F6F41E2D69650776EBF437F74C_gshared (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1__ctor_mACA9307C9EF30E9F5D55E8FA6AE6E58A99BA40CD_gshared (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared (Il2CppSharedGenericObject* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutationInput__ctor_mEE9E0D47DA32453A9B79295BDF835C0830E70EAF_gshared (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutationInput__ctor_m6472255CFE31C92B91258C27021E3AA2B049BDF1_gshared (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___0_root, RuntimeObject* ___1_equalityComparer, RuntimeObject* ___2_hashBucketEqualityComparer, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* MutationInput_get_Root_m915B63D2C097FFE14D3526BDFB912A263B1DF78A_gshared_inline (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MutationInput_get_EqualityComparer_m47B4CEE19DCCAED7570F3BF7620C415F5F652C4C_gshared_inline (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MutationInput_get_Count_m6E3318EDC672F6F6AF1118A44C07EC9EC0A7DEB8_gshared_inline (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MutationInput_get_HashBucketEqualityComparer_m8D626B7818EAFA846C80901283441C465944BD89_gshared_inline (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutationInput__ctor_m9E6FF2513A09220079EEF98A1A5E5CD400C6215A_gshared (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* ___0_root, Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* ___1_comparers, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutationInput__ctor_m976F9BDBB85CE0DCB7B787F065EA8B09B05CEED7_gshared (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* ___0_map, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* MutationInput_get_Root_m2DBEE6A809C40133F0D17E4F4C741268EDC05EE0_gshared_inline (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* MutationInput_get_Comparers_mEB1A03202DA1299DC403F2C80621A69391D8EC3F_gshared_inline (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Comparers_get_KeyComparer_m829F4ED35876B6C90CA646A7851CEFD576B79BDE_gshared_inline (Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MutationInput_get_KeyComparer_mA342CB28F9A069EC90C7614B6C2D99677183ECB7_gshared (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Comparers_get_KeyOnlyComparer_mC391557AD111F4CC8FD23623C98D5F1B9222FA0F_gshared (Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MutationInput_get_KeyOnlyComparer_m98E70DBE989987BB78A69F1E2CF1D4A7D225E466_gshared (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Comparers_get_ValueComparer_mE06E2FB2EF1F59557310213BAFDC5F3AF3049B36_gshared_inline (Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MutationInput_get_ValueComparer_m930AA681011080A7890E558ECF3FFE0BDBEAC2C8_gshared (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Comparers_get_HashBucketEqualityComparer_mE932162ABE21D060EF511CC15AED3D6BC4109BF9_gshared (Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MutationInput_get_HashBucketComparer_m530EB5827ABD112A74ED8AA74B351D028EEFC54A_gshared (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutationResult__ctor_m427273493990392572644670EFD60CFE8C70A782_gshared (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* __this, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___0_root, int32_t ___1_count, int32_t ___2_countType, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* MutationResult_get_Root_m6ECFD16A9CDEE2383F0C7E9EC6A57A1B16A8A230_gshared_inline (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MutationResult_get_Count_mAB2B07AB4A5614A22BBC89D6924E1D4B58C2AC44_gshared_inline (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MutationResult_get_CountType_mFE8C9AD264FA165FA10B0C1817C2240250B9E830_gshared_inline (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* ImmutableHashSet_1_Wrap_m9DF77AF2CB4C36AC060A3CAB0D3BF09AB264D91E_gshared (ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* __this, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___0_root, int32_t ___1_adjustedCountIfDifferentRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* MutationResult_Finalize_m7A72CC861631BC27057EA24C65FDDD5BF09B4B4F_gshared (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* __this, ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* ___0_priorSet, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutationResult__ctor_m2583CDC476B88D26086C73E03A85F8B9DEA9D898_gshared (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* __this, MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8 ___0_unchangedInput, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutationResult__ctor_m9153B91EA8BB27CF07C041205A69847B638EEEE5_gshared (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* __this, SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* ___0_root, int32_t ___1_countAdjustment, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* MutationResult_get_Root_mEDAF44C3864D254F056571D526ECE5CADA021F28_gshared_inline (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MutationResult_get_CountAdjustment_mCD5E1C6BFFE241697033430752F4D5E91C29A161_gshared_inline (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* ImmutableDictionary_2_Wrap_m6CB444A5A32FE025711F9CD460C9861FC64960B7_gshared (ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* __this, SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* ___0_root, int32_t ___1_adjustedCountIfDifferentRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* MutationResult_Finalize_mED16442D5B8129D5638328DE05668A2C2B70134D_gshared (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* __this, ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* ___0_priorMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayAllocator__ctor_m44FA9B3E65248C9541D203A60A05E8067106EF43_gshared (NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492* __this, String_t* ___0_profilerName, int32_t ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m01C0164611F0F10354E4ABA539FA854E3A97F76A_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___1_label, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayAllocator_CreateArray_m23A47AB9FCCC96DE09A09E691F423EEE92972DFE_gshared (NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492* __this, int32_t ___0_length, int32_t ___1_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_gshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReadOnly_get_IsCreated_mADD8624D940450CB4F64C20BCFEFAC0065E485A2_gshared_inline (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ReadOnly_ToArray_mFD80D7B7BE13A74B4BE53E54CE3BCB5300F46D27_gshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C SharedStatic_1_GetOrCreate_TisIl2CppFullySharedGenericAny_m81680C541BEC597AC94046D6444ED6041C195C4D_gshared (uint32_t ___0_alignment, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIl2CppFullySharedGenericAny_m7051201F0F2C986AB0084FB4A24BEE4D4733C5EB_gshared (Il2CppFullySharedGenericAny* ___0_destination, Il2CppFullySharedGenericAny* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_mE47F2A05D047C5831E195F8F2577C836892F8A76 (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)(__this, method);
}
inline void List_1_Add_mFD92FC4DF9C51E76D74F6584FB6C713C6A955AB7_inline (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1__ctor_m657BFA58DFD6AB5B1B4B69AA6E963CD569637EAD_gshared)(__this, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_get_Item_m24182315BE1ED5609F0ACF39331685141AA53443 (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Queue_1_Enqueue_m9159DC6A9BC5528A3444329C408F4101004CF652_gshared)((Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
inline int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_gshared_inline)(__this, method);
}
inline int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Queue_1_Dequeue_m80C152387A53656EC4AEF450BCBA9087DC51EEE3_gshared)((Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline int32_t List_1_get_Count_m5F28C6E82FCE45373CD5786E08E8BA6799F70422_inline (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)(__this, method);
}
inline RuntimeObject* ManagerCallback_get_obj_mCC14E9648BBB5AA50205A291CE07E156786DE171_inline (ManagerCallback_t28D36691D76482F717019D47129402A9538A3736* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ManagerCallback_t28D36691D76482F717019D47129402A9538A3736*, const RuntimeMethod*))ManagerCallback_get_obj_mCC14E9648BBB5AA50205A291CE07E156786DE171_gshared_inline)(__this, method);
}
inline ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_memory, const RuntimeMethod* method)
{
	return ((  ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA, const RuntimeMethod*))Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF_gshared)(___0_memory, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ReadOnlyMemory_1_ToArray_m44807420910F7442D09F80751674CF30711B0764 (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, const RuntimeMethod*))ReadOnlyMemory_1_ToArray_m44807420910F7442D09F80751674CF30711B0764_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
inline void Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_gshared_inline)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
inline void Memory_1__ctor_m39F9C3933A6F0AD9E9CE3A5B597A770C54F6FECF_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))Memory_1__ctor_m39F9C3933A6F0AD9E9CE3A5B597A770C54F6FECF_gshared_inline)(__this, ___0_array, ___1_start, method);
}
inline void Memory_1__ctor_m5ABFBF1303AB4B2B8AD03A4586CC52B6098DCBE9_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))Memory_1__ctor_m5ABFBF1303AB4B2B8AD03A4586CC52B6098DCBE9_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void Memory_1__ctor_m7EA183117D6958FFAC919F291510339F7792C7CD_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* ___0_manager, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*, int32_t, const RuntimeMethod*))Memory_1__ctor_m7EA183117D6958FFAC919F291510339F7792C7CD_gshared_inline)(__this, ___0_manager, ___1_length, method);
}
inline void Memory_1__ctor_m58BECFC48979D14A69D6AC373301B755043ACA9B_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* ___0_manager, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*, int32_t, int32_t, const RuntimeMethod*))Memory_1__ctor_m58BECFC48979D14A69D6AC373301B755043ACA9B_gshared_inline)(__this, ___0_manager, ___1_start, ___2_length, method);
}
inline void Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_gshared_inline)(__this, ___0_obj, ___1_start, ___2_length, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_gshared_inline)(__this, method);
}
inline int32_t ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_gshared_inline)(__this, method);
}
inline int32_t ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_gshared_inline)(__this, method);
}
inline int32_t Memory_1_get_Length_m0D3942C435EEDB938ADDA2CE7C625761CEAB520E (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, const RuntimeMethod*))Memory_1_get_Length_m0D3942C435EEDB938ADDA2CE7C625761CEAB520E_gshared)(__this, method);
}
inline bool Memory_1_get_IsEmpty_mFE27DC49FE38E33AD226323A42DB57922F00B0C8 (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, const RuntimeMethod*))Memory_1_get_IsEmpty_mFE27DC49FE38E33AD226323A42DB57922F00B0C8_gshared)(__this, method);
}
inline Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method)
{
	return ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, const RuntimeMethod*))Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_gshared_inline)(__this, method);
}
inline String_t* Span_1_ToString_m51B73F86825C26B44AF2E5C9152D807780EB84ED (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))Span_1_ToString_m51B73F86825C26B44AF2E5C9152D807780EB84ED_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline String_t* Memory_1_ToString_m8587562831B505E363617A254DE467726D4C6351 (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, const RuntimeMethod*))Memory_1_ToString_m8587562831B505E363617A254DE467726D4C6351_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_Slice_mB1A59814638EB046790D5DB854A8D42BA2CB686F_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, int32_t, const RuntimeMethod*))Memory_1_Slice_mB1A59814638EB046790D5DB854A8D42BA2CB686F_gshared_inline)(__this, ___0_start, method);
}
inline Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_Slice_m6D92DFA60814F303301792ABF267BA35242FACA4_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, int32_t, int32_t, const RuntimeMethod*))Memory_1_Slice_m6D92DFA60814F303301792ABF267BA35242FACA4_gshared_inline)(__this, ___0_start, ___1_length, method);
}
inline Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_gshared_inline)(__this, ___0_start, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
inline void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void Span_1_CopyTo_m87850B36DC83BF310EC6136E6D14DC5634F96F05 (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))Span_1_CopyTo_m87850B36DC83BF310EC6136E6D14DC5634F96F05_gshared)(__this, ___0_destination, method);
}
inline void Memory_1_CopyTo_mDB8DD4693F007CBBDC70454425C368FD0614D3FC (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA, const RuntimeMethod*))Memory_1_CopyTo_mDB8DD4693F007CBBDC70454425C368FD0614D3FC_gshared)(__this, ___0_destination, method);
}
inline bool Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37 (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37_gshared)(__this, ___0_destination, method);
}
inline bool Memory_1_TryCopyTo_mA894E1A58E1FB0ACB1FEDECD7DDA18A8ABFD4CD3 (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA, const RuntimeMethod*))Memory_1_TryCopyTo_mA894E1A58E1FB0ACB1FEDECD7DDA18A8ABFD4CD3_gshared)(__this, ___0_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___0_value, int32_t ___1_type, const RuntimeMethod* method) ;
inline void* Unsafe_Add_TisIl2CppFullySharedGenericAny_m25356A475C0867B15741BD80812E4EBA4394F3C5 (void* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method)
{
	return ((  void* (*) (void*, int32_t, const RuntimeMethod*))Unsafe_Add_TisIl2CppFullySharedGenericAny_m25356A475C0867B15741BD80812E4EBA4394F3C5_gshared)(___0_source, ___1_elementOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHandle__ctor_mBC4C2B7E7F10F5F93EFCF6A3A24D41CE79916C91 (MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD* __this, void* ___0_pointer, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___1_handle, RuntimeObject* ___2_pinnable, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
inline MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD Memory_1_Pin_m9EEBCD8E7B6269C02BFBD57F2E67854920DFB85B (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method)
{
	return ((  MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, const RuntimeMethod*))Memory_1_Pin_m9EEBCD8E7B6269C02BFBD57F2E67854920DFB85B_gshared)(__this, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Span_1_ToArray_mBB0A9E11BBAA9FDE1D0C045FBA14F4CD3E84773E_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))Span_1_ToArray_mBB0A9E11BBAA9FDE1D0C045FBA14F4CD3E84773E_gshared_inline)(__this, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Memory_1_ToArray_mF5FFD4A0E8AC951FDA34807539E9631310B6D757 (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, const RuntimeMethod*))Memory_1_ToArray_mF5FFD4A0E8AC951FDA34807539E9631310B6D757_gshared)(__this, method);
}
inline bool ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61 (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4, const RuntimeMethod*))ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61_gshared)(__this, ___0_other, method);
}
inline bool Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0 (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA, const RuntimeMethod*))Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0_gshared)(__this, ___0_other, method);
}
inline bool Memory_1_Equals_m03AA1FCD0E395B27BD53551C06FDC8ED34F10A9A (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, RuntimeObject*, const RuntimeMethod*))Memory_1_Equals_m03AA1FCD0E395B27BD53551C06FDC8ED34F10A9A_gshared)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
inline int32_t Memory_1_CombineHashCodes_mAF5A2B57827992A931D66D37B330E11439075F2B (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t, const RuntimeMethod*))Memory_1_CombineHashCodes_mAF5A2B57827992A931D66D37B330E11439075F2B_gshared)(___0_h1, ___1_h2, ___2_h3, method);
}
inline int32_t Memory_1_GetHashCode_m7A4C30D97D133B153A50D638A7D596CDA1BD11B5 (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, const RuntimeMethod*))Memory_1_GetHashCode_m7A4C30D97D133B153A50D638A7D596CDA1BD11B5_gshared)(__this, method);
}
inline int32_t Memory_1_CombineHashCodes_mEB42331AAFED3F227F0E7520FA03E6804637F84F (int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))Memory_1_CombineHashCodes_mEB42331AAFED3F227F0E7520FA03E6804637F84F_gshared)(___0_left, ___1_right, method);
}
inline SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC MethodSignature_1_get_Header_m32123B412AAB6BAFBD90229B0704486F87175C8D_inline (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, const RuntimeMethod* method)
{
	return ((  SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC (*) (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB*, const RuntimeMethod*))MethodSignature_1_get_Header_m32123B412AAB6BAFBD90229B0704486F87175C8D_gshared_inline)(__this, method);
}
inline void MethodSignature_1_get_ReturnType_m98A0D6B3A151625D6F80D6F377D2F5EF9AD02228_inline (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))MethodSignature_1_get_ReturnType_m98A0D6B3A151625D6F80D6F377D2F5EF9AD02228_gshared_inline)((MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB*)__this, il2cppRetVal, method);
}
inline int32_t MethodSignature_1_get_RequiredParameterCount_m7917A3923C0105288D1B752E46A2FC1598BA4729_inline (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB*, const RuntimeMethod*))MethodSignature_1_get_RequiredParameterCount_m7917A3923C0105288D1B752E46A2FC1598BA4729_gshared_inline)(__this, method);
}
inline int32_t MethodSignature_1_get_GenericParameterCount_m51ECBE9A64B13A577BF9FB25259C14D4DBB73975_inline (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB*, const RuntimeMethod*))MethodSignature_1_get_GenericParameterCount_m51ECBE9A64B13A577BF9FB25259C14D4DBB73975_gshared_inline)(__this, method);
}
inline ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B MethodSignature_1_get_ParameterTypes_mE7FC3F1E7EF4B7A01FE761DDE1EF5A38A5499DDA_inline (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, const RuntimeMethod* method)
{
	return ((  ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B (*) (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB*, const RuntimeMethod*))MethodSignature_1_get_ParameterTypes_mE7FC3F1E7EF4B7A01FE761DDE1EF5A38A5499DDA_gshared_inline)(__this, method);
}
inline void MethodSignature_1__ctor_mF784840EA0615986BE95433A09D5DD5A9F37B87C (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC ___0_header, Il2CppFullySharedGenericAny ___1_returnType, int32_t ___2_requiredParameterCount, int32_t ___3_genericParameterCount, ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B ___4_parameterTypes, const RuntimeMethod* method)
{
	((  void (*) (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB*, SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC, Il2CppFullySharedGenericAny, int32_t, int32_t, ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B, const RuntimeMethod*))MethodSignature_1__ctor_mF784840EA0615986BE95433A09D5DD5A9F37B87C_gshared)((MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB*)__this, ___0_header, ___1_returnType, ___2_requiredParameterCount, ___3_genericParameterCount, ___4_parameterTypes, method);
}
inline RuntimeObject* PointerCaptureEventBase_1_get_relatedTarget_mF2EDDB5F566EA8D9259348F5484661FB10656465_inline (PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744*, const RuntimeMethod*))PointerCaptureEventBase_1_get_relatedTarget_mF2EDDB5F566EA8D9259348F5484661FB10656465_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* PointerCaptureEventBase_1_GetPooled_mBB52B5855A465C8C2ABE3A66D4106169793C9B8C (RuntimeObject* ___0_target, RuntimeObject* ___1_relatedTarget, int32_t ___2_pointerId, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))PointerCaptureEventBase_1_GetPooled_mBB52B5855A465C8C2ABE3A66D4106169793C9B8C_gshared)(___0_target, ___1_relatedTarget, ___2_pointerId, method);
}
inline void PointerCaptureEventBase_1__ctor_m6504E51BF3B701E614E30F22DD97E3E2E68EB5CD (PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744* __this, const RuntimeMethod* method)
{
	((  void (*) (PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744*, const RuntimeMethod*))PointerCaptureEventBase_1__ctor_m6504E51BF3B701E614E30F22DD97E3E2E68EB5CD_gshared)(__this, method);
}
inline int32_t MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
inline bool MouseEventBase_1_get_commandKey_m55FF4BF6C66063A081ADDD1EA8E0E654E2186243 (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_get_commandKey_m55FF4BF6C66063A081ADDD1EA8E0E654E2186243_gshared)(__this, method);
}
inline bool MouseEventBase_1_get_ctrlKey_m96AD34ADFBB5A39300F76AA72AF966C4216AB287 (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_get_ctrlKey_m96AD34ADFBB5A39300F76AA72AF966C4216AB287_gshared)(__this, method);
}
inline RuntimeObject* MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_gshared_inline)(__this, method);
}
inline bool MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_gshared_inline)(__this, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_mouseDelta_mA9B00E7C5EAD63AE805FF883D81C73B88F781F3C_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_get_mouseDelta_mA9B00E7C5EAD63AE805FF883D81C73B88F781F3C_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
inline void MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_gshared_inline)(__this, ___0_value, method);
}
inline Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 MouseEventBase_1_get_panelRay_m15BF165696F29D7A1F371DEC030C1E57CFA7E682_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_get_panelRay_m15BF165696F29D7A1F371DEC030C1E57CFA7E682_gshared_inline)(__this, method);
}
inline void MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768, const RuntimeMethod*))MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_gshared_inline)(__this, ___0_value, method);
}
inline void EventBase_1_Init_m810FE185606F5EB505285FEDEDB759E3DDB0E934 (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F* __this, const RuntimeMethod* method)
{
	((  void (*) (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*, const RuntimeMethod*))EventBase_1_Init_m810FE185606F5EB505285FEDEDB759E3DDB0E934_gshared)(__this, method);
}
inline void MouseEventBase_1_LocalInit_m85C31C18C63B13944050FE4C8F328E12465C8132 (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_LocalInit_m85C31C18C63B13944050FE4C8F328E12465C8132_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline void MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, int32_t, const RuntimeMethod*))MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
inline void MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, int32_t, const RuntimeMethod*))MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, int32_t, const RuntimeMethod*))MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, int32_t, const RuntimeMethod*))MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, RuntimeObject*, const RuntimeMethod*))MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_recomputeTopElementUnderMouse_m5D34798DE02C9783D4F623F4F5BFAD3C254B51E5_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, bool ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, bool, const RuntimeMethod*))MouseEventBase_1_set_recomputeTopElementUnderMouse_m5D34798DE02C9783D4F623F4F5BFAD3C254B51E5_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EventBase_get_currentTarget_m6F265B85FF86C35F62CFDF144B80B383DA9C503B_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_currentTarget_m778A667A791A9A67D61010F9B6A2A69D961C4C14 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VisualElementExtensions_WorldToLocal3D_m19BBC65BE9BCA191894DB2B26EE1E083C4D349F3 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ele, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_PreDispatch_mD788394C54A5400B25B423AF5DC41AA318A33DC4 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, RuntimeObject* ___0_panel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerDeviceState_SavePointerPosition_mFF277BDE588CF09F2301872E64A5F32159ECB9EB (int32_t ___0_pointerId, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, RuntimeObject* ___2_panel, int32_t ___3_contextType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* BaseVisualElementPanel_RecomputeTopElementUnderPointer_mF3D6110A28FCCF72408FE62A21A4F57E4AC717AF (BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* __this, int32_t ___0_pointerId, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_pointerPos, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___2_triggerEvent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementPanel_SetTopElementUnderPointer_m09591A0A171CEB0CAA023C6834B075D8E76ED5D9 (BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* __this, int32_t ___0_pointerId, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___1_element, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_processed_mC99F191F8FCB064BEAC4500D80EBDDC400A461B7 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_mA460392021AC0A8210C9081E3C1C9652DBF32BF6 (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_isPropagationStopped_m36E1E4831DC04452D18B5339E2CAD8979B6BD6B3 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_StopPropagation_mEFC7E5AB7164157065FF19064A6ADCBB0D8AF6FB (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_isImmediatePropagationStopped_m23F718E5FA5FB49FE12BA560B8362B95E0C7F5D3 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_StopImmediatePropagation_m2D6646624DDC02AE96657F5EAD5BC0361380A8DA (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_processedByFocusController_mB2BCAFE58D45919AC9F5AC0AAEF059D8A640AE53 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_processedByFocusController_mEC214B328484B60572EEE867ACB5527396436155 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseVisualElementPanel_CommitElementUnderPointers_m41A1D0D2884A1C35218D330EE29DF393F75E7892 (BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_PostDispatch_mC830955EA32723BF0C10CCB37E01197CBADC07B3 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, RuntimeObject* ___0_panel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventDispatchUtilities_DispatchToCapturingElementOrElementUnderPointer_m1DB1C303971CD300023CEE6011018230F9047D4B (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___1_panel, int32_t ___2_pointerId, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_position, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C (const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (const RuntimeMethod*))EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_imguiEvent_m72FEAD8F7611927C077B45BAA719C15D39E9F4F4 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_modifiers_m828B3E2EDBC78305FAC111D0938EF69EE34C820F (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Event_get_delta_m1BBF28E2FC379EDD3907DC987E6BD7E6521D69A0 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_button_m57F81B5CCB26866E776D0EBD1250C708A3565C08 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerDeviceState_GetPressedButtons_m4967FF91F44AE300DCDB3F5136823221134666BC (int32_t ___0_pointerId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_clickCount_mEF418EB4A36318F07E5F3463E4E5E8A4C454DE7D (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m13C3E655268E03D8CDA8E82FBC4C2B8B0C910511 (RuntimeObject* ___0_triggerEvent, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (RuntimeObject*, const RuntimeMethod*))MouseEventBase_1_GetPooled_m13C3E655268E03D8CDA8E82FBC4C2B8B0C910511_gshared)(___0_triggerEvent, method);
}
inline Il2CppSharedGenericObject* EventBase_1_GetPooled_m567E588C708778F6F41E2D69650776EBF437F74C (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_e, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*, const RuntimeMethod*))EventBase_1_GetPooled_m567E588C708778F6F41E2D69650776EBF437F74C_gshared)(___0_e, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* EventBase_get_elementTarget_mF6CFD6372FB247718797DB8927654F781821B94D_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* EventBase_get_imguiEvent_m45ABCDC6423D27EF44F7E29661B249D238765DB0 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
inline void EventBase_1__ctor_mACA9307C9EF30E9F5D55E8FA6AE6E58A99BA40CD (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F* __this, const RuntimeMethod* method)
{
	((  void (*) (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*, const RuntimeMethod*))EventBase_1__ctor_mACA9307C9EF30E9F5D55E8FA6AE6E58A99BA40CD_gshared)(__this, method);
}
inline void Requires_NotNull_TisImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87_mEDB8B078EA0838C9FE22EC2C0F683144828F4069 (ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline void MutationInput__ctor_mEE9E0D47DA32453A9B79295BDF835C0830E70EAF (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034*, ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87*, const RuntimeMethod*))MutationInput__ctor_mEE9E0D47DA32453A9B79295BDF835C0830E70EAF_gshared)(__this, ___0_set, method);
}
inline void Requires_NotNull_TisSortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169_m3802522CB8E58A2270529331D7821DAB2028D2E0 (SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline void Requires_NotNull_TisIEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122_mA3F3C9A20AC4B85A865AB750DB5C26DECF6620F0 (RuntimeObject* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75 (bool ___0_condition, String_t* ___1_parameterName, String_t* ___2_message, const RuntimeMethod* method) ;
inline void Requires_NotNull_TisIEqualityComparer_1_t4DE5D611F582A8EF69C28B2A51F059A0FF0F44AA_m537E6BFC00399F72F19B7C137CA8085CD6C2FDCC (RuntimeObject* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline void MutationInput__ctor_m6472255CFE31C92B91258C27021E3AA2B049BDF1 (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___0_root, RuntimeObject* ___1_equalityComparer, RuntimeObject* ___2_hashBucketEqualityComparer, int32_t ___3_count, const RuntimeMethod* method)
{
	((  void (*) (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034*, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))MutationInput__ctor_m6472255CFE31C92B91258C27021E3AA2B049BDF1_gshared)(__this, ___0_root, ___1_equalityComparer, ___2_hashBucketEqualityComparer, ___3_count, method);
}
inline SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* MutationInput_get_Root_m915B63D2C097FFE14D3526BDFB912A263B1DF78A_inline (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, const RuntimeMethod* method)
{
	return ((  SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* (*) (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034*, const RuntimeMethod*))MutationInput_get_Root_m915B63D2C097FFE14D3526BDFB912A263B1DF78A_gshared_inline)(__this, method);
}
inline RuntimeObject* MutationInput_get_EqualityComparer_m47B4CEE19DCCAED7570F3BF7620C415F5F652C4C_inline (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034*, const RuntimeMethod*))MutationInput_get_EqualityComparer_m47B4CEE19DCCAED7570F3BF7620C415F5F652C4C_gshared_inline)(__this, method);
}
inline int32_t MutationInput_get_Count_m6E3318EDC672F6F6AF1118A44C07EC9EC0A7DEB8_inline (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034*, const RuntimeMethod*))MutationInput_get_Count_m6E3318EDC672F6F6AF1118A44C07EC9EC0A7DEB8_gshared_inline)(__this, method);
}
inline RuntimeObject* MutationInput_get_HashBucketEqualityComparer_m8D626B7818EAFA846C80901283441C465944BD89_inline (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034*, const RuntimeMethod*))MutationInput_get_HashBucketEqualityComparer_m8D626B7818EAFA846C80901283441C465944BD89_gshared_inline)(__this, method);
}
inline void MutationInput__ctor_m9E6FF2513A09220079EEF98A1A5E5CD400C6215A (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* ___0_root, Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* ___1_comparers, const RuntimeMethod* method)
{
	((  void (*) (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8*, SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909*, Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9*, const RuntimeMethod*))MutationInput__ctor_m9E6FF2513A09220079EEF98A1A5E5CD400C6215A_gshared)(__this, ___0_root, ___1_comparers, method);
}
inline void MutationInput__ctor_m976F9BDBB85CE0DCB7B787F065EA8B09B05CEED7 (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* ___0_map, const RuntimeMethod* method)
{
	((  void (*) (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8*, ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352*, const RuntimeMethod*))MutationInput__ctor_m976F9BDBB85CE0DCB7B787F065EA8B09B05CEED7_gshared)(__this, ___0_map, method);
}
inline SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* MutationInput_get_Root_m2DBEE6A809C40133F0D17E4F4C741268EDC05EE0_inline (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method)
{
	return ((  SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* (*) (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8*, const RuntimeMethod*))MutationInput_get_Root_m2DBEE6A809C40133F0D17E4F4C741268EDC05EE0_gshared_inline)(__this, method);
}
inline Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* MutationInput_get_Comparers_mEB1A03202DA1299DC403F2C80621A69391D8EC3F_inline (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method)
{
	return ((  Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* (*) (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8*, const RuntimeMethod*))MutationInput_get_Comparers_mEB1A03202DA1299DC403F2C80621A69391D8EC3F_gshared_inline)(__this, method);
}
inline RuntimeObject* Comparers_get_KeyComparer_m829F4ED35876B6C90CA646A7851CEFD576B79BDE_inline (Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9*, const RuntimeMethod*))Comparers_get_KeyComparer_m829F4ED35876B6C90CA646A7851CEFD576B79BDE_gshared_inline)(__this, method);
}
inline RuntimeObject* MutationInput_get_KeyComparer_mA342CB28F9A069EC90C7614B6C2D99677183ECB7 (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8*, const RuntimeMethod*))MutationInput_get_KeyComparer_mA342CB28F9A069EC90C7614B6C2D99677183ECB7_gshared)(__this, method);
}
inline RuntimeObject* Comparers_get_KeyOnlyComparer_mC391557AD111F4CC8FD23623C98D5F1B9222FA0F (Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9*, const RuntimeMethod*))Comparers_get_KeyOnlyComparer_mC391557AD111F4CC8FD23623C98D5F1B9222FA0F_gshared)(__this, method);
}
inline RuntimeObject* MutationInput_get_KeyOnlyComparer_m98E70DBE989987BB78A69F1E2CF1D4A7D225E466 (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8*, const RuntimeMethod*))MutationInput_get_KeyOnlyComparer_m98E70DBE989987BB78A69F1E2CF1D4A7D225E466_gshared)(__this, method);
}
inline RuntimeObject* Comparers_get_ValueComparer_mE06E2FB2EF1F59557310213BAFDC5F3AF3049B36_inline (Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9*, const RuntimeMethod*))Comparers_get_ValueComparer_mE06E2FB2EF1F59557310213BAFDC5F3AF3049B36_gshared_inline)(__this, method);
}
inline RuntimeObject* MutationInput_get_ValueComparer_m930AA681011080A7890E558ECF3FFE0BDBEAC2C8 (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8*, const RuntimeMethod*))MutationInput_get_ValueComparer_m930AA681011080A7890E558ECF3FFE0BDBEAC2C8_gshared)(__this, method);
}
inline RuntimeObject* Comparers_get_HashBucketEqualityComparer_mE932162ABE21D060EF511CC15AED3D6BC4109BF9 (Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9*, const RuntimeMethod*))Comparers_get_HashBucketEqualityComparer_mE932162ABE21D060EF511CC15AED3D6BC4109BF9_gshared)(__this, method);
}
inline RuntimeObject* MutationInput_get_HashBucketComparer_m530EB5827ABD112A74ED8AA74B351D028EEFC54A (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8*, const RuntimeMethod*))MutationInput_get_HashBucketComparer_m530EB5827ABD112A74ED8AA74B351D028EEFC54A_gshared)(__this, method);
}
inline void MutationResult__ctor_m427273493990392572644670EFD60CFE8C70A782 (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* __this, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___0_root, int32_t ___1_count, int32_t ___2_countType, const RuntimeMethod* method)
{
	((  void (*) (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC*, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169*, int32_t, int32_t, const RuntimeMethod*))MutationResult__ctor_m427273493990392572644670EFD60CFE8C70A782_gshared)(__this, ___0_root, ___1_count, ___2_countType, method);
}
inline SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* MutationResult_get_Root_m6ECFD16A9CDEE2383F0C7E9EC6A57A1B16A8A230_inline (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* __this, const RuntimeMethod* method)
{
	return ((  SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* (*) (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC*, const RuntimeMethod*))MutationResult_get_Root_m6ECFD16A9CDEE2383F0C7E9EC6A57A1B16A8A230_gshared_inline)(__this, method);
}
inline int32_t MutationResult_get_Count_mAB2B07AB4A5614A22BBC89D6924E1D4B58C2AC44_inline (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC*, const RuntimeMethod*))MutationResult_get_Count_mAB2B07AB4A5614A22BBC89D6924E1D4B58C2AC44_gshared_inline)(__this, method);
}
inline int32_t MutationResult_get_CountType_mFE8C9AD264FA165FA10B0C1817C2240250B9E830_inline (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC*, const RuntimeMethod*))MutationResult_get_CountType_mFE8C9AD264FA165FA10B0C1817C2240250B9E830_gshared_inline)(__this, method);
}
inline ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* ImmutableHashSet_1_Wrap_m9DF77AF2CB4C36AC060A3CAB0D3BF09AB264D91E (ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* __this, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___0_root, int32_t ___1_adjustedCountIfDifferentRoot, const RuntimeMethod* method)
{
	return ((  ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* (*) (ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87*, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169*, int32_t, const RuntimeMethod*))ImmutableHashSet_1_Wrap_m9DF77AF2CB4C36AC060A3CAB0D3BF09AB264D91E_gshared)(__this, ___0_root, ___1_adjustedCountIfDifferentRoot, method);
}
inline ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* MutationResult_Finalize_m7A72CC861631BC27057EA24C65FDDD5BF09B4B4F (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* __this, ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* ___0_priorSet, const RuntimeMethod* method)
{
	return ((  ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* (*) (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC*, ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87*, const RuntimeMethod*))MutationResult_Finalize_m7A72CC861631BC27057EA24C65FDDD5BF09B4B4F_gshared)(__this, ___0_priorSet, method);
}
inline void MutationResult__ctor_m2583CDC476B88D26086C73E03A85F8B9DEA9D898 (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* __this, MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8 ___0_unchangedInput, const RuntimeMethod* method)
{
	((  void (*) (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689*, MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8, const RuntimeMethod*))MutationResult__ctor_m2583CDC476B88D26086C73E03A85F8B9DEA9D898_gshared)(__this, ___0_unchangedInput, method);
}
inline void Requires_NotNull_TisSortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909_mEDFCE7C620F2CB615B2B47BAC3BBE4E797E0937D (SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline void MutationResult__ctor_m9153B91EA8BB27CF07C041205A69847B638EEEE5 (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* __this, SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* ___0_root, int32_t ___1_countAdjustment, const RuntimeMethod* method)
{
	((  void (*) (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689*, SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909*, int32_t, const RuntimeMethod*))MutationResult__ctor_m9153B91EA8BB27CF07C041205A69847B638EEEE5_gshared)(__this, ___0_root, ___1_countAdjustment, method);
}
inline SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* MutationResult_get_Root_mEDAF44C3864D254F056571D526ECE5CADA021F28_inline (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* __this, const RuntimeMethod* method)
{
	return ((  SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* (*) (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689*, const RuntimeMethod*))MutationResult_get_Root_mEDAF44C3864D254F056571D526ECE5CADA021F28_gshared_inline)(__this, method);
}
inline int32_t MutationResult_get_CountAdjustment_mCD5E1C6BFFE241697033430752F4D5E91C29A161_inline (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689*, const RuntimeMethod*))MutationResult_get_CountAdjustment_mCD5E1C6BFFE241697033430752F4D5E91C29A161_gshared_inline)(__this, method);
}
inline void Requires_NotNull_TisImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352_mF2E2DAAE001EDF0562C130F1FCE0373EA7F0E8DA (ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* ImmutableDictionary_2_Wrap_m6CB444A5A32FE025711F9CD460C9861FC64960B7 (ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* __this, SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* ___0_root, int32_t ___1_adjustedCountIfDifferentRoot, const RuntimeMethod* method)
{
	return ((  ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* (*) (ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352*, SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909*, int32_t, const RuntimeMethod*))ImmutableDictionary_2_Wrap_m6CB444A5A32FE025711F9CD460C9861FC64960B7_gshared)(__this, ___0_root, ___1_adjustedCountIfDifferentRoot, method);
}
inline ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* MutationResult_Finalize_mED16442D5B8129D5638328DE05668A2C2B70134D (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* __this, ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* ___0_priorMap, const RuntimeMethod* method)
{
	return ((  ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* (*) (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689*, ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352*, const RuntimeMethod*))MutationResult_Finalize_mED16442D5B8129D5638328DE05668A2C2B70134D_gshared)(__this, ___0_priorMap, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryLabel_SupportsAllocator_m2FBEAFCA15699420E8C5E42BA823DEE2999B6E6D (int32_t ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryLabel__ctor_m9EBEB7071302DF5EC12EB34EB2949E01617C5191 (MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2* __this, String_t* ___0_areaName, String_t* ___1_objectName, int32_t ___2_allocator, const RuntimeMethod* method) ;
inline void NativeArrayAllocator__ctor_m44FA9B3E65248C9541D203A60A05E8067106EF43 (NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492* __this, String_t* ___0_profilerName, int32_t ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492*, String_t*, int32_t, const RuntimeMethod*))NativeArrayAllocator__ctor_m44FA9B3E65248C9541D203A60A05E8067106EF43_gshared)(__this, ___0_profilerName, ___1_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryLabel_get_IsCreated_m8B3D6AC21CEADC1D4C4EF4A3D2B168EBFADC26BA (MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2* __this, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_m01C0164611F0F10354E4ABA539FA854E3A97F76A (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___1_label, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m01C0164611F0F10354E4ABA539FA854E3A97F76A_gshared)(__this, ___0_length, ___1_label, ___2_options, method);
}
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayAllocator_CreateArray_m23A47AB9FCCC96DE09A09E691F423EEE92972DFE (NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492* __this, int32_t ___0_length, int32_t ___1_options, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492*, int32_t, int32_t, const RuntimeMethod*))NativeArrayAllocator_CreateArray_m23A47AB9FCCC96DE09A09E691F423EEE92972DFE_gshared)(__this, ___0_length, ___1_options, method);
}
inline bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
inline bool ReadOnly_get_IsCreated_mADD8624D940450CB4F64C20BCFEFAC0065E485A2_inline (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*, const RuntimeMethod*))ReadOnly_get_IsCreated_mADD8624D940450CB4F64C20BCFEFAC0065E485A2_gshared_inline)(__this, method);
}
inline __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ReadOnly_ToArray_mFD80D7B7BE13A74B4BE53E54CE3BCB5300F46D27 (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* __this, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*, const RuntimeMethod*))ReadOnly_ToArray_mFD80D7B7BE13A74B4BE53E54CE3BCB5300F46D27_gshared)(__this, method);
}
inline SharedStatic_1_t91D24BF9DAB0EDD81AA3013F2C4CBD0A98040667 SharedStatic_1_GetOrCreate_TisNativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18_m53A5B8A8CCAAEB875DD690A67F8574294C61B9A4 (uint32_t ___0_alignment, const RuntimeMethod* method)
{
	return ((  SharedStatic_1_t91D24BF9DAB0EDD81AA3013F2C4CBD0A98040667 (*) (uint32_t, const RuntimeMethod*))SharedStatic_1_GetOrCreate_TisIl2CppFullySharedGenericAny_m81680C541BEC597AC94046D6444ED6041C195C4D_gshared)(___0_alignment, method);
}
inline void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_inline (const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline)(method);
}
inline void Buffer_Memmove_TisIl2CppFullySharedGenericAny_m7051201F0F2C986AB0084FB4A24BEE4D4733C5EB (Il2CppFullySharedGenericAny* ___0_destination, Il2CppFullySharedGenericAny* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisIl2CppFullySharedGenericAny_m7051201F0F2C986AB0084FB4A24BEE4D4733C5EB_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1__ctor_m40B48A3F93602CA3B11082174419F92C87991ED4_gshared (ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9* __this, int32_t ___0_chunkSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedObjectStore_1_t9DAE7A373B9F884EA2D98897CCA9D4EA76BF716F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_chunkSize));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136255));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136256));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136257));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136258));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136258));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136259));
		int32_t L_0 = ___0_chunkSize;
		__this->___m_ChunkSize = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136260));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136261));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_1 = (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		List_1__ctor_mE47F2A05D047C5831E195F8F2577C836892F8A76(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136261));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_2 = L_1;
		int32_t L_3 = __this->___m_ChunkSize;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136262));
		NullCheck(L_2);
		List_1_Add_mFD92FC4DF9C51E76D74F6584FB6C713C6A955AB7_inline(L_2, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136262));
		__this->___m_Chunks = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Chunks), (void*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136263));
		__this->___m_Length = 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136264));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136265));
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_5 = (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*)il2cpp_codegen_object_new(Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D(L_5, Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136265));
		__this->___m_Free = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Free), (void*)L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136266));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1_GetValue_mE2FBA0F28BC33EEC4E02CE2979EA177A50E7F634_gshared (ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedObjectStore_1_t9DAE7A373B9F884EA2D98897CCA9D4EA76BF716F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	const Il2CppFullySharedGenericAny L_11 = L_1;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	memset(V_2, 0, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136267));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136268));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136269));
		int32_t L_0 = ___0_index;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136270));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(L_1, V_2, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		return;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136271));
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___m_ChunkSize;
		V_0 = ((int32_t)(L_2/L_3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136272));
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___m_ChunkSize;
		V_1 = ((int32_t)(L_4%L_5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136273));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_6 = __this->___m_Chunks;
		int32_t L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136274));
		NullCheck(L_6);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8;
		L_8 = List_1_get_Item_m24182315BE1ED5609F0ACF39331685141AA53443(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136274));
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1_UpdateValue_mA68231A6328DCD1A80E8B50EAB8B031C382F071E_gshared (ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9* __this, int32_t* ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedObjectStore_1_t9DAE7A373B9F884EA2D98897CCA9D4EA76BF716F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	const Il2CppFullySharedGenericAny L_14 = L_2;
	const Il2CppFullySharedGenericAny L_28 = L_2;
	const Il2CppFullySharedGenericAny L_30 = L_2;
	const Il2CppFullySharedGenericAny L_47 = L_2;
	const Il2CppFullySharedGenericAny L_70 = L_2;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	memset(V_4, 0, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___1_value : &___1_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_5), (&V_6), (&V_7), (&V_8));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136275));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136276));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136277));
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		if (!L_1)
		{
			goto IL_0075;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136278));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), L_2);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136279));
		int32_t* L_4 = ___0_index;
		int32_t L_5 = il2cpp_codegen_ldind<int32_t, int32_t>(L_4);
		int32_t L_6 = __this->___m_ChunkSize;
		V_0 = ((int32_t)(L_5/L_6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136280));
		int32_t* L_7 = ___0_index;
		int32_t L_8 = il2cpp_codegen_ldind<int32_t, int32_t>(L_7);
		int32_t L_9 = __this->___m_ChunkSize;
		V_1 = ((int32_t)(L_8%L_9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136281));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_10 = __this->___m_Chunks;
		int32_t L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136282));
		NullCheck(L_10);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12;
		L_12 = List_1_get_Item_m24182315BE1ED5609F0ACF39331685141AA53443(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136282));
		int32_t L_13 = V_1;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		NullCheck(L_12);
		il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136283));
		return;
	}

IL_0034:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136284));
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_15 = __this->___m_Free;
		int32_t* L_16 = ___0_index;
		int32_t L_17 = il2cpp_codegen_ldind<int32_t, int32_t>(L_16);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136285));
		NullCheck(L_15);
		Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_15, L_17, Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136285));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136286));
		int32_t* L_18 = ___0_index;
		int32_t L_19 = il2cpp_codegen_ldind<int32_t, int32_t>(L_18);
		int32_t L_20 = __this->___m_ChunkSize;
		V_2 = ((int32_t)(L_19/L_20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136287));
		int32_t* L_21 = ___0_index;
		int32_t L_22 = il2cpp_codegen_ldind<int32_t, int32_t>(L_21);
		int32_t L_23 = __this->___m_ChunkSize;
		V_3 = ((int32_t)(L_22%L_23));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136288));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_24 = __this->___m_Chunks;
		int32_t L_25 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136289));
		NullCheck(L_24);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26;
		L_26 = List_1_get_Item_m24182315BE1ED5609F0ACF39331685141AA53443(L_24, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136289));
		int32_t L_27 = V_3;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(L_28, V_4, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		NullCheck(L_26);
		il2cpp_codegen_memcpy((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), L_28, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), (void**)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), (void*)L_28);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136290));
		int32_t* L_29 = ___0_index;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_29, (int32_t)0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136291));
		return;
	}

IL_0075:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136292));
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), L_30);
		if (!L_31)
		{
			goto IL_0134;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136293));
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_32 = __this->___m_Free;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136294));
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline(L_32, Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136294));
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136295));
		int32_t* L_34 = ___0_index;
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_35 = __this->___m_Free;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136296));
		NullCheck(L_35);
		int32_t L_36;
		L_36 = Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650(L_35, Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136296));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_34, (int32_t)L_36);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136297));
		int32_t* L_37 = ___0_index;
		int32_t L_38 = il2cpp_codegen_ldind<int32_t, int32_t>(L_37);
		int32_t L_39 = __this->___m_ChunkSize;
		V_5 = ((int32_t)(L_38/L_39));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136298));
		int32_t* L_40 = ___0_index;
		int32_t L_41 = il2cpp_codegen_ldind<int32_t, int32_t>(L_40);
		int32_t L_42 = __this->___m_ChunkSize;
		V_6 = ((int32_t)(L_41%L_42));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136299));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_43 = __this->___m_Chunks;
		int32_t L_44 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136300));
		NullCheck(L_43);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_45;
		L_45 = List_1_get_Item_m24182315BE1ED5609F0ACF39331685141AA53443(L_43, L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136300));
		int32_t L_46 = V_6;
		il2cpp_codegen_memcpy(L_47, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		NullCheck(L_45);
		il2cpp_codegen_memcpy((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)), L_47, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), (void**)(L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)), (void*)L_47);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136301));
		return;
	}

IL_00c7:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136302));
		int32_t* L_48 = ___0_index;
		int32_t L_49 = __this->___m_Length;
		V_9 = L_49;
		int32_t L_50 = V_9;
		__this->___m_Length = ((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = V_9;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_48, (int32_t)L_51);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136303));
		int32_t* L_52 = ___0_index;
		int32_t L_53 = il2cpp_codegen_ldind<int32_t, int32_t>(L_52);
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_54 = __this->___m_Chunks;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136304));
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m5F28C6E82FCE45373CD5786E08E8BA6799F70422_inline(L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136304));
		int32_t L_56 = __this->___m_ChunkSize;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_55, L_56)))))
		{
			goto IL_0109;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136305));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_57 = __this->___m_Chunks;
		int32_t L_58 = __this->___m_ChunkSize;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_59 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_58);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136306));
		NullCheck(L_57);
		List_1_Add_mFD92FC4DF9C51E76D74F6584FB6C713C6A955AB7_inline(L_57, L_59, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136306));
	}

IL_0109:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136307));
		int32_t* L_60 = ___0_index;
		int32_t L_61 = il2cpp_codegen_ldind<int32_t, int32_t>(L_60);
		int32_t L_62 = __this->___m_ChunkSize;
		V_7 = ((int32_t)(L_61/L_62));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136308));
		int32_t* L_63 = ___0_index;
		int32_t L_64 = il2cpp_codegen_ldind<int32_t, int32_t>(L_63);
		int32_t L_65 = __this->___m_ChunkSize;
		V_8 = ((int32_t)(L_64%L_65));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136309));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_66 = __this->___m_Chunks;
		int32_t L_67 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136310));
		NullCheck(L_66);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_68;
		L_68 = List_1_get_Item_m24182315BE1ED5609F0ACF39331685141AA53443(L_66, L_67, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136310));
		int32_t L_69 = V_8;
		il2cpp_codegen_memcpy(L_70, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		NullCheck(L_68);
		il2cpp_codegen_memcpy((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)), L_70, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), (void**)(L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)), (void*)L_70);
	}

IL_0134:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 136311));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerCallback__ctor_m1F820EB08174C90592C002D12055C4DA5201C0D5_gshared (ManagerCallback_t28D36691D76482F717019D47129402A9538A3736* __this, PopupNotification_1_tA47F61CDEEF4744EF013C872073F20EFCB577774* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagerCallback_t51748194B8FE73F1BBCCF99A28F803329728027E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_element));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54007));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 54008));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54009));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54010));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54010));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54011));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54012));
		PopupNotification_1_tA47F61CDEEF4744EF013C872073F20EFCB577774* L_0 = ___0_element;
		__this->___U3CobjU3Ek__BackingField = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CobjU3Ek__BackingField), (void*)(RuntimeObject*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54013));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerCallback_Show_m30C0849DB566921460368C12B8F085B057C61FCE_gshared (ManagerCallback_t28D36691D76482F717019D47129402A9538A3736* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagerCallback_t51748194B8FE73F1BBCCF99A28F803329728027E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	PopupNotification_1_tA47F61CDEEF4744EF013C872073F20EFCB577774* V_0 = NULL;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54014));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 54015));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54016));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54017));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54018));
		RuntimeObject* L_0;
		L_0 = ManagerCallback_get_obj_mCC14E9648BBB5AA50205A291CE07E156786DE171_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54018));
		V_0 = ((PopupNotification_1_tA47F61CDEEF4744EF013C872073F20EFCB577774*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		PopupNotification_1_tA47F61CDEEF4744EF013C872073F20EFCB577774* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(PopupNotification_1_tA47F61CDEEF4744EF013C872073F20EFCB577774*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54019));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54020));
		PopupNotification_1_tA47F61CDEEF4744EF013C872073F20EFCB577774* L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54021));
		NullCheck((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)L_3);
		VirtualActionInvoker0::Invoke(9, (Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54021));
	}

IL_001c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54022));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerCallback_Dismiss_mCCF62F55C348DD345D124AA3C6D79CD5AAFB121A_gshared (ManagerCallback_t28D36691D76482F717019D47129402A9538A3736* __this, int32_t ___0_reason, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagerCallback_t51748194B8FE73F1BBCCF99A28F803329728027E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	PopupNotification_1_tA47F61CDEEF4744EF013C872073F20EFCB577774* V_0 = NULL;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_reason));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54023));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 54024));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54025));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54026));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54027));
		RuntimeObject* L_0;
		L_0 = ManagerCallback_get_obj_mCC14E9648BBB5AA50205A291CE07E156786DE171_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54027));
		V_0 = ((PopupNotification_1_tA47F61CDEEF4744EF013C872073F20EFCB577774*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		PopupNotification_1_tA47F61CDEEF4744EF013C872073F20EFCB577774* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(PopupNotification_1_tA47F61CDEEF4744EF013C872073F20EFCB577774*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54028));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54029));
		PopupNotification_1_tA47F61CDEEF4744EF013C872073F20EFCB577774* L_3 = V_0;
		int32_t L_4 = ___0_reason;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54030));
		NullCheck((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)L_3);
		VirtualActionInvoker1< int32_t >::Invoke(17, (Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)L_3, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54030));
	}

IL_001d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54031));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManagerCallback_get_obj_mCC14E9648BBB5AA50205A291CE07E156786DE171_gshared (ManagerCallback_t28D36691D76482F717019D47129402A9538A3736* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagerCallback_t51748194B8FE73F1BBCCF99A28F803329728027E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54032));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 54033));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54034));
		RuntimeObject* L_0 = __this->___U3CobjU3Ek__BackingField;
		return L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryDebugView_1__ctor_m140E2EB6E4E0C3F7C7E2F183F485EF890BEE51B5_gshared (MemoryDebugView_1_tE58388022143D55B8020F917C382224DE98A8F88* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_memory, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_0 = ___0_memory;
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_1;
		L_1 = Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____memory = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____memory))->____object), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryDebugView_1__ctor_mCA152F7E3380441D5E7938A6AC3868CCA73270EA_gshared (MemoryDebugView_1_tE58388022143D55B8020F917C382224DE98A8F88* __this, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ___0_memory, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_0 = ___0_memory;
		__this->____memory = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____memory))->____object), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* MemoryDebugView_1_get_Items_m14462BA003B9133B5990F6FD7D3E381904F52247_gshared (MemoryDebugView_1_tE58388022143D55B8020F917C382224DE98A8F88* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* L_0 = (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*)(&__this->____memory);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ReadOnlyMemory_1_ToArray_m44807420910F7442D09F80751674CF30711B0764(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryManager_1_TryGetArray_mD5E21D825D64F54D13E8D64297A71424E0CA60C9_gshared (MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* __this, ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* ___0_segment, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* L_0 = ___0_segment;
		il2cpp_codegen_initobj(L_0, sizeof(ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178));
		return (bool)0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	memset(V_0, 0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_1);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck((RuntimeObject*)L_3);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type((RuntimeObject*)L_3);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		__this->____object = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_8);
		__this->____index = 0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		__this->____length = L_10;
		return;
	}
}
IL2CPP_EXTERN_C  void Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_AdjustorThunk (RuntimeObject* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_inline(_thisAdjusted, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1__ctor_m39F9C3933A6F0AD9E9CE3A5B597A770C54F6FECF_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	memset(V_0, 0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000b:
	{
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA));
		return;
	}

IL_0013:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_2);
		if (L_3)
		{
			goto IL_003f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type((RuntimeObject*)L_4);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_003f:
	{
		int32_t L_9 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((!(((uint32_t)L_9) > ((uint32_t)L_11))))
		{
			goto IL_004a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_004a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_array;
		__this->____object = (RuntimeObject*)L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_12);
		int32_t L_13 = ___1_start;
		__this->____index = L_13;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___0_array;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		int32_t L_16 = ___1_start;
		__this->____length = ((int32_t)il2cpp_codegen_subtract(L_15, L_16));
		return;
	}
}
IL2CPP_EXTERN_C  void Memory_1__ctor_m39F9C3933A6F0AD9E9CE3A5B597A770C54F6FECF_AdjustorThunk (RuntimeObject* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	Memory_1__ctor_m39F9C3933A6F0AD9E9CE3A5B597A770C54F6FECF_inline(_thisAdjusted, ___0_array, ___1_start, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1__ctor_m5ABFBF1303AB4B2B8AD03A4586CC52B6098DCBE9_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	memset(V_0, 0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_3);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = il2cpp_codegen_object_get_type((RuntimeObject*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_10 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		if ((!(((uint32_t)L_10) <= ((uint32_t)L_12))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___0_array;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		int32_t L_16 = ___1_start;
		if ((!(((uint32_t)L_13) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_15, L_16))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_array;
		__this->____object = (RuntimeObject*)L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_17);
		int32_t L_18 = ___1_start;
		__this->____index = L_18;
		int32_t L_19 = ___2_length;
		__this->____length = L_19;
		return;
	}
}
IL2CPP_EXTERN_C  void Memory_1__ctor_m5ABFBF1303AB4B2B8AD03A4586CC52B6098DCBE9_AdjustorThunk (RuntimeObject* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	Memory_1__ctor_m5ABFBF1303AB4B2B8AD03A4586CC52B6098DCBE9_inline(_thisAdjusted, ___0_array, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1__ctor_m7EA183117D6958FFAC919F291510339F7792C7CD_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* ___0_manager, int32_t ___1_length, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0009:
	{
		MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* L_1 = ___0_manager;
		__this->____object = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_1);
		__this->____index = ((int32_t)-2147483648LL);
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void Memory_1__ctor_m7EA183117D6958FFAC919F291510339F7792C7CD_AdjustorThunk (RuntimeObject* __this, MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* ___0_manager, int32_t ___1_length, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	Memory_1__ctor_m7EA183117D6958FFAC919F291510339F7792C7CD_inline(_thisAdjusted, ___0_manager, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1__ctor_m58BECFC48979D14A69D6AC373301B755043ACA9B_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* ___0_manager, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}

IL_0008:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000d:
	{
		MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* L_2 = ___0_manager;
		__this->____object = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_2);
		int32_t L_3 = ___1_start;
		__this->____index = ((int32_t)(L_3|((int32_t)-2147483648LL)));
		int32_t L_4 = ___2_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C  void Memory_1__ctor_m58BECFC48979D14A69D6AC373301B755043ACA9B_AdjustorThunk (RuntimeObject* __this, MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* ___0_manager, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	Memory_1__ctor_m58BECFC48979D14A69D6AC373301B755043ACA9B_inline(_thisAdjusted, ___0_manager, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_obj;
		__this->____object = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)L_0);
		int32_t L_1 = ___1_start;
		__this->____index = L_1;
		int32_t L_2 = ___2_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_inline(_thisAdjusted, ___0_obj, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_op_Implicit_mFD3FBCC47F7B2A4351BE34A9200917FFA907A50A_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_1;
		memset((&L_1), 0, sizeof(L_1));
		Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_op_Implicit_mB6CDF2865486C74752AB253AC61A6966DBEE807D_gshared (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 ___0_segment, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0;
		L_0 = ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_inline((&___0_segment), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_1;
		L_1 = ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_inline((&___0_segment), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		int32_t L_2;
		L_2 = ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_inline((&___0_segment), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_3;
		memset((&L_3), 0, sizeof(L_3));
		Memory_1__ctor_m5ABFBF1303AB4B2B8AD03A4586CC52B6098DCBE9_inline((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_memory, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* L_0;
		L_0 = il2cpp_unsafe_as_ref<ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4>((&___0_memory));
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_1 = (*(ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_get_Empty_m67500127B35304DF2A50784BCC61BD5754EAF3F5_gshared (const RuntimeMethod* method) 
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA));
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_get_Length_m0D3942C435EEDB938ADDA2CE7C625761CEAB520E_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____length;
		return ((int32_t)(L_0&((int32_t)2147483647LL)));
	}
}
IL2CPP_EXTERN_C  int32_t Memory_1_get_Length_m0D3942C435EEDB938ADDA2CE7C625761CEAB520E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	int32_t _returnValue;
	_returnValue = Memory_1_get_Length_m0D3942C435EEDB938ADDA2CE7C625761CEAB520E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_get_IsEmpty_mFE27DC49FE38E33AD226323A42DB57922F00B0C8_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____length;
		return (bool)((((int32_t)((int32_t)(L_0&((int32_t)2147483647LL)))) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Memory_1_get_IsEmpty_mFE27DC49FE38E33AD226323A42DB57922F00B0C8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	bool _returnValue;
	_returnValue = Memory_1_get_IsEmpty_mFE27DC49FE38E33AD226323A42DB57922F00B0C8(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Memory_1_ToString_m8587562831B505E363617A254DE467726D4C6351_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACAE3DE011E4C429609CA3219C3F13E876D2AF69);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_1, il2cpp_defaults.string_class));
		String_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_3;
		L_3 = Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		V_1 = L_3;
		String_t* L_4;
		L_4 = Span_1_ToString_m51B73F86825C26B44AF2E5C9152D807780EB84ED((&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_4;
	}

IL_003f:
	{
		String_t* L_5 = V_0;
		int32_t L_6 = __this->____index;
		int32_t L_7 = __this->____length;
		NullCheck(L_5);
		String_t* L_8;
		L_8 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_5, L_6, ((int32_t)(L_7&((int32_t)2147483647LL))), NULL);
		return L_8;
	}

IL_0058:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 4)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck((MemberInfo_t*)L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_10);
		int32_t L_12 = __this->____length;
		int32_t L_13 = ((int32_t)(L_12&((int32_t)2147483647LL)));
		RuntimeObject* L_14 = Box(il2cpp_defaults.int32_class, &L_13);
		String_t* L_15;
		L_15 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralACAE3DE011E4C429609CA3219C3F13E876D2AF69, (RuntimeObject*)L_11, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C  String_t* Memory_1_ToString_m8587562831B505E363617A254DE467726D4C6351_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	String_t* _returnValue;
	_returnValue = Memory_1_ToString_m8587562831B505E363617A254DE467726D4C6351(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_Slice_mB1A59814638EB046790D5DB854A8D42BA2CB686F_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____length;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1&((int32_t)2147483647LL)));
		int32_t L_2 = ___0_start;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_001a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)24), NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____object;
		int32_t L_5 = __this->____index;
		int32_t L_6 = ___0_start;
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_start;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_9;
		memset((&L_9), 0, sizeof(L_9));
		Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_inline((&L_9), L_4, ((int32_t)il2cpp_codegen_add(L_5, L_6)), ((int32_t)il2cpp_codegen_subtract(L_7, L_8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		return L_9;
	}
}
IL2CPP_EXTERN_C  Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_Slice_mB1A59814638EB046790D5DB854A8D42BA2CB686F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA _returnValue;
	_returnValue = Memory_1_Slice_mB1A59814638EB046790D5DB854A8D42BA2CB686F_inline(_thisAdjusted, ___0_start, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_Slice_m6D92DFA60814F303301792ABF267BA35242FACA4_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____length;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1&((int32_t)2147483647LL)));
		int32_t L_2 = ___0_start;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_2) <= ((uint32_t)L_3))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = ___1_length;
		int32_t L_5 = V_1;
		int32_t L_6 = ___0_start;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))))))
		{
			goto IL_001e;
		}
	}

IL_0019:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001e:
	{
		RuntimeObject* L_7 = __this->____object;
		int32_t L_8 = __this->____index;
		int32_t L_9 = ___0_start;
		int32_t L_10 = ___1_length;
		int32_t L_11 = V_0;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_12;
		memset((&L_12), 0, sizeof(L_12));
		Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_inline((&L_12), L_7, ((int32_t)il2cpp_codegen_add(L_8, L_9)), ((int32_t)(L_10|((int32_t)(L_11&((int32_t)-2147483648LL))))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		return L_12;
	}
}
IL2CPP_EXTERN_C  Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_Slice_m6D92DFA60814F303301792ABF267BA35242FACA4_AdjustorThunk (RuntimeObject* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA _returnValue;
	_returnValue = Memory_1_Slice_m6D92DFA60814F303301792ABF267BA35242FACA4_inline(_thisAdjusted, ___0_start, ___1_length, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5))));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 >::Invoke(4, ((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5))));
		V_0 = L_2;
		int32_t L_3 = __this->____index;
		int32_t L_4 = __this->____length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_5;
		L_5 = Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		return L_5;
	}

IL_0034:
	{
		bool L_6 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		if (!L_6)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_7 = __this->____object;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_7, il2cpp_defaults.string_class));
		String_t* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_9 = V_1;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		Il2CppFullySharedGenericAny* L_11;
		L_11 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_10);
		String_t* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline((&L_14), L_11, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		V_0 = L_14;
		int32_t L_15 = __this->____index;
		int32_t L_16 = __this->____length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_17;
		L_17 = Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_inline((&V_0), L_15, L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		return L_17;
	}

IL_0089:
	{
		RuntimeObject* L_18 = __this->____object;
		if (!L_18)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_19 = __this->____object;
		int32_t L_20 = __this->____index;
		int32_t L_21 = __this->____length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline((&L_22), ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))), L_20, ((int32_t)(L_21&((int32_t)2147483647LL))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		return L_22;
	}

IL_00b4:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_23 = V_0;
		return L_23;
	}
}
IL2CPP_EXTERN_C  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 _returnValue;
	_returnValue = Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1_CopyTo_mDB8DD4693F007CBBDC70454425C368FD0614D3FC_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_destination, const RuntimeMethod* method) 
{
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0;
		L_0 = Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		V_0 = L_0;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_1;
		L_1 = Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		Span_1_CopyTo_m87850B36DC83BF310EC6136E6D14DC5634F96F05((&V_0), L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C  void Memory_1_CopyTo_mDB8DD4693F007CBBDC70454425C368FD0614D3FC_AdjustorThunk (RuntimeObject* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_destination, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	Memory_1_CopyTo_mDB8DD4693F007CBBDC70454425C368FD0614D3FC(_thisAdjusted, ___0_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_TryCopyTo_mA894E1A58E1FB0ACB1FEDECD7DDA18A8ABFD4CD3_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_destination, const RuntimeMethod* method) 
{
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0;
		L_0 = Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		V_0 = L_0;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_1;
		L_1 = Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_2;
		L_2 = Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37((&V_0), L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Memory_1_TryCopyTo_mA894E1A58E1FB0ACB1FEDECD7DDA18A8ABFD4CD3_AdjustorThunk (RuntimeObject* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_destination, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	bool _returnValue;
	_returnValue = Memory_1_TryCopyTo_mA894E1A58E1FB0ACB1FEDECD7DDA18A8ABFD4CD3(_thisAdjusted, ___0_destination, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD Memory_1_Pin_m9EEBCD8E7B6269C02BFBD57F2E67854920DFB85B_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_3;
	memset((&V_3), 0, sizeof(V_3));
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_4;
	memset((&V_4), 0, sizeof(V_4));
	MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD V_5;
	memset((&V_5), 0, sizeof(V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		int32_t L_2 = __this->____index;
		NullCheck(((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5))));
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_3;
		L_3 = VirtualFuncInvoker1< MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD, int32_t >::Invoke(5, ((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5))), ((int32_t)(L_2&((int32_t)2147483647LL))));
		return L_3;
	}

IL_0026:
	{
		bool L_4 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		if (!L_4)
		{
			goto IL_0076;
		}
	}
	{
		RuntimeObject* L_5 = __this->____object;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_5, il2cpp_defaults.string_class));
		String_t* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_7 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_8;
		L_8 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_7, (int32_t)3, NULL);
		V_1 = L_8;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		void* L_11;
		L_11 = il2cpp_unsafe_as_pointer(L_10);
		int32_t L_12 = __this->____index;
		void* L_13;
		L_13 = Unsafe_Add_TisIl2CppFullySharedGenericAny_m25356A475C0867B15741BD80812E4EBA4394F3C5(L_11, L_12, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 34));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_14 = V_1;
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_15;
		memset((&L_15), 0, sizeof(L_15));
		MemoryHandle__ctor_mBC4C2B7E7F10F5F93EFCF6A3A24D41CE79916C91((&L_15), L_13, L_14, (RuntimeObject*)NULL, NULL);
		return L_15;
	}

IL_0076:
	{
		RuntimeObject* L_16 = __this->____object;
		V_2 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_16, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = V_2;
		if (!L_17)
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_18 = __this->____length;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = V_2;
		NullCheck((RuntimeArray*)L_19);
		uint8_t* L_20;
		L_20 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_19, NULL);
		void* L_21;
		L_21 = il2cpp_unsafe_as_pointer(L_20);
		int32_t L_22 = __this->____index;
		void* L_23;
		L_23 = Unsafe_Add_TisIl2CppFullySharedGenericAny_m25356A475C0867B15741BD80812E4EBA4394F3C5(L_21, L_22, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 34));
		il2cpp_codegen_initobj((&V_3), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_24 = V_3;
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_25;
		memset((&L_25), 0, sizeof(L_25));
		MemoryHandle__ctor_mBC4C2B7E7F10F5F93EFCF6A3A24D41CE79916C91((&L_25), L_23, L_24, (RuntimeObject*)NULL, NULL);
		return L_25;
	}

IL_00b4:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = V_2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_27;
		L_27 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_26, (int32_t)3, NULL);
		V_4 = L_27;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = V_2;
		NullCheck((RuntimeArray*)L_28);
		uint8_t* L_29;
		L_29 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_28, NULL);
		void* L_30;
		L_30 = il2cpp_unsafe_as_pointer(L_29);
		int32_t L_31 = __this->____index;
		void* L_32;
		L_32 = Unsafe_Add_TisIl2CppFullySharedGenericAny_m25356A475C0867B15741BD80812E4EBA4394F3C5(L_30, L_31, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 34));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_33 = V_4;
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_34;
		memset((&L_34), 0, sizeof(L_34));
		MemoryHandle__ctor_mBC4C2B7E7F10F5F93EFCF6A3A24D41CE79916C91((&L_34), L_32, L_33, (RuntimeObject*)NULL, NULL);
		return L_34;
	}

IL_00dc:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD));
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_35 = V_5;
		return L_35;
	}
}
IL2CPP_EXTERN_C  MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD Memory_1_Pin_m9EEBCD8E7B6269C02BFBD57F2E67854920DFB85B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD _returnValue;
	_returnValue = Memory_1_Pin_m9EEBCD8E7B6269C02BFBD57F2E67854920DFB85B(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Memory_1_ToArray_mF5FFD4A0E8AC951FDA34807539E9631310B6D757_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0;
		L_0 = Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		V_0 = L_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = Span_1_ToArray_mBB0A9E11BBAA9FDE1D0C045FBA14F4CD3E84773E_inline((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		return L_1;
	}
}
IL2CPP_EXTERN_C  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Memory_1_ToArray_mF5FFD4A0E8AC951FDA34807539E9631310B6D757_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* _returnValue;
	_returnValue = Memory_1_ToArray_mF5FFD4A0E8AC951FDA34807539E9631310B6D757(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_Equals_m03AA1FCD0E395B27BD53551C06FDC8ED34F10A9A_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 16))))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 16))));
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_2 = (*(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*)__this);
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_3;
		L_3 = Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 36));
		bool L_4;
		L_4 = ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61((&V_0), L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 37));
		return L_4;
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_5, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))))
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_6 = ___0_obj;
		V_1 = ((*(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*)UnBox(L_6, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_7 = V_1;
		bool L_8;
		L_8 = Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0(__this, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 39));
		return L_8;
	}

IL_0039:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Memory_1_Equals_m03AA1FCD0E395B27BD53551C06FDC8ED34F10A9A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	bool _returnValue;
	_returnValue = Memory_1_Equals_m03AA1FCD0E395B27BD53551C06FDC8ED34F10A9A(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_other, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____object;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_1 = ___0_other;
		RuntimeObject* L_2 = L_1.____object;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = __this->____index;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_4 = ___0_other;
		int32_t L_5 = L_4.____index;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_6 = __this->____length;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_7 = ___0_other;
		int32_t L_8 = L_7.____length;
		return (bool)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0_AdjustorThunk (RuntimeObject* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_other, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	bool _returnValue;
	_returnValue = Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_GetHashCode_m7A4C30D97D133B153A50D638A7D596CDA1BD11B5_gshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____object;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_1);
		int32_t* L_3 = (int32_t*)(&__this->____index);
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_3, NULL);
		int32_t* L_5 = (int32_t*)(&__this->____length);
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_5, NULL);
		int32_t L_7;
		L_7 = Memory_1_CombineHashCodes_mAF5A2B57827992A931D66D37B330E11439075F2B(L_2, L_4, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 41));
		return L_7;
	}
}
IL2CPP_EXTERN_C  int32_t Memory_1_GetHashCode_m7A4C30D97D133B153A50D638A7D596CDA1BD11B5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	int32_t _returnValue;
	_returnValue = Memory_1_GetHashCode_m7A4C30D97D133B153A50D638A7D596CDA1BD11B5(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_CombineHashCodes_mEB42331AAFED3F227F0E7520FA03E6804637F84F_gshared (int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_left;
		int32_t L_1 = ___0_left;
		int32_t L_2 = ___1_right;
		return ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(L_0<<5)), L_1))^L_2));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_CombineHashCodes_mAF5A2B57827992A931D66D37B330E11439075F2B_gshared (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_h1;
		int32_t L_1 = ___1_h2;
		int32_t L_2;
		L_2 = Memory_1_CombineHashCodes_mEB42331AAFED3F227F0E7520FA03E6804637F84F(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 42));
		int32_t L_3 = ___2_h3;
		int32_t L_4;
		L_4 = Memory_1_CombineHashCodes_mEB42331AAFED3F227F0E7520FA03E6804637F84F(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 42));
		return L_4;
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
void MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_Multicast(MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91* __this, Il2CppFullySharedGenericAny ___0_target, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91* currentDelegate = reinterpret_cast<MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_target, ___1_args, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_OpenStaticInvoker(MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91* __this, Il2CppFullySharedGenericAny ___0_target, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker3< Il2CppFullySharedGenericAny, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_target, ___1_args, il2cppRetVal);
}
void MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_ClosedStaticInvoker(MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91* __this, Il2CppFullySharedGenericAny ___0_target, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, Il2CppFullySharedGenericAny, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_target, ___1_args, il2cppRetVal);
}
void MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_ClosedInstInvoker(MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91* __this, Il2CppFullySharedGenericAny ___0_target, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker3< Il2CppFullySharedGenericAny, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_target, ___1_args, il2cppRetVal);
}
void MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_OpenInstInvoker(MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91* __this, Il2CppFullySharedGenericAny ___0_target, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_target);
	InvokerActionInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_target, ___1_args, il2cppRetVal);
}
void MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_OpenVirtualInvoker(MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91* __this, Il2CppFullySharedGenericAny ___0_target, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_target);
	VirtualActionInvoker2Invoker< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_target, ___1_args, il2cppRetVal);
}
void MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_OpenInterfaceInvoker(MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91* __this, Il2CppFullySharedGenericAny ___0_target, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_target);
	InterfaceActionInvoker2Invoker< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_target, ___1_args, il2cppRetVal);
}
void MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_OpenGenericVirtualInvoker(MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91* __this, Il2CppFullySharedGenericAny ___0_target, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_target);
	GenericVirtualActionInvoker2Invoker< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_target, ___1_args, il2cppRetVal);
}
void MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_OpenGenericInterfaceInvoker(MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91* __this, Il2CppFullySharedGenericAny ___0_target, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_target);
	GenericInterfaceActionInvoker2Invoker< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_target, ___1_args, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodCall_2__ctor_m919571D49200E1FEC7040CB004FB9BEBFFCA5F65_gshared (MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_gshared (MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91* __this, Il2CppFullySharedGenericAny ___0_target, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_target, ___1_args, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodCall_2_BeginInvoke_m9365ED4FAC423FB5BD9FB9E9C51B7FA333F2D3F3_gshared (MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91* __this, Il2CppFullySharedGenericAny ___0_target, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	RuntimeClass* ___0_target_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___0_target_klass) ? Box(___0_target_klass, ___0_target) : (void*)___0_target);
	__d_args[1] = ___1_args;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodCall_2_EndInvoke_m93BA4C67065B85DBF8A0D41ACAD53B0343C2BC4D_gshared (MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91* __this, RuntimeObject* ___0_result, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC MethodSignature_1_get_Header_m32123B412AAB6BAFBD90229B0704486F87175C8D_gshared (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC L_0 = *(SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return L_0;
	}
}
IL2CPP_EXTERN_C  SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC MethodSignature_1_get_Header_m32123B412AAB6BAFBD90229B0704486F87175C8D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB>(__this);
	SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC _returnValue;
	_returnValue = MethodSignature_1_get_Header_m32123B412AAB6BAFBD90229B0704486F87175C8D_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodSignature_1_get_ReturnType_m98A0D6B3A151625D6F80D6F377D2F5EF9AD02228_gshared (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TType_tD9058234CAF64D688E46FE73EF8D9B0D64FA0D31 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TType_tD9058234CAF64D688E46FE73EF8D9B0D64FA0D31);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)), SizeOf_TType_tD9058234CAF64D688E46FE73EF8D9B0D64FA0D31);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TType_tD9058234CAF64D688E46FE73EF8D9B0D64FA0D31);
		return;
	}
}
IL2CPP_EXTERN_C  void MethodSignature_1_get_ReturnType_m98A0D6B3A151625D6F80D6F377D2F5EF9AD02228_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB>(__this);
	MethodSignature_1_get_ReturnType_m98A0D6B3A151625D6F80D6F377D2F5EF9AD02228_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MethodSignature_1_get_RequiredParameterCount_m7917A3923C0105288D1B752E46A2FC1598BA4729_gshared (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MethodSignature_1_get_RequiredParameterCount_m7917A3923C0105288D1B752E46A2FC1598BA4729_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB>(__this);
	int32_t _returnValue;
	_returnValue = MethodSignature_1_get_RequiredParameterCount_m7917A3923C0105288D1B752E46A2FC1598BA4729_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MethodSignature_1_get_GenericParameterCount_m51ECBE9A64B13A577BF9FB25259C14D4DBB73975_gshared (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MethodSignature_1_get_GenericParameterCount_m51ECBE9A64B13A577BF9FB25259C14D4DBB73975_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB>(__this);
	int32_t _returnValue;
	_returnValue = MethodSignature_1_get_GenericParameterCount_m51ECBE9A64B13A577BF9FB25259C14D4DBB73975_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B MethodSignature_1_get_ParameterTypes_mE7FC3F1E7EF4B7A01FE761DDE1EF5A38A5499DDA_gshared (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B L_0 = *(ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4));
		return L_0;
	}
}
IL2CPP_EXTERN_C  ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B MethodSignature_1_get_ParameterTypes_mE7FC3F1E7EF4B7A01FE761DDE1EF5A38A5499DDA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB>(__this);
	ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B _returnValue;
	_returnValue = MethodSignature_1_get_ParameterTypes_mE7FC3F1E7EF4B7A01FE761DDE1EF5A38A5499DDA_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodSignature_1__ctor_mF784840EA0615986BE95433A09D5DD5A9F37B87C_gshared (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC ___0_header, Il2CppFullySharedGenericAny ___1_returnType, int32_t ___2_requiredParameterCount, int32_t ___3_genericParameterCount, ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B ___4_parameterTypes, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TType_tD9058234CAF64D688E46FE73EF8D9B0D64FA0D31 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TType_tD9058234CAF64D688E46FE73EF8D9B0D64FA0D31);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC L_0 = ___0_header;
		il2cpp_codegen_write_instance_field_data<SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_0);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)) ? ___1_returnType : &___1_returnType), SizeOf_TType_tD9058234CAF64D688E46FE73EF8D9B0D64FA0D31);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1), L_1, SizeOf_TType_tD9058234CAF64D688E46FE73EF8D9B0D64FA0D31);
		int32_t L_2 = ___3_genericParameterCount;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3), L_2);
		int32_t L_3 = ___2_requiredParameterCount;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2), L_3);
		ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B L_4 = ___4_parameterTypes;
		il2cpp_codegen_write_instance_field_data<ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4), L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void MethodSignature_1__ctor_mF784840EA0615986BE95433A09D5DD5A9F37B87C_AdjustorThunk (RuntimeObject* __this, SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC ___0_header, Il2CppFullySharedGenericAny ___1_returnType, int32_t ___2_requiredParameterCount, int32_t ___3_genericParameterCount, ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B ___4_parameterTypes, const RuntimeMethod* method)
{
	MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB>(__this);
	MethodSignature_1__ctor_mF784840EA0615986BE95433A09D5DD5A9F37B87C(_thisAdjusted, ___0_header, ___1_returnType, ___2_requiredParameterCount, ___3_genericParameterCount, ___4_parameterTypes, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseCaptureEventBase_1_get_relatedTarget_mB95A11F3D91FDFEDA940A84A252028CEBC8E44A5_gshared (MouseCaptureEventBase_1_t22B283B27FCD61274E7CEDD317FC2E9F4BD61350* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseCaptureEventBase_1_tC6D1E5F84B3F544BEDDE660826AB3AA3B109F884_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 42871));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 42872));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 42873));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 42874));
		NullCheck((PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744*)__this);
		RuntimeObject* L_0;
		L_0 = PointerCaptureEventBase_1_get_relatedTarget_mF2EDDB5F566EA8D9259348F5484661FB10656465_inline((PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 42874));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MouseCaptureEventBase_1_GetPooled_mD0BA3BA9866D6A0006DC010337E7A3F9686B72C6_gshared (RuntimeObject* ___0_target, RuntimeObject* ___1_relatedTarget, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_target), (&___1_relatedTarget));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 42875));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 42876));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 42877));
		RuntimeObject* L_0 = ___0_target;
		RuntimeObject* L_1 = ___1_relatedTarget;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 42878));
		Il2CppSharedGenericObject* L_2;
		L_2 = PointerCaptureEventBase_1_GetPooled_mBB52B5855A465C8C2ABE3A66D4106169793C9B8C(L_0, L_1, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 42878));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 42879));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseCaptureEventBase_1__ctor_m180840500B370E7F56003DC24D94D9EBD5D924B4_gshared (MouseCaptureEventBase_1_t22B283B27FCD61274E7CEDD317FC2E9F4BD61350* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		PointerCaptureEventBase_1__ctor_m6504E51BF3B701E614E30F22DD97E3E2E68EB5CD((PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45496));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45497));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45498));
		int32_t L_0 = __this->___U3CmodifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45499));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45500));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45501));
		int32_t L_0 = ___0_value;
		__this->___U3CmodifiersU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45502));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45503));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45504));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CmousePositionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45505));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45506));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45507));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CmousePositionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_localMousePosition_m131A18730A4BE067934A9F1F720FA8B8DAEFF5AB_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45508));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45509));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45510));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3ClocalMousePositionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45511));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45512));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45513));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3ClocalMousePositionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_mouseDelta_mA9B00E7C5EAD63AE805FF883D81C73B88F781F3C_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45514));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45515));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45516));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CmouseDeltaU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45517));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45518));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45519));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CmouseDeltaU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_clickCount_m17BC12D6D3330C64A5ECF4CD9D7ECB8C10F7AF87_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45520));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45521));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45522));
		int32_t L_0 = __this->___U3CclickCountU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45523));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45524));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45525));
		int32_t L_0 = ___0_value;
		__this->___U3CclickCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_button_mE41C6A5049A4C911CE2ED43C6C391A350B728C22_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45526));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45527));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45528));
		int32_t L_0 = __this->___U3CbuttonU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45529));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45530));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45531));
		int32_t L_0 = ___0_value;
		__this->___U3CbuttonU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_pressedButtons_m4F57AA0AAB4D8B66B85F6BA7B303753583258895_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45532));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45533));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45534));
		int32_t L_0 = __this->___U3CpressedButtonsU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45535));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45536));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45537));
		int32_t L_0 = ___0_value;
		__this->___U3CpressedButtonsU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_shiftKey_m10F7CF6C8254B739162CE60805C1B48A29E10C9C_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45538));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45539));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45540));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45541));
		int32_t L_0;
		L_0 = MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45541));
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_ctrlKey_m96AD34ADFBB5A39300F76AA72AF966C4216AB287_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45542));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45543));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45544));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45545));
		int32_t L_0;
		L_0 = MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45545));
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_commandKey_m55FF4BF6C66063A081ADDD1EA8E0E654E2186243_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45546));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45547));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45548));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45549));
		int32_t L_0;
		L_0 = MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45549));
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&8))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_altKey_m7AA06639964C3CD82A32FE89174ABEC6430790B4_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45550));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45551));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45552));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45553));
		int32_t L_0;
		L_0 = MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45553));
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&4))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_actionKey_mD76124C9317FFB7C47D780C21B6F16DFB765CD04_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45554));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45555));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45556));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45557));
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45557));
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45558));
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45558));
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45559));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45560));
		bool L_2;
		L_2 = MouseEventBase_1_get_commandKey_m55FF4BF6C66063A081ADDD1EA8E0E654E2186243(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45560));
		return L_2;
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45561));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45562));
		bool L_3;
		L_3 = MouseEventBase_1_get_ctrlKey_m96AD34ADFBB5A39300F76AA72AF966C4216AB287(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45562));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45563));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45564));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45565));
		RuntimeObject* L_0 = __this->___U3CsourcePointerEventU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45566));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45567));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45568));
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CsourcePointerEventU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourcePointerEventU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45569));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45570));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45571));
		bool L_0 = __this->___U3CrecomputeTopElementUnderMouseU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_recomputeTopElementUnderMouse_m5D34798DE02C9783D4F623F4F5BFAD3C254B51E5_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45572));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45573));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45574));
		bool L_0 = ___0_value;
		__this->___U3CrecomputeTopElementUnderMouseU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 MouseEventBase_1_get_panelRay_m15BF165696F29D7A1F371DEC030C1E57CFA7E682_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45575));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45576));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45577));
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_0 = __this->___U3CpanelRayU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45578));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45579));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45580));
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_0 = ___0_value;
		__this->___U3CpanelRayU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_UnityEngine_UIElements_IMouseEventInternal_get_sourcePointerEvent_m48E19EBBB2A61F35D911AC9DB23F476C188984DE_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45581));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45582));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45583));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45584));
		RuntimeObject* L_0;
		L_0 = MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45584));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_UnityEngine_UIElements_IMouseEventInternal_get_recomputeTopElementUnderMouse_m1D1BDF3F91548E4775DD392186B69A45951C9136_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45585));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45586));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45587));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45588));
		bool L_0;
		L_0 = MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45588));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_UnityEngine_UIElements_IPointerOrMouseEvent_get_pointerId_m552CA11175A1EFDCA76360EB5B9AB28ED2351A34_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45589));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45590));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45591));
		il2cpp_codegen_runtime_class_init_inline(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var);
		int32_t L_0 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MouseEventBase_1_UnityEngine_UIElements_IPointerOrMouseEvent_get_position_m02DAC2E7F1E97CA41728B1076F87DA873F44D9A3_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45592));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45593));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45594));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45595));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45595));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45596));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45596));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MouseEventBase_1_UnityEngine_UIElements_IPointerOrMouseEvent_get_deltaPosition_mDB4D9F5D5102AC8C6C1F08C178D70DAC3939C550_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45597));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45598));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45599));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45600));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = MouseEventBase_1_get_mouseDelta_mA9B00E7C5EAD63AE805FF883D81C73B88F781F3C_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45600));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45601));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45601));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_UnityEngine_UIElements_IPointerOrMouseEvent_set_deltaPosition_mE9270861B5982732491307429D454E52EF78E630_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45602));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45603));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45604));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45605));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45605));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45606));
		MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_inline(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45606));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 MouseEventBase_1_UnityEngine_UIElements_IPointerOrMouseEvent_get_panelRay_m3B60484F182F8AD227F01718B0E72818B9A31505_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45607));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45608));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45609));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45610));
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_0;
		L_0 = MouseEventBase_1_get_panelRay_m15BF165696F29D7A1F371DEC030C1E57CFA7E682_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45610));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_UnityEngine_UIElements_IPointerOrMouseEvent_set_panelRay_mD987A01361068F3CB4A804B5D276E7307ECF765C_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45611));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45612));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45613));
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_0 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45614));
		MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_inline(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45614));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_Init_mCD0FC8AA5CB7457CCB1F7381A77C822087590DA5_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45615));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45616));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45617));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45618));
		NullCheck((EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*)__this);
		EventBase_1_Init_m810FE185606F5EB505285FEDEDB759E3DDB0E934((EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45618));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45619));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45620));
		MouseEventBase_1_LocalInit_m85C31C18C63B13944050FE4C8F328E12465C8132(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45620));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45621));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_LocalInit_m85C31C18C63B13944050FE4C8F328E12465C8132_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45622));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45623));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45624));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45625));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, (int32_t)3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45625));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45626));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45627));
		MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_inline(__this, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45627));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45628));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45629));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45629));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45630));
		MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_inline(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45630));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45631));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45632));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45632));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45633));
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45633));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45634));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45635));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45635));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45636));
		MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_inline(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45636));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45637));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45638));
		MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_inline(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45638));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45639));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45640));
		MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_inline(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45640));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45641));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45642));
		MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_inline(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45642));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45643));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45644));
		MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_inline(__this, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45644));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45645));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45646));
		MouseEventBase_1_set_recomputeTopElementUnderMouse_m5D34798DE02C9783D4F623F4F5BFAD3C254B51E5_inline(__this, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45646));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45647));
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768));
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45648));
		MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_inline(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45648));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45649));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_get_currentTarget_mC792EFDB3E1086082EF5095FF5829C4DD851222B_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45650));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45651));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45652));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45653));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		RuntimeObject* L_0;
		L_0 = EventBase_get_currentTarget_m6F265B85FF86C35F62CFDF144B80B383DA9C503B_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45653));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_currentTarget_m28180A3FB11BB5D148D0958DCB229BFA53FCBFF6_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45654));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45655));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45656));
		RuntimeObject* L_0 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45657));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		EventBase_set_currentTarget_m778A667A791A9A67D61010F9B6A2A69D961C4C14((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45657));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45658));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45659));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(11, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45659));
		V_0 = ((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)IsInstClass((RuntimeObject*)L_1, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45660));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45661));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45662));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45662));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45663));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45663));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45664));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = VisualElementExtensions_WorldToLocal3D_m19BBC65BE9BCA191894DB2B26EE1E083C4D349F3(L_3, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45664));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45665));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45665));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45666));
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45666));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45667));
		return;
	}

IL_0033:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45668));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45669));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45669));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45670));
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45670));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45671));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_PreDispatch_m84EB1457CE2562941FC6245BC26544A401FF9957_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_panel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_panel));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45672));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45673));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45674));
		RuntimeObject* L_0 = ___0_panel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45675));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		EventBase_PreDispatch_mD788394C54A5400B25B423AF5DC41AA318A33DC4((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45675));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45676));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45677));
		bool L_1;
		L_1 = MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45677));
		if (!L_1)
		{
			goto IL_008d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45678));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45679));
		RuntimeObject* L_2;
		L_2 = MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45679));
		if (L_2)
		{
			goto IL_004c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45680));
		il2cpp_codegen_runtime_class_init_inline(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var);
		int32_t L_3 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45681));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45681));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45682));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45682));
		RuntimeObject* L_6 = ___0_panel;
		RuntimeObject* L_7 = ___0_panel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45683));
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(2, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, L_7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45683));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45684));
		il2cpp_codegen_runtime_class_init_inline(PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_il2cpp_TypeInfo_var);
		PointerDeviceState_SavePointerPosition_mFF277BDE588CF09F2301872E64A5F32159ECB9EB(L_3, L_5, L_6, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45684));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45685));
		RuntimeObject* L_9 = ___0_panel;
		int32_t L_10 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45686));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45686));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45687));
		NullCheck(((BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)CastclassClass((RuntimeObject*)L_9, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var)));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12;
		L_12 = BaseVisualElementPanel_RecomputeTopElementUnderPointer_mF3D6110A28FCCF72408FE62A21A4F57E4AC717AF(((BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)CastclassClass((RuntimeObject*)L_9, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var)), L_10, L_11, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45687));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45688));
		return;
	}

IL_004c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45689));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45690));
		RuntimeObject* L_13;
		L_13 = MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45690));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45691));
		NullCheck(L_13);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_13);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45691));
		il2cpp_codegen_runtime_class_init_inline(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var);
		int32_t L_15 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_008d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45692));
		il2cpp_codegen_runtime_class_init_inline(BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ((BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_StaticFields*)il2cpp_codegen_static_fields_for(BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var))->___s_OutsidePanelCoordinates;
		V_0 = L_16;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45693));
		il2cpp_codegen_runtime_class_init_inline(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var);
		int32_t L_17 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45694));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45694));
		RuntimeObject* L_20 = ___0_panel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45695));
		NullCheck(L_20);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker0< int32_t >::Invoke(2, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, L_20);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45695));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45696));
		il2cpp_codegen_runtime_class_init_inline(PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_il2cpp_TypeInfo_var);
		PointerDeviceState_SavePointerPosition_mFF277BDE588CF09F2301872E64A5F32159ECB9EB(L_17, L_19, (RuntimeObject*)NULL, L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45696));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45697));
		RuntimeObject* L_22 = ___0_panel;
		int32_t L_23 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45698));
		NullCheck(((BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)CastclassClass((RuntimeObject*)L_22, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var)));
		BaseVisualElementPanel_SetTopElementUnderPointer_m09591A0A171CEB0CAA023C6834B075D8E76ED5D9(((BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)CastclassClass((RuntimeObject*)L_22, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var)), L_23, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)NULL, L_24, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45698));
	}

IL_008d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45699));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_PostDispatch_mEEFD7D60FBCD7598D07589A5CBAB34CD03DEDBA4_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_panel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B8A6EA35B75288D90AC15479A1E9A5D9A18113);
		s_Il2CppMethodInitialized = true;
	}
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_panel));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45700));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45701));
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* G_B9_0 = NULL;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* G_B8_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45702));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45703));
		RuntimeObject* L_0;
		L_0 = MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45703));
		V_0 = ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)IsInstClass((RuntimeObject*)L_0, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var));
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45704));
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45705));
		NullCheck(L_2);
		bool L_3;
		L_3 = EventBase_get_processed_mC99F191F8FCB064BEAC4500D80EBDDC400A461B7(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45705));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45706));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_mA460392021AC0A8210C9081E3C1C9652DBF32BF6((bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), _stringLiteral09B8A6EA35B75288D90AC15479A1E9A5D9A18113, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45706));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45707));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45708));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		bool L_4;
		L_4 = EventBase_get_isPropagationStopped_m36E1E4831DC04452D18B5339E2CAD8979B6BD6B3((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45708));
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45709));
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45710));
		NullCheck(L_5);
		EventBase_StopPropagation_mEFC7E5AB7164157065FF19064A6ADCBB0D8AF6FB(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45710));
	}

IL_0030:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45711));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45712));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		bool L_6;
		L_6 = EventBase_get_isImmediatePropagationStopped_m23F718E5FA5FB49FE12BA560B8362B95E0C7F5D3((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45712));
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45713));
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45714));
		NullCheck(L_7);
		EventBase_StopImmediatePropagation_m2D6646624DDC02AE96657F5EAD5BC0361380A8DA(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45714));
	}

IL_003e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45715));
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_8 = V_0;
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_9 = L_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45716));
		NullCheck(L_9);
		bool L_10;
		L_10 = EventBase_get_processedByFocusController_mB2BCAFE58D45919AC9F5AC0AAEF059D8A640AE53(L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45716));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45717));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		bool L_11;
		L_11 = EventBase_get_processedByFocusController_mB2BCAFE58D45919AC9F5AC0AAEF059D8A640AE53((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45717));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45718));
		NullCheck(L_9);
		EventBase_set_processedByFocusController_mEC214B328484B60572EEE867ACB5527396436155(L_9, (bool)((int32_t)((int32_t)L_10|(int32_t)L_11)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45718));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45719));
		goto IL_006d;
	}

IL_0053:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45720));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45721));
		bool L_12;
		L_12 = MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45721));
		if (!L_12)
		{
			goto IL_006d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45722));
		RuntimeObject* L_13 = ___0_panel;
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_14 = ((BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)IsInstClass((RuntimeObject*)L_13, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var));
		if (L_14)
		{
			G_B9_0 = L_14;
			goto IL_0067;
		}
		G_B8_0 = L_14;
	}
	{
		goto IL_006d;
	}

IL_0067:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45723));
		NullCheck(G_B9_0);
		bool L_15;
		L_15 = BaseVisualElementPanel_CommitElementUnderPointers_m41A1D0D2884A1C35218D330EE29DF393F75E7892(G_B9_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45723));
	}

IL_006d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45724));
		RuntimeObject* L_16 = ___0_panel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45725));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		EventBase_PostDispatch_mC830955EA32723BF0C10CCB37E01197CBADC07B3((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45725));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45726));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_Dispatch_m3B6CC0CA8CA803593C1A8197DBEF7E1627648774_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___0_panel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_panel));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45727));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45728));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45729));
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_0 = ___0_panel;
		il2cpp_codegen_runtime_class_init_inline(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var);
		int32_t L_1 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45730));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45730));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45731));
		EventDispatchUtilities_DispatchToCapturingElementOrElementUnderPointer_m1DB1C303971CD300023CEE6011018230F9047D4B((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, L_0, L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45731));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45732));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_mBCB6DE2CFDC9098007AAAC9DD3751573753140C9_gshared (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___0_systemEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppSharedGenericObject* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_systemEvent));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45733));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45734));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45735));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45736));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		Il2CppSharedGenericObject* L_0;
		L_0 = EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45736));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45737));
		Il2CppSharedGenericObject* L_1 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_2 = ___0_systemEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45738));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_1);
		EventBase_set_imguiEvent_m72FEAD8F7611927C077B45BAA719C15D39E9F4F4((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45738));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45739));
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_3 = ___0_systemEvent;
		if (!L_3)
		{
			goto IL_0090;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45740));
		Il2CppSharedGenericObject* L_4 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_5 = ___0_systemEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45741));
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Event_get_modifiers_m828B3E2EDBC78305FAC111D0938EF69EE34C820F(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45741));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45742));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_4);
		MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_4, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45742));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45743));
		Il2CppSharedGenericObject* L_7 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_8 = ___0_systemEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45744));
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45744));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45745));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_7);
		MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_7, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45745));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45746));
		Il2CppSharedGenericObject* L_10 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_11 = ___0_systemEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45747));
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45747));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45748));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_10);
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_10, L_12, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45748));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45749));
		Il2CppSharedGenericObject* L_13 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_14 = ___0_systemEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45750));
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Event_get_delta_m1BBF28E2FC379EDD3907DC987E6BD7E6521D69A0(L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45750));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45751));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_13);
		MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_13, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45751));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45752));
		Il2CppSharedGenericObject* L_16 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_17 = ___0_systemEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45753));
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Event_get_button_m57F81B5CCB26866E776D0EBD1250C708A3565C08(L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45753));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45754));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_16);
		MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_16, L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45754));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45755));
		Il2CppSharedGenericObject* L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var);
		int32_t L_20 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45756));
		il2cpp_codegen_runtime_class_init_inline(PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_il2cpp_TypeInfo_var);
		int32_t L_21;
		L_21 = PointerDeviceState_GetPressedButtons_m4967FF91F44AE300DCDB3F5136823221134666BC(L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45756));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45757));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_19);
		MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_19, L_21, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45757));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45758));
		Il2CppSharedGenericObject* L_22 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_23 = ___0_systemEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45759));
		NullCheck(L_23);
		int32_t L_24;
		L_24 = Event_get_clickCount_mEF418EB4A36318F07E5F3463E4E5E8A4C454DE7D(L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45759));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45760));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_22);
		MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_22, L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45760));
	}

IL_0090:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45761));
		Il2CppSharedGenericObject* L_25 = V_0;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_mE7146EC91BCA5D2EC96550672D71AFE81DD01654_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, int32_t ___1_button, int32_t ___2_clickCount, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_delta, int32_t ___4_modifiers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_position), (&___1_button), (&___2_clickCount), (&___3_delta), (&___4_modifiers));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45762));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45763));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45764));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45765));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		Il2CppSharedGenericObject* L_0;
		L_0 = EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45765));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45766));
		Il2CppSharedGenericObject* L_1 = L_0;
		int32_t L_2 = ___4_modifiers;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45767));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_1);
		MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_1, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45767));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45768));
		Il2CppSharedGenericObject* L_3 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_position;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45769));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_3);
		MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45769));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45770));
		Il2CppSharedGenericObject* L_5 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_position;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45771));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_5);
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45771));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45772));
		Il2CppSharedGenericObject* L_7 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___3_delta;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45773));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_7);
		MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45773));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45774));
		Il2CppSharedGenericObject* L_9 = L_7;
		int32_t L_10 = ___1_button;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45775));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_9);
		MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45775));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45776));
		Il2CppSharedGenericObject* L_11 = L_9;
		il2cpp_codegen_runtime_class_init_inline(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var);
		int32_t L_12 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45777));
		il2cpp_codegen_runtime_class_init_inline(PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = PointerDeviceState_GetPressedButtons_m4967FF91F44AE300DCDB3F5136823221134666BC(L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45777));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45778));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_11);
		MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_11, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45778));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45779));
		Il2CppSharedGenericObject* L_14 = L_11;
		int32_t L_15 = ___2_clickCount;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45780));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_14);
		MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45780));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45781));
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m84A60BC498C8DF00411A02A28D9547715B2E87C1_gshared (RuntimeObject* ___0_triggerEvent, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_mousePosition, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_triggerEvent), (&___1_mousePosition));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45782));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45783));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45784));
		RuntimeObject* L_0 = ___0_triggerEvent;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45785));
		RuntimeObject* L_1 = ___0_triggerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45786));
		Il2CppSharedGenericObject* L_2;
		L_2 = MouseEventBase_1_GetPooled_m13C3E655268E03D8CDA8E82FBC4C2B8B0C910511(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45786));
		return L_2;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45787));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45788));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		Il2CppSharedGenericObject* L_3;
		L_3 = EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45788));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45789));
		Il2CppSharedGenericObject* L_4 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___1_mousePosition;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45790));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_4);
		MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45790));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45791));
		Il2CppSharedGenericObject* L_6 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___1_mousePosition;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45792));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_6);
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45792));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45793));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m13C3E655268E03D8CDA8E82FBC4C2B8B0C910511_gshared (RuntimeObject* ___0_triggerEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppSharedGenericObject* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_triggerEvent));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45794));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45795));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45796));
		RuntimeObject* L_0 = ___0_triggerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45797));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		Il2CppSharedGenericObject* L_1;
		L_1 = EventBase_1_GetPooled_m567E588C708778F6F41E2D69650776EBF437F74C(((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)IsInstClass((RuntimeObject*)L_0, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45797));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45798));
		RuntimeObject* L_2 = ___0_triggerEvent;
		if (!L_2)
		{
			goto IL_0086;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45799));
		Il2CppSharedGenericObject* L_3 = V_0;
		RuntimeObject* L_4 = ___0_triggerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45800));
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45800));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45801));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_3);
		MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_3, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45801));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45802));
		Il2CppSharedGenericObject* L_6 = V_0;
		RuntimeObject* L_7 = ___0_triggerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45803));
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(1, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45803));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45804));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_6);
		MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_6, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45804));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45805));
		Il2CppSharedGenericObject* L_9 = V_0;
		RuntimeObject* L_10 = ___0_triggerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45806));
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(1, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45806));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45807));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_9);
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_9, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45807));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45808));
		Il2CppSharedGenericObject* L_12 = V_0;
		RuntimeObject* L_13 = ___0_triggerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45809));
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(3, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_13);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45809));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45810));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_12);
		MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_12, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45810));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45811));
		Il2CppSharedGenericObject* L_15 = V_0;
		RuntimeObject* L_16 = ___0_triggerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45812));
		NullCheck(L_16);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(5, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_16);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45812));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45813));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_15);
		MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_15, L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45813));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45814));
		Il2CppSharedGenericObject* L_18 = V_0;
		RuntimeObject* L_19 = ___0_triggerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45815));
		NullCheck(L_19);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(6, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_19);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45815));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45816));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_18);
		MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_18, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45816));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45817));
		Il2CppSharedGenericObject* L_21 = V_0;
		RuntimeObject* L_22 = ___0_triggerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45818));
		NullCheck(L_22);
		int32_t L_23;
		L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(4, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45818));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45819));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_21);
		MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_21, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45819));
	}

IL_0086:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45820));
		Il2CppSharedGenericObject* L_24 = V_0;
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m6B58A1D4CE6839D06420EC1E7ABFD9E2559E9850_gshared (RuntimeObject* ___0_pointerEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerEventInternal_tF0950F230320BC22B077741EA08AC538EE878833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppSharedGenericObject* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_pointerEvent));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45821));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45822));
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	RuntimeObject* G_B9_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45823));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45824));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		Il2CppSharedGenericObject* L_0;
		L_0 = EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45824));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45825));
		Il2CppSharedGenericObject* L_1 = V_0;
		RuntimeObject* L_2 = ___0_pointerEvent;
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_3 = ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)IsInstClass((RuntimeObject*)L_2, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var));
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = ((RuntimeObject*)(L_1));
			goto IL_0019;
		}
		G_B1_0 = L_3;
		G_B1_1 = ((RuntimeObject*)(L_1));
	}
	{
		G_B3_0 = ((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_001e;
	}

IL_0019:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45826));
		NullCheck(G_B2_0);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4;
		L_4 = EventBase_get_elementTarget_mF6CFD6372FB247718797DB8927654F781821B94D_inline(G_B2_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45826));
		G_B3_0 = L_4;
		G_B3_1 = G_B2_1;
	}

IL_001e:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45827));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)G_B3_1);
		EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)G_B3_1, G_B3_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45827));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45828));
		Il2CppSharedGenericObject* L_5 = V_0;
		RuntimeObject* L_6 = ___0_pointerEvent;
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_7 = ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)IsInstClass((RuntimeObject*)L_6, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var));
		if (L_7)
		{
			G_B5_0 = L_7;
			G_B5_1 = ((RuntimeObject*)(L_5));
			goto IL_0036;
		}
		G_B4_0 = L_7;
		G_B4_1 = ((RuntimeObject*)(L_5));
	}
	{
		G_B6_0 = ((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_003b;
	}

IL_0036:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45829));
		NullCheck(G_B5_0);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_8;
		L_8 = EventBase_get_imguiEvent_m45ABCDC6423D27EF44F7E29661B249D238765DB0(G_B5_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45829));
		G_B6_0 = L_8;
		G_B6_1 = G_B5_1;
	}

IL_003b:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45830));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)G_B6_1);
		EventBase_set_imguiEvent_m72FEAD8F7611927C077B45BAA719C15D39E9F4F4((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)G_B6_1, G_B6_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45830));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45831));
		Il2CppSharedGenericObject* L_9 = V_0;
		RuntimeObject* L_10 = ___0_pointerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45832));
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(19, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45832));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45833));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_9);
		MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_9, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45833));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45834));
		Il2CppSharedGenericObject* L_12 = V_0;
		RuntimeObject* L_13 = ___0_pointerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45835));
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_13);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45835));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45836));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45836));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45837));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_12);
		MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_12, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45837));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45838));
		Il2CppSharedGenericObject* L_16 = V_0;
		RuntimeObject* L_17 = ___0_pointerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45839));
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_17);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45839));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45840));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45840));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45841));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_16);
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_16, L_19, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45841));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45842));
		Il2CppSharedGenericObject* L_20 = V_0;
		RuntimeObject* L_21 = ___0_pointerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45843));
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(7, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_21);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45843));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45844));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_22, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45844));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45845));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_20);
		MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_20, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45845));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45846));
		Il2CppSharedGenericObject* L_24 = V_0;
		RuntimeObject* L_25 = ___0_pointerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45847));
		NullCheck(L_25);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_25);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45847));
		if ((((int32_t)L_26) == ((int32_t)(-1))))
		{
			G_B8_0 = ((RuntimeObject*)(L_24));
			goto IL_00aa;
		}
		G_B7_0 = ((RuntimeObject*)(L_24));
	}
	{
		RuntimeObject* L_27 = ___0_pointerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45848));
		NullCheck(L_27);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_27);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45848));
		G_B9_0 = L_28;
		G_B9_1 = G_B7_0;
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_00ab:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45849));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)G_B9_1);
		MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)G_B9_1, G_B9_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45849));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45850));
		Il2CppSharedGenericObject* L_29 = V_0;
		RuntimeObject* L_30 = ___0_pointerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45851));
		NullCheck(L_30);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(4, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_30);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45851));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45852));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_29);
		MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_29, L_31, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45852));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45853));
		Il2CppSharedGenericObject* L_32 = V_0;
		RuntimeObject* L_33 = ___0_pointerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45854));
		NullCheck(L_33);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker0< int32_t >::Invoke(9, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_33);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45854));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45855));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_32);
		MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_32, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45855));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45856));
		RuntimeObject* L_35 = ___0_pointerEvent;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45857));
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPointerEventInternal_tF0950F230320BC22B077741EA08AC538EE878833_il2cpp_TypeInfo_var)))
		{
			goto IL_00e6;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45858));
		Il2CppSharedGenericObject* L_36 = V_0;
		RuntimeObject* L_37 = ___0_pointerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45859));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_36);
		MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_36, L_37, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45859));
	}

IL_00e6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45860));
		Il2CppSharedGenericObject* L_38 = V_0;
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1__ctor_m116AD74DF8F31AE58BE42C48EF19AE61B7AAFB0E_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45861));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45862));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45863));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45864));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22));
		EventBase_1__ctor_mACA9307C9EF30E9F5D55E8FA6AE6E58A99BA40CD((EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45864));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45865));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45866));
		MouseEventBase_1_LocalInit_m85C31C18C63B13944050FE4C8F328E12465C8132(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45866));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45867));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutationInput__ctor_mEE9E0D47DA32453A9B79295BDF835C0830E70EAF_gshared (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* ___0_set, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* L_0 = ___0_set;
		Requires_NotNull_TisImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87_mEDB8B078EA0838C9FE22EC2C0F683144828F4069(L_0, _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* L_1 = ___0_set;
		NullCheck(L_1);
		SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* L_2 = L_1->____root;
		__this->____root = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____root), (void*)L_2);
		ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* L_3 = ___0_set;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->____equalityComparer;
		__this->____equalityComparer = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____equalityComparer), (void*)L_4);
		ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* L_5 = ___0_set;
		NullCheck(L_5);
		int32_t L_6 = L_5->____count;
		__this->____count = L_6;
		ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* L_7 = ___0_set;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->____hashBucketEqualityComparer;
		__this->____hashBucketEqualityComparer = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hashBucketEqualityComparer), (void*)L_8);
		return;
	}
}
IL2CPP_EXTERN_C  void MutationInput__ctor_mEE9E0D47DA32453A9B79295BDF835C0830E70EAF_AdjustorThunk (RuntimeObject* __this, ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* ___0_set, const RuntimeMethod* method)
{
	MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034>(__this);
	MutationInput__ctor_mEE9E0D47DA32453A9B79295BDF835C0830E70EAF(_thisAdjusted, ___0_set, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutationInput__ctor_m6472255CFE31C92B91258C27021E3AA2B049BDF1_gshared (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___0_root, RuntimeObject* ___1_equalityComparer, RuntimeObject* ___2_hashBucketEqualityComparer, int32_t ___3_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12656D1A20150F14E6EA7A874F2D1F9A1C248387);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2E138AD319A0E08FFC4A185CE05933BF5C01D5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB246FA9AAC8A513F752DC148312F96745C14263D);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* L_0 = ___0_root;
		Requires_NotNull_TisSortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169_m3802522CB8E58A2270529331D7821DAB2028D2E0(L_0, _stringLiteralA2E138AD319A0E08FFC4A185CE05933BF5C01D5C, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject* L_1 = ___1_equalityComparer;
		Requires_NotNull_TisIEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122_mA3F3C9A20AC4B85A865AB750DB5C26DECF6620F0(L_1, _stringLiteralB246FA9AAC8A513F752DC148312F96745C14263D, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_2 = ___3_count;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, (String_t*)NULL, NULL);
		RuntimeObject* L_3 = ___2_hashBucketEqualityComparer;
		Requires_NotNull_TisIEqualityComparer_1_t4DE5D611F582A8EF69C28B2A51F059A0FF0F44AA_m537E6BFC00399F72F19B7C137CA8085CD6C2FDCC(L_3, _stringLiteral12656D1A20150F14E6EA7A874F2D1F9A1C248387, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* L_4 = ___0_root;
		__this->____root = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____root), (void*)L_4);
		RuntimeObject* L_5 = ___1_equalityComparer;
		__this->____equalityComparer = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____equalityComparer), (void*)L_5);
		int32_t L_6 = ___3_count;
		__this->____count = L_6;
		RuntimeObject* L_7 = ___2_hashBucketEqualityComparer;
		__this->____hashBucketEqualityComparer = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hashBucketEqualityComparer), (void*)L_7);
		return;
	}
}
IL2CPP_EXTERN_C  void MutationInput__ctor_m6472255CFE31C92B91258C27021E3AA2B049BDF1_AdjustorThunk (RuntimeObject* __this, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___0_root, RuntimeObject* ___1_equalityComparer, RuntimeObject* ___2_hashBucketEqualityComparer, int32_t ___3_count, const RuntimeMethod* method)
{
	MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034>(__this);
	MutationInput__ctor_m6472255CFE31C92B91258C27021E3AA2B049BDF1(_thisAdjusted, ___0_root, ___1_equalityComparer, ___2_hashBucketEqualityComparer, ___3_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* MutationInput_get_Root_m915B63D2C097FFE14D3526BDFB912A263B1DF78A_gshared (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* L_0 = __this->____root;
		return L_0;
	}
}
IL2CPP_EXTERN_C  SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* MutationInput_get_Root_m915B63D2C097FFE14D3526BDFB912A263B1DF78A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034>(__this);
	SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* _returnValue;
	_returnValue = MutationInput_get_Root_m915B63D2C097FFE14D3526BDFB912A263B1DF78A_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MutationInput_get_EqualityComparer_m47B4CEE19DCCAED7570F3BF7620C415F5F652C4C_gshared (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____equalityComparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MutationInput_get_EqualityComparer_m47B4CEE19DCCAED7570F3BF7620C415F5F652C4C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MutationInput_get_EqualityComparer_m47B4CEE19DCCAED7570F3BF7620C415F5F652C4C_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MutationInput_get_Count_m6E3318EDC672F6F6AF1118A44C07EC9EC0A7DEB8_gshared (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MutationInput_get_Count_m6E3318EDC672F6F6AF1118A44C07EC9EC0A7DEB8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034>(__this);
	int32_t _returnValue;
	_returnValue = MutationInput_get_Count_m6E3318EDC672F6F6AF1118A44C07EC9EC0A7DEB8_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MutationInput_get_HashBucketEqualityComparer_m8D626B7818EAFA846C80901283441C465944BD89_gshared (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____hashBucketEqualityComparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MutationInput_get_HashBucketEqualityComparer_m8D626B7818EAFA846C80901283441C465944BD89_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MutationInput_get_HashBucketEqualityComparer_m8D626B7818EAFA846C80901283441C465944BD89_inline(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutationInput__ctor_m9E6FF2513A09220079EEF98A1A5E5CD400C6215A_gshared (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* ___0_root, Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* ___1_comparers, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* L_0 = ___0_root;
		__this->____root = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____root), (void*)L_0);
		Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* L_1 = ___1_comparers;
		__this->____comparers = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparers), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void MutationInput__ctor_m9E6FF2513A09220079EEF98A1A5E5CD400C6215A_AdjustorThunk (RuntimeObject* __this, SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* ___0_root, Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* ___1_comparers, const RuntimeMethod* method)
{
	MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8>(__this);
	MutationInput__ctor_m9E6FF2513A09220079EEF98A1A5E5CD400C6215A(_thisAdjusted, ___0_root, ___1_comparers, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutationInput__ctor_m976F9BDBB85CE0DCB7B787F065EA8B09B05CEED7_gshared (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* ___0_map, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* L_0 = ___0_map;
		NullCheck(L_0);
		SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* L_1 = L_0->____root;
		__this->____root = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____root), (void*)L_1);
		ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* L_2 = ___0_map;
		NullCheck(L_2);
		Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* L_3 = L_2->____comparers;
		__this->____comparers = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparers), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void MutationInput__ctor_m976F9BDBB85CE0DCB7B787F065EA8B09B05CEED7_AdjustorThunk (RuntimeObject* __this, ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* ___0_map, const RuntimeMethod* method)
{
	MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8>(__this);
	MutationInput__ctor_m976F9BDBB85CE0DCB7B787F065EA8B09B05CEED7(_thisAdjusted, ___0_map, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* MutationInput_get_Root_m2DBEE6A809C40133F0D17E4F4C741268EDC05EE0_gshared (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* L_0 = __this->____root;
		return L_0;
	}
}
IL2CPP_EXTERN_C  SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* MutationInput_get_Root_m2DBEE6A809C40133F0D17E4F4C741268EDC05EE0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8>(__this);
	SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* _returnValue;
	_returnValue = MutationInput_get_Root_m2DBEE6A809C40133F0D17E4F4C741268EDC05EE0_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* MutationInput_get_Comparers_mEB1A03202DA1299DC403F2C80621A69391D8EC3F_gshared (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* L_0 = __this->____comparers;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* MutationInput_get_Comparers_mEB1A03202DA1299DC403F2C80621A69391D8EC3F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8>(__this);
	Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* _returnValue;
	_returnValue = MutationInput_get_Comparers_mEB1A03202DA1299DC403F2C80621A69391D8EC3F_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MutationInput_get_KeyComparer_mA342CB28F9A069EC90C7614B6C2D99677183ECB7_gshared (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* L_0 = __this->____comparers;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Comparers_get_KeyComparer_m829F4ED35876B6C90CA646A7851CEFD576B79BDE_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MutationInput_get_KeyComparer_mA342CB28F9A069EC90C7614B6C2D99677183ECB7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MutationInput_get_KeyComparer_mA342CB28F9A069EC90C7614B6C2D99677183ECB7(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MutationInput_get_KeyOnlyComparer_m98E70DBE989987BB78A69F1E2CF1D4A7D225E466_gshared (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* L_0 = __this->____comparers;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Comparers_get_KeyOnlyComparer_mC391557AD111F4CC8FD23623C98D5F1B9222FA0F(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MutationInput_get_KeyOnlyComparer_m98E70DBE989987BB78A69F1E2CF1D4A7D225E466_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MutationInput_get_KeyOnlyComparer_m98E70DBE989987BB78A69F1E2CF1D4A7D225E466(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MutationInput_get_ValueComparer_m930AA681011080A7890E558ECF3FFE0BDBEAC2C8_gshared (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* L_0 = __this->____comparers;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Comparers_get_ValueComparer_mE06E2FB2EF1F59557310213BAFDC5F3AF3049B36_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MutationInput_get_ValueComparer_m930AA681011080A7890E558ECF3FFE0BDBEAC2C8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MutationInput_get_ValueComparer_m930AA681011080A7890E558ECF3FFE0BDBEAC2C8(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MutationInput_get_HashBucketComparer_m530EB5827ABD112A74ED8AA74B351D028EEFC54A_gshared (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* L_0 = __this->____comparers;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Comparers_get_HashBucketEqualityComparer_mE932162ABE21D060EF511CC15AED3D6BC4109BF9(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MutationInput_get_HashBucketComparer_m530EB5827ABD112A74ED8AA74B351D028EEFC54A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MutationInput_get_HashBucketComparer_m530EB5827ABD112A74ED8AA74B351D028EEFC54A(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutationResult__ctor_m427273493990392572644670EFD60CFE8C70A782_gshared (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* __this, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___0_root, int32_t ___1_count, int32_t ___2_countType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2E138AD319A0E08FFC4A185CE05933BF5C01D5C);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* L_0 = ___0_root;
		Requires_NotNull_TisSortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169_m3802522CB8E58A2270529331D7821DAB2028D2E0(L_0, _stringLiteralA2E138AD319A0E08FFC4A185CE05933BF5C01D5C, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* L_1 = ___0_root;
		__this->____root = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____root), (void*)L_1);
		int32_t L_2 = ___1_count;
		__this->____count = L_2;
		int32_t L_3 = ___2_countType;
		__this->____countType = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void MutationResult__ctor_m427273493990392572644670EFD60CFE8C70A782_AdjustorThunk (RuntimeObject* __this, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___0_root, int32_t ___1_count, int32_t ___2_countType, const RuntimeMethod* method)
{
	MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC>(__this);
	MutationResult__ctor_m427273493990392572644670EFD60CFE8C70A782(_thisAdjusted, ___0_root, ___1_count, ___2_countType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* MutationResult_get_Root_m6ECFD16A9CDEE2383F0C7E9EC6A57A1B16A8A230_gshared (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* L_0 = __this->____root;
		return L_0;
	}
}
IL2CPP_EXTERN_C  SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* MutationResult_get_Root_m6ECFD16A9CDEE2383F0C7E9EC6A57A1B16A8A230_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC>(__this);
	SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* _returnValue;
	_returnValue = MutationResult_get_Root_m6ECFD16A9CDEE2383F0C7E9EC6A57A1B16A8A230_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MutationResult_get_Count_mAB2B07AB4A5614A22BBC89D6924E1D4B58C2AC44_gshared (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MutationResult_get_Count_mAB2B07AB4A5614A22BBC89D6924E1D4B58C2AC44_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC>(__this);
	int32_t _returnValue;
	_returnValue = MutationResult_get_Count_mAB2B07AB4A5614A22BBC89D6924E1D4B58C2AC44_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MutationResult_get_CountType_mFE8C9AD264FA165FA10B0C1817C2240250B9E830_gshared (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____countType;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MutationResult_get_CountType_mFE8C9AD264FA165FA10B0C1817C2240250B9E830_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC>(__this);
	int32_t _returnValue;
	_returnValue = MutationResult_get_CountType_mFE8C9AD264FA165FA10B0C1817C2240250B9E830_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* MutationResult_Finalize_m7A72CC861631BC27057EA24C65FDDD5BF09B4B4F_gshared (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* __this, ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* ___0_priorSet, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65CD3F5C6944CD23E9BCF80AE6F43AADA3E20A1B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* L_0 = ___0_priorSet;
		Requires_NotNull_TisImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87_mEDB8B078EA0838C9FE22EC2C0F683144828F4069(L_0, _stringLiteral65CD3F5C6944CD23E9BCF80AE6F43AADA3E20A1B, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		int32_t L_1;
		L_1 = MutationResult_get_Count_mAB2B07AB4A5614A22BBC89D6924E1D4B58C2AC44_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		V_0 = L_1;
		int32_t L_2;
		L_2 = MutationResult_get_CountType_mFE8C9AD264FA165FA10B0C1817C2240250B9E830_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = V_0;
		ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* L_4 = ___0_priorSet;
		NullCheck(L_4);
		int32_t L_5 = L_4->____count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_5));
	}

IL_0023:
	{
		ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* L_6 = ___0_priorSet;
		SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* L_7;
		L_7 = MutationResult_get_Root_m6ECFD16A9CDEE2383F0C7E9EC6A57A1B16A8A230_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		int32_t L_8 = V_0;
		NullCheck(L_6);
		ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* L_9;
		L_9 = ImmutableHashSet_1_Wrap_m9DF77AF2CB4C36AC060A3CAB0D3BF09AB264D91E(L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_9;
	}
}
IL2CPP_EXTERN_C  ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* MutationResult_Finalize_m7A72CC861631BC27057EA24C65FDDD5BF09B4B4F_AdjustorThunk (RuntimeObject* __this, ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* ___0_priorSet, const RuntimeMethod* method)
{
	MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC>(__this);
	ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* _returnValue;
	_returnValue = MutationResult_Finalize_m7A72CC861631BC27057EA24C65FDDD5BF09B4B4F(_thisAdjusted, ___0_priorSet, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutationResult__ctor_m2583CDC476B88D26086C73E03A85F8B9DEA9D898_gshared (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* __this, MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8 ___0_unchangedInput, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* L_0;
		L_0 = MutationInput_get_Root_m2DBEE6A809C40133F0D17E4F4C741268EDC05EE0_inline((&___0_unchangedInput), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		__this->____root = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____root), (void*)L_0);
		__this->____countAdjustment = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void MutationResult__ctor_m2583CDC476B88D26086C73E03A85F8B9DEA9D898_AdjustorThunk (RuntimeObject* __this, MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8 ___0_unchangedInput, const RuntimeMethod* method)
{
	MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689>(__this);
	MutationResult__ctor_m2583CDC476B88D26086C73E03A85F8B9DEA9D898(_thisAdjusted, ___0_unchangedInput, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutationResult__ctor_m9153B91EA8BB27CF07C041205A69847B638EEEE5_gshared (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* __this, SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* ___0_root, int32_t ___1_countAdjustment, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2E138AD319A0E08FFC4A185CE05933BF5C01D5C);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* L_0 = ___0_root;
		Requires_NotNull_TisSortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909_mEDFCE7C620F2CB615B2B47BAC3BBE4E797E0937D(L_0, _stringLiteralA2E138AD319A0E08FFC4A185CE05933BF5C01D5C, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* L_1 = ___0_root;
		__this->____root = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____root), (void*)L_1);
		int32_t L_2 = ___1_countAdjustment;
		__this->____countAdjustment = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void MutationResult__ctor_m9153B91EA8BB27CF07C041205A69847B638EEEE5_AdjustorThunk (RuntimeObject* __this, SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* ___0_root, int32_t ___1_countAdjustment, const RuntimeMethod* method)
{
	MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689>(__this);
	MutationResult__ctor_m9153B91EA8BB27CF07C041205A69847B638EEEE5(_thisAdjusted, ___0_root, ___1_countAdjustment, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* MutationResult_get_Root_mEDAF44C3864D254F056571D526ECE5CADA021F28_gshared (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* L_0 = __this->____root;
		return L_0;
	}
}
IL2CPP_EXTERN_C  SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* MutationResult_get_Root_mEDAF44C3864D254F056571D526ECE5CADA021F28_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689>(__this);
	SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* _returnValue;
	_returnValue = MutationResult_get_Root_mEDAF44C3864D254F056571D526ECE5CADA021F28_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MutationResult_get_CountAdjustment_mCD5E1C6BFFE241697033430752F4D5E91C29A161_gshared (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____countAdjustment;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MutationResult_get_CountAdjustment_mCD5E1C6BFFE241697033430752F4D5E91C29A161_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689>(__this);
	int32_t _returnValue;
	_returnValue = MutationResult_get_CountAdjustment_mCD5E1C6BFFE241697033430752F4D5E91C29A161_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* MutationResult_Finalize_mED16442D5B8129D5638328DE05668A2C2B70134D_gshared (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* __this, ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* ___0_priorMap, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8F70CB030D88DE0A66D6B4778D2B08506F7427);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* L_0 = ___0_priorMap;
		Requires_NotNull_TisImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352_mF2E2DAAE001EDF0562C130F1FCE0373EA7F0E8DA(L_0, _stringLiteralEF8F70CB030D88DE0A66D6B4778D2B08506F7427, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* L_1 = ___0_priorMap;
		SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* L_2;
		L_2 = MutationResult_get_Root_mEDAF44C3864D254F056571D526ECE5CADA021F28_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* L_3 = ___0_priorMap;
		NullCheck(L_3);
		int32_t L_4 = L_3->____count;
		int32_t L_5;
		L_5 = MutationResult_get_CountAdjustment_mCD5E1C6BFFE241697033430752F4D5E91C29A161_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		NullCheck(L_1);
		ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* L_6;
		L_6 = ImmutableDictionary_2_Wrap_m6CB444A5A32FE025711F9CD460C9861FC64960B7(L_1, L_2, ((int32_t)il2cpp_codegen_add(L_4, L_5)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_6;
	}
}
IL2CPP_EXTERN_C  ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* MutationResult_Finalize_mED16442D5B8129D5638328DE05668A2C2B70134D_AdjustorThunk (RuntimeObject* __this, ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* ___0_priorMap, const RuntimeMethod* method)
{
	MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689>(__this);
	ImmutableDictionary_2_tA8BBE8DE0F38B6895F6B72D302777C01A7B2D352* _returnValue;
	_returnValue = MutationResult_Finalize_mED16442D5B8129D5638328DE05668A2C2B70134D(_thisAdjusted, ___0_priorMap, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayAllocator__ctor_m44FA9B3E65248C9541D203A60A05E8067106EF43_gshared (NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492* __this, String_t* ___0_profilerName, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayAllocator_tC56FDB52B7742CFDBAFDF1B03DF9E9746A668DFF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47E8CCB1C331C9476E88F8A6179C1466CBA62167);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_profilerName), (&___1_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129157));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129158));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129159));
		int32_t L_0 = ___1_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129160));
		bool L_1;
		L_1 = MemoryLabel_SupportsAllocator_m2FBEAFCA15699420E8C5E42BA823DEE2999B6E6D(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129160));
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129161));
		__this->___m_Allocator = (int32_t)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129162));
		String_t* L_2 = ___0_profilerName;
		int32_t L_3 = ___1_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129163));
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		MemoryLabel__ctor_m9EBEB7071302DF5EC12EB34EB2949E01617C5191((&L_4), _stringLiteral47E8CCB1C331C9476E88F8A6179C1466CBA62167, L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129163));
		__this->___m_MemoryLabel = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129164));
		return;
	}

IL_0022:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129165));
		int32_t L_5 = ___1_allocator;
		__this->___m_Allocator = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129166));
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2* L_6 = (MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2*)(&__this->___m_MemoryLabel);
		il2cpp_codegen_initobj(L_6, sizeof(MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129167));
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArrayAllocator__ctor_m44FA9B3E65248C9541D203A60A05E8067106EF43_AdjustorThunk (RuntimeObject* __this, String_t* ___0_profilerName, int32_t ___1_allocator, const RuntimeMethod* method)
{
	NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492>(__this);
	NativeArrayAllocator__ctor_m44FA9B3E65248C9541D203A60A05E8067106EF43(_thisAdjusted, ___0_profilerName, ___1_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayAllocator_CreateArray_m23A47AB9FCCC96DE09A09E691F423EEE92972DFE_gshared (NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492* __this, int32_t ___0_length, int32_t ___1_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayAllocator_tC56FDB52B7742CFDBAFDF1B03DF9E9746A668DFF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_length), (&___1_options));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129168));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129169));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129170));
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2* L_0 = (MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2*)(&__this->___m_MemoryLabel);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129171));
		bool L_1;
		L_1 = MemoryLabel_get_IsCreated_m8B3D6AC21CEADC1D4C4EF4A3D2B168EBFADC26BA(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129171));
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129172));
		int32_t L_2 = ___0_length;
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 L_3 = __this->___m_MemoryLabel;
		int32_t L_4 = ___1_options;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129173));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5;
		memset((&L_5), 0, sizeof(L_5));
		NativeArray_1__ctor_m01C0164611F0F10354E4ABA539FA854E3A97F76A((&L_5), L_2, L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129173));
		return L_5;
	}

IL_001b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129174));
		int32_t L_6 = ___0_length;
		int32_t L_7 = __this->___m_Allocator;
		int32_t L_8 = ___1_options;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129175));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_9), L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 129175));
		return L_9;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayAllocator_CreateArray_m23A47AB9FCCC96DE09A09E691F423EEE92972DFE_AdjustorThunk (RuntimeObject* __this, int32_t ___0_length, int32_t ___1_options, const RuntimeMethod* method)
{
	NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492>(__this);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = NativeArrayAllocator_CreateArray_m23A47AB9FCCC96DE09A09E691F423EEE92972DFE(_thisAdjusted, ___0_length, ___1_options, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayDebugView_1__ctor_mEF9CE122C17D8726F7D7FF219269C08B7064D40D_gshared (NativeArrayDebugView_1_t822A40A26B069D94A4D21875C23D557566F1CBB1* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayDebugView_1_tE87495FA18D5F8A71C5C739CC4D4E219FDE6A7BF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3188));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3189));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3190));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3191));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3191));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3192));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_array;
		__this->___m_Array = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3193));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* NativeArrayDebugView_1_get_Items_m97DCCC2FDE77999001EEF67F9A4F3DE999571331_gshared (NativeArrayDebugView_1_t822A40A26B069D94A4D21875C23D557566F1CBB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayDebugView_1_tE87495FA18D5F8A71C5C739CC4D4E219FDE6A7BF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3194));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3195));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3196));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3197));
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3197));
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3198));
		return (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)NULL;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3199));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_2 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		int32_t L_3 = L_2->___m_Length;
		V_0 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3200));
		int32_t L_4 = V_0;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_5 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)(__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), (uint32_t)L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3201));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_6 = L_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3202));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_7;
		L_7 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_6, (int32_t)3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3202));
		V_1 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3203));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3204));
		intptr_t L_8;
		L_8 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3204));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3205));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3206));
		void* L_9;
		L_9 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3206));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_10 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		void* L_11 = L_10->___m_Buffer;
		int32_t L_12 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3207));
		int32_t L_13;
		L_13 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3207));
		int64_t L_14 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_12, L_13)),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3208));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_9, L_11, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3208));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3209));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3210));
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3210));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3211));
		return L_6;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayReadOnlyDebugView_1__ctor_mC51205271016A025833480BC02D36C1629D3D81E_gshared (NativeArrayReadOnlyDebugView_1_t9602DD9F52F478794DD161C2E2EF8153A126CB09* __this, ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayReadOnlyDebugView_1_t0C571856AC525866709B940F559CB3B41248BA27_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3212));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3213));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3214));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3215));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3215));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3216));
		ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 L_0 = ___0_array;
		__this->___m_Array = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3217));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* NativeArrayReadOnlyDebugView_1_get_Items_mF17EB47264BC808ED8A5F39E19DCE6886B1CB0E2_gshared (NativeArrayReadOnlyDebugView_1_t9602DD9F52F478794DD161C2E2EF8153A126CB09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayReadOnlyDebugView_1_t0C571856AC525866709B940F559CB3B41248BA27_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3218));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3219));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3220));
		ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* L_0 = (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*)(&__this->___m_Array);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3221));
		bool L_1;
		L_1 = ReadOnly_get_IsCreated_mADD8624D940450CB4F64C20BCFEFAC0065E485A2_inline(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3221));
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3222));
		return (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)NULL;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3223));
		ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* L_2 = (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*)(&__this->___m_Array);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3224));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_3;
		L_3 = ReadOnly_ToArray_mFD80D7B7BE13A74B4BE53E54CE3BCB5300F46D27(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3224));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayStaticId_1__cctor_m67213AA7112EE9BCD68829DC44441438CB42950A_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21188));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21189));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21190));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21191));
		SharedStatic_1_t91D24BF9DAB0EDD81AA3013F2C4CBD0A98040667 L_0;
		L_0 = SharedStatic_1_GetOrCreate_TisNativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18_m53A5B8A8CCAAEB875DD690A67F8574294C61B9A4((uint32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21191));
		((NativeArrayStaticId_1_t50C709E712A83F94158359DA374799781680B83C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_staticSafetyId = L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_v));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 26343));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 26344));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 26345));
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x;
		(&V_0)->___x = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y;
		(&V_0)->___y = L_3;
		(&V_0)->___z = (0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_v));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 26340));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 26341));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 26342));
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x;
		(&V_0)->___x = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y;
		(&V_0)->___y = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43203));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43204));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43205));
		int32_t L_0 = ___0_value;
		__this->___U3CpropagationU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 26346));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 26347));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 26348));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EventBase_get_currentTarget_m6F265B85FF86C35F62CFDF144B80B383DA9C503B_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_get_currentTarget_m6F265B85FF86C35F62CFDF144B80B383DA9C503B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, EventBase_get_currentTarget_m6F265B85FF86C35F62CFDF144B80B383DA9C503B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43359));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43360));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43361));
		RuntimeObject* L_0 = __this->___m_CurrentTarget;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* EventBase_get_elementTarget_mF6CFD6372FB247718797DB8927654F781821B94D_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_get_elementTarget_mF6CFD6372FB247718797DB8927654F781821B94D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, EventBase_get_elementTarget_mF6CFD6372FB247718797DB8927654F781821B94D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43284));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43285));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43286));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = __this->___U3CelementTargetU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43287));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43288));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43289));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_value;
		__this->___U3CelementTargetU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CelementTargetU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_10 = L_9;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		int32_t L_8 = V_1;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_7);
		il2cpp_codegen_memcpy((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), L_9, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), (void**)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), (void*)L_9);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_11, L_10, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E): *(void**)L_10), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_gshared_inline (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ManagerCallback_get_obj_mCC14E9648BBB5AA50205A291CE07E156786DE171_gshared_inline (ManagerCallback_t28D36691D76482F717019D47129402A9538A3736* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagerCallback_t51748194B8FE73F1BBCCF99A28F803329728027E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54032));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 54033));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 54034));
		RuntimeObject* L_0 = __this->___U3CobjU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_gshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	memset(V_0, 0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_1);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck((RuntimeObject*)L_3);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type((RuntimeObject*)L_3);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		__this->____object = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_8);
		__this->____index = 0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		__this->____length = L_10;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m39F9C3933A6F0AD9E9CE3A5B597A770C54F6FECF_gshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	memset(V_0, 0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000b:
	{
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA));
		return;
	}

IL_0013:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_2);
		if (L_3)
		{
			goto IL_003f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type((RuntimeObject*)L_4);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_003f:
	{
		int32_t L_9 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((!(((uint32_t)L_9) > ((uint32_t)L_11))))
		{
			goto IL_004a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_004a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_array;
		__this->____object = (RuntimeObject*)L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_12);
		int32_t L_13 = ___1_start;
		__this->____index = L_13;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___0_array;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		int32_t L_16 = ___1_start;
		__this->____length = ((int32_t)il2cpp_codegen_subtract(L_15, L_16));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m5ABFBF1303AB4B2B8AD03A4586CC52B6098DCBE9_gshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	memset(V_0, 0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_3);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = il2cpp_codegen_object_get_type((RuntimeObject*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_10 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		if ((!(((uint32_t)L_10) <= ((uint32_t)L_12))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___0_array;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		int32_t L_16 = ___1_start;
		if ((!(((uint32_t)L_13) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_15, L_16))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_array;
		__this->____object = (RuntimeObject*)L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_17);
		int32_t L_18 = ___1_start;
		__this->____index = L_18;
		int32_t L_19 = ___2_length;
		__this->____length = L_19;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m7EA183117D6958FFAC919F291510339F7792C7CD_gshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* ___0_manager, int32_t ___1_length, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0009:
	{
		MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* L_1 = ___0_manager;
		__this->____object = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_1);
		__this->____index = ((int32_t)-2147483648LL);
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m58BECFC48979D14A69D6AC373301B755043ACA9B_gshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* ___0_manager, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}

IL_0008:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000d:
	{
		MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* L_2 = ___0_manager;
		__this->____object = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_2);
		int32_t L_3 = ___1_start;
		__this->____index = ((int32_t)(L_3|((int32_t)-2147483648LL)));
		int32_t L_4 = ___2_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_gshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_obj;
		__this->____object = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)L_0);
		int32_t L_1 = ___1_start;
		__this->____index = L_1;
		int32_t L_2 = ___2_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_gshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____array;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_gshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____offset;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_gshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_gshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5))));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 >::Invoke(4, ((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5))));
		V_0 = L_2;
		int32_t L_3 = __this->____index;
		int32_t L_4 = __this->____length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_5;
		L_5 = Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		return L_5;
	}

IL_0034:
	{
		bool L_6 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		if (!L_6)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_7 = __this->____object;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_7, il2cpp_defaults.string_class));
		String_t* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_9 = V_1;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		Il2CppFullySharedGenericAny* L_11;
		L_11 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_10);
		String_t* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline((&L_14), L_11, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		V_0 = L_14;
		int32_t L_15 = __this->____index;
		int32_t L_16 = __this->____length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_17;
		L_17 = Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_inline((&V_0), L_15, L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		return L_17;
	}

IL_0089:
	{
		RuntimeObject* L_18 = __this->____object;
		if (!L_18)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_19 = __this->____object;
		int32_t L_20 = __this->____index;
		int32_t L_21 = __this->____length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline((&L_22), ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))), L_20, ((int32_t)(L_21&((int32_t)2147483647LL))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		return L_22;
	}

IL_00b4:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_23 = V_0;
		return L_23;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_Slice_mB1A59814638EB046790D5DB854A8D42BA2CB686F_gshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____length;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1&((int32_t)2147483647LL)));
		int32_t L_2 = ___0_start;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_001a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)24), NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____object;
		int32_t L_5 = __this->____index;
		int32_t L_6 = ___0_start;
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_start;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_9;
		memset((&L_9), 0, sizeof(L_9));
		Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_inline((&L_9), L_4, ((int32_t)il2cpp_codegen_add(L_5, L_6)), ((int32_t)il2cpp_codegen_subtract(L_7, L_8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_Slice_m6D92DFA60814F303301792ABF267BA35242FACA4_gshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____length;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1&((int32_t)2147483647LL)));
		int32_t L_2 = ___0_start;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_2) <= ((uint32_t)L_3))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = ___1_length;
		int32_t L_5 = V_1;
		int32_t L_6 = ___0_start;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))))))
		{
			goto IL_001e;
		}
	}

IL_0019:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001e:
	{
		RuntimeObject* L_7 = __this->____object;
		int32_t L_8 = __this->____index;
		int32_t L_9 = ___0_start;
		int32_t L_10 = ___1_length;
		int32_t L_11 = V_0;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_12;
		memset((&L_12), 0, sizeof(L_12));
		Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_inline((&L_12), L_7, ((int32_t)il2cpp_codegen_add(L_8, L_9)), ((int32_t)(L_10|((int32_t)(L_11&((int32_t)-2147483648LL))))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_6, L_7, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		int32_t L_9 = ___1_length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_3);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = il2cpp_codegen_object_get_type((RuntimeObject*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_10 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		if ((!(((uint32_t)L_10) <= ((uint32_t)L_12))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___0_array;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		int32_t L_16 = ___1_start;
		if ((!(((uint32_t)L_13) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_15, L_16))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_array;
		NullCheck((RuntimeArray*)L_17);
		uint8_t* L_18;
		L_18 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_17, NULL);
		Il2CppFullySharedGenericAny* L_19;
		L_19 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_18);
		int32_t L_20 = ___1_start;
		Il2CppFullySharedGenericAny* L_21;
		L_21 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_19, L_20, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_22;
		memset((&L_22), 0, sizeof(L_22));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_22), L_21);
		__this->____pointer = L_22;
		int32_t L_23 = ___2_length;
		__this->____length = L_23;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Span_1_ToArray_mBB0A9E11BBAA9FDE1D0C045FBA14F4CD3E84773E_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 28), (uint32_t)L_2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Il2CppFullySharedGenericAny* L_6;
		L_6 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_5);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisIl2CppFullySharedGenericAny_m7051201F0F2C986AB0084FB4A24BEE4D4733C5EB(L_6, L_8, (uint64_t)L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC MethodSignature_1_get_Header_m32123B412AAB6BAFBD90229B0704486F87175C8D_gshared_inline (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC L_0 = *(SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MethodSignature_1_get_ReturnType_m98A0D6B3A151625D6F80D6F377D2F5EF9AD02228_gshared_inline (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TType_tD9058234CAF64D688E46FE73EF8D9B0D64FA0D31 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TType_tD9058234CAF64D688E46FE73EF8D9B0D64FA0D31);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)), SizeOf_TType_tD9058234CAF64D688E46FE73EF8D9B0D64FA0D31);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TType_tD9058234CAF64D688E46FE73EF8D9B0D64FA0D31);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MethodSignature_1_get_RequiredParameterCount_m7917A3923C0105288D1B752E46A2FC1598BA4729_gshared_inline (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MethodSignature_1_get_GenericParameterCount_m51ECBE9A64B13A577BF9FB25259C14D4DBB73975_gshared_inline (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B MethodSignature_1_get_ParameterTypes_mE7FC3F1E7EF4B7A01FE761DDE1EF5A38A5499DDA_gshared_inline (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B L_0 = *(ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PointerCaptureEventBase_1_get_relatedTarget_mF2EDDB5F566EA8D9259348F5484661FB10656465_gshared_inline (PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerCaptureEventBase_1_t15BA0021A879320FBC36AEEC5A6F64B62371293C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 42787));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 42788));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 42789));
		RuntimeObject* L_0 = __this->___U3CrelatedTargetU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45496));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45497));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45498));
		int32_t L_0 = __this->___U3CmodifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45563));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45564));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45565));
		RuntimeObject* L_0 = __this->___U3CsourcePointerEventU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45569));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45570));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45571));
		bool L_0 = __this->___U3CrecomputeTopElementUnderMouseU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45502));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45503));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45504));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CmousePositionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_mouseDelta_mA9B00E7C5EAD63AE805FF883D81C73B88F781F3C_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45514));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45515));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45516));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CmouseDeltaU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45517));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45518));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45519));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CmouseDeltaU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 MouseEventBase_1_get_panelRay_m15BF165696F29D7A1F371DEC030C1E57CFA7E682_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45575));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45576));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45577));
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_0 = __this->___U3CpanelRayU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45578));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45579));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45580));
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_0 = ___0_value;
		__this->___U3CpanelRayU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45499));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45500));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45501));
		int32_t L_0 = ___0_value;
		__this->___U3CmodifiersU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45505));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45506));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45507));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CmousePositionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45511));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45512));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45513));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3ClocalMousePositionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45523));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45524));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45525));
		int32_t L_0 = ___0_value;
		__this->___U3CclickCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45529));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45530));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45531));
		int32_t L_0 = ___0_value;
		__this->___U3CbuttonU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45535));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45536));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45537));
		int32_t L_0 = ___0_value;
		__this->___U3CpressedButtonsU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45566));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45567));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45568));
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CsourcePointerEventU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourcePointerEventU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_recomputeTopElementUnderMouse_m5D34798DE02C9783D4F623F4F5BFAD3C254B51E5_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45572));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45573));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45574));
		bool L_0 = ___0_value;
		__this->___U3CrecomputeTopElementUnderMouseU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* MutationInput_get_Root_m915B63D2C097FFE14D3526BDFB912A263B1DF78A_gshared_inline (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* L_0 = __this->____root;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MutationInput_get_EqualityComparer_m47B4CEE19DCCAED7570F3BF7620C415F5F652C4C_gshared_inline (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____equalityComparer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MutationInput_get_Count_m6E3318EDC672F6F6AF1118A44C07EC9EC0A7DEB8_gshared_inline (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MutationInput_get_HashBucketEqualityComparer_m8D626B7818EAFA846C80901283441C465944BD89_gshared_inline (MutationInput_t4DC4CFA86949CD8DF0AC513DF5F2C35FB93AE034* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____hashBucketEqualityComparer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* MutationInput_get_Root_m2DBEE6A809C40133F0D17E4F4C741268EDC05EE0_gshared_inline (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* L_0 = __this->____root;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* MutationInput_get_Comparers_mEB1A03202DA1299DC403F2C80621A69391D8EC3F_gshared_inline (MutationInput_t7B8133D7CC9FE5A3192B79AF234618FC9DD569B8* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* L_0 = __this->____comparers;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Comparers_get_KeyComparer_m829F4ED35876B6C90CA646A7851CEFD576B79BDE_gshared_inline (Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____keyComparer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Comparers_get_ValueComparer_mE06E2FB2EF1F59557310213BAFDC5F3AF3049B36_gshared_inline (Comparers_tD4ABCAF924F353474E3F9066497DE76CABBF50A9* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____valueComparer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* MutationResult_get_Root_m6ECFD16A9CDEE2383F0C7E9EC6A57A1B16A8A230_gshared_inline (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* L_0 = __this->____root;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MutationResult_get_Count_mAB2B07AB4A5614A22BBC89D6924E1D4B58C2AC44_gshared_inline (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MutationResult_get_CountType_mFE8C9AD264FA165FA10B0C1817C2240250B9E830_gshared_inline (MutationResult_t23CE5AAA87A90B3AFD09CC9C2A4C76AB383DA0CC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____countType;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* MutationResult_get_Root_mEDAF44C3864D254F056571D526ECE5CADA021F28_gshared_inline (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* L_0 = __this->____root;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MutationResult_get_CountAdjustment_mCD5E1C6BFFE241697033430752F4D5E91C29A161_gshared_inline (MutationResult_tC49DFD05242D03C9B13DAB51292214DB4C842689* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____countAdjustment;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_gshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_t6E2931CC2E1AA6B9F666FF4270BD177E2114779B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2670));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2671));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2672));
		void* L_0 = __this->___m_Buffer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReadOnly_get_IsCreated_mADD8624D940450CB4F64C20BCFEFAC0065E485A2_gshared_inline (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnly_t1B08AA4D86F690C0C3566681B43FE4727DD112AB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3121));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3122));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3123));
		void* L_0 = __this->___m_Buffer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
