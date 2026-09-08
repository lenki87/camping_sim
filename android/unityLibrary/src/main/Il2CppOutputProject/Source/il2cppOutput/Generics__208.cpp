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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};

struct U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0;
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
struct ConditionalWeakTable_2_tD204B678FB5C57190177AACB4C57D5BDE9ED70E4;
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct Func_2_tC9AB857B1CD194F9FD9DF6190DFB57DB51896CFF;
struct Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_tF742E85673756F0B02FF588D4DD8B832677FA339;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IGrouping_2_t6485033266F07DCCDEBAFAEBC5894E6A5F04989C;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87;
struct Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950;
struct LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A;
struct LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2;
struct Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332;
struct LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47;
struct LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9;
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
struct StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F;
struct ThreadLocal_1_t321EE9A18CE29794903A428835D2505357D1B8E0;
struct ThreadLocal_1_t00329A71E6C7F663A0541E19E3B3A8901A630E8C;
struct EntryU5BU5D_t61FA3D706E7DE26AEDF070945C2A103BABDD1FDD;
struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52;
struct GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B;
struct PerCoreLockedStacksU5BU5D_t9CDDE75124B27D018B8CD21AC5D6E007D0686752;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct IntPtrU5BU5DU5BU5D_t1F156CEC28FED8F78BFBC6470EDD5A86CB33B0AF;
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E;
struct InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3;
struct ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290;
struct PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC;
struct ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B;
struct EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B;
struct PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888;
struct Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
struct L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004;
struct L1UnloadOperation_tEBCF4E27105FE2A55B0A24C3425DA1426080A89B;
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct MulticastDelegate_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct DoubleBufferedAwaitableList_t76D3153523C81B2FE4A2C4DCDED3E100C4F08BBE;
struct IStateMachineBox_tD4942DC2ED6681F5206C13363A829A111D7C9971;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_ContentLoadModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E23AA321EF731845C737F353F59F09E25C6BF84;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral30E2172DFAE92BBE498DE4CF18A50B9BC5433F7B;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral5DFAA7267207AEADA8575F0AB62F01872E372E9E;
IL2CPP_EXTERN_C String_t* _stringLiteral5F95443533EB97558F6B1ED3C5C3E9D1FF117BE0;
IL2CPP_EXTERN_C String_t* _stringLiteral76201BAA284740F8EC12C97BE0EE32688D2BA5D9;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C const RuntimeType* AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* L1UnloadOperation_tEBCF4E27105FE2A55B0A24C3425DA1426080A89B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Loadable_1_t38CF1ACC59C8F923C038984FB34453BBAC461F3F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StateMachineBox_1_tE44432E4A6ECE7F055A0D0FB746E9EE35A3995C3_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52;
struct GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B;
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* ___U3CU3E4__this;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* ___U3CgU3E5__2;
};
struct ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774  : public RuntimeObject
{
};
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5  : public RuntimeObject
{
};
struct Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA : public RuntimeObject {};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2 : public RuntimeObject {};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
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
struct List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E  : public RuntimeObject
{
	LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D  : public RuntimeObject
{
	InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565  : public RuntimeObject
{
	ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t7F4AA6F9C342BE74D42CA46E2EE7924B540577C8  : public RuntimeObject
{
	PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t81AE31C723E905C926562FE0E86DA9B00022EA43  : public RuntimeObject
{
	ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tE250E7115251CE18B77DAB637654B67982239650  : public RuntimeObject
{
	EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA9133CFCF211C161818125828AEB3F0BF145615A  : public RuntimeObject
{
	PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87  : public RuntimeObject
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ____listeners;
	Func_2_tC9AB857B1CD194F9FD9DF6190DFB57DB51896CFF* ____filter;
	int32_t ____objectID;
	int32_t ____listenerReaderCount;
};
struct LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17  : public RuntimeObject
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B  : public RuntimeObject
{
	CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC  : public RuntimeObject
{
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t12BEECEFBBB3CF0B3EB7D62B7410226EF3FB9B49  : public RuntimeObject
{
	IntPtrU5BU5DU5BU5D_t1F156CEC28FED8F78BFBC6470EDD5A86CB33B0AF* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332  : public RuntimeObject
{
	RuntimeObject* ___comparer;
	GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* ___groupings;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* ___lastGrouping;
	int32_t ___count;
};
struct LowLevelDictionary_2_t39FD470E201F39ECE87AC1192F2878362EEEE6CD  : public RuntimeObject
{
	EntryU5BU5D_t61FA3D706E7DE26AEDF070945C2A103BABDD1FDD* ____buckets;
	int32_t ____numEntries;
	int32_t ____version;
	RuntimeObject* ____comparer;
};
struct LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47  : public RuntimeObject
{
	EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* ____buckets;
	int32_t ____numEntries;
	int32_t ____version;
	RuntimeObject* ____comparer;
};
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F : public RuntimeObject {};
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25  : public RuntimeObject
{
	String_t* ___U3CNameU3Ek__BackingField;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
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
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
typedef Il2CppFullySharedGenericStruct Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0;
struct LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2  : public EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9
{
};
struct LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9  : public LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0
{
};
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source;
	int32_t ____index;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F  : public ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_t9CDDE75124B27D018B8CD21AC5D6E007D0686752* ____buckets;
	int32_t ____callbackCreated;
};
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888  : public EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25
{
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
struct GUID_t5A864F38F4B08EF979BAB20DD927A927A8D6076F 
{
	uint32_t ___m_Value0;
	uint32_t ___m_Value1;
	uint32_t ___m_Value2;
	uint32_t ___m_Value3;
};
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0;
	uint64_t ___u64_1;
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
struct L1LoadingHandle_tD6E01CCF32EA7B36408A4694732CBA1C5E046A58 
{
	uint64_t ___value;
};
struct SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816 
{
	int32_t ___m_owner;
};
struct SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_marshaled_pinvoke
{
	int32_t ___m_owner;
};
struct SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_marshaled_com
{
	int32_t ___m_owner;
};
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread;
	RuntimeObject* ___m_ThreadStartArg;
	RuntimeObject* ___pending_exception;
	MulticastDelegate_t* ___m_Delegate;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext;
	bool ___m_ExecutionContextBelongsToOuterScope;
	RuntimeObject* ___principal;
	int32_t ___principal_version;
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
struct AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5 
{
	RuntimeObject* ____stateMachineBox;
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ____resultingCoroutine;
};
struct AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5_marshaled_pinvoke
{
	RuntimeObject* ____stateMachineBox;
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ____resultingCoroutine;
};
struct AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5_marshaled_com
{
	RuntimeObject* ____stateMachineBox;
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ____resultingCoroutine;
};
struct Awaiter_t5D0EA628306CFACF132061071EE06FB6EFCADCD7 
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ____awaited;
};
struct Awaiter_t5D0EA628306CFACF132061071EE06FB6EFCADCD7_marshaled_pinvoke
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ____awaited;
};
struct Awaiter_t5D0EA628306CFACF132061071EE06FB6EFCADCD7_marshaled_com
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ____awaited;
};
struct U3CLoadAsyncU3Ed__15_t5946C841D8ECC141CEAA548C59846718E1BF9F5A 
{
	int32_t ___U3CU3E1__state;
	AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5 ___U3CU3Et__builder;
	Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950* ___U3CU3E4__this;
	Awaiter_t5D0EA628306CFACF132061071EE06FB6EFCADCD7 ___U3CU3Eu__1;
};
struct MemoryPressure_t7AAFC0465C6ACE5222645A59D867C7FD22F28381 
{
	int32_t ___value__;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr;
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	Il2CppMethodPointer ___m_completeCallback;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr;
	Il2CppMethodPointer ___m_completeCallback;
};
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo;
};
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo;
};
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo;
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
struct FileIdentifierType_tC96C3335F8A27572B9A6B8C25B5E1CD3AB5FF27B 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct AwaitableHandle_tB2B09DEB71AC833F9FAAA89DE69A68298730C219 
{
	intptr_t ____handle;
};
struct AwaiterCompletionThreadAffinity_tA3EB0585E35E1148753545994D7BAFD083695295 
{
	int32_t ___value__;
};
struct Nullable_1_t8154443ECC6BCF418455D6C2363D110F097DBE96 
{
	bool ___hasValue;
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___value;
};
struct L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
};
struct L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
};
struct L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
};
struct L1UnloadOperation_tEBCF4E27105FE2A55B0A24C3425DA1426080A89B  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
};
struct L1UnloadOperation_tEBCF4E27105FE2A55B0A24C3425DA1426080A89B_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
};
struct L1UnloadOperation_tEBCF4E27105FE2A55B0A24C3425DA1426080A89B_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
};
struct LoadableReference_t1A8CB68D2423CF6CD65897D4DBA173BA71C976E5 
{
	GUID_t5A864F38F4B08EF979BAB20DD927A927A8D6076F ___m_GUID;
	int32_t ___m_FileIdentifierType;
	int64_t ___m_LocalIdentifierInFile;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___m_ObjectIdHash;
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
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Func_2_tC9AB857B1CD194F9FD9DF6190DFB57DB51896CFF  : public MulticastDelegate_t
{
};
struct Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950  : public RuntimeObject
{
	LoadableReference_t1A8CB68D2423CF6CD65897D4DBA173BA71C976E5 ___m_LoadableRef;
	Il2CppSharedGenericObject* ___m_Target;
	L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004* ___m_LoadOperation;
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB  : public RuntimeObject
{
	SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816 ____spinLock;
	AwaitableHandle_tB2B09DEB71AC833F9FAAA89DE69A68298730C219 ____handle;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____exceptionToRethrow;
	bool ____managedAwaitableDone;
	int32_t ____completionThreadAffinity;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____continuation;
	Nullable_1_t8154443ECC6BCF418455D6C2363D110F097DBE96 ____cancelTokenRegistration;
	DoubleBufferedAwaitableList_t76D3153523C81B2FE4A2C4DCDED3E100C4F08BBE* ____managedCompletionQueue;
};
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E_StaticFields
{
	LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E* ___s_emptyArray;
};
struct List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D_StaticFields
{
	InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* ___s_emptyArray;
};
struct List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields
{
	ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___s_emptyArray;
};
struct List_1_t7F4AA6F9C342BE74D42CA46E2EE7924B540577C8_StaticFields
{
	PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC* ___s_emptyArray;
};
struct List_1_t81AE31C723E905C926562FE0E86DA9B00022EA43_StaticFields
{
	ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B* ___s_emptyArray;
};
struct List_1_tE250E7115251CE18B77DAB637654B67982239650_StaticFields
{
	EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___s_emptyArray;
};
struct List_1_tA9133CFCF211C161818125828AEB3F0BF145615A_StaticFields
{
	PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___s_emptyArray;
};
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F_StaticFields
{
	ThreadLocal_1_t321EE9A18CE29794903A428835D2505357D1B8E0* ____pool;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_tD204B678FB5C57190177AACB4C57D5BDE9ED70E4* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F_ThreadStaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ___t_tlsBuckets;
};
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields
{
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* ___Log;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr;
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture;
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture;
};
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
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
struct Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB_StaticFields
{
	bool ____nextFrameAndEndOfFrameWiredUp;
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ____nextFrameAndEndOfFrameWiredUpCTRegistration;
	DoubleBufferedAwaitableList_t76D3153523C81B2FE4A2C4DCDED3E100C4F08BBE* ____nextFrameAwaitables;
	DoubleBufferedAwaitableList_t76D3153523C81B2FE4A2C4DCDED3E100C4F08BBE* ____endOfFrameAwaitables;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____synchronizationContext;
	int32_t ____mainThreadId;
	ThreadLocal_1_t00329A71E6C7F663A0541E19E3B3A8901A630E8C* ____pool;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F  : public RuntimeArray
{
	ALIGN_FIELD (8) __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* m_Items[1];

	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B  : public RuntimeArray
{
	ALIGN_FIELD (8) Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* m_Items[1];

	inline Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* m_Items[1];

	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Index_IndexOfReference_TisIl2CppSharedGenericObject_mB76E615050927E51843A5C228930CC093DC71440_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_list, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Listeners_1_IndexOfReference_mB57653157CB53F43A4A17BE0404F0DFD229AA96B_gshared (Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87* __this, Il2CppSharedGenericObject* ___0_listener, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_TrimExcess_m915005BC7D68487C2006E5A31D87D1CAED751407_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Loadable_1_get_isValid_m968E93CC05E8937A91591269D864F5AF6ED32093_gshared (Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loadable_1_HandleOperationCompletion_m663E0BA8D56758678F2928B5CBA777C883474371_gshared (Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AwaitableAsyncMethodBuilder_Start_TisIl2CppFullySharedGenericAny_m584C2B6895ECAA2DD4956C1F4A911714CCB1F048_gshared_inline (AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5* __this, Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JitHelpers_UnsafeEnumCastLong_TisIl2CppFullySharedGenericStruct_m6EF2FAAF622DABAA1B6E2B7F06A11F368F3DDCA0_gshared (Il2CppFullySharedGenericStruct ___0_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mFCFFB9230A4881E211659A1A772D554D857B988F_gshared (EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12__ctor_m953833D39380D4BB54F9C489EB5914C5BFF90E92_gshared (U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_GetEnumerator_m47E3B98B370E167AA41F09ABEE90DA88F5472414_gshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lookup_2_InternalGetHashCode_m157EBC022CFC1205E1D913F757883DB1D18B486A_gshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2_Resize_m48EEED38EF3F4EEDD302E1CED9FA7E8CA6B43B9E_gshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grouping__ctor_mCDE1A56686DFD326A7C0A3FD0494F04597C8A7A4_gshared (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482_gshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m50DA99B3EE92A0B3C7CBF76172DCF3DDDFCB2C93_gshared (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775_gshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_gshared_inline (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AwaitableAsyncMethodBuilder_EnsureStateMachineBox_TisIl2CppFullySharedGenericAny_m027F4C9980DF3238DD843EC0C9C472B104FFA5F1_gshared (AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateMachineBox_1_set_StateMachine_mD57AB08454AD27476552126989498B394AF9DB3F_gshared_inline (StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* StateMachineBox_1_get_MoveNext_m144F1A010A18BA055832A8768EF767D334939B64_gshared_inline (StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)(__this, method);
}
inline int32_t List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)(__this, method);
}
inline void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline int32_t Index_IndexOfReference_TisIl2CppSharedGenericObject_mB76E615050927E51843A5C228930CC093DC71440 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_list, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))Index_IndexOfReference_TisIl2CppSharedGenericObject_mB76E615050927E51843A5C228930CC093DC71440_gshared)(___0_list, ___1_item, method);
}
inline int32_t Listeners_1_IndexOfReference_mB57653157CB53F43A4A17BE0404F0DFD229AA96B (Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87* __this, Il2CppSharedGenericObject* ___0_listener, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87*, Il2CppSharedGenericObject*, const RuntimeMethod*))Listeners_1_IndexOfReference_mB57653157CB53F43A4A17BE0404F0DFD229AA96B_gshared)(__this, ___0_listener, method);
}
inline void List_1_set_Item_mCD8F7775F9C4842958A7188EBC0EBF1BE03101EF (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny)___1_value, method);
}
inline void List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared)(__this, ___0_index, method);
}
inline void List_1_TrimExcess_m3837DE03BEA738B4FB4A586787ABAB0638DFCD7F (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_TrimExcess_m915005BC7D68487C2006E5A31D87D1CAED751407_gshared)(__this, method);
}
inline Il2CppSharedGenericObject* List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	Il2CppSharedGenericObject* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L1LoadingOperation_get_asset_m4FB451C36709B45074053BA2E7F6388852F1E2CA (L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadableReference_ToString_m3AB6265DAFA36500D4AD94A401549D59BD718469 (LoadableReference_t1A8CB68D2423CF6CD65897D4DBA173BA71C976E5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadableReference_get_isValid_mDBFE35DDF8955BD130F317CE2981696463093356 (LoadableReference_t1A8CB68D2423CF6CD65897D4DBA173BA71C976E5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
inline bool Loadable_1_get_isValid_m968E93CC05E8937A91591269D864F5AF6ED32093 (Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950*, const RuntimeMethod*))Loadable_1_get_isValid_m968E93CC05E8937A91591269D864F5AF6ED32093_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004* LoadableManager_LoadObjectAsync_m2FB19F84C19E465AC975DA116119770434B357BE (LoadableReference_t1A8CB68D2423CF6CD65897D4DBA173BA71C976E5 ___0_weakRef, const RuntimeMethod* method) ;
inline void Loadable_1_HandleOperationCompletion_m663E0BA8D56758678F2928B5CBA777C883474371 (Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950* __this, const RuntimeMethod* method)
{
	((  void (*) (Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950*, const RuntimeMethod*))Loadable_1_HandleOperationCompletion_m663E0BA8D56758678F2928B5CBA777C883474371_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR L1LoadingHandle_tD6E01CCF32EA7B36408A4694732CBA1C5E046A58 L1LoadingOperation_get_Handle_mF8152191E39669141EE4C36CD9A652A2CB701394 (L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR L1UnloadOperation_tEBCF4E27105FE2A55B0A24C3425DA1426080A89B* LoadableManager_ReleaseObjectAsync_mB76BAF7C65E5399FB990A87315E06591CBA23EDB (L1LoadingHandle_tD6E01CCF32EA7B36408A4694732CBA1C5E046A58 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool L1UnloadOperation_WaitForCompletion_m92D11738696E3993266267DDB98CA3275F1FEC2B (L1UnloadOperation_tEBCF4E27105FE2A55B0A24C3425DA1426080A89B* __this, int32_t ___0_timeout, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5 AwaitableAsyncMethodBuilder_Create_mD6A89155DEFF4C87BE9A089AA72E92205DB91E33 (const RuntimeMethod* method) ;
inline void AwaitableAsyncMethodBuilder_Start_TisU3CLoadAsyncU3Ed__15_t5946C841D8ECC141CEAA548C59846718E1BF9F5A_mAB75B93248A4060BBE3B5855D7443C8517E37F88_inline (AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5* __this, U3CLoadAsyncU3Ed__15_t5946C841D8ECC141CEAA548C59846718E1BF9F5A* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5*, U3CLoadAsyncU3Ed__15_t5946C841D8ECC141CEAA548C59846718E1BF9F5A*, const RuntimeMethod*))AwaitableAsyncMethodBuilder_Start_TisIl2CppFullySharedGenericAny_m584C2B6895ECAA2DD4956C1F4A911714CCB1F048_gshared_inline)(__this, ___0_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* AwaitableAsyncMethodBuilder_get_Task_m1FE8850A25295DD87F43F000042E749D97AA79EE (AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
inline int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0 (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, int32_t ___0_bufferId, int32_t ___1_bufferSize, int32_t ___2_poolId, const RuntimeMethod* method) ;
inline int64_t JitHelpers_UnsafeEnumCastLong_TisIl2CppFullySharedGenericStruct_m6EF2FAAF622DABAA1B6E2B7F06A11F368F3DDCA0 (Il2CppFullySharedGenericStruct ___0_val, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Il2CppFullySharedGenericStruct, const RuntimeMethod*))JitHelpers_UnsafeEnumCastLong_TisIl2CppFullySharedGenericStruct_m6EF2FAAF622DABAA1B6E2B7F06A11F368F3DDCA0_gshared)(___0_val, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m336C109B6C7CFACF4C9C81001B5F77C764DBDFC1 (EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*, const RuntimeMethod*))EqualityComparer_1__ctor_mFCFFB9230A4881E211659A1A772D554D857B988F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_SetType_m5D07E1C38028872E49EA01129ED5BF1AF674C475 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline)(method);
}
inline void U3CGetEnumeratorU3Ed__12__ctor_m953833D39380D4BB54F9C489EB5914C5BFF90E92 (U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__12__ctor_m953833D39380D4BB54F9C489EB5914C5BFF90E92_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* Lookup_2_GetEnumerator_m47E3B98B370E167AA41F09ABEE90DA88F5472414 (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332*, const RuntimeMethod*))Lookup_2_GetEnumerator_m47E3B98B370E167AA41F09ABEE90DA88F5472414_gshared)(__this, method);
}
inline int32_t Lookup_2_InternalGetHashCode_m157EBC022CFC1205E1D913F757883DB1D18B486A (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Lookup_2_InternalGetHashCode_m157EBC022CFC1205E1D913F757883DB1D18B486A_gshared)((Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332*)__this, ___0_key, method);
}
inline void Lookup_2_Resize_m48EEED38EF3F4EEDD302E1CED9FA7E8CA6B43B9E (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, const RuntimeMethod* method)
{
	((  void (*) (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332*, const RuntimeMethod*))Lookup_2_Resize_m48EEED38EF3F4EEDD302E1CED9FA7E8CA6B43B9E_gshared)(__this, method);
}
inline void Grouping__ctor_mCDE1A56686DFD326A7C0A3FD0494F04597C8A7A4 (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* __this, const RuntimeMethod* method)
{
	((  void (*) (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*, const RuntimeMethod*))Grouping__ctor_mCDE1A56686DFD326A7C0A3FD0494F04597C8A7A4_gshared)(__this, method);
}
inline void DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482 (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5*, const RuntimeMethod*))DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482_gshared)(__this, method);
}
inline void LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3 (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, int32_t, const RuntimeMethod*))LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3_gshared)(__this, ___0_capacity, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671 (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method)
{
	return ((  Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, Il2CppFullySharedGenericAny, const RuntimeMethod*))LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671_gshared)((LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*)__this, ___0_key, method);
}
inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	return ((  Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F_gshared)((LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*)__this, ___0_key, ___1_value, method);
}
inline int32_t LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04 (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, Il2CppFullySharedGenericAny, int32_t, const RuntimeMethod*))LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04_gshared)((LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*)__this, ___0_key, ___1_numBuckets, method);
}
inline void Entry__ctor_m50DA99B3EE92A0B3C7CBF76172DCF3DDDFCB2C93 (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, const RuntimeMethod*))Entry__ctor_m50DA99B3EE92A0B3C7CBF76172DCF3DDDFCB2C93_gshared)(__this, method);
}
inline void LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, const RuntimeMethod*))LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB_gshared)(__this, method);
}
inline void LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, const RuntimeMethod*))LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F_gshared)(__this, method);
}
inline void LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB_gshared)(__this, ___0_capacity, method);
}
inline void Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775 (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9*, const RuntimeMethod*))Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775_gshared)(__this, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
inline void LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309 (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309_gshared)(__this, ___0_min, method);
}
inline void LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E_gshared)(__this, ___0_value, method);
}
inline void LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0 (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0_gshared)(__this, ___0_index, ___1_collection, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, Il2CppFullySharedGenericAny, const RuntimeMethod*))LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB_gshared)((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, ___0_item, method);
}
inline int32_t Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16 (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16_gshared)((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, ___0_index, ___1_item, method);
}
inline void LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F_gshared)(__this, ___0_index, method);
}
inline bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_inline (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_gshared_inline)((Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)__this, ___0_obj, method);
}
inline void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
inline RuntimeObject* AwaitableAsyncMethodBuilder_EnsureStateMachineBox_TisIl2CppFullySharedGenericAny_m027F4C9980DF3238DD843EC0C9C472B104FFA5F1 (AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5*, const RuntimeMethod*))AwaitableAsyncMethodBuilder_EnsureStateMachineBox_TisIl2CppFullySharedGenericAny_m027F4C9980DF3238DD843EC0C9C472B104FFA5F1_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaitable_set_CompletionThreadAffinity_m49E60BD2B0B2D17AEE76A032FCB266155E14291B (Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline void StateMachineBox_1_set_StateMachine_mD57AB08454AD27476552126989498B394AF9DB3F_inline (StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	((  void (*) (StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F*, Il2CppFullySharedGenericAny, const RuntimeMethod*))StateMachineBox_1_set_StateMachine_mD57AB08454AD27476552126989498B394AF9DB3F_gshared_inline)((StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F*)__this, ___0_value, method);
}
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* StateMachineBox_1_get_MoveNext_m144F1A010A18BA055832A8768EF767D334939B64_inline (StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F* __this, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F*, const RuntimeMethod*))StateMachineBox_1_get_MoveNext_m144F1A010A18BA055832A8768EF767D334939B64_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listeners_1__ctor_m175DAF8DF34577A589E7C3281CD701BD5AC0D6A7_gshared (Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87* __this, int32_t ___0_ObjectID, Func_2_tC9AB857B1CD194F9FD9DF6190DFB57DB51896CFF* ___1_notifyFilter, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____listeners = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listeners), (void*)L_0);
		Func_2_tC9AB857B1CD194F9FD9DF6190DFB57DB51896CFF* L_1 = ___1_notifyFilter;
		__this->____filter = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filter), (void*)L_1);
		int32_t L_2 = ___0_ObjectID;
		__this->____objectID = L_2;
		__this->____listenerReaderCount = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Listeners_1_get_HasListeners_m9EDC324483C9D5458332C075D0B386BA475C41DE_gshared (Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->____listeners;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return (bool)((((int32_t)0) < ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listeners_1_Add_mC3D4409ED55845959F3891FC6E03CBEB3B29F730_gshared (Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87* __this, Il2CppSharedGenericObject* ___0_listener, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->____listeners;
		Il2CppSharedGenericObject* L_1 = ___0_listener;
		NullCheck(L_0);
		List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Listeners_1_IndexOfReference_mB57653157CB53F43A4A17BE0404F0DFD229AA96B_gshared (Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87* __this, Il2CppSharedGenericObject* ___0_listener, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->____listeners;
		Il2CppSharedGenericObject* L_1 = ___0_listener;
		int32_t L_2;
		L_2 = Index_IndexOfReference_TisIl2CppSharedGenericObject_mB76E615050927E51843A5C228930CC093DC71440(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listeners_1_Remove_mF1B0B0A16A8A59B4BF18A4FCD5F5DBDB9D7B3BC7_gshared (Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87* __this, Il2CppSharedGenericObject* ___0_listener, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppSharedGenericObject* L_0 = ___0_listener;
		int32_t L_1;
		L_1 = Listeners_1_IndexOfReference_mB57653157CB53F43A4A17BE0404F0DFD229AA96B(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_2 = __this->____listeners;
		int32_t L_3 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_4 = V_1;
		NullCheck(L_2);
		List_1_set_Item_mCD8F7775F9C4842958A7188EBC0EBF1BE03101EF(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_5 = __this->____listenerReaderCount;
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_6 = __this->____listeners;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_8 = __this->____listeners;
		NullCheck(L_8);
		List_1_TrimExcess_m3837DE03BEA738B4FB4A586787ABAB0638DFCD7F(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listeners_1_RemoveNullListeners_mB3817FF0BD852EC7BF6E774C637EF8FCC55B64A5_gshared (Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87* __this, int32_t ___0_nullIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_nullIndex;
		V_0 = L_0;
		goto IL_0027;
	}

IL_0004:
	{
		CHECK_PAUSE_POINT;
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_1 = __this->____listeners;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Il2CppSharedGenericObject* L_3;
		L_3 = List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_4 = __this->____listeners;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C(L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}

IL_0027:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)0) <= ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loadable_1__ctor_mF1436B44CC408E1E691DBD7E0CFF1CA072D16A2F_gshared (Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950* __this, LoadableReference_t1A8CB68D2423CF6CD65897D4DBA173BA71C976E5* ___0_loadableRef, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loadable_1_t38CF1ACC59C8F923C038984FB34453BBAC461F3F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_loadableRef));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 232));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 233));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 234));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 235));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 235));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 236));
		LoadableReference_t1A8CB68D2423CF6CD65897D4DBA173BA71C976E5* L_0 = ___0_loadableRef;
		LoadableReference_t1A8CB68D2423CF6CD65897D4DBA173BA71C976E5 L_1 = (*(LoadableReference_t1A8CB68D2423CF6CD65897D4DBA173BA71C976E5*)L_0);
		__this->___m_LoadableRef = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 237));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadableReference_t1A8CB68D2423CF6CD65897D4DBA173BA71C976E5 Loadable_1_get_loadableReference_m994309D907C71831AF92898BED22006D06C29E61_gshared (Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loadable_1_t38CF1ACC59C8F923C038984FB34453BBAC461F3F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 238));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 239));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 240));
		LoadableReference_t1A8CB68D2423CF6CD65897D4DBA173BA71C976E5 L_0 = __this->___m_LoadableRef;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Loadable_1_get_target_m5D14F01619B20BB06662F731C0CD938475D9B263_gshared (Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loadable_1_t38CF1ACC59C8F923C038984FB34453BBAC461F3F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 241));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 242));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 243));
		Il2CppSharedGenericObject* L_0 = __this->___m_Target;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 244));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 244));
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004* L_2 = __this->___m_LoadOperation;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 245));
		L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004* L_3 = __this->___m_LoadOperation;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 246));
		NullCheck(L_3);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4;
		L_4 = L1LoadingOperation_get_asset_m4FB451C36709B45074053BA2E7F6388852F1E2CA(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 246));
		__this->___m_Target = ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Target), (void*)((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
	}

IL_0036:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 247));
		Il2CppSharedGenericObject* L_5 = __this->___m_Target;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Loadable_1_ToString_mEEEF8B7FE4FDF0CD47EF0F66278AD6C3E7E56BD5_gshared (Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loadable_1_t38CF1ACC59C8F923C038984FB34453BBAC461F3F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 248));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 249));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 250));
		LoadableReference_t1A8CB68D2423CF6CD65897D4DBA173BA71C976E5* L_0 = (LoadableReference_t1A8CB68D2423CF6CD65897D4DBA173BA71C976E5*)(&__this->___m_LoadableRef);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 251));
		String_t* L_1;
		L_1 = LoadableReference_ToString_m3AB6265DAFA36500D4AD94A401549D59BD718469(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 251));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Loadable_1_get_isValid_m968E93CC05E8937A91591269D864F5AF6ED32093_gshared (Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loadable_1_t38CF1ACC59C8F923C038984FB34453BBAC461F3F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 252));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 253));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 254));
		LoadableReference_t1A8CB68D2423CF6CD65897D4DBA173BA71C976E5* L_0 = (LoadableReference_t1A8CB68D2423CF6CD65897D4DBA173BA71C976E5*)(&__this->___m_LoadableRef);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 255));
		bool L_1;
		L_1 = LoadableReference_get_isValid_mDBFE35DDF8955BD130F317CE2981696463093356(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 255));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Loadable_1_get_isLoaded_mDD3B8D13339E53A366889E508203524C1227BFD7_gshared (Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loadable_1_t38CF1ACC59C8F923C038984FB34453BBAC461F3F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 256));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 257));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 258));
		Il2CppSharedGenericObject* L_0 = __this->___m_Target;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 259));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 259));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Loadable_1_Load_mB456441A812031C03E2FC30E36DED5059A4D47AE_gshared (Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loadable_1_t38CF1ACC59C8F923C038984FB34453BBAC461F3F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E23AA321EF731845C737F353F59F09E25C6BF84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DFAA7267207AEADA8575F0AB62F01872E372E9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F95443533EB97558F6B1ED3C5C3E9D1FF117BE0);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppSharedGenericObject* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 260));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 261));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 262));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 263));
		bool L_0;
		L_0 = Loadable_1_get_isValid_m968E93CC05E8937A91591269D864F5AF6ED32093(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 263));
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 264));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 3)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 265));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 265));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 266));
		NullCheck((RuntimeObject*)__this);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)__this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 266));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 267));
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0E23AA321EF731845C737F353F59F09E25C6BF84, (RuntimeObject*)L_2, (RuntimeObject*)L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 267));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 268));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 268));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 269));
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_5 = V_0;
		return L_5;
	}

