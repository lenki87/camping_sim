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
template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker;
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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

struct U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5;
struct U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899;
struct Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IComparer_1_tE248DFC6B9D1880D8CAE8C06B57DA11B68A0D974;
struct IComparer_1_tC828258BF64C92409CEF4E1E0FA05578A17BD49A;
struct IComparer_1_tEF02CBFE07263DD389B385B476CB8477C31E1742;
struct IComparer_1_t4483F9B9F43C7B0F8D4FEEAE12FAFDD3F9CF81FD;
struct IComparer_1_t7E870201BF4F9A2658830A9FA35ED97BC476A8B4;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IEnumerable_1_t46F3B5E3A267684D65A117AEA1C7A010A75366F6;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct KeyCollection_tB7BC87667C78593ECB7349D950AA35F0C07A5951;
struct KeyList_t791F62B0EDC79A84DDCB76BEEA83C628ED1FD4C2;
struct KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A;
struct List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct Node_t4D1BDA77093BD57E306A2832CDB56161594F5729;
struct Node_tE8721B405DD07DADFB21ECFDDB276F78C1C74A77;
struct Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5;
struct Node_tE0BABBCFF00BFC195C5C53276A3B8E7FE0392704;
struct Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB;
struct SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075;
struct SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D;
struct SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32;
struct Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71;
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A;
struct SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98;
struct TreeSubSet_t8773A6ADED6E5D012AEABA38FC2C57685EC2A751;
struct TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016;
struct ValueCollection_t8830C05E9E7F8E46BC95A17F50D03182CDF67312;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct ValueList_t7DFFD21832AF344A997D07E4E13129EBB3FAF2D3;
struct ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A;
struct EntryU5BU5D_t4825D8B6926355B02E574ECB2C34A0855C2F0756;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct NodeU5BU5D_tEDF34F08DB17591B4543CE3055D3D16C42535D37;
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
struct SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137;
struct ValueTuple_2U5BU5D_tE1CC4DE8BF8241FDCA51B91C2EC4A0A89C44308C;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Scripting[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0155A0AFC8BEA8B1160767A28C9F6B5A5DE21612;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0B31AB38360ECF9683ADAB607974B916C9663192;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral41893BA7A99DC52D8BE60380825325D2A8540963;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral46A01A440913AE3A82489D220ACF899D570C29A7;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4D1773CA7AF4AE36C001FBC3E1E5DA5574C041FA;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral575B4BE92F0D75E69C018C6AA4FBC530DDD4B595;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral920B6B05D1EF9E61AEC546EDC66550B870075C4B;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteral96DF4500E5408A7ED26D010DF5824289A767048E;
IL2CPP_EXTERN_C String_t* _stringLiteral9D98CF45AE5B5E623759A6DCB43B04AC6BAE9719;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralAEE8DD47F29A535762B8579D9E3E69D0D84968BB;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC524653D78C03BE4033DDC43C45B67FFB841D141;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralD158A55362F81195C165C2CFB448622A361B357C;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralEB85B9BFFDE3135B37337A7491E104BC8493E6C0;
IL2CPP_EXTERN_C String_t* _stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SortedSubsystemGroup_2_tA61C60B61A2BA30771BCF4D638792C1A5787C123_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SubsystemEntry_t859A00D63695B7E9F537734CA460B7789E4D9092_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3  : public RuntimeObject
{
};
struct U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5  : public RuntimeObject
{
	int32_t ___index;
	int32_t ___count;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array;
};
struct U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448  : public RuntimeObject
{
	int32_t ___index;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___objects;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
};
struct Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4825D8B6926355B02E574ECB2C34A0855C2F0756* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB7BC87667C78593ECB7349D950AA35F0C07A5951* ____keys;
	ValueCollection_t8830C05E9E7F8E46BC95A17F50D03182CDF67312* ____values;
	RuntimeObject* ____syncRoot;
};
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A  : public RuntimeObject
{
	SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ____dict;
};
struct List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C  : public RuntimeObject
{
	SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* ____items;
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
struct SortedList_2_t9C81D0EB1AE55E2C8EE9A023519853D497059664  : public RuntimeObject
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___keys;
	ValueTuple_2U5BU5D_tE1CC4DE8BF8241FDCA51B91C2EC4A0A89C44308C* ___values;
	int32_t ____size;
	int32_t ___version;
	RuntimeObject* ___comparer;
	KeyList_t791F62B0EDC79A84DDCB76BEEA83C628ED1FD4C2* ___keyList;
	ValueList_t7DFFD21832AF344A997D07E4E13129EBB3FAF2D3* ___valueList;
	RuntimeObject* ____syncRoot;
};
struct SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___keys;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___values;
	int32_t ____size;
	int32_t ___version;
	RuntimeObject* ___comparer;
	KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* ___keyList;
	ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* ___valueList;
	RuntimeObject* ____syncRoot;
};
struct SortedSet_1_t1AE7B07B8FDCAF854408B764563719D129D7C68E  : public RuntimeObject
{
	Node_t4D1BDA77093BD57E306A2832CDB56161594F5729* ___root;
	RuntimeObject* ___comparer;
	int32_t ___count;
	int32_t ___version;
	RuntimeObject* ____syncRoot;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___siInfo;
};
struct SortedSet_1_t386F4B3239CE3D9C3A6C7CE3F8FA3E77007FA45F  : public RuntimeObject
{
	Node_tE8721B405DD07DADFB21ECFDDB276F78C1C74A77* ___root;
	RuntimeObject* ___comparer;
	int32_t ___count;
	int32_t ___version;
	RuntimeObject* ____syncRoot;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___siInfo;
};
struct SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73  : public RuntimeObject
{
	Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* ___root;
	RuntimeObject* ___comparer;
	int32_t ___count;
	int32_t ___version;
	RuntimeObject* ____syncRoot;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___siInfo;
};
struct SortedSet_1_t84D5681EF8A42F7DF32753241E3D518FADB80867  : public RuntimeObject
{
	Node_tE0BABBCFF00BFC195C5C53276A3B8E7FE0392704* ___root;
	RuntimeObject* ___comparer;
	int32_t ___count;
	int32_t ___version;
	RuntimeObject* ____syncRoot;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___siInfo;
};
struct SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D  : public RuntimeObject
{
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___root;
	RuntimeObject* ___comparer;
	int32_t ___count;
	int32_t ___version;
	RuntimeObject* ____syncRoot;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___siInfo;
};
struct SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32  : public RuntimeObject
{
	Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* ___m_Subsystems;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_InitDelegates;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_CleanupDelegates;
};
struct Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71  : public RuntimeObject
{
	NodeU5BU5D_tEDF34F08DB17591B4543CE3055D3D16C42535D37* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98 : public RuntimeObject {};
struct ValueCollection_t8830C05E9E7F8E46BC95A17F50D03182CDF67312  : public RuntimeObject
{
	Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* ____dictionary;
};
struct ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A  : public RuntimeObject
{
	SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ____dict;
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
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct Enumerator_t71F09436B846CE1804083C9B36997E4573540582 
{
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* ____tree;
	int32_t ____version;
	Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* ____stack;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ____current;
	bool ____reverse;
};
struct Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04 
{
	Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* ____currentValue;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078;
typedef Il2CppFullySharedGenericStruct Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222;
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct TreeSubSet_t8773A6ADED6E5D012AEABA38FC2C57685EC2A751  : public SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
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
struct NodeColor_t3C462CF5E46B843CC52B1FF46B6488BC18768F4F 
{
	uint8_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct TreeRotation_t8E73F08A08D4DC4DA6DA17D92767DE6997B01A0A 
{
	uint8_t ___value__;
};
struct Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB : public RuntimeObject {};
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
struct Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899  : public MulticastDelegate_t
{
};
struct Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1  : public MulticastDelegate_t
{
};
struct TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields
{
	U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3* ___U3CU3E9;
	Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* ___U3CU3E9__10_0;
	Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* ___U3CU3E9__10_1;
	Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* ___U3CU3E9__10_2;
	Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* ___U3CU3E9__10_3;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C_StaticFields
{
	SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Enumerator_t71F09436B846CE1804083C9B36997E4573540582_StaticFields
{
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___s_dummyNode;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
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
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	String_t* ___s_nullMessage;
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
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
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
struct SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137  : public RuntimeArray
{
	ALIGN_FIELD (8) SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* m_Items[1];

	inline SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisIl2CppFullySharedGenericAny_m50343FB7B8CCB1EA8EB90126EC476F0990603A7B_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, Il2CppFullySharedGenericAny ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Insert_m54BB1474F7B22BE2FE663D9FE3B6D289C5FF8C44_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_key, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Add_mC351B19884930B46C8A037A9ED9F7533A7D1E910_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_IndexOfKey_m7FF3349A95CC8C46C4C29FB2BAC94F9F778145E7_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_RemoveAt_m37107384ADBAA63248D080C5854FB83D865C6848_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* SortedList_2_GetKeyListHelper_mF41FAFCCB1114FC4306F309C9A0BAB96D4092E94_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* SortedList_2_GetValueListHelper_m6111A7177441A9C87D1E43BAB8D63E7AA3ECD35D_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyList__ctor_m345FCF5FA186C5604E171BCE22C2AA127BC5F03F_gshared (KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList__ctor_m26B1A0136B33A5686D5093849B8E4C1CE9DA03DE_gshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_IsCompatibleKey_m94BC0B0753D7ECAADCD432B51E962A5064D3EFC9_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_ContainsKey_m9965B1BF656E4D9C636B65E006D2DADE26BCA5EA_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_IndexOfValue_m5D899EA7F684020A2CC3F6CE518C02CCD8F6804C_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_gshared_inline (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_set_Capacity_m636003910399A813EC567F8646268B4798A58D27_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F_gshared (Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_sortedList, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_set_Item_m353A6F48A93044ECAC54D64ADEBF8366CD58C1C1_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_EnsureCapacity_m07DCAB9E071969908332FEBA61476227C005AD0B_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_Remove_m0EA556F04D0438CB72CF168DAC3D1815AA2769E5_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1__ctor_m24BE0E03C0A47F9085DD6691C5EDEB43420379D1_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_HasEqualComparer_m01D060ABCDB8082B159A6EDE221B55E52C0F7433_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_DeepClone_mD033C4F658FFFAC054BBDE4E4B7FF1B501C2C826_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* EnumerableHelpers_ToArray_TisIl2CppFullySharedGenericAny_m29EC465D80F7E6BC3D01E566ED7C4BEC9B8E35D5_gshared (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* SortedSet_1_ConstructRootFromSortedArray_m0AC5E70700A7067C31CEE63B202DEF8E477793B2_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_arr, int32_t ___1_startIndex, int32_t ___2_endIndex, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___3_redNode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_Add_mAF89E4EAB2D98CB81C066F6DC2A2C11FF43CC1BC_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_get_Min_mFDECAB680F0FD68F5698E848EB914BF86CCA91B4_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_get_Max_mF51C4841F6E4362405C8A9AE56090ED16CF4E363_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_Remove_m7FF75998DF211EB5A66B2AFE5118C13A3C6A0A74_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedSet_1_Log2_m6EDFF3696AB144C4BCA5D85DE8FB595407FBD64F_gshared (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mFDFA9E1123DD1C9E5970223E605B8C973B39721A_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TreeWalkPredicate_1_Invoke_mF05B0B239CF2F52D600F5E3BBC0BA15EE047676E_gshared_inline (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_node, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mCAD00A69587F884F88C36DE7423C3C329166144E_gshared_inline (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mBEA2724C6D6A42C977E0C127FD93C9B5C6C3ED46_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Il2CppFullySharedGenericAny ___0_item, uint8_t ___1_color, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_get_Item_m68FF84117314DB42151562EC40D7DD433F22A81A_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_Is4Node_mFDF1B165F11A13AE520BE364983748C1CB464749_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Split4Node_m960AE03834591C1712000909D02B385C3B02BAB2_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_IsNonNullRed_m7DEA5463EEB0E8E9E77DD93296DAEC24DEC70648_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_node, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_InsertionBalance_mEC1566973B913256A811997605CD37A9E59C4C4B_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_current, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB** ___1_parent, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___2_grandParent, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___3_greatGrandParent, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_IsRed_m38BDAA19CD760AF709513A305B78276A478F53B4_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_Is2Node_m8AF7CE486A033B7038C3F70E4CDAADA5EEB8424F_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_ColorRed_mC0BEFC0741F5D098D452E92F710CA52866EE888E_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_GetSibling_mB625633B102BBDFE5F41299F6267CA5ADE121F7B_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_node, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateLeft_m47E39EB54C7F9E8C64C92920DA54FCA130CBED60_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateRight_m661C39CAE7E7B5ACE3337716C071282A25410754_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_ReplaceChildOrRoot_m4E31ECB2E0562BD48BAAAA8CE92E660786D9DBC5_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_parent, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___1_child, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___2_newChild, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Merge2Nodes_m397190D0DD62B5C95EACC46C5141D97A6BBB336B_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Node_GetRotation_mA00FE32D62B12052C808C181BB43663CD50F9415_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_current, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___1_sibling, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_Rotate_m35AC1F7925B2C3CE36107CCEBDE469D07AF0906B_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, uint8_t ___0_rotation, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Node_get_Color_m9A8282043129C40F83EE3E6A8F4A49B8DF4480C7_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_Color_m7059ED9294523EF76ADB6700781A80CEE58623EC_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_ReplaceNode_mBDF5C4FF096EA8F83C4E2FF596C6224955E9241C_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_match, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___1_parentOfMatch, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___2_successor, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___3_parentOfSuccessor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_CopyTo_m4551621D718EDDBE764C191CD3D1B0D642D9DF72_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0__ctor_m5856EBDEE1B8FFDE4EC8AB9AC3AE0295204A893F_gshared (U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWalkPredicate_1__ctor_m984A5C401EEC6FA4AD15922857EC2E4ABDF12347_gshared (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass53_0__ctor_m2C314B8F033A1311B920D1749FAFA5A44628CD09_gshared (U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_CopyTo_m34CB5771C13F8F93B145C512B6A2D217CC4B12F9_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m37A6313A32B9FC5F6EB5D51D8F684495F740383E_gshared (Enumerator_t71F09436B846CE1804083C9B36997E4573540582* __this, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t71F09436B846CE1804083C9B36997E4573540582 SortedSet_1_GetEnumerator_mB29FBB39E45DF7D1AF3264B732A02613F9305CC2_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateRightLeft_mCDB26CEDA5347E3701560D24175DE5132957EB0A_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateLeftRight_m764791D159A6B0773A3ECE5274370B76618C4723_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_ReplaceChild_m3E75134C4FABC8431084752970B8A998B7A14E93_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_child, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___1_newChild, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SortedSet_1_get_Comparer_m8A7256119C783E8E8E40BC49B658DB14445F8F7F_gshared_inline (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1__ctor_m9B631916B2438D366B0C94199F8EA1A6B7789FB6_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE700C9CC529ECE454379FBD8FC409DA45E1B03AC_gshared (Enumerator_t71F09436B846CE1804083C9B36997E4573540582* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_mB3DADD6848C84F194FD9CA2F6A8D5A5BB83E2377_gshared (Enumerator_t71F09436B846CE1804083C9B36997E4573540582* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_AddAllElements_m51FF0E32EAFF6D6F3BB33C12386E39E86C7A1457_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_RemoveAllElements_m375CFA09F9E2A6328E419B47B71FB349DF1A3B38_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_UnionWith_m64DFD2AF38EB282EC01582102FC6DD3CFE1D4DC1_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_SymmetricExceptWithSameComparer_mA97B81F28F2B00BB388E3027C2FED16EAC4BBD9A_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_SymmetricExceptWithSameComparer_m3F4FA0A4CEA633A3AB78C462EFF38498E6793F8D_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_other, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1B66D14092A623BE5F8A22939E7A7A57B47232BE_gshared (Enumerator_t71F09436B846CE1804083C9B36997E4573540582* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSubsystemGroup_2_get_Frozen_mB70A61B14C8E51064385759618692E2A8DE747D1_gshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemEntry__ctor_m5129F5B2802BF41D25D5B1E91C96FD6624EF6A9C_gshared (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* __this, String_t* ___0_name, Il2CppFullySharedGenericAny ___1_initDelegate, Il2CppFullySharedGenericAny ___2_cleanupDelegate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_dependencies, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2_SortAndFreeze_m1FCBB2ED33FA5A550ACD53F361221A8515D86886_gshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* SortedSubsystemGroup_2_TopologicalSort_m4EF1485E9F3D436AD318FFE4C3961A2F9ABF22D8_gshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisIl2CppFullySharedGenericAny_m3F416675DC7A5572025B02ED373C41AD9ED8F6C4_gshared (RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5BBCA2BC02448D0B77D2201BB08B13BAB3BABA53_gshared (RuntimeObject* ___0_source, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___1_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_AsEnumerable_TisIl2CppFullySharedGenericAny_mCB78EE458634DA25C985C42E25FE6ED446B3FD52_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisIl2CppFullySharedGenericAny_mCC98E894875B57F5F4299D77112F26131A10649F_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_GetEnumerator_m22BB9C6494A679370661D0B6DA1FA7EF744281EA_gshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mB05777B182DD6D8C5ED21811C2CA95405D2743F8_gshared (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m77681472C32B9ABB97AE602C0D4C365A0A8E8ACE_gshared_inline (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2_Visit_m357521131CFFCC13DD1F795FEB39EC17133A5A9B_gshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* ___0_subsystem, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___1_visited, List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* ___2_sorted, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___3_pendingDependencies, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m297C3CEEAAC8D29D8F7C93E0801CD1D362D1C66F_gshared (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemEntry_get_Name_m92E7AADE7DE5ADAE7A52287CD1D237F74D8C777D_gshared_inline (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m6D40586EE21316C2647D81169AFFF9B4C7719F74_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* SubsystemEntry_get_Dependencies_m6FD3A3DF3DAD8B666CD4F8A681FBED7428941A16_gshared_inline (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mE12E434B402CFEB49197444DE1D52A3AE4C7F6EE_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_inline (const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline)(method);
}
inline Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290 (const RuntimeMethod* method)
{
	return ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline int32_t Array_BinarySearch_TisIl2CppFullySharedGenericAny_m50343FB7B8CCB1EA8EB90126EC476F0990603A7B (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, Il2CppFullySharedGenericAny ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisIl2CppFullySharedGenericAny_m50343FB7B8CCB1EA8EB90126EC476F0990603A7B_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
inline void SortedList_2_Insert_m54BB1474F7B22BE2FE663D9FE3B6D289C5FF8C44 (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_key, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))SortedList_2_Insert_m54BB1474F7B22BE2FE663D9FE3B6D289C5FF8C44_gshared)((SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*)__this, ___0_index, ___1_key, ___2_value, method);
}
inline void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, il2cppRetVal, method);
}
inline void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, il2cppRetVal, method);
}
inline void SortedList_2_Add_mC351B19884930B46C8A037A9ED9F7533A7D1E910 (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))SortedList_2_Add_mC351B19884930B46C8A037A9ED9F7533A7D1E910_gshared)((SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*)__this, ___0_key, ___1_value, method);
}
inline int32_t SortedList_2_IndexOfKey_m7FF3349A95CC8C46C4C29FB2BAC94F9F778145E7 (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, Il2CppFullySharedGenericAny, const RuntimeMethod*))SortedList_2_IndexOfKey_m7FF3349A95CC8C46C4C29FB2BAC94F9F778145E7_gshared)((SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*)__this, ___0_key, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline)(method);
}
inline void SortedList_2_RemoveAt_m37107384ADBAA63248D080C5854FB83D865C6848 (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))SortedList_2_RemoveAt_m37107384ADBAA63248D080C5854FB83D865C6848_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, RuntimeObject* ___2_p2, const RuntimeMethod* method) ;
inline KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* SortedList_2_GetKeyListHelper_mF41FAFCCB1114FC4306F309C9A0BAB96D4092E94 (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method)
{
	return ((  KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))SortedList_2_GetKeyListHelper_mF41FAFCCB1114FC4306F309C9A0BAB96D4092E94_gshared)(__this, method);
}
inline ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* SortedList_2_GetValueListHelper_m6111A7177441A9C87D1E43BAB8D63E7AA3ECD35D (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method)
{
	return ((  ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))SortedList_2_GetValueListHelper_m6111A7177441A9C87D1E43BAB8D63E7AA3ECD35D_gshared)(__this, method);
}
inline void KeyList__ctor_m345FCF5FA186C5604E171BCE22C2AA127BC5F03F (KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A*, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))KeyList__ctor_m345FCF5FA186C5604E171BCE22C2AA127BC5F03F_gshared)(__this, ___0_dictionary, method);
}
inline void ValueList__ctor_m26B1A0136B33A5686D5093849B8E4C1CE9DA03DE (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A*, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))ValueList__ctor_m26B1A0136B33A5686D5093849B8E4C1CE9DA03DE_gshared)(__this, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71 (RuntimeObject** ___0_location1, RuntimeObject* ___1_value, RuntimeObject* ___2_comparand, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline bool SortedList_2_IsCompatibleKey_m94BC0B0753D7ECAADCD432B51E962A5064D3EFC9 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))SortedList_2_IsCompatibleKey_m94BC0B0753D7ECAADCD432B51E962A5064D3EFC9_gshared)(___0_key, method);
}
inline bool SortedList_2_ContainsKey_m9965B1BF656E4D9C636B65E006D2DADE26BCA5EA (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, Il2CppFullySharedGenericAny, const RuntimeMethod*))SortedList_2_ContainsKey_m9965B1BF656E4D9C636B65E006D2DADE26BCA5EA_gshared)((SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*)__this, ___0_key, method);
}
inline int32_t SortedList_2_IndexOfValue_m5D899EA7F684020A2CC3F6CE518C02CCD8F6804C (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, Il2CppFullySharedGenericAny, const RuntimeMethod*))SortedList_2_IndexOfValue_m5D899EA7F684020A2CC3F6CE518C02CCD8F6804C_gshared)((SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*)__this, ___0_value, method);
}
inline int32_t SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
inline void SortedList_2_set_Capacity_m636003910399A813EC567F8646268B4798A58D27 (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))SortedList_2_set_Capacity_m636003910399A813EC567F8646268B4798A58D27_gshared)(__this, ___0_value, method);
}
inline void Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F (Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_sortedList, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F_gshared)(__this, ___0_sortedList, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void SortedList_2_set_Item_m353A6F48A93044ECAC54D64ADEBF8366CD58C1C1 (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))SortedList_2_set_Item_m353A6F48A93044ECAC54D64ADEBF8366CD58C1C1_gshared)((SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*)__this, ___0_key, ___1_value, method);
}
inline int32_t Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void SortedList_2_EnsureCapacity_m07DCAB9E071969908332FEBA61476227C005AD0B (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))SortedList_2_EnsureCapacity_m07DCAB9E071969908332FEBA61476227C005AD0B_gshared)(__this, ___0_min, method);
}
inline bool SortedList_2_Remove_m0EA556F04D0438CB72CF168DAC3D1815AA2769E5 (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, Il2CppFullySharedGenericAny, const RuntimeMethod*))SortedList_2_Remove_m0EA556F04D0438CB72CF168DAC3D1815AA2769E5_gshared)((SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*)__this, ___0_key, method);
}
inline void SortedSet_1__ctor_m24BE0E03C0A47F9085DD6691C5EDEB43420379D1 (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, RuntimeObject*, const RuntimeMethod*))SortedSet_1__ctor_m24BE0E03C0A47F9085DD6691C5EDEB43420379D1_gshared)(__this, ___0_comparer, method);
}
inline bool SortedSet_1_HasEqualComparer_m01D060ABCDB8082B159A6EDE221B55E52C0F7433 (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))SortedSet_1_HasEqualComparer_m01D060ABCDB8082B159A6EDE221B55E52C0F7433_gshared)(__this, ___0_other, method);
}
inline int32_t SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A_gshared)(__this, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_DeepClone_mD033C4F658FFFAC054BBDE4E4B7FF1B501C2C826 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, int32_t, const RuntimeMethod*))Node_DeepClone_mD033C4F658FFFAC054BBDE4E4B7FF1B501C2C826_gshared)(__this, ___0_count, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* EnumerableHelpers_ToArray_TisIl2CppFullySharedGenericAny_m29EC465D80F7E6BC3D01E566ED7C4BEC9B8E35D5 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, int32_t*, const RuntimeMethod*))EnumerableHelpers_ToArray_TisIl2CppFullySharedGenericAny_m29EC465D80F7E6BC3D01E566ED7C4BEC9B8E35D5_gshared)(___0_source, ___1_length, method);
}
inline void Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* SortedSet_1_ConstructRootFromSortedArray_m0AC5E70700A7067C31CEE63B202DEF8E477793B2 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_arr, int32_t ___1_startIndex, int32_t ___2_endIndex, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___3_redNode, const RuntimeMethod* method)
{
	return ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))SortedSet_1_ConstructRootFromSortedArray_m0AC5E70700A7067C31CEE63B202DEF8E477793B2_gshared)(___0_arr, ___1_startIndex, ___2_endIndex, ___3_redNode, method);
}
inline bool SortedSet_1_Add_mAF89E4EAB2D98CB81C066F6DC2A2C11FF43CC1BC (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Il2CppFullySharedGenericAny, const RuntimeMethod*))SortedSet_1_Add_mAF89E4EAB2D98CB81C066F6DC2A2C11FF43CC1BC_gshared)((SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)__this, ___0_item, method);
}
inline void SortedSet_1_get_Min_mFDECAB680F0FD68F5698E848EB914BF86CCA91B4 (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))SortedSet_1_get_Min_mFDECAB680F0FD68F5698E848EB914BF86CCA91B4_gshared)((SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)__this, il2cppRetVal, method);
}
inline void SortedSet_1_get_Max_mF51C4841F6E4362405C8A9AE56090ED16CF4E363 (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))SortedSet_1_get_Max_mF51C4841F6E4362405C8A9AE56090ED16CF4E363_gshared)((SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)__this, il2cppRetVal, method);
}
inline bool SortedSet_1_Remove_m7FF75998DF211EB5A66B2AFE5118C13A3C6A0A74 (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Il2CppFullySharedGenericAny, const RuntimeMethod*))SortedSet_1_Remove_m7FF75998DF211EB5A66B2AFE5118C13A3C6A0A74_gshared)((SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)__this, ___0_item, method);
}
inline int32_t SortedSet_1_Log2_m6EDFF3696AB144C4BCA5D85DE8FB595407FBD64F (int32_t ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, const RuntimeMethod*))SortedSet_1_Log2_m6EDFF3696AB144C4BCA5D85DE8FB595407FBD64F_gshared)(___0_value, method);
}
inline void Stack_1__ctor_m0C9F9DA4F66F8441B51E59739F127EAF336D2690 (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71*, int32_t, const RuntimeMethod*))Stack_1__ctor_mFDFA9E1123DD1C9E5970223E605B8C973B39721A_gshared)(__this, ___0_capacity, method);
}
inline void Stack_1_Push_m2A8E69C7B1A7D7BBE7EA5A274EE7494A677FE494 (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_gshared_inline)(__this, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Stack_1_Pop_mEFB4C515D8F6D65E27D842A2890532271A124B1B (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* __this, const RuntimeMethod* method)
{
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* il2cppRetVal;
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline bool TreeWalkPredicate_1_Invoke_mF05B0B239CF2F52D600F5E3BBC0BA15EE047676E_inline (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_node, const RuntimeMethod* method)
{
	return ((  bool (*) (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))TreeWalkPredicate_1_Invoke_mF05B0B239CF2F52D600F5E3BBC0BA15EE047676E_gshared_inline)(__this, ___0_node, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_gshared_inline)(__this, method);
}
inline int32_t Stack_1_get_Count_mE54F3425BF9ECF21A2D32E5E1BED64E4B9820C5C_inline (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71*, const RuntimeMethod*))Stack_1_get_Count_mCAD00A69587F884F88C36DE7423C3C329166144E_gshared_inline)(__this, method);
}
inline void Node__ctor_mBEA2724C6D6A42C977E0C127FD93C9B5C6C3ED46 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Il2CppFullySharedGenericAny ___0_item, uint8_t ___1_color, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Il2CppFullySharedGenericAny, uint8_t, const RuntimeMethod*))Node__ctor_mBEA2724C6D6A42C977E0C127FD93C9B5C6C3ED46_gshared)((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)__this, ___0_item, ___1_color, method);
}
inline void Node_get_Item_m68FF84117314DB42151562EC40D7DD433F22A81A_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Node_get_Item_m68FF84117314DB42151562EC40D7DD433F22A81A_gshared_inline)((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)__this, il2cppRetVal, method);
}
inline void Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B_gshared)(__this, method);
}
inline bool Node_get_Is4Node_mFDF1B165F11A13AE520BE364983748C1CB464749 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_get_Is4Node_mFDF1B165F11A13AE520BE364983748C1CB464749_gshared)(__this, method);
}
inline void Node_Split4Node_m960AE03834591C1712000909D02B385C3B02BAB2 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_Split4Node_m960AE03834591C1712000909D02B385C3B02BAB2_gshared)(__this, method);
}
inline bool Node_IsNonNullRed_m7DEA5463EEB0E8E9E77DD93296DAEC24DEC70648 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_node, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_IsNonNullRed_m7DEA5463EEB0E8E9E77DD93296DAEC24DEC70648_gshared)(___0_node, method);
}
inline void SortedSet_1_InsertionBalance_mEC1566973B913256A811997605CD37A9E59C4C4B (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_current, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB** ___1_parent, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___2_grandParent, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___3_greatGrandParent, const RuntimeMethod* method)
{
	((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB**, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))SortedSet_1_InsertionBalance_mEC1566973B913256A811997605CD37A9E59C4C4B_gshared)(__this, ___0_current, ___1_parent, ___2_grandParent, ___3_greatGrandParent, method);
}
inline void Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_gshared_inline)(__this, ___0_value, method);
}
inline void Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_gshared_inline)(__this, ___0_value, method);
}
inline bool Node_get_IsRed_m38BDAA19CD760AF709513A305B78276A478F53B4 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_get_IsRed_m38BDAA19CD760AF709513A305B78276A478F53B4_gshared)(__this, method);
}
inline bool Node_get_Is2Node_m8AF7CE486A033B7038C3F70E4CDAADA5EEB8424F (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_get_Is2Node_m8AF7CE486A033B7038C3F70E4CDAADA5EEB8424F_gshared)(__this, method);
}
inline void Node_ColorRed_mC0BEFC0741F5D098D452E92F710CA52866EE888E (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_ColorRed_mC0BEFC0741F5D098D452E92F710CA52866EE888E_gshared)(__this, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_GetSibling_mB625633B102BBDFE5F41299F6267CA5ADE121F7B (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_node, const RuntimeMethod* method)
{
	return ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_GetSibling_mB625633B102BBDFE5F41299F6267CA5ADE121F7B_gshared)(__this, ___0_node, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateLeft_m47E39EB54C7F9E8C64C92920DA54FCA130CBED60 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_RotateLeft_m47E39EB54C7F9E8C64C92920DA54FCA130CBED60_gshared)(__this, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateRight_m661C39CAE7E7B5ACE3337716C071282A25410754 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_RotateRight_m661C39CAE7E7B5ACE3337716C071282A25410754_gshared)(__this, method);
}
inline void SortedSet_1_ReplaceChildOrRoot_m4E31ECB2E0562BD48BAAAA8CE92E660786D9DBC5 (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_parent, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___1_child, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___2_newChild, const RuntimeMethod* method)
{
	((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))SortedSet_1_ReplaceChildOrRoot_m4E31ECB2E0562BD48BAAAA8CE92E660786D9DBC5_gshared)(__this, ___0_parent, ___1_child, ___2_newChild, method);
}
inline void Node_Merge2Nodes_m397190D0DD62B5C95EACC46C5141D97A6BBB336B (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_Merge2Nodes_m397190D0DD62B5C95EACC46C5141D97A6BBB336B_gshared)(__this, method);
}
inline uint8_t Node_GetRotation_mA00FE32D62B12052C808C181BB43663CD50F9415 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_current, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___1_sibling, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_GetRotation_mA00FE32D62B12052C808C181BB43663CD50F9415_gshared)(__this, ___0_current, ___1_sibling, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_Rotate_m35AC1F7925B2C3CE36107CCEBDE469D07AF0906B (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, uint8_t ___0_rotation, const RuntimeMethod* method)
{
	return ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, uint8_t, const RuntimeMethod*))Node_Rotate_m35AC1F7925B2C3CE36107CCEBDE469D07AF0906B_gshared)(__this, ___0_rotation, method);
}
inline uint8_t Node_get_Color_m9A8282043129C40F83EE3E6A8F4A49B8DF4480C7_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_get_Color_m9A8282043129C40F83EE3E6A8F4A49B8DF4480C7_gshared_inline)(__this, method);
}
inline void Node_set_Color_m7059ED9294523EF76ADB6700781A80CEE58623EC_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, uint8_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, uint8_t, const RuntimeMethod*))Node_set_Color_m7059ED9294523EF76ADB6700781A80CEE58623EC_gshared_inline)(__this, ___0_value, method);
}
inline void SortedSet_1_ReplaceNode_mBDF5C4FF096EA8F83C4E2FF596C6224955E9241C (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_match, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___1_parentOfMatch, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___2_successor, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___3_parentOfSuccessor, const RuntimeMethod* method)
{
	((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))SortedSet_1_ReplaceNode_mBDF5C4FF096EA8F83C4E2FF596C6224955E9241C_gshared)(__this, ___0_match, ___1_parentOfMatch, ___2_successor, ___3_parentOfSuccessor, method);
}
inline void SortedSet_1_CopyTo_m4551621D718EDDBE764C191CD3D1B0D642D9DF72 (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))SortedSet_1_CopyTo_m4551621D718EDDBE764C191CD3D1B0D642D9DF72_gshared)(__this, ___0_array, ___1_index, ___2_count, method);
}
inline void U3CU3Ec__DisplayClass52_0__ctor_m5856EBDEE1B8FFDE4EC8AB9AC3AE0295204A893F (U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5*, const RuntimeMethod*))U3CU3Ec__DisplayClass52_0__ctor_m5856EBDEE1B8FFDE4EC8AB9AC3AE0295204A893F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
inline void TreeWalkPredicate_1__ctor_m984A5C401EEC6FA4AD15922857EC2E4ABDF12347 (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016*, RuntimeObject*, intptr_t, const RuntimeMethod*))TreeWalkPredicate_1__ctor_m984A5C401EEC6FA4AD15922857EC2E4ABDF12347_gshared)(__this, ___0_object, ___1_method, method);
}
inline void U3CU3Ec__DisplayClass53_0__ctor_m2C314B8F033A1311B920D1749FAFA5A44628CD09 (U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448*, const RuntimeMethod*))U3CU3Ec__DisplayClass53_0__ctor_m2C314B8F033A1311B920D1749FAFA5A44628CD09_gshared)(__this, method);
}
inline void SortedSet_1_CopyTo_m34CB5771C13F8F93B145C512B6A2D217CC4B12F9 (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))SortedSet_1_CopyTo_m34CB5771C13F8F93B145C512B6A2D217CC4B12F9_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Enumerator__ctor_m37A6313A32B9FC5F6EB5D51D8F684495F740383E (Enumerator_t71F09436B846CE1804083C9B36997E4573540582* __this, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t71F09436B846CE1804083C9B36997E4573540582*, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))Enumerator__ctor_m37A6313A32B9FC5F6EB5D51D8F684495F740383E_gshared)(__this, ___0_set, method);
}
inline Enumerator_t71F09436B846CE1804083C9B36997E4573540582 SortedSet_1_GetEnumerator_mB29FBB39E45DF7D1AF3264B732A02613F9305CC2 (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t71F09436B846CE1804083C9B36997E4573540582 (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))SortedSet_1_GetEnumerator_mB29FBB39E45DF7D1AF3264B732A02613F9305CC2_gshared)(__this, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateRightLeft_mCDB26CEDA5347E3701560D24175DE5132957EB0A (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_RotateRightLeft_mCDB26CEDA5347E3701560D24175DE5132957EB0A_gshared)(__this, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateLeftRight_m764791D159A6B0773A3ECE5274370B76618C4723 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_RotateLeftRight_m764791D159A6B0773A3ECE5274370B76618C4723_gshared)(__this, method);
}
inline void Node_ReplaceChild_m3E75134C4FABC8431084752970B8A998B7A14E93 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_child, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___1_newChild, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_ReplaceChild_m3E75134C4FABC8431084752970B8A998B7A14E93_gshared)(__this, ___0_child, ___1_newChild, method);
}
inline RuntimeObject* SortedSet_1_get_Comparer_m8A7256119C783E8E8E40BC49B658DB14445F8F7F_inline (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))SortedSet_1_get_Comparer_m8A7256119C783E8E8E40BC49B658DB14445F8F7F_gshared_inline)(__this, method);
}
inline void SortedSet_1__ctor_m9B631916B2438D366B0C94199F8EA1A6B7789FB6 (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))SortedSet_1__ctor_m9B631916B2438D366B0C94199F8EA1A6B7789FB6_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline bool Enumerator_MoveNext_mE700C9CC529ECE454379FBD8FC409DA45E1B03AC (Enumerator_t71F09436B846CE1804083C9B36997E4573540582* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t71F09436B846CE1804083C9B36997E4573540582*, const RuntimeMethod*))Enumerator_MoveNext_mE700C9CC529ECE454379FBD8FC409DA45E1B03AC_gshared)(__this, method);
}
inline void Enumerator_get_Current_mB3DADD6848C84F194FD9CA2F6A8D5A5BB83E2377 (Enumerator_t71F09436B846CE1804083C9B36997E4573540582* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t71F09436B846CE1804083C9B36997E4573540582*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_mB3DADD6848C84F194FD9CA2F6A8D5A5BB83E2377_gshared)((Enumerator_t71F09436B846CE1804083C9B36997E4573540582*)__this, il2cppRetVal, method);
}
inline void SortedSet_1_AddAllElements_m51FF0E32EAFF6D6F3BB33C12386E39E86C7A1457 (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, RuntimeObject*, const RuntimeMethod*))SortedSet_1_AddAllElements_m51FF0E32EAFF6D6F3BB33C12386E39E86C7A1457_gshared)(__this, ___0_collection, method);
}
inline void List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared)(__this, ___0_capacity, method);
}
inline void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
inline void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, il2cppRetVal, method);
}
inline void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, il2cppRetVal, method);
}
inline bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)(__this, method);
}
inline void SortedSet_1_RemoveAllElements_m375CFA09F9E2A6328E419B47B71FB349DF1A3B38 (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, RuntimeObject*, const RuntimeMethod*))SortedSet_1_RemoveAllElements_m375CFA09F9E2A6328E419B47B71FB349DF1A3B38_gshared)(__this, ___0_collection, method);
}
inline void SortedSet_1_UnionWith_m64DFD2AF38EB282EC01582102FC6DD3CFE1D4DC1 (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, RuntimeObject*, const RuntimeMethod*))SortedSet_1_UnionWith_m64DFD2AF38EB282EC01582102FC6DD3CFE1D4DC1_gshared)(__this, ___0_other, method);
}
inline void SortedSet_1_SymmetricExceptWithSameComparer_mA97B81F28F2B00BB388E3027C2FED16EAC4BBD9A (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))SortedSet_1_SymmetricExceptWithSameComparer_mA97B81F28F2B00BB388E3027C2FED16EAC4BBD9A_gshared)(__this, ___0_other, method);
}
inline void SortedSet_1_SymmetricExceptWithSameComparer_m3F4FA0A4CEA633A3AB78C462EFF38498E6793F8D (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_other, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))SortedSet_1_SymmetricExceptWithSameComparer_m3F4FA0A4CEA633A3AB78C462EFF38498E6793F8D_gshared)(__this, ___0_other, ___1_count, method);
}
inline void Enumerator_Dispose_m1B66D14092A623BE5F8A22939E7A7A57B47232BE (Enumerator_t71F09436B846CE1804083C9B36997E4573540582* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t71F09436B846CE1804083C9B36997E4573540582*, const RuntimeMethod*))Enumerator_Dispose_m1B66D14092A623BE5F8A22939E7A7A57B47232BE_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0 (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
inline bool SortedSubsystemGroup_2_get_Frozen_mB70A61B14C8E51064385759618692E2A8DE747D1 (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32*, const RuntimeMethod*))SortedSubsystemGroup_2_get_Frozen_mB70A61B14C8E51064385759618692E2A8DE747D1_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_mC9F8DC01597E063320D72102496B36A33573FB62 (Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline)(method);
}
inline void SubsystemEntry__ctor_m5129F5B2802BF41D25D5B1E91C96FD6624EF6A9C (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* __this, String_t* ___0_name, Il2CppFullySharedGenericAny ___1_initDelegate, Il2CppFullySharedGenericAny ___2_cleanupDelegate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_dependencies, const RuntimeMethod* method)
{
	((  void (*) (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*))SubsystemEntry__ctor_m5129F5B2802BF41D25D5B1E91C96FD6624EF6A9C_gshared)((SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*)__this, ___0_name, ___1_initDelegate, ___2_cleanupDelegate, ___3_dependencies, method);
}
inline void Dictionary_2_Add_m3797D5E0CA4162386E47AAF98C8F843F56A53273 (Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* __this, String_t* ___0_key, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
inline void SortedSubsystemGroup_2_SortAndFreeze_m1FCBB2ED33FA5A550ACD53F361221A8515D86886 (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method)
{
	((  void (*) (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32*, const RuntimeMethod*))SortedSubsystemGroup_2_SortAndFreeze_m1FCBB2ED33FA5A550ACD53F361221A8515D86886_gshared)(__this, method);
}
inline SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* SortedSubsystemGroup_2_TopologicalSort_m4EF1485E9F3D436AD318FFE4C3961A2F9ABF22D8 (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method)
{
	return ((  SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* (*) (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32*, const RuntimeMethod*))SortedSubsystemGroup_2_TopologicalSort_m4EF1485E9F3D436AD318FFE4C3961A2F9ABF22D8_gshared)(__this, method);
}
inline void Func_2__ctor_m463CBC838C2258086ACBB9EB462BC03A1C3E5D78 (Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Where_TisSubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98_mB7108794F3668F3A6FBEDC5BB91B32FCC06233AD (RuntimeObject* ___0_source, Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899*, const RuntimeMethod*))Enumerable_Where_TisIl2CppFullySharedGenericAny_m3F416675DC7A5572025B02ED373C41AD9ED8F6C4_gshared)(___0_source, ___1_predicate, method);
}
inline void Func_2__ctor_m7CB09F9DE9172D555512289043B431C0352FB3AF (Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Select_TisSubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98_TisIl2CppFullySharedGenericAny_mD0FC031BA4D906C59D59ADBB918A9C6D3C727EFE (RuntimeObject* ___0_source, Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1*, const RuntimeMethod*))Enumerable_Select_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5BBCA2BC02448D0B77D2201BB08B13BAB3BABA53_gshared)(___0_source, ___1_selector, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared)(___0_source, method);
}
inline RuntimeObject* Enumerable_AsEnumerable_TisSubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98_mADCAEDBCDDE148042C9C8A86F3B71209FBB97550 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_AsEnumerable_TisIl2CppFullySharedGenericAny_mCB78EE458634DA25C985C42E25FE6ED446B3FD52_gshared)(___0_source, method);
}
inline RuntimeObject* Enumerable_Reverse_TisSubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98_m0858AD99F63BE6D1B6541B4CA36CE5570B19D1BD (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisIl2CppFullySharedGenericAny_mCC98E894875B57F5F4299D77112F26131A10649F_gshared)(___0_source, method);
}
inline void HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared)(__this, method);
}
inline void List_1__ctor_m30D9B6697FD81714009500BABED3F9987D9EF88F (List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)(__this, method);
}
inline ValueCollection_t8830C05E9E7F8E46BC95A17F50D03182CDF67312* Dictionary_2_get_Values_m22896142CE44CCC672576C47E06E677663F84D9C (Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t8830C05E9E7F8E46BC95A17F50D03182CDF67312* (*) (Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06*, const RuntimeMethod*))Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7_gshared)(__this, method);
}
inline Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04 ValueCollection_GetEnumerator_m9A88DBE532DB47A6E12717EF308AEE827E57E734 (ValueCollection_t8830C05E9E7F8E46BC95A17F50D03182CDF67312* __this, const RuntimeMethod* method)
{
	Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04 il2cppRetVal;
	((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*, const RuntimeMethod*))ValueCollection_GetEnumerator_m22BB9C6494A679370661D0B6DA1FA7EF744281EA_gshared)((ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)__this, (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void Enumerator_Dispose_m928A92DBC85A23CCAEDE32082D8964C44D495578 (Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04*, const RuntimeMethod*))Enumerator_Dispose_mB05777B182DD6D8C5ED21811C2CA95405D2743F8_gshared)(__this, method);
}
inline SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* Enumerator_get_Current_mB27995A26134CA0C9E04892C68A9FA8CC7FC8E9E_inline (Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04* __this, const RuntimeMethod* method)
{
	SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* il2cppRetVal;
	((  void (*) (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m77681472C32B9ABB97AE602C0D4C365A0A8E8ACE_gshared_inline)((Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void SortedSubsystemGroup_2_Visit_m357521131CFFCC13DD1F795FEB39EC17133A5A9B (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* ___0_subsystem, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___1_visited, List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* ___2_sorted, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___3_pendingDependencies, const RuntimeMethod* method)
{
	((  void (*) (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32*, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C*, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))SortedSubsystemGroup_2_Visit_m357521131CFFCC13DD1F795FEB39EC17133A5A9B_gshared)(__this, ___0_subsystem, ___1_visited, ___2_sorted, ___3_pendingDependencies, method);
}
inline bool Enumerator_MoveNext_mDF4A5D1B9189C55CB601E8558892D1F4358AEB14 (Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04*, const RuntimeMethod*))Enumerator_MoveNext_m297C3CEEAAC8D29D8F7C93E0801CD1D362D1C66F_gshared)(__this, method);
}
inline SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* List_1_ToArray_m624D07F76B23E115B1291FAACDAE10A903D0BEF4 (List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* __this, const RuntimeMethod* method)
{
	return ((  SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* (*) (List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)(__this, method);
}
inline String_t* SubsystemEntry_get_Name_m92E7AADE7DE5ADAE7A52287CD1D237F74D8C777D_inline (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, const RuntimeMethod*))SubsystemEntry_get_Name_m92E7AADE7DE5ADAE7A52287CD1D237F74D8C777D_gshared_inline)(__this, method);
}
inline bool HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, Il2CppFullySharedGenericAny, const RuntimeMethod*))HashSet_1_Contains_m6D40586EE21316C2647D81169AFFF9B4C7719F74_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, Il2CppFullySharedGenericAny, const RuntimeMethod*))HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* SubsystemEntry_get_Dependencies_m6FD3A3DF3DAD8B666CD4F8A681FBED7428941A16_inline (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, const RuntimeMethod*))SubsystemEntry_get_Dependencies_m6FD3A3DF3DAD8B666CD4F8A681FBED7428941A16_gshared_inline)(__this, method);
}
inline bool Dictionary_2_TryGetValue_m7B9F808ED9BE5FA14EA3F3A73F5E50CADFCCCB7B (Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* __this, String_t* ___0_key, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
inline bool HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, Il2CppFullySharedGenericAny, const RuntimeMethod*))HashSet_1_Remove_mE12E434B402CFEB49197444DE1D52A3AE4C7F6EE_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline void List_1_Add_mDB72F154BBB182A1CA93765FD4B661C89DF850EC_inline (List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* __this, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline void Dictionary_2__ctor_m2FA79E3E319A0B93F095B71AC03BEFE2D6A64637 (Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)(__this, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared)(method);
}
inline void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2__ctor_m9CDE8A15F6710C47591CDE1AE5C0241C6380306D_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0;
		L_0 = Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->___keys = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_1);
		__this->____size = 0;
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_2;
		L_2 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___comparer = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)(RuntimeObject*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2__ctor_mC39BDB99A3FFA868E24D5FDE5DE0B157AA1A7A09_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), (uint32_t)L_5);
		__this->___keys = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_6);
		int32_t L_7 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), (uint32_t)L_7);
		__this->___values = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_8);
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_9;
		L_9 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___comparer = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)(RuntimeObject*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Add_mC351B19884930B46C8A037A9ED9F7533A7D1E910_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_15 = L_0;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_17 = L_7;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_0);
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
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___keys;
		int32_t L_4 = __this->____size;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_6 = __this->___comparer;
		int32_t L_8;
		L_8 = Array_BinarySearch_TisIl2CppFullySharedGenericAny_m50343FB7B8CCB1EA8EB90126EC476F0990603A7B(L_3, 0, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_7, L_5, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_5), L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_8;
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_10);
		String_t* L_12;
		L_12 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46A01A440913AE3A82489D220ACF899D570C29A7)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_004c:
	{
		int32_t L_14 = V_0;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? ___1_value : &___1_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		SortedList_2_Insert_m54BB1474F7B22BE2FE663D9FE3B6D289C5FF8C44(__this, ((~L_14)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_17, L_15, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? il2cpp_codegen_memcpy(L_18, L_16, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C): *(void**)L_16), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m5E28CD6EF4775439631781B0B8C1C21FB0BCB624_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		SortedList_2_Add_mC351B19884930B46C8A037A9ED9F7533A7D1E910(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_2, L_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? il2cpp_codegen_memcpy(L_3, L_1, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C): *(void**)L_1), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m5B95DE8F62031E2CFF5C1B79AACB9D4A29322B48_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_2;
		L_2 = SortedList_2_IndexOfKey_m7FF3349A95CC8C46C4C29FB2BAC94F9F778145E7(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_0), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_4;
		L_4 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->___values;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		NullCheck(L_4);
		bool L_10;
		L_10 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		return (bool)1;
	}

IL_0033:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3AA632F529E8104E858B38BEBD3E51FADCEA69DE_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_2;
		L_2 = SortedList_2_IndexOfKey_m7FF3349A95CC8C46C4C29FB2BAC94F9F778145E7(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_0), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_4;
		L_4 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->___values;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		NullCheck(L_4);
		bool L_10;
		L_10 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_11 = V_0;
		SortedList_2_RemoveAt_m37107384ADBAA63248D080C5854FB83D865C6848(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return (bool)1;
	}

IL_003a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_set_Capacity_m636003910399A813EC567F8646268B4798A58D27_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___keys;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_3 = ___0_value;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4D1773CA7AF4AE36C001FBC3E1E5DA5574C041FA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002d:
	{
		int32_t L_9 = ___0_value;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_10 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), (uint32_t)L_10);
		V_0 = L_11;
		int32_t L_12 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), (uint32_t)L_12);
		V_1 = L_13;
		int32_t L_14 = __this->____size;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->___keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_0;
		int32_t L_17 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, 0, L_17, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->___values;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = V_1;
		int32_t L_20 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_18, 0, (RuntimeArray*)L_19, 0, L_20, NULL);
	}