IL_0031:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 270));
		L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004* L_6 = __this->___m_LoadOperation;
		if (!L_6)
		{
			goto IL_0067;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 271));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 3)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 272));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 272));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 273));
		NullCheck((RuntimeObject*)__this);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)__this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 273));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 274));
		String_t* L_10;
		L_10 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral5DFAA7267207AEADA8575F0AB62F01872E372E9E, (RuntimeObject*)L_8, (RuntimeObject*)L_9, (RuntimeObject*)_stringLiteral5F95443533EB97558F6B1ED3C5C3E9D1FF117BE0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 274));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 275));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 275));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 276));
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_0;
		return L_11;
	}

IL_0067:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 277));
		Il2CppSharedGenericObject* L_12 = __this->___m_Target;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 278));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 278));
		if (!L_13)
		{
			goto IL_0091;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 279));
		LoadableReference_t1A8CB68D2423CF6CD65897D4DBA173BA71C976E5 L_14 = __this->___m_LoadableRef;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 280));
		L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004* L_15;
		L_15 = LoadableManager_LoadObjectAsync_m2FB19F84C19E465AC975DA116119770434B357BE(L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 280));
		__this->___m_LoadOperation = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LoadOperation), (void*)L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 281));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 282));
		Loadable_1_HandleOperationCompletion_m663E0BA8D56758678F2928B5CBA777C883474371(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 282));
	}

IL_0091:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 283));
		Il2CppSharedGenericObject* L_16 = __this->___m_Target;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loadable_1_HandleOperationCompletion_m663E0BA8D56758678F2928B5CBA777C883474371_gshared (Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&L1UnloadOperation_tEBCF4E27105FE2A55B0A24C3425DA1426080A89B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loadable_1_t38CF1ACC59C8F923C038984FB34453BBAC461F3F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30E2172DFAE92BBE498DE4CF18A50B9BC5433F7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76201BAA284740F8EC12C97BE0EE32688D2BA5D9);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	L1UnloadOperation_tEBCF4E27105FE2A55B0A24C3425DA1426080A89B* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 284));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 285));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 286));
		L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004* L_0 = __this->___m_LoadOperation;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 287));
		return;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 288));
		L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004* L_1 = __this->___m_LoadOperation;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 289));
		NullCheck(L_1);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = L1LoadingOperation_get_asset_m4FB451C36709B45074053BA2E7F6388852F1E2CA(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 289));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 290));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = V_0;
		__this->___m_Target = ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Target), (void*)((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 291));
		Il2CppSharedGenericObject* L_4 = __this->___m_Target;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 292));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 292));
		if (!L_5)
		{
			goto IL_008a;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 293));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 293));
		if (!L_7)
		{
			goto IL_008a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 294));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 3)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 295));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 295));
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 296));
		NullCheck((RuntimeObject*)__this);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)__this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 296));
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 3)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 297));
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 297));
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 298));
		NullCheck((RuntimeObject*)L_18);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((RuntimeObject*)L_18);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 298));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 299));
		NullCheck((RuntimeObject*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_19);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 299));
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 300));
		String_t* L_21;
		L_21 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral30E2172DFAE92BBE498DE4CF18A50B9BC5433F7B, L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 300));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 301));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 301));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 302));
		goto IL_00b2;
	}