IL_0070:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = V_0;
		__this->___keys = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_21);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = V_1;
		__this->___values = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_22);
		return;
	}

IL_007f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23;
		L_23 = Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->___keys = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_23);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24;
		L_24 = Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___values = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_24);
	}

IL_0095:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_IDictionary_Add_m4866D80E4CC9798CB02F14658273996701069A48_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_23 = L_3;
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	memset(V_0, 0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___1_value;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13), L_3);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_002c:
	{
		RuntimeObject* L_6 = ___0_key;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))
		{
			goto IL_0054;
		}
	}
	{
		RuntimeObject* L_7 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 28)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		String_t* L_10;
		L_10 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_7, (RuntimeObject*)L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0054:
	{
		RuntimeObject* L_12 = ___1_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 13))))
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject* L_13 = ___1_value;
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject* L_14 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		String_t* L_17;
		L_17 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_14, (RuntimeObject*)L_16, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_18, L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_007f:
	{
		RuntimeObject* L_19 = ___0_key;
		void* L_21 = UnBox_Any(L_19, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_20);
		RuntimeObject* L_22 = ___1_value;
		void* L_24 = UnBox_Any(L_22, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_23);
		SortedList_2_Add_mC351B19884930B46C8A037A9ED9F7533A7D1E910(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_25, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_21)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_21))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? il2cpp_codegen_memcpy(L_26, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_24)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_24))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_get_Keys_m673C0CB55A2E51947BCB364D336A683C1DBDA5A5_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_0;
		L_0 = SortedList_2_GetKeyListHelper_mF41FAFCCB1114FC4306F309C9A0BAB96D4092E94(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mA3436A3CB54F895668B37B743E580AC66847E86C_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_0;
		L_0 = SortedList_2_GetKeyListHelper_mF41FAFCCB1114FC4306F309C9A0BAB96D4092E94(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IDictionary_get_Keys_m4242C0DE7B18F0CAD6F21CDC2CDB1D162487C0CA_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_0;
		L_0 = SortedList_2_GetKeyListHelper_mF41FAFCCB1114FC4306F309C9A0BAB96D4092E94(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m6404F05280DB64D95FCBFA6D912FDD82DB0FFC1F_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_0;
		L_0 = SortedList_2_GetKeyListHelper_mF41FAFCCB1114FC4306F309C9A0BAB96D4092E94(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_get_Values_m3629A631F9E91380D33AF97AB0022D43F799F8BA_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0;
		L_0 = SortedList_2_GetValueListHelper_m6111A7177441A9C87D1E43BAB8D63E7AA3ECD35D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m4D4F34CD5D4C8ACA4F369647D286BA598EA4A091_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0;
		L_0 = SortedList_2_GetValueListHelper_m6111A7177441A9C87D1E43BAB8D63E7AA3ECD35D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IDictionary_get_Values_m439BF2A831D64DFCA3E25F90533820DD34C025FC_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0;
		L_0 = SortedList_2_GetValueListHelper_m6111A7177441A9C87D1E43BAB8D63E7AA3ECD35D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m15B1319DA31A9A9A5C49D2E540BA1B67F2A34743_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0;
		L_0 = SortedList_2_GetValueListHelper_m6111A7177441A9C87D1E43BAB8D63E7AA3ECD35D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* SortedList_2_GetKeyListHelper_mF41FAFCCB1114FC4306F309C9A0BAB96D4092E94_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_0 = __this->___keyList;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_1 = (KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31));
		KeyList__ctor_m345FCF5FA186C5604E171BCE22C2AA127BC5F03F(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		__this->___keyList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyList), (void*)L_1);
	}

IL_0014:
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_2 = __this->___keyList;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* SortedList_2_GetValueListHelper_m6111A7177441A9C87D1E43BAB8D63E7AA3ECD35D_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0 = __this->___valueList;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_1 = (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36));
		ValueList__ctor_m26B1A0136B33A5686D5093849B8E4C1CE9DA03DE(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		__this->___valueList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___valueList), (void*)L_1);
	}