IL_008a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 303));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 304));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 304));
		if (!L_23)
		{
			goto IL_00b2;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 305));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 3)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 306));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 306));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 307));
		NullCheck((RuntimeObject*)__this);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)__this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 307));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 308));
		String_t* L_27;
		L_27 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral76201BAA284740F8EC12C97BE0EE32688D2BA5D9, (RuntimeObject*)L_25, (RuntimeObject*)L_26, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 308));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 309));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_27, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 309));
	}

IL_00b2:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 310));
		Il2CppSharedGenericObject* L_28 = __this->___m_Target;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 311));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 311));
		if (L_29)
		{
			goto IL_00ce;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 312));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 312));
		if (!L_31)
		{
			goto IL_00f1;
		}
	}

IL_00ce:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 313));
		L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004* L_32 = __this->___m_LoadOperation;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 314));
		NullCheck(L_32);
		L1LoadingHandle_tD6E01CCF32EA7B36408A4694732CBA1C5E046A58 L_33;
		L_33 = L1LoadingOperation_get_Handle_mF8152191E39669141EE4C36CD9A652A2CB701394(L_32, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 314));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 315));
		L1UnloadOperation_tEBCF4E27105FE2A55B0A24C3425DA1426080A89B* L_34;
		L_34 = LoadableManager_ReleaseObjectAsync_mB76BAF7C65E5399FB990A87315E06591CBA23EDB(L_33, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 315));
		V_1 = L_34;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 316));
		L1UnloadOperation_tEBCF4E27105FE2A55B0A24C3425DA1426080A89B* L_35 = V_1;
		if (!L_35)
		{
			goto IL_00ea;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 317));
		L1UnloadOperation_tEBCF4E27105FE2A55B0A24C3425DA1426080A89B* L_36 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 318));
		NullCheck(L_36);
		bool L_37;
		L_37 = L1UnloadOperation_WaitForCompletion_m92D11738696E3993266267DDB98CA3275F1FEC2B(L_36, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 318));
	}

IL_00ea:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 319));
		__this->___m_LoadOperation = (L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LoadOperation), (void*)(L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004*)NULL);
	}

IL_00f1:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 320));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* Loadable_1_LoadAsync_m9B8F8774E5335F868A556D21D43BE8E42C80360C_gshared (Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950* __this, const RuntimeMethod* method) 
{
	U3CLoadAsyncU3Ed__15_t5946C841D8ECC141CEAA548C59846718E1BF9F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5 L_0;
		L_0 = AwaitableAsyncMethodBuilder_Create_mD6A89155DEFF4C87BE9A089AA72E92205DB91E33(NULL);
		(&V_0)->___U3CU3Et__builder = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->____stateMachineBox), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->____resultingCoroutine), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this), (void*)__this);
		(&V_0)->___U3CU3E1__state = (-1);
		AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5* L_1 = (AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5*)(&(&V_0)->___U3CU3Et__builder);
		AwaitableAsyncMethodBuilder_Start_TisU3CLoadAsyncU3Ed__15_t5946C841D8ECC141CEAA548C59846718E1BF9F5A_mAB75B93248A4060BBE3B5855D7443C8517E37F88_inline(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5* L_2 = (AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5*)(&(&V_0)->___U3CU3Et__builder);
		Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* L_3;
		L_3 = AwaitableAsyncMethodBuilder_get_Task_m1FE8850A25295DD87F43F000042E749D97AA79EE(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loadable_1_Release_m8EEF1D8EA785CE181786EEC6F10BD94E971DF23A_gshared (Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loadable_1_t38CF1ACC59C8F923C038984FB34453BBAC461F3F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 321));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 322));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 323));
		L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004* L_0 = __this->___m_LoadOperation;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 324));
		L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004* L_1 = __this->___m_LoadOperation;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 325));
		NullCheck(L_1);
		L1LoadingHandle_tD6E01CCF32EA7B36408A4694732CBA1C5E046A58 L_2;
		L_2 = L1LoadingOperation_get_Handle_mF8152191E39669141EE4C36CD9A652A2CB701394(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 325));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 326));
		L1UnloadOperation_tEBCF4E27105FE2A55B0A24C3425DA1426080A89B* L_3;
		L_3 = LoadableManager_ReleaseObjectAsync_mB76BAF7C65E5399FB990A87315E06591CBA23EDB(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 326));
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 327));
		__this->___m_LoadOperation = (L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LoadOperation), (void*)(L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 328));
		Il2CppSharedGenericObject** L_4 = (Il2CppSharedGenericObject**)(&__this->___m_Target);
		il2cpp_codegen_initobj(L_4, sizeof(Il2CppSharedGenericObject*));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 329));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loadable_1_ReleaseSync_m9340DDADA2ED83357EF9307E61A4513E5285E3BE_gshared (Loadable_1_tB200A2F345E710C8FF022658365AE204CEE8E950* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&L1UnloadOperation_tEBCF4E27105FE2A55B0A24C3425DA1426080A89B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loadable_1_t38CF1ACC59C8F923C038984FB34453BBAC461F3F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	L1UnloadOperation_tEBCF4E27105FE2A55B0A24C3425DA1426080A89B* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 330));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 331));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 332));
		L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004* L_0 = __this->___m_LoadOperation;
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 333));
		L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004* L_1 = __this->___m_LoadOperation;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 334));
		NullCheck(L_1);
		L1LoadingHandle_tD6E01CCF32EA7B36408A4694732CBA1C5E046A58 L_2;
		L_2 = L1LoadingOperation_get_Handle_mF8152191E39669141EE4C36CD9A652A2CB701394(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 334));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 335));
		L1UnloadOperation_tEBCF4E27105FE2A55B0A24C3425DA1426080A89B* L_3;
		L_3 = LoadableManager_ReleaseObjectAsync_mB76BAF7C65E5399FB990A87315E06591CBA23EDB(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 335));
		V_0 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 336));
		__this->___m_LoadOperation = (L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LoadOperation), (void*)(L1LoadingOperation_tC3F6D1505B93ED3643921513529D7EEE9493D004*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 337));
		Il2CppSharedGenericObject** L_4 = (Il2CppSharedGenericObject**)(&__this->___m_Target);
		il2cpp_codegen_initobj(L_4, sizeof(Il2CppSharedGenericObject*));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 338));
		L1UnloadOperation_tEBCF4E27105FE2A55B0A24C3425DA1426080A89B* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 339));
		L1UnloadOperation_tEBCF4E27105FE2A55B0A24C3425DA1426080A89B* L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 340));
		NullCheck(L_6);
		bool L_7;
		L_7 = L1UnloadOperation_WaitForCompletion_m92D11738696E3993266267DDB98CA3275F1FEC2B(L_6, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 340));
	}

IL_0037:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ContentLoadModule + 341));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m43E5E7A2F0386A3BEF9CFD2705141DB4E81D52B0_gshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = (uint32_t)L_3;
	}

IL_002b:
	{
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* LockedStack_TryPop_m25DDC8C5A35FAD9A7D146972888DE02342BD5DAB_gshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		V_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_1 = __this->____arrays;
		int32_t L_2 = __this->____count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_1;
		__this->____count = L_3;
		int32_t L_4 = V_1;
		NullCheck(L_1);
		int32_t L_5 = L_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_7 = __this->____arrays;
		int32_t L_8 = __this->____count;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, NULL);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
	}

IL_0038:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_m2611CBE6E011E00269FB6B0610403EA10DEFCA1C_gshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_5 = NULL;
	int32_t V_6 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = (uint32_t)G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0119;
					}
				}
				{
					LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_3, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_010e_1;
				}
			}

IL_0046_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_11 = ((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log;
				V_3 = L_11;
				V_4 = 1;
				int32_t L_12 = ___2_pressure;
				if ((((int32_t)L_12) == ((int32_t)1)))
				{
					goto IL_0089_1;
				}
			}
			{
				int32_t L_13 = ___2_pressure;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00d3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_14 = ___3_bucketSize;
				if ((((int32_t)L_14) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0069_1;
				}
			}
			{
				int32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0069_1:
			{
				int32_t L_16;
				L_16 = Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB(il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				if ((((int32_t)L_16) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0078_1;
				}
			}
			{
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0078_1:
			{
				int32_t L_18;
				L_18 = Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB(il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				if ((((int32_t)L_18) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00d3_1;
				}
			}
			{
				int32_t L_19 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				goto IL_00d3_1;
			}

IL_0089_1:
			{
				V_4 = 2;
				goto IL_00d3_1;
			}

IL_008e_1:
			{
				CHECK_PAUSE_POINT;
				__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_20 = __this->____arrays;
				int32_t L_21 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
				int32_t L_22 = V_6;
				__this->____count = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_20);
				int32_t L_24 = L_23;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_5 = L_25;
				__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_26 = __this->____arrays;
				int32_t L_27 = __this->____count;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, NULL);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_28 = V_3;
				NullCheck((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25*)L_28);
				bool L_29;
				L_29 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25*)L_28, NULL);
				if (!L_29)
				{
					goto IL_00d3_1;
				}
			}
			{
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_30 = V_3;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = V_5;
				NullCheck((RuntimeObject*)L_31);
				int32_t L_32;
				L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_31);
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = V_5;
				NullCheck(L_33);
				int32_t L_34 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_33)->max_length),NULL));
				int32_t L_35 = ___1_id;
				NullCheck(L_30);
				ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0(L_30, L_32, L_34, L_35, NULL);
			}

IL_00d3_1:
			{
				int32_t L_36 = __this->____count;
				if ((((int32_t)L_36) <= ((int32_t)0)))
				{
					goto IL_00e6_1;
				}
			}
			{
				int32_t L_37 = V_4;
				int32_t L_38 = L_37;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
				if ((((int32_t)L_38) > ((int32_t)0)))
				{
					goto IL_008e_1;
				}
			}

IL_00e6_1:
			{
				int32_t L_39 = __this->____count;
				if ((((int32_t)L_39) <= ((int32_t)0)))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_40 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_40) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_41 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, ((int32_t)15000)));
			}