IL_0014:
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_2 = __this->___valueList;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m918055FE29F64F5A3829E6B58933240CBD7CF80A_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_IDictionary_get_IsReadOnly_mC0715D1726D2216C2BBA4C4665DC448D06A40D43_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_IDictionary_get_IsFixedSize_m2E8BE4D04E3E169C345AD04BB8E30F373FB93797_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_ICollection_get_IsSynchronized_m0C699123D6114FF7A6285B60728B72CB9ED2BD64_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_ICollection_get_SyncRoot_m20ED86A54769C61DE751A3952BBDD778D3B1F701_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_1, L_2, NULL, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Clear_mD7568EA1182318C8D54FF2F3BD633C7D4B161CE2_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->___keys;
		int32_t L_3 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, L_3, NULL);
	}

IL_0027:
	{
		bool L_4;
		L_4 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->___values;
		int32_t L_6 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_0040:
	{
		__this->____size = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_IDictionary_Contains_m31D1A606D3202F88790C274AE45023C52D3ABD8A_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = SortedList_2_IsCompatibleKey_m94BC0B0753D7ECAADCD432B51E962A5064D3EFC9(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_3);
		bool L_6;
		L_6 = SortedList_2_ContainsKey_m9965B1BF656E4D9C636B65E006D2DADE26BCA5EA(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_5, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_6;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_ContainsKey_m9965B1BF656E4D9C636B65E006D2DADE26BCA5EA_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		int32_t L_2;
		L_2 = SortedList_2_IndexOfKey_m7FF3349A95CC8C46C4C29FB2BAC94F9F778145E7(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_0), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_ContainsValue_mBD30F79C40790E44BBFD3705E1911303FC126DD1_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? ___0_value : &___0_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		int32_t L_2;
		L_2 = SortedList_2_IndexOfValue_m5D899EA7F684020A2CC3F6CE518C02CCD8F6804C(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C): *(void**)L_0), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3BF3B25F198D66132212DE2A3BEEE316C1BDF1AF_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_28 = alloca(SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
	int32_t V_0 = 0;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_1 = alloca(SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
	memset(V_1, 0, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((((int32_t)L_3) <= ((int32_t)L_5)))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_6 = ___1_arrayIndex;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_defaults.int32_class, &L_7);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_002e:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13;
		L_13 = SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_11, L_12))) >= ((int32_t)L_13)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0046:
	{
		V_0 = 0;
		goto IL_0077;
	}

IL_004a:
	{
		CHECK_PAUSE_POINT;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->___keys;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		il2cpp_codegen_memcpy(L_18, (L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = __this->___values;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		il2cpp_codegen_memcpy(L_22, (L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_23, L_18, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_18), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? il2cpp_codegen_memcpy(L_24, L_22, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C): *(void**)L_22), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_25 = ___0_array;
		int32_t L_26 = ___1_arrayIndex;
		int32_t L_27 = V_0;
		il2cpp_codegen_memcpy(L_28, V_1, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
		NullCheck(L_25);
		il2cpp_codegen_memcpy((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_26, L_27)))), L_28, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), (void**)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_26, L_27)))), (void*)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0077:
	{
		int32_t L_30 = V_0;
		int32_t L_31;
		L_31 = SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_ICollection_CopyTo_m0DE93E0255FA7B7EC7A5D41A276741CB2A19C133_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_49 = L_29;
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_54 = L_34;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_53 = L_33;
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_55 = L_35;
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_36 = alloca(SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_56 = L_36;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	int32_t V_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_index;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_index;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = il2cpp_codegen_array_get_length(L_10);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int32_class, &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = il2cpp_codegen_array_get_length(L_16);
		int32_t L_18 = ___1_index;
		int32_t L_19;
		L_19 = SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
		RuntimeArray* L_21 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)IsInst((RuntimeObject*)L_21, il2cpp_rgctx_data(method->klass->rgctx_data, 48)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_22 = V_0;
		if (!L_22)
		{
			goto IL_00c0;
		}
	}
	{
		V_1 = 0;
		goto IL_00b6;
	}

IL_008c:
	{
		CHECK_PAUSE_POINT;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_23 = V_0;
		int32_t L_24 = V_1;
		int32_t L_25 = ___1_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = __this->___keys;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		il2cpp_codegen_memcpy(L_29, (L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30 = __this->___values;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		il2cpp_codegen_memcpy(L_33, (L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		memset(L_36, 0, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_34, L_29, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_29), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? il2cpp_codegen_memcpy(L_35, L_33, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C): *(void**)L_33), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		NullCheck(L_23);
		il2cpp_codegen_memcpy((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25)))), L_36, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), (void**)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25)))), (void*)L_36);
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00b6:
	{
		int32_t L_38 = V_1;
		int32_t L_39;
		L_39 = SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_008c;
		}
	}
	{
		return;
	}

IL_00c0:
	{
		RuntimeArray* L_40 = ___0_array;
		V_2 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_40, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = V_2;
		if (L_41)
		{
			goto IL_00da;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_42 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_00da:
	{
	}
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			V_3 = 0;
			goto IL_010a_1;
		}

IL_00df_1:
		{
			CHECK_PAUSE_POINT;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = V_2;
			int32_t L_44 = V_3;
			int32_t L_45 = ___1_index;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_46 = __this->___keys;
			int32_t L_47 = V_3;
			NullCheck(L_46);
			int32_t L_48 = L_47;
			il2cpp_codegen_memcpy(L_49, (L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_50 = __this->___values;
			int32_t L_51 = V_3;
			NullCheck(L_50);
			int32_t L_52 = L_51;
			il2cpp_codegen_memcpy(L_53, (L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
			memset(L_56, 0, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
			KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_56, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_54, L_49, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_49), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? il2cpp_codegen_memcpy(L_55, L_53, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C): *(void**)L_53), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_56);
			NullCheck(L_43);
			ArrayElementTypeCheck (L_43, L_57);
			(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_44, L_45))), (RuntimeObject*)L_57);
			int32_t L_58 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_010a_1:
		{
			int32_t L_59 = V_3;
			int32_t L_60;
			L_60 = SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00df_1;
			}
		}
		{
			goto IL_0126;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0115;
		}
		throw e;
	}

CATCH_0115:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_62 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_62, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_62, method);
	}

IL_0126:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_EnsureCapacity_m07DCAB9E071969908332FEBA61476227C005AD0B_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B3_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___keys;
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0015;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___keys;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(L_2, 2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 4;
	}

IL_0016:
	{
		V_0 = G_B3_0;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0025;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0025:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_min;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_6 = ___0_min;
		V_0 = L_6;
	}

IL_002b:
	{
		int32_t L_7 = V_0;
		SortedList_2_set_Capacity_m636003910399A813EC567F8646268B4798A58D27(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_GetByIndex_m8F670B827EDAA9EEFB55A297CA13A7AB2CFF88BE_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0023:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___values;
		int32_t L_8 = ___0_index;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_GetEnumerator_m0C62F4A674E308DEA3A29964E839D9A5C8B1BCA1_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 54));
	const Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078 L_0 = alloca(SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		memset(L_0, 0, SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
		Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F((Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*)L_0, __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 54), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11A03CF9E906BAF59C1F708CE0150B89E36F5F32_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 54));
	const Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078 L_0 = alloca(SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		memset(L_0, 0, SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
		Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F((Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*)L_0, __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 54), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IDictionary_GetEnumerator_m8FDF835FE585FFADB347CDB3EC09F78A53502006_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 54));
	const Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078 L_0 = alloca(SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		memset(L_0, 0, SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
		Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F((Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 54), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IEnumerable_GetEnumerator_m7E1C72FB502649A3054AA6D3BCB06BF198E9DF6C_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 54));
	const Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078 L_0 = alloca(SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		memset(L_0, 0, SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
		Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F((Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*)L_0, __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 54), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_GetKey_m977764A3D57285814E6D5D9B191021BF4DCF8621_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0023:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___keys;
		int32_t L_8 = ___0_index;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_get_Item_m4B9BA956EABFE4BE97DF5CA24A015A651D09D3A7_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		int32_t L_2;
		L_2 = SortedList_2_IndexOfKey_m7FF3349A95CC8C46C4C29FB2BAC94F9F778145E7(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_0), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->___values;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		return;
	}

IL_0019:
	{
		Il2CppConstrainedCallData L_9;
		Il2CppMethodPointer L_10 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), il2cpp_rgctx_method(method->klass->rgctx_data, 57), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), &L_9, L_8);
		typedef String_t* ( *func_L_11)(void*,const RuntimeMethod*);
		String_t* L_12 = ((func_L_11)L_10)(L_9.thisPtr,L_9.method);
		String_t* L_13;
		L_13 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC524653D78C03BE4033DDC43C45B67FFB841D141)), (RuntimeObject*)L_12, NULL);
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_14 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_set_Item_m353A6F48A93044ECAC54D64ADEBF8366CD58C1C1_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_15 = L_0;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_17 = L_7;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_16 = L_12;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_0);
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
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___keys;
		int32_t L_4 = __this->____size;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_6 = __this->___comparer;
		int32_t L_8;
		L_8 = Array_BinarySearch_TisIl2CppFullySharedGenericAny_m50343FB7B8CCB1EA8EB90126EC476F0990603A7B(L_3, 0, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_7, L_5, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_5), L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_8;
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->___values;
		int32_t L_11 = V_0;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? ___1_value : &___1_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		int32_t L_13 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}

IL_004d:
	{
		int32_t L_14 = V_0;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? ___1_value : &___1_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		SortedList_2_Insert_m54BB1474F7B22BE2FE663D9FE3B6D289C5FF8C44(__this, ((~L_14)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_17, L_15, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? il2cpp_codegen_memcpy(L_18, L_16, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C): *(void**)L_16), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IDictionary_get_Item_m97EC5F8C45891CC6F911F817655589D9203057B4_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = SortedList_2_IsCompatibleKey_m94BC0B0753D7ECAADCD432B51E962A5064D3EFC9(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_3);
		int32_t L_6;
		L_6 = SortedList_2_IndexOfKey_m7FF3349A95CC8C46C4C29FB2BAC94F9F778145E7(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_5, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->___values;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13), L_11);
		return L_12;
	}

IL_002b:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_IDictionary_set_Item_m8B859F5250231E8D677DF031E5E0FEDFE8C94BF9_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_10 = L_8;
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_12 = L_4;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	memset(V_0, 0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	memset(V_1, 0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = SortedList_2_IsCompatibleKey_m94BC0B0753D7ECAADCD432B51E962A5064D3EFC9(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
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
		RuntimeObject* L_3 = ___1_value;
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(L_4, V_1, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13), L_4);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0031:
	{
		RuntimeObject* L_7 = ___0_key;
		void* L_9 = UnBox_Any(L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_8);
		il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_9)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	}
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_11 = ___1_value;
		void* L_13 = UnBox_Any(L_11, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_12);
		SortedList_2_set_Item_m353A6F48A93044ECAC54D64ADEBF8366CD58C1C1(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_14, L_10, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? il2cpp_codegen_memcpy(L_15, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_13)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_13))), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		goto IL_0068;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0047;
		}
		throw e;
	}

CATCH_0047:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_16 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_17 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_17, (RuntimeObject*)L_19, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_21, L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0068:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_IndexOfKey_m7FF3349A95CC8C46C4C29FB2BAC94F9F778145E7_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_0);
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
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___keys;
		int32_t L_4 = __this->____size;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_6 = __this->___comparer;
		int32_t L_8;
		L_8 = Array_BinarySearch_TisIl2CppFullySharedGenericAny_m50343FB7B8CCB1EA8EB90126EC476F0990603A7B(L_3, 0, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_7, L_5, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_5), L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_8;
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}

IL_0033:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_IndexOfValue_m5D899EA7F684020A2CC3F6CE518C02CCD8F6804C_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___values;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? ___0_value : &___0_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		int32_t L_2 = __this->____size;
		int32_t L_4;
		L_4 = Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? il2cpp_codegen_memcpy(L_3, L_1, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C): *(void**)L_1), 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Insert_m54BB1474F7B22BE2FE663D9FE3B6D289C5FF8C44_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_key, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___keys;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = __this->____size;
		SortedList_2_EnsureCapacity_m07DCAB9E071969908332FEBA61476227C005AD0B(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
	}

IL_001e:
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->____size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0061;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->___keys;
		int32_t L_7 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->___keys;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, ((int32_t)il2cpp_codegen_add(L_9, 1)), ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->___values;
		int32_t L_13 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->___values;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0061:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->___keys;
		int32_t L_19 = ___0_index;
		il2cpp_codegen_memcpy(L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___1_key : &___1_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		NullCheck(L_18);
		il2cpp_codegen_memcpy((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), L_20, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), (void**)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), (void*)L_20);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = __this->___values;
		int32_t L_22 = ___0_index;
		il2cpp_codegen_memcpy(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? ___2_value : &___2_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		NullCheck(L_21);
		il2cpp_codegen_memcpy((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)), L_23, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13), (void**)(L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)), (void*)L_23);
		int32_t L_24 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_24, 1));
		int32_t L_25 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_TryGetValue_m6130DC03E87B7D7278E93114284F5B95602AE039_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		int32_t L_2;
		L_2 = SortedList_2_IndexOfKey_m7FF3349A95CC8C46C4C29FB2BAC94F9F778145E7(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_0), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_4 = ___1_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->___values;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_4, L_8, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13), (void**)(Il2CppFullySharedGenericAny*)L_4, (void*)L_8);
		return (bool)1;
	}

IL_0020:
	{
		Il2CppFullySharedGenericAny* L_9 = ___1_value;
		il2cpp_codegen_initobj(L_9, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_RemoveAt_m37107384ADBAA63248D080C5854FB83D865C6848_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	memset(V_0, 0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	memset(V_1, 0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0023:
	{
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0074;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->___keys;
		int32_t L_11 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->___keys;
		int32_t L_13 = ___0_index;
		int32_t L_14 = __this->____size;
		int32_t L_15 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), (RuntimeArray*)L_12, L_13, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->___values;
		int32_t L_17 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->___values;
		int32_t L_19 = ___0_index;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_add(L_17, 1)), (RuntimeArray*)L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, L_21)), NULL);
	}

IL_0074:
	{
		bool L_22;
		L_22 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_22)
		{
			goto IL_0095;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = __this->___keys;
		int32_t L_24 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		il2cpp_codegen_memcpy(L_25, V_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		NullCheck(L_23);
		il2cpp_codegen_memcpy((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)), L_25, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), (void**)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)), (void*)L_25);
	}

IL_0095:
	{
		bool L_26;
		L_26 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		if (!L_26)
		{
			goto IL_00b6;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = __this->___values;
		int32_t L_28 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(L_29, V_1, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		NullCheck(L_27);
		il2cpp_codegen_memcpy((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)), L_29, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13), (void**)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)), (void*)L_29);
	}