IL_010e_1:
			{
				goto IL_011a;
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

IL_011a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_mDC1C46693A1D2D00E172498967CA24C98E5205D4_gshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_0 = (__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F*)(__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongEnumEqualityComparer_1_Equals_m87226A6E5044C64940B1E62F62D70FCE887EA333_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, Il2CppFullySharedGenericStruct ___0_x, Il2CppFullySharedGenericStruct ___1_y, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	int64_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, ___0_x, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
		int64_t L_2;
		L_2 = JitHelpers_UnsafeEnumCastLong_TisIl2CppFullySharedGenericStruct_m6EF2FAAF622DABAA1B6E2B7F06A11F368F3DDCA0(il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_3, ___1_y, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
		int64_t L_5;
		L_5 = JitHelpers_UnsafeEnumCastLong_TisIl2CppFullySharedGenericStruct_m6EF2FAAF622DABAA1B6E2B7F06A11F368F3DDCA0(il2cpp_codegen_memcpy(L_4, L_3, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		V_0 = L_5;
		int64_t L_6 = V_0;
		return (bool)((((int64_t)L_2) == ((int64_t)L_6))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongEnumEqualityComparer_1_GetHashCode_m61BF4CA9A33282177F9DD76BB500FCF4D37CBBBE_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, Il2CppFullySharedGenericStruct ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	int64_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, ___0_obj, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
		int64_t L_2;
		L_2 = JitHelpers_UnsafeEnumCastLong_TisIl2CppFullySharedGenericStruct_m6EF2FAAF622DABAA1B6E2B7F06A11F368F3DDCA0(il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_0), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongEnumEqualityComparer_1_Equals_m280B770B270E901648E8FDD542D25AF52CA6277D_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2*)((LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongEnumEqualityComparer_1_GetHashCode_m1B5FABC53D2E5598D4A5A1270A520F1B4641E11C_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_0;
		L_0 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck((MemberInfo_t*)L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_0);
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongEnumEqualityComparer_1__ctor_mE638EE50B5DDF2DB094F6BF8703B23872496CBA6_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1__ctor_m336C109B6C7CFACF4C9C81001B5F77C764DBDFC1((EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongEnumEqualityComparer_1__ctor_mA0738549DB4AF45B2147E7AEE297513FD4CC4F0D_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_information, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1__ctor_m336C109B6C7CFACF4C9C81001B5F77C764DBDFC1((EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongEnumEqualityComparer_1_GetObjectData_mD2CD7924C13DE56E2A77BC35201C20CEC5FEA139_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m5D07E1C38028872E49EA01129ED5BF1AF674C475(L_0, L_2, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2__ctor_m4A4D75DF5543CBBCA4F46BD626491C48CCD19F0E_gshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->___comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)L_2);
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_3 = (GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B*)(GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), (uint32_t)7);
		__this->___groupings = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groupings), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_GetEnumerator_m47E3B98B370E167AA41F09ABEE90DA88F5472414_gshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0* L_0 = (U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		U3CGetEnumeratorU3Ed__12__ctor_m953833D39380D4BB54F9C489EB5914C5BFF90E92(L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_System_Collections_IEnumerable_GetEnumerator_m44E299E786D62CCB11A00FF185A7F514C03D50A4_gshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = Lookup_2_GetEnumerator_m47E3B98B370E167AA41F09ABEE90DA88F5472414(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lookup_2_InternalGetHashCode_m157EBC022CFC1205E1D913F757883DB1D18B486A_gshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_key : &___0_key), SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_0);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_2 = __this->___comparer;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_key : &___0_key), SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? L_3: *(void**)L_3));
		return ((int32_t)(L_4&((int32_t)2147483647LL)));
	}

IL_001b:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* Lookup_2_GetGrouping_m32B7EBEA5CFFA4B56BEEC877518351A407B92C8C_gshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, Il2CppFullySharedGenericAny ___0_key, bool ___1_create, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
	const Il2CppFullySharedGenericAny L_14 = L_0;
	const Il2CppFullySharedGenericAny L_30 = L_0;
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
	const Il2CppFullySharedGenericAny L_15 = L_1;
	int32_t V_0 = 0;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* V_1 = NULL;
	int32_t V_2 = 0;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* V_3 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_key : &___0_key), SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		int32_t L_2;
		L_2 = Lookup_2_InternalGetHashCode_m157EBC022CFC1205E1D913F757883DB1D18B486A(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698): *(void**)L_0), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_0 = L_2;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_3 = __this->___groupings;
		int32_t L_4 = V_0;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_5 = __this->___groupings;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		NullCheck(L_3);
		int32_t L_7 = ((int32_t)(L_4%L_6));
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		goto IL_0042;
	}

IL_001c:
	{
		CHECK_PAUSE_POINT;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_9 = V_1;
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),1));
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject* L_12 = __this->___comparer;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_13 = V_1;
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),0)), SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_key : &___0_key), SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		NullCheck(L_12);
		bool L_16;
		L_16 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? L_14: *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? L_15: *(void**)L_15));
		if (!L_16)
		{
			goto IL_003b;
		}
	}
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_17 = V_1;
		return L_17;
	}

IL_003b:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_18 = V_1;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_19 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),4));
		V_1 = L_19;
	}

IL_0042:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_20 = V_1;
		if (L_20)
		{
			goto IL_001c;
		}
	}
	{
		bool L_21 = ___1_create;
		if (!L_21)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_22 = __this->___count;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_23 = __this->___groupings;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((!(((uint32_t)L_22) == ((uint32_t)L_24))))
		{
			goto IL_0061;
		}
	}
	{
		Lookup_2_Resize_m48EEED38EF3F4EEDD302E1CED9FA7E8CA6B43B9E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
	}

IL_0061:
	{
		int32_t L_25 = V_0;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_26 = __this->___groupings;
		NullCheck(L_26);
		int32_t L_27 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_26)->max_length),NULL));
		V_2 = ((int32_t)(L_25%L_27));
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_28 = (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
		Grouping__ctor_mCDE1A56686DFD326A7C0A3FD0494F04597C8A7A4(L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_3 = L_28;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_29 = V_3;
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_key : &___0_key), SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		NullCheck(L_29);
		il2cpp_codegen_write_instance_field_data(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),0), L_30, SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_31 = V_3;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		il2cpp_codegen_write_instance_field_data<int32_t>(L_31, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),1), L_32);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_33 = V_3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_34 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23), (uint32_t)1);
		NullCheck(L_33);
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),2), L_34);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_35 = V_3;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_36 = __this->___groupings;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_35);
		il2cpp_codegen_write_instance_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*>(L_35, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),4), L_39);
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_40 = __this->___groupings;
		int32_t L_41 = V_2;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_42 = V_3;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)L_42);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_43 = __this->___lastGrouping;
		if (L_43)
		{
			goto IL_00b4;
		}
	}
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_44 = V_3;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_45 = V_3;
		NullCheck(L_44);
		il2cpp_codegen_write_instance_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*>(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),5), L_45);
		goto IL_00d1;
	}

IL_00b4:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_46 = V_3;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_47 = __this->___lastGrouping;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_48 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),5));
		NullCheck(L_46);
		il2cpp_codegen_write_instance_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*>(L_46, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),5), L_48);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_49 = __this->___lastGrouping;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_50 = V_3;
		NullCheck(L_49);
		il2cpp_codegen_write_instance_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*>(L_49, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),5), L_50);
	}

IL_00d1:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_51 = V_3;
		__this->___lastGrouping = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastGrouping), (void*)L_51);
		int32_t L_52 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_52, 1));
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_53 = V_3;
		return L_53;
	}

IL_00e8:
	{
		return (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2_Resize_m48EEED38EF3F4EEDD302E1CED9FA7E8CA6B43B9E_gshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* V_1 = NULL;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* V_2 = NULL;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->___count;
		if (((int64_t)L_0 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_0 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 2)), 1));
		int32_t L_1 = V_0;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_2 = (GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B*)(GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), (uint32_t)L_1);
		V_1 = L_2;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_3 = __this->___lastGrouping;
		V_2 = L_3;
	}