IL_00b6:
	{
		int32_t L_30 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_30, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_Remove_m0EA556F04D0438CB72CF168DAC3D1815AA2769E5_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		int32_t L_2;
		L_2 = SortedList_2_IndexOfKey_m7FF3349A95CC8C46C4C29FB2BAC94F9F778145E7(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_0), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_4 = V_0;
		SortedList_2_RemoveAt_m37107384ADBAA63248D080C5854FB83D865C6848(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
	}

IL_0013:
	{
		int32_t L_5 = V_0;
		return (bool)((((int32_t)((((int32_t)L_5) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_IDictionary_Remove_m4A5603583AFC8DE869154A5D1B5973C81FADC18D_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = SortedList_2_IsCompatibleKey_m94BC0B0753D7ECAADCD432B51E962A5064D3EFC9(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_3);
		bool L_6;
		L_6 = SortedList_2_Remove_m0EA556F04D0438CB72CF168DAC3D1815AA2769E5(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_5, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_IsCompatibleKey_m94BC0B0753D7ECAADCD432B51E962A5064D3EFC9_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1__ctor_m11E2C154F1593209ED2F37673E3B4957BF69F649_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->___comparer = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1__ctor_m24BE0E03C0A47F9085DD6691C5EDEB43420379D1_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	RuntimeObject* G_B2_0 = NULL;
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		RuntimeObject* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_2;
		L_2 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B2_0 = ((RuntimeObject*)(L_2));
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		G_B2_1->___comparer = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___comparer), (void*)G_B2_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1__ctor_m9B631916B2438D366B0C94199F8EA1A6B7789FB6_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_39 = L_27;
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* V_0 = NULL;
	int32_t V_1 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___1_comparer;
		SortedSet_1__ctor_m24BE0E03C0A47F9085DD6691C5EDEB43420379D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_4 = V_0;
		if (!L_4)
		{
			goto IL_005d;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_5 = V_0;
		if (((TreeSubSet_t8773A6ADED6E5D012AEABA38FC2C57685EC2A751*)IsInstSealed((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 7))))
		{
			goto IL_005d;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_6 = V_0;
		bool L_7;
		L_7 = SortedSet_1_HasEqualComparer_m01D060ABCDB8082B159A6EDE221B55E52C0F7433(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___count;
		__this->___count = L_11;
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_12 = V_0;
		NullCheck(L_12);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13 = L_12->___root;
		int32_t L_14 = __this->___count;
		NullCheck(L_13);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_15;
		L_15 = Node_DeepClone_mD033C4F658FFFAC054BBDE4E4B7FF1B501C2C826(L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		__this->___root = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root), (void*)L_15);
	}

IL_005c:
	{
		return;
	}

IL_005d:
	{
		RuntimeObject* L_16 = ___0_collection;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17;
		L_17 = EnumerableHelpers_ToArray_TisIl2CppFullySharedGenericAny_m29EC465D80F7E6BC3D01E566ED7C4BEC9B8E35D5(L_16, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_2 = L_17;
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		RuntimeObject* L_19 = __this->___comparer;
		___1_comparer = L_19;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = V_2;
		int32_t L_21 = V_1;
		RuntimeObject* L_22 = ___1_comparer;
		Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915(L_20, 0, L_21, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_3 = 1;
		V_4 = 1;
		goto IL_00b5;
	}

IL_0082:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_23 = ___1_comparer;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = V_2;
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		il2cpp_codegen_memcpy(L_27, (L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = V_2;
		int32_t L_29 = V_4;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
		il2cpp_codegen_memcpy(L_31, (L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		NullCheck(L_23);
		int32_t L_32;
		L_32 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_27: *(void**)L_27), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_31: *(void**)L_31));
		if (!L_32)
		{
			goto IL_00af;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = V_2;
		int32_t L_34 = V_3;
		int32_t L_35 = L_34;
		V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = V_2;
		int32_t L_37 = V_4;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		il2cpp_codegen_memcpy(L_39, (L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		NullCheck(L_33);
		il2cpp_codegen_memcpy((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)), L_39, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), (void**)(L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)), (void*)L_39);
	}

IL_00af:
	{
		int32_t L_40 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00b5:
	{
		int32_t L_41 = V_4;
		int32_t L_42 = V_1;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_43 = V_3;
		V_1 = L_43;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_44 = V_2;
		int32_t L_45 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_46;
		L_46 = SortedSet_1_ConstructRootFromSortedArray_m0AC5E70700A7067C31CEE63B202DEF8E477793B2(L_44, 0, ((int32_t)il2cpp_codegen_subtract(L_45, 1)), (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->___root = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root), (void*)L_46);
		int32_t L_47 = V_1;
		__this->___count = L_47;
	}

IL_00d4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1__ctor_m92492BF4FAFD9C2A9A8792553A50AB4C285CDE0B_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->___siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_AddAllElements_m51FF0E32EAFF6D6F3BB33C12386E39E86C7A1457_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_9 = L_6;
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_1, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_collection;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0034;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0034:
				{
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0021_1;
			}

IL_0009_1:
			{
				CHECK_PAUSE_POINT;
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 22), L_4, (Il2CppFullySharedGenericAny*)L_5);
				il2cpp_codegen_memcpy(V_1, L_5, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				il2cpp_codegen_memcpy(L_6, V_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				bool L_7;
				L_7 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(31, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_6: *(void**)L_6));
				if (L_7)
				{
					goto IL_0021_1;
				}
			}
			{
				il2cpp_codegen_memcpy(L_8, V_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				bool L_10;
				L_10 = SortedSet_1_Add_mAF89E4EAB2D98CB81C066F6DC2A2C11FF43CC1BC(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_9, L_8, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_8), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
			}

IL_0021_1:
			{
				RuntimeObject* L_11 = V_0;
				NullCheck((RuntimeObject*)L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
				if (L_12)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0035;
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

IL_0035:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_RemoveAllElements_m375CFA09F9E2A6328E419B47B71FB349DF1A3B38_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_7 = L_0;
	const Il2CppFullySharedGenericAny L_13 = L_0;
	const Il2CppFullySharedGenericAny L_16 = L_0;
	const Il2CppFullySharedGenericAny L_18 = L_0;
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_9 = L_1;
	const Il2CppFullySharedGenericAny L_14 = L_1;
	const Il2CppFullySharedGenericAny L_19 = L_1;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_0, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_1, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	RuntimeObject* V_2 = NULL;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_3, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedSet_1_get_Min_mFDECAB680F0FD68F5698E848EB914BF86CCA91B4(__this, (Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		il2cpp_codegen_memcpy(V_0, L_0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		SortedSet_1_get_Max_mF51C4841F6E4362405C8A9AE56090ED16CF4E363(__this, (Il2CppFullySharedGenericAny*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		il2cpp_codegen_memcpy(V_1, L_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		RuntimeObject* L_2 = ___0_collection;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_2);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0059:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					RuntimeObject* L_4 = V_2;
					if (!L_4)
					{
						goto IL_0062;
					}
				}
				{
					RuntimeObject* L_5 = V_2;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0062:
				{
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_004f_1;
			}

IL_0017_1:
			{
				CHECK_PAUSE_POINT;
				RuntimeObject* L_6 = V_2;
				NullCheck(L_6);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 22), L_6, (Il2CppFullySharedGenericAny*)L_7);
				il2cpp_codegen_memcpy(V_3, L_7, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				RuntimeObject* L_8 = __this->___comparer;
				il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				NullCheck(L_8);
				int32_t L_11;
				L_11 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_10: *(void**)L_10));
				if ((((int32_t)L_11) < ((int32_t)0)))
				{
					goto IL_004f_1;
				}
			}
			{
				RuntimeObject* L_12 = __this->___comparer;
				il2cpp_codegen_memcpy(L_13, V_3, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				il2cpp_codegen_memcpy(L_14, V_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				NullCheck(L_12);
				int32_t L_15;
				L_15 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_13: *(void**)L_13), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_14: *(void**)L_14));
				if ((((int32_t)L_15) > ((int32_t)0)))
				{
					goto IL_004f_1;
				}
			}
			{
				il2cpp_codegen_memcpy(L_16, V_3, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				bool L_17;
				L_17 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(31, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_16: *(void**)L_16));
				if (!L_17)
				{
					goto IL_004f_1;
				}
			}
			{
				il2cpp_codegen_memcpy(L_18, V_3, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				bool L_20;
				L_20 = SortedSet_1_Remove_m7FF75998DF211EB5A66B2AFE5118C13A3C6A0A74(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_19, L_18, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_18), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
			}

IL_004f_1:
			{
				RuntimeObject* L_21 = V_2;
				NullCheck((RuntimeObject*)L_21);
				bool L_22;
				L_22 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_21);
				if (L_22)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0063;
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

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_InOrderTreeWalk_m14C47AF11708774C0FC2F5E3990F3EA94D72ACB6_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* ___0_action, const RuntimeMethod* method) 
{
	Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* V_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_1 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_2;
		L_2 = SortedSet_1_Log2_m6EDFF3696AB144C4BCA5D85DE8FB595407FBD64F(((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_3 = (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32));
		Stack_1__ctor_m0C9F9DA4F66F8441B51E59739F127EAF336D2690(L_3, ((int32_t)il2cpp_codegen_multiply(2, L_2)), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_3;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4 = __this->___root;
		V_1 = L_4;
		goto IL_0036;
	}

IL_0028:
	{
		CHECK_PAUSE_POINT;
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_5 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6 = V_1;
		NullCheck(L_5);
		Stack_1_Push_m2A8E69C7B1A7D7BBE7EA5A274EE7494A677FE494(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = V_1;
		NullCheck(L_7);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_8;
		L_8 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_1 = L_8;
	}

IL_0036:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9 = V_1;
		if (L_9)
		{
			goto IL_0028;
		}
	}
	{
		goto IL_0067;
	}

IL_003b:
	{
		CHECK_PAUSE_POINT;
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_10 = V_0;
		NullCheck(L_10);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_11;
		L_11 = Stack_1_Pop_mEFB4C515D8F6D65E27D842A2890532271A124B1B(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		V_1 = L_11;
		TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* L_12 = ___0_action;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13 = V_1;
		NullCheck(L_12);
		bool L_14;
		L_14 = TreeWalkPredicate_1_Invoke_mF05B0B239CF2F52D600F5E3BBC0BA15EE047676E_inline(L_12, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if (L_14)
		{
			goto IL_004d;
		}
	}
	{
		return (bool)0;
	}

IL_004d:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_15 = V_1;
		NullCheck(L_15);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16;
		L_16 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_2 = L_16;
		goto IL_0064;
	}

IL_0056:
	{
		CHECK_PAUSE_POINT;
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_17 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_18 = V_2;
		NullCheck(L_17);
		Stack_1_Push_m2A8E69C7B1A7D7BBE7EA5A274EE7494A677FE494(L_17, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_19 = V_2;
		NullCheck(L_19);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_20;
		L_20 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_2 = L_20;
	}

IL_0064:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_21 = V_2;
		if (L_21)
		{
			goto IL_0056;
		}
	}

IL_0067:
	{
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Stack_1_get_Count_mE54F3425BF9ECF21A2D32E5E1BED64E4B9820C5C_inline(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_23)
		{
			goto IL_003b;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		VirtualActionInvoker0::Invoke(26, __this);
		int32_t L_0 = __this->___count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedSet_1_get_Comparer_m8A7256119C783E8E8E40BC49B658DB14445F8F7F_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___comparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2E0CF4A6D3C23BD90B588462CB9507E656E30964_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_System_Collections_ICollection_get_IsSynchronized_m9809FDE90D2288A2B487D1B1194002313BE1744D_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedSet_1_System_Collections_ICollection_get_SyncRoot_m861D8904555F40BAA9BF3F3913475286CCB68E71_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_1, L_2, NULL, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_VersionCheck_mA5BE354734205CF02928ADBD583EE7E54AA7CC39_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_IsWithinRange_m586FAA4E96F11DCDE7992F5EA40B6A635113BC70_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_Add_mAF89E4EAB2D98CB81C066F6DC2A2C11FF43CC1BC_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		bool L_1;
		L_1 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(28, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m5389931753E4B8806E0B1BEEE625E5FF23F9F93D_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		bool L_2;
		L_2 = SortedSet_1_Add_mAF89E4EAB2D98CB81C066F6DC2A2C11FF43CC1BC(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_0), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_AddIfNotPresent_m267A960C51415DB0FAD324726D563692EDB954F2_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	const Il2CppFullySharedGenericAny L_31 = L_1;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_10 = L_3;
	const Il2CppFullySharedGenericAny L_33 = L_3;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_1 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_2 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_3 = NULL;
	int32_t V_4 = 0;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_5 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B11_0 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
		Node__ctor_mBEA2724C6D6A42C977E0C127FD93C9B5C6C3ED46(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_1), (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		__this->___root = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root), (void*)L_2);
		__this->___count = 1;
		int32_t L_4 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_4, 1));
		return (bool)1;
	}

IL_002c:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_5 = __this->___root;
		V_0 = L_5;
		V_1 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		V_2 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		V_3 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		int32_t L_6 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		V_4 = 0;
		goto IL_00ac;
	}

IL_004c:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_7 = __this->___comparer;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9 = V_0;
		NullCheck(L_9);
		Node_get_Item_m68FF84117314DB42151562EC40D7DD433F22A81A_inline(L_9, (Il2CppFullySharedGenericAny*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		NullCheck(L_7);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_10: *(void**)L_10));
		V_4 = L_11;
		int32_t L_12 = V_4;
		if (L_12)
		{
			goto IL_0071;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13 = __this->___root;
		NullCheck(L_13);
		Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return (bool)0;
	}

IL_0071:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = Node_get_Is4Node_mFDF1B165F11A13AE520BE364983748C1CB464749(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_15)
		{
			goto IL_0092;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16 = V_0;
		NullCheck(L_16);
		Node_Split4Node_m960AE03834591C1712000909D02B385C3B02BAB2(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_17 = V_1;
		bool L_18;
		L_18 = Node_IsNonNullRed_m7DEA5463EEB0E8E9E77DD93296DAEC24DEC70648(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		if (!L_18)
		{
			goto IL_0092;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_19 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_20 = V_2;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_21 = V_3;
		SortedSet_1_InsertionBalance_mEC1566973B913256A811997605CD37A9E59C4C4B(__this, L_19, (&V_1), L_20, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
	}

IL_0092:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_22 = V_2;
		V_3 = L_22;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_23 = V_1;
		V_2 = L_23;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_24 = V_0;
		V_1 = L_24;
		int32_t L_25 = V_4;
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_00a5;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_26 = V_0;
		NullCheck(L_26);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_27;
		L_27 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		G_B11_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_27);
		goto IL_00ab;
	}

IL_00a5:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_28 = V_0;
		NullCheck(L_28);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_29;
		L_29 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		G_B11_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_29);
	}

IL_00ab:
	{
		V_0 = G_B11_0;
	}

IL_00ac:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_30 = V_0;
		if (L_30)
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_32 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
		Node__ctor_mBEA2724C6D6A42C977E0C127FD93C9B5C6C3ED46(L_32, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_33, L_31, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_31), (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_5 = L_32;
		int32_t L_34 = V_4;
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_35 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_36 = V_5;
		NullCheck(L_35);
		Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_inline(L_35, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		goto IL_00cf;
	}

IL_00c7:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_37 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_38 = V_5;
		NullCheck(L_37);
		Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline(L_37, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
	}

IL_00cf:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_39 = V_1;
		NullCheck(L_39);
		bool L_40;
		L_40 = Node_get_IsRed_m38BDAA19CD760AF709513A305B78276A478F53B4(L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_40)
		{
			goto IL_00e3;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_41 = V_5;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_42 = V_2;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_43 = V_3;
		SortedSet_1_InsertionBalance_mEC1566973B913256A811997605CD37A9E59C4C4B(__this, L_41, (&V_1), L_42, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
	}

IL_00e3:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_44 = __this->___root;
		NullCheck(L_44);
		Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B(L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		int32_t L_45 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_Remove_m7FF75998DF211EB5A66B2AFE5118C13A3C6A0A74_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		bool L_1;
		L_1 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(29, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_DoRemove_m4EED9DCD653F3B89F8BE2D79D53E7811F13D3532_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_56 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_1 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_2 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_3 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_4 = NULL;
	bool V_5 = false;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_6 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_7 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B21_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B22_0 = 0;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B26_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B32_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B31_0 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = __this->___root;
		V_0 = L_2;
		V_1 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		V_2 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		V_3 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		V_4 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		V_5 = (bool)0;
		goto IL_012a;
	}

IL_0030:
	{
		CHECK_PAUSE_POINT;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Node_get_Is2Node_m8AF7CE486A033B7038C3F70E4CDAADA5EEB8424F(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		if (!L_4)
		{
			goto IL_00f0;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_5 = V_1;
		if (L_5)
		{
			goto IL_0049;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6 = V_0;
		NullCheck(L_6);
		Node_ColorRed_mC0BEFC0741F5D098D452E92F710CA52866EE888E(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		goto IL_00f0;
	}

IL_0049:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_8 = V_0;
		NullCheck(L_7);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9;
		L_9 = Node_GetSibling_mB625633B102BBDFE5F41299F6267CA5ADE121F7B(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		V_6 = L_9;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10 = V_6;
		NullCheck(L_10);
		bool L_11;
		L_11 = Node_get_IsRed_m38BDAA19CD760AF709513A305B78276A478F53B4(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_11)
		{
			goto IL_00a0;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_12 = V_1;
		NullCheck(L_12);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13;
		L_13 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_14 = V_6;
		if ((!(((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_13) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_14))))
		{
			goto IL_006e;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_15 = V_1;
		NullCheck(L_15);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16;
		L_16 = Node_RotateLeft_m47E39EB54C7F9E8C64C92920DA54FCA130CBED60(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 61));
		goto IL_0075;
	}

IL_006e:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_17 = V_1;
		NullCheck(L_17);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_18;
		L_18 = Node_RotateRight_m661C39CAE7E7B5ACE3337716C071282A25410754(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
	}

IL_0075:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_19 = V_1;
		NullCheck(L_19);
		Node_ColorRed_mC0BEFC0741F5D098D452E92F710CA52866EE888E(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_20 = V_6;
		NullCheck(L_20);
		Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B(L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_21 = V_2;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_22 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_23 = V_6;
		SortedSet_1_ReplaceChildOrRoot_m4E31ECB2E0562BD48BAAAA8CE92E660786D9DBC5(__this, L_21, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_24 = V_6;
		V_2 = L_24;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_25 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_26 = V_3;
		if ((!(((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_25) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_26))))
		{
			goto IL_0097;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_27 = V_6;
		V_4 = L_27;
	}

IL_0097:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_28 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_29 = V_0;
		NullCheck(L_28);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_30;
		L_30 = Node_GetSibling_mB625633B102BBDFE5F41299F6267CA5ADE121F7B(L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		V_6 = L_30;
	}

IL_00a0:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_31 = V_6;
		NullCheck(L_31);
		bool L_32;
		L_32 = Node_get_Is2Node_m8AF7CE486A033B7038C3F70E4CDAADA5EEB8424F(L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		if (!L_32)
		{
			goto IL_00b1;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_33 = V_1;
		NullCheck(L_33);
		Node_Merge2Nodes_m397190D0DD62B5C95EACC46C5141D97A6BBB336B(L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		goto IL_00f0;
	}

IL_00b1:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_34 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_35 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_36 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_37 = V_6;
		NullCheck(L_35);
		uint8_t L_38;
		L_38 = Node_GetRotation_mA00FE32D62B12052C808C181BB43663CD50F9415(L_35, L_36, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		NullCheck(L_34);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_39;
		L_39 = Node_Rotate_m35AC1F7925B2C3CE36107CCEBDE469D07AF0906B(L_34, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		V_7 = L_39;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_40 = V_7;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_41 = V_1;
		NullCheck(L_41);
		uint8_t L_42;
		L_42 = Node_get_Color_m9A8282043129C40F83EE3E6A8F4A49B8DF4480C7_inline(L_41, il2cpp_rgctx_method(method->klass->rgctx_data, 67));
		NullCheck(L_40);
		Node_set_Color_m7059ED9294523EF76ADB6700781A80CEE58623EC_inline(L_40, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 68));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_43 = V_1;
		NullCheck(L_43);
		Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B(L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_44 = V_0;
		NullCheck(L_44);
		Node_ColorRed_mC0BEFC0741F5D098D452E92F710CA52866EE888E(L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_45 = V_2;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_46 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_47 = V_7;
		SortedSet_1_ReplaceChildOrRoot_m4E31ECB2E0562BD48BAAAA8CE92E660786D9DBC5(__this, L_45, L_46, L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_48 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_49 = V_3;
		if ((!(((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_48) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_49))))
		{
			goto IL_00ed;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_50 = V_7;
		V_4 = L_50;
	}

IL_00ed:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_51 = V_7;
		V_2 = L_51;
	}

IL_00f0:
	{
		bool L_52 = V_5;
		if (L_52)
		{
			goto IL_0108;
		}
	}
	{
		RuntimeObject* L_53 = __this->___comparer;
		il2cpp_codegen_memcpy(L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_55 = V_0;
		NullCheck(L_55);
		Node_get_Item_m68FF84117314DB42151562EC40D7DD433F22A81A_inline(L_55, (Il2CppFullySharedGenericAny*)L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		NullCheck(L_53);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_54: *(void**)L_54), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_56: *(void**)L_56));
		G_B21_0 = L_57;
		goto IL_0109;
	}

IL_0108:
	{
		G_B21_0 = (-1);
	}

IL_0109:
	{
		int32_t L_58 = G_B21_0;
		if (L_58)
		{
			G_B23_0 = L_58;
			goto IL_0114;
		}
		G_B22_0 = L_58;
	}
	{
		V_5 = (bool)1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_59 = V_0;
		V_3 = L_59;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_60 = V_1;
		V_4 = L_60;
		G_B23_0 = G_B22_0;
	}

IL_0114:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_61 = V_1;
		V_2 = L_61;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_62 = V_0;
		V_1 = L_62;
		if ((((int32_t)G_B23_0) < ((int32_t)0)))
		{
			goto IL_0123;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_63 = V_0;
		NullCheck(L_63);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_64;
		L_64 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_63, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		G_B26_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_64);
		goto IL_0129;
	}

IL_0123:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_65 = V_0;
		NullCheck(L_65);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_66;
		L_66 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_65, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		G_B26_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_66);
	}

IL_0129:
	{
		V_0 = G_B26_0;
	}

IL_012a:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_67 = V_0;
		if (L_67)
		{
			goto IL_0030;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_68 = V_3;
		if (!L_68)
		{
			goto IL_014c;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_69 = V_3;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_70 = V_4;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_71 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_72 = V_2;
		SortedSet_1_ReplaceNode_mBDF5C4FF096EA8F83C4E2FF596C6224955E9241C(__this, L_69, L_70, L_71, L_72, il2cpp_rgctx_method(method->klass->rgctx_data, 69));
		int32_t L_73 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_subtract(L_73, 1));
	}

IL_014c:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_74 = __this->___root;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_75 = L_74;
		if (L_75)
		{
			G_B32_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_75);
			goto IL_0158;
		}
		G_B31_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_75);
	}
	{
		goto IL_015d;
	}

IL_0158:
	{
		NullCheck(G_B32_0);
		Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B(G_B32_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
	}

IL_015d:
	{
		bool L_76 = V_5;
		return L_76;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_Clear_m72DD3AAD425FBF01ED1695F6E85BD161C6F4BA8B_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__this->___root = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root), (void*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL);
		__this->___count = 0;
		int32_t L_0 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_Contains_m08CA74B05D995CF2E6BC7FE029BB55047EEFD292_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1;
		L_1 = VirtualFuncInvoker1Invoker< Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Il2CppFullySharedGenericAny >::Invoke(32, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_0: *(void**)L_0));
		return (bool)((!(((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_CopyTo_m34CB5771C13F8F93B145C512B6A2D217CC4B12F9_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		SortedSet_1_CopyTo_m4551621D718EDDBE764C191CD3D1B0D642D9DF72(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 71));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_CopyTo_m4551621D718EDDBE764C191CD3D1B0D642D9DF72_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_0 = (U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 72));
		U3CU3Ec__DisplayClass52_0__ctor_m5856EBDEE1B8FFDE4EC8AB9AC3AE0295204A893F(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 73));
		V_0 = L_0;
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_1 = V_0;
		int32_t L_2 = ___1_index;
		NullCheck(L_1);
		L_1->___index = L_2;
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_3 = V_0;
		int32_t L_4 = ___2_count;
		NullCheck(L_3);
		L_3->___count = L_4;
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_5 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_array;
		NullCheck(L_5);
		L_5->___array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___array), (void*)L_6);
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_7 = V_0;
		NullCheck(L_7);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = L_7->___array;
		if (L_8)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_002e:
	{
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___index;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0052:
	{
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___count;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_006b;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_19 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_006b:
	{
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->___count;
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_22 = V_0;
		NullCheck(L_22);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = L_22->___array;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = L_25->___index;
		if ((((int32_t)L_21) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_26)))))
		{
			goto IL_008d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_27 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, method);
	}

IL_008d:
	{
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_28 = V_0;
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = L_29->___count;
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = L_31->___index;
		NullCheck(L_28);
		L_28->___count = ((int32_t)il2cpp_codegen_add(L_30, L_32));
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_33 = V_0;
		TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* L_34 = (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37));
		TreeWalkPredicate_1__ctor_m984A5C401EEC6FA4AD15922857EC2E4ABDF12347(L_34, (RuntimeObject*)L_33, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 74)), il2cpp_rgctx_method(method->klass->rgctx_data, 75));
		bool L_35;
		L_35 = VirtualFuncInvoker1< bool, TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* >::Invoke(25, __this, L_34);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_System_Collections_ICollection_CopyTo_m94FDF44EFEE530F94F8F8E04643CB9A414343024_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_0 = (U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 78));
		U3CU3Ec__DisplayClass53_0__ctor_m2C314B8F033A1311B920D1749FAFA5A44628CD09(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 79));
		V_0 = L_0;
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_1 = V_0;
		int32_t L_2 = ___1_index;
		NullCheck(L_1);
		L_1->___index = L_2;
		RuntimeArray* L_3 = ___0_array;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_001b:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = il2cpp_codegen_array_get_rank(L_5);
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0034:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_8, 0, NULL);
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004d:
	{
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___index;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___index;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0071:
	{
		RuntimeArray* L_18 = ___0_array;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = il2cpp_codegen_array_get_length(L_18);
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->___index;
		int32_t L_22;
		L_22 = SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_19, L_21))) >= ((int32_t)L_22)))
		{
			goto IL_0091;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0091:
	{
		RuntimeArray* L_24 = ___0_array;
		V_1 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_24, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00a9;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = V_1;
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = L_27->___index;
		SortedSet_1_CopyTo_m34CB5771C13F8F93B145C512B6A2D217CC4B12F9(__this, L_26, L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		return;
	}

IL_00a9:
	{
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_29 = V_0;
		RuntimeArray* L_30 = ___0_array;
		NullCheck(L_29);
		L_29->___objects = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_30, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___objects), (void*)((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_30, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)));
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_31 = V_0;
		NullCheck(L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_31->___objects;
		if (L_32)
		{
			goto IL_00cd;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_33 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, method);
	}

IL_00cd:
	{
	}
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_34 = V_0;
		TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* L_35 = (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37));
		TreeWalkPredicate_1__ctor_m984A5C401EEC6FA4AD15922857EC2E4ABDF12347(L_35, (RuntimeObject*)L_34, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 81)), il2cpp_rgctx_method(method->klass->rgctx_data, 75));
		bool L_36;
		L_36 = VirtualFuncInvoker1< bool, TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* >::Invoke(25, __this, L_35);
		goto IL_00f4;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e3;
		}
		throw e;
	}

CATCH_00e3:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_37 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_38 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_38, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, method);
	}

IL_00f4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t71F09436B846CE1804083C9B36997E4573540582 SortedSet_1_GetEnumerator_mB29FBB39E45DF7D1AF3264B732A02613F9305CC2_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m37A6313A32B9FC5F6EB5D51D8F684495F740383E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 84));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA79EEC19FE3D48F1664BA35994021F31C74FFE1D_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_0;
		L_0 = SortedSet_1_GetEnumerator_mB29FBB39E45DF7D1AF3264B732A02613F9305CC2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 85));
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 83), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedSet_1_System_Collections_IEnumerable_GetEnumerator_mDCF814E9198EA5D3B8BBBBEF714D78E5CA8FE4EC_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_0;
		L_0 = SortedSet_1_GetEnumerator_mB29FBB39E45DF7D1AF3264B732A02613F9305CC2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 85));
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 83), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_InsertionBalance_mEC1566973B913256A811997605CD37A9E59C4C4B_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_current, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB** ___1_parent, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___2_grandParent, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___3_greatGrandParent, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B4_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B8_0 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = ___2_grandParent;
		NullCheck(L_0);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1;
		L_1 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB** L_2 = ___1_parent;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = il2cpp_codegen_ldind<Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*>(L_2);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB** L_4 = ___1_parent;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_5 = il2cpp_codegen_ldind<Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*>(L_4);
		NullCheck(L_5);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6;
		L_6 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = ___0_current;
		V_0 = (bool)((((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_6) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_7))? 1 : 0);
		bool L_8 = V_0;
		if ((!(((uint32_t)((((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_1) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_3))? 1 : 0)) == ((uint32_t)L_8))))
		{
			goto IL_002c;
		}
	}
	{
		bool L_9 = V_0;
		if (L_9)
		{
			goto IL_0023;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10 = ___2_grandParent;
		NullCheck(L_10);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_11;
		L_11 = Node_RotateRight_m661C39CAE7E7B5ACE3337716C071282A25410754(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		G_B4_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_11);
		goto IL_0029;
	}

IL_0023:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_12 = ___2_grandParent;
		NullCheck(L_12);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13;
		L_13 = Node_RotateLeft_m47E39EB54C7F9E8C64C92920DA54FCA130CBED60(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 61));
		G_B4_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_13);
	}

IL_0029:
	{
		V_1 = G_B4_0;
		goto IL_0042;
	}

IL_002c:
	{
		bool L_14 = V_0;
		if (L_14)
		{
			goto IL_0037;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_15 = ___2_grandParent;
		NullCheck(L_15);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16;
		L_16 = Node_RotateRightLeft_mCDB26CEDA5347E3701560D24175DE5132957EB0A(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 86));
		G_B8_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_16);
		goto IL_003d;
	}

IL_0037:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_17 = ___2_grandParent;
		NullCheck(L_17);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_18;
		L_18 = Node_RotateLeftRight_m764791D159A6B0773A3ECE5274370B76618C4723(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 87));
		G_B8_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_18);
	}

IL_003d:
	{
		V_1 = G_B8_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB** L_19 = ___1_parent;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_20 = ___3_greatGrandParent;
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_19, (RuntimeObject*)L_20);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_19, (void*)(RuntimeObject*)L_20);
	}

IL_0042:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_21 = ___2_grandParent;
		NullCheck(L_21);
		Node_ColorRed_mC0BEFC0741F5D098D452E92F710CA52866EE888E(L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_22 = V_1;
		NullCheck(L_22);
		Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_23 = ___3_greatGrandParent;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_24 = ___2_grandParent;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_25 = V_1;
		SortedSet_1_ReplaceChildOrRoot_m4E31ECB2E0562BD48BAAAA8CE92E660786D9DBC5(__this, L_23, L_24, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_ReplaceChildOrRoot_m4E31ECB2E0562BD48BAAAA8CE92E660786D9DBC5_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_parent, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___1_child, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___2_newChild, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = ___0_parent;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1 = ___0_parent;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = ___1_child;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = ___2_newChild;
		NullCheck(L_1);
		Node_ReplaceChild_m3E75134C4FABC8431084752970B8A998B7A14E93(L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 88));
		return;
	}

IL_000c:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4 = ___2_newChild;
		__this->___root = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_ReplaceNode_mBDF5C4FF096EA8F83C4E2FF596C6224955E9241C_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_match, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___1_parentOfMatch, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___2_successor, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___3_parentOfSuccessor, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B4_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B3_0 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = ___2_successor;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1 = ___0_match;
		if ((!(((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_0) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = ___0_match;
		NullCheck(L_2);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3;
		L_3 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		___2_successor = L_3;
		goto IL_0049;
	}

IL_000e:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4 = ___2_successor;
		NullCheck(L_4);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_5;
		L_5 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6 = L_5;
		if (L_6)
		{
			G_B4_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_6);
			goto IL_001a;
		}
		G_B3_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_6);
	}
	{
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B4_0);
		Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B(G_B4_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
	}

IL_001f:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = ___3_parentOfSuccessor;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_8 = ___0_match;
		if ((((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_7) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_8)))
		{
			goto IL_003d;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9 = ___3_parentOfSuccessor;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10 = ___2_successor;
		NullCheck(L_10);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_11;
		L_11 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_9);
		Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline(L_9, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_12 = ___2_successor;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13 = ___0_match;
		NullCheck(L_13);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_14;
		L_14 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_12);
		Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_inline(L_12, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
	}

IL_003d:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_15 = ___2_successor;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16 = ___0_match;
		NullCheck(L_16);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_17;
		L_17 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		NullCheck(L_15);
		Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline(L_15, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
	}

IL_0049:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_18 = ___2_successor;
		if (!L_18)
		{
			goto IL_0058;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_19 = ___2_successor;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_20 = ___0_match;
		NullCheck(L_20);
		uint8_t L_21;
		L_21 = Node_get_Color_m9A8282043129C40F83EE3E6A8F4A49B8DF4480C7_inline(L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 67));
		NullCheck(L_19);
		Node_set_Color_m7059ED9294523EF76ADB6700781A80CEE58623EC_inline(L_19, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 68));
	}

IL_0058:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_22 = ___1_parentOfMatch;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_23 = ___0_match;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_24 = ___2_successor;
		SortedSet_1_ReplaceChildOrRoot_m4E31ECB2E0562BD48BAAAA8CE92E660786D9DBC5(__this, L_22, L_23, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* SortedSet_1_FindNode_m7E02E4CF3DE74A449FD555A69412FEA4A7D39C34_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B6_0 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		V_0 = L_0;
		goto IL_0034;
	}

IL_0009:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_1 = __this->___comparer;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = V_0;
		NullCheck(L_3);
		Node_get_Item_m68FF84117314DB42151562EC40D7DD433F22A81A_inline(L_3, (Il2CppFullySharedGenericAny*)L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		NullCheck(L_1);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_4: *(void**)L_4));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = V_0;
		return L_7;
	}