IL_0019:
	{
		CHECK_PAUSE_POINT;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_4 = V_2;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_5 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),5));
		V_2 = L_5;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_6 = V_2;
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),1));
		int32_t L_8 = V_0;
		V_3 = ((int32_t)(L_7%L_8));
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_9 = V_2;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_10 = V_1;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		il2cpp_codegen_write_instance_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*>(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),4), L_13);
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_14 = V_1;
		int32_t L_15 = V_3;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_16 = V_2;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)L_16);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_17 = V_2;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_18 = __this->___lastGrouping;
		if ((!(((RuntimeObject*)(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)L_17) == ((RuntimeObject*)(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)L_18))))
		{
			goto IL_0019;
		}
	}
	{
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_19 = V_1;
		__this->___groupings = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groupings), (void*)L_19);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m6893497702070CC68AC3BAB751834E9FF68C4528_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* L_0 = (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A(__this, ((int32_t)17), (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___1_comparer;
		__this->____comparer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_0);
		int32_t L_1 = ___0_capacity;
		LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_set_Item_mCA9C09B6AFCF6CC5CE6A0C40EA78FC75689EF04D_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const uint32_t SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_12 = L_5;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
	const Il2CppFullySharedGenericAny L_11 = L_9;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_6;
		L_6 = LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? il2cpp_codegen_memcpy(L_5, L_4, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9): *(void**)L_4), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_6;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		NullCheck(L_8);
		il2cpp_codegen_write_instance_field_data(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),1), L_9, SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14;
		L_14 = LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? il2cpp_codegen_memcpy(L_12, L_10, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? il2cpp_codegen_memcpy(L_13, L_11, SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900): *(void**)L_11), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___0_capacity;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_2 = (EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)(EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), (uint32_t)L_1);
		__this->____buckets = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_2);
		__this->____numEntries = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelDictionary_2_Remove_m70E88A5B684A3A944B6569781B7B3918196A98E6_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	const Il2CppFullySharedGenericAny L_11 = L_0;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_13 = L_4;
	int32_t V_0 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_1 = NULL;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_5;
		L_5 = LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? il2cpp_codegen_memcpy(L_4, L_3, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9): *(void**)L_3), 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_5;
		V_1 = (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)NULL;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_6 = __this->____buckets;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		goto IL_0083;
	}

IL_0029:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_10 = __this->____comparer;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_12 = V_2;
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),0)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_10);
		bool L_14;
		L_14 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_13: *(void**)L_13));
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_15 = V_1;
		if (L_15)
		{
			goto IL_0050;
		}
	}
	{
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_16 = __this->____buckets;
		int32_t L_17 = V_0;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_18 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_19 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_19);
		goto IL_005c;
	}

IL_0050:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_20 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_21 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_22 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2));
		NullCheck(L_20);
		il2cpp_codegen_write_instance_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*>(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2), L_22);
	}

IL_005c:
	{
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_24 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		return (bool)1;
	}

IL_007a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_25 = V_2;
		V_1 = L_25;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_26 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_27 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_instance_field_data_pointer(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2));
		V_2 = L_27;
	}

IL_0083:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_28 = V_2;
		if (L_28)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_8 = L_0;
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_10 = L_1;
	int32_t V_0 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_2;
		L_2 = LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9): *(void**)L_0), 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_2;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_3 = __this->____buckets;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		goto IL_0031;
	}

IL_0014:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_7 = __this->____comparer;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_9 = V_1;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),0)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_7);
		bool L_11;
		L_11 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
		if (!L_11)
		{
			goto IL_002a;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_12 = V_1;
		return L_12;
	}

IL_002a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_13 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2));
		V_1 = L_14;
	}

IL_0031:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_15 = V_1;
		if (L_15)
		{
			goto IL_0014;
		}
	}
	{
		return (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const uint32_t SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_0 = (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
		Entry__ctor_m50DA99B3EE92A0B3C7CBF76172DCF3DDDFCB2C93(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_0 = L_0;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_1 = V_0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_1);
		il2cpp_codegen_write_instance_field_data(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),0), L_2, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_3 = V_0;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		NullCheck(L_3);
		il2cpp_codegen_write_instance_field_data(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),1), L_4, SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_7;
		L_7 = LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? il2cpp_codegen_memcpy(L_6, L_5, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9): *(void**)L_5), 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_1 = L_7;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = V_0;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		il2cpp_codegen_write_instance_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*>(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2), L_12);
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_13 = __this->____buckets;
		int32_t L_14 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_15 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_15);
		int32_t L_16 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____numEntries;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_18 = __this->____buckets;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_19, 2)))))
		{
			goto IL_005a;
		}
	}
	{
		LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_005a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	int32_t V_0 = 0;
	EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* V_1 = NULL;
	int32_t V_2 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_3 = NULL;
	int32_t V_4 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_0 = __this->____buckets;
			NullCheck(L_0);
			int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
			V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, 2)), 1));
			int32_t L_2 = V_0;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_3 = (EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)(EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), (uint32_t)L_2);
			V_1 = L_3;
			V_2 = 0;
			goto IL_004f_1;
		}

IL_0018_1:
		{
			CHECK_PAUSE_POINT;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_4 = __this->____buckets;
			int32_t L_5 = V_2;
			NullCheck(L_4);
			int32_t L_6 = L_5;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
			V_3 = L_7;
			goto IL_0048_1;
		}

IL_0023_1:
		{
			CHECK_PAUSE_POINT;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = V_3;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_9 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2));
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_10 = V_3;
			il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),0)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
			int32_t L_12 = V_0;
			int32_t L_14;
			L_14 = LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? il2cpp_codegen_memcpy(L_13, L_11, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9): *(void**)L_11), L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
			V_4 = L_14;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_15 = V_3;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_16 = V_1;
			int32_t L_17 = V_4;
			NullCheck(L_16);
			int32_t L_18 = L_17;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
			NullCheck(L_15);
			il2cpp_codegen_write_instance_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*>(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2), L_19);
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_20 = V_1;
			int32_t L_21 = V_4;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_22 = V_3;
			NullCheck(L_20);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_22);
			V_3 = L_9;
		}

IL_0048_1:
		{
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_23 = V_3;
			if (L_23)
			{
				goto IL_0023_1;
			}
		}
		{
			int32_t L_24 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		}

IL_004f_1:
		{
			int32_t L_25 = V_2;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_26 = __this->____buckets;
			NullCheck(L_26);
			int32_t L_27 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_26)->max_length),NULL));
			if ((((int32_t)L_25) < ((int32_t)L_27)))
			{
				goto IL_0018_1;
			}
		}
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_28 = V_1;
			__this->____buckets = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_28);
			goto IL_0066;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0063;
		}
		throw e;
	}

CATCH_0063:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_29 = ((OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)IL2CPP_GET_ACTIVE_EXCEPTION(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0066;
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		RuntimeObject* L_0 = __this->____comparer;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_1: *(void**)L_1));
		int32_t L_3 = ___1_numBuckets;
		if (!L_3)
		{
			G_B2_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
			goto IL_0018;
		}
		G_B1_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
	}
	{
		int32_t L_4 = ___1_numBuckets;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_0018:
	{
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		return ((int32_t)(G_B3_1%G_B3_0));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_m7AB0E8E5B20FFDC048A5EF35FE2D5BFC411168BE_gshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_m4B122A24C900A82393070E3BC47A5195E41D0166_gshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelListWithIList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4370070FFE2C281C957687075D458D7367685370_gshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2192B77A7D1721166B77434FAE475580AEABF35A_gshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0 L_0 = alloca(SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		memset(L_0, 0, SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
		Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775((Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_IEnumerable_GetEnumerator_mC47144515E8A260A0737260ED6A11C0D5C3B74DE_gshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0 L_0 = alloca(SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		memset(L_0, 0, SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
		Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775((Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_0);
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0015:
	{
		int32_t L_2 = ___0_capacity;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_3);
		return;
	}

IL_0024:
	{
		int32_t L_4 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_4);
		__this->____items = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_get_Capacity_mE34B1F6427145BD1BC7EC9E5F2290027CB634FAC_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = ___0_value;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_7 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_7);
		V_0 = L_8;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_0046:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_get_Count_m606E086DB7EE87F6497FC018F90AE7988456C6A4_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_get_Item_mE1B6F0331605C882D5552283F3E039DAB1CFE249_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Item_m43802D3D871A9B9E33879921E12CC84BADF9D917_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___1_value : &___1_value), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_3);
		il2cpp_codegen_memcpy((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), L_5, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), (void**)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), (void*)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Add_mA79D24F8FC36DBAE441CD350B69E58E559F3A77A_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = __this->____size;
		LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_001e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		int32_t L_5 = __this->____size;
		V_0 = L_5;
		int32_t L_6 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_0;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B4_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		NullCheck(L_3);
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		int32_t L_7 = ___0_min;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_8 = ___0_min;
		V_0 = L_8;
	}

IL_0028:
	{
		int32_t L_9 = V_0;
		LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_002f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_AddRange_mBE88210260B339F084E453A719D44DBD91025233_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Clear_mE1C2D67C7C00C6323E9825A0ED4946C0C0EAD499_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		int32_t L_2 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		__this->____size = 0;
	}

IL_0022:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Contains_mF7E0C9FBFE03FCE5AB7A8A5F2372A6398AC0F027_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), L_0);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_000c:
	{
		CHECK_PAUSE_POINT;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		il2cpp_codegen_memcpy(L_5, (L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		bool L_6 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), L_5);
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0025:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->____size;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_12;
		L_12 = LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? il2cpp_codegen_memcpy(L_11, L_10, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159): *(void**)L_10), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)1;
	}

IL_003c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_CopyTo_mF495B6C8191B5C8929B60BC9F7502FE518DC81DE_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_2 = __this->____size;
		int32_t L_4;
		L_4 = Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159): *(void**)L_1), 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_6 = __this->____size;
		LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0032:
	{
		int32_t L_7 = ___0_index;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0058;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		int32_t L_14 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
	}

IL_0058:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->____items;
		int32_t L_16 = ___0_index;
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___1_item : &___1_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_15);
		il2cpp_codegen_memcpy((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), L_17, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), (void**)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), (void*)L_17);
		int32_t L_18 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_50 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_51 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->____size;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_6 = V_0;
		if (!L_6)
		{
			goto IL_00d8;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_7);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_10 = __this->____size;
		int32_t L_11 = V_1;
		LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309(__this, ((int32_t)il2cpp_codegen_add(L_10, L_11)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0071;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->____items;
		int32_t L_17 = ___0_index;
		int32_t L_18 = V_1;
		int32_t L_19 = __this->____size;
		int32_t L_20 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, L_15, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_add(L_17, L_18)), ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0071:
	{
		RuntimeObject* L_21 = V_0;
		if ((!(((RuntimeObject*)(LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this) == ((RuntimeObject*)(RuntimeObject*)L_21))))
		{
			goto IL_00aa;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = __this->____items;
		int32_t L_24 = ___0_index;
		int32_t L_25 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, L_24, L_25, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = __this->____items;
		int32_t L_27 = ___0_index;
		int32_t L_28 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29 = __this->____items;
		int32_t L_30 = ___0_index;
		int32_t L_31 = __this->____size;
		int32_t L_32 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_26, ((int32_t)il2cpp_codegen_add(L_27, L_28)), (RuntimeArray*)L_29, ((int32_t)il2cpp_codegen_multiply(L_30, 2)), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), NULL);
		goto IL_00c8;
	}

IL_00aa:
	{
		int32_t L_33 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_34 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_33);
		V_2 = L_34;
		RuntimeObject* L_35 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = V_2;
		NullCheck(L_35);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_35, L_36, 0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_37 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = __this->____items;
		int32_t L_39 = ___0_index;
		int32_t L_40 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, L_39, L_40, NULL);
	}

IL_00c8:
	{
		int32_t L_41 = __this->____size;
		int32_t L_42 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_41, L_42));
		goto IL_0107;
	}

IL_00d8:
	{
		RuntimeObject* L_43 = ___1_collection;
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_43);
		V_3 = L_44;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fd:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					RuntimeObject* L_45 = V_3;
					if (!L_45)
					{
						goto IL_0106;
					}
				}
				{
					RuntimeObject* L_46 = V_3;
					NullCheck((RuntimeObject*)L_46);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				}

IL_0106:
				{
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_00f3_1;
			}

IL_00e1_1:
			{
				CHECK_PAUSE_POINT;
				int32_t L_47 = ___0_index;
				int32_t L_48 = L_47;
				___0_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
				RuntimeObject* L_49 = V_3;
				NullCheck(L_49);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 16), L_49, (Il2CppFullySharedGenericAny*)L_50);
				LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16(__this, L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? il2cpp_codegen_memcpy(L_51, L_50, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159): *(void**)L_50), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
			}

IL_00f3_1:
			{
				RuntimeObject* L_52 = V_3;
				NullCheck((RuntimeObject*)L_52);
				bool L_53;
				L_53 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_52);
				if (L_53)
				{
					goto IL_00e1_1;
				}
			}
			{
				goto IL_0107;
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

IL_0107:
	{
		int32_t L_54 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_54, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Remove_m9CA49DFEEE8490053D50ACB37A61A63ECFDF6164_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_2;
		L_2 = LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159): *(void**)L_0), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_4 = V_0;
		LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_RemoveAll_m7EA2BB7ADDD12BF71851BEF2E164FD40AD97757E_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_21 = L_9;
	const Il2CppFullySharedGenericAny L_32 = L_9;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0012:
	{
		CHECK_PAUSE_POINT;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_5 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_5);
		bool L_10;
		L_10 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_inline(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_9: *(void**)L_9), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (!L_10)
		{
			goto IL_0012;
		}
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->____size;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_003e;
		}
	}
	{
		return 0;
	}

IL_003e:
	{
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		goto IL_008e;
	}

IL_0044:
	{
		CHECK_PAUSE_POINT;
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0048:
	{
		CHECK_PAUSE_POINT;
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____size;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_0065;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_17 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->____items;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_17);
		bool L_22;
		L_22 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_inline(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_21: *(void**)L_21), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (L_22)
		{
			goto IL_0044;
		}
	}

IL_0065:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = __this->____size;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_008e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = __this->____items;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = __this->____items;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		NullCheck(L_28);
		int32_t L_31 = L_30;
		il2cpp_codegen_memcpy(L_32, (L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_25);
		il2cpp_codegen_memcpy((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), L_32, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), (void**)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), (void*)L_32);
	}

IL_008e:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = __this->____size;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0048;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_35 = __this->____items;
		int32_t L_36 = V_0;
		int32_t L_37 = __this->____size;
		int32_t L_38 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_35, L_36, ((int32_t)il2cpp_codegen_subtract(L_37, L_38)), NULL);
		int32_t L_39 = __this->____size;
		int32_t L_40 = V_0;
		int32_t L_41 = V_0;
		__this->____size = L_41;
		int32_t L_42 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_42, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	memset(V_0, 0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->____size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0048;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), NULL);
	}

IL_0048:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____items;
		int32_t L_13 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_12);
		il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
		int32_t L_15 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__cctor_m663DD9A631105882B519C495A2D1077501A0FF6E_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AwaitableAsyncMethodBuilder_Start_TisIl2CppFullySharedGenericAny_m584C2B6895ECAA2DD4956C1F4A911714CCB1F048_gshared_inline (AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5* __this, Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaitableAsyncMethodBuilder_tEED8886993D22F5480D9BF117DA59548001C12D5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TStateMachine_tC507A5488D410F89AF851C1E4A738C9D67F310EB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TStateMachine_tC507A5488D410F89AF851C1E4A738C9D67F310EB);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_stateMachine));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29589));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29590));
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* G_B2_0 = NULL;
	StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F* G_B2_1 = NULL;
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* G_B1_0 = NULL;
	StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* G_B3_1 = NULL;
	StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F* G_B3_2 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29591));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29592));
		RuntimeObject* L_0;
		L_0 = AwaitableAsyncMethodBuilder_EnsureStateMachineBox_TisIl2CppFullySharedGenericAny_m027F4C9980DF3238DD843EC0C9C472B104FFA5F1(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29592));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29593));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29594));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29595));
		Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* L_1;
		L_1 = AwaitableAsyncMethodBuilder_get_Task_m1FE8850A25295DD87F43F000042E749D97AA79EE(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29595));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29596));
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2;
		L_2 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29596));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29597));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29597));
		il2cpp_codegen_runtime_class_init_inline(Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB_StaticFields*)il2cpp_codegen_static_fields_for(Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB_il2cpp_TypeInfo_var))->____mainThreadId;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			G_B2_0 = L_1;
			G_B2_1 = ((StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F*)((StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 1))));
			goto IL_0025;
		}
		G_B1_0 = L_1;
		G_B1_1 = ((StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F*)((StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		G_B3_2 = ((StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F*)G_B1_1);
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = ((StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F*)G_B2_1);
	}

IL_0026:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29598));
		NullCheck(G_B3_1);
		Awaitable_set_CompletionThreadAffinity_m49E60BD2B0B2D17AEE76A032FCB266155E14291B(G_B3_1, (int32_t)G_B3_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29598));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29599));
		StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F* L_5 = G_B3_2;
		Il2CppFullySharedGenericAny* L_6 = ___0_stateMachine;
		il2cpp_codegen_memcpy(L_7, L_6, SizeOf_TStateMachine_tC507A5488D410F89AF851C1E4A738C9D67F310EB);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29600));
		NullCheck(L_5);
		StateMachineBox_1_set_StateMachine_mD57AB08454AD27476552126989498B394AF9DB3F_inline(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_7: *(void**)L_7), il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29600));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29601));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29602));
		NullCheck(L_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = StateMachineBox_1_get_MoveNext_m144F1A010A18BA055832A8768EF767D334939B64_inline(L_5, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29602));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29603));
		NullCheck(L_8);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29603));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29604));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_gshared_inline (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateMachineBox_1_set_StateMachine_mD57AB08454AD27476552126989498B394AF9DB3F_gshared_inline (StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateMachineBox_1_tE44432E4A6ECE7F055A0D0FB746E9EE35A3995C3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TStateMachine_tF8E3809ACD709E2EF351A0B8956403110387B712 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TStateMachine_tF8E3809ACD709E2EF351A0B8956403110387B712);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_value : &___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29666));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29667));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29668));
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_value : &___0_value), SizeOf_TStateMachine_tF8E3809ACD709E2EF351A0B8956403110387B712);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_0, SizeOf_TStateMachine_tF8E3809ACD709E2EF351A0B8956403110387B712);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* StateMachineBox_1_get_MoveNext_m144F1A010A18BA055832A8768EF767D334939B64_gshared_inline (StateMachineBox_1_t07BDFE3036CB07A0F7D99DFDFAB61EA6506DD54F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateMachineBox_1_tE44432E4A6ECE7F055A0D0FB746E9EE35A3995C3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29675));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29676));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29677));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		return L_0;
	}
}