IL_0021:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9 = V_0;
		NullCheck(L_9);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10;
		L_10 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		G_B6_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_10);
		goto IL_0033;
	}

IL_002d:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_11 = V_0;
		NullCheck(L_11);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_12;
		L_12 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		G_B6_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_12);
	}

IL_0033:
	{
		V_0 = G_B6_0;
	}

IL_0034:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13 = V_0;
		if (L_13)
		{
			goto IL_0009;
		}
	}
	{
		return (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_UpdateVersion_m172929972B25F2EDDF426E8D7D69003E7E001E2C_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_HasEqualComparer_m01D060ABCDB8082B159A6EDE221B55E52C0F7433_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* ___0_other, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = SortedSet_1_get_Comparer_m8A7256119C783E8E8E40BC49B658DB14445F8F7F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 89));
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = SortedSet_1_get_Comparer_m8A7256119C783E8E8E40BC49B658DB14445F8F7F_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 89));
		if ((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = SortedSet_1_get_Comparer_m8A7256119C783E8E8E40BC49B658DB14445F8F7F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 89));
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = SortedSet_1_get_Comparer_m8A7256119C783E8E8E40BC49B658DB14445F8F7F_inline(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 89));
		NullCheck((RuntimeObject*)L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_3, (RuntimeObject*)L_5);
		return L_6;
	}

IL_0020:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_UnionWith_m64DFD2AF38EB282EC01582102FC6DD3CFE1D4DC1_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_32 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_39 = L_32;
	const Il2CppFullySharedGenericAny L_45 = L_32;
	const Il2CppFullySharedGenericAny L_51 = L_32;
	const Il2CppFullySharedGenericAny L_63 = L_32;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* V_0 = NULL;
	TreeSubSet_t8773A6ADED6E5D012AEABA38FC2C57685EC2A751* V_1 = NULL;
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* V_2 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_3 = NULL;
	int32_t V_4 = 0;
	Enumerator_t71F09436B846CE1804083C9B36997E4573540582 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enumerator_t71F09436B846CE1804083C9B36997E4573540582 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	Enumerator_t71F09436B846CE1804083C9B36997E4573540582 V_10;
	memset((&V_10), 0, sizeof(V_10));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Enumerator_t71F09436B846CE1804083C9B36997E4573540582 G_B25_0;
	memset((&G_B25_0), 0, sizeof(G_B25_0));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		V_0 = ((SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
		V_1 = ((TreeSubSet_t8773A6ADED6E5D012AEABA38FC2C57685EC2A751*)IsInstSealed((RuntimeObject*)__this, il2cpp_rgctx_data(method->klass->rgctx_data, 7)));
		TreeSubSet_t8773A6ADED6E5D012AEABA38FC2C57685EC2A751* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		VirtualActionInvoker0::Invoke(26, __this);
	}

IL_0025:
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0067;
		}
	}
	{
		TreeSubSet_t8773A6ADED6E5D012AEABA38FC2C57685EC2A751* L_5 = V_1;
		if (L_5)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = __this->___count;
		if (L_6)
		{
			goto IL_0067;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_7 = V_0;
		RuntimeObject* L_8 = __this->___comparer;
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_9 = (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		SortedSet_1__ctor_m9B631916B2438D366B0C94199F8EA1A6B7789FB6(L_9, (RuntimeObject*)L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 90));
		V_2 = L_9;
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_10 = V_2;
		NullCheck(L_10);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_11 = L_10->___root;
		__this->___root = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root), (void*)L_11);
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13 = L_12->___count;
		__this->___count = L_13;
		int32_t L_14 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}

IL_0067:
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_15 = V_0;
		if (!L_15)
		{
			goto IL_01d5;
		}
	}
	{
		TreeSubSet_t8773A6ADED6E5D012AEABA38FC2C57685EC2A751* L_16 = V_1;
		if (L_16)
		{
			goto IL_01d5;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_17 = V_0;
		bool L_18;
		L_18 = SortedSet_1_HasEqualComparer_m01D060ABCDB8082B159A6EDE221B55E52C0F7433(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_18)
		{
			goto IL_01d5;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_21;
		L_21 = SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if ((((int32_t)L_20) <= ((int32_t)((int32_t)(L_21/2)))))
		{
			goto IL_01d5;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_24;
		L_24 = SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 91), (uint32_t)((int32_t)il2cpp_codegen_add(L_23, L_24)));
		V_3 = L_25;
		V_4 = 0;
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_26;
		L_26 = SortedSet_1_GetEnumerator_mB29FBB39E45DF7D1AF3264B732A02613F9305CC2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 85));
		V_5 = L_26;
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_27 = V_0;
		NullCheck(L_27);
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_28;
		L_28 = SortedSet_1_GetEnumerator_mB29FBB39E45DF7D1AF3264B732A02613F9305CC2(L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 85));
		V_6 = L_28;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 93));
		bool L_29;
		L_29 = Enumerator_MoveNext_mE700C9CC529ECE454379FBD8FC409DA45E1B03AC((&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 92));
		V_7 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30;
		L_30 = Enumerator_MoveNext_mE700C9CC529ECE454379FBD8FC409DA45E1B03AC((&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 92));
		V_8 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_0169;
	}

IL_00d5:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_31;
		L_31 = SortedSet_1_get_Comparer_m8A7256119C783E8E8E40BC49B658DB14445F8F7F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 89));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 93));
		Enumerator_get_Current_mB3DADD6848C84F194FD9CA2F6A8D5A5BB83E2377((&V_5), (Il2CppFullySharedGenericAny*)L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 94));
		Enumerator_get_Current_mB3DADD6848C84F194FD9CA2F6A8D5A5BB83E2377((&V_6), (Il2CppFullySharedGenericAny*)L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 94));
		NullCheck(L_31);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_32: *(void**)L_32), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_33: *(void**)L_33));
		V_9 = L_34;
		int32_t L_35 = V_9;
		if ((((int32_t)L_35) >= ((int32_t)0)))
		{
			goto IL_0117;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = V_3;
		int32_t L_37 = V_4;
		int32_t L_38 = L_37;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 93));
		Enumerator_get_Current_mB3DADD6848C84F194FD9CA2F6A8D5A5BB83E2377((&V_5), (Il2CppFullySharedGenericAny*)L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 94));
		NullCheck(L_36);
		il2cpp_codegen_memcpy((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)), L_39, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), (void**)(L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)), (void*)L_39);
		bool L_40;
		L_40 = Enumerator_MoveNext_mE700C9CC529ECE454379FBD8FC409DA45E1B03AC((&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 92));
		V_7 = (bool)((((int32_t)L_40) == ((int32_t)0))? 1 : 0);
		goto IL_0169;
	}

IL_0117:
	{
		int32_t L_41 = V_9;
		if (L_41)
		{
			goto IL_0149;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42 = V_3;
		int32_t L_43 = V_4;
		int32_t L_44 = L_43;
		V_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 93));
		Enumerator_get_Current_mB3DADD6848C84F194FD9CA2F6A8D5A5BB83E2377((&V_6), (Il2CppFullySharedGenericAny*)L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 94));
		NullCheck(L_42);
		il2cpp_codegen_memcpy((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)), L_45, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), (void**)(L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)), (void*)L_45);
		bool L_46;
		L_46 = Enumerator_MoveNext_mE700C9CC529ECE454379FBD8FC409DA45E1B03AC((&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 92));
		V_7 = (bool)((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		bool L_47;
		L_47 = Enumerator_MoveNext_mE700C9CC529ECE454379FBD8FC409DA45E1B03AC((&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 92));
		V_8 = (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
		goto IL_0169;
	}

IL_0149:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_48 = V_3;
		int32_t L_49 = V_4;
		int32_t L_50 = L_49;
		V_4 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 93));
		Enumerator_get_Current_mB3DADD6848C84F194FD9CA2F6A8D5A5BB83E2377((&V_6), (Il2CppFullySharedGenericAny*)L_51, il2cpp_rgctx_method(method->klass->rgctx_data, 94));
		NullCheck(L_48);
		il2cpp_codegen_memcpy((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)), L_51, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), (void**)(L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)), (void*)L_51);
		bool L_52;
		L_52 = Enumerator_MoveNext_mE700C9CC529ECE454379FBD8FC409DA45E1B03AC((&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 92));
		V_8 = (bool)((((int32_t)L_52) == ((int32_t)0))? 1 : 0);
	}

IL_0169:
	{
		bool L_53 = V_7;
		if (L_53)
		{
			goto IL_0174;
		}
	}
	{
		bool L_54 = V_8;
		if (!L_54)
		{
			goto IL_00d5;
		}
	}

IL_0174:
	{
		bool L_55 = V_7;
		if (!L_55)
		{
			goto IL_017c;
		}
	}
	{
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_01a5;
		}
	}

IL_017c:
	{
		bool L_57 = V_7;
		if (L_57)
		{
			goto IL_0184;
		}
	}
	{
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_58 = V_5;
		G_B25_0 = L_58;
		goto IL_0186;
	}

IL_0184:
	{
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_59 = V_6;
		G_B25_0 = L_59;
	}

IL_0186:
	{
		V_10 = G_B25_0;
	}

IL_0188:
	{
		CHECK_PAUSE_POINT;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_60 = V_3;
		int32_t L_61 = V_4;
		int32_t L_62 = L_61;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 93));
		Enumerator_get_Current_mB3DADD6848C84F194FD9CA2F6A8D5A5BB83E2377((&V_10), (Il2CppFullySharedGenericAny*)L_63, il2cpp_rgctx_method(method->klass->rgctx_data, 94));
		NullCheck(L_60);
		il2cpp_codegen_memcpy((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)), L_63, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), (void**)(L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)), (void*)L_63);
		bool L_64;
		L_64 = Enumerator_MoveNext_mE700C9CC529ECE454379FBD8FC409DA45E1B03AC((&V_10), il2cpp_rgctx_method(method->klass->rgctx_data, 92));
		if (L_64)
		{
			goto IL_0188;
		}
	}

IL_01a5:
	{
		__this->___root = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root), (void*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_65 = V_3;
		int32_t L_66 = V_4;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_67;
		L_67 = SortedSet_1_ConstructRootFromSortedArray_m0AC5E70700A7067C31CEE63B202DEF8E477793B2(L_65, 0, ((int32_t)il2cpp_codegen_subtract(L_66, 1)), (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->___root = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root), (void*)L_67);
		int32_t L_68 = V_4;
		__this->___count = L_68;
		int32_t L_69 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_69, 1));
		return;
	}

IL_01d5:
	{
		RuntimeObject* L_70 = ___0_other;
		SortedSet_1_AddAllElements_m51FF0E32EAFF6D6F3BB33C12386E39E86C7A1457(__this, L_70, il2cpp_rgctx_method(method->klass->rgctx_data, 95));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* SortedSet_1_ConstructRootFromSortedArray_m0AC5E70700A7067C31CEE63B202DEF8E477793B2_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_arr, int32_t ___1_startIndex, int32_t ___2_endIndex, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___3_redNode, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_15 = L_6;
	const Il2CppFullySharedGenericAny L_33 = L_6;
	const Il2CppFullySharedGenericAny L_59 = L_6;
	const Il2CppFullySharedGenericAny L_80 = L_6;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_17 = L_8;
	const Il2CppFullySharedGenericAny L_35 = L_8;
	const Il2CppFullySharedGenericAny L_61 = L_8;
	const Il2CppFullySharedGenericAny L_82 = L_8;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_40 = L_22;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_42 = L_24;
	const Il2CppFullySharedGenericAny L_47 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_49 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	int32_t V_0 = 0;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_1 = NULL;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B11_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B10_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B12_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B12_1 = NULL;
	{
		int32_t L_0 = ___2_endIndex;
		int32_t L_1 = ___1_startIndex;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_0043;
			}
			case 3:
			{
				goto IL_0081;
			}
		}
	}
	{
		goto IL_00c8;
	}

IL_0021:
	{
		return (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
	}

IL_0023:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_arr;
		int32_t L_4 = ___1_startIndex;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		Node__ctor_mBEA2724C6D6A42C977E0C127FD93C9B5C6C3ED46(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_8, L_6, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_6), (uint8_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 45));
		V_1 = L_7;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9 = ___3_redNode;
		if (!L_9)
		{
			goto IL_011e;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_11 = ___3_redNode;
		NullCheck(L_10);
		Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		goto IL_011e;
	}

IL_0043:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_arr;
		int32_t L_13 = ___1_startIndex;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		il2cpp_codegen_memcpy(L_15, (L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		Node__ctor_mBEA2724C6D6A42C977E0C127FD93C9B5C6C3ED46(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_17, L_15, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_15), (uint8_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 45));
		V_1 = L_16;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_18 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = ___0_arr;
		int32_t L_20 = ___2_endIndex;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		il2cpp_codegen_memcpy(L_22, (L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_23 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		Node__ctor_mBEA2724C6D6A42C977E0C127FD93C9B5C6C3ED46(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_24, L_22, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_22), (uint8_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 45));
		NullCheck(L_18);
		Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_inline(L_18, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 54));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_25 = V_1;
		NullCheck(L_25);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_26;
		L_26 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 39));
		NullCheck(L_26);
		Node_ColorRed_mC0BEFC0741F5D098D452E92F710CA52866EE888E(L_26, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_27 = ___3_redNode;
		if (!L_27)
		{
			goto IL_011e;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_28 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_29 = ___3_redNode;
		NullCheck(L_28);
		Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline(L_28, L_29, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		goto IL_011e;
	}

IL_0081:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30 = ___0_arr;
		int32_t L_31 = ___1_startIndex;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		il2cpp_codegen_memcpy(L_33, (L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_34 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		Node__ctor_mBEA2724C6D6A42C977E0C127FD93C9B5C6C3ED46(L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_35, L_33, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_33), (uint8_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 45));
		V_1 = L_34;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_36 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_37 = ___0_arr;
		int32_t L_38 = ___1_startIndex;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		il2cpp_codegen_memcpy(L_40, (L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_41 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		Node__ctor_mBEA2724C6D6A42C977E0C127FD93C9B5C6C3ED46(L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_42, L_40, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_40), (uint8_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 45));
		NullCheck(L_36);
		Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline(L_36, L_41, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_43 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_44 = ___0_arr;
		int32_t L_45 = ___2_endIndex;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		il2cpp_codegen_memcpy(L_47, (L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_48 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		Node__ctor_mBEA2724C6D6A42C977E0C127FD93C9B5C6C3ED46(L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_49, L_47, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_47), (uint8_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 45));
		NullCheck(L_43);
		Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_inline(L_43, L_48, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 54));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_50 = ___3_redNode;
		if (!L_50)
		{
			goto IL_011e;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_51 = V_1;
		NullCheck(L_51);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_52;
		L_52 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_51, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_53 = ___3_redNode;
		NullCheck(L_52);
		Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline(L_52, L_53, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		goto IL_011e;
	}

IL_00c8:
	{
		int32_t L_54 = ___1_startIndex;
		int32_t L_55 = ___2_endIndex;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_54, L_55))/2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_56 = ___0_arr;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		il2cpp_codegen_memcpy(L_59, (L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_60 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		Node__ctor_mBEA2724C6D6A42C977E0C127FD93C9B5C6C3ED46(L_60, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_61, L_59, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_59), (uint8_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 45));
		V_1 = L_60;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_62 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_63 = ___0_arr;
		int32_t L_64 = ___1_startIndex;
		int32_t L_65 = V_2;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_66 = ___3_redNode;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_67;
		L_67 = SortedSet_1_ConstructRootFromSortedArray_m0AC5E70700A7067C31CEE63B202DEF8E477793B2(L_63, L_64, ((int32_t)il2cpp_codegen_subtract(L_65, 1)), L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		NullCheck(L_62);
		Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline(L_62, L_67, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_68 = V_1;
		int32_t L_69 = V_0;
		if (!((int32_t)(L_69%2)))
		{
			G_B11_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_68);
			goto IL_0100;
		}
		G_B10_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_68);
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_70 = ___0_arr;
		int32_t L_71 = V_2;
		int32_t L_72 = ___2_endIndex;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_73;
		L_73 = SortedSet_1_ConstructRootFromSortedArray_m0AC5E70700A7067C31CEE63B202DEF8E477793B2(L_70, ((int32_t)il2cpp_codegen_add(L_71, 1)), L_72, (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		G_B12_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_73);
		G_B12_1 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)G_B10_0);
		goto IL_0119;
	}

IL_0100:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_74 = ___0_arr;
		int32_t L_75 = V_2;
		int32_t L_76 = ___2_endIndex;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_77 = ___0_arr;
		int32_t L_78 = V_2;
		NullCheck(L_77);
		int32_t L_79 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		il2cpp_codegen_memcpy(L_80, (L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_81 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		Node__ctor_mBEA2724C6D6A42C977E0C127FD93C9B5C6C3ED46(L_81, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_82, L_80, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_80), (uint8_t)1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 45));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_83;
		L_83 = SortedSet_1_ConstructRootFromSortedArray_m0AC5E70700A7067C31CEE63B202DEF8E477793B2(L_74, ((int32_t)il2cpp_codegen_add(L_75, 2)), L_76, L_81, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		G_B12_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_83);
		G_B12_1 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)G_B11_0);
	}

IL_0119:
	{
		NullCheck(G_B12_1);
		Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_inline(G_B12_1, G_B12_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 54));
	}

IL_011e:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_84 = V_1;
		return L_84;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_IntersectWith_m706A6E8A017678003568211D13FF78AB6892574E_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_20 = L_17;
	const Il2CppFullySharedGenericAny L_29 = L_17;
	const Il2CppFullySharedGenericAny L_36 = L_17;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_21 = L_18;
	const Il2CppFullySharedGenericAny L_37 = L_18;
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* V_0 = NULL;
	TreeSubSet_t8773A6ADED6E5D012AEABA38FC2C57685EC2A751* V_1 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	int32_t V_3 = 0;
	Enumerator_t71F09436B846CE1804083C9B36997E4573540582 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Enumerator_t71F09436B846CE1804083C9B36997E4573540582 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_8, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	int32_t V_9 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2;
		L_2 = SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)__this))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
		V_1 = ((TreeSubSet_t8773A6ADED6E5D012AEABA38FC2C57685EC2A751*)IsInstSealed((RuntimeObject*)__this, il2cpp_rgctx_data(method->klass->rgctx_data, 7)));
		TreeSubSet_t8773A6ADED6E5D012AEABA38FC2C57685EC2A751* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		VirtualActionInvoker0::Invoke(26, __this);
	}

IL_0033:
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_6 = V_0;
		if (!L_6)
		{
			goto IL_014c;
		}
	}
	{
		TreeSubSet_t8773A6ADED6E5D012AEABA38FC2C57685EC2A751* L_7 = V_1;
		if (L_7)
		{
			goto IL_014c;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_8 = V_0;
		bool L_9;
		L_9 = SortedSet_1_HasEqualComparer_m01D060ABCDB8082B159A6EDE221B55E52C0F7433(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_9)
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_10;
		L_10 = SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 91), (uint32_t)L_10);
		V_2 = L_11;
		V_3 = 0;
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_12;
		L_12 = SortedSet_1_GetEnumerator_mB29FBB39E45DF7D1AF3264B732A02613F9305CC2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 85));
		V_4 = L_12;
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_13 = V_0;
		NullCheck(L_13);
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_14;
		L_14 = SortedSet_1_GetEnumerator_mB29FBB39E45DF7D1AF3264B732A02613F9305CC2(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 85));
		V_5 = L_14;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 93));
		bool L_15;
		L_15 = Enumerator_MoveNext_mE700C9CC529ECE454379FBD8FC409DA45E1B03AC((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 92));
		V_6 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16;
		L_16 = Enumerator_MoveNext_mE700C9CC529ECE454379FBD8FC409DA45E1B03AC((&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 92));
		V_7 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		SortedSet_1_get_Max_mF51C4841F6E4362405C8A9AE56090ED16CF4E363(__this, (Il2CppFullySharedGenericAny*)L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		il2cpp_codegen_memcpy(V_8, L_17, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		SortedSet_1_get_Min_mFDECAB680F0FD68F5698E848EB914BF86CCA91B4(__this, (Il2CppFullySharedGenericAny*)L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		goto IL_00fc;
	}

IL_0092:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_19;
		L_19 = SortedSet_1_get_Comparer_m8A7256119C783E8E8E40BC49B658DB14445F8F7F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 89));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 93));
		Enumerator_get_Current_mB3DADD6848C84F194FD9CA2F6A8D5A5BB83E2377((&V_4), (Il2CppFullySharedGenericAny*)L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 94));
		Enumerator_get_Current_mB3DADD6848C84F194FD9CA2F6A8D5A5BB83E2377((&V_5), (Il2CppFullySharedGenericAny*)L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 94));
		NullCheck(L_19);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_20: *(void**)L_20), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_21: *(void**)L_21));
		V_9 = L_22;
		int32_t L_23 = V_9;
		if ((((int32_t)L_23) >= ((int32_t)0)))
		{
			goto IL_00c0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 93));
		bool L_24;
		L_24 = Enumerator_MoveNext_mE700C9CC529ECE454379FBD8FC409DA45E1B03AC((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 92));
		V_6 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_00fc;
	}

IL_00c0:
	{
		int32_t L_25 = V_9;
		if (L_25)
		{
			goto IL_00f0;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = V_2;
		int32_t L_27 = V_3;
		int32_t L_28 = L_27;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 93));
		Enumerator_get_Current_mB3DADD6848C84F194FD9CA2F6A8D5A5BB83E2377((&V_5), (Il2CppFullySharedGenericAny*)L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 94));
		NullCheck(L_26);
		il2cpp_codegen_memcpy((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)), L_29, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), (void**)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)), (void*)L_29);
		bool L_30;
		L_30 = Enumerator_MoveNext_mE700C9CC529ECE454379FBD8FC409DA45E1B03AC((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 92));
		V_6 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		bool L_31;
		L_31 = Enumerator_MoveNext_mE700C9CC529ECE454379FBD8FC409DA45E1B03AC((&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 92));
		V_7 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		goto IL_00fc;
	}

IL_00f0:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 93));
		bool L_32;
		L_32 = Enumerator_MoveNext_mE700C9CC529ECE454379FBD8FC409DA45E1B03AC((&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 92));
		V_7 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
	}

IL_00fc:
	{
		bool L_33 = V_6;
		if (L_33)
		{
			goto IL_011e;
		}
	}
	{
		bool L_34 = V_7;
		if (L_34)
		{
			goto IL_011e;
		}
	}
	{
		RuntimeObject* L_35;
		L_35 = SortedSet_1_get_Comparer_m8A7256119C783E8E8E40BC49B658DB14445F8F7F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 89));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 93));
		Enumerator_get_Current_mB3DADD6848C84F194FD9CA2F6A8D5A5BB83E2377((&V_5), (Il2CppFullySharedGenericAny*)L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 94));
		il2cpp_codegen_memcpy(L_37, V_8, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		NullCheck(L_35);
		int32_t L_38;
		L_38 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_36: *(void**)L_36), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_37: *(void**)L_37));
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_0092;
		}
	}

IL_011e:
	{
		__this->___root = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root), (void*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_39 = V_2;
		int32_t L_40 = V_3;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_41;
		L_41 = SortedSet_1_ConstructRootFromSortedArray_m0AC5E70700A7067C31CEE63B202DEF8E477793B2(L_39, 0, ((int32_t)il2cpp_codegen_subtract(L_40, 1)), (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->___root = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root), (void*)L_41);
		int32_t L_42 = V_3;
		__this->___count = L_42;
		int32_t L_43 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return;
	}

IL_014c:
	{
		RuntimeObject* L_44 = ___0_other;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(34, __this, L_44);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_IntersectWithEnumerable_m87592D256F76A47E4B0E582D9AA7C166E70F5DDB_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_Enumerator_tCDDADC69931EBD8B99DF35B4F07B4E900662F9BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 104));
	void* L_16 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 104)));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_11 = L_7;
	const Il2CppFullySharedGenericAny L_20 = L_7;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_21 = L_8;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_15 = alloca(SizeOf_Enumerator_tCDDADC69931EBD8B99DF35B4F07B4E900662F9BF);
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_2, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF V_3 = alloca(SizeOf_Enumerator_tCDDADC69931EBD8B99DF35B4F07B4E900662F9BF);
	memset(V_3, 0, SizeOf_Enumerator_tCDDADC69931EBD8B99DF35B4F07B4E900662F9BF);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_4, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0;
		L_0 = SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 99));
		List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8(L_1, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 100));
		V_0 = L_1;
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0036:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_003f;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_003f:
				{
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_002c_1;
			}

IL_0015_1:
			{
				CHECK_PAUSE_POINT;
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 22), L_6, (Il2CppFullySharedGenericAny*)L_7);
				il2cpp_codegen_memcpy(V_2, L_7, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				bool L_9;
				L_9 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(31, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_8: *(void**)L_8));
				if (!L_9)
				{
					goto IL_002c_1;
				}
			}
			{
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_10 = V_0;
				il2cpp_codegen_memcpy(L_11, V_2, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				NullCheck(L_10);
				List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_inline(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_11: *(void**)L_11), il2cpp_rgctx_method(method->klass->rgctx_data, 101));
			}

IL_002c_1:
			{
				RuntimeObject* L_12 = V_1;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0040;
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

IL_0040:
	{
		VirtualActionInvoker0::Invoke(30, __this);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_14 = V_0;
		NullCheck(L_14);
		List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61(L_14, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 103));
		il2cpp_codegen_memcpy(V_3, L_15, SizeOf_Enumerator_tCDDADC69931EBD8B99DF35B4F07B4E900662F9BF);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006c:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Il2CppConstrainedCallData L_17;
				Il2CppMethodPointer L_18 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 104), il2cpp_rgctx_method(method->klass->rgctx_data, 108), (void*)(Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)V_3, &L_17, L_16);
				typedef void ( *func_L_19)(void*,const RuntimeMethod*);
				((func_L_19)L_18)(L_17.thisPtr,L_17.method);
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 1);
			{
				goto IL_0061_1;
			}

IL_004f_1:
			{
				CHECK_PAUSE_POINT;
				Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_inline((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)V_3, (Il2CppFullySharedGenericAny*)L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 105));
				il2cpp_codegen_memcpy(V_4, L_20, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				il2cpp_codegen_memcpy(L_21, V_4, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				bool L_23;
				L_23 = SortedSet_1_Add_mAF89E4EAB2D98CB81C066F6DC2A2C11FF43CC1BC(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_22, L_21, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_21), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
			}

IL_0061_1:
			{
				bool L_24;
				L_24 = Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)V_3, il2cpp_rgctx_method(method->klass->rgctx_data, 107));
				if (L_24)
				{
					goto IL_004f_1;
				}
			}
			{
				goto IL_007a;
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

IL_007a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_ExceptWith_m2262C29A833459303EAD18F98BBC2E996F216469_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_15 = L_10;
	const Il2CppFullySharedGenericAny L_18 = L_10;
	const Il2CppFullySharedGenericAny L_25 = L_10;
	const Il2CppFullySharedGenericAny L_31 = L_10;
	const Il2CppFullySharedGenericAny L_34 = L_10;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_16 = L_11;
	const Il2CppFullySharedGenericAny L_19 = L_11;
	const Il2CppFullySharedGenericAny L_27 = L_11;
	const Il2CppFullySharedGenericAny L_32 = L_11;
	const Il2CppFullySharedGenericAny L_35 = L_11;
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_1, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_2, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	RuntimeObject* V_3 = NULL;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_4, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->___count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		VirtualActionInvoker0::Invoke(30, __this);
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_5 = V_0;
		if (!L_5)
		{
			goto IL_00d2;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_6 = V_0;
		bool L_7;
		L_7 = SortedSet_1_HasEqualComparer_m01D060ABCDB8082B159A6EDE221B55E52C0F7433(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_7)
		{
			goto IL_00d2;
		}
	}
	{
		RuntimeObject* L_8 = __this->___comparer;
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_9 = V_0;
		NullCheck(L_9);
		SortedSet_1_get_Max_mF51C4841F6E4362405C8A9AE56090ED16CF4E363(L_9, (Il2CppFullySharedGenericAny*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		SortedSet_1_get_Min_mFDECAB680F0FD68F5698E848EB914BF86CCA91B4(__this, (Il2CppFullySharedGenericAny*)L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		NullCheck(L_8);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_10: *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_00d9;
		}
	}
	{
		RuntimeObject* L_13 = __this->___comparer;
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_14 = V_0;
		NullCheck(L_14);
		SortedSet_1_get_Min_mFDECAB680F0FD68F5698E848EB914BF86CCA91B4(L_14, (Il2CppFullySharedGenericAny*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		SortedSet_1_get_Max_mF51C4841F6E4362405C8A9AE56090ED16CF4E363(__this, (Il2CppFullySharedGenericAny*)L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		NullCheck(L_13);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_17) > ((int32_t)0)))
		{
			goto IL_00d9;
		}
	}
	{
		SortedSet_1_get_Min_mFDECAB680F0FD68F5698E848EB914BF86CCA91B4(__this, (Il2CppFullySharedGenericAny*)L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		il2cpp_codegen_memcpy(V_1, L_18, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		SortedSet_1_get_Max_mF51C4841F6E4362405C8A9AE56090ED16CF4E363(__this, (Il2CppFullySharedGenericAny*)L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		il2cpp_codegen_memcpy(V_2, L_19, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		RuntimeObject* L_20 = ___0_other;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_20);
		V_3 = L_21;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c8:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					RuntimeObject* L_22 = V_3;
					if (!L_22)
					{
						goto IL_00d1;
					}
				}
				{
					RuntimeObject* L_23 = V_3;
					NullCheck((RuntimeObject*)L_23);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				}

IL_00d1:
				{
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_00be_1;
			}

IL_0089_1:
			{
				CHECK_PAUSE_POINT;
				RuntimeObject* L_24 = V_3;
				NullCheck(L_24);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 22), L_24, (Il2CppFullySharedGenericAny*)L_25);
				il2cpp_codegen_memcpy(V_4, L_25, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				RuntimeObject* L_26 = __this->___comparer;
				il2cpp_codegen_memcpy(L_27, V_4, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				il2cpp_codegen_memcpy(L_28, V_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				NullCheck(L_26);
				int32_t L_29;
				L_29 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_27: *(void**)L_27), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_28: *(void**)L_28));
				if ((((int32_t)L_29) < ((int32_t)0)))
				{
					goto IL_00be_1;
				}
			}
			{
				RuntimeObject* L_30 = __this->___comparer;
				il2cpp_codegen_memcpy(L_31, V_4, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				il2cpp_codegen_memcpy(L_32, V_2, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				NullCheck(L_30);
				int32_t L_33;
				L_33 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_31: *(void**)L_31), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_32: *(void**)L_32));
				if ((((int32_t)L_33) <= ((int32_t)0)))
				{
					goto IL_00b5_1;
				}
			}
			{
				goto IL_00d9;
			}

IL_00b5_1:
			{
				il2cpp_codegen_memcpy(L_34, V_4, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				bool L_36;
				L_36 = SortedSet_1_Remove_m7FF75998DF211EB5A66B2AFE5118C13A3C6A0A74(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_35, L_34, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_34), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
			}

IL_00be_1:
			{
				RuntimeObject* L_37 = V_3;
				NullCheck((RuntimeObject*)L_37);
				bool L_38;
				L_38 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_37);
				if (L_38)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00d9;
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

IL_00d2:
	{
		RuntimeObject* L_39 = ___0_other;
		SortedSet_1_RemoveAllElements_m375CFA09F9E2A6328E419B47B71FB349DF1A3B38(__this, L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 111));
	}

IL_00d9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_SymmetricExceptWith_mF71EE0F02CD043DD723CF060D36BFE7B77EF395D_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* V_0 = NULL;
	int32_t V_1 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2;
		L_2 = SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = ___0_other;
		SortedSet_1_UnionWith_m64DFD2AF38EB282EC01582102FC6DD3CFE1D4DC1(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 112));
		return;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)__this))))
		{
			goto IL_0029;
		}
	}
	{
		VirtualActionInvoker0::Invoke(30, __this);
		return;
	}

IL_0029:
	{
		RuntimeObject* L_5 = ___0_other;
		V_0 = ((SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)IsInstClass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_7 = V_0;
		bool L_8;
		L_8 = SortedSet_1_HasEqualComparer_m01D060ABCDB8082B159A6EDE221B55E52C0F7433(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_9 = V_0;
		SortedSet_1_SymmetricExceptWithSameComparer_mA97B81F28F2B00BB388E3027C2FED16EAC4BBD9A(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 113));
		return;
	}

IL_0044:
	{
		RuntimeObject* L_10 = ___0_other;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11;
		L_11 = EnumerableHelpers_ToArray_TisIl2CppFullySharedGenericAny_m29EC465D80F7E6BC3D01E566ED7C4BEC9B8E35D5(L_10, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_2 = L_11;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_2;
		int32_t L_13 = V_1;
		RuntimeObject* L_14;
		L_14 = SortedSet_1_get_Comparer_m8A7256119C783E8E8E40BC49B658DB14445F8F7F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 89));
		Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915(L_12, 0, L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_2;
		int32_t L_16 = V_1;
		SortedSet_1_SymmetricExceptWithSameComparer_m3F4FA0A4CEA633A3AB78C462EFF38498E6793F8D(__this, L_15, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 114));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_SymmetricExceptWithSameComparer_mA97B81F28F2B00BB388E3027C2FED16EAC4BBD9A_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_5 = L_2;
	const Il2CppFullySharedGenericAny L_8 = L_2;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_6 = L_3;
	const Il2CppFullySharedGenericAny L_9 = L_3;
	Enumerator_t71F09436B846CE1804083C9B36997E4573540582 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_1, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_0 = ___0_other;
		NullCheck(L_0);
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_1;
		L_1 = SortedSet_1_GetEnumerator_mB29FBB39E45DF7D1AF3264B732A02613F9305CC2(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 85));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				il2cpp_codegen_runtime_class_init_inline(il2cpp_codegen_method_get_declaring_type(il2cpp_rgctx_method(method->klass->rgctx_data, 115)));
				Enumerator_Dispose_m1B66D14092A623BE5F8A22939E7A7A57B47232BE((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 115));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_002c_1;
			}

IL_0009_1:
			{
				CHECK_PAUSE_POINT;
				il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 93));
				Enumerator_get_Current_mB3DADD6848C84F194FD9CA2F6A8D5A5BB83E2377((&V_0), (Il2CppFullySharedGenericAny*)L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 94));
				il2cpp_codegen_memcpy(V_1, L_2, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				il2cpp_codegen_memcpy(L_3, V_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				bool L_4;
				L_4 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(31, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_3: *(void**)L_3));
				if (L_4)
				{
					goto IL_0024_1;
				}
			}
			{
				il2cpp_codegen_memcpy(L_5, V_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				bool L_7;
				L_7 = SortedSet_1_Add_mAF89E4EAB2D98CB81C066F6DC2A2C11FF43CC1BC(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_6, L_5, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_5), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
				goto IL_002c_1;
			}

IL_0024_1:
			{
				il2cpp_codegen_memcpy(L_8, V_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				bool L_10;
				L_10 = SortedSet_1_Remove_m7FF75998DF211EB5A66B2AFE5118C13A3C6A0A74(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_9, L_8, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_8), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
			}

IL_002c_1:
			{
				il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 93));
				bool L_11;
				L_11 = Enumerator_MoveNext_mE700C9CC529ECE454379FBD8FC409DA45E1B03AC((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 92));
				if (L_11)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0045;
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

IL_0045:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_SymmetricExceptWithSameComparer_m3F4FA0A4CEA633A3AB78C462EFF38498E6793F8D_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_other, int32_t ___1_count, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_12 = L_3;
	const Il2CppFullySharedGenericAny L_20 = L_3;
	const Il2CppFullySharedGenericAny L_23 = L_3;
	const Il2CppFullySharedGenericAny L_26 = L_3;
	const Il2CppFullySharedGenericAny L_29 = L_3;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_21 = L_13;
	const Il2CppFullySharedGenericAny L_24 = L_13;
	const Il2CppFullySharedGenericAny L_27 = L_13;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_0, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_2, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___1_count;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_other;
		NullCheck(L_1);
		int32_t L_2 = 0;
		il2cpp_codegen_memcpy(L_3, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		V_1 = 0;
		goto IL_005d;
	}

IL_0010:
	{
		CHECK_PAUSE_POINT;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0014:
	{
		CHECK_PAUSE_POINT;
		int32_t L_5 = V_1;
		int32_t L_6 = ___1_count;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_7 = V_1;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_8 = __this->___comparer;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___0_other;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		il2cpp_codegen_memcpy(L_12, (L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		NullCheck(L_8);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_12: *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_13: *(void**)L_13));
		if (!L_14)
		{
			goto IL_0010;
		}
	}

IL_0030:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = ___1_count;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_0061;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_other;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		il2cpp_codegen_memcpy(L_20, (L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		il2cpp_codegen_memcpy(V_2, L_20, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		il2cpp_codegen_memcpy(L_21, V_2, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		bool L_22;
		L_22 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(31, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_21: *(void**)L_21));
		if (L_22)
		{
			goto IL_004f;
		}
	}
	{
		il2cpp_codegen_memcpy(L_23, V_2, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		bool L_25;
		L_25 = SortedSet_1_Add_mAF89E4EAB2D98CB81C066F6DC2A2C11FF43CC1BC(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_24, L_23, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_23), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		goto IL_0057;
	}

IL_004f:
	{
		il2cpp_codegen_memcpy(L_26, V_2, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		bool L_28;
		L_28 = SortedSet_1_Remove_m7FF75998DF211EB5A66B2AFE5118C13A3C6A0A74(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_27, L_26, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_26), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
	}

IL_0057:
	{
		il2cpp_codegen_memcpy(L_29, V_2, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		il2cpp_codegen_memcpy(V_0, L_29, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_005d:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = ___1_count;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0014;
		}
	}

IL_0061:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_get_Min_mFDECAB680F0FD68F5698E848EB914BF86CCA91B4_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(35, __this, (Il2CppFullySharedGenericAny*)L_0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_get_MinInternal_mA87A571C9C85CF3113AA93D6D5FBC711BCC26744_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_1, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		il2cpp_codegen_memcpy(L_1, V_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		return;
	}

IL_0012:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = __this->___root;
		V_0 = L_2;
		goto IL_0022;
	}

IL_001b:
	{
		CHECK_PAUSE_POINT;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = V_0;
		NullCheck(L_3);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4;
		L_4 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_0 = L_4;
	}

IL_0022:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_5 = V_0;
		NullCheck(L_5);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6;
		L_6 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (L_6)
		{
			goto IL_001b;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = V_0;
		NullCheck(L_7);
		Node_get_Item_m68FF84117314DB42151562EC40D7DD433F22A81A_inline(L_7, (Il2CppFullySharedGenericAny*)L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_get_Max_mF51C4841F6E4362405C8A9AE56090ED16CF4E363_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(36, __this, (Il2CppFullySharedGenericAny*)L_0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_get_MaxInternal_m92DC2F4EC67A74D1B5F7A37B45D0900EE040B04C_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_1, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		il2cpp_codegen_memcpy(L_1, V_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		return;
	}

IL_0012:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = __this->___root;
		V_0 = L_2;
		goto IL_0022;
	}

IL_001b:
	{
		CHECK_PAUSE_POINT;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = V_0;
		NullCheck(L_3);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4;
		L_4 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_0 = L_4;
	}

IL_0022:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_5 = V_0;
		NullCheck(L_5);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6;
		L_6 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if (L_6)
		{
			goto IL_001b;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = V_0;
		NullCheck(L_7);
		Node_get_Item_m68FF84117314DB42151562EC40D7DD433F22A81A_inline(L_7, (Il2CppFullySharedGenericAny*)L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_System_Runtime_Serialization_ISerializable_GetObjectData_m542305855B960DD4A3C41B23E6C12C671FCBA4AE_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___1_context;
		VirtualActionInvoker2< SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 >::Invoke(37, __this, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_GetObjectData_mE6F953A9B70F9C6F40D01EC828D4AE6EED34D93B_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0155A0AFC8BEA8B1160767A28C9F6B5A5DE21612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->___count;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->___comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 119)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		int32_t L_9 = __this->___version;
		NullCheck(L_8);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_8, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_9, NULL);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10 = __this->___root;
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_11;
		L_11 = SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 91), (uint32_t)L_11);
		V_0 = L_12;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_0;
		SortedSet_1_CopyTo_m34CB5771C13F8F93B145C512B6A2D217CC4B12F9(__this, L_13, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = ___0_info;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 20)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		NullCheck(L_14);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_14, _stringLiteral0155A0AFC8BEA8B1160767A28C9F6B5A5DE21612, (RuntimeObject*)L_15, L_17, NULL);
	}

IL_007d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_mFDBF0BF4F39DA621F204E108AE8ED0B59349CF8A_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_sender;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(38, __this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_OnDeserialization_m32D2F6DF9680EF85F1E98A262055DB2EE717E334_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0155A0AFC8BEA8B1160767A28C9F6B5A5DE21612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___comparer;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->___siInfo;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_2 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEE8DD47F29A535762B8579D9E3E69D0D84968BB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001c:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->___siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 119)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->___comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = __this->___siInfo;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_7, _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		if (!L_9)
		{
			goto IL_009f;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_10 = __this->___siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 20)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_10);
		RuntimeObject* L_13;
		L_13 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_10, _stringLiteral0155A0AFC8BEA8B1160767A28C9F6B5A5DE21612, L_12, NULL);
		V_1 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = V_1;
		if (L_14)
		{
			goto IL_0083;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_15 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB85B9BFFDE3135B37337A7491E104BC8493E6C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0083:
	{
		V_2 = 0;
		goto IL_0099;
	}

IL_0087:
	{
		CHECK_PAUSE_POINT;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		il2cpp_codegen_memcpy(L_19, (L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		bool L_21;
		L_21 = SortedSet_1_Add_mAF89E4EAB2D98CB81C066F6DC2A2C11FF43CC1BC(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_20, L_19, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6): *(void**)L_19), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0099:
	{
		int32_t L_23 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_24)->max_length),NULL));
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0087;
		}
	}

IL_009f:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = __this->___siInfo;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_26, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->___version = L_27;
		int32_t L_28 = __this->___count;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) == ((int32_t)L_29)))
		{
			goto IL_00c9;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_30 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_30, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD158A55362F81195C165C2CFB448622A361B357C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, method);
	}

IL_00c9:
	{
		__this->___siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedSet_1_Log2_m6EDFF3696AB144C4BCA5D85DE8FB595407FBD64F_gshared (int32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		V_0 = 0;
		goto IL_000d;
	}

IL_0004:
	{
		CHECK_PAUSE_POINT;
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___0_value;
		___0_value = ((int32_t)(L_1>>1));
	}

IL_000d:
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_3 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSubsystemGroup_2_get_Frozen_mB70A61B14C8E51064385759618692E2A8DE747D1_gshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedSubsystemGroup_2_tA61C60B61A2BA30771BCF4D638792C1A5787C123_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 179));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Scripting + 180));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 181));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_InitDelegates;
		return (bool)((!(((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2_RegisterSubsystem_m623E4ED8B163C9FDB1A8E97B5E278099BE27C2C6_gshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, String_t* ___0_name, Il2CppFullySharedGenericAny ___1_initDelegate, Il2CppFullySharedGenericAny ___2_cleanupDelegate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_dependencies, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedSubsystemGroup_2_tA61C60B61A2BA30771BCF4D638792C1A5787C123_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const uint32_t SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
	const Il2CppFullySharedGenericAny L_17 = L_11;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
	const Il2CppFullySharedGenericAny L_18 = L_12;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_name), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___1_initDelegate : &___1_initDelegate), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___2_cleanupDelegate : &___2_cleanupDelegate), (&___3_dependencies));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 182));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Scripting + 183));
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_0 = NULL;
	Il2CppFullySharedGenericAny G_B6_1 = alloca(SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
	memset(G_B6_1, 0, SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
	Il2CppFullySharedGenericAny G_B6_2 = alloca(SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
	memset(G_B6_2, 0, SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
	String_t* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* G_B6_5 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_0 = NULL;
	Il2CppFullySharedGenericAny G_B5_1 = alloca(SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
	memset(G_B5_1, 0, SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
	Il2CppFullySharedGenericAny G_B5_2 = alloca(SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
	memset(G_B5_2, 0, SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
	String_t* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* G_B5_5 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 184));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 185));
		bool L_0;
		L_0 = SortedSubsystemGroup_2_get_Frozen_mB70A61B14C8E51064385759618692E2A8DE747D1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 185));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 186));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 187));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral920B6B05D1EF9E61AEC546EDC66550B870075C4B)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 187));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 188));
		Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* L_2 = __this->___m_Subsystems;
		String_t* L_3 = ___0_name;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 189));
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mC9F8DC01597E063320D72102496B36A33573FB62(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 189));
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 190));
		String_t* L_5 = ___0_name;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 191));
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral41893BA7A99DC52D8BE60380825325D2A8540963)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0B31AB38360ECF9683ADAB607974B916C9663192)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 191));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 192));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 192));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 193));
		Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* L_8 = __this->___m_Subsystems;
		String_t* L_9 = ___0_name;
		String_t* L_10 = ___0_name;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___1_initDelegate : &___1_initDelegate), SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___2_cleanupDelegate : &___2_cleanupDelegate), SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ___3_dependencies;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		if (L_14)
		{
			G_B6_0 = L_14;
			il2cpp_codegen_memcpy(G_B6_1, L_12, SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
			il2cpp_codegen_memcpy(G_B6_2, L_11, SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
			G_B6_3 = L_10;
			G_B6_4 = L_9;
			G_B6_5 = L_8;
			goto IL_004c;
		}
		G_B5_0 = L_14;
		il2cpp_codegen_memcpy(G_B5_1, L_12, SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
		il2cpp_codegen_memcpy(G_B5_2, L_11, SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
		G_B5_3 = L_10;
		G_B5_4 = L_9;
		G_B5_5 = L_8;
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 194));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15;
		L_15 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 194));
		G_B6_0 = L_15;
		il2cpp_codegen_memcpy(G_B6_1, G_B5_1, SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
		il2cpp_codegen_memcpy(G_B6_2, G_B5_2, SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
		G_B6_3 = G_B5_3;
		G_B6_4 = G_B5_4;
		G_B6_5 = G_B5_5;
	}

IL_004c:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 195));
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_16 = (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
		SubsystemEntry__ctor_m5129F5B2802BF41D25D5B1E91C96FD6624EF6A9C(L_16, G_B6_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? il2cpp_codegen_memcpy(L_17, G_B6_2, SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F): *(void**)G_B6_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? il2cpp_codegen_memcpy(L_18, G_B6_1, SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B): *(void**)G_B6_1), G_B6_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 195));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 196));
		NullCheck(G_B6_5);
		Dictionary_2_Add_m3797D5E0CA4162386E47AAF98C8F843F56A53273(G_B6_5, G_B6_4, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 196));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 197));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* SortedSubsystemGroup_2_get_SortedInitCallbacks_m79DB0BEF575C22B876AAFA3CE9D2FD04F698CB33_gshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedSubsystemGroup_2_tA61C60B61A2BA30771BCF4D638792C1A5787C123_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 198));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Scripting + 199));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 200));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_InitDelegates;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 201));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 202));
		SortedSubsystemGroup_2_SortAndFreeze_m1FCBB2ED33FA5A550ACD53F361221A8515D86886(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 202));
	}

IL_000e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 203));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___m_InitDelegates;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* SortedSubsystemGroup_2_get_SortedCleanupCallbacks_mF8275ACDA283F7AD879E7D40CD8E7AE607AADCB3_gshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedSubsystemGroup_2_tA61C60B61A2BA30771BCF4D638792C1A5787C123_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 204));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Scripting + 205));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 206));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_CleanupDelegates;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 207));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 208));
		SortedSubsystemGroup_2_SortAndFreeze_m1FCBB2ED33FA5A550ACD53F361221A8515D86886(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 208));
	}

IL_000e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 209));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___m_CleanupDelegates;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2_SortAndFreeze_m1FCBB2ED33FA5A550ACD53F361221A8515D86886_gshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedSubsystemGroup_2_tA61C60B61A2BA30771BCF4D638792C1A5787C123_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 210));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Scripting + 211));
	Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* G_B2_0 = NULL;
	SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* G_B2_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B2_2 = NULL;
	Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* G_B1_0 = NULL;
	SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* G_B1_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B1_2 = NULL;
	Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B4_2 = NULL;
	Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B3_2 = NULL;
	Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B6_2 = NULL;
	Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B5_2 = NULL;
	Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B8_2 = NULL;
	Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B7_2 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 212));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 213));
		SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* L_0;
		L_0 = SortedSubsystemGroup_2_TopologicalSort_m4EF1485E9F3D436AD318FFE4C3961A2F9ABF22D8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 213));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 214));
		SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_2 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)))->___U3CU3E9__10_0;
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_0028;
		}
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = __this;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
		U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3* L_4 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)))->___U3CU3E9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 215));
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_5 = (Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
		Func_2__ctor_m463CBC838C2258086ACBB9EB462BC03A1C3E5D78(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 215));
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_6 = L_5;
		((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)))->___U3CU3E9__10_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)))->___U3CU3E9__10_0), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0028:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 216));
		RuntimeObject* L_7;
		L_7 = Enumerable_Where_TisSubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98_mB7108794F3668F3A6FBEDC5BB91B32FCC06233AD((RuntimeObject*)G_B2_1, G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 216));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_8 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)))->___U3CU3E9__10_1;
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_9 = L_8;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			G_B4_2 = G_B2_2;
			goto IL_004c;
		}
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		G_B3_2 = G_B2_2;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
		U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3* L_10 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)))->___U3CU3E9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 217));
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_11 = (Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21));
		Func_2__ctor_m7CB09F9DE9172D555512289043B431C0352FB3AF(L_11, (RuntimeObject*)L_10, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 217));
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_12 = L_11;
		((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)))->___U3CU3E9__10_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)))->___U3CU3E9__10_1), (void*)L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_004c:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 218));
		RuntimeObject* L_13;
		L_13 = Enumerable_Select_TisSubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98_TisIl2CppFullySharedGenericAny_mD0FC031BA4D906C59D59ADBB918A9C6D3C727EFE(G_B4_1, G_B4_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 218));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 219));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14;
		L_14 = Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 219));
		NullCheck(G_B4_2);
		G_B4_2->___m_InitDelegates = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___m_InitDelegates), (void*)L_14);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 220));
		SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 221));
		RuntimeObject* L_16;
		L_16 = Enumerable_AsEnumerable_TisSubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98_mADCAEDBCDDE148042C9C8A86F3B71209FBB97550((RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 221));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 222));
		RuntimeObject* L_17;
		L_17 = Enumerable_Reverse_TisSubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98_m0858AD99F63BE6D1B6541B4CA36CE5570B19D1BD(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 222));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_18 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)))->___U3CU3E9__10_2;
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_19 = L_18;
		if (L_19)
		{
			G_B6_0 = L_19;
			G_B6_1 = L_17;
			G_B6_2 = __this;
			goto IL_0086;
		}
		G_B5_0 = L_19;
		G_B5_1 = L_17;
		G_B5_2 = __this;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
		U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3* L_20 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)))->___U3CU3E9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 223));
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_21 = (Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
		Func_2__ctor_m463CBC838C2258086ACBB9EB462BC03A1C3E5D78(L_21, (RuntimeObject*)L_20, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 223));
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_22 = L_21;
		((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)))->___U3CU3E9__10_2 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)))->___U3CU3E9__10_2), (void*)L_22);
		G_B6_0 = L_22;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0086:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 224));
		RuntimeObject* L_23;
		L_23 = Enumerable_Where_TisSubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98_mB7108794F3668F3A6FBEDC5BB91B32FCC06233AD(G_B6_1, G_B6_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 224));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_24 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)))->___U3CU3E9__10_3;
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_25 = L_24;
		if (L_25)
		{
			G_B8_0 = L_25;
			G_B8_1 = L_23;
			G_B8_2 = G_B6_2;
			goto IL_00aa;
		}
		G_B7_0 = L_25;
		G_B7_1 = L_23;
		G_B7_2 = G_B6_2;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
		U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3* L_26 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)))->___U3CU3E9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 225));
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_27 = (Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
		Func_2__ctor_m7CB09F9DE9172D555512289043B431C0352FB3AF(L_27, (RuntimeObject*)L_26, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 225));
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_28 = L_27;
		((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)))->___U3CU3E9__10_3 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)))->___U3CU3E9__10_3), (void*)L_28);
		G_B8_0 = L_28;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_00aa:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 226));
		RuntimeObject* L_29;
		L_29 = Enumerable_Select_TisSubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98_TisIl2CppFullySharedGenericAny_mD0FC031BA4D906C59D59ADBB918A9C6D3C727EFE(G_B8_1, G_B8_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 226));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 227));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30;
		L_30 = Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6(L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 227));
		NullCheck(G_B8_2);
		G_B8_2->___m_CleanupDelegates = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_2->___m_CleanupDelegates), (void*)L_30);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 228));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* SortedSubsystemGroup_2_TopologicalSort_m4EF1485E9F3D436AD318FFE4C3961A2F9ABF22D8_gshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedSubsystemGroup_2_tA61C60B61A2BA30771BCF4D638792C1A5787C123_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* V_0 = NULL;
	List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* V_1 = NULL;
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* V_2 = NULL;
	Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04 V_3;
	memset((&V_3), 0, sizeof(V_3));
	SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* V_4 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 229));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Scripting + 230));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 231));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 232));
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_0, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 232));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 233));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 234));
		List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* L_1 = (List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37));
		List_1__ctor_m30D9B6697FD81714009500BABED3F9987D9EF88F(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 234));
		V_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 235));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 236));
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_2 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_2, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 236));
		V_2 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 237));
		Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* L_3 = __this->___m_Subsystems;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 238));
		NullCheck(L_3);
		ValueCollection_t8830C05E9E7F8E46BC95A17F50D03182CDF67312* L_4;
		L_4 = Dictionary_2_get_Values_m22896142CE44CCC672576C47E06E677663F84D9C(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 238));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 239));
		NullCheck(L_4);
		Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04 L_5;
		L_5 = ValueCollection_GetEnumerator_m9A88DBE532DB47A6E12717EF308AEE827E57E734(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 239));
		V_3 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 247));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 248));
				Enumerator_Dispose_m928A92DBC85A23CCAEDE32082D8964C44D495578((&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 248));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 240));
				goto IL_0039_1;
			}

IL_0025_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 241));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 242));
				SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_6;
				L_6 = Enumerator_get_Current_mB27995A26134CA0C9E04892C68A9FA8CC7FC8E9E_inline((&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 242));
				V_4 = L_6;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 243));
				SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_7 = V_4;
				HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_8 = V_0;
				List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* L_9 = V_1;
				HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_10 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 244));
				SortedSubsystemGroup_2_Visit_m357521131CFFCC13DD1F795FEB39EC17133A5A9B(__this, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 244));
			}

IL_0039_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 245));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 246));
				bool L_11;
				L_11 = Enumerator_MoveNext_mDF4A5D1B9189C55CB601E8558892D1F4358AEB14((&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 246));
				if (L_11)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_0052;
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

IL_0052:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 249));
		List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* L_12 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 250));
		NullCheck(L_12);
		SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* L_13;
		L_13 = List_1_ToArray_m624D07F76B23E115B1291FAACDAE10A903D0BEF4(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 250));
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2_Visit_m357521131CFFCC13DD1F795FEB39EC17133A5A9B_gshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* ___0_subsystem, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___1_visited, List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* ___2_sorted, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___3_pendingDependencies, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedSubsystemGroup_2_tA61C60B61A2BA30771BCF4D638792C1A5787C123_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* V_3 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_subsystem), (&___1_visited), (&___2_sorted), (&___3_pendingDependencies));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 251));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Scripting + 252));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 253));
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = ___1_visited;
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_1 = ___0_subsystem;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 254));
		NullCheck(L_1);
		String_t* L_2;
		L_2 = SubsystemEntry_get_Name_m92E7AADE7DE5ADAE7A52287CD1D237F74D8C777D_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 254));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 255));
		NullCheck(L_0);
		bool L_3;
		L_3 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_0, L_2, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 255));
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 256));
		return;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 257));
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_4 = ___1_visited;
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_5 = ___0_subsystem;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 258));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = SubsystemEntry_get_Name_m92E7AADE7DE5ADAE7A52287CD1D237F74D8C777D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 258));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 259));
		NullCheck(L_4);
		bool L_7;
		L_7 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_4, L_6, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 259));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 260));
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_8 = ___3_pendingDependencies;
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_9 = ___0_subsystem;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 261));
		NullCheck(L_9);
		String_t* L_10;
		L_10 = SubsystemEntry_get_Name_m92E7AADE7DE5ADAE7A52287CD1D237F74D8C777D_inline(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 261));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 262));
		NullCheck(L_8);
		bool L_11;
		L_11 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_8, L_10, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 262));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 263));
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_12 = ___0_subsystem;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 264));
		NullCheck(L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13;
		L_13 = SubsystemEntry_get_Dependencies_m6FD3A3DF3DAD8B666CD4F8A681FBED7428941A16_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 264));
		V_0 = L_13;
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 265));
		goto IL_009a;
	}

IL_0035:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 266));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 267));
		Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* L_18 = __this->___m_Subsystems;
		String_t* L_19 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 268));
		NullCheck(L_18);
		bool L_20;
		L_20 = Dictionary_2_TryGetValue_m7B9F808ED9BE5FA14EA3F3A73F5E50CADFCCCB7B(L_18, L_19, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 268));
		if (L_20)
		{
			goto IL_0065;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 269));
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_21 = ___0_subsystem;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 270));
		NullCheck(L_21);
		String_t* L_22;
		L_22 = SubsystemEntry_get_Name_m92E7AADE7DE5ADAE7A52287CD1D237F74D8C777D_inline(L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 270));
		String_t* L_23 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 271));
		String_t* L_24;
		L_24 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral41893BA7A99DC52D8BE60380825325D2A8540963)), L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral96DF4500E5408A7ED26D010DF5824289A767048E)), L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 271));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 272));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, L_24, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 272));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0065:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 273));
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_26 = ___3_pendingDependencies;
		String_t* L_27 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 274));
		NullCheck(L_26);
		bool L_28;
		L_28 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_26, L_27, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 274));
		if (!L_28)
		{
			goto IL_008b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 275));
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_29 = ___0_subsystem;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 276));
		NullCheck(L_29);
		String_t* L_30;
		L_30 = SubsystemEntry_get_Name_m92E7AADE7DE5ADAE7A52287CD1D237F74D8C777D_inline(L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 276));
		String_t* L_31 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 277));
		String_t* L_32;
		L_32 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral575B4BE92F0D75E69C018C6AA4FBC530DDD4B595)), L_30, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D98CF45AE5B5E623759A6DCB43B04AC6BAE9719)), L_31, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 277));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 278));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_33 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_33, L_32, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 278));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, method);
	}

IL_008b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 279));
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_34 = V_3;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_35 = ___1_visited;
		List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* L_36 = ___2_sorted;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_37 = ___3_pendingDependencies;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 280));
		SortedSubsystemGroup_2_Visit_m357521131CFFCC13DD1F795FEB39EC17133A5A9B(__this, L_34, L_35, L_36, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 280));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 281));
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_009a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 282));
		int32_t L_39 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = V_0;
		NullCheck(L_40);
		int32_t L_41 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_40)->max_length),NULL));
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_0035;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 283));
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_42 = ___3_pendingDependencies;
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_43 = ___0_subsystem;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 284));
		NullCheck(L_43);
		String_t* L_44;
		L_44 = SubsystemEntry_get_Name_m92E7AADE7DE5ADAE7A52287CD1D237F74D8C777D_inline(L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 284));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 285));
		NullCheck(L_42);
		bool L_45;
		L_45 = HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA(L_42, L_44, HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 285));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 286));
		List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* L_46 = ___2_sorted;
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_47 = ___0_subsystem;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 287));
		NullCheck(L_46);
		List_1_Add_mDB72F154BBB182A1CA93765FD4B661C89DF850EC_inline(L_46, L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 287));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 288));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2__ctor_m4971314A2748C765A98BF0C41A60B618A69F87B6_gshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedSubsystemGroup_2_tA61C60B61A2BA30771BCF4D638792C1A5787C123_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 289));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Scripting + 290));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 291));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 292));
		Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* L_0 = (Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		Dictionary_2__ctor_m2FA79E3E319A0B93F095B71AC03BEFE2D6A64637(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 292));
		__this->___m_Subsystems = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Subsystems), (void*)L_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 293));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 293));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_gshared_inline (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = *(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TreeWalkPredicate_1_Invoke_mF05B0B239CF2F52D600F5E3BBC0BA15EE047676E_gshared_inline (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_node, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_node, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = *(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mCAD00A69587F884F88C36DE7423C3C329166144E_gshared_inline (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_get_Item_m68FF84117314DB42151562EC40D7DD433F22A81A_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0)), SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Node_get_Color_m9A8282043129C40F83EE3E6A8F4A49B8DF4480C7_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_Color_m7059ED9294523EF76ADB6700781A80CEE58623EC_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		uint8_t L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SortedSet_1_get_Comparer_m8A7256119C783E8E8E40BC49B658DB14445F8F7F_gshared_inline (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___comparer;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m77681472C32B9ABB97AE602C0D4C365A0A8E8ACE_gshared_inline (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t000C678F2AD05088377B639A262C97D1B73DA1E8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t000C678F2AD05088377B639A262C97D1B73DA1E8);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_TValue_t000C678F2AD05088377B639A262C97D1B73DA1E8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_t000C678F2AD05088377B639A262C97D1B73DA1E8);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemEntry_get_Name_m92E7AADE7DE5ADAE7A52287CD1D237F74D8C777D_gshared_inline (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemEntry_t859A00D63695B7E9F537734CA460B7789E4D9092_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 294));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Scripting + 295));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 296));
		String_t* L_0 = *(String_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* SubsystemEntry_get_Dependencies_m6FD3A3DF3DAD8B666CD4F8A681FBED7428941A16_gshared_inline (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemEntry_t859A00D63695B7E9F537734CA460B7789E4D9092_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 303));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Scripting + 304));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 305));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = *(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		return L_0;
	}
}
