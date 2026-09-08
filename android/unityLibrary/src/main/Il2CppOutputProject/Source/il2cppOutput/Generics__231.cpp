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
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { &p1, p2 };
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
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Builder_t78DA893EF9813330E1E2C308502E62A76678D876;
struct Builder_tDAEBE5CD087509AC31F7881193393BAA73D29A68;
struct Builder_t431E90D62A61669553FF359FE81BAD1D3EFE64E5;
struct Builder_tFA7DD71241FF9863641DD1A4349C2AB38787646A;
struct Comparer_1_tBCE1CDEBF3E9D90F967A17355B6C468A404AA4C9;
struct Comparer_1_t178DF674F2B43D7321E70F9D20DC0FB879D78BCC;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49;
struct EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5;
struct EqualityComparer_1_t7CF2CDB87E1B6F6C7D463172655828C6F2A7974B;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7;
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct IBinaryTree_1_tFA8A748A7F31903D658F572782B8EE8F2C56597F;
struct IBinaryTree_1_t86C6527EF1161108841D1DEEEA462FA55C505F11;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IEnumerable_1_tC9B78BD09596EB85FA82FA63B091B4F61900F530;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t4DE5D611F582A8EF69C28B2A51F059A0FF0F44AA;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IOrderedCollection_1_t7A5FFBEB711437F5D0BDEBD1C897631D0DC59889;
struct IOrderedCollection_1_t537C6DE6F4F927A415EE775B1FB79BB11C63317F;
struct ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87;
struct ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4;
struct ImmutableSortedDictionary_2_tFEEEBE0831311A2E1A71C5F4F29C4F681DC002BE;
struct ImmutableSortedSet_1_tE2D8C43D35FC693B6903456E6D1E668B3E022A93;
struct KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct Node_t011AD9742C3342078C929B341E16AF3F1ACFD1B7;
struct Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB;
struct Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC;
struct Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB;
struct Node_t27454880F6EA7B4F9AFE6A78DE18B7EE9187AEEC;
struct Node_t026D05D192ABB0E7322A354157B1D2DC64E5E63E;
struct Node_tD2AD8B22DE509ED94E4F81F3131D77E256C312CC;
struct Node_tC5111E77A2002D0AD173457666915D4D0BD59865;
struct Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA;
struct Node_t1FA249336EE9BCD448BED8888AB94B824701C928;
struct NullableComparer_1_t1BC4D5CE667344ACACF9776303C9B3363E46D079;
struct NullableEqualityComparer_1_t0C0CFE9457456335CB5101AC74592B8D8350EDA9;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct SecurePooledObject_1_t467271AD50551204A6B66BB51B13C4114638E331;
struct SecurePooledObject_1_t8A9062FF466E79579F83D1B49497EE0188CDE206;
struct SecurePooledObject_1_t36A8B18D86DB780848CE3D1E5CCB53D6C5B5C9E8;
struct SecurePooledObject_1_t3616D3DE4EB2D93F236C8D697F24D2692305C9EC;
struct SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232;
struct SortedInt32KeyNode_1_t8D8DB6F733B5380172E9A1F0219E9058184E38D1;
struct SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169;
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
struct Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71;
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A;
struct TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C;
struct ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E;
struct CustomAttributeTypedArgument_1U5BU5D_t6D586DD688598EBC6939E9FA86CFC166E60EAB14;
struct ImmutableArray_1U5BU5D_tCEE41B06D86785846C5946846FE4C147C6BB8663;
struct ImmutableArray_1U5BU5D_t594282F1DE07A5DA17EC36A9F3D8E5234760FEEE;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct NodeU5BU5D_tEDF34F08DB17591B4543CE3055D3D16C42535D37;
struct Nullable_1U5BU5D_t403487FE4BCECFEE095568C37247ECCDA477FB50;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DataColumnU5BU5D_t4600ECA5C95E7699298FCD6D677AEAD7D9F5F0CA;
struct DebugDirectoryEntryU5BU5D_t9C82229475CC97D13B6EDF537A699295881668BE;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ExceptionRegionU5BU5D_t8CC56E34C2D28EE2F9CF4902F41737C6C1229F18;
struct ExportedTypeHandleU5BU5D_t74265AC03C48F618174C501862DF769B682825E7;
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct MethodDefinitionHandleU5BU5D_t49B83D2CDA1060A8E87C18B35A839AFB52A8FFE8;
struct NamespaceDefinitionHandleU5BU5D_tD1270F312DA5C8852EABE4DF355D001376E63BB9;
struct SectionHeaderU5BU5D_t11F8F35E6EFBCF4817877D778A965E5095F0EAA1;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct TypeDefinitionHandleU5BU5D_tF67B10F360AAB6684F510AC124CC84EEF6B041D6;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct RowCountsU5BU5D_t5643308C6F852B3BEE7DF8B31FF7FC06780B13CD;
struct SectionU5BU5D_tD9582A1E07CF20F887EAC5D8887C8D0EEA4898E2;
struct SerializedSectionU5BU5D_t7E849ADE83A7712DC9EF608A4A299A1A34B995DB;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EnumInfo_t786CA2C24EE84B1EC2F48E8448A3A0AC6F842571;
struct EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398;
struct IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D;
struct IBinaryTree_t16CFE96080CF5E1556537A43642E232C7CF5CCCD;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_VectorGraphicsModule[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_t94F426715F6702F0295747008794B9AC9DF5757F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3FC9399673D70886E209A79694134E10FB6A1D;
IL2CPP_EXTERN_C String_t* _stringLiteral281B12C8C5558E50A8864EE103FF46766E9540F7;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511;
IL2CPP_EXTERN_C String_t* _stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699;
IL2CPP_EXTERN_C String_t* _stringLiteral8161BDFF52A5B15D4FB712E79CA5989CCC96AA79;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteralA2E138AD319A0E08FFC4A185CE05933BF5C01D5C;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C;
IL2CPP_EXTERN_C String_t* _stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralECF97F9F3209775CC5BF032CE88B6A0C2F18015C;
IL2CPP_EXTERN_C String_t* _stringLiteralEE79E0ED75285085B891F475FE68B37575CE1220;
IL2CPP_EXTERN_C String_t* _stringLiteralF300D2310959AF105732D339376803869D9B2B91;
IL2CPP_EXTERN_C const RuntimeMethod* Requires_NotNull_TisRuntimeArray_mEA688B1EA5C572D7FC545A7E12223DA6C4C902D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Node_tCA639292D33FB0A5929CD07DE15BA27D9C35AE09_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct Nullable_1U5BU5D_t403487FE4BCECFEE095568C37247ECCDA477FB50;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_t6B7267D784767290B17500D08316EBC6D3C29BF0  : public RuntimeObject
{
};
struct Builder_t78DA893EF9813330E1E2C308502E62A76678D876  : public RuntimeObject
{
	SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ____root;
	RuntimeObject* ____equalityComparer;
	RuntimeObject* ____hashBucketEqualityComparer;
	int32_t ____count;
	ImmutableHashSet_1_t6C7F4F01C451587DF1FDCDFDC944E883ED342F87* ____immutable;
	int32_t ____version;
};
struct Builder_tDAEBE5CD087509AC31F7881193393BAA73D29A68  : public RuntimeObject
{
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ____root;
	ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4* ____immutable;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Builder_t431E90D62A61669553FF359FE81BAD1D3EFE64E5  : public RuntimeObject
{
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ____root;
	RuntimeObject* ____comparer;
	ImmutableSortedSet_1_tE2D8C43D35FC693B6903456E6D1E668B3E022A93* ____immutable;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Builder_tFA7DD71241FF9863641DD1A4349C2AB38787646A  : public RuntimeObject
{
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ____root;
	RuntimeObject* ____keyComparer;
	RuntimeObject* ____valueComparer;
	int32_t ____count;
	ImmutableSortedDictionary_2_tFEEEBE0831311A2E1A71C5F4F29C4F681DC002BE* ____immutable;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Comparer_1_tBCE1CDEBF3E9D90F967A17355B6C468A404AA4C9  : public RuntimeObject
{
};
struct Comparer_1_t178DF674F2B43D7321E70F9D20DC0FB879D78BCC  : public RuntimeObject
{
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
};
struct EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5  : public RuntimeObject
{
};
struct EqualityComparer_1_t7CF2CDB87E1B6F6C7D463172655828C6F2A7974B  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4  : public RuntimeObject
{
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ____root;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Node_tB3F8F4B19357CF6D8E7E1362A5CDD0241B3A80F3  : public RuntimeObject
{
	int32_t ____key;
	bool ____frozen;
	uint8_t ____height;
	int32_t ____count;
	Node_tB3F8F4B19357CF6D8E7E1362A5CDD0241B3A80F3* ____left;
	Node_tB3F8F4B19357CF6D8E7E1362A5CDD0241B3A80F3* ____right;
};
struct Node_t011AD9742C3342078C929B341E16AF3F1ACFD1B7  : public RuntimeObject
{
	Il2CppSharedGenericObject* ____key;
	Node_t011AD9742C3342078C929B341E16AF3F1ACFD1B7* ____prev;
	Node_t011AD9742C3342078C929B341E16AF3F1ACFD1B7* ____next;
};
struct Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB : public RuntimeObject {};
struct Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC : public RuntimeObject {};
struct Node_tC5111E77A2002D0AD173457666915D4D0BD59865 : public RuntimeObject {};
struct Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA : public RuntimeObject {};
struct SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232  : public RuntimeObject
{
	KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41* ____keys;
	ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E* ____values;
	TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* ____set;
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
struct Enumerator_tB2B0F5C9BFD53A87D2DC19D81C6DF723A8E83B21 
{
	int32_t ____poolUserId;
	SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ____root;
	SecurePooledObject_1_t3616D3DE4EB2D93F236C8D697F24D2692305C9EC* ____stack;
	SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ____current;
};
struct Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B 
{
	Builder_tDAEBE5CD087509AC31F7881193393BAA73D29A68* ____builder;
	int32_t ____poolUserId;
	int32_t ____startIndex;
	int32_t ____count;
	int32_t ____remainingCount;
	bool ____reversed;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ____root;
	SecurePooledObject_1_t467271AD50551204A6B66BB51B13C4114638E331* ____stack;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ____current;
	int32_t ____enumeratingBuilderVersion;
};
struct Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF 
{
	Builder_t431E90D62A61669553FF359FE81BAD1D3EFE64E5* ____builder;
	int32_t ____poolUserId;
	bool ____reverse;
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ____root;
	SecurePooledObject_1_t8A9062FF466E79579F83D1B49497EE0188CDE206* ____stack;
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ____current;
	int32_t ____enumeratingBuilderVersion;
};
struct Enumerator_t8863E236B80E2F682B73BA402804D799D1897355 
{
	Builder_tFA7DD71241FF9863641DD1A4349C2AB38787646A* ____builder;
	int32_t ____poolUserId;
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ____root;
	SecurePooledObject_1_t36A8B18D86DB780848CE3D1E5CCB53D6C5B5C9E8* ____stack;
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ____current;
	int32_t ____enumeratingBuilderVersion;
};
typedef Il2CppFullySharedGenericStruct HashBucket_t31FCCF0BDD6808CC6078033BE249017344ACE4ED;
struct ImmutableArray_1_t9B5AFEEBF2941919CC55517FBB8DD31D7251B8B2 
{
	CustomAttributeTypedArgument_1U5BU5D_t6D586DD688598EBC6939E9FA86CFC166E60EAB14* ___array;
};
struct ImmutableArray_1_t06DED921DB87B08646837E603CA90DA89672D841 
{
	ImmutableArray_1U5BU5D_tCEE41B06D86785846C5946846FE4C147C6BB8663* ___array;
};
struct ImmutableArray_1_tFE78212FB2DE4F1930F35C4621A651F1EBE490A7 
{
	ImmutableArray_1U5BU5D_t594282F1DE07A5DA17EC36A9F3D8E5234760FEEE* ___array;
};
struct ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array;
};
struct ImmutableArray_1_tD6647C0429EA69030C86F94F5303058553989491 
{
	DebugDirectoryEntryU5BU5D_t9C82229475CC97D13B6EDF537A699295881668BE* ___array;
};
struct ImmutableArray_1_tB94679E47E18B33923765782D360DD9B063999EF 
{
	ExceptionRegionU5BU5D_t8CC56E34C2D28EE2F9CF4902F41737C6C1229F18* ___array;
};
struct ImmutableArray_1_tCC57CE6D913ED747A244130227DD94B4010C5CE0 
{
	ExportedTypeHandleU5BU5D_t74265AC03C48F618174C501862DF769B682825E7* ___array;
};
struct ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array;
};
struct ImmutableArray_1_t920FF101FEB02188160DA63252809A17F1CD13B0 
{
	MethodDefinitionHandleU5BU5D_t49B83D2CDA1060A8E87C18B35A839AFB52A8FFE8* ___array;
};
struct ImmutableArray_1_t8C67B9FCE3102D1453C5C1E173F16B8A4DF1C2DC 
{
	NamespaceDefinitionHandleU5BU5D_tD1270F312DA5C8852EABE4DF355D001376E63BB9* ___array;
};
struct ImmutableArray_1_t691C24AC4F0D2F717B56FA4E4DCFD1E0E9A726DF 
{
	SectionHeaderU5BU5D_t11F8F35E6EFBCF4817877D778A965E5095F0EAA1* ___array;
};
struct ImmutableArray_1_t62BE8524A6AFEE803362EF0594E72E21E1D8E905 
{
	TypeDefinitionHandleU5BU5D_tF67B10F360AAB6684F510AC124CC84EEF6B041D6* ___array;
};
struct ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array;
};
struct ImmutableArray_1_t8E43EB1F8BCFAB117170CA2801F61323E24D52B3 
{
	RowCountsU5BU5D_t5643308C6F852B3BEE7DF8B31FF7FC06780B13CD* ___array;
};
struct ImmutableArray_1_tEBB2029BD4A60E6B5C204BABC6BFF922D2699F22 
{
	SectionU5BU5D_tD9582A1E07CF20F887EAC5D8887C8D0EEA4898E2* ___array;
};
struct ImmutableArray_1_t000BD4A624BB7A1A3226487EFE6BF91AFFEA38E1 
{
	SerializedSectionU5BU5D_t7E849ADE83A7712DC9EF608A4A299A1A34B995DB* ___array;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct NodeEnumerable_t5DC8C79DD1B6E4FDA1EA7035BD67C73AAF515571 
{
	SortedInt32KeyNode_1_t8D8DB6F733B5380172E9A1F0219E9058184E38D1* ____root;
};
struct NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F 
{
	SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ____root;
};
struct NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 
{
	int32_t ____nodeID;
	int32_t ____mainTreeNodeID;
};
struct NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 
{
	int32_t ____nodeID;
	int32_t ____mainTreeNodeID;
};
struct NullableComparer_1_tD493801D848B14705B1974D7712873ED560EF460  : public Comparer_1_tBCE1CDEBF3E9D90F967A17355B6C468A404AA4C9
{
};
struct NullableComparer_1_t1BC4D5CE667344ACACF9776303C9B3363E46D079  : public Comparer_1_t178DF674F2B43D7321E70F9D20DC0FB879D78BCC
{
};
struct NullableEqualityComparer_1_tC86AF1C24D4430928067E90F47AF9FAF0C3D0118  : public EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5
{
};
struct NullableEqualityComparer_1_t0C0CFE9457456335CB5101AC74592B8D8350EDA9  : public EqualityComparer_1_t7CF2CDB87E1B6F6C7D463172655828C6F2A7974B
{
};
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	bool ___hasValue;
	bool ___value;
};
struct Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 
{
	bool ___hasValue;
	uint8_t ___value;
};
struct Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 
{
	bool ___hasValue;
	Il2CppChar ___value;
};
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	bool ___hasValue;
	double ___value;
};
typedef Il2CppFullySharedGenericStruct Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339;
struct ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 
{
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA 
{
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source;
	int32_t ____index;
};
struct StructMultiKey_2_t6E68BC5B4E82B577ED926DDD328474297A4F65C3 
{
	String_t* ___Value1;
	String_t* ___Value2;
};
struct StructMultiKey_2_t9FB148F2A8EBC3FFB18FB69FDB4EBB5E77237C2D 
{
	Type_t* ___Value1;
	NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50* ___Value2;
};
struct StructMultiKey_2_t976DA9C5BBF0BD9567BAFE22C1E741F8E238D5F5 
{
	Type_t* ___Value1;
	Type_t* ___Value2;
};
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE 
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE_marshaled_pinvoke
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE_marshaled_com
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F 
{
	int32_t ____sign;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____bits;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke
{
	int32_t ____sign;
	Il2CppSafeArray* ____bits;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com
{
	int32_t ____sign;
	Il2CppSafeArray* ____bits;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct DataKey_tC6DF14FCD651ACE82D9C872CFC449847B000F73A 
{
	DataColumnU5BU5D_t4600ECA5C95E7699298FCD6D677AEAD7D9F5F0CA* ____columns;
};
struct DataKey_tC6DF14FCD651ACE82D9C872CFC449847B000F73A_marshaled_pinvoke
{
	DataColumnU5BU5D_t4600ECA5C95E7699298FCD6D677AEAD7D9F5F0CA* ____columns;
};
struct DataKey_tC6DF14FCD651ACE82D9C872CFC449847B000F73A_marshaled_com
{
	DataColumnU5BU5D_t4600ECA5C95E7699298FCD6D677AEAD7D9F5F0CA* ____columns;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E 
{
	int64_t ___Value;
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
struct EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 
{
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* ___m_Dispatcher;
};
struct EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshaled_pinvoke
{
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* ___m_Dispatcher;
};
struct EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshaled_com
{
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* ___m_Dispatcher;
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
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct Node_t27454880F6EA7B4F9AFE6A78DE18B7EE9187AEEC  : public RuntimeObject
{
	StructMultiKey_2_t6E68BC5B4E82B577ED926DDD328474297A4F65C3 ____key;
	Type_t* ____value;
	Node_t27454880F6EA7B4F9AFE6A78DE18B7EE9187AEEC* ____next;
	int32_t ____hashcode;
};
struct Node_t026D05D192ABB0E7322A354157B1D2DC64E5E63E  : public RuntimeObject
{
	StructMultiKey_2_t9FB148F2A8EBC3FFB18FB69FDB4EBB5E77237C2D ____key;
	EnumInfo_t786CA2C24EE84B1EC2F48E8448A3A0AC6F842571* ____value;
	Node_t026D05D192ABB0E7322A354157B1D2DC64E5E63E* ____next;
	int32_t ____hashcode;
};
struct Node_tD2AD8B22DE509ED94E4F81F3131D77E256C312CC  : public RuntimeObject
{
	StructMultiKey_2_t976DA9C5BBF0BD9567BAFE22C1E741F8E238D5F5 ____key;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ____value;
	Node_tD2AD8B22DE509ED94E4F81F3131D77E256C312CC* ____next;
	int32_t ____hashcode;
};
struct NodeColor_t60CC6B48EF16CC76598762EF71BFEABD73151911 
{
	int32_t ___value__;
};
struct NodeColor_t5D6A7FB1CA13C3C221E75A658354858C04D545BC 
{
	int32_t ___value__;
};
struct Nullable_1_t95EEB9DC21C1B9B255E46ADF4BA8E05988DFC502 
{
	bool ___hasValue;
	ImmutableArray_1_t9B5AFEEBF2941919CC55517FBB8DD31D7251B8B2 ___value;
};
struct Nullable_1_t7F49D44DA7B94954445DB40DCB3207825126C1E4 
{
	bool ___hasValue;
	ImmutableArray_1_t06DED921DB87B08646837E603CA90DA89672D841 ___value;
};
struct Nullable_1_t949F5E1EF371D77A333FAD16C988F404690640B4 
{
	bool ___hasValue;
	ImmutableArray_1_tFE78212FB2DE4F1930F35C4621A651F1EBE490A7 ___value;
};
struct Nullable_1_tFAFCF7FAEB1A9E9A1686F8E71599E920CD57314B 
{
	bool ___hasValue;
	ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 ___value;
};
struct Nullable_1_tF410FE22FA71F161DF67E0D41999B7A037B85180 
{
	bool ___hasValue;
	ImmutableArray_1_tD6647C0429EA69030C86F94F5303058553989491 ___value;
};
struct Nullable_1_tF71900A673252D56E9936E3341BB237AB7374279 
{
	bool ___hasValue;
	ImmutableArray_1_tB94679E47E18B33923765782D360DD9B063999EF ___value;
};
struct Nullable_1_t250A4AEF858807213856F484B4E84E83AE78DB83 
{
	bool ___hasValue;
	ImmutableArray_1_tCC57CE6D913ED747A244130227DD94B4010C5CE0 ___value;
};
struct Nullable_1_t5E77755B7F2E3776F4B0841EA0745349114A5EE6 
{
	bool ___hasValue;
	ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 ___value;
};
struct Nullable_1_t5FB71C74D6702A8F7D5820976E4327495178580B 
{
	bool ___hasValue;
	ImmutableArray_1_t920FF101FEB02188160DA63252809A17F1CD13B0 ___value;
};
struct Nullable_1_t46DC5D1803B9B44CD90564545210569226021F00 
{
	bool ___hasValue;
	ImmutableArray_1_t8C67B9FCE3102D1453C5C1E173F16B8A4DF1C2DC ___value;
};
struct Nullable_1_t5A45409749F51D373F7B51F5CA79909A72AC1589 
{
	bool ___hasValue;
	ImmutableArray_1_t691C24AC4F0D2F717B56FA4E4DCFD1E0E9A726DF ___value;
};
struct Nullable_1_tCD46D60D1532D3E13AA64B0DEB6D90741EF2B13B 
{
	bool ___hasValue;
	ImmutableArray_1_t62BE8524A6AFEE803362EF0594E72E21E1D8E905 ___value;
};
struct Nullable_1_tD65862385B91932AECB1501111584DE38F4989F4 
{
	bool ___hasValue;
	ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B ___value;
};
struct Nullable_1_t16599143DB517332FCAF5F6358C2D4D14B70E659 
{
	bool ___hasValue;
	ImmutableArray_1_t8E43EB1F8BCFAB117170CA2801F61323E24D52B3 ___value;
};
struct Nullable_1_tFB8385D07B04118A9428B1773831B54C08E49BCB 
{
	bool ___hasValue;
	ImmutableArray_1_tEBB2029BD4A60E6B5C204BABC6BFF922D2699F22 ___value;
};
struct Nullable_1_t503062B0B2C124E6EFE13B86F41CE819EF1F6577 
{
	bool ___hasValue;
	ImmutableArray_1_t000BD4A624BB7A1A3226487EFE6BF91AFFEA38E1 ___value;
};
struct Nullable_1_tE64F24DDA47B019DB4936106042D208D42EA4BCB 
{
	bool ___hasValue;
	ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 ___value;
};
struct Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D 
{
	bool ___hasValue;
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA ___value;
};
struct Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 
{
	bool ___hasValue;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE ___value;
};
struct Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 
{
	bool ___hasValue;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value;
};
struct Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 
{
	bool ___hasValue;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value;
};
struct Nullable_1_t80BBE66A5256F0D1D2C34DFA7E6A727738559F31 
{
	bool ___hasValue;
	DataKey_tC6DF14FCD651ACE82D9C872CFC449847B000F73A ___value;
};
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	bool ___hasValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value;
};
struct Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB 
{
	bool ___hasValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value;
};
struct Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 
{
	bool ___hasValue;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___value;
};
struct Nullable_1_t289B423C698908385693F5BC7064867203FFC234 
{
	bool ___hasValue;
	EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 ___value;
};
struct Position_t185E49582ED029B7A57E7414967CA7C697B290CF 
{
	int32_t ___value__;
};
struct SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169 : public RuntimeObject {};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AudioSpeakerMode_tD681BDF379A4FB499C5562BF3F97AB93B4E540ED 
{
	int32_t ___value__;
};
struct BindingLogLevel_tCF4F964ED08A493411063074D99A7A81CA9F41F8 
{
	int32_t ___value__;
};
struct BindingStatus_t72E69C73FEA899A1FE65BCA04E6B79E30157EB43 
{
	int32_t ___value__;
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
struct ConstructorHandling_tBAFC8D79770520A5FE179D99B00E863ECFD41FBC 
{
	int32_t ___value__;
};
struct DateFormatHandling_t572F7AE07F2480341B7A6A66E2B76630B513F797 
{
	int32_t ___value__;
};
struct DateParseHandling_t9C3D12600E1C83D014F016D8B1F88411FF41263C 
{
	int32_t ___value__;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime;
	int16_t ____offsetMinutes;
};
struct DateTimeZoneHandling_tC6052391FA7B95E92AFFABA381532EEFA193FB9F 
{
	int32_t ___value__;
};
struct DefaultValueHandling_t996735A0C7CC889B941C53B522E62A988B47402A 
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
struct DesignerSerializationVisibility_tD309245A63A72DB772FEEA97A164D001F529196F 
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
struct FloatFormatHandling_t6D69CDEC3FBD6B43B168CFE1033506CE3F50EE8C 
{
	int32_t ___value__;
};
struct FloatParseHandling_tB923F780A6087CF142D4D00486E840D870ECDA5D 
{
	int32_t ___value__;
};
struct NodeColor_t3C462CF5E46B843CC52B1FF46B6488BC18768F4F 
{
	uint8_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct TreeRotation_t8E73F08A08D4DC4DA6DA17D92767DE6997B01A0A 
{
	uint8_t ___value__;
};
struct TagType_t247BEA6080E7E453FA6F0BC2E8C05D682D94E35A 
{
	int32_t ___value__;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t34B57C41625ED4EB7E5AC71C44DD23E9A299034A;
struct NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 
{
	int32_t ____selfId;
	int32_t ____leftId;
	int32_t ____rightId;
	int32_t ____parentId;
	int32_t ____nextId;
	int32_t ____subTreeSize;
	int32_t ____keyOfNode;
	int32_t ____nodeColor;
};
struct Node_tE0BABBCFF00BFC195C5C53276A3B8E7FE0392704  : public RuntimeObject
{
	int32_t ___U3CItemU3Ek__BackingField;
	Node_tE0BABBCFF00BFC195C5C53276A3B8E7FE0392704* ___U3CLeftU3Ek__BackingField;
	Node_tE0BABBCFF00BFC195C5C53276A3B8E7FE0392704* ___U3CRightU3Ek__BackingField;
	uint8_t ___U3CColorU3Ek__BackingField;
};
typedef Il2CppFullySharedGenericStruct Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034;
struct Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB : public RuntimeObject {};
struct Node_t1FA249336EE9BCD448BED8888AB94B824701C928  : public RuntimeObject
{
	int32_t ____key;
	uint8_t ____value;
	Node_t1FA249336EE9BCD448BED8888AB94B824701C928* ____next;
	int32_t ____hashcode;
};
struct Nullable_1_tEA1A6741A1BA31D05AA50DEBE2C5115F97FD5C53 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Nullable_1_t8154443ECC6BCF418455D6C2363D110F097DBE96 
{
	bool ___hasValue;
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___value;
};
struct Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B 
{
	bool ___hasValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value;
};
struct Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B 
{
	bool ___hasValue;
	int32_t ___value;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D 
{
	int32_t ___speakerMode;
	int32_t ___dspBufferSize;
	int32_t ___sampleRate;
	int32_t ___numRealVoices;
	int32_t ___numVirtualVoices;
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
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49  : public MulticastDelegate_t
{
};
typedef Il2CppFullySharedGenericStruct Enumerator_t4EFD4FF0495907DDDEB9C511462BDB1087642BC5;
struct Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7  : public MulticastDelegate_t
{
};
struct Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C 
{
	bool ___hasValue;
	NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB ___value;
};
struct Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B 
{
	bool ___hasValue;
	NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 ___value;
};
struct Nullable_1_tD096FA16AA0E6BFD8246E1997D872046271528B9 
{
	bool ___hasValue;
	BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___value;
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct AudioFormat_tC9651BFD36B41D1FC782C702B6C980D9768F699D 
{
	AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D ___m_Config;
};
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Nullable_1_t8743998EB2E7DB936C93772849EF306FBD5C5EE5 
{
	bool ___hasValue;
	AudioFormat_tC9651BFD36B41D1FC782C702B6C980D9768F699D ___value;
};
struct U3CU3Ec_t6B7267D784767290B17500D08316EBC6D3C29BF0_StaticFields
{
	U3CU3Ec_t6B7267D784767290B17500D08316EBC6D3C29BF0* ___U3CU3E9;
	Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7* ___U3CU3E9__30_0;
	Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7* ___U3CU3E9__32_0;
};
struct Comparer_1_t178DF674F2B43D7321E70F9D20DC0FB879D78BCC_StaticFields
{
	Comparer_1_t178DF674F2B43D7321E70F9D20DC0FB879D78BCC* ___defaultComparer;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct EqualityComparer_1_t7CF2CDB87E1B6F6C7D463172655828C6F2A7974B_StaticFields
{
	EqualityComparer_1_t7CF2CDB87E1B6F6C7D463172655828C6F2A7974B* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4_StaticFields
{
	ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4* ___Empty;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct Node_tB3F8F4B19357CF6D8E7E1362A5CDD0241B3A80F3_StaticFields
{
	Node_tB3F8F4B19357CF6D8E7E1362A5CDD0241B3A80F3* ___EmptyNode;
};
struct Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB_StaticFields
{
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___EmptyNode;
};
struct Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC_StaticFields
{
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___EmptyNode;
};
struct Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA_StaticFields
{
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___EmptyNode;
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
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169_StaticFields
{
	SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___EmptyNode;
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
struct Nullable_1U5BU5D_t403487FE4BCECFEE095568C37247ECCDA477FB50  : public RuntimeArray
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared (Il2CppSharedGenericObject* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Node_ParentHeight_m4CFC4675B0EA632CC45D346DF3FC41D3723A12C3_gshared_inline (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_left, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_ParentCount_m85162769415961CC53BC415A0A4995FAC19523FE_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_left, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_gshared_inline (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_get_Item_mB55EBB257AA4F862BC68ED646F45B0B129E9E642_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Node_ItemRefUnchecked_mDEEE4E845208588FC7CBFE03CBA872C91769F4C7_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m50B65316571A3AA20961A1C27D89DCB0F2CC66A9_gshared (Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B* __this, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_root, Builder_tDAEBE5CD087509AC31F7881193393BAA73D29A68* ___1_builder, int32_t ___2_startIndex, int32_t ___3_count, bool ___4_reversed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B Node_GetEnumerator_mB39C975A4691C8F66AFCBA3754EA1BEB55681AA9_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_NodeTreeFromList_mEC0031D8EBFDC8DEBC2085F9F91330143748A824_gshared (RuntimeObject* ___0_items, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m7BF40582800CD5EC397DDC35A65D9E48F304F77C_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Il2CppFullySharedGenericAny ___0_key, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___1_left, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___2_right, bool ___3_frozen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_get_IsEmpty_mF9C2BB2D1BC343ECA2DD473397A9E9314A1F65EA_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ReadOnlySpan_1_Slice_m5FF60C7FC975ABE8A18ECC2B3C066E77F55AECBD_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_NodeTreeFromList_mC0A824AC1692B2378AD9501EC0775FBCCD1B1371_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_items, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ReadOnlySpan_1_Slice_mB39169D4E17B6E306E9C695E4B46FF465EADAE44_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_start, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_CreateLeaf_m5972C45C077E1CED921B71D76E44D9317E8CA7E0_gshared (Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Add_m3D60C105B0E16626FB5FAAF116ECC0AE8283242F_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_MutateRight_m448EE8322C05DC37D1965A8D1FF67425F95C6E50_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_IsBalanced_mCB9C6B94AE7B6C401BB42669B961A71F39B945B2_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_BalanceRight_m9F5AC4B6775A3B370EADC2EF78EF342F7C9B166A_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Insert_m3513968805E68F6A083D031943F7AC65B9410D24_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_MutateLeft_m3E116E19DD8747E0FFF6C5DF72BE083BF6C87FEE_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_left, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_BalanceLeft_m45BE31AC829F10C77D5AE3C67548D48642E2B350_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_CreateRange_m1F287B4EAED6F5FCD57CE2E9238BEF8E7FD77250_gshared (RuntimeObject* ___0_keys, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_AddRange_mA90A4BC1A9B4AE5D7F9F3CE583703569131B64E3_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, RuntimeObject* ___0_keys, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_BalanceMany_mB9650DF7469CC65FD9FA0C1F69CCAC7B008F277D_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_AddRange_mC42FF25F0CE9371DCEEF31CF19159FBE944D06B4_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_keys, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_InsertRange_m0780746D22FD60C16FDA6ABF631C227378F0D431_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, RuntimeObject* ___1_keys, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_RemoveAt_m8FA29386DA51D548E7D558A82085F134A14760E9_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_MutateBoth_m05DDA7ACEECBC06FED0339BBB9628C01264CCEBE_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_left, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Balance_mAEE6C4E9345D9FE985365B338F871A0C5AE3069A_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mBCBADA63919B6721C665E99AE413029CEF04A795_gshared (Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m857C448B191446BCE829AE310CD2D8F6067EAFDD_gshared (Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_gshared_inline (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA0A83B324C5520BA6117E83C466318A468F5DBD2_gshared (Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_MutateKey_m7D9FDC6E916E6EC9BE1E9F43013AF836CB48368F_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_ReplaceAt_m267E534B8086316E9F1CA9B5B5CE29DC6F55865B_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Reverse_mC72BA9DEA10469DB42DD36C122BDD9BD1D5D9853_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Node_ItemRef_m11091F398CE2B8C32BF1278C29033D3A0ABAA5E7_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Sort_m7BDDF067863D1202C46313B69F1D809796E3812A_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_CopyTo_m08961681464FA59D148C7D9403532F8997E34E99_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_m699F81165178B5E96D2D406ABB12F9382F8255E4_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* ___1_comparison, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableExtensions_AsOrderedCollection_TisIl2CppFullySharedGenericAny_mAD04AE315D604F57729B36E71A338249CF556C96_gshared (RuntimeObject* ___0_sequence, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Sort_mDC3106CBE2C5E65E9B370A76B70F9A4AB92FB8BB_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_BinarySearch_m269D432407A136D2BFE6AA8A3127B6C4C0A130CE_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, int32_t ___1_count, Il2CppFullySharedGenericAny ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_IndexOf_m0B728BF7E2057365EE3FA5A57F705755AF3BD34D_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Il2CppFullySharedGenericAny ___0_item, int32_t ___1_index, int32_t ___2_count, RuntimeObject* ___3_equalityComparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_Contains_m3C2DA577739605C40593D2B9FB0FBD5C451CDFDC_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_node, Il2CppFullySharedGenericAny ___1_value, RuntimeObject* ___2_equalityComparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4* ImmutableList_CreateRange_TisIl2CppFullySharedGenericAny_m5C3780410E687AD7D5EBCD5EC166632172F0DC60_gshared (RuntimeObject* ___0_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_FindIndex_m46C36BB9A22B238E6EDC949E9448BE5F611B8B6A_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___2_match, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_FindLastIndex_mE3D03C3831EB08F20EE0839E8D648B2FF2D6125E_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___2_match, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Freeze_mA7CB81F26995839C24A370F83BF48298DDBE573D_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_get_BalanceFactor_m0EC51CAA3E0789D285D1D46E4C2965229D0A8C88_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_IsLeftHeavy_m67D5D7B60BE70023CF75E689A259EDBDC1E6999D_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_RotateRight_mAB9442A0854300DE7F303486760DCA9AC90E27D0_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_DoubleRight_mCECBFDC431DF2BEA4E81E4045C0A753DEC6055D8_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_RotateLeft_m360E8C2D9D508AC8C853CC98AEB88A18EC2EEF19_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_DoubleLeft_m0D495622395401AC5B62334B6207BEAD0C5DB800_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_IsRightHeavy_m2B2DBCA95556A4ADB2D55E49037960F67E6051B4_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableList_1_TryCastToImmutableList_mEA59DAAE569FFF6E227545CA55F7EE23D01A9C11_gshared (RuntimeObject* ___0_sequence, ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4** ___1_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mF66722CB299285C58F438D3143A2C07D785C84D8_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Node_get_Count_mB1E99B9EDC8EE8589D98FF3626E87F386F9420E3_gshared_inline (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_get_Item_m5D248CCA6D68A3697DCEB40CE3C7C923078A7EE8_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Node_ItemRefUnchecked_m7FE058A4C03DE46C3E12D8C91CAEE17A5DB445AC_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2F2E09A44D4327025E15A7C7657EFC352F280722_gshared (Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF* __this, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_root, Builder_t431E90D62A61669553FF359FE81BAD1D3EFE64E5* ___1_builder, bool ___2_reverse, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF Node_GetEnumerator_m8115E25480E14F987FB6899ACF9E660187721000_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m922B7656398382C9DBE6D964C5D40F4E80319048_gshared (Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m0511BC1B180F031FBD00338F725E8597B5DC0FE7_gshared (Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m890821263E40A5DCC1BF1D9169C23C4D28C72BCA_gshared (Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m21B1B2AD09D3360E943B62D5A8BEB3C57F0FF8F3_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny ___0_key, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___1_left, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___2_right, bool ___3_frozen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_Add_m6DE337658AFF55138E8803DD715D594A89F195C3_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_comparer, bool* ___2_mutated, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_Mutate_m3D2DAC123906E4E1DA1A65DE5C9A81FFC293E71F_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_left, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_MakeBalanced_m6145C7609EFAD7400EB7EC07E55890632422A380_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_Remove_mAE87F55168F9CF8FBF115D841DBAB62D59658595_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_comparer, bool* ___2_mutated, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_Search_m0DD8BF2D0F1518DB3EBA463DE523EA1D9B3C35A0_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Freeze_m8C498126932BCE728C9D9B2133A7D11525E1A666_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_IndexOf_mD06FFB34C56C57BEA4D00C90B03A9237BDF61A10_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_RotateRight_mF6183B5AC82FD7D9F9B28DCB252D70E4333739AD_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_RotateLeft_mED96D73CB1B4DDD59CB21161CB7D3C48678A696A_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_Balance_m3F41DF138CF3E47B24C7AA584A809A9EA44997DE_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_IsRightHeavy_m1B826A7C1A348D341A7F75DDA2E71737F6D91E4B_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_DoubleLeft_mD7B8D8E27F61A0E522D80D0844C25132A773DCB7_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_IsLeftHeavy_m5F4C4D3B4684984C1364F9D7501E6C6EE8EC3931_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_DoubleRight_mE2347BBDCF1E532D696FEDFB64B0FFF1ADE60ADF_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_NodeTreeFromList_m9F091D0683DA583746D2E24F8A8D9668E3BA62CE_gshared (RuntimeObject* ___0_items, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mDC5E0E80609B0FEFFE87784DBDDB9485F2F27B2B_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_Item_mAE94673D67914B814978A88A7AD48410FAFB704C_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_Color_m7059ED9294523EF76ADB6700781A80CEE58623EC_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_IsRed_m38BDAA19CD760AF709513A305B78276A478F53B4_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_IsBlack_mBFA1E96F3DB151343552A8E7E675CF01EAC663B7_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Node_get_Color_m9A8282043129C40F83EE3E6A8F4A49B8DF4480C7_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_IsNullOrBlack_mF0637159A093D68B236533C4424E72C4A06CF141_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_node, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_IsNonNullRed_m7DEA5463EEB0E8E9E77DD93296DAEC24DEC70648_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_node, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedSet_1_Log2_m6EDFF3696AB144C4BCA5D85DE8FB595407FBD64F_gshared (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mFDFA9E1123DD1C9E5970223E605B8C973B39721A_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_ShallowClone_mA41DD00555236A7C787200DEE41BFE1BA664A66D_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mCAD00A69587F884F88C36DE7423C3C329166144E_gshared_inline (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_get_Item_m68FF84117314DB42151562EC40D7DD433F22A81A_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mBEA2724C6D6A42C977E0C127FD93C9B5C6C3ED46_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Il2CppFullySharedGenericAny ___0_item, uint8_t ___1_color, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_ColorRed_mC0BEFC0741F5D098D452E92F710CA52866EE888E_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateRight_m661C39CAE7E7B5ACE3337716C071282A25410754_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateLeft_m47E39EB54C7F9E8C64C92920DA54FCA130CBED60_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateRightLeft_mCDB26CEDA5347E3701560D24175DE5132957EB0A_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateLeftRight_m764791D159A6B0773A3ECE5274370B76618C4723_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Requires_NotNullAllowStructs_TisIl2CppFullySharedGenericAny_mFA636B145D75366207FFFFDC501FD701260F4485_gshared (Il2CppFullySharedGenericAny ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5BBCA2BC02448D0B77D2201BB08B13BAB3BABA53_gshared (RuntimeObject* ___0_source, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___1_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF905FF082FDC2C026BBE7AF1A97BEE6A5797C5C4_gshared (Enumerator_t8863E236B80E2F682B73BA402804D799D1897355* __this, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_root, Builder_tFA7DD71241FF9863641DD1A4349C2AB38787646A* ___1_builder, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8863E236B80E2F682B73BA402804D799D1897355 Node_GetEnumerator_m6F3B0583D7C7B24DA0B71F03AB42C9D0B13B5ECE_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m09CF79F695ED10889599A9A14CD5BA39C3B8A703_gshared (Enumerator_t8863E236B80E2F682B73BA402804D799D1897355* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m333AA8CC640EC04D4495E6AEDA61180178B18C7F_gshared (Enumerator_t8863E236B80E2F682B73BA402804D799D1897355* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m59A1977AEB30FCB7AB750ACB18097DB3D37FF9C7_gshared (Enumerator_t8863E236B80E2F682B73BA402804D799D1897355* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_NodeTreeFromList_m62B6B941853B68240A874A941AD137AA9E383E67_gshared (RuntimeObject* ___0_items, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_SetOrAdd_m8B86F90CE4CCB870E9B3A640E56C0FED9994BDCD_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, RuntimeObject* ___2_keyComparer, RuntimeObject* ___3_valueComparer, bool ___4_overwriteExistingValue, bool* ___5_replacedExistingValue, bool* ___6_mutated, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_RemoveRecursive_mCAB60623F8107ED6FE89993718E83F0E54F5FEAA_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_keyComparer, bool* ___2_mutated, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_Search_mC575BB604ECA70ECABCC82933DB968DC582D88EE_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_keyComparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Freeze_m6000D3CB2C2486401AE5BAED216ABE5BD1EC0CF4_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_Mutate_mDD3C860233B7D3DA02913EB2861F6016D1EE4343_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_left, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_RotateRight_m3C892921A470A2C360A2D8D95B3CEC0DC6CF71E8_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_RotateLeft_m186FF931DDF82573341193C671623860D4115A85_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_Balance_m2C358001DA7FF0156FDB742C24BB6180057379BF_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_IsRightHeavy_m5AF9C917436C8E56E091E9D9148230EAE2A8C9B3_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_DoubleLeft_m60C97BE3A5A21892D5BB1FDB4F7F14DA67936D2C_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_IsLeftHeavy_mE826E4ABA1E8421ECA14E9B7D5E3A9A9D6AFD9C2_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_DoubleRight_mB57BDC0260F3130F76F43A80471A0A50BE8F582E_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mD23E27629566B8D4468764E2D77949AF03A2AB6C_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___2_left, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___3_right, bool ___4_frozen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_MakeBalanced_m5460D7A1374241BC30EFCFAEB87516EA0B3AF73F_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_Remove_m265E5CC12EE8ACF394EEA8E1F9AF920DBF2E84A0_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_keyComparer, bool* ___2_mutated, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m568035BE054FA345461F656D5D8C70C52F86AF13_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeEnumerable__ctor_m631FE25CF22C294244120B74820E5E13C131F5C0_gshared (NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F* __this, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___0_root, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m50CB4D6A13D82D8FD1C6131602C9BE5E276D04D7_gshared (Enumerator_t4EFD4FF0495907DDDEB9C511462BDB1087642BC5* __this, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___0_root, Builder_t78DA893EF9813330E1E2C308502E62A76678D876* ___1_builder, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeEnumerable_GetEnumerator_m7BA27433C814767767FEA13026028BC89B99EB2B_gshared (NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F* __this, Enumerator_t4EFD4FF0495907DDDEB9C511462BDB1087642BC5* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeEnumerable_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2DEE89BA9B30F3A31A231854B7A89DD365143A00_gshared (NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeEnumerable_System_Collections_IEnumerable_GetEnumerator_m8A17B09634755097AD065516BAF554501EBC1CB6_gshared (NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePath__ctor_mA9A74612E0785F30CCC660C7936418FD57A9EB55_gshared (NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813* __this, int32_t ___0_nodeID, int32_t ___1_mainTreeNodeID, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer_1__ctor_m15D27727BD23D4B1743984704A4FD84E84A9BE40_gshared (Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mFCFFB9230A4881E211659A1A772D554D857B988F_gshared (EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void Requires_NotNull_TisNode_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB_m4E22B6EF4EC08078BDC2B81C9C5826D2A0E3F1FB (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline uint8_t Node_ParentHeight_m4CFC4675B0EA632CC45D346DF3FC41D3723A12C3_inline (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_left, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___1_right, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_ParentHeight_m4CFC4675B0EA632CC45D346DF3FC41D3723A12C3_gshared_inline)(___0_left, ___1_right, method);
}
inline int32_t Node_ParentCount_m85162769415961CC53BC415A0A4995FAC19523FE (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_left, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_ParentCount_m85162769415961CC53BC415A0A4995FAC19523FE_gshared)(___0_left, ___1_right, method);
}
inline int32_t Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75 (bool ___0_condition, String_t* ___1_parameterName, String_t* ___2_message, const RuntimeMethod* method) ;
inline void Node_get_Item_mB55EBB257AA4F862BC68ED646F45B0B129E9E642 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Node_get_Item_mB55EBB257AA4F862BC68ED646F45B0B129E9E642_gshared)((Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*)__this, ___0_index, il2cppRetVal, method);
}
inline Il2CppFullySharedGenericAny* Node_ItemRefUnchecked_mDEEE4E845208588FC7CBFE03CBA872C91769F4C7 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, int32_t, const RuntimeMethod*))Node_ItemRefUnchecked_mDEEE4E845208588FC7CBFE03CBA872C91769F4C7_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m50B65316571A3AA20961A1C27D89DCB0F2CC66A9 (Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B* __this, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_root, Builder_tDAEBE5CD087509AC31F7881193393BAA73D29A68* ___1_builder, int32_t ___2_startIndex, int32_t ___3_count, bool ___4_reversed, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B*, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, Builder_tDAEBE5CD087509AC31F7881193393BAA73D29A68*, int32_t, int32_t, bool, const RuntimeMethod*))Enumerator__ctor_m50B65316571A3AA20961A1C27D89DCB0F2CC66A9_gshared)(__this, ___0_root, ___1_builder, ___2_startIndex, ___3_count, ___4_reversed, method);
}
inline Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B Node_GetEnumerator_mB39C975A4691C8F66AFCBA3754EA1BEB55681AA9 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_GetEnumerator_mB39C975A4691C8F66AFCBA3754EA1BEB55681AA9_gshared)(__this, method);
}
inline void Requires_NotNull_TisIOrderedCollection_1_t537C6DE6F4F927A415EE775B1FB79BB11C63317F_m9B89E483854B9917E10ECDF3F9CCA00FCF00E320 (RuntimeObject* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_NodeTreeFromList_mEC0031D8EBFDC8DEBC2085F9F91330143748A824 (RuntimeObject* ___0_items, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Node_NodeTreeFromList_mEC0031D8EBFDC8DEBC2085F9F91330143748A824_gshared)(___0_items, ___1_start, ___2_length, method);
}
inline void Node__ctor_m7BF40582800CD5EC397DDC35A65D9E48F304F77C (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Il2CppFullySharedGenericAny ___0_key, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___1_left, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___2_right, bool ___3_frozen, const RuntimeMethod* method)
{
	((  void (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, Il2CppFullySharedGenericAny, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, bool, const RuntimeMethod*))Node__ctor_m7BF40582800CD5EC397DDC35A65D9E48F304F77C_gshared)((Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*)__this, ___0_key, ___1_left, ___2_right, ___3_frozen, method);
}
inline bool ReadOnlySpan_1_get_IsEmpty_mF9C2BB2D1BC343ECA2DD473397A9E9314A1F65EA (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))ReadOnlySpan_1_get_IsEmpty_mF9C2BB2D1BC343ECA2DD473397A9E9314A1F65EA_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_gshared_inline)(__this, method);
}
inline ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ReadOnlySpan_1_Slice_m5FF60C7FC975ABE8A18ECC2B3C066E77F55AECBD_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_m5FF60C7FC975ABE8A18ECC2B3C066E77F55AECBD_gshared_inline)(__this, ___0_start, ___1_length, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_NodeTreeFromList_mC0A824AC1692B2378AD9501EC0775FBCCD1B1371 (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_items, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC, const RuntimeMethod*))Node_NodeTreeFromList_mC0A824AC1692B2378AD9501EC0775FBCCD1B1371_gshared)(___0_items, method);
}
inline ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ReadOnlySpan_1_Slice_mB39169D4E17B6E306E9C695E4B46FF465EADAE44_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mB39169D4E17B6E306E9C695E4B46FF465EADAE44_gshared_inline)(__this, ___0_start, method);
}
inline Il2CppFullySharedGenericAny* ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_gshared_inline)(__this, ___0_index, method);
}
inline bool Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0_gshared)(__this, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_CreateLeaf_m5972C45C077E1CED921B71D76E44D9317E8CA7E0 (Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Il2CppFullySharedGenericAny, const RuntimeMethod*))Node_CreateLeaf_m5972C45C077E1CED921B71D76E44D9317E8CA7E0_gshared)(___0_key, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Add_m3D60C105B0E16626FB5FAAF116ECC0AE8283242F (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Node_Add_m3D60C105B0E16626FB5FAAF116ECC0AE8283242F_gshared)((Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*)__this, ___0_key, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_MutateRight_m448EE8322C05DC37D1965A8D1FF67425F95C6E50 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_right, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_MutateRight_m448EE8322C05DC37D1965A8D1FF67425F95C6E50_gshared)(__this, ___0_right, method);
}
inline bool Node_get_IsBalanced_mCB9C6B94AE7B6C401BB42669B961A71F39B945B2 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_get_IsBalanced_mCB9C6B94AE7B6C401BB42669B961A71F39B945B2_gshared)(__this, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_BalanceRight_m9F5AC4B6775A3B370EADC2EF78EF342F7C9B166A (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_BalanceRight_m9F5AC4B6775A3B370EADC2EF78EF342F7C9B166A_gshared)(__this, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Insert_m3513968805E68F6A083D031943F7AC65B9410D24 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_key, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))Node_Insert_m3513968805E68F6A083D031943F7AC65B9410D24_gshared)((Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*)__this, ___0_index, ___1_key, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_MutateLeft_m3E116E19DD8747E0FFF6C5DF72BE083BF6C87FEE (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_left, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_MutateLeft_m3E116E19DD8747E0FFF6C5DF72BE083BF6C87FEE_gshared)(__this, ___0_left, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_BalanceLeft_m45BE31AC829F10C77D5AE3C67548D48642E2B350 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_BalanceLeft_m45BE31AC829F10C77D5AE3C67548D48642E2B350_gshared)(__this, method);
}
inline void Requires_NotNull_TisIEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66_mA20F6C2C4221D70A6054CA93761F61864C8EB569 (RuntimeObject* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_CreateRange_m1F287B4EAED6F5FCD57CE2E9238BEF8E7FD77250 (RuntimeObject* ___0_keys, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (RuntimeObject*, const RuntimeMethod*))Node_CreateRange_m1F287B4EAED6F5FCD57CE2E9238BEF8E7FD77250_gshared)(___0_keys, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_AddRange_mA90A4BC1A9B4AE5D7F9F3CE583703569131B64E3 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, RuntimeObject* ___0_keys, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, RuntimeObject*, const RuntimeMethod*))Node_AddRange_mA90A4BC1A9B4AE5D7F9F3CE583703569131B64E3_gshared)(__this, ___0_keys, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_BalanceMany_mB9650DF7469CC65FD9FA0C1F69CCAC7B008F277D (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_BalanceMany_mB9650DF7469CC65FD9FA0C1F69CCAC7B008F277D_gshared)(__this, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_AddRange_mC42FF25F0CE9371DCEEF31CF19159FBE944D06B4 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_keys, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC, const RuntimeMethod*))Node_AddRange_mC42FF25F0CE9371DCEEF31CF19159FBE944D06B4_gshared)(__this, ___0_keys, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_InsertRange_m0780746D22FD60C16FDA6ABF631C227378F0D431 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, RuntimeObject* ___1_keys, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, int32_t, RuntimeObject*, const RuntimeMethod*))Node_InsertRange_m0780746D22FD60C16FDA6ABF631C227378F0D431_gshared)(__this, ___0_index, ___1_keys, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_RemoveAt_m8FA29386DA51D548E7D558A82085F134A14760E9 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, int32_t, const RuntimeMethod*))Node_RemoveAt_m8FA29386DA51D548E7D558A82085F134A14760E9_gshared)(__this, ___0_index, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_MutateBoth_m05DDA7ACEECBC06FED0339BBB9628C01264CCEBE (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_left, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___1_right, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_MutateBoth_m05DDA7ACEECBC06FED0339BBB9628C01264CCEBE_gshared)(__this, ___0_left, ___1_right, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Balance_mAEE6C4E9345D9FE985365B338F871A0C5AE3069A (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_Balance_mAEE6C4E9345D9FE985365B338F871A0C5AE3069A_gshared)(__this, method);
}
inline void Requires_NotNull_TisPredicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107_m414E138DF73A4034B85229C26D7A47A7D12D327F (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline void Enumerator_Dispose_mBCBADA63919B6721C665E99AE413029CEF04A795 (Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B*, const RuntimeMethod*))Enumerator_Dispose_mBCBADA63919B6721C665E99AE413029CEF04A795_gshared)(__this, method);
}
inline void Enumerator_get_Current_m857C448B191446BCE829AE310CD2D8F6067EAFDD (Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m857C448B191446BCE829AE310CD2D8F6067EAFDD_gshared)((Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B*)__this, il2cppRetVal, method);
}
inline bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_inline (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_gshared_inline)((Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)__this, ___0_obj, method);
}
inline bool Enumerator_MoveNext_mA0A83B324C5520BA6117E83C466318A468F5DBD2 (Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B*, const RuntimeMethod*))Enumerator_MoveNext_mA0A83B324C5520BA6117E83C466318A468F5DBD2_gshared)(__this, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_MutateKey_m7D9FDC6E916E6EC9BE1E9F43013AF836CB48368F (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Node_MutateKey_m7D9FDC6E916E6EC9BE1E9F43013AF836CB48368F_gshared)((Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*)__this, ___0_key, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_ReplaceAt_m267E534B8086316E9F1CA9B5B5CE29DC6F55865B (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))Node_ReplaceAt_m267E534B8086316E9F1CA9B5B5CE29DC6F55865B_gshared)((Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*)__this, ___0_index, ___1_value, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Reverse_mC72BA9DEA10469DB42DD36C122BDD9BD1D5D9853 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, int32_t, int32_t, const RuntimeMethod*))Node_Reverse_mC72BA9DEA10469DB42DD36C122BDD9BD1D5D9853_gshared)(__this, ___0_index, ___1_count, method);
}
inline Il2CppFullySharedGenericAny* Node_ItemRef_m11091F398CE2B8C32BF1278C29033D3A0ABAA5E7 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, int32_t, const RuntimeMethod*))Node_ItemRef_m11091F398CE2B8C32BF1278C29033D3A0ABAA5E7_gshared)(__this, ___0_index, method);
}
inline Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290 (const RuntimeMethod* method)
{
	return ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared)(method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Sort_m7BDDF067863D1202C46313B69F1D809796E3812A (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, RuntimeObject*, const RuntimeMethod*))Node_Sort_m7BDDF067863D1202C46313B69F1D809796E3812A_gshared)(__this, ___0_comparer, method);
}
inline void Requires_NotNull_TisComparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49_m198A633C3E7D3F4C12E7FC0B141FEDC35F87A85C (Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline void Node_CopyTo_m08961681464FA59D148C7D9403532F8997E34E99 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))Node_CopyTo_m08961681464FA59D148C7D9403532F8997E34E99_gshared)(__this, ___0_array, method);
}
inline void Array_Sort_TisIl2CppFullySharedGenericAny_m699F81165178B5E96D2D406ABB12F9382F8255E4 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* ___1_comparison, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*, const RuntimeMethod*))Array_Sort_TisIl2CppFullySharedGenericAny_m699F81165178B5E96D2D406ABB12F9382F8255E4_gshared)(___0_array, ___1_comparison, method);
}
inline RuntimeObject* ImmutableExtensions_AsOrderedCollection_TisIl2CppFullySharedGenericAny_mAD04AE315D604F57729B36E71A338249CF556C96 (RuntimeObject* ___0_sequence, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))ImmutableExtensions_AsOrderedCollection_TisIl2CppFullySharedGenericAny_mAD04AE315D604F57729B36E71A338249CF556C96_gshared)(___0_sequence, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Sort_mDC3106CBE2C5E65E9B370A76B70F9A4AB92FB8BB (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Node_Sort_mDC3106CBE2C5E65E9B370A76B70F9A4AB92FB8BB_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Requires_Argument_mC0D17F52DC37FD36EA0C45C7464CD2965FFF6277 (bool ___0_condition, const RuntimeMethod* method) ;
inline void Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline int32_t Node_BinarySearch_m269D432407A136D2BFE6AA8A3127B6C4C0A130CE (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, int32_t ___1_count, Il2CppFullySharedGenericAny ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject*, const RuntimeMethod*))Node_BinarySearch_m269D432407A136D2BFE6AA8A3127B6C4C0A130CE_gshared)((Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*)__this, ___0_index, ___1_count, ___2_item, ___3_comparer, method);
}
inline int32_t Node_IndexOf_m0B728BF7E2057365EE3FA5A57F705755AF3BD34D (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Il2CppFullySharedGenericAny ___0_item, int32_t ___1_index, int32_t ___2_count, RuntimeObject* ___3_equalityComparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, Il2CppFullySharedGenericAny, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Node_IndexOf_m0B728BF7E2057365EE3FA5A57F705755AF3BD34D_gshared)((Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*)__this, ___0_item, ___1_index, ___2_count, ___3_equalityComparer, method);
}
inline bool Node_Contains_m3C2DA577739605C40593D2B9FB0FBD5C451CDFDC (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_node, Il2CppFullySharedGenericAny ___1_value, RuntimeObject* ___2_equalityComparer, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, Il2CppFullySharedGenericAny, RuntimeObject*, const RuntimeMethod*))Node_Contains_m3C2DA577739605C40593D2B9FB0FBD5C451CDFDC_gshared)(___0_node, ___1_value, ___2_equalityComparer, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline)(method);
}
inline void Requires_NotNull_Tis__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC_m1421C199B92AD40E998F3A77B033BF2EDA715532 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline void Requires_NotNull_TisRuntimeArray_mEA688B1EA5C572D7FC545A7E12223DA6C4C902D5 (RuntimeArray* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeArray*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___0_value, int32_t ___1_index, const RuntimeMethod* method) ;
inline void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)(__this, method);
}
inline void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
inline ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4* ImmutableList_CreateRange_TisIl2CppFullySharedGenericAny_m5C3780410E687AD7D5EBCD5EC166632172F0DC60 (RuntimeObject* ___0_items, const RuntimeMethod* method)
{
	return ((  ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4* (*) (RuntimeObject*, const RuntimeMethod*))ImmutableList_CreateRange_TisIl2CppFullySharedGenericAny_m5C3780410E687AD7D5EBCD5EC166632172F0DC60_gshared)(___0_items, method);
}
inline int32_t Node_FindIndex_m46C36BB9A22B238E6EDC949E9448BE5F611B8B6A (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, int32_t, int32_t, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, const RuntimeMethod*))Node_FindIndex_m46C36BB9A22B238E6EDC949E9448BE5F611B8B6A_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline int32_t Node_FindLastIndex_mE3D03C3831EB08F20EE0839E8D648B2FF2D6125E (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, int32_t, int32_t, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, const RuntimeMethod*))Node_FindLastIndex_mE3D03C3831EB08F20EE0839E8D648B2FF2D6125E_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline void Node_Freeze_mA7CB81F26995839C24A370F83BF48298DDBE573D (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method)
{
	((  void (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_Freeze_mA7CB81F26995839C24A370F83BF48298DDBE573D_gshared)(__this, method);
}
inline int32_t Node_get_BalanceFactor_m0EC51CAA3E0789D285D1D46E4C2965229D0A8C88 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_get_BalanceFactor_m0EC51CAA3E0789D285D1D46E4C2965229D0A8C88_gshared)(__this, method);
}
inline bool Node_get_IsLeftHeavy_m67D5D7B60BE70023CF75E689A259EDBDC1E6999D (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_get_IsLeftHeavy_m67D5D7B60BE70023CF75E689A259EDBDC1E6999D_gshared)(__this, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_RotateRight_mAB9442A0854300DE7F303486760DCA9AC90E27D0 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_RotateRight_mAB9442A0854300DE7F303486760DCA9AC90E27D0_gshared)(__this, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_DoubleRight_mCECBFDC431DF2BEA4E81E4045C0A753DEC6055D8 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_DoubleRight_mCECBFDC431DF2BEA4E81E4045C0A753DEC6055D8_gshared)(__this, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_RotateLeft_m360E8C2D9D508AC8C853CC98AEB88A18EC2EEF19 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_RotateLeft_m360E8C2D9D508AC8C853CC98AEB88A18EC2EEF19_gshared)(__this, method);
}
inline Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_DoubleLeft_m0D495622395401AC5B62334B6207BEAD0C5DB800 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_DoubleLeft_m0D495622395401AC5B62334B6207BEAD0C5DB800_gshared)(__this, method);
}
inline bool Node_get_IsRightHeavy_m2B2DBCA95556A4ADB2D55E49037960F67E6051B4 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node_get_IsRightHeavy_m2B2DBCA95556A4ADB2D55E49037960F67E6051B4_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Math_Max_m12FB4E1302123ADB441E3A7BDF52E8404DDE53A2 (uint8_t ___0_val1, uint8_t ___1_val2, const RuntimeMethod* method) ;
inline bool ImmutableList_1_TryCastToImmutableList_mEA59DAAE569FFF6E227545CA55F7EE23D01A9C11 (RuntimeObject* ___0_sequence, ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4** ___1_other, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4**, const RuntimeMethod*))ImmutableList_1_TryCastToImmutableList_mEA59DAAE569FFF6E227545CA55F7EE23D01A9C11_gshared)(___0_sequence, ___1_other, method);
}
inline void Node__ctor_mF66722CB299285C58F438D3143A2C07D785C84D8 (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method)
{
	((  void (*) (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*, const RuntimeMethod*))Node__ctor_mF66722CB299285C58F438D3143A2C07D785C84D8_gshared)(__this, method);
}
inline void Requires_NotNull_TisNode_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC_mDDB556AC194F77D05C8671D775F49EB2B7B5106B (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline bool Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, const RuntimeMethod*))Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA_gshared)(__this, method);
}
inline int32_t Node_get_Count_mB1E99B9EDC8EE8589D98FF3626E87F386F9420E3_inline (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, const RuntimeMethod*))Node_get_Count_mB1E99B9EDC8EE8589D98FF3626E87F386F9420E3_gshared_inline)(__this, method);
}
inline void Node_get_Item_m5D248CCA6D68A3697DCEB40CE3C7C923078A7EE8 (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Node_get_Item_m5D248CCA6D68A3697DCEB40CE3C7C923078A7EE8_gshared)((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)__this, ___0_index, il2cppRetVal, method);
}
inline Il2CppFullySharedGenericAny* Node_ItemRefUnchecked_m7FE058A4C03DE46C3E12D8C91CAEE17A5DB445AC (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, int32_t, const RuntimeMethod*))Node_ItemRefUnchecked_m7FE058A4C03DE46C3E12D8C91CAEE17A5DB445AC_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m2F2E09A44D4327025E15A7C7657EFC352F280722 (Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF* __this, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_root, Builder_t431E90D62A61669553FF359FE81BAD1D3EFE64E5* ___1_builder, bool ___2_reverse, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF*, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, Builder_t431E90D62A61669553FF359FE81BAD1D3EFE64E5*, bool, const RuntimeMethod*))Enumerator__ctor_m2F2E09A44D4327025E15A7C7657EFC352F280722_gshared)(__this, ___0_root, ___1_builder, ___2_reverse, method);
}
inline Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF Node_GetEnumerator_m8115E25480E14F987FB6899ACF9E660187721000 (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, const RuntimeMethod*))Node_GetEnumerator_m8115E25480E14F987FB6899ACF9E660187721000_gshared)(__this, method);
}
inline void Enumerator_Dispose_m922B7656398382C9DBE6D964C5D40F4E80319048 (Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF*, const RuntimeMethod*))Enumerator_Dispose_m922B7656398382C9DBE6D964C5D40F4E80319048_gshared)(__this, method);
}
inline void Enumerator_get_Current_m0511BC1B180F031FBD00338F725E8597B5DC0FE7 (Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m0511BC1B180F031FBD00338F725E8597B5DC0FE7_gshared)((Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF*)__this, il2cppRetVal, method);
}
inline bool Enumerator_MoveNext_m890821263E40A5DCC1BF1D9169C23C4D28C72BCA (Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF*, const RuntimeMethod*))Enumerator_MoveNext_m890821263E40A5DCC1BF1D9169C23C4D28C72BCA_gshared)(__this, method);
}
inline void Requires_NotNull_TisIComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA_mEC20092BEB80345758B8491843633720521A2C58 (RuntimeObject* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline void Node__ctor_m21B1B2AD09D3360E943B62D5A8BEB3C57F0FF8F3 (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny ___0_key, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___1_left, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___2_right, bool ___3_frozen, const RuntimeMethod* method)
{
	((  void (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, Il2CppFullySharedGenericAny, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, bool, const RuntimeMethod*))Node__ctor_m21B1B2AD09D3360E943B62D5A8BEB3C57F0FF8F3_gshared)((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)__this, ___0_key, ___1_left, ___2_right, ___3_frozen, method);
}
inline Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_Add_m6DE337658AFF55138E8803DD715D594A89F195C3 (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_comparer, bool* ___2_mutated, const RuntimeMethod* method)
{
	return ((  Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, Il2CppFullySharedGenericAny, RuntimeObject*, bool*, const RuntimeMethod*))Node_Add_m6DE337658AFF55138E8803DD715D594A89F195C3_gshared)((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)__this, ___0_key, ___1_comparer, ___2_mutated, method);
}
inline Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_Mutate_m3D2DAC123906E4E1DA1A65DE5C9A81FFC293E71F (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_left, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___1_right, const RuntimeMethod* method)
{
	return ((  Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, const RuntimeMethod*))Node_Mutate_m3D2DAC123906E4E1DA1A65DE5C9A81FFC293E71F_gshared)(__this, ___0_left, ___1_right, method);
}
inline Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_MakeBalanced_m6145C7609EFAD7400EB7EC07E55890632422A380 (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method)
{
	return ((  Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, const RuntimeMethod*))Node_MakeBalanced_m6145C7609EFAD7400EB7EC07E55890632422A380_gshared)(___0_tree, method);
}
inline Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_Remove_mAE87F55168F9CF8FBF115D841DBAB62D59658595 (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_comparer, bool* ___2_mutated, const RuntimeMethod* method)
{
	return ((  Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, Il2CppFullySharedGenericAny, RuntimeObject*, bool*, const RuntimeMethod*))Node_Remove_mAE87F55168F9CF8FBF115D841DBAB62D59658595_gshared)((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)__this, ___0_key, ___1_comparer, ___2_mutated, method);
}
inline Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_Search_m0DD8BF2D0F1518DB3EBA463DE523EA1D9B3C35A0 (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, Il2CppFullySharedGenericAny, RuntimeObject*, const RuntimeMethod*))Node_Search_m0DD8BF2D0F1518DB3EBA463DE523EA1D9B3C35A0_gshared)((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)__this, ___0_key, ___1_comparer, method);
}
inline void Node_Freeze_m8C498126932BCE728C9D9B2133A7D11525E1A666 (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method)
{
	((  void (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, const RuntimeMethod*))Node_Freeze_m8C498126932BCE728C9D9B2133A7D11525E1A666_gshared)(__this, method);
}
inline int32_t Node_IndexOf_mD06FFB34C56C57BEA4D00C90B03A9237BDF61A10 (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, Il2CppFullySharedGenericAny, RuntimeObject*, const RuntimeMethod*))Node_IndexOf_mD06FFB34C56C57BEA4D00C90B03A9237BDF61A10_gshared)((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)__this, ___0_key, ___1_comparer, method);
}
inline Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_RotateRight_mF6183B5AC82FD7D9F9B28DCB252D70E4333739AD (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method)
{
	return ((  Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, const RuntimeMethod*))Node_RotateRight_mF6183B5AC82FD7D9F9B28DCB252D70E4333739AD_gshared)(___0_tree, method);
}
inline Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_RotateLeft_mED96D73CB1B4DDD59CB21161CB7D3C48678A696A (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method)
{
	return ((  Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, const RuntimeMethod*))Node_RotateLeft_mED96D73CB1B4DDD59CB21161CB7D3C48678A696A_gshared)(___0_tree, method);
}
inline int32_t Node_Balance_m3F41DF138CF3E47B24C7AA584A809A9EA44997DE (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, const RuntimeMethod*))Node_Balance_m3F41DF138CF3E47B24C7AA584A809A9EA44997DE_gshared)(___0_tree, method);
}
inline bool Node_IsRightHeavy_m1B826A7C1A348D341A7F75DDA2E71737F6D91E4B (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, const RuntimeMethod*))Node_IsRightHeavy_m1B826A7C1A348D341A7F75DDA2E71737F6D91E4B_gshared)(___0_tree, method);
}
inline Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_DoubleLeft_mD7B8D8E27F61A0E522D80D0844C25132A773DCB7 (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method)
{
	return ((  Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, const RuntimeMethod*))Node_DoubleLeft_mD7B8D8E27F61A0E522D80D0844C25132A773DCB7_gshared)(___0_tree, method);
}
inline bool Node_IsLeftHeavy_m5F4C4D3B4684984C1364F9D7501E6C6EE8EC3931 (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, const RuntimeMethod*))Node_IsLeftHeavy_m5F4C4D3B4684984C1364F9D7501E6C6EE8EC3931_gshared)(___0_tree, method);
}
inline Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_DoubleRight_mE2347BBDCF1E532D696FEDFB64B0FFF1ADE60ADF (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method)
{
	return ((  Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, const RuntimeMethod*))Node_DoubleRight_mE2347BBDCF1E532D696FEDFB64B0FFF1ADE60ADF_gshared)(___0_tree, method);
}
inline Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_NodeTreeFromList_m9F091D0683DA583746D2E24F8A8D9668E3BA62CE (RuntimeObject* ___0_items, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* (*) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Node_NodeTreeFromList_m9F091D0683DA583746D2E24F8A8D9668E3BA62CE_gshared)(___0_items, ___1_start, ___2_length, method);
}
inline void Node__ctor_mDC5E0E80609B0FEFFE87784DBDDB9485F2F27B2B (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method)
{
	((  void (*) (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*, const RuntimeMethod*))Node__ctor_mDC5E0E80609B0FEFFE87784DBDDB9485F2F27B2B_gshared)(__this, method);
}
inline void Node_set_Item_mAE94673D67914B814978A88A7AD48410FAFB704C_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Node_set_Item_mAE94673D67914B814978A88A7AD48410FAFB704C_gshared_inline)((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)__this, ___0_value, method);
}
inline void Node_set_Color_m7059ED9294523EF76ADB6700781A80CEE58623EC_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, uint8_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, uint8_t, const RuntimeMethod*))Node_set_Color_m7059ED9294523EF76ADB6700781A80CEE58623EC_gshared_inline)(__this, ___0_value, method);
}
inline bool Node_get_IsRed_m38BDAA19CD760AF709513A305B78276A478F53B4 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_get_IsRed_m38BDAA19CD760AF709513A305B78276A478F53B4_gshared)(__this, method);
}
inline bool Node_get_IsBlack_mBFA1E96F3DB151343552A8E7E675CF01EAC663B7 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_get_IsBlack_mBFA1E96F3DB151343552A8E7E675CF01EAC663B7_gshared)(__this, method);
}
inline uint8_t Node_get_Color_m9A8282043129C40F83EE3E6A8F4A49B8DF4480C7_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_get_Color_m9A8282043129C40F83EE3E6A8F4A49B8DF4480C7_gshared_inline)(__this, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_gshared_inline)(__this, method);
}
inline bool Node_IsNullOrBlack_mF0637159A093D68B236533C4424E72C4A06CF141 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_node, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_IsNullOrBlack_mF0637159A093D68B236533C4424E72C4A06CF141_gshared)(___0_node, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_gshared_inline)(__this, method);
}
inline bool Node_IsNonNullRed_m7DEA5463EEB0E8E9E77DD93296DAEC24DEC70648 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_node, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_IsNonNullRed_m7DEA5463EEB0E8E9E77DD93296DAEC24DEC70648_gshared)(___0_node, method);
}
inline int32_t SortedSet_1_Log2_m6EDFF3696AB144C4BCA5D85DE8FB595407FBD64F (int32_t ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, const RuntimeMethod*))SortedSet_1_Log2_m6EDFF3696AB144C4BCA5D85DE8FB595407FBD64F_gshared)(___0_value, method);
}
inline void Stack_1__ctor_m0C9F9DA4F66F8441B51E59739F127EAF336D2690 (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71*, int32_t, const RuntimeMethod*))Stack_1__ctor_mFDFA9E1123DD1C9E5970223E605B8C973B39721A_gshared)(__this, ___0_capacity, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_ShallowClone_mA41DD00555236A7C787200DEE41BFE1BA664A66D (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_ShallowClone_mA41DD00555236A7C787200DEE41BFE1BA664A66D_gshared)(__this, method);
}
inline void Stack_1_Push_m2A8E69C7B1A7D7BBE7EA5A274EE7494A677FE494 (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline void Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_gshared_inline)(__this, ___0_value, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Stack_1_Pop_mEFB4C515D8F6D65E27D842A2890532271A124B1B (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* __this, const RuntimeMethod* method)
{
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* il2cppRetVal;
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_gshared_inline)(__this, ___0_value, method);
}
inline int32_t Stack_1_get_Count_mE54F3425BF9ECF21A2D32E5E1BED64E4B9820C5C_inline (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71*, const RuntimeMethod*))Stack_1_get_Count_mCAD00A69587F884F88C36DE7423C3C329166144E_gshared_inline)(__this, method);
}
inline void Node_get_Item_m68FF84117314DB42151562EC40D7DD433F22A81A_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Node_get_Item_m68FF84117314DB42151562EC40D7DD433F22A81A_gshared_inline)((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)__this, il2cppRetVal, method);
}
inline void Node__ctor_mBEA2724C6D6A42C977E0C127FD93C9B5C6C3ED46 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Il2CppFullySharedGenericAny ___0_item, uint8_t ___1_color, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Il2CppFullySharedGenericAny, uint8_t, const RuntimeMethod*))Node__ctor_mBEA2724C6D6A42C977E0C127FD93C9B5C6C3ED46_gshared)((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)__this, ___0_item, ___1_color, method);
}
inline void Node_ColorRed_mC0BEFC0741F5D098D452E92F710CA52866EE888E (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_ColorRed_mC0BEFC0741F5D098D452E92F710CA52866EE888E_gshared)(__this, method);
}
inline void Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B_gshared)(__this, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateRight_m661C39CAE7E7B5ACE3337716C071282A25410754 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_RotateRight_m661C39CAE7E7B5ACE3337716C071282A25410754_gshared)(__this, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateLeft_m47E39EB54C7F9E8C64C92920DA54FCA130CBED60 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_RotateLeft_m47E39EB54C7F9E8C64C92920DA54FCA130CBED60_gshared)(__this, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateRightLeft_mCDB26CEDA5347E3701560D24175DE5132957EB0A (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_RotateRightLeft_mCDB26CEDA5347E3701560D24175DE5132957EB0A_gshared)(__this, method);
}
inline Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateLeftRight_m764791D159A6B0773A3ECE5274370B76618C4723 (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method)
{
	return ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))Node_RotateLeftRight_m764791D159A6B0773A3ECE5274370B76618C4723_gshared)(__this, method);
}
inline void Requires_NotNullAllowStructs_TisIl2CppFullySharedGenericAny_mFA636B145D75366207FFFFDC501FD701260F4485 (Il2CppFullySharedGenericAny ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericAny, String_t*, const RuntimeMethod*))Requires_NotNullAllowStructs_TisIl2CppFullySharedGenericAny_mFA636B145D75366207FFFFDC501FD701260F4485_gshared)(___0_value, ___1_parameterName, method);
}
inline void Requires_NotNull_TisNode_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA_mCC24F1A17F24FD312AC86A3A3B49F8C10EAC6411 (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
inline void Func_2__ctor_m14F07CBF38E3835887237FFF52B0AB25A77A4969 (Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Select_TisKeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669_TisIl2CppFullySharedGenericAny_m6084F8E8FC14FA9CC78EF7F9B84F39C241ECDA5D (RuntimeObject* ___0_source, Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7*, const RuntimeMethod*))Enumerable_Select_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5BBCA2BC02448D0B77D2201BB08B13BAB3BABA53_gshared)(___0_source, ___1_selector, method);
}
inline void Enumerator__ctor_mF905FF082FDC2C026BBE7AF1A97BEE6A5797C5C4 (Enumerator_t8863E236B80E2F682B73BA402804D799D1897355* __this, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_root, Builder_tFA7DD71241FF9863641DD1A4349C2AB38787646A* ___1_builder, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8863E236B80E2F682B73BA402804D799D1897355*, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, Builder_tFA7DD71241FF9863641DD1A4349C2AB38787646A*, const RuntimeMethod*))Enumerator__ctor_mF905FF082FDC2C026BBE7AF1A97BEE6A5797C5C4_gshared)(__this, ___0_root, ___1_builder, method);
}
inline Enumerator_t8863E236B80E2F682B73BA402804D799D1897355 Node_GetEnumerator_m6F3B0583D7C7B24DA0B71F03AB42C9D0B13B5ECE (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8863E236B80E2F682B73BA402804D799D1897355 (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, const RuntimeMethod*))Node_GetEnumerator_m6F3B0583D7C7B24DA0B71F03AB42C9D0B13B5ECE_gshared)(__this, method);
}
inline void Requires_NotNull_TisKeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57_m14D2DA5E3B83E15EDC3A6ACC0863D9A5CCF35E05 (KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline void Enumerator_Dispose_m09CF79F695ED10889599A9A14CD5BA39C3B8A703 (Enumerator_t8863E236B80E2F682B73BA402804D799D1897355* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8863E236B80E2F682B73BA402804D799D1897355*, const RuntimeMethod*))Enumerator_Dispose_m09CF79F695ED10889599A9A14CD5BA39C3B8A703_gshared)(__this, method);
}
inline void Enumerator_get_Current_m333AA8CC640EC04D4495E6AEDA61180178B18C7F (Enumerator_t8863E236B80E2F682B73BA402804D799D1897355* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8863E236B80E2F682B73BA402804D799D1897355*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, const RuntimeMethod*))Enumerator_get_Current_m333AA8CC640EC04D4495E6AEDA61180178B18C7F_gshared)((Enumerator_t8863E236B80E2F682B73BA402804D799D1897355*)__this, il2cppRetVal, method);
}
inline bool Enumerator_MoveNext_m59A1977AEB30FCB7AB750ACB18097DB3D37FF9C7 (Enumerator_t8863E236B80E2F682B73BA402804D799D1897355* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8863E236B80E2F682B73BA402804D799D1897355*, const RuntimeMethod*))Enumerator_MoveNext_m59A1977AEB30FCB7AB750ACB18097DB3D37FF9C7_gshared)(__this, method);
}
inline void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, il2cppRetVal, method);
}
inline void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
inline void Requires_NotNull_TisSortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232_m4492C418237855C50B3C8071D8F075C82965FFB6 (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline RuntimeObject* ImmutableExtensions_AsOrderedCollection_TisKeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669_mC5F07C6FBB4C7440BAA5D039361D39DF9874A8B8 (RuntimeObject* ___0_sequence, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))ImmutableExtensions_AsOrderedCollection_TisIl2CppFullySharedGenericAny_mAD04AE315D604F57729B36E71A338249CF556C96_gshared)(___0_sequence, method);
}
inline Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_NodeTreeFromList_m62B6B941853B68240A874A941AD137AA9E383E67 (RuntimeObject* ___0_items, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* (*) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Node_NodeTreeFromList_m62B6B941853B68240A874A941AD137AA9E383E67_gshared)(___0_items, ___1_start, ___2_length, method);
}
inline void Requires_NotNull_TisIEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122_mA3F3C9A20AC4B85A865AB750DB5C26DECF6620F0 (RuntimeObject* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_SetOrAdd_m8B86F90CE4CCB870E9B3A640E56C0FED9994BDCD (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, RuntimeObject* ___2_keyComparer, RuntimeObject* ___3_valueComparer, bool ___4_overwriteExistingValue, bool* ___5_replacedExistingValue, bool* ___6_mutated, const RuntimeMethod* method)
{
	return ((  Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, RuntimeObject*, RuntimeObject*, bool, bool*, bool*, const RuntimeMethod*))Node_SetOrAdd_m8B86F90CE4CCB870E9B3A640E56C0FED9994BDCD_gshared)((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)__this, ___0_key, ___1_value, ___2_keyComparer, ___3_valueComparer, ___4_overwriteExistingValue, ___5_replacedExistingValue, ___6_mutated, method);
}
inline Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_RemoveRecursive_mCAB60623F8107ED6FE89993718E83F0E54F5FEAA (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_keyComparer, bool* ___2_mutated, const RuntimeMethod* method)
{
	return ((  Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, Il2CppFullySharedGenericAny, RuntimeObject*, bool*, const RuntimeMethod*))Node_RemoveRecursive_mCAB60623F8107ED6FE89993718E83F0E54F5FEAA_gshared)((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)__this, ___0_key, ___1_keyComparer, ___2_mutated, method);
}
inline Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_Search_mC575BB604ECA70ECABCC82933DB968DC582D88EE (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_keyComparer, const RuntimeMethod* method)
{
	return ((  Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, Il2CppFullySharedGenericAny, RuntimeObject*, const RuntimeMethod*))Node_Search_mC575BB604ECA70ECABCC82933DB968DC582D88EE_gshared)((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)__this, ___0_key, ___1_keyComparer, method);
}
inline bool Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212 (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, const RuntimeMethod*))Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Arg_KeyNotFoundWithKey_mFEA2BD79E749F50C4604903D6C74E92203149BE7 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m15C2107D9AC3B0DBA15121DB9A582AB29DCAFDA4 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Node_Freeze_m6000D3CB2C2486401AE5BAED216ABE5BD1EC0CF4 (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method)
{
	((  void (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, const RuntimeMethod*))Node_Freeze_m6000D3CB2C2486401AE5BAED216ABE5BD1EC0CF4_gshared)(__this, method);
}
inline Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_Mutate_mDD3C860233B7D3DA02913EB2861F6016D1EE4343 (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_left, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___1_right, const RuntimeMethod* method)
{
	return ((  Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, const RuntimeMethod*))Node_Mutate_mDD3C860233B7D3DA02913EB2861F6016D1EE4343_gshared)(__this, ___0_left, ___1_right, method);
}
inline Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_RotateRight_m3C892921A470A2C360A2D8D95B3CEC0DC6CF71E8 (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method)
{
	return ((  Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, const RuntimeMethod*))Node_RotateRight_m3C892921A470A2C360A2D8D95B3CEC0DC6CF71E8_gshared)(___0_tree, method);
}
inline Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_RotateLeft_m186FF931DDF82573341193C671623860D4115A85 (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method)
{
	return ((  Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, const RuntimeMethod*))Node_RotateLeft_m186FF931DDF82573341193C671623860D4115A85_gshared)(___0_tree, method);
}
inline int32_t Node_Balance_m2C358001DA7FF0156FDB742C24BB6180057379BF (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, const RuntimeMethod*))Node_Balance_m2C358001DA7FF0156FDB742C24BB6180057379BF_gshared)(___0_tree, method);
}
inline bool Node_IsRightHeavy_m5AF9C917436C8E56E091E9D9148230EAE2A8C9B3 (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, const RuntimeMethod*))Node_IsRightHeavy_m5AF9C917436C8E56E091E9D9148230EAE2A8C9B3_gshared)(___0_tree, method);
}
inline Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_DoubleLeft_m60C97BE3A5A21892D5BB1FDB4F7F14DA67936D2C (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method)
{
	return ((  Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, const RuntimeMethod*))Node_DoubleLeft_m60C97BE3A5A21892D5BB1FDB4F7F14DA67936D2C_gshared)(___0_tree, method);
}
inline bool Node_IsLeftHeavy_mE826E4ABA1E8421ECA14E9B7D5E3A9A9D6AFD9C2 (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method)
{
	return ((  bool (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, const RuntimeMethod*))Node_IsLeftHeavy_mE826E4ABA1E8421ECA14E9B7D5E3A9A9D6AFD9C2_gshared)(___0_tree, method);
}
inline Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_DoubleRight_mB57BDC0260F3130F76F43A80471A0A50BE8F582E (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method)
{
	return ((  Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, const RuntimeMethod*))Node_DoubleRight_mB57BDC0260F3130F76F43A80471A0A50BE8F582E_gshared)(___0_tree, method);
}
inline void Requires_NotNull_TisIOrderedCollection_1_t7A5FFBEB711437F5D0BDEBD1C897631D0DC59889_m0CD8C867251FBA14007F1CAF9BD70EE0C1FC10EA (RuntimeObject* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline void Node__ctor_mD23E27629566B8D4468764E2D77949AF03A2AB6C (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___2_left, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___3_right, bool ___4_frozen, const RuntimeMethod* method)
{
	((  void (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, bool, const RuntimeMethod*))Node__ctor_mD23E27629566B8D4468764E2D77949AF03A2AB6C_gshared)((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)__this, ___0_key, ___1_value, ___2_left, ___3_right, ___4_frozen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_DuplicateKey_mAA6D35BD4D69F00D8F742656987A55B4D02C92C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_MakeBalanced_m5460D7A1374241BC30EFCFAEB87516EA0B3AF73F (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method)
{
	return ((  Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, const RuntimeMethod*))Node_MakeBalanced_m5460D7A1374241BC30EFCFAEB87516EA0B3AF73F_gshared)(___0_tree, method);
}
inline Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_Remove_m265E5CC12EE8ACF394EEA8E1F9AF920DBF2E84A0 (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_keyComparer, bool* ___2_mutated, const RuntimeMethod* method)
{
	return ((  Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, Il2CppFullySharedGenericAny, RuntimeObject*, bool*, const RuntimeMethod*))Node_Remove_m265E5CC12EE8ACF394EEA8E1F9AF920DBF2E84A0_gshared)((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)__this, ___0_key, ___1_keyComparer, ___2_mutated, method);
}
inline void Node__ctor_m568035BE054FA345461F656D5D8C70C52F86AF13 (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method)
{
	((  void (*) (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*, const RuntimeMethod*))Node__ctor_m568035BE054FA345461F656D5D8C70C52F86AF13_gshared)(__this, method);
}
inline void Requires_NotNull_TisSortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169_m3802522CB8E58A2270529331D7821DAB2028D2E0 (SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline void NodeEnumerable__ctor_m631FE25CF22C294244120B74820E5E13C131F5C0 (NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F* __this, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___0_root, const RuntimeMethod* method)
{
	((  void (*) (NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F*, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169*, const RuntimeMethod*))NodeEnumerable__ctor_m631FE25CF22C294244120B74820E5E13C131F5C0_gshared)(__this, ___0_root, method);
}
inline void Enumerator__ctor_m50CB4D6A13D82D8FD1C6131602C9BE5E276D04D7 (Enumerator_t4EFD4FF0495907DDDEB9C511462BDB1087642BC5* __this, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___0_root, Builder_t78DA893EF9813330E1E2C308502E62A76678D876* ___1_builder, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4EFD4FF0495907DDDEB9C511462BDB1087642BC5*, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169*, Builder_t78DA893EF9813330E1E2C308502E62A76678D876*, const RuntimeMethod*))Enumerator__ctor_m50CB4D6A13D82D8FD1C6131602C9BE5E276D04D7_gshared)(__this, ___0_root, ___1_builder, method);
}
inline void NodeEnumerable_GetEnumerator_m7BA27433C814767767FEA13026028BC89B99EB2B (NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F* __this, Enumerator_t4EFD4FF0495907DDDEB9C511462BDB1087642BC5* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F*, Enumerator_t4EFD4FF0495907DDDEB9C511462BDB1087642BC5*, const RuntimeMethod*))NodeEnumerable_GetEnumerator_m7BA27433C814767767FEA13026028BC89B99EB2B_gshared)((NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F*)__this, il2cppRetVal, method);
}
inline RuntimeObject* NodeEnumerable_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2DEE89BA9B30F3A31A231854B7A89DD365143A00 (NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F*, const RuntimeMethod*))NodeEnumerable_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2DEE89BA9B30F3A31A231854B7A89DD365143A00_gshared)(__this, method);
}
inline RuntimeObject* NodeEnumerable_System_Collections_IEnumerable_GetEnumerator_m8A17B09634755097AD065516BAF554501EBC1CB6 (NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F*, const RuntimeMethod*))NodeEnumerable_System_Collections_IEnumerable_GetEnumerator_m8A17B09634755097AD065516BAF554501EBC1CB6_gshared)(__this, method);
}
inline void NodePath__ctor_mA9A74612E0785F30CCC660C7936418FD57A9EB55 (NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813* __this, int32_t ___0_nodeID, int32_t ___1_mainTreeNodeID, const RuntimeMethod* method)
{
	((  void (*) (NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813*, int32_t, int32_t, const RuntimeMethod*))NodePath__ctor_mA9A74612E0785F30CCC660C7936418FD57A9EB55_gshared)(__this, ___0_nodeID, ___1_mainTreeNodeID, method);
}
inline bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)(__this, method);
}
inline void Comparer_1__ctor_m36186DDB1533C95B95F9692D890571704896DCC2 (Comparer_1_t178DF674F2B43D7321E70F9D20DC0FB879D78BCC* __this, const RuntimeMethod* method)
{
	((  void (*) (Comparer_1_t178DF674F2B43D7321E70F9D20DC0FB879D78BCC*, const RuntimeMethod*))Comparer_1__ctor_m15D27727BD23D4B1743984704A4FD84E84A9BE40_gshared)(__this, method);
}
inline void EqualityComparer_1__ctor_m512B1E6051FF8B61852CC79C2A5678A15651C368 (EqualityComparer_1_t7CF2CDB87E1B6F6C7D463172655828C6F2A7974B* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t7CF2CDB87E1B6F6C7D463172655828C6F2A7974B*, const RuntimeMethod*))EqualityComparer_1__ctor_mFCFFB9230A4881E211659A1A772D554D857B988F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Node_get_Key_m99BB194855B2D96DFD5C498EA722FC92F03CC37A_gshared (Node_t011AD9742C3342078C929B341E16AF3F1ACFD1B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_tCA639292D33FB0A5929CD07DE15BA27D9C35AE09_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 41));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 42));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 43));
		Il2CppSharedGenericObject* L_0 = __this->____key;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t011AD9742C3342078C929B341E16AF3F1ACFD1B7* Node_get_Prev_mF604ED99073DBD915121229060956049F5A98E2E_gshared (Node_t011AD9742C3342078C929B341E16AF3F1ACFD1B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_tCA639292D33FB0A5929CD07DE15BA27D9C35AE09_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 44));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 45));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 46));
		Node_t011AD9742C3342078C929B341E16AF3F1ACFD1B7* L_0 = __this->____prev;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t011AD9742C3342078C929B341E16AF3F1ACFD1B7* Node_get_Next_mBE16249696B6550D1E76F3648D13BF458456C4E0_gshared (Node_t011AD9742C3342078C929B341E16AF3F1ACFD1B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_tCA639292D33FB0A5929CD07DE15BA27D9C35AE09_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 47));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 48));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 49));
		Node_t011AD9742C3342078C929B341E16AF3F1ACFD1B7* L_0 = __this->____next;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mB1FE7B0789C77B8A2E3E598DDCFFB8488C6417C9_gshared (Node_t011AD9742C3342078C929B341E16AF3F1ACFD1B7* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mF66722CB299285C58F438D3143A2C07D785C84D8_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), (bool)1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m7BF40582800CD5EC397DDC35A65D9E48F304F77C_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Il2CppFullySharedGenericAny ___0_key, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___1_left, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___2_right, bool ___3_frozen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = ___1_left;
		Requires_NotNull_TisNode_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB_m4E22B6EF4EC08078BDC2B81C9C5826D2A0E3F1FB(L_0, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_1 = ___2_right;
		Requires_NotNull_TisNode_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB_m4E22B6EF4EC08078BDC2B81C9C5826D2A0E3F1FB(L_1, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_2, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_3 = ___1_left;
		il2cpp_codegen_write_instance_field_data<Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_3);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_4 = ___2_right;
		il2cpp_codegen_write_instance_field_data<Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_4);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_5 = ___1_left;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_6 = ___2_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		uint8_t L_7;
		L_7 = Node_ParentHeight_m4CFC4675B0EA632CC45D346DF3FC41D3723A12C3_inline(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_7);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_8 = ___1_left;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_9 = ___2_right;
		int32_t L_10;
		L_10 = Node_ParentCount_m85162769415961CC53BC415A0A4995FAC19523FE(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_10);
		bool L_11 = ___3_frozen;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_11);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return (bool)((((RuntimeObject*)(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_get_Height_mDDCF72A2ACBF3287E7E5FB196209BB8F5CD20532_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_get_Left_m70655A9061B7528824117FE4DC057D1F5C56079F_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_System_Collections_Immutable_IBinaryTree_get_Left_m8516A8402F3C2CF6BAC9A9A1F4760C4AD924352F_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_get_Right_m43D7750573B1DA9E0A865DEB4FF8D80C76AFAFB6_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_System_Collections_Immutable_IBinaryTree_get_Right_mD3F0D50FEFB89BE9B2F8B5B64428E446735ADF76_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Left_mF59A84EC131D70086009998FACC0E95EA0F5FAB3_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Right_m4535F6069EDD06F196FEEE83B19BB4B3603EA1D8_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_get_Value_m93B58E983957C68535034721D132B91AB4EC92D5_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_get_Key_m99F1CA727CE4D6ABA14462F2A2D00FE6D312A6A6_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_get_Item_mB55EBB257AA4F862BC68ED646F45B0B129E9E642_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	const Il2CppFullySharedGenericAny L_17 = L_8;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)G_B3_0, _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, (String_t*)NULL, NULL);
		int32_t L_3 = ___0_index;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_4 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_0036;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_6 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		Node_get_Item_mB55EBB257AA4F862BC68ED646F45B0B129E9E642(L_6, L_7, (Il2CppFullySharedGenericAny*)L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		return;
	}

IL_0036:
	{
		int32_t L_9 = ___0_index;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_10 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_005f;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_12 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		int32_t L_13 = ___0_index;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_14 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_15 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_12);
		Node_get_Item_mB55EBB257AA4F862BC68ED646F45B0B129E9E642(L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_13, L_15)), 1)), (Il2CppFullySharedGenericAny*)L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		return;
	}

IL_005f:
	{
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		il2cpp_codegen_memcpy(il2cppRetVal, L_17, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Node_ItemRef_m11091F398CE2B8C32BF1278C29033D3A0ABAA5E7_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)G_B3_0, _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, (String_t*)NULL, NULL);
		int32_t L_3 = ___0_index;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = Node_ItemRefUnchecked_mDEEE4E845208588FC7CBFE03CBA872C91769F4C7(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Node_ItemRefUnchecked_mDEEE4E845208588FC7CBFE03CBA872C91769F4C7_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_1 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_001b;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_3 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		Il2CppFullySharedGenericAny* L_5;
		L_5 = Node_ItemRefUnchecked_mDEEE4E845208588FC7CBFE03CBA872C91769F4C7(L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_5;
	}

IL_001b:
	{
		int32_t L_6 = ___0_index;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_7 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if ((((int32_t)L_6) <= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_9 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		int32_t L_10 = ___0_index;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_11 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_9);
		Il2CppFullySharedGenericAny* L_13;
		L_13 = Node_ItemRefUnchecked_mDEEE4E845208588FC7CBFE03CBA872C91769F4C7(L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_10, L_12)), 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_13;
	}

IL_0044:
	{
		return (((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B Node_GetEnumerator_mB39C975A4691C8F66AFCBA3754EA1BEB55681AA9_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m50B65316571A3AA20961A1C27D89DCB0F2CC66A9((&L_0), __this, (Builder_tDAEBE5CD087509AC31F7881193393BAA73D29A68*)NULL, (-1), (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26606AA4C06E13BCCD9B8DA9568FFDB7BB40DF11_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B L_0;
		L_0 = Node_GetEnumerator_mB39C975A4691C8F66AFCBA3754EA1BEB55681AA9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_System_Collections_IEnumerable_GetEnumerator_m4A4F0A0048437CDC9BA6ED3412A9200C147A07B9_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B L_0;
		L_0 = Node_GetEnumerator_mB39C975A4691C8F66AFCBA3754EA1BEB55681AA9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B Node_GetEnumerator_m5D1E5160899A11D972638FABC41627ACDC8F88A9_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Builder_tDAEBE5CD087509AC31F7881193393BAA73D29A68* ___0_builder, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Builder_tDAEBE5CD087509AC31F7881193393BAA73D29A68* L_0 = ___0_builder;
		Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m50B65316571A3AA20961A1C27D89DCB0F2CC66A9((&L_1), __this, L_0, (-1), (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_NodeTreeFromList_mEC0031D8EBFDC8DEBC2085F9F91330143748A824_gshared (RuntimeObject* ___0_items, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF300D2310959AF105732D339376803869D9B2B91);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_2 = NULL;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_3 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_items;
		Requires_NotNull_TisIOrderedCollection_1_t537C6DE6F4F927A415EE775B1FB79BB11C63317F_m9B89E483854B9917E10ECDF3F9CCA00FCF00E320(L_0, _stringLiteralF300D2310959AF105732D339376803869D9B2B91, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		int32_t L_1 = ___1_start;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD, (String_t*)NULL, NULL);
		int32_t L_2 = ___2_length;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, (String_t*)NULL, NULL);
		int32_t L_3 = ___2_length;
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_4 = ((Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->___EmptyNode;
		return L_4;
	}

IL_0038:
	{
		int32_t L_5 = ___2_length;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_5, 1))/2));
		int32_t L_6 = ___2_length;
		int32_t L_7 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_6, 1)), L_7));
		RuntimeObject* L_8 = ___0_items;
		int32_t L_9 = ___1_start;
		int32_t L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_11;
		L_11 = Node_NodeTreeFromList_mEC0031D8EBFDC8DEBC2085F9F91330143748A824(L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		V_2 = L_11;
		RuntimeObject* L_12 = ___0_items;
		int32_t L_13 = ___1_start;
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_16;
		L_16 = Node_NodeTreeFromList_mEC0031D8EBFDC8DEBC2085F9F91330143748A824(L_12, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		V_3 = L_16;
		RuntimeObject* L_17 = ___0_items;
		int32_t L_18 = ___1_start;
		int32_t L_19 = V_1;
		NullCheck(L_17);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 16), L_17, ((int32_t)il2cpp_codegen_add(L_18, L_19)), (Il2CppFullySharedGenericAny*)L_20);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_21 = V_2;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_22 = V_3;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_23 = (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Node__ctor_m7BF40582800CD5EC397DDC35A65D9E48F304F77C(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_24, L_20, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F): *(void**)L_20), L_21, L_22, (bool)1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_NodeTreeFromList_mC0A824AC1692B2378AD9501EC0775FBCCD1B1371_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_items, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_2 = NULL;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_3 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = ReadOnlySpan_1_get_IsEmpty_mF9C2BB2D1BC343ECA2DD473397A9E9314A1F65EA((&___0_items), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_1 = ((Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->___EmptyNode;
		return L_1;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___0_items), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_2, 1))/2));
		int32_t L_3;
		L_3 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___0_items), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		int32_t L_4 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_3, 1)), L_4));
		int32_t L_5 = V_1;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_6;
		L_6 = ReadOnlySpan_1_Slice_m5FF60C7FC975ABE8A18ECC2B3C066E77F55AECBD_inline((&___0_items), 0, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_7;
		L_7 = Node_NodeTreeFromList_mC0A824AC1692B2378AD9501EC0775FBCCD1B1371(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27));
		V_2 = L_7;
		int32_t L_8 = V_1;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_9;
		L_9 = ReadOnlySpan_1_Slice_mB39169D4E17B6E306E9C695E4B46FF465EADAE44_inline((&___0_items), ((int32_t)il2cpp_codegen_add(L_8, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_10;
		L_10 = Node_NodeTreeFromList_mC0A824AC1692B2378AD9501EC0775FBCCD1B1371(L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27));
		V_3 = L_10;
		int32_t L_11 = V_1;
		Il2CppFullySharedGenericAny* L_12;
		L_12 = ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_inline((&___0_items), L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		il2cpp_codegen_memcpy(L_13, L_12, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_14 = V_2;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_15 = V_3;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_16 = (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Node__ctor_m7BF40582800CD5EC397DDC35A65D9E48F304F77C(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_17, L_13, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F): *(void**)L_13), L_14, L_15, (bool)1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Add_m3D60C105B0E16626FB5FAAF116ECC0AE8283242F_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_5 = L_1;
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_0 = NULL;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_3;
		L_3 = Node_CreateLeaf_m5972C45C077E1CED921B71D76E44D9317E8CA7E0((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F): *(void**)L_1), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_3;
	}

IL_000f:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_4 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		NullCheck(L_4);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_6;
		L_6 = Node_Add_m3D60C105B0E16626FB5FAAF116ECC0AE8283242F(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_5: *(void**)L_5), il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		V_0 = L_6;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_7 = V_0;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_8;
		L_8 = Node_MutateRight_m448EE8322C05DC37D1965A8D1FF67425F95C6E50(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_1 = L_8;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_9 = V_1;
		NullCheck(L_9);
		bool L_10;
		L_10 = Node_get_IsBalanced_mCB9C6B94AE7B6C401BB42669B961A71F39B945B2(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		if (L_10)
		{
			goto IL_0033;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_11 = V_1;
		NullCheck(L_11);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_12;
		L_12 = Node_BalanceRight_m9F5AC4B6775A3B370EADC2EF78EF342F7C9B166A(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return L_12;
	}

IL_0033:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Insert_m3513968805E68F6A083D031943F7AC65B9410D24_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_12 = L_4;
	const Il2CppFullySharedGenericAny L_25 = L_4;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_0 = NULL;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_1 = NULL;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_2 = NULL;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_3 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)G_B3_0, _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, (String_t*)NULL, NULL);
		bool L_3;
		L_3 = Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___1_key : &___1_key), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_6;
		L_6 = Node_CreateLeaf_m5972C45C077E1CED921B71D76E44D9317E8CA7E0((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F): *(void**)L_4), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_6;
	}

IL_002d:
	{
		int32_t L_7 = ___0_index;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_8 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if ((((int32_t)L_7) > ((int32_t)L_9)))
		{
			goto IL_0062;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_10 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_11 = ___0_index;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___1_key : &___1_key), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		NullCheck(L_10);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_13;
		L_13 = Node_Insert_m3513968805E68F6A083D031943F7AC65B9410D24(L_10, L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_12: *(void**)L_12), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		V_0 = L_13;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_14 = V_0;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_15;
		L_15 = Node_MutateLeft_m3E116E19DD8747E0FFF6C5DF72BE083BF6C87FEE(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_1 = L_15;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_16 = V_1;
		NullCheck(L_16);
		bool L_17;
		L_17 = Node_get_IsBalanced_mCB9C6B94AE7B6C401BB42669B961A71F39B945B2(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		if (L_17)
		{
			goto IL_0060;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_18 = V_1;
		NullCheck(L_18);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_19;
		L_19 = Node_BalanceLeft_m45BE31AC829F10C77D5AE3C67548D48642E2B350(L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return L_19;
	}

IL_0060:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_20 = V_1;
		return L_20;
	}

IL_0062:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_21 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		int32_t L_22 = ___0_index;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_23 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_24 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_memcpy(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___1_key : &___1_key), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		NullCheck(L_21);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_26;
		L_26 = Node_Insert_m3513968805E68F6A083D031943F7AC65B9410D24(L_21, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_22, L_24)), 1)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_25: *(void**)L_25), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		V_2 = L_26;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_27 = V_2;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_28;
		L_28 = Node_MutateRight_m448EE8322C05DC37D1965A8D1FF67425F95C6E50(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_3 = L_28;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_29 = V_3;
		NullCheck(L_29);
		bool L_30;
		L_30 = Node_get_IsBalanced_mCB9C6B94AE7B6C401BB42669B961A71F39B945B2(L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		if (L_30)
		{
			goto IL_0095;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_31 = V_3;
		NullCheck(L_31);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_32;
		L_32 = Node_BalanceRight_m9F5AC4B6775A3B370EADC2EF78EF342F7C9B166A(L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return L_32;
	}

IL_0095:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_33 = V_3;
		return L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_AddRange_mA90A4BC1A9B4AE5D7F9F3CE583703569131B64E3_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, RuntimeObject* ___0_keys, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699);
		s_Il2CppMethodInitialized = true;
	}
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_0 = NULL;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_keys;
		Requires_NotNull_TisIEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66_mA20F6C2C4221D70A6054CA93761F61864C8EB569(L_0, _stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		bool L_1;
		L_1 = Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_2 = ___0_keys;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_3;
		L_3 = Node_CreateRange_m1F287B4EAED6F5FCD57CE2E9238BEF8E7FD77250(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_3;
	}

IL_001a:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_4 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		RuntimeObject* L_5 = ___0_keys;
		NullCheck(L_4);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_6;
		L_6 = Node_AddRange_mA90A4BC1A9B4AE5D7F9F3CE583703569131B64E3(L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		V_0 = L_6;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_7 = V_0;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_8;
		L_8 = Node_MutateRight_m448EE8322C05DC37D1965A8D1FF67425F95C6E50(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_1 = L_8;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_9 = V_1;
		NullCheck(L_9);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_10;
		L_10 = Node_BalanceMany_mB9650DF7469CC65FD9FA0C1F69CCAC7B008F277D(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_AddRange_mC42FF25F0CE9371DCEEF31CF19159FBE944D06B4_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_keys, const RuntimeMethod* method) 
{
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_0 = NULL;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_1 = ___0_keys;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_2;
		L_2 = Node_NodeTreeFromList_mC0A824AC1692B2378AD9501EC0775FBCCD1B1371(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return L_2;
	}

IL_000f:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_3 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_4 = ___0_keys;
		NullCheck(L_3);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_5;
		L_5 = Node_AddRange_mC42FF25F0CE9371DCEEF31CF19159FBE944D06B4(L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		V_0 = L_5;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_6 = V_0;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_7;
		L_7 = Node_MutateRight_m448EE8322C05DC37D1965A8D1FF67425F95C6E50(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_1 = L_7;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_8 = V_1;
		NullCheck(L_8);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_9;
		L_9 = Node_BalanceMany_mB9650DF7469CC65FD9FA0C1F69CCAC7B008F277D(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_InsertRange_m0780746D22FD60C16FDA6ABF631C227378F0D431_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, RuntimeObject* ___1_keys, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699);
		s_Il2CppMethodInitialized = true;
	}
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_0 = NULL;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_1 = NULL;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)G_B3_0, _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, (String_t*)NULL, NULL);
		RuntimeObject* L_3 = ___1_keys;
		Requires_NotNull_TisIEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66_mA20F6C2C4221D70A6054CA93761F61864C8EB569(L_3, _stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		bool L_4;
		L_4 = Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_5 = ___1_keys;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_6;
		L_6 = Node_CreateRange_m1F287B4EAED6F5FCD57CE2E9238BEF8E7FD77250(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_6;
	}

IL_0038:
	{
		int32_t L_7 = ___0_index;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_8 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if ((((int32_t)L_7) > ((int32_t)L_9)))
		{
			goto IL_005e;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_10 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_11 = ___0_index;
		RuntimeObject* L_12 = ___1_keys;
		NullCheck(L_10);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_13;
		L_13 = Node_InsertRange_m0780746D22FD60C16FDA6ABF631C227378F0D431(L_10, L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_1 = L_13;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_14 = V_1;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_15;
		L_15 = Node_MutateLeft_m3E116E19DD8747E0FFF6C5DF72BE083BF6C87FEE(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_0 = L_15;
		goto IL_0082;
	}

IL_005e:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_16 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		int32_t L_17 = ___0_index;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_18 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_19 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		RuntimeObject* L_20 = ___1_keys;
		NullCheck(L_16);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_21;
		L_21 = Node_InsertRange_m0780746D22FD60C16FDA6ABF631C227378F0D431(L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_17, L_19)), 1)), L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_2 = L_21;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_22 = V_2;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_23;
		L_23 = Node_MutateRight_m448EE8322C05DC37D1965A8D1FF67425F95C6E50(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_23;
	}

IL_0082:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_24 = V_0;
		NullCheck(L_24);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_25;
		L_25 = Node_BalanceMany_mB9650DF7469CC65FD9FA0C1F69CCAC7B008F277D(L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_RemoveAt_m8FA29386DA51D548E7D558A82085F134A14760E9_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1);
		s_Il2CppMethodInitialized = true;
	}
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_0 = NULL;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_1 = NULL;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_2 = NULL;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_3 = NULL;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_4 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)G_B3_0, _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, (String_t*)NULL, NULL);
		int32_t L_3 = ___0_index;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_4 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_00d7;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_6 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_6);
		bool L_7;
		L_7 = Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_8 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_8);
		bool L_9;
		L_9 = Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_10 = ((Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)))->___EmptyNode;
		V_0 = L_10;
		goto IL_0121;
	}

IL_0051:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_11 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_11);
		bool L_12;
		L_12 = Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_12)
		{
			goto IL_0077;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_13 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_13);
		bool L_14;
		L_14 = Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (L_14)
		{
			goto IL_0077;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_15 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_0 = L_15;
		goto IL_0121;
	}

IL_0077:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_16 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_16);
		bool L_17;
		L_17 = Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (L_17)
		{
			goto IL_009d;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_18 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_18);
		bool L_19;
		L_19 = Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0(L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_19)
		{
			goto IL_009d;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_20 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_0 = L_20;
		goto IL_0121;
	}

IL_009d:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_21 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_1 = L_21;
		goto IL_00ad;
	}

IL_00a6:
	{
		CHECK_PAUSE_POINT;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_22 = V_1;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_23 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(L_22, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_1 = L_23;
	}

IL_00ad:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_24 = V_1;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_25 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_25);
		bool L_26;
		L_26 = Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0(L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_26)
		{
			goto IL_00a6;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_27 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_27);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_28;
		L_28 = Node_RemoveAt_m8FA29386DA51D548E7D558A82085F134A14760E9(L_27, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_2 = L_28;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_29 = V_1;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_30 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_31 = V_2;
		NullCheck(L_29);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_32;
		L_32 = Node_MutateBoth_m05DDA7ACEECBC06FED0339BBB9628C01264CCEBE(L_29, L_30, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_0 = L_32;
		goto IL_0121;
	}

IL_00d7:
	{
		int32_t L_33 = ___0_index;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_34 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_34, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if ((((int32_t)L_33) >= ((int32_t)L_35)))
		{
			goto IL_00fc;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_36 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_37 = ___0_index;
		NullCheck(L_36);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_38;
		L_38 = Node_RemoveAt_m8FA29386DA51D548E7D558A82085F134A14760E9(L_36, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_3 = L_38;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_39 = V_3;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_40;
		L_40 = Node_MutateLeft_m3E116E19DD8747E0FFF6C5DF72BE083BF6C87FEE(__this, L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_0 = L_40;
		goto IL_0121;
	}

IL_00fc:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_41 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		int32_t L_42 = ___0_index;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_43 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_44 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_43, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_41);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_45;
		L_45 = Node_RemoveAt_m8FA29386DA51D548E7D558A82085F134A14760E9(L_41, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_42, L_44)), 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_4 = L_45;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_46 = V_4;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_47;
		L_47 = Node_MutateRight_m448EE8322C05DC37D1965A8D1FF67425F95C6E50(__this, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_47;
	}

IL_0121:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_48 = V_0;
		NullCheck(L_48);
		bool L_49;
		L_49 = Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0(L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (L_49)
		{
			goto IL_0138;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_50 = V_0;
		NullCheck(L_50);
		bool L_51;
		L_51 = Node_get_IsBalanced_mCB9C6B94AE7B6C401BB42669B961A71F39B945B2(L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		if (L_51)
		{
			goto IL_0138;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_52 = V_0;
		NullCheck(L_52);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_53;
		L_53 = Node_Balance_mAEE6C4E9345D9FE985365B338F871A0C5AE3069A(L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return L_53;
	}

IL_0138:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_54 = V_0;
		return L_54;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_RemoveAll_mD3FC9210F9A2A5F6E0C7CEF39B0B9A4CEC291C0D_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_0 = NULL;
	Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		Requires_NotNull_TisPredicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107_m414E138DF73A4034B85229C26D7A47A7D12D327F(L_0, _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		V_0 = __this;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_1 = V_0;
		Enumerator__ctor_m50B65316571A3AA20961A1C27D89DCB0F2CC66A9((&V_1), L_1, (Builder_tDAEBE5CD087509AC31F7881193393BAA73D29A68*)NULL, (-1), (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0057:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_mBCBADA63919B6721C665E99AE413029CEF04A795((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				V_2 = 0;
				goto IL_004c_1;
			}

IL_001d_1:
			{
				CHECK_PAUSE_POINT;
				Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_2 = ___0_match;
				Enumerator_get_Current_m857C448B191446BCE829AE310CD2D8F6067EAFDD((&V_1), (Il2CppFullySharedGenericAny*)L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				NullCheck(L_2);
				bool L_4;
				L_4 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_inline(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_3: *(void**)L_3), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
				if (!L_4)
				{
					goto IL_0048_1;
				}
			}
			{
				Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_5 = V_0;
				int32_t L_6 = V_2;
				NullCheck(L_5);
				Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_7;
				L_7 = Node_RemoveAt_m8FA29386DA51D548E7D558A82085F134A14760E9(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
				V_0 = L_7;
				Enumerator_Dispose_mBCBADA63919B6721C665E99AE413029CEF04A795((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
				Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_8 = V_0;
				int32_t L_9 = V_2;
				Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B L_10;
				memset((&L_10), 0, sizeof(L_10));
				Enumerator__ctor_m50B65316571A3AA20961A1C27D89DCB0F2CC66A9((&L_10), L_8, (Builder_tDAEBE5CD087509AC31F7881193393BAA73D29A68*)NULL, L_9, (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				V_1 = L_10;
				goto IL_004c_1;
			}

IL_0048_1:
			{
				int32_t L_11 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
			}

IL_004c_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_mA0A83B324C5520BA6117E83C466318A468F5DBD2((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
				if (L_12)
				{
					goto IL_001d_1;
				}
			}
			{
				goto IL_005f;
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

IL_005f:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_13 = V_0;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_ReplaceAt_m267E534B8086316E9F1CA9B5B5CE29DC6F55865B_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_14 = L_6;
	const Il2CppFullySharedGenericAny L_22 = L_6;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_0 = NULL;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_1 = NULL;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)G_B3_0, _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, (String_t*)NULL, NULL);
		int32_t L_3 = ___0_index;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_4 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0033;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___1_value : &___1_value), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_8;
		L_8 = Node_MutateKey_m7D9FDC6E916E6EC9BE1E9F43013AF836CB48368F(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_7, L_6, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F): *(void**)L_6), il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		V_0 = L_8;
		goto IL_007d;
	}

IL_0033:
	{
		int32_t L_9 = ___0_index;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_10 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if ((((int32_t)L_9) >= ((int32_t)L_11)))
		{
			goto IL_0059;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_12 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_13 = ___0_index;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___1_value : &___1_value), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		NullCheck(L_12);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_15;
		L_15 = Node_ReplaceAt_m267E534B8086316E9F1CA9B5B5CE29DC6F55865B(L_12, L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_14: *(void**)L_14), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		V_1 = L_15;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_16 = V_1;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_17;
		L_17 = Node_MutateLeft_m3E116E19DD8747E0FFF6C5DF72BE083BF6C87FEE(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_0 = L_17;
		goto IL_007d;
	}

IL_0059:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_18 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		int32_t L_19 = ___0_index;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_20 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___1_value : &___1_value), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		NullCheck(L_18);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_23;
		L_23 = Node_ReplaceAt_m267E534B8086316E9F1CA9B5B5CE29DC6F55865B(L_18, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_19, L_21)), 1)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_22: *(void**)L_22), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		V_2 = L_23;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_24 = V_2;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_25;
		L_25 = Node_MutateRight_m448EE8322C05DC37D1965A8D1FF67425F95C6E50(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_25;
	}

IL_007d:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_26 = V_0;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Reverse_mD0D09B385B7727B6F4F1369D78BA1A04F46C995A_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0;
		L_0 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_1;
		L_1 = Node_Reverse_mC72BA9DEA10469DB42DD36C122BDD9BD1D5D9853(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Reverse_mC72BA9DEA10469DB42DD36C122BDD9BD1D5D9853_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	memset(V_3, 0, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	memset(V_4, 0, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_0) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, (String_t*)NULL, NULL);
		int32_t L_1 = ___1_count;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, (String_t*)NULL, NULL);
		int32_t L_2 = ___0_index;
		int32_t L_3 = ___1_count;
		int32_t L_4;
		L_4 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3))) > ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, (String_t*)NULL, NULL);
		V_0 = __this;
		int32_t L_5 = ___0_index;
		V_1 = L_5;
		int32_t L_6 = ___0_index;
		int32_t L_7 = ___1_count;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_6, L_7)), 1));
		goto IL_007d;
	}

IL_0049:
	{
		CHECK_PAUSE_POINT;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		Il2CppFullySharedGenericAny* L_10;
		L_10 = Node_ItemRef_m11091F398CE2B8C32BF1278C29033D3A0ABAA5E7(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		il2cpp_codegen_memcpy(L_11, L_10, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		il2cpp_codegen_memcpy(V_3, L_11, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Il2CppFullySharedGenericAny* L_14;
		L_14 = Node_ItemRef_m11091F398CE2B8C32BF1278C29033D3A0ABAA5E7(L_12, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		il2cpp_codegen_memcpy(L_15, L_14, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		il2cpp_codegen_memcpy(V_4, L_15, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_16 = V_0;
		int32_t L_17 = V_2;
		il2cpp_codegen_memcpy(L_18, V_3, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		NullCheck(L_16);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_19;
		L_19 = Node_ReplaceAt_m267E534B8086316E9F1CA9B5B5CE29DC6F55865B(L_16, L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_18: *(void**)L_18), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		int32_t L_20 = V_1;
		il2cpp_codegen_memcpy(L_21, V_4, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		NullCheck(L_19);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_22;
		L_22 = Node_ReplaceAt_m267E534B8086316E9F1CA9B5B5CE29DC6F55865B(L_19, L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_21: *(void**)L_21), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		V_0 = L_22;
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
	}

IL_007d:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = V_2;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0049;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_27 = V_0;
		return L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Sort_mFBB4987C8F3F3D845D68D7227B47EB4D9B34527A_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_1;
		L_1 = Node_Sort_m7BDDF067863D1202C46313B69F1D809796E3812A(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Sort_m6A9DE1F9FD7F2DEB1B5895DEE32B244297F09F23_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* ___0_comparison, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE79E0ED75285085B891F475FE68B37575CE1220);
		s_Il2CppMethodInitialized = true;
	}
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* L_0 = ___0_comparison;
		Requires_NotNull_TisComparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49_m198A633C3E7D3F4C12E7FC0B141FEDC35F87A85C(L_0, _stringLiteralEE79E0ED75285085B891F475FE68B37575CE1220, il2cpp_rgctx_method(method->klass->rgctx_data, 68));
		int32_t L_1;
		L_1 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 69), (uint32_t)L_1);
		V_0 = L_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_0;
		Node_CopyTo_m08961681464FA59D148C7D9403532F8997E34E99(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 70));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* L_5 = ___0_comparison;
		Array_Sort_TisIl2CppFullySharedGenericAny_m699F81165178B5E96D2D406ABB12F9382F8255E4(L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 72));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = ImmutableExtensions_AsOrderedCollection_TisIl2CppFullySharedGenericAny_mAD04AE315D604F57729B36E71A338249CF556C96((RuntimeObject*)L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 73));
		int32_t L_8;
		L_8 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_9;
		L_9 = Node_NodeTreeFromList_mEC0031D8EBFDC8DEBC2085F9F91330143748A824(L_7, 0, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Sort_m7BDDF067863D1202C46313B69F1D809796E3812A_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0;
		L_0 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		RuntimeObject* L_1 = ___0_comparer;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_2;
		L_2 = Node_Sort_mDC3106CBE2C5E65E9B370A76B70F9A4AB92FB8BB(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 75));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Sort_mDC3106CBE2C5E65E9B370A76B70F9A4AB92FB8BB_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1);
		s_Il2CppMethodInitialized = true;
	}
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_0) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, (String_t*)NULL, NULL);
		int32_t L_1 = ___1_count;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, (String_t*)NULL, NULL);
		int32_t L_2 = ___0_index;
		int32_t L_3 = ___1_count;
		int32_t L_4;
		L_4 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Requires_Argument_mC0D17F52DC37FD36EA0C45C7464CD2965FFF6277((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3))) > ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_5;
		L_5 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 69), (uint32_t)L_5);
		V_0 = L_6;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		Node_CopyTo_m08961681464FA59D148C7D9403532F8997E34E99(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 70));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_0;
		int32_t L_9 = ___0_index;
		int32_t L_10 = ___1_count;
		RuntimeObject* L_11 = ___2_comparer;
		Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 76));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_0;
		RuntimeObject* L_13;
		L_13 = ImmutableExtensions_AsOrderedCollection_TisIl2CppFullySharedGenericAny_mAD04AE315D604F57729B36E71A338249CF556C96((RuntimeObject*)L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 73));
		int32_t L_14;
		L_14 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_15;
		L_15 = Node_NodeTreeFromList_mEC0031D8EBFDC8DEBC2085F9F91330143748A824(L_13, 0, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_BinarySearch_m269D432407A136D2BFE6AA8A3127B6C4C0A130CE_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, int32_t ___1_count, Il2CppFullySharedGenericAny ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_24 = L_15;
	const Il2CppFullySharedGenericAny L_34 = L_15;
	const Il2CppFullySharedGenericAny L_46 = L_15;
	const Il2CppFullySharedGenericAny L_61 = L_15;
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B17_0 = 0;
	{
		int32_t L_0 = ___0_index;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_0) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, (String_t*)NULL, NULL);
		int32_t L_1 = ___1_count;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, (String_t*)NULL, NULL);
		RuntimeObject* L_2 = ___3_comparer;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_3;
		L_3 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		___3_comparer = (RuntimeObject*)L_3;
	}

IL_002f:
	{
		bool L_4;
		L_4 = Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_003e;
		}
	}

IL_003b:
	{
		int32_t L_6 = ___0_index;
		return ((~L_6));
	}

IL_003e:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_7 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_8;
		int32_t L_9 = ___0_index;
		int32_t L_10 = ___1_count;
		int32_t L_11 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, L_10))) > ((int32_t)L_11)))
		{
			goto IL_0061;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_12 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_13 = ___0_index;
		int32_t L_14 = ___1_count;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___2_item : &___2_item), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		RuntimeObject* L_16 = ___3_comparer;
		NullCheck(L_12);
		int32_t L_17;
		L_17 = Node_BinarySearch_m269D432407A136D2BFE6AA8A3127B6C4C0A130CE(L_12, L_13, L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_15: *(void**)L_15), L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 77));
		return L_17;
	}

IL_0061:
	{
		int32_t L_18 = ___0_index;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) <= ((int32_t)L_19)))
		{
			goto IL_008a;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_20 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		int32_t L_21 = ___0_index;
		int32_t L_22 = V_0;
		int32_t L_23 = ___1_count;
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___2_item : &___2_item), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		RuntimeObject* L_25 = ___3_comparer;
		NullCheck(L_20);
		int32_t L_26;
		L_26 = Node_BinarySearch_m269D432407A136D2BFE6AA8A3127B6C4C0A130CE(L_20, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_21, L_22)), 1)), L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_24: *(void**)L_24), L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 77));
		V_2 = L_26;
		int32_t L_27 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_29 = V_2;
		int32_t L_30 = V_3;
		return ((int32_t)il2cpp_codegen_add(L_29, L_30));
	}

IL_0086:
	{
		int32_t L_31 = V_2;
		int32_t L_32 = V_3;
		return ((int32_t)il2cpp_codegen_subtract(L_31, L_32));
	}

IL_008a:
	{
		RuntimeObject* L_33 = ___3_comparer;
		il2cpp_codegen_memcpy(L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___2_item : &___2_item), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		il2cpp_codegen_memcpy(L_35, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		NullCheck(L_33);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 66), L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_34: *(void**)L_34), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_35: *(void**)L_35));
		V_1 = L_36;
		int32_t L_37 = V_1;
		if (L_37)
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_38 = V_0;
		return L_38;
	}

IL_009e:
	{
		int32_t L_39 = V_1;
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_40 = ___1_count;
		int32_t L_41 = V_0;
		int32_t L_42 = ___0_index;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_40, ((int32_t)il2cpp_codegen_subtract(L_41, L_42)))), 1));
		int32_t L_43 = V_4;
		if ((((int32_t)L_43) < ((int32_t)0)))
		{
			goto IL_00c3;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_44 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		int32_t L_45 = V_4;
		il2cpp_codegen_memcpy(L_46, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___2_item : &___2_item), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		RuntimeObject* L_47 = ___3_comparer;
		NullCheck(L_44);
		int32_t L_48;
		L_48 = Node_BinarySearch_m269D432407A136D2BFE6AA8A3127B6C4C0A130CE(L_44, 0, L_45, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_46: *(void**)L_46), L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 77));
		G_B17_0 = L_48;
		goto IL_00c4;
	}

IL_00c3:
	{
		G_B17_0 = (-1);
	}

IL_00c4:
	{
		V_5 = G_B17_0;
		int32_t L_49 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = V_5;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_51 = V_5;
		int32_t L_52 = V_6;
		return ((int32_t)il2cpp_codegen_add(L_51, L_52));
	}

IL_00d6:
	{
		int32_t L_53 = V_5;
		int32_t L_54 = V_6;
		return ((int32_t)il2cpp_codegen_subtract(L_53, L_54));
	}

IL_00dc:
	{
		int32_t L_55 = ___0_index;
		int32_t L_56 = V_0;
		if ((!(((uint32_t)L_55) == ((uint32_t)L_56))))
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_57 = ___0_index;
		return ((~L_57));
	}

IL_00e3:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_58 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_59 = ___0_index;
		int32_t L_60 = ___1_count;
		il2cpp_codegen_memcpy(L_61, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___2_item : &___2_item), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		RuntimeObject* L_62 = ___3_comparer;
		NullCheck(L_58);
		int32_t L_63;
		L_63 = Node_BinarySearch_m269D432407A136D2BFE6AA8A3127B6C4C0A130CE(L_58, L_59, L_60, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_61: *(void**)L_61), L_62, il2cpp_rgctx_method(method->klass->rgctx_data, 77));
		V_7 = L_63;
		int32_t L_64 = V_7;
		return L_64;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_IndexOf_mF95AEF85F79B14B78D0C6EE7B90844127D9B003C_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Il2CppFullySharedGenericAny ___0_item, RuntimeObject* ___1_equalityComparer, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_item : &___0_item), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		int32_t L_1;
		L_1 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		RuntimeObject* L_2 = ___1_equalityComparer;
		int32_t L_4;
		L_4 = Node_IndexOf_m0B728BF7E2057365EE3FA5A57F705755AF3BD34D(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_3, L_0, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F): *(void**)L_0), 0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_Contains_m1C8B1E1D9391FCA81796DCF668684EFE985ED288_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Il2CppFullySharedGenericAny ___0_item, RuntimeObject* ___1_equalityComparer, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_item : &___0_item), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		RuntimeObject* L_1 = ___1_equalityComparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		bool L_3;
		L_3 = Node_Contains_m3C2DA577739605C40593D2B9FB0FBD5C451CDFDC(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_2, L_0, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F): *(void**)L_0), L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 81));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_IndexOf_m0B728BF7E2057365EE3FA5A57F705755AF3BD34D_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Il2CppFullySharedGenericAny ___0_item, int32_t ___1_index, int32_t ___2_count, RuntimeObject* ___3_equalityComparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___1_index;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_0) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, (String_t*)NULL, NULL);
		int32_t L_1 = ___2_count;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, (String_t*)NULL, NULL);
		int32_t L_2 = ___2_count;
		int32_t L_3;
		L_3 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, (String_t*)NULL, NULL);
		int32_t L_4 = ___1_index;
		int32_t L_5 = ___2_count;
		int32_t L_6;
		L_6 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) > ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, (String_t*)NULL, NULL);
		RuntimeObject* L_7 = ___3_equalityComparer;
		if (L_7)
		{
			goto IL_005f;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_8;
		L_8 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 82));
		___3_equalityComparer = (RuntimeObject*)L_8;
	}

IL_005f:
	{
		int32_t L_9 = ___1_index;
		int32_t L_10 = ___2_count;
		Enumerator__ctor_m50B65316571A3AA20961A1C27D89DCB0F2CC66A9((&V_0), __this, (Builder_tDAEBE5CD087509AC31F7881193393BAA73D29A68*)NULL, L_9, L_10, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0092:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_mBCBADA63919B6721C665E99AE413029CEF04A795((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0087_1;
			}

IL_006d_1:
			{
				CHECK_PAUSE_POINT;
				RuntimeObject* L_11 = ___3_equalityComparer;
				il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_item : &___0_item), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				Enumerator_get_Current_m857C448B191446BCE829AE310CD2D8F6067EAFDD((&V_0), (Il2CppFullySharedGenericAny*)L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				NullCheck(L_11);
				bool L_14;
				L_14 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 79), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_12: *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_13: *(void**)L_13));
				if (!L_14)
				{
					goto IL_0082_1;
				}
			}
			{
				int32_t L_15 = ___1_index;
				V_1 = L_15;
				goto IL_00a2;
			}

IL_0082_1:
			{
				int32_t L_16 = ___1_index;
				___1_index = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_0087_1:
			{
				bool L_17;
				L_17 = Enumerator_MoveNext_mA0A83B324C5520BA6117E83C466318A468F5DBD2((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
				if (L_17)
				{
					goto IL_006d_1;
				}
			}
			{
				goto IL_00a0;
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

IL_00a0:
	{
		return (-1);
	}

IL_00a2:
	{
		int32_t L_18 = V_1;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_LastIndexOf_m4C8BA9E899B711FB88505457BBCF597E5AB78F3D_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Il2CppFullySharedGenericAny ___0_item, int32_t ___1_index, int32_t ___2_count, RuntimeObject* ___3_equalityComparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_index;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_0) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, (String_t*)NULL, NULL);
		int32_t L_1 = ___2_count;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_count;
		int32_t L_3;
		L_3 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		G_B3_0 = ((((int32_t)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)G_B3_0, _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, (String_t*)NULL, NULL);
		int32_t L_4 = ___1_index;
		int32_t L_5 = ___2_count;
		Requires_Argument_mC0D17F52DC37FD36EA0C45C7464CD2965FFF6277((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_4, L_5)), 1))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		RuntimeObject* L_6 = ___3_equalityComparer;
		if (L_6)
		{
			goto IL_004b;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_7;
		L_7 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 82));
		___3_equalityComparer = (RuntimeObject*)L_7;
	}

IL_004b:
	{
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_count;
		Enumerator__ctor_m50B65316571A3AA20961A1C27D89DCB0F2CC66A9((&V_0), __this, (Builder_tDAEBE5CD087509AC31F7881193393BAA73D29A68*)NULL, L_8, L_9, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007e:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_mBCBADA63919B6721C665E99AE413029CEF04A795((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0073_1;
			}

IL_0059_1:
			{
				CHECK_PAUSE_POINT;
				RuntimeObject* L_10 = ___3_equalityComparer;
				il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_item : &___0_item), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				Enumerator_get_Current_m857C448B191446BCE829AE310CD2D8F6067EAFDD((&V_0), (Il2CppFullySharedGenericAny*)L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				NullCheck(L_10);
				bool L_13;
				L_13 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 79), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_12: *(void**)L_12));
				if (!L_13)
				{
					goto IL_006e_1;
				}
			}
			{
				int32_t L_14 = ___1_index;
				V_1 = L_14;
				goto IL_008e;
			}

IL_006e_1:
			{
				int32_t L_15 = ___1_index;
				___1_index = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
			}

IL_0073_1:
			{
				bool L_16;
				L_16 = Enumerator_MoveNext_mA0A83B324C5520BA6117E83C466318A468F5DBD2((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
				if (L_16)
				{
					goto IL_0059_1;
				}
			}
			{
				goto IL_008c;
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

IL_008c:
	{
		return (-1);
	}

IL_008e:
	{
		int32_t L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_CopyTo_m08961681464FA59D148C7D9403532F8997E34E99_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	int32_t V_0 = 0;
	Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	memset(V_2, 0, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Requires_NotNull_Tis__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC_m1421C199B92AD40E998F3A77B033BF2EDA715532(L_0, _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED, il2cpp_rgctx_method(method->klass->rgctx_data, 87));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		int32_t L_3;
		L_3 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED, (String_t*)NULL, NULL);
		V_0 = 0;
		Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B L_4;
		L_4 = Node_GetEnumerator_mB39C975A4691C8F66AFCBA3754EA1BEB55681AA9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_mBCBADA63919B6721C665E99AE413029CEF04A795((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0043_1;
			}

IL_002f_1:
			{
				CHECK_PAUSE_POINT;
				Enumerator_get_Current_m857C448B191446BCE829AE310CD2D8F6067EAFDD((&V_1), (Il2CppFullySharedGenericAny*)L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				il2cpp_codegen_memcpy(V_2, L_5, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_array;
				int32_t L_7 = V_0;
				int32_t L_8 = L_7;
				V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
				il2cpp_codegen_memcpy(L_9, V_2, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				NullCheck(L_6);
				il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), L_9, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), (void*)L_9);
			}

IL_0043_1:
			{
				bool L_10;
				L_10 = Enumerator_MoveNext_mA0A83B324C5520BA6117E83C466318A468F5DBD2((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
				if (L_10)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_005c;
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

IL_005c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_CopyTo_m4F86D2433F7FA03E0BDDD57F214D09D743CB4C78_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	memset(V_1, 0, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Requires_NotNull_Tis__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC_m1421C199B92AD40E998F3A77B033BF2EDA715532(L_0, _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED, il2cpp_rgctx_method(method->klass->rgctx_data, 87));
		int32_t L_1 = ___1_arrayIndex;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4, (String_t*)NULL, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		int32_t L_4 = ___1_arrayIndex;
		int32_t L_5;
		L_5 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_3) < ((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4, (String_t*)NULL, NULL);
		Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B L_6;
		L_6 = Node_GetEnumerator_mB39C975A4691C8F66AFCBA3754EA1BEB55681AA9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_mBCBADA63919B6721C665E99AE413029CEF04A795((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0056_1;
			}

IL_0041_1:
			{
				CHECK_PAUSE_POINT;
				Enumerator_get_Current_m857C448B191446BCE829AE310CD2D8F6067EAFDD((&V_0), (Il2CppFullySharedGenericAny*)L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				il2cpp_codegen_memcpy(V_1, L_7, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
				int32_t L_9 = ___1_arrayIndex;
				int32_t L_10 = L_9;
				___1_arrayIndex = ((int32_t)il2cpp_codegen_add(L_10, 1));
				il2cpp_codegen_memcpy(L_11, V_1, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				NullCheck(L_8);
				il2cpp_codegen_memcpy((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), L_11, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), (void**)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), (void*)L_11);
			}

IL_0056_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_mA0A83B324C5520BA6117E83C466318A468F5DBD2((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
				if (L_12)
				{
					goto IL_0041_1;
				}
			}
			{
				goto IL_006f;
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

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_CopyTo_m1BC58B615CCF311F772C3739EBB4E05EB007D758_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_index, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_array, int32_t ___2_arrayIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___1_array;
		Requires_NotNull_Tis__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC_m1421C199B92AD40E998F3A77B033BF2EDA715532(L_0, _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED, il2cpp_rgctx_method(method->klass->rgctx_data, 87));
		int32_t L_1 = ___0_index;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, (String_t*)NULL, NULL);
		int32_t L_2 = ___3_count;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, (String_t*)NULL, NULL);
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___3_count;
		int32_t L_5;
		L_5 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) > ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, (String_t*)NULL, NULL);
		int32_t L_6 = ___2_arrayIndex;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_6) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4, (String_t*)NULL, NULL);
		int32_t L_7 = ___2_arrayIndex;
		int32_t L_8 = ___3_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___1_array;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8))) > ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4, (String_t*)NULL, NULL);
		int32_t L_11 = ___0_index;
		int32_t L_12 = ___3_count;
		Enumerator__ctor_m50B65316571A3AA20961A1C27D89DCB0F2CC66A9((&V_0), __this, (Builder_tDAEBE5CD087509AC31F7881193393BAA73D29A68*)NULL, L_11, L_12, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_mBCBADA63919B6721C665E99AE413029CEF04A795((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0095_1;
			}

IL_0082_1:
			{
				CHECK_PAUSE_POINT;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___1_array;
				int32_t L_14 = ___2_arrayIndex;
				int32_t L_15 = L_14;
				___2_arrayIndex = ((int32_t)il2cpp_codegen_add(L_15, 1));
				Enumerator_get_Current_m857C448B191446BCE829AE310CD2D8F6067EAFDD((&V_0), (Il2CppFullySharedGenericAny*)L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				NullCheck(L_13);
				il2cpp_codegen_memcpy((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), L_16, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), (void**)(L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), (void*)L_16);
			}

IL_0095_1:
			{
				bool L_17;
				L_17 = Enumerator_MoveNext_mA0A83B324C5520BA6117E83C466318A468F5DBD2((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
				if (L_17)
				{
					goto IL_0082_1;
				}
			}
			{
				goto IL_00ae;
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

IL_00ae:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_CopyTo_m02EB8CF8531C786CBA4668A097AB2BED8290697B_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Requires_NotNull_TisRuntimeArray_mEA688B1EA5C572D7FC545A7E12223DA6C4C902D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	memset(V_1, 0, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeArray* L_0 = ___0_array;
		Requires_NotNull_TisRuntimeArray_mEA688B1EA5C572D7FC545A7E12223DA6C4C902D5(L_0, _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED, Requires_NotNull_TisRuntimeArray_mEA688B1EA5C572D7FC545A7E12223DA6C4C902D5_RuntimeMethod_var);
		int32_t L_1 = ___1_arrayIndex;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4, (String_t*)NULL, NULL);
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_length(L_2);
		int32_t L_4 = ___1_arrayIndex;
		int32_t L_5;
		L_5 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_3) < ((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4, (String_t*)NULL, NULL);
		Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B L_6;
		L_6 = Node_GetEnumerator_mB39C975A4691C8F66AFCBA3754EA1BEB55681AA9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0069:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_mBCBADA63919B6721C665E99AE413029CEF04A795((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_005e_1;
			}

IL_0044_1:
			{
				CHECK_PAUSE_POINT;
				Enumerator_get_Current_m857C448B191446BCE829AE310CD2D8F6067EAFDD((&V_0), (Il2CppFullySharedGenericAny*)L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				il2cpp_codegen_memcpy(V_1, L_7, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				RuntimeArray* L_8 = ___0_array;
				il2cpp_codegen_memcpy(L_9, V_1, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_9);
				int32_t L_11 = ___1_arrayIndex;
				int32_t L_12 = L_11;
				___1_arrayIndex = ((int32_t)il2cpp_codegen_add(L_12, 1));
				NullCheck(L_8);
				Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_8, L_10, L_12, NULL);
			}

IL_005e_1:
			{
				bool L_13;
				L_13 = Enumerator_MoveNext_mA0A83B324C5520BA6117E83C466318A468F5DBD2((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
				if (L_13)
				{
					goto IL_0044_1;
				}
			}
			{
				goto IL_0077;
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

IL_0077:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_TrueForAll_m33CF72BD57E4F03B158CF512D40B9DBFDD62EF93_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	memset(V_1, 0, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	bool V_2 = false;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		Requires_NotNull_TisPredicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107_m414E138DF73A4034B85229C26D7A47A7D12D327F(L_0, _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B L_1;
		L_1 = Node_GetEnumerator_mB39C975A4691C8F66AFCBA3754EA1BEB55681AA9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_mBCBADA63919B6721C665E99AE413029CEF04A795((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0029_1;
			}

IL_0014_1:
			{
				CHECK_PAUSE_POINT;
				Enumerator_get_Current_m857C448B191446BCE829AE310CD2D8F6067EAFDD((&V_0), (Il2CppFullySharedGenericAny*)L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				il2cpp_codegen_memcpy(V_1, L_2, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_3 = ___0_match;
				il2cpp_codegen_memcpy(L_4, V_1, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				NullCheck(L_3);
				bool L_5;
				L_5 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_inline(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_4: *(void**)L_4), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
				if (L_5)
				{
					goto IL_0029_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0044;
			}

IL_0029_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_mA0A83B324C5520BA6117E83C466318A468F5DBD2((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
				if (L_6)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0042;
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

IL_0042:
	{
		return (bool)1;
	}

IL_0044:
	{
		bool L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_Exists_mC7D17442BDAED4D4C617EAAAA48E925245986BFA_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	memset(V_1, 0, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	bool V_2 = false;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		Requires_NotNull_TisPredicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107_m414E138DF73A4034B85229C26D7A47A7D12D327F(L_0, _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B L_1;
		L_1 = Node_GetEnumerator_mB39C975A4691C8F66AFCBA3754EA1BEB55681AA9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_mBCBADA63919B6721C665E99AE413029CEF04A795((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0029_1;
			}

IL_0014_1:
			{
				CHECK_PAUSE_POINT;
				Enumerator_get_Current_m857C448B191446BCE829AE310CD2D8F6067EAFDD((&V_0), (Il2CppFullySharedGenericAny*)L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				il2cpp_codegen_memcpy(V_1, L_2, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_3 = ___0_match;
				il2cpp_codegen_memcpy(L_4, V_1, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				NullCheck(L_3);
				bool L_5;
				L_5 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_inline(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_4: *(void**)L_4), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
				if (!L_5)
				{
					goto IL_0029_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0044;
			}

IL_0029_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_mA0A83B324C5520BA6117E83C466318A468F5DBD2((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
				if (L_6)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0042;
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

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		bool L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Find_m99298379831DB6C71AA6A63381BAA475B24394EA_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_6 = L_2;
	const Il2CppFullySharedGenericAny L_8 = L_2;
	const Il2CppFullySharedGenericAny L_9 = L_2;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	memset(V_1, 0, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	memset(V_2, 0, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	memset(V_3, 0, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		Requires_NotNull_TisPredicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107_m414E138DF73A4034B85229C26D7A47A7D12D327F(L_0, _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B L_1;
		L_1 = Node_GetEnumerator_mB39C975A4691C8F66AFCBA3754EA1BEB55681AA9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_mBCBADA63919B6721C665E99AE413029CEF04A795((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0029_1;
			}

IL_0014_1:
			{
				CHECK_PAUSE_POINT;
				Enumerator_get_Current_m857C448B191446BCE829AE310CD2D8F6067EAFDD((&V_0), (Il2CppFullySharedGenericAny*)L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				il2cpp_codegen_memcpy(V_1, L_2, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_3 = ___0_match;
				il2cpp_codegen_memcpy(L_4, V_1, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				NullCheck(L_3);
				bool L_5;
				L_5 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_inline(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_4: *(void**)L_4), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
				if (!L_5)
				{
					goto IL_0029_1;
				}
			}
			{
				il2cpp_codegen_memcpy(L_6, V_1, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				il2cpp_codegen_memcpy(V_2, L_6, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				goto IL_004c;
			}

IL_0029_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_mA0A83B324C5520BA6117E83C466318A468F5DBD2((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
				if (L_7)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0042;
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

IL_0042:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		il2cpp_codegen_memcpy(L_8, V_3, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		return;
	}

IL_004c:
	{
		il2cpp_codegen_memcpy(L_9, V_2, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4* Node_FindAll_m6BF363A411F8187D9336FA7876673F6AEB2FE8C2_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_11 = L_4;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_0 = NULL;
	Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	memset(V_2, 0, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		Requires_NotNull_TisPredicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107_m414E138DF73A4034B85229C26D7A47A7D12D327F(L_0, _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		bool L_1;
		L_1 = Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 89));
		ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4* L_2 = ((ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 89)))->___Empty;
		return L_2;
	}

IL_0019:
	{
		V_0 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)NULL;
		Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B L_3;
		L_3 = Node_GetEnumerator_mB39C975A4691C8F66AFCBA3754EA1BEB55681AA9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_mBCBADA63919B6721C665E99AE413029CEF04A795((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0045_1;
			}

IL_0024_1:
			{
				CHECK_PAUSE_POINT;
				Enumerator_get_Current_m857C448B191446BCE829AE310CD2D8F6067EAFDD((&V_1), (Il2CppFullySharedGenericAny*)L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				il2cpp_codegen_memcpy(V_2, L_4, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_5 = ___0_match;
				il2cpp_codegen_memcpy(L_6, V_2, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				NullCheck(L_5);
				bool L_7;
				L_7 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_inline(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_6: *(void**)L_6), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
				if (!L_7)
				{
					goto IL_0045_1;
				}
			}
			{
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_8 = V_0;
				if (L_8)
				{
					goto IL_003e_1;
				}
			}
			{
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_9 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 90));
				List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 91));
				V_0 = L_9;
			}

IL_003e_1:
			{
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_10 = V_0;
				il2cpp_codegen_memcpy(L_11, V_2, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				NullCheck(L_10);
				List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_inline(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_11: *(void**)L_11), il2cpp_rgctx_method(method->klass->rgctx_data, 92));
			}

IL_0045_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_mA0A83B324C5520BA6117E83C466318A468F5DBD2((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
				if (L_12)
				{
					goto IL_0024_1;
				}
			}
			{
				goto IL_005e;
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

IL_005e:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_13 = V_0;
		if (L_13)
		{
			goto IL_0067;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 89));
		ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4* L_14 = ((ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 89)))->___Empty;
		return L_14;
	}

IL_0067:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_15 = V_0;
		ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4* L_16;
		L_16 = ImmutableList_CreateRange_TisIl2CppFullySharedGenericAny_m5C3780410E687AD7D5EBCD5EC166632172F0DC60((RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 93));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_FindIndex_m2A38C4D4DBD5214F7C1BB0EE5DEF397D47580DED_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		Requires_NotNull_TisPredicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107_m414E138DF73A4034B85229C26D7A47A7D12D327F(L_0, _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_2 = ___0_match;
		int32_t L_3;
		L_3 = Node_FindIndex_m46C36BB9A22B238E6EDC949E9448BE5F611B8B6A(__this, 0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 95));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_FindIndex_m64548108698C8C9801EB2911818587E5407FE5CB_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_startIndex, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___1_match, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B3_0 = 0;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___1_match;
		Requires_NotNull_TisPredicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107_m414E138DF73A4034B85229C26D7A47A7D12D327F(L_0, _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		int32_t L_1 = ___0_startIndex;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_startIndex;
		int32_t L_3;
		L_3 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		G_B3_0 = ((((int32_t)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)G_B3_0, _stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34, (String_t*)NULL, NULL);
		int32_t L_4 = ___0_startIndex;
		int32_t L_5;
		L_5 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_6 = ___0_startIndex;
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_7 = ___1_match;
		int32_t L_8;
		L_8 = Node_FindIndex_m46C36BB9A22B238E6EDC949E9448BE5F611B8B6A(__this, L_4, ((int32_t)il2cpp_codegen_subtract(L_5, L_6)), L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 95));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_FindIndex_m46C36BB9A22B238E6EDC949E9448BE5F611B8B6A_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___2_match, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___2_match;
		Requires_NotNull_TisPredicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107_m414E138DF73A4034B85229C26D7A47A7D12D327F(L_0, _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		int32_t L_1 = ___0_startIndex;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34, (String_t*)NULL, NULL);
		int32_t L_2 = ___1_count;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, (String_t*)NULL, NULL);
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = ___1_count;
		int32_t L_5;
		L_5 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) > ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, (String_t*)NULL, NULL);
		int32_t L_6 = ___0_startIndex;
		int32_t L_7 = ___1_count;
		Enumerator__ctor_m50B65316571A3AA20961A1C27D89DCB0F2CC66A9((&V_0), __this, (Builder_tDAEBE5CD087509AC31F7881193393BAA73D29A68*)NULL, L_6, L_7, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_mBCBADA63919B6721C665E99AE413029CEF04A795((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				int32_t L_8 = ___0_startIndex;
				V_1 = L_8;
				goto IL_006f_1;
			}

IL_0058_1:
			{
				CHECK_PAUSE_POINT;
				Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_9 = ___2_match;
				Enumerator_get_Current_m857C448B191446BCE829AE310CD2D8F6067EAFDD((&V_0), (Il2CppFullySharedGenericAny*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				NullCheck(L_9);
				bool L_11;
				L_11 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_inline(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_10: *(void**)L_10), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
				if (!L_11)
				{
					goto IL_006b_1;
				}
			}
			{
				int32_t L_12 = V_1;
				V_2 = L_12;
				goto IL_008a;
			}

IL_006b_1:
			{
				int32_t L_13 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_006f_1:
			{
				bool L_14;
				L_14 = Enumerator_MoveNext_mA0A83B324C5520BA6117E83C466318A468F5DBD2((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
				if (L_14)
				{
					goto IL_0058_1;
				}
			}
			{
				goto IL_0088;
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

IL_0088:
	{
		return (-1);
	}

IL_008a:
	{
		int32_t L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_FindLast_mB01EFD06100F22647CF48FA0A7FF780281D33E2A_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	const Il2CppFullySharedGenericAny L_6 = L_2;
	const Il2CppFullySharedGenericAny L_7 = L_2;
	Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	memset(V_1, 0, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	memset(V_2, 0, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		Requires_NotNull_TisPredicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107_m414E138DF73A4034B85229C26D7A47A7D12D327F(L_0, _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		Enumerator__ctor_m50B65316571A3AA20961A1C27D89DCB0F2CC66A9((&V_0), __this, (Builder_tDAEBE5CD087509AC31F7881193393BAA73D29A68*)NULL, (-1), (-1), (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_mBCBADA63919B6721C665E99AE413029CEF04A795((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0032_1;
			}

IL_0019_1:
			{
				CHECK_PAUSE_POINT;
				Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_1 = ___0_match;
				Enumerator_get_Current_m857C448B191446BCE829AE310CD2D8F6067EAFDD((&V_0), (Il2CppFullySharedGenericAny*)L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				NullCheck(L_1);
				bool L_3;
				L_3 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_inline(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_2: *(void**)L_2), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
				if (!L_3)
				{
					goto IL_0032_1;
				}
			}
			{
				Enumerator_get_Current_m857C448B191446BCE829AE310CD2D8F6067EAFDD((&V_0), (Il2CppFullySharedGenericAny*)L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				il2cpp_codegen_memcpy(V_1, L_4, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
				goto IL_0055;
			}

IL_0032_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_mA0A83B324C5520BA6117E83C466318A468F5DBD2((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
				if (L_5)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_004b;
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

IL_004b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		il2cpp_codegen_memcpy(L_6, V_2, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		return;
	}

IL_0055:
	{
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_FindLastIndex_mF88D9C5F517C8E655F54BB6B4EDD4B896117279B_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		Requires_NotNull_TisPredicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107_m414E138DF73A4034B85229C26D7A47A7D12D327F(L_0, _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		bool L_1;
		L_1 = Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_2;
		L_2 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_3;
		L_3 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_4 = ___0_match;
		int32_t L_5;
		L_5 = Node_FindLastIndex_mE3D03C3831EB08F20EE0839E8D648B2FF2D6125E(__this, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 96));
		return L_5;
	}

IL_0029:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_FindLastIndex_m6291163662AF95DB00BE00B646B35A05AACA8B07_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_startIndex, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___1_match, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B3_0 = 0;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___1_match;
		Requires_NotNull_TisPredicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107_m414E138DF73A4034B85229C26D7A47A7D12D327F(L_0, _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		int32_t L_1 = ___0_startIndex;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34, (String_t*)NULL, NULL);
		int32_t L_2 = ___0_startIndex;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4;
		L_4 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		G_B3_0 = ((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = 1;
	}

IL_002c:
	{
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)G_B3_0, _stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34, (String_t*)NULL, NULL);
		bool L_5;
		L_5 = Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_6 = ___0_startIndex;
		int32_t L_7 = ___0_startIndex;
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_8 = ___1_match;
		int32_t L_9;
		L_9 = Node_FindLastIndex_mE3D03C3831EB08F20EE0839E8D648B2FF2D6125E(__this, L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 96));
		return L_9;
	}

IL_004b:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_FindLastIndex_mE3D03C3831EB08F20EE0839E8D648B2FF2D6125E_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___2_match, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	Enumerator_t83384B65FC16820A8869833D863CFEFC1A3C240B V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___2_match;
		Requires_NotNull_TisPredicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107_m414E138DF73A4034B85229C26D7A47A7D12D327F(L_0, _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		int32_t L_1 = ___0_startIndex;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34, (String_t*)NULL, NULL);
		int32_t L_2 = ___1_count;
		int32_t L_3;
		L_3 = Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, (String_t*)NULL, NULL);
		int32_t L_4 = ___0_startIndex;
		int32_t L_5 = ___1_count;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_4, L_5)), 1))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34, (String_t*)NULL, NULL);
		int32_t L_6 = ___0_startIndex;
		int32_t L_7 = ___1_count;
		Enumerator__ctor_m50B65316571A3AA20961A1C27D89DCB0F2CC66A9((&V_0), __this, (Builder_tDAEBE5CD087509AC31F7881193393BAA73D29A68*)NULL, L_6, L_7, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007c:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_mBCBADA63919B6721C665E99AE413029CEF04A795((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				int32_t L_8 = ___0_startIndex;
				V_1 = L_8;
				goto IL_0071_1;
			}

IL_005a_1:
			{
				CHECK_PAUSE_POINT;
				Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_9 = ___2_match;
				Enumerator_get_Current_m857C448B191446BCE829AE310CD2D8F6067EAFDD((&V_0), (Il2CppFullySharedGenericAny*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				NullCheck(L_9);
				bool L_11;
				L_11 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_inline(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_10: *(void**)L_10), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
				if (!L_11)
				{
					goto IL_006d_1;
				}
			}
			{
				int32_t L_12 = V_1;
				V_2 = L_12;
				goto IL_008c;
			}

IL_006d_1:
			{
				int32_t L_13 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
			}

IL_0071_1:
			{
				bool L_14;
				L_14 = Enumerator_MoveNext_mA0A83B324C5520BA6117E83C466318A468F5DBD2((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_008a;
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

IL_008a:
	{
		return (-1);
	}

IL_008c:
	{
		int32_t L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Freeze_mA7CB81F26995839C24A370F83BF48298DDBE573D_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_1 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_1);
		Node_Freeze_mA7CB81F26995839C24A370F83BF48298DDBE573D(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 97));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_2 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_2);
		Node_Freeze_mA7CB81F26995839C24A370F83BF48298DDBE573D(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 97));
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), (bool)1);
	}

IL_0025:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_RotateLeft_m360E8C2D9D508AC8C853CC98AEB88A18EC2EEF19_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_1 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_2 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_3;
		L_3 = Node_MutateRight_m448EE8322C05DC37D1965A8D1FF67425F95C6E50(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		NullCheck(L_0);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_4;
		L_4 = Node_MutateLeft_m3E116E19DD8747E0FFF6C5DF72BE083BF6C87FEE(L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_RotateRight_mAB9442A0854300DE7F303486760DCA9AC90E27D0_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_1 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_2 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_3;
		L_3 = Node_MutateLeft_m3E116E19DD8747E0FFF6C5DF72BE083BF6C87FEE(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		NullCheck(L_0);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_4;
		L_4 = Node_MutateRight_m448EE8322C05DC37D1965A8D1FF67425F95C6E50(L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_DoubleLeft_m0D495622395401AC5B62334B6207BEAD0C5DB800_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_0 = NULL;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_0 = L_0;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_1 = V_0;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_2 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_1 = L_2;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_3 = V_1;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_4 = V_1;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_5 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_6;
		L_6 = Node_MutateRight_m448EE8322C05DC37D1965A8D1FF67425F95C6E50(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_7 = V_0;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_8 = V_1;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_9 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_7);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_10;
		L_10 = Node_MutateLeft_m3E116E19DD8747E0FFF6C5DF72BE083BF6C87FEE(L_7, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		NullCheck(L_3);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_11;
		L_11 = Node_MutateBoth_m05DDA7ACEECBC06FED0339BBB9628C01264CCEBE(L_3, L_6, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_DoubleRight_mCECBFDC431DF2BEA4E81E4045C0A753DEC6055D8_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_0 = NULL;
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_0 = L_0;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_1 = V_0;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_2 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_1 = L_2;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_3 = V_1;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_4 = V_0;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_5 = V_1;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_6 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_4);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_7;
		L_7 = Node_MutateRight_m448EE8322C05DC37D1965A8D1FF67425F95C6E50(L_4, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_8 = V_1;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_9 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_10;
		L_10 = Node_MutateLeft_m3E116E19DD8747E0FFF6C5DF72BE083BF6C87FEE(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		NullCheck(L_3);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_11;
		L_11 = Node_MutateBoth_m05DDA7ACEECBC06FED0339BBB9628C01264CCEBE(L_3, L_7, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_get_BalanceFactor_m0EC51CAA3E0789D285D1D46E4C2965229D0A8C88_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		uint8_t L_1 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_2 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		uint8_t L_3 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_3));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_IsRightHeavy_m2B2DBCA95556A4ADB2D55E49037960F67E6051B4_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0;
		L_0 = Node_get_BalanceFactor_m0EC51CAA3E0789D285D1D46E4C2965229D0A8C88(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 98));
		return (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_IsLeftHeavy_m67D5D7B60BE70023CF75E689A259EDBDC1E6999D_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0;
		L_0 = Node_get_BalanceFactor_m0EC51CAA3E0789D285D1D46E4C2965229D0A8C88(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 98));
		return (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)((int32_t)-2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_IsBalanced_mCB9C6B94AE7B6C401BB42669B961A71F39B945B2_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0;
		L_0 = Node_get_BalanceFactor_m0EC51CAA3E0789D285D1D46E4C2965229D0A8C88(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 98));
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1))) <= ((uint32_t)2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_Balance_mAEE6C4E9345D9FE985365B338F871A0C5AE3069A_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = Node_get_IsLeftHeavy_m67D5D7B60BE70023CF75E689A259EDBDC1E6999D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 99));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_1;
		L_1 = Node_BalanceRight_m9F5AC4B6775A3B370EADC2EF78EF342F7C9B166A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return L_1;
	}

IL_000f:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_2;
		L_2 = Node_BalanceLeft_m45BE31AC829F10C77D5AE3C67548D48642E2B350(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_BalanceLeft_m45BE31AC829F10C77D5AE3C67548D48642E2B350_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Node_get_BalanceFactor_m0EC51CAA3E0789D285D1D46E4C2965229D0A8C88(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 98));
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_2;
		L_2 = Node_RotateRight_mAB9442A0854300DE7F303486760DCA9AC90E27D0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 100));
		return L_2;
	}

IL_0015:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_3;
		L_3 = Node_DoubleRight_mCECBFDC431DF2BEA4E81E4045C0A753DEC6055D8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 101));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_BalanceRight_m9F5AC4B6775A3B370EADC2EF78EF342F7C9B166A_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Node_get_BalanceFactor_m0EC51CAA3E0789D285D1D46E4C2965229D0A8C88(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 98));
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_2;
		L_2 = Node_RotateLeft_m360E8C2D9D508AC8C853CC98AEB88A18EC2EEF19(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 102));
		return L_2;
	}

IL_0015:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_3;
		L_3 = Node_DoubleLeft_m0D495622395401AC5B62334B6207BEAD0C5DB800(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 103));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_BalanceMany_mB9650DF7469CC65FD9FA0C1F69CCAC7B008F277D_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		V_0 = __this;
		goto IL_0040;
	}

IL_0004:
	{
		CHECK_PAUSE_POINT;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = V_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Node_get_IsRightHeavy_m2B2DBCA95556A4ADB2D55E49037960F67E6051B4(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 104));
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_2 = V_0;
		NullCheck(L_2);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_3;
		L_3 = Node_BalanceRight_m9F5AC4B6775A3B370EADC2EF78EF342F7C9B166A(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_0 = L_3;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_4 = V_0;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_5 = V_0;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_6 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_6);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_7;
		L_7 = Node_BalanceMany_mB9650DF7469CC65FD9FA0C1F69CCAC7B008F277D(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		NullCheck(L_4);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_8;
		L_8 = Node_MutateLeft_m3E116E19DD8747E0FFF6C5DF72BE083BF6C87FEE(L_4, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		goto IL_0040;
	}

IL_0027:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_9 = V_0;
		NullCheck(L_9);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_10;
		L_10 = Node_BalanceLeft_m45BE31AC829F10C77D5AE3C67548D48642E2B350(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_0 = L_10;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_11 = V_0;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_12 = V_0;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_13 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_13);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_14;
		L_14 = Node_BalanceMany_mB9650DF7469CC65FD9FA0C1F69CCAC7B008F277D(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		NullCheck(L_11);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_15;
		L_15 = Node_MutateRight_m448EE8322C05DC37D1965A8D1FF67425F95C6E50(L_11, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
	}

IL_0040:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_16 = V_0;
		NullCheck(L_16);
		bool L_17;
		L_17 = Node_get_IsBalanced_mCB9C6B94AE7B6C401BB42669B961A71F39B945B2(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		if (!L_17)
		{
			goto IL_0004;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_MutateBoth_m05DDA7ACEECBC06FED0339BBB9628C01264CCEBE_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_left, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = ___0_left;
		Requires_NotNull_TisNode_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB_m4E22B6EF4EC08078BDC2B81C9C5826D2A0E3F1FB(L_0, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_1 = ___1_right;
		Requires_NotNull_TisNode_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB_m4E22B6EF4EC08078BDC2B81C9C5826D2A0E3F1FB(L_1, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		bool L_2 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_4 = ___0_left;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_5 = ___1_right;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_6 = (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		Node__ctor_m7BF40582800CD5EC397DDC35A65D9E48F304F77C(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_7, L_3, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F): *(void**)L_3), L_4, L_5, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_6;
	}

IL_002d:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_8 = ___0_left;
		il2cpp_codegen_write_instance_field_data<Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_8);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_9 = ___1_right;
		il2cpp_codegen_write_instance_field_data<Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_9);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_10 = ___0_left;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_11 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		uint8_t L_12;
		L_12 = Node_ParentHeight_m4CFC4675B0EA632CC45D346DF3FC41D3723A12C3_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_12);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_13 = ___0_left;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_14 = ___1_right;
		int32_t L_15;
		L_15 = Node_ParentCount_m85162769415961CC53BC415A0A4995FAC19523FE(L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_15);
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_MutateLeft_m3E116E19DD8747E0FFF6C5DF72BE083BF6C87FEE_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_left, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = ___0_left;
		Requires_NotNull_TisNode_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB_m4E22B6EF4EC08078BDC2B81C9C5826D2A0E3F1FB(L_0, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		bool L_1 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_3 = ___0_left;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_4 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_5 = (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		Node__ctor_m7BF40582800CD5EC397DDC35A65D9E48F304F77C(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_6, L_2, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F): *(void**)L_2), L_3, L_4, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_5;
	}

IL_0027:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_7 = ___0_left;
		il2cpp_codegen_write_instance_field_data<Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_7);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_8 = ___0_left;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_9 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		uint8_t L_10;
		L_10 = Node_ParentHeight_m4CFC4675B0EA632CC45D346DF3FC41D3723A12C3_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_10);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_11 = ___0_left;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_12 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		int32_t L_13;
		L_13 = Node_ParentCount_m85162769415961CC53BC415A0A4995FAC19523FE(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_13);
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_MutateRight_m448EE8322C05DC37D1965A8D1FF67425F95C6E50_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = ___0_right;
		Requires_NotNull_TisNode_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB_m4E22B6EF4EC08078BDC2B81C9C5826D2A0E3F1FB(L_0, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		bool L_1 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_3 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_4 = ___0_right;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_5 = (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		Node__ctor_m7BF40582800CD5EC397DDC35A65D9E48F304F77C(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_6, L_2, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F): *(void**)L_2), L_3, L_4, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_5;
	}

IL_0027:
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_7 = ___0_right;
		il2cpp_codegen_write_instance_field_data<Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_7);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_8 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_9 = ___0_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		uint8_t L_10;
		L_10 = Node_ParentHeight_m4CFC4675B0EA632CC45D346DF3FC41D3723A12C3_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_10);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_11 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_12 = ___0_right;
		int32_t L_13;
		L_13 = Node_ParentCount_m85162769415961CC53BC415A0A4995FAC19523FE(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_13);
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Node_ParentHeight_m4CFC4675B0EA632CC45D346DF3FC41D3723A12C3_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_left, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = ___0_left;
		uint8_t L_1 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_2 = ___1_right;
		uint8_t L_3 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint8_t L_4;
		L_4 = Math_Max_m12FB4E1302123ADB441E3A7BDF52E8404DDE53A2(L_1, L_3, NULL);
		if (((int64_t)1 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)1 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		uint8_t L_5 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,true,false>(((int32_t)il2cpp_codegen_add(1, (int32_t)L_4)),method));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_ParentCount_m85162769415961CC53BC415A0A4995FAC19523FE_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_left, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___1_right, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = ___0_left;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_2 = ___1_right;
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(1, L_1)), L_3));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_MutateKey_m7D9FDC6E916E6EC9BE1E9F43013AF836CB48368F_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_6 = L_1;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_2 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_3 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_4 = (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		Node__ctor_m7BF40582800CD5EC397DDC35A65D9E48F304F77C(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_5, L_1, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F): *(void**)L_1), L_2, L_3, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_4;
	}

IL_001c:
	{
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_6, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_CreateRange_m1F287B4EAED6F5FCD57CE2E9238BEF8E7FD77250_gshared (RuntimeObject* ___0_keys, const RuntimeMethod* method) 
{
	ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_keys;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 89));
		bool L_1;
		L_1 = ImmutableList_1_TryCastToImmutableList_mEA59DAAE569FFF6E227545CA55F7EE23D01A9C11(L_0, (&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 105));
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		ImmutableList_1_tC08264CB7159E37544A44914825194497A678DD4* L_2 = V_0;
		NullCheck(L_2);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_3 = L_2->____root;
		return L_3;
	}

IL_0011:
	{
		RuntimeObject* L_4 = ___0_keys;
		RuntimeObject* L_5;
		L_5 = ImmutableExtensions_AsOrderedCollection_TisIl2CppFullySharedGenericAny_mAD04AE315D604F57729B36E71A338249CF556C96(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 73));
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 16), L_7);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_9;
		L_9 = Node_NodeTreeFromList_mEC0031D8EBFDC8DEBC2085F9F91330143748A824(L_6, 0, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* Node_CreateLeaf_m5972C45C077E1CED921B71D76E44D9317E8CA7E0_gshared (Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_1 = ((Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->___EmptyNode;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_2 = ((Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->___EmptyNode;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_3 = (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Node__ctor_m7BF40582800CD5EC397DDC35A65D9E48F304F77C(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_4, L_0, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F): *(void**)L_0), L_1, L_2, (bool)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_Contains_m3C2DA577739605C40593D2B9FB0FBD5C451CDFDC_gshared (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_node, Il2CppFullySharedGenericAny ___1_value, RuntimeObject* ___2_equalityComparer, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_9 = L_3;
	const Il2CppFullySharedGenericAny L_15 = L_3;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
	const Il2CppFullySharedGenericAny L_11 = L_5;
	const Il2CppFullySharedGenericAny L_17 = L_5;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = ___0_node;
		NullCheck(L_0);
		bool L_1;
		L_1 = Node_get_IsEmpty_m102125FA4AB0BF7643123CA39727C5234CAB76E0(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_2 = ___2_equalityComparer;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___1_value : &___1_value), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_4 = ___0_node;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		NullCheck(L_2);
		bool L_6;
		L_6 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 79), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5));
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_7 = ___0_node;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_8 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___1_value : &___1_value), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		RuntimeObject* L_10 = ___2_equalityComparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		bool L_12;
		L_12 = Node_Contains_m3C2DA577739605C40593D2B9FB0FBD5C451CDFDC(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_11, L_9, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F): *(void**)L_9), L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 81));
		if (L_12)
		{
			goto IL_0034;
		}
	}
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_13 = ___0_node;
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_14 = *(Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB**)il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___1_value : &___1_value), SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F);
		RuntimeObject* L_16 = ___2_equalityComparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		bool L_18;
		L_18 = Node_Contains_m3C2DA577739605C40593D2B9FB0FBD5C451CDFDC(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_17, L_15, SizeOf_T_t787CD2F5B3E801DFED05DA507BF920C0AD32941F): *(void**)L_15), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 81));
		return L_18;
	}

IL_0034:
	{
		return (bool)1;
	}

IL_0036:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__cctor_mD9E066F96816DF15E86B59A95B50BCE46BAD4A41_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Node__ctor_mF66722CB299285C58F438D3143A2C07D785C84D8(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110));
		((Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->___EmptyNode = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->___EmptyNode), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mDC5E0E80609B0FEFFE87784DBDDB9485F2F27B2B_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), (bool)1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m21B1B2AD09D3360E943B62D5A8BEB3C57F0FF8F3_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny ___0_key, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___1_left, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___2_right, bool ___3_frozen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_0 = ___1_left;
		Requires_NotNull_TisNode_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC_mDDB556AC194F77D05C8671D775F49EB2B7B5106B(L_0, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_1 = ___2_right;
		Requires_NotNull_TisNode_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC_mDDB556AC194F77D05C8671D775F49EB2B7B5106B(L_1, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_2, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_3 = ___1_left;
		il2cpp_codegen_write_instance_field_data<Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_3);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_4 = ___2_right;
		il2cpp_codegen_write_instance_field_data<Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_4);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_5 = ___1_left;
		uint8_t L_6 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_7 = ___2_right;
		uint8_t L_8 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint8_t L_9;
		L_9 = Math_Max_m12FB4E1302123ADB441E3A7BDF52E8404DDE53A2(L_6, L_8, NULL);
		if (((int64_t)1 + (int64_t)L_9 < (int64_t)kIl2CppInt32Min) || ((int64_t)1 + (int64_t)L_9 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		uint8_t L_10 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,true,false>(((int32_t)il2cpp_codegen_add(1, (int32_t)L_9)),method));
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_10);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_11 = ___1_left;
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_13 = ___2_right;
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(1, L_12)), L_14)));
		bool L_15 = ___3_frozen;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_15);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_0 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return (bool)((((RuntimeObject*)(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_get_Height_mFE1BDEA3F6CAC1D8AD4D241270845EDC2AE887FC_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_get_Left_m2743DE9B7D4AAF32AAFC7F6CE5C92D8B05FD1D4E_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_0 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_System_Collections_Immutable_IBinaryTree_get_Left_m84C4C16CBDAE8927D6F97D3E8DB3A123868AC638_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_0 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_get_Right_m6763D0356138F480006DD2F092113FA3DA8393A8_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_0 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_System_Collections_Immutable_IBinaryTree_get_Right_mAE60A9B0ED1CD8A888DEA87478EE179C5B13BDAE_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_0 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Left_m53640DD93842CDDAB122261C226694023C04315F_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_0 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Right_mF943ADAE3272EDB880D92FFDFEAC9DCE7B6CEF35_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_0 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_get_Value_m230892619D4797BD538181D90ADFED1A23348D3D_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_get_Count_mB1E99B9EDC8EE8589D98FF3626E87F386F9420E3_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_get_Key_mE2FA38366EB563B0E992738A3AB608C211161AAA_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_get_Max_m9C5208E2A1B8D701CA2B673E74EFACF492981397_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	memset(V_1, 0, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		il2cpp_codegen_memcpy(L_1, V_1, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		return;
	}

IL_0012:
	{
		V_0 = __this;
		goto IL_001d;
	}

IL_0016:
	{
		CHECK_PAUSE_POINT;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_2 = V_0;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_3 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_0 = L_3;
	}

IL_001d:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_4 = V_0;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_5 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_5);
		bool L_6;
		L_6 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_6)
		{
			goto IL_0016;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_7 = V_0;
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_get_Min_mDF214AFBC08509456368C812B9A0E17C1F903F1A_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	memset(V_1, 0, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		il2cpp_codegen_memcpy(L_1, V_1, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		return;
	}

IL_0012:
	{
		V_0 = __this;
		goto IL_001d;
	}

IL_0016:
	{
		CHECK_PAUSE_POINT;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_2 = V_0;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_3 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_0 = L_3;
	}

IL_001d:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_4 = V_0;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_5 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_5);
		bool L_6;
		L_6 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_6)
		{
			goto IL_0016;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_7 = V_0;
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_get_Item_m5D248CCA6D68A3697DCEB40CE3C7C923078A7EE8_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	const Il2CppFullySharedGenericAny L_17 = L_8;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = Node_get_Count_mB1E99B9EDC8EE8589D98FF3626E87F386F9420E3_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)G_B3_0, _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, (String_t*)NULL, NULL);
		int32_t L_3 = ___0_index;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_4 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_0036;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_6 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		Node_get_Item_m5D248CCA6D68A3697DCEB40CE3C7C923078A7EE8(L_6, L_7, (Il2CppFullySharedGenericAny*)L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		return;
	}

IL_0036:
	{
		int32_t L_9 = ___0_index;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_10 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_005f;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_12 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		int32_t L_13 = ___0_index;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_14 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_15 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_12);
		Node_get_Item_m5D248CCA6D68A3697DCEB40CE3C7C923078A7EE8(L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_13, L_15)), 1)), (Il2CppFullySharedGenericAny*)L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		return;
	}

IL_005f:
	{
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_17, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Node_ItemRef_mF26BDD11B40D2BBEFFD2C1769457CCCCDFF13F38_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = Node_get_Count_mB1E99B9EDC8EE8589D98FF3626E87F386F9420E3_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)G_B3_0, _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, (String_t*)NULL, NULL);
		int32_t L_3 = ___0_index;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = Node_ItemRefUnchecked_m7FE058A4C03DE46C3E12D8C91CAEE17A5DB445AC(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Node_ItemRefUnchecked_m7FE058A4C03DE46C3E12D8C91CAEE17A5DB445AC_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_1 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_001b;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_3 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		Il2CppFullySharedGenericAny* L_5;
		L_5 = Node_ItemRefUnchecked_m7FE058A4C03DE46C3E12D8C91CAEE17A5DB445AC(L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_5;
	}

IL_001b:
	{
		int32_t L_6 = ___0_index;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_7 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if ((((int32_t)L_6) <= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_9 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		int32_t L_10 = ___0_index;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_11 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_9);
		Il2CppFullySharedGenericAny* L_13;
		L_13 = Node_ItemRefUnchecked_m7FE058A4C03DE46C3E12D8C91CAEE17A5DB445AC(L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_10, L_12)), 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_13;
	}

IL_0044:
	{
		return (((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF Node_GetEnumerator_m8115E25480E14F987FB6899ACF9E660187721000_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F2E09A44D4327025E15A7C7657EFC352F280722((&L_0), __this, (Builder_t431E90D62A61669553FF359FE81BAD1D3EFE64E5*)NULL, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m404CA64FA0B36FDE2A4C9B275A1BA4F510BD8516_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF L_0;
		L_0 = Node_GetEnumerator_m8115E25480E14F987FB6899ACF9E660187721000(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_System_Collections_IEnumerable_GetEnumerator_mD391576ADDD5DF03556796FEE855F5081BC9B669_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF L_0;
		L_0 = Node_GetEnumerator_m8115E25480E14F987FB6899ACF9E660187721000(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF Node_GetEnumerator_m2216B5FCBFACFD3D2C2CBBEE298215D401A0D0D5_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Builder_t431E90D62A61669553FF359FE81BAD1D3EFE64E5* ___0_builder, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Builder_t431E90D62A61669553FF359FE81BAD1D3EFE64E5* L_0 = ___0_builder;
		Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m2F2E09A44D4327025E15A7C7657EFC352F280722((&L_1), __this, L_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_CopyTo_m02BEC0D09E6C1919F04212CEFCE9DBD0F25A40C6_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	memset(V_1, 0, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Requires_NotNull_Tis__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC_m1421C199B92AD40E998F3A77B033BF2EDA715532(L_0, _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		int32_t L_1 = ___1_arrayIndex;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4, (String_t*)NULL, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		int32_t L_4 = ___1_arrayIndex;
		int32_t L_5;
		L_5 = Node_get_Count_mB1E99B9EDC8EE8589D98FF3626E87F386F9420E3_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_3) < ((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4, (String_t*)NULL, NULL);
		Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF L_6;
		L_6 = Node_GetEnumerator_m8115E25480E14F987FB6899ACF9E660187721000(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_m922B7656398382C9DBE6D964C5D40F4E80319048((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0056_1;
			}

IL_0041_1:
			{
				CHECK_PAUSE_POINT;
				Enumerator_get_Current_m0511BC1B180F031FBD00338F725E8597B5DC0FE7((&V_0), (Il2CppFullySharedGenericAny*)L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				il2cpp_codegen_memcpy(V_1, L_7, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
				int32_t L_9 = ___1_arrayIndex;
				int32_t L_10 = L_9;
				___1_arrayIndex = ((int32_t)il2cpp_codegen_add(L_10, 1));
				il2cpp_codegen_memcpy(L_11, V_1, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
				NullCheck(L_8);
				il2cpp_codegen_memcpy((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), L_11, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), (void**)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), (void*)L_11);
			}

IL_0056_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_m890821263E40A5DCC1BF1D9169C23C4D28C72BCA((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
				if (L_12)
				{
					goto IL_0041_1;
				}
			}
			{
				goto IL_006f;
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

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_CopyTo_mD74463517F07E3DDB143198774E7EE7C44D2FC55_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Requires_NotNull_TisRuntimeArray_mEA688B1EA5C572D7FC545A7E12223DA6C4C902D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	memset(V_1, 0, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeArray* L_0 = ___0_array;
		Requires_NotNull_TisRuntimeArray_mEA688B1EA5C572D7FC545A7E12223DA6C4C902D5(L_0, _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED, Requires_NotNull_TisRuntimeArray_mEA688B1EA5C572D7FC545A7E12223DA6C4C902D5_RuntimeMethod_var);
		int32_t L_1 = ___1_arrayIndex;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4, (String_t*)NULL, NULL);
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_length(L_2);
		int32_t L_4 = ___1_arrayIndex;
		int32_t L_5;
		L_5 = Node_get_Count_mB1E99B9EDC8EE8589D98FF3626E87F386F9420E3_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_3) < ((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4, (String_t*)NULL, NULL);
		Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF L_6;
		L_6 = Node_GetEnumerator_m8115E25480E14F987FB6899ACF9E660187721000(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0069:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_m922B7656398382C9DBE6D964C5D40F4E80319048((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_005e_1;
			}

IL_0044_1:
			{
				CHECK_PAUSE_POINT;
				Enumerator_get_Current_m0511BC1B180F031FBD00338F725E8597B5DC0FE7((&V_0), (Il2CppFullySharedGenericAny*)L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				il2cpp_codegen_memcpy(V_1, L_7, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
				RuntimeArray* L_8 = ___0_array;
				il2cpp_codegen_memcpy(L_9, V_1, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
				RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_9);
				int32_t L_11 = ___1_arrayIndex;
				int32_t L_12 = L_11;
				___1_arrayIndex = ((int32_t)il2cpp_codegen_add(L_12, 1));
				NullCheck(L_8);
				Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_8, L_10, L_12, NULL);
			}

IL_005e_1:
			{
				bool L_13;
				L_13 = Enumerator_MoveNext_m890821263E40A5DCC1BF1D9169C23C4D28C72BCA((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
				if (L_13)
				{
					goto IL_0044_1;
				}
			}
			{
				goto IL_0077;
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

IL_0077:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_Add_m6DE337658AFF55138E8803DD715D594A89F195C3_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_comparer, bool* ___2_mutated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3FC9399673D70886E209A79694134E10FB6A1D);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	const Il2CppFullySharedGenericAny L_7 = L_3;
	const Il2CppFullySharedGenericAny L_12 = L_3;
	const Il2CppFullySharedGenericAny L_22 = L_3;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* V_0 = NULL;
	int32_t V_1 = 0;
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* V_2 = NULL;
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* V_3 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___1_comparer;
		Requires_NotNull_TisIComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA_mEC20092BEB80345758B8491843633720521A2C58(L_0, _stringLiteral0C3FC9399673D70886E209A79694134E10FB6A1D, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		bool L_1;
		L_1 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		bool* L_2 = ___2_mutated;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_2, (int8_t)1);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_4 = (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		Node__ctor_m21B1B2AD09D3360E943B62D5A8BEB3C57F0FF8F3(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_5, L_3, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA): *(void**)L_3), __this, __this, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_4;
	}

IL_0020:
	{
		V_0 = __this;
		RuntimeObject* L_6 = ___1_comparer;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		NullCheck(L_6);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 23), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_8: *(void**)L_8));
		V_1 = L_9;
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_11 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		RuntimeObject* L_13 = ___1_comparer;
		bool* L_14 = ___2_mutated;
		NullCheck(L_11);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_15;
		L_15 = Node_Add_m6DE337658AFF55138E8803DD715D594A89F195C3(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_12: *(void**)L_12), L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_2 = L_15;
		bool* L_16 = ___2_mutated;
		int32_t L_17 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_16));
		if (!L_17)
		{
			goto IL_0079;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_18 = V_2;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_19;
		L_19 = Node_Mutate_m3D2DAC123906E4E1DA1A65DE5C9A81FFC293E71F(__this, (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)NULL, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_19;
		goto IL_0079;
	}

IL_0052:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_21 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		RuntimeObject* L_23 = ___1_comparer;
		bool* L_24 = ___2_mutated;
		NullCheck(L_21);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_25;
		L_25 = Node_Add_m6DE337658AFF55138E8803DD715D594A89F195C3(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_22: *(void**)L_22), L_23, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_3 = L_25;
		bool* L_26 = ___2_mutated;
		int32_t L_27 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_26));
		if (!L_27)
		{
			goto IL_0079;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_28 = V_3;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_29;
		L_29 = Node_Mutate_m3D2DAC123906E4E1DA1A65DE5C9A81FFC293E71F(__this, L_28, (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_29;
		goto IL_0079;
	}

IL_0074:
	{
		bool* L_30 = ___2_mutated;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_30, (int8_t)0);
		return __this;
	}

IL_0079:
	{
		bool* L_31 = ___2_mutated;
		int32_t L_32 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_31));
		if (L_32)
		{
			goto IL_007f;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_33 = V_0;
		return L_33;
	}

IL_007f:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_34 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_35;
		L_35 = Node_MakeBalanced_m6145C7609EFAD7400EB7EC07E55890632422A380(L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return L_35;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_Remove_mAE87F55168F9CF8FBF115D841DBAB62D59658595_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_comparer, bool* ___2_mutated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3FC9399673D70886E209A79694134E10FB6A1D);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	const Il2CppFullySharedGenericAny L_32 = L_4;
	const Il2CppFullySharedGenericAny L_41 = L_4;
	const Il2CppFullySharedGenericAny L_50 = L_4;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* V_0 = NULL;
	int32_t V_1 = 0;
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* V_2 = NULL;
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* V_3 = NULL;
	bool V_4 = false;
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* V_5 = NULL;
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* V_6 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___1_comparer;
		Requires_NotNull_TisIComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA_mEC20092BEB80345758B8491843633720521A2C58(L_0, _stringLiteral0C3FC9399673D70886E209A79694134E10FB6A1D, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		bool L_1;
		L_1 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool* L_2 = ___2_mutated;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_2, (int8_t)0);
		return __this;
	}

IL_0018:
	{
		V_0 = __this;
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 23), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_4: *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_5: *(void**)L_5));
		V_1 = L_6;
		int32_t L_7 = V_1;
		if (L_7)
		{
			goto IL_00e4;
		}
	}
	{
		bool* L_8 = ___2_mutated;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_8, (int8_t)1);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_9 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_9);
		bool L_10;
		L_10 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_11 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_11);
		bool L_12;
		L_12 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_13 = ((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)))->___EmptyNode;
		V_0 = L_13;
		goto IL_0126;
	}

IL_0056:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_14 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_14);
		bool L_15;
		L_15 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_16 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_16);
		bool L_17;
		L_17 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (L_17)
		{
			goto IL_007c;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_18 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_0 = L_18;
		goto IL_0126;
	}

IL_007c:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_19 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_19);
		bool L_20;
		L_20 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (L_20)
		{
			goto IL_00a2;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_21 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_21);
		bool L_22;
		L_22 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_22)
		{
			goto IL_00a2;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_23 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_0 = L_23;
		goto IL_0126;
	}

IL_00a2:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_24 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_2 = L_24;
		goto IL_00b2;
	}

IL_00ab:
	{
		CHECK_PAUSE_POINT;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_25 = V_2;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_26 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_25, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_2 = L_26;
	}

IL_00b2:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_27 = V_2;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_28 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_28);
		bool L_29;
		L_29 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_29)
		{
			goto IL_00ab;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_30 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_31 = V_2;
		il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_instance_field_data_pointer(L_31, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		RuntimeObject* L_33 = ___1_comparer;
		NullCheck(L_30);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_34;
		L_34 = Node_Remove_mAE87F55168F9CF8FBF115D841DBAB62D59658595(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_32: *(void**)L_32), L_33, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_3 = L_34;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_35 = V_2;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_36 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_37 = V_3;
		NullCheck(L_35);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_38;
		L_38 = Node_Mutate_m3D2DAC123906E4E1DA1A65DE5C9A81FFC293E71F(L_35, L_36, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_38;
		goto IL_0126;
	}

IL_00e4:
	{
		int32_t L_39 = V_1;
		if ((((int32_t)L_39) >= ((int32_t)0)))
		{
			goto IL_0108;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_40 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_memcpy(L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		RuntimeObject* L_42 = ___1_comparer;
		bool* L_43 = ___2_mutated;
		NullCheck(L_40);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_44;
		L_44 = Node_Remove_mAE87F55168F9CF8FBF115D841DBAB62D59658595(L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_41: *(void**)L_41), L_42, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_5 = L_44;
		bool* L_45 = ___2_mutated;
		int32_t L_46 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_45));
		if (!L_46)
		{
			goto IL_0126;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_47 = V_5;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_48;
		L_48 = Node_Mutate_m3D2DAC123906E4E1DA1A65DE5C9A81FFC293E71F(__this, L_47, (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_48;
		goto IL_0126;
	}

IL_0108:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_49 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		il2cpp_codegen_memcpy(L_50, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		RuntimeObject* L_51 = ___1_comparer;
		bool* L_52 = ___2_mutated;
		NullCheck(L_49);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_53;
		L_53 = Node_Remove_mAE87F55168F9CF8FBF115D841DBAB62D59658595(L_49, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_50: *(void**)L_50), L_51, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_6 = L_53;
		bool* L_54 = ___2_mutated;
		int32_t L_55 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_54));
		if (!L_55)
		{
			goto IL_0126;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_56 = V_6;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_57;
		L_57 = Node_Mutate_m3D2DAC123906E4E1DA1A65DE5C9A81FFC293E71F(__this, (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)NULL, L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_57;
	}

IL_0126:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_58 = V_0;
		NullCheck(L_58);
		bool L_59;
		L_59 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (L_59)
		{
			goto IL_0135;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_60 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_61;
		L_61 = Node_MakeBalanced_m6145C7609EFAD7400EB7EC07E55890632422A380(L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return L_61;
	}

IL_0135:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_62 = V_0;
		return L_62;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_Contains_m5CF0C806B2595F8520F10765FFE3A53143C41769_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3FC9399673D70886E209A79694134E10FB6A1D);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___1_comparer;
		Requires_NotNull_TisIComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA_mEC20092BEB80345758B8491843633720521A2C58(L_0, _stringLiteral0C3FC9399673D70886E209A79694134E10FB6A1D, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		RuntimeObject* L_2 = ___1_comparer;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_4;
		L_4 = Node_Search_m0DD8BF2D0F1518DB3EBA463DE523EA1D9B3C35A0(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA): *(void**)L_1), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		NullCheck(L_4);
		bool L_5;
		L_5 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Freeze_m8C498126932BCE728C9D9B2133A7D11525E1A666_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_1 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_1);
		Node_Freeze_m8C498126932BCE728C9D9B2133A7D11525E1A666(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_2 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_2);
		Node_Freeze_m8C498126932BCE728C9D9B2133A7D11525E1A666(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), (bool)1);
	}

IL_0025:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_Search_m0DD8BF2D0F1518DB3EBA463DE523EA1D9B3C35A0_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3FC9399673D70886E209A79694134E10FB6A1D);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	const Il2CppFullySharedGenericAny L_9 = L_3;
	const Il2CppFullySharedGenericAny L_13 = L_3;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___1_comparer;
		Requires_NotNull_TisIComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA_mEC20092BEB80345758B8491843633720521A2C58(L_0, _stringLiteral0C3FC9399673D70886E209A79694134E10FB6A1D, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		bool L_1;
		L_1 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		return __this;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___1_comparer;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		NullCheck(L_2);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 23), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_4: *(void**)L_4));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return __this;
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_8 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		RuntimeObject* L_10 = ___1_comparer;
		NullCheck(L_8);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_11;
		L_11 = Node_Search_m0DD8BF2D0F1518DB3EBA463DE523EA1D9B3C35A0(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_9: *(void**)L_9), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_11;
	}

IL_003a:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_12 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		RuntimeObject* L_14 = ___1_comparer;
		NullCheck(L_12);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_15;
		L_15 = Node_Search_m0DD8BF2D0F1518DB3EBA463DE523EA1D9B3C35A0(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_13: *(void**)L_13), L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_IndexOf_mD06FFB34C56C57BEA4D00C90B03A9237BDF61A10_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3FC9399673D70886E209A79694134E10FB6A1D);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	const Il2CppFullySharedGenericAny L_11 = L_3;
	const Il2CppFullySharedGenericAny L_24 = L_3;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___1_comparer;
		Requires_NotNull_TisIComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA_mEC20092BEB80345758B8491843633720521A2C58(L_0, _stringLiteral0C3FC9399673D70886E209A79694134E10FB6A1D, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		bool L_1;
		L_1 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		return (-1);
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___1_comparer;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		NullCheck(L_2);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 23), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_4: *(void**)L_4));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_7 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Node_get_Count_mB1E99B9EDC8EE8589D98FF3626E87F386F9420E3_inline(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_8;
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0067;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_10 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		RuntimeObject* L_12 = ___1_comparer;
		NullCheck(L_10);
		int32_t L_13;
		L_13 = Node_IndexOf_mD06FFB34C56C57BEA4D00C90B03A9237BDF61A10(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_11: *(void**)L_11), L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		V_1 = L_13;
		int32_t L_14 = V_1;
		V_2 = (bool)((((int32_t)L_14) < ((int32_t)0))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_16 = V_1;
		V_1 = ((~L_16));
	}

IL_004f:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_17 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Node_get_Count_mB1E99B9EDC8EE8589D98FF3626E87F386F9420E3_inline(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_18, 1)), L_19));
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_21 = V_1;
		V_1 = ((~L_21));
	}

IL_0065:
	{
		int32_t L_22 = V_1;
		return L_22;
	}

IL_0067:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_23 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		RuntimeObject* L_25 = ___1_comparer;
		NullCheck(L_23);
		int32_t L_26;
		L_26 = Node_IndexOf_mD06FFB34C56C57BEA4D00C90B03A9237BDF61A10(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_24: *(void**)L_24), L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_Reverse_m1405412F595D59C91C24DE9F44E7623C7A6B7A92_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F2E09A44D4327025E15A7C7657EFC352F280722((&L_0), __this, (Builder_t431E90D62A61669553FF359FE81BAD1D3EFE64E5*)NULL, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		Enumerator_t9A0F85C9116159564C343B32757AAB0E518D81BF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_RotateLeft_mED96D73CB1B4DDD59CB21161CB7D3C48678A696A_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_0 = ___0_tree;
		Requires_NotNull_TisNode_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC_mDDB556AC194F77D05C8671D775F49EB2B7B5106B(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_1 = ___0_tree;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_2 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		NullCheck(L_2);
		bool L_3;
		L_3 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_4 = ___0_tree;
		return L_4;
	}

IL_001a:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_5 = ___0_tree;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_6 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		V_0 = L_6;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_7 = V_0;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_8 = ___0_tree;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_9 = V_0;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_10 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		NullCheck(L_8);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_11;
		L_11 = Node_Mutate_m3D2DAC123906E4E1DA1A65DE5C9A81FFC293E71F(L_8, (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)NULL, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		NullCheck(L_7);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_12;
		L_12 = Node_Mutate_m3D2DAC123906E4E1DA1A65DE5C9A81FFC293E71F(L_7, L_11, (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)NULL, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_RotateRight_mF6183B5AC82FD7D9F9B28DCB252D70E4333739AD_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_0 = ___0_tree;
		Requires_NotNull_TisNode_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC_mDDB556AC194F77D05C8671D775F49EB2B7B5106B(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_1 = ___0_tree;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_2 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		NullCheck(L_2);
		bool L_3;
		L_3 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_4 = ___0_tree;
		return L_4;
	}

IL_001a:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_5 = ___0_tree;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_6 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		V_0 = L_6;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_7 = V_0;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_8 = ___0_tree;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_9 = V_0;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_10 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		NullCheck(L_8);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_11;
		L_11 = Node_Mutate_m3D2DAC123906E4E1DA1A65DE5C9A81FFC293E71F(L_8, L_10, (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)NULL, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		NullCheck(L_7);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_12;
		L_12 = Node_Mutate_m3D2DAC123906E4E1DA1A65DE5C9A81FFC293E71F(L_7, (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)NULL, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_DoubleLeft_mD7B8D8E27F61A0E522D80D0844C25132A773DCB7_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_0 = ___0_tree;
		Requires_NotNull_TisNode_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC_mDDB556AC194F77D05C8671D775F49EB2B7B5106B(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_1 = ___0_tree;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_2 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		NullCheck(L_2);
		bool L_3;
		L_3 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_4 = ___0_tree;
		return L_4;
	}

IL_001a:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_5 = ___0_tree;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_6 = ___0_tree;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_7 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_8;
		L_8 = Node_RotateRight_mF6183B5AC82FD7D9F9B28DCB252D70E4333739AD(L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		NullCheck(L_5);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_9;
		L_9 = Node_Mutate_m3D2DAC123906E4E1DA1A65DE5C9A81FFC293E71F(L_5, (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)NULL, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		V_0 = L_9;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_10 = V_0;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_11;
		L_11 = Node_RotateLeft_mED96D73CB1B4DDD59CB21161CB7D3C48678A696A(L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 36));
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_DoubleRight_mE2347BBDCF1E532D696FEDFB64B0FFF1ADE60ADF_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_0 = ___0_tree;
		Requires_NotNull_TisNode_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC_mDDB556AC194F77D05C8671D775F49EB2B7B5106B(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_1 = ___0_tree;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_2 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		NullCheck(L_2);
		bool L_3;
		L_3 = Node_get_IsEmpty_mADF11E0A0B1DF84A79C6ACEDEE602E2A8ED254CA(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_4 = ___0_tree;
		return L_4;
	}

IL_001a:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_5 = ___0_tree;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_6 = ___0_tree;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_7 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_8;
		L_8 = Node_RotateLeft_mED96D73CB1B4DDD59CB21161CB7D3C48678A696A(L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 36));
		NullCheck(L_5);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_9;
		L_9 = Node_Mutate_m3D2DAC123906E4E1DA1A65DE5C9A81FFC293E71F(L_5, L_8, (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)NULL, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		V_0 = L_9;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_10 = V_0;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_11;
		L_11 = Node_RotateRight_mF6183B5AC82FD7D9F9B28DCB252D70E4333739AD(L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_Balance_m3F41DF138CF3E47B24C7AA584A809A9EA44997DE_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_0 = ___0_tree;
		Requires_NotNull_TisNode_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC_mDDB556AC194F77D05C8671D775F49EB2B7B5106B(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_1 = ___0_tree;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_2 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		uint8_t L_3 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_4 = ___0_tree;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_5 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		uint8_t L_6 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_6));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_IsRightHeavy_m1B826A7C1A348D341A7F75DDA2E71737F6D91E4B_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_0 = ___0_tree;
		Requires_NotNull_TisNode_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC_mDDB556AC194F77D05C8671D775F49EB2B7B5106B(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_1 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		int32_t L_2;
		L_2 = Node_Balance_m3F41DF138CF3E47B24C7AA584A809A9EA44997DE(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 37));
		return (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_IsLeftHeavy_m5F4C4D3B4684984C1364F9D7501E6C6EE8EC3931_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_0 = ___0_tree;
		Requires_NotNull_TisNode_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC_mDDB556AC194F77D05C8671D775F49EB2B7B5106B(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_1 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		int32_t L_2;
		L_2 = Node_Balance_m3F41DF138CF3E47B24C7AA584A809A9EA44997DE(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 37));
		return (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)((int32_t)-2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_MakeBalanced_m6145C7609EFAD7400EB7EC07E55890632422A380_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_0 = ___0_tree;
		Requires_NotNull_TisNode_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC_mDDB556AC194F77D05C8671D775F49EB2B7B5106B(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_1 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		bool L_2;
		L_2 = Node_IsRightHeavy_m1B826A7C1A348D341A7F75DDA2E71737F6D91E4B(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 38));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_3 = ___0_tree;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_4 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		int32_t L_5;
		L_5 = Node_Balance_m3F41DF138CF3E47B24C7AA584A809A9EA44997DE(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 37));
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_6 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_7;
		L_7 = Node_RotateLeft_mED96D73CB1B4DDD59CB21161CB7D3C48678A696A(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 36));
		return L_7;
	}

IL_0028:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_8 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_9;
		L_9 = Node_DoubleLeft_mD7B8D8E27F61A0E522D80D0844C25132A773DCB7(L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 39));
		return L_9;
	}

IL_002f:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_10 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		bool L_11;
		L_11 = Node_IsLeftHeavy_m5F4C4D3B4684984C1364F9D7501E6C6EE8EC3931(L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 40));
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_12 = ___0_tree;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_13 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		int32_t L_14;
		L_14 = Node_Balance_m3F41DF138CF3E47B24C7AA584A809A9EA44997DE(L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 37));
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_15 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_16;
		L_16 = Node_RotateRight_mF6183B5AC82FD7D9F9B28DCB252D70E4333739AD(L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		return L_16;
	}

IL_004c:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_17 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_18;
		L_18 = Node_DoubleRight_mE2347BBDCF1E532D696FEDFB64B0FFF1ADE60ADF(L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 41));
		return L_18;
	}

IL_0053:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_19 = ___0_tree;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_NodeTreeFromList_m9F091D0683DA583746D2E24F8A8D9668E3BA62CE_gshared (RuntimeObject* ___0_items, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF300D2310959AF105732D339376803869D9B2B91);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* V_2 = NULL;
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* V_3 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_items;
		Requires_NotNull_TisIOrderedCollection_1_t537C6DE6F4F927A415EE775B1FB79BB11C63317F_m9B89E483854B9917E10ECDF3F9CCA00FCF00E320(L_0, _stringLiteralF300D2310959AF105732D339376803869D9B2B91, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		int32_t L_1 = ___2_length;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_2 = ((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 30)))->___EmptyNode;
		return L_2;
	}

IL_0014:
	{
		int32_t L_3 = ___2_length;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_3, 1))/2));
		int32_t L_4 = ___2_length;
		int32_t L_5 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_4, 1)), L_5));
		RuntimeObject* L_6 = ___0_items;
		int32_t L_7 = ___1_start;
		int32_t L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_9;
		L_9 = Node_NodeTreeFromList_m9F091D0683DA583746D2E24F8A8D9668E3BA62CE(L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 44));
		V_2 = L_9;
		RuntimeObject* L_10 = ___0_items;
		int32_t L_11 = ___1_start;
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_14;
		L_14 = Node_NodeTreeFromList_m9F091D0683DA583746D2E24F8A8D9668E3BA62CE(L_10, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_11, L_12)), 1)), L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 44));
		V_3 = L_14;
		RuntimeObject* L_15 = ___0_items;
		int32_t L_16 = ___1_start;
		int32_t L_17 = V_1;
		NullCheck(L_15);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 42), L_15, ((int32_t)il2cpp_codegen_add(L_16, L_17)), (Il2CppFullySharedGenericAny*)L_18);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_19 = V_2;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_20 = V_3;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_21 = (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Node__ctor_m21B1B2AD09D3360E943B62D5A8BEB3C57F0FF8F3(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_22, L_18, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA): *(void**)L_18), L_19, L_20, (bool)1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* Node_Mutate_m3D2DAC123906E4E1DA1A65DE5C9A81FFC293E71F_gshared (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___0_left, Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	const Il2CppFullySharedGenericAny L_9 = L_1;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny G_B3_1 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	memset(G_B3_1, 0, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* G_B2_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_1 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	memset(G_B2_1, 0, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* G_B5_0 = NULL;
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* G_B5_1 = NULL;
	Il2CppFullySharedGenericAny G_B5_2 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	memset(G_B5_2, 0, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* G_B4_0 = NULL;
	Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* G_B4_1 = NULL;
	Il2CppFullySharedGenericAny G_B4_2 = alloca(SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	memset(G_B4_2, 0, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_2 = ___0_left;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_3 = L_2;
		if (L_3)
		{
			G_B3_0 = ((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)L_3);
			il2cpp_codegen_memcpy(G_B3_1, L_1, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
			goto IL_0019;
		}
		G_B2_0 = ((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)L_3);
		il2cpp_codegen_memcpy(G_B2_1, L_1, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_4 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		G_B3_0 = ((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)L_4);
		il2cpp_codegen_memcpy(G_B3_1, G_B2_1, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	}

IL_0019:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_5 = ___1_right;
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_6 = L_5;
		if (L_6)
		{
			G_B5_0 = ((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)L_6);
			G_B5_1 = ((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)G_B3_0);
			il2cpp_codegen_memcpy(G_B5_2, G_B3_1, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
			goto IL_0024;
		}
		G_B4_0 = ((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)L_6);
		G_B4_1 = ((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)G_B3_0);
		il2cpp_codegen_memcpy(G_B4_2, G_B3_1, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_7 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		G_B5_0 = ((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)L_7);
		G_B5_1 = ((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)G_B4_1);
		il2cpp_codegen_memcpy(G_B5_2, G_B4_2, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA);
	}

IL_0024:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_8 = (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		Node__ctor_m21B1B2AD09D3360E943B62D5A8BEB3C57F0FF8F3(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_9, G_B5_2, SizeOf_T_t0095D587AC77DBC0FCF673F1BFA5DADA8251FCDA): *(void**)G_B5_2), G_B5_1, G_B5_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_8;
	}

IL_002b:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_10 = ___0_left;
		if (!L_10)
		{
			goto IL_0035;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_11 = ___0_left;
		il2cpp_codegen_write_instance_field_data<Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_11);
	}

IL_0035:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_12 = ___1_right;
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_13 = ___1_right;
		il2cpp_codegen_write_instance_field_data<Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_13);
	}

IL_003f:
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_14 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		uint8_t L_15 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_16 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		uint8_t L_17 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint8_t L_18;
		L_18 = Math_Max_m12FB4E1302123ADB441E3A7BDF52E8404DDE53A2(L_15, L_17, NULL);
		if (((int64_t)1 + (int64_t)L_18 < (int64_t)kIl2CppInt32Min) || ((int64_t)1 + (int64_t)L_18 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		uint8_t L_19 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,true,false>(((int32_t)il2cpp_codegen_add(1, (int32_t)L_18)),method));
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_19);
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_20 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_22 = *(Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		int32_t L_23 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_22, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(1, L_21)), L_23)));
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__cctor_m9F05260A3B25D7341A25817330D1024EDA0EAFC7_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* L_0 = (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Node__ctor_mDC5E0E80609B0FEFFE87784DBDDB9485F2F27B2B(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 46));
		((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 30)))->___EmptyNode = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 30)))->___EmptyNode), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mBEA2724C6D6A42C977E0C127FD93C9B5C6C3ED46_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Il2CppFullySharedGenericAny ___0_item, uint8_t ___1_color, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_item : &___0_item), SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA);
		Node_set_Item_mAE94673D67914B814978A88A7AD48410FAFB704C_inline(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA): *(void**)L_0), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		uint8_t L_2 = ___1_color;
		Node_set_Color_m7059ED9294523EF76ADB6700781A80CEE58623EC_inline(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_IsNonNullRed_m7DEA5463EEB0E8E9E77DD93296DAEC24DEC70648_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_node, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = ___0_node;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1 = ___0_node;
		NullCheck(L_1);
		bool L_2;
		L_2 = Node_get_IsRed_m38BDAA19CD760AF709513A305B78276A478F53B4(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return L_2;
	}

IL_000a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_IsNullOrBlack_mF0637159A093D68B236533C4424E72C4A06CF141_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_node, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = ___0_node;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1 = ___0_node;
		NullCheck(L_1);
		bool L_2;
		L_2 = Node_get_IsBlack_mBFA1E96F3DB151343552A8E7E675CF01EAC663B7(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return L_2;
	}

IL_000a:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_get_Item_m68FF84117314DB42151562EC40D7DD433F22A81A_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_Item_mAE94673D67914B814978A88A7AD48410FAFB704C_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_value : &___0_value), SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0, SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = *(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = *(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Node_get_Color_m9A8282043129C40F83EE3E6A8F4A49B8DF4480C7_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_Color_m7059ED9294523EF76ADB6700781A80CEE58623EC_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		uint8_t L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_IsBlack_mBFA1E96F3DB151343552A8E7E675CF01EAC663B7_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		uint8_t L_0;
		L_0 = Node_get_Color_m9A8282043129C40F83EE3E6A8F4A49B8DF4480C7_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_IsRed_m38BDAA19CD760AF709513A305B78276A478F53B4_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		uint8_t L_0;
		L_0 = Node_get_Color_m9A8282043129C40F83EE3E6A8F4A49B8DF4480C7_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_Is2Node_m8AF7CE486A033B7038C3F70E4CDAADA5EEB8424F_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = Node_get_IsBlack_mBFA1E96F3DB151343552A8E7E675CF01EAC663B7(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1;
		L_1 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		bool L_2;
		L_2 = Node_IsNullOrBlack_mF0637159A093D68B236533C4424E72C4A06CF141(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3;
		L_3 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		bool L_4;
		L_4 = Node_IsNullOrBlack_mF0637159A093D68B236533C4424E72C4A06CF141(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_4;
	}

IL_0021:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_Is4Node_mFDF1B165F11A13AE520BE364983748C1CB464749_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0;
		L_0 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		bool L_1;
		L_1 = Node_IsNonNullRed_m7DEA5463EEB0E8E9E77DD93296DAEC24DEC70648(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2;
		L_2 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		bool L_3;
		L_3 = Node_IsNonNullRed_m7DEA5463EEB0E8E9E77DD93296DAEC24DEC70648(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_3;
	}

IL_0019:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_set_Color_m7059ED9294523EF76ADB6700781A80CEE58623EC_inline(__this, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_ColorRed_mC0BEFC0741F5D098D452E92F710CA52866EE888E_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_set_Color_m7059ED9294523EF76ADB6700781A80CEE58623EC_inline(__this, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_DeepClone_mD033C4F658FFFAC054BBDE4E4B7FF1B501C2C826_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* V_0 = NULL;
	Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* V_1 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_2 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_3 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_4 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_5 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_6 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B3_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B3_1 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B2_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B2_1 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B4_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B4_1 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B10_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B13_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B13_1 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B12_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B12_1 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B14_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B14_1 = NULL;
	{
		int32_t L_0 = ___0_count;
		int32_t L_1;
		L_1 = SortedSet_1_Log2_m6EDFF3696AB144C4BCA5D85DE8FB595407FBD64F(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_2 = (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		Stack_1__ctor_m0C9F9DA4F66F8441B51E59739F127EAF336D2690(L_2, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_1)), 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_2;
		int32_t L_3 = ___0_count;
		int32_t L_4;
		L_4 = SortedSet_1_Log2_m6EDFF3696AB144C4BCA5D85DE8FB595407FBD64F(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_5 = (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		Stack_1__ctor_m0C9F9DA4F66F8441B51E59739F127EAF336D2690(L_5, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_4)), 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_1 = L_5;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6;
		L_6 = Node_ShallowClone_mA41DD00555236A7C787200DEE41BFE1BA664A66D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_2 = L_6;
		V_3 = __this;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = V_2;
		V_4 = L_7;
		goto IL_0066;
	}

IL_002e:
	{
		CHECK_PAUSE_POINT;
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_8 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9 = V_3;
		NullCheck(L_8);
		Stack_1_Push_m2A8E69C7B1A7D7BBE7EA5A274EE7494A677FE494(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_10 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_11 = V_4;
		NullCheck(L_10);
		Stack_1_Push_m2A8E69C7B1A7D7BBE7EA5A274EE7494A677FE494(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_12 = V_4;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13 = V_3;
		NullCheck(L_13);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_14;
		L_14 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_15 = L_14;
		if (L_15)
		{
			G_B3_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_15);
			G_B3_1 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_12);
			goto IL_004c;
		}
		G_B2_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_15);
		G_B2_1 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_12);
	}
	{
		G_B4_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)(NULL));
		G_B4_1 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)G_B2_1);
		goto IL_0051;
	}

IL_004c:
	{
		NullCheck(G_B3_0);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16;
		L_16 = Node_ShallowClone_mA41DD00555236A7C787200DEE41BFE1BA664A66D(G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		G_B4_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_16);
		G_B4_1 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)G_B3_1);
	}

IL_0051:
	{
		NullCheck(G_B4_1);
		Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline(G_B4_1, G_B4_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_17 = V_3;
		NullCheck(L_17);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_18;
		L_18 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_3 = L_18;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_19 = V_4;
		NullCheck(L_19);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_20;
		L_20 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_4 = L_20;
	}

IL_0066:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_21 = V_3;
		if (L_21)
		{
			goto IL_002e;
		}
	}
	{
		goto IL_00dd;
	}

IL_006b:
	{
		CHECK_PAUSE_POINT;
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_22 = V_0;
		NullCheck(L_22);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_23;
		L_23 = Stack_1_Pop_mEFB4C515D8F6D65E27D842A2890532271A124B1B(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_3 = L_23;
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_24 = V_1;
		NullCheck(L_24);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_25;
		L_25 = Stack_1_Pop_mEFB4C515D8F6D65E27D842A2890532271A124B1B(L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_4 = L_25;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_26 = V_3;
		NullCheck(L_26);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_27;
		L_27 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_5 = L_27;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_28 = V_5;
		if (L_28)
		{
			goto IL_0089;
		}
	}
	{
		G_B10_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)(NULL));
		goto IL_0090;
	}

IL_0089:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_29 = V_5;
		NullCheck(L_29);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_30;
		L_30 = Node_ShallowClone_mA41DD00555236A7C787200DEE41BFE1BA664A66D(L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		G_B10_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_30);
	}

IL_0090:
	{
		V_6 = G_B10_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_31 = V_4;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_32 = V_6;
		NullCheck(L_31);
		Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_inline(L_31, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		goto IL_00d9;
	}

IL_009d:
	{
		CHECK_PAUSE_POINT;
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_33 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_34 = V_5;
		NullCheck(L_33);
		Stack_1_Push_m2A8E69C7B1A7D7BBE7EA5A274EE7494A677FE494(L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_35 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_36 = V_6;
		NullCheck(L_35);
		Stack_1_Push_m2A8E69C7B1A7D7BBE7EA5A274EE7494A677FE494(L_35, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_37 = V_6;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_38 = V_5;
		NullCheck(L_38);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_39;
		L_39 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_40 = L_39;
		if (L_40)
		{
			G_B13_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_40);
			G_B13_1 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_37);
			goto IL_00bd;
		}
		G_B12_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_40);
		G_B12_1 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_37);
	}
	{
		G_B14_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)(NULL));
		G_B14_1 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)G_B12_1);
		goto IL_00c2;
	}

IL_00bd:
	{
		NullCheck(G_B13_0);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_41;
		L_41 = Node_ShallowClone_mA41DD00555236A7C787200DEE41BFE1BA664A66D(G_B13_0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		G_B14_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_41);
		G_B14_1 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)G_B13_1);
	}

IL_00c2:
	{
		NullCheck(G_B14_1);
		Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline(G_B14_1, G_B14_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_42 = V_5;
		NullCheck(L_42);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_43;
		L_43 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_5 = L_43;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_44 = V_6;
		NullCheck(L_44);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_45;
		L_45 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_6 = L_45;
	}

IL_00d9:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_46 = V_5;
		if (L_46)
		{
			goto IL_009d;
		}
	}

IL_00dd:
	{
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = Stack_1_get_Count_mE54F3425BF9ECF21A2D32E5E1BED64E4B9820C5C_inline(L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (L_48)
		{
			goto IL_006b;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_49 = V_2;
		return L_49;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Node_GetRotation_mA00FE32D62B12052C808C181BB43663CD50F9415_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_current, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___1_sibling, const RuntimeMethod* method) 
{
	bool V_0 = false;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0;
		L_0 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1 = ___0_current;
		V_0 = (bool)((((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_0) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_1))? 1 : 0);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = ___1_sibling;
		NullCheck(L_2);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3;
		L_3 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		bool L_4;
		L_4 = Node_IsNonNullRed_m7DEA5463EEB0E8E9E77DD93296DAEC24DEC70648(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		return (uint8_t)(1);
	}

IL_001c:
	{
		return (uint8_t)(0);
	}

IL_001e:
	{
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_0023;
		}
	}
	{
		return (uint8_t)(2);
	}

IL_0023:
	{
		return (uint8_t)(3);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_GetSibling_mB625633B102BBDFE5F41299F6267CA5ADE121F7B_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_node, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = ___0_node;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1;
		L_1 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		if ((((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_0) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2;
		L_2 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
	}

IL_0010:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3;
		L_3 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_ShallowClone_mA41DD00555236A7C787200DEE41BFE1BA664A66D_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_get_Item_m68FF84117314DB42151562EC40D7DD433F22A81A_inline(__this, (Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		uint8_t L_1;
		L_1 = Node_get_Color_m9A8282043129C40F83EE3E6A8F4A49B8DF4480C7_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		Node__ctor_mBEA2724C6D6A42C977E0C127FD93C9B5C6C3ED46(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_3, L_0, SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA): *(void**)L_0), L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Split4Node_m960AE03834591C1712000909D02B385C3B02BAB2_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_ColorRed_mC0BEFC0741F5D098D452E92F710CA52866EE888E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0;
		L_0 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_0);
		Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1;
		L_1 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NullCheck(L_1);
		Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_Rotate_m35AC1F7925B2C3CE36107CCEBDE469D07AF0906B_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, uint8_t ___0_rotation, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		uint8_t L_0 = ___0_rotation;
		switch (L_0)
		{
			case 0:
			{
				goto IL_002f;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_0018;
			}
			case 3:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_0054;
	}

IL_0018:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1;
		L_1 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_1);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2;
		L_2 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_2);
		Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3;
		L_3 = Node_RotateRight_m661C39CAE7E7B5ACE3337716C071282A25410754(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_3;
	}

IL_002f:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4;
		L_4 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NullCheck(L_4);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_5;
		L_5 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NullCheck(L_5);
		Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6;
		L_6 = Node_RotateLeft_m47E39EB54C7F9E8C64C92920DA54FCA130CBED60(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return L_6;
	}

IL_0046:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7;
		L_7 = Node_RotateRightLeft_mCDB26CEDA5347E3701560D24175DE5132957EB0A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_7;
	}

IL_004d:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_8;
		L_8 = Node_RotateLeftRight_m764791D159A6B0773A3ECE5274370B76618C4723(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_8;
	}

IL_0054:
	{
		return (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateLeft_m47E39EB54C7F9E8C64C92920DA54FCA130CBED60_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0;
		L_0 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1 = V_0;
		NullCheck(L_1);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2;
		L_2 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_inline(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = V_0;
		NullCheck(L_3);
		Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline(L_3, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateLeftRight_m764791D159A6B0773A3ECE5274370B76618C4723_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0;
		L_0 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1 = V_0;
		NullCheck(L_1);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2;
		L_2 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_2;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = V_1;
		NullCheck(L_3);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4;
		L_4 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_5 = V_1;
		NullCheck(L_5);
		Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_inline(L_5, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = V_1;
		NullCheck(L_7);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_8;
		L_8 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_6);
		Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_inline(L_6, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10 = V_0;
		NullCheck(L_9);
		Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateRight_m661C39CAE7E7B5ACE3337716C071282A25410754_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0;
		L_0 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1 = V_0;
		NullCheck(L_1);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2;
		L_2 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = V_0;
		NullCheck(L_3);
		Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_inline(L_3, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_RotateRightLeft_mCDB26CEDA5347E3701560D24175DE5132957EB0A_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0;
		L_0 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1 = V_0;
		NullCheck(L_1);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2;
		L_2 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_1 = L_2;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = V_1;
		NullCheck(L_3);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4;
		L_4 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_inline(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_5 = V_1;
		NullCheck(L_5);
		Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline(L_5, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = V_1;
		NullCheck(L_7);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_8;
		L_8 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NullCheck(L_6);
		Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline(L_6, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10 = V_0;
		NullCheck(L_9);
		Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_inline(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Merge2Nodes_m397190D0DD62B5C95EACC46C5141D97A6BBB336B_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_ColorBlack_m554C87E9D5AD0ADB6A902304250FAA57A54F825B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0;
		L_0 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_0);
		Node_ColorRed_mC0BEFC0741F5D098D452E92F710CA52866EE888E(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1;
		L_1 = Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NullCheck(L_1);
		Node_ColorRed_mC0BEFC0741F5D098D452E92F710CA52866EE888E(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_ReplaceChild_m3E75134C4FABC8431084752970B8A998B7A14E93_gshared (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_child, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___1_newChild, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0;
		L_0 = Node_get_Left_mD23FA6BC3C46DFD8B617C170679758B4CAD040BA_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1 = ___0_child;
		if ((!(((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_0) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_1))))
		{
			goto IL_0011;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = ___1_newChild;
		Node_set_Left_m10D4F9186C1A64697D34CCABCF43FC00A7298A22_inline(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}

IL_0011:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = ___1_newChild;
		Node_set_Right_m328D8AE1CC50D9CDB957D75E19426A6F6712F05E_inline(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m9BEF41075B57C98D7C04F3FF85A226FC476BF242_gshared (Node_tC5111E77A2002D0AD173457666915D4D0BD59865* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_hashcode, Node_tC5111E77A2002D0AD173457666915D4D0BD59865* ___3_next, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tC6F0FE52B8DD1F822B33ED0E88C27FC48D740BBC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const uint32_t SizeOf_TValue_t898A90EFFC2A0FF1435A8C8E7342AC08F7B17AD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tC6F0FE52B8DD1F822B33ED0E88C27FC48D740BBC);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t898A90EFFC2A0FF1435A8C8E7342AC08F7B17AD5);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_key : &___0_key), SizeOf_TKey_tC6F0FE52B8DD1F822B33ED0E88C27FC48D740BBC);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0), L_0, SizeOf_TKey_tC6F0FE52B8DD1F822B33ED0E88C27FC48D740BBC);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___1_value : &___1_value), SizeOf_TValue_t898A90EFFC2A0FF1435A8C8E7342AC08F7B17AD5);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), L_1, SizeOf_TValue_t898A90EFFC2A0FF1435A8C8E7342AC08F7B17AD5);
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_2 = ___3_next;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_write_instance_field_data<Node_tC5111E77A2002D0AD173457666915D4D0BD59865*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), L_2);
		int32_t L_3 = ___2_hashcode;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), L_3);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m568035BE054FA345461F656D5D8C70C52F86AF13_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), (bool)1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mD23E27629566B8D4468764E2D77949AF03A2AB6C_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___2_left, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___3_right, bool ___4_frozen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		Requires_NotNullAllowStructs_TisIl2CppFullySharedGenericAny_mFA636B145D75366207FFFFDC501FD701260F4485((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_0), _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_2 = ___2_left;
		Requires_NotNull_TisNode_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA_mCC24F1A17F24FD312AC86A3A3B49F8C10EAC6411(L_2, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_3 = ___3_right;
		Requires_NotNull_TisNode_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA_mCC24F1A17F24FD312AC86A3A3B49F8C10EAC6411(L_3, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_4, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_5, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_6 = ___2_left;
		il2cpp_codegen_write_instance_field_data<Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_6);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_7 = ___3_right;
		il2cpp_codegen_write_instance_field_data<Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_7);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_8 = ___2_left;
		uint8_t L_9 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_10 = ___3_right;
		uint8_t L_11 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint8_t L_12;
		L_12 = Math_Max_m12FB4E1302123ADB441E3A7BDF52E8404DDE53A2(L_9, L_11, NULL);
		if (((int64_t)1 + (int64_t)L_12 < (int64_t)kIl2CppInt32Min) || ((int64_t)1 + (int64_t)L_12 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		uint8_t L_13 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,true,false>(((int32_t)il2cpp_codegen_add(1, (int32_t)L_12)),method));
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_13);
		bool L_14 = ___4_frozen;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_14);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_0 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return (bool)((((RuntimeObject*)(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_System_Collections_Immutable_IBinaryTreeU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_Left_m46467BF51646FAF5B15CE7E0EF868DE5DE548C9F_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_0 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_System_Collections_Immutable_IBinaryTreeU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_Right_mC58EEEF31D0622D7574C7C1256501AF986486C96_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_0 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_get_Height_mD69390AD41D7CD4C92DD309A45695193516406A6_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_get_Left_m1018A677DB87DAD4644D8C51411C760A61C50103_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_0 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_System_Collections_Immutable_IBinaryTree_get_Left_m631D199855416F59A604FDF6DA9DB6ADD4CA4CF6_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_0 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_get_Right_m5AAB08A56D54051257540F4D7CC40C05D39EEBA2_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_0 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_System_Collections_Immutable_IBinaryTree_get_Right_m28E86F8A8AEB195A88074A3271C7B7198417710A_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_0 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_get_Value_m42019D1F5695EFF25FA0060876A195C7AAEADBD0_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const uint32_t SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_4 = alloca(SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		memset(L_4, 0, SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_0, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? il2cpp_codegen_memcpy(L_3, L_1, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4): *(void**)L_1), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_System_Collections_Immutable_IBinaryTree_get_Count_mC184A5ACF8CBAEEBE5BDA50330DE7B9FB77FBAC6_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_get_Keys_m0123656AA61C9391B49539B24327C7D2D8C76686_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7* G_B2_0 = NULL;
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* G_B2_1 = NULL;
	Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7* G_B1_0 = NULL;
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* G_B1_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
		Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7* L_0 = ((U3CU3Ec_t6B7267D784767290B17500D08316EBC6D3C29BF0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)))->___U3CU3E9__30_0;
		Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = ((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)__this);
			goto IL_0020;
		}
		G_B1_0 = L_1;
		G_B1_1 = ((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)__this);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
		U3CU3Ec_t6B7267D784767290B17500D08316EBC6D3C29BF0* L_2 = ((U3CU3Ec_t6B7267D784767290B17500D08316EBC6D3C29BF0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)))->___U3CU3E9;
		Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7* L_3 = (Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
		Func_2__ctor_m14F07CBF38E3835887237FFF52B0AB25A77A4969(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7* L_4 = L_3;
		((U3CU3Ec_t6B7267D784767290B17500D08316EBC6D3C29BF0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)))->___U3CU3E9__30_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6B7267D784767290B17500D08316EBC6D3C29BF0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)))->___U3CU3E9__30_0), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = ((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)G_B1_1);
	}

IL_0020:
	{
		RuntimeObject* L_5;
		L_5 = Enumerable_Select_TisKeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669_TisIl2CppFullySharedGenericAny_m6084F8E8FC14FA9CC78EF7F9B84F39C241ECDA5D((RuntimeObject*)G_B2_1, G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_get_Values_m9E2D5A927322F5D1B9477BB65855FB983462F730_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7* G_B2_0 = NULL;
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* G_B2_1 = NULL;
	Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7* G_B1_0 = NULL;
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* G_B1_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
		Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7* L_0 = ((U3CU3Ec_t6B7267D784767290B17500D08316EBC6D3C29BF0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)))->___U3CU3E9__32_0;
		Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = ((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)__this);
			goto IL_0020;
		}
		G_B1_0 = L_1;
		G_B1_1 = ((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)__this);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
		U3CU3Ec_t6B7267D784767290B17500D08316EBC6D3C29BF0* L_2 = ((U3CU3Ec_t6B7267D784767290B17500D08316EBC6D3C29BF0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)))->___U3CU3E9;
		Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7* L_3 = (Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
		Func_2__ctor_m14F07CBF38E3835887237FFF52B0AB25A77A4969(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		Func_2_t25D50061B50E362D74749AFAEACC346CD73B3EB7* L_4 = L_3;
		((U3CU3Ec_t6B7267D784767290B17500D08316EBC6D3C29BF0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)))->___U3CU3E9__32_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6B7267D784767290B17500D08316EBC6D3C29BF0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)))->___U3CU3E9__32_0), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = ((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)G_B1_1);
	}

IL_0020:
	{
		RuntimeObject* L_5;
		L_5 = Enumerable_Select_TisKeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669_TisIl2CppFullySharedGenericAny_m6084F8E8FC14FA9CC78EF7F9B84F39C241ECDA5D((RuntimeObject*)G_B2_1, G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8863E236B80E2F682B73BA402804D799D1897355 Node_GetEnumerator_m6F3B0583D7C7B24DA0B71F03AB42C9D0B13B5ECE_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Enumerator_t8863E236B80E2F682B73BA402804D799D1897355 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF905FF082FDC2C026BBE7AF1A97BEE6A5797C5C4((&L_0), __this, (Builder_tFA7DD71241FF9863641DD1A4349C2AB38787646A*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mF41C0832E0E203F4C7CCC0CCF00AC72F838C718E_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Enumerator_t8863E236B80E2F682B73BA402804D799D1897355 L_0;
		L_0 = Node_GetEnumerator_m6F3B0583D7C7B24DA0B71F03AB42C9D0B13B5ECE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Enumerator_t8863E236B80E2F682B73BA402804D799D1897355 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_System_Collections_IEnumerable_GetEnumerator_m8830EC04DE2F8F24B01EFD36E662CD7F80C3B96A_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Enumerator_t8863E236B80E2F682B73BA402804D799D1897355 L_0;
		L_0 = Node_GetEnumerator_m6F3B0583D7C7B24DA0B71F03AB42C9D0B13B5ECE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Enumerator_t8863E236B80E2F682B73BA402804D799D1897355 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8863E236B80E2F682B73BA402804D799D1897355 Node_GetEnumerator_mBA1D77E243F2B6AE2D1476EBE03060B56EBF8C80_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Builder_tFA7DD71241FF9863641DD1A4349C2AB38787646A* ___0_builder, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Builder_tFA7DD71241FF9863641DD1A4349C2AB38787646A* L_0 = ___0_builder;
		Enumerator_t8863E236B80E2F682B73BA402804D799D1897355 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mF905FF082FDC2C026BBE7AF1A97BEE6A5797C5C4((&L_1), __this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_CopyTo_mAD68B1C837B897B62A84834175DC6EE795ABCAEF_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_dictionarySize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_7 = alloca(SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_11 = alloca(SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
	Enumerator_t8863E236B80E2F682B73BA402804D799D1897355 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_1 = alloca(SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
	memset(V_1, 0, SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		Requires_NotNull_TisKeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57_m14D2DA5E3B83E15EDC3A6ACC0863D9A5CCF35E05(L_0, _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_1 = ___1_arrayIndex;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4, (String_t*)NULL, NULL);
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		int32_t L_4 = ___1_arrayIndex;
		int32_t L_5 = ___2_dictionarySize;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_3) < ((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4, (String_t*)NULL, NULL);
		Enumerator_t8863E236B80E2F682B73BA402804D799D1897355 L_6;
		L_6 = Node_GetEnumerator_m6F3B0583D7C7B24DA0B71F03AB42C9D0B13B5ECE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005c:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_m09CF79F695ED10889599A9A14CD5BA39C3B8A703((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0051_1;
			}

IL_003c_1:
			{
				CHECK_PAUSE_POINT;
				Enumerator_get_Current_m333AA8CC640EC04D4495E6AEDA61180178B18C7F((&V_0), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
				il2cpp_codegen_memcpy(V_1, L_7, SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_8 = ___0_array;
				int32_t L_9 = ___1_arrayIndex;
				int32_t L_10 = L_9;
				___1_arrayIndex = ((int32_t)il2cpp_codegen_add(L_10, 1));
				il2cpp_codegen_memcpy(L_11, V_1, SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
				NullCheck(L_8);
				il2cpp_codegen_memcpy((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), L_11, SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), (void**)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), (void*)L_11);
			}

IL_0051_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_m59A1977AEB30FCB7AB750ACB18097DB3D37FF9C7((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
				if (L_12)
				{
					goto IL_003c_1;
				}
			}
			{
				goto IL_006a;
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

IL_006a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_CopyTo_m3EE00085DD63642DC6987B18C17246A0D66BF728_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_dictionarySize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Requires_NotNull_TisRuntimeArray_mEA688B1EA5C572D7FC545A7E12223DA6C4C902D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const uint32_t SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const uint32_t SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_7 = alloca(SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
	Enumerator_t8863E236B80E2F682B73BA402804D799D1897355 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_1 = alloca(SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
	memset(V_1, 0, SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeArray* L_0 = ___0_array;
		Requires_NotNull_TisRuntimeArray_mEA688B1EA5C572D7FC545A7E12223DA6C4C902D5(L_0, _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED, Requires_NotNull_TisRuntimeArray_mEA688B1EA5C572D7FC545A7E12223DA6C4C902D5_RuntimeMethod_var);
		int32_t L_1 = ___1_arrayIndex;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4, (String_t*)NULL, NULL);
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_length(L_2);
		int32_t L_4 = ___1_arrayIndex;
		int32_t L_5 = ___2_dictionarySize;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_3) < ((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4, (String_t*)NULL, NULL);
		Enumerator_t8863E236B80E2F682B73BA402804D799D1897355 L_6;
		L_6 = Node_GetEnumerator_m6F3B0583D7C7B24DA0B71F03AB42C9D0B13B5ECE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0080:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_m09CF79F695ED10889599A9A14CD5BA39C3B8A703((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0075_1;
			}

IL_003f_1:
			{
				CHECK_PAUSE_POINT;
				Enumerator_get_Current_m333AA8CC640EC04D4495E6AEDA61180178B18C7F((&V_0), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
				il2cpp_codegen_memcpy(V_1, L_7, SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
				RuntimeArray* L_8 = ___0_array;
				KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_1, (Il2CppFullySharedGenericAny*)L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
				RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_9);
				KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_1, (Il2CppFullySharedGenericAny*)L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
				RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), L_11);
				DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_13;
				memset((&L_13), 0, sizeof(L_13));
				DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_13), L_10, L_12, NULL);
				DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_14 = L_13;
				RuntimeObject* L_15 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_14);
				int32_t L_16 = ___1_arrayIndex;
				int32_t L_17 = L_16;
				___1_arrayIndex = ((int32_t)il2cpp_codegen_add(L_17, 1));
				NullCheck(L_8);
				Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_8, L_15, L_17, NULL);
			}

IL_0075_1:
			{
				bool L_18;
				L_18 = Enumerator_MoveNext_m59A1977AEB30FCB7AB750ACB18097DB3D37FF9C7((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
				if (L_18)
				{
					goto IL_003f_1;
				}
			}
			{
				goto IL_008e;
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

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_NodeTreeFromSortedDictionary_m2CFE032639BE8F9EC0454B69BACB34F3D001992E_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* ___0_dictionary, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* L_0 = ___0_dictionary;
		Requires_NotNull_TisSortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232_m4492C418237855C50B3C8071D8F075C82965FFB6(L_0, _stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 38));
		SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* L_1 = ___0_dictionary;
		RuntimeObject* L_2;
		L_2 = ImmutableExtensions_AsOrderedCollection_TisKeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669_mC5F07C6FBB4C7440BAA5D039361D39DF9874A8B8((RuntimeObject*)L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 39));
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 40), L_4);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_6;
		L_6 = Node_NodeTreeFromList_m62B6B941853B68240A874A941AD137AA9E383E67(L_3, 0, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 42));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_Add_mF3AFF2B9FE2F4665A1C1BF4370E837929BFEEF64_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, RuntimeObject* ___2_keyComparer, RuntimeObject* ___3_valueComparer, bool* ___4_mutated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8161BDFF52A5B15D4FB712E79CA5989CCC96AA79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECF97F9F3209775CC5BF032CE88B6A0C2F18015C);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	bool V_0 = false;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		Requires_NotNullAllowStructs_TisIl2CppFullySharedGenericAny_mFA636B145D75366207FFFFDC501FD701260F4485((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_0), _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RuntimeObject* L_2 = ___2_keyComparer;
		Requires_NotNull_TisIComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA_mEC20092BEB80345758B8491843633720521A2C58(L_2, _stringLiteral8161BDFF52A5B15D4FB712E79CA5989CCC96AA79, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		RuntimeObject* L_3 = ___3_valueComparer;
		Requires_NotNull_TisIEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122_mA3F3C9A20AC4B85A865AB750DB5C26DECF6620F0(L_3, _stringLiteralECF97F9F3209775CC5BF032CE88B6A0C2F18015C, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		RuntimeObject* L_6 = ___2_keyComparer;
		RuntimeObject* L_7 = ___3_valueComparer;
		bool* L_8 = ___4_mutated;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_11;
		L_11 = Node_SetOrAdd_m8B86F90CE4CCB870E9B3A640E56C0FED9994BDCD(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_9, L_4, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? il2cpp_codegen_memcpy(L_10, L_5, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4): *(void**)L_5), L_6, L_7, (bool)0, (&V_0), L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_SetItem_mD03CC6A253CEA88C99874A6580BE35A78720B9AD_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, RuntimeObject* ___2_keyComparer, RuntimeObject* ___3_valueComparer, bool* ___4_replacedExistingValue, bool* ___5_mutated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8161BDFF52A5B15D4FB712E79CA5989CCC96AA79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECF97F9F3209775CC5BF032CE88B6A0C2F18015C);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		Requires_NotNullAllowStructs_TisIl2CppFullySharedGenericAny_mFA636B145D75366207FFFFDC501FD701260F4485((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_0), _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RuntimeObject* L_2 = ___2_keyComparer;
		Requires_NotNull_TisIComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA_mEC20092BEB80345758B8491843633720521A2C58(L_2, _stringLiteral8161BDFF52A5B15D4FB712E79CA5989CCC96AA79, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		RuntimeObject* L_3 = ___3_valueComparer;
		Requires_NotNull_TisIEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122_mA3F3C9A20AC4B85A865AB750DB5C26DECF6620F0(L_3, _stringLiteralECF97F9F3209775CC5BF032CE88B6A0C2F18015C, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		RuntimeObject* L_6 = ___2_keyComparer;
		RuntimeObject* L_7 = ___3_valueComparer;
		bool* L_8 = ___4_replacedExistingValue;
		bool* L_9 = ___5_mutated;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_12;
		L_12 = Node_SetOrAdd_m8B86F90CE4CCB870E9B3A640E56C0FED9994BDCD(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_10, L_4, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? il2cpp_codegen_memcpy(L_11, L_5, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4): *(void**)L_5), L_6, L_7, (bool)1, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_Remove_m265E5CC12EE8ACF394EEA8E1F9AF920DBF2E84A0_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_keyComparer, bool* ___2_mutated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8161BDFF52A5B15D4FB712E79CA5989CCC96AA79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		Requires_NotNullAllowStructs_TisIl2CppFullySharedGenericAny_mFA636B145D75366207FFFFDC501FD701260F4485((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_0), _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RuntimeObject* L_2 = ___1_keyComparer;
		Requires_NotNull_TisIComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA_mEC20092BEB80345758B8491843633720521A2C58(L_2, _stringLiteral8161BDFF52A5B15D4FB712E79CA5989CCC96AA79, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		RuntimeObject* L_4 = ___1_keyComparer;
		bool* L_5 = ___2_mutated;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_7;
		L_7 = Node_RemoveRecursive_mCAB60623F8107ED6FE89993718E83F0E54F5FEAA(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_6, L_3, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_3), L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Node_ValueRef_mF80B7150749066AE5B6376727777F93B54907FBB_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_keyComparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8161BDFF52A5B15D4FB712E79CA5989CCC96AA79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		Requires_NotNullAllowStructs_TisIl2CppFullySharedGenericAny_mFA636B145D75366207FFFFDC501FD701260F4485((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_0), _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RuntimeObject* L_2 = ___1_keyComparer;
		Requires_NotNull_TisIComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA_mEC20092BEB80345758B8491843633720521A2C58(L_2, _stringLiteral8161BDFF52A5B15D4FB712E79CA5989CCC96AA79, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		RuntimeObject* L_4 = ___1_keyComparer;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_6;
		L_6 = Node_Search_mC575BB604ECA70ECABCC82933DB968DC582D88EE(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_5, L_3, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_3), L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_0 = L_6;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t94F426715F6702F0295747008794B9AC9DF5757F_il2cpp_TypeInfo_var)));
		String_t* L_9;
		L_9 = SR_get_Arg_KeyNotFoundWithKey_mFEA2BD79E749F50C4604903D6C74E92203149BE7(NULL);
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 53), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), &L_11, L_10);
		typedef String_t* ( *func_L_13)(void*,const RuntimeMethod*);
		String_t* L_14 = ((func_L_13)L_12)(L_11.thisPtr,L_11.method);
		String_t* L_15;
		L_15 = SR_Format_m15C2107D9AC3B0DBA15121DB9A582AB29DCAFDA4(L_9, (RuntimeObject*)L_14, NULL);
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_16 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0044:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_17 = V_0;
		return (((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_TryGetValue_m1323ED4DFDCA8B7AEDD49285EFA3853CA2F57C16_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_keyComparer, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8161BDFF52A5B15D4FB712E79CA5989CCC96AA79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		Requires_NotNullAllowStructs_TisIl2CppFullySharedGenericAny_mFA636B145D75366207FFFFDC501FD701260F4485((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_0), _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RuntimeObject* L_2 = ___1_keyComparer;
		Requires_NotNull_TisIComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA_mEC20092BEB80345758B8491843633720521A2C58(L_2, _stringLiteral8161BDFF52A5B15D4FB712E79CA5989CCC96AA79, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		RuntimeObject* L_4 = ___1_keyComparer;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_6;
		L_6 = Node_Search_mC575BB604ECA70ECABCC82933DB968DC582D88EE(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_5, L_3, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_3), L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_0 = L_6;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_9 = ___2_value;
		il2cpp_codegen_initobj(L_9, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		return (bool)0;
	}

IL_0030:
	{
		Il2CppFullySharedGenericAny* L_10 = ___2_value;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_11 = V_0;
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_10, L_12, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_10, (void*)L_12);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_TryGetKey_m21624959A07935FA985C99CF189D0241065E2543_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_equalKey, RuntimeObject* ___1_keyComparer, Il2CppFullySharedGenericAny* ___2_actualKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral281B12C8C5558E50A8864EE103FF46766E9540F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8161BDFF52A5B15D4FB712E79CA5989CCC96AA79);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_13 = L_0;
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_equalKey : &___0_equalKey), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		Requires_NotNullAllowStructs_TisIl2CppFullySharedGenericAny_mFA636B145D75366207FFFFDC501FD701260F4485((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_0), _stringLiteral281B12C8C5558E50A8864EE103FF46766E9540F7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RuntimeObject* L_2 = ___1_keyComparer;
		Requires_NotNull_TisIComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA_mEC20092BEB80345758B8491843633720521A2C58(L_2, _stringLiteral8161BDFF52A5B15D4FB712E79CA5989CCC96AA79, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_equalKey : &___0_equalKey), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		RuntimeObject* L_4 = ___1_keyComparer;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_6;
		L_6 = Node_Search_mC575BB604ECA70ECABCC82933DB968DC582D88EE(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_5, L_3, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_3), L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_0 = L_6;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_9 = ___2_actualKey;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_equalKey : &___0_equalKey), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_9, L_10, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_9, (void*)L_10);
		return (bool)0;
	}

IL_0030:
	{
		Il2CppFullySharedGenericAny* L_11 = ___2_actualKey;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_12 = V_0;
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_11, L_13, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_11, (void*)L_13);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_ContainsKey_m94931B11BA1336D68C138D4ECE00552279EC49EB_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_keyComparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8161BDFF52A5B15D4FB712E79CA5989CCC96AA79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		Requires_NotNullAllowStructs_TisIl2CppFullySharedGenericAny_mFA636B145D75366207FFFFDC501FD701260F4485((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_0), _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RuntimeObject* L_2 = ___1_keyComparer;
		Requires_NotNull_TisIComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA_mEC20092BEB80345758B8491843633720521A2C58(L_2, _stringLiteral8161BDFF52A5B15D4FB712E79CA5989CCC96AA79, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		RuntimeObject* L_4 = ___1_keyComparer;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_6;
		L_6 = Node_Search_mC575BB604ECA70ECABCC82933DB968DC582D88EE(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_5, L_3, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_3), L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		NullCheck(L_6);
		bool L_7;
		L_7 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		return (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_ContainsValue_mAF67F0617BB8EA9FAF91EE73302F7288E3FADA5C_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_value, RuntimeObject* ___1_valueComparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECF97F9F3209775CC5BF032CE88B6A0C2F18015C);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const uint32_t SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_2 = alloca(SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
	Enumerator_t8863E236B80E2F682B73BA402804D799D1897355 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_1 = alloca(SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
	memset(V_1, 0, SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
	bool V_2 = false;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___1_valueComparer;
		Requires_NotNull_TisIEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122_mA3F3C9A20AC4B85A865AB750DB5C26DECF6620F0(L_0, _stringLiteralECF97F9F3209775CC5BF032CE88B6A0C2F18015C, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		Enumerator_t8863E236B80E2F682B73BA402804D799D1897355 L_1;
		L_1 = Node_GetEnumerator_m6F3B0583D7C7B24DA0B71F03AB42C9D0B13B5ECE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				Enumerator_Dispose_m09CF79F695ED10889599A9A14CD5BA39C3B8A703((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0030_1;
			}

IL_0014_1:
			{
				CHECK_PAUSE_POINT;
				Enumerator_get_Current_m333AA8CC640EC04D4495E6AEDA61180178B18C7F((&V_0), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
				il2cpp_codegen_memcpy(V_1, L_2, SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
				RuntimeObject* L_3 = ___1_valueComparer;
				il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_value : &___0_value), SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
				KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_1, (Il2CppFullySharedGenericAny*)L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
				NullCheck(L_3);
				bool L_6;
				L_6 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 47), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_4: *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_5: *(void**)L_5));
				if (!L_6)
				{
					goto IL_0030_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_004b;
			}

IL_0030_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_m59A1977AEB30FCB7AB750ACB18097DB3D37FF9C7((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
				if (L_7)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0049;
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

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_Contains_mAB34017339082C123C52A86F88190F50AC12A406_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_pair, RuntimeObject* ___1_keyComparer, RuntimeObject* ___2_valueComparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8161BDFF52A5B15D4FB712E79CA5989CCC96AA79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECF97F9F3209775CC5BF032CE88B6A0C2F18015C);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_pair, (Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		Requires_NotNullAllowStructs_TisIl2CppFullySharedGenericAny_mFA636B145D75366207FFFFDC501FD701260F4485((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_0), _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RuntimeObject* L_2 = ___1_keyComparer;
		Requires_NotNull_TisIComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA_mEC20092BEB80345758B8491843633720521A2C58(L_2, _stringLiteral8161BDFF52A5B15D4FB712E79CA5989CCC96AA79, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		RuntimeObject* L_3 = ___2_valueComparer;
		Requires_NotNull_TisIEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122_mA3F3C9A20AC4B85A865AB750DB5C26DECF6620F0(L_3, _stringLiteralECF97F9F3209775CC5BF032CE88B6A0C2F18015C, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_pair, (Il2CppFullySharedGenericAny*)L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		RuntimeObject* L_5 = ___1_keyComparer;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_7;
		L_7 = Node_Search_mC575BB604ECA70ECABCC82933DB968DC582D88EE(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_6, L_4, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_4), L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_0 = L_7;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0040:
	{
		RuntimeObject* L_10 = ___2_valueComparer;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_11 = V_0;
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_pair, (Il2CppFullySharedGenericAny*)L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		NullCheck(L_10);
		bool L_14;
		L_14 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 47), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_12: *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_13: *(void**)L_13));
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Freeze_m6000D3CB2C2486401AE5BAED216ABE5BD1EC0CF4_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_1 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_1);
		Node_Freeze_m6000D3CB2C2486401AE5BAED216ABE5BD1EC0CF4(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_2 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_2);
		Node_Freeze_m6000D3CB2C2486401AE5BAED216ABE5BD1EC0CF4(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), (bool)1);
	}

IL_0025:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_RotateLeft_m186FF931DDF82573341193C671623860D4115A85_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_0 = ___0_tree;
		Requires_NotNull_TisNode_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA_mCC24F1A17F24FD312AC86A3A3B49F8C10EAC6411(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_1 = ___0_tree;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_2 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		NullCheck(L_2);
		bool L_3;
		L_3 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 52));
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_4 = ___0_tree;
		return L_4;
	}

IL_001a:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_5 = ___0_tree;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_6 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		V_0 = L_6;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_7 = V_0;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_8 = ___0_tree;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_9 = V_0;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_10 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		NullCheck(L_8);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_11;
		L_11 = Node_Mutate_mDD3C860233B7D3DA02913EB2861F6016D1EE4343(L_8, (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)NULL, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
		NullCheck(L_7);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_12;
		L_12 = Node_Mutate_mDD3C860233B7D3DA02913EB2861F6016D1EE4343(L_7, L_11, (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)NULL, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_RotateRight_m3C892921A470A2C360A2D8D95B3CEC0DC6CF71E8_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_0 = ___0_tree;
		Requires_NotNull_TisNode_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA_mCC24F1A17F24FD312AC86A3A3B49F8C10EAC6411(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_1 = ___0_tree;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_2 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		NullCheck(L_2);
		bool L_3;
		L_3 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 52));
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_4 = ___0_tree;
		return L_4;
	}

IL_001a:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_5 = ___0_tree;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_6 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		V_0 = L_6;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_7 = V_0;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_8 = ___0_tree;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_9 = V_0;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_10 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		NullCheck(L_8);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_11;
		L_11 = Node_Mutate_mDD3C860233B7D3DA02913EB2861F6016D1EE4343(L_8, L_10, (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)NULL, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
		NullCheck(L_7);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_12;
		L_12 = Node_Mutate_mDD3C860233B7D3DA02913EB2861F6016D1EE4343(L_7, (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)NULL, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_DoubleLeft_m60C97BE3A5A21892D5BB1FDB4F7F14DA67936D2C_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_0 = ___0_tree;
		Requires_NotNull_TisNode_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA_mCC24F1A17F24FD312AC86A3A3B49F8C10EAC6411(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_1 = ___0_tree;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_2 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		NullCheck(L_2);
		bool L_3;
		L_3 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 52));
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_4 = ___0_tree;
		return L_4;
	}

IL_001a:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_5 = ___0_tree;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_6 = ___0_tree;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_7 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_8;
		L_8 = Node_RotateRight_m3C892921A470A2C360A2D8D95B3CEC0DC6CF71E8(L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 61));
		NullCheck(L_5);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_9;
		L_9 = Node_Mutate_mDD3C860233B7D3DA02913EB2861F6016D1EE4343(L_5, (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)NULL, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
		V_0 = L_9;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_10 = V_0;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_11;
		L_11 = Node_RotateLeft_m186FF931DDF82573341193C671623860D4115A85(L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_DoubleRight_mB57BDC0260F3130F76F43A80471A0A50BE8F582E_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_0 = ___0_tree;
		Requires_NotNull_TisNode_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA_mCC24F1A17F24FD312AC86A3A3B49F8C10EAC6411(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_1 = ___0_tree;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_2 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		NullCheck(L_2);
		bool L_3;
		L_3 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 52));
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_4 = ___0_tree;
		return L_4;
	}

IL_001a:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_5 = ___0_tree;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_6 = ___0_tree;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_7 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_8;
		L_8 = Node_RotateLeft_m186FF931DDF82573341193C671623860D4115A85(L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
		NullCheck(L_5);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_9;
		L_9 = Node_Mutate_mDD3C860233B7D3DA02913EB2861F6016D1EE4343(L_5, L_8, (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)NULL, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
		V_0 = L_9;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_10 = V_0;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_11;
		L_11 = Node_RotateRight_m3C892921A470A2C360A2D8D95B3CEC0DC6CF71E8(L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 61));
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_Balance_m2C358001DA7FF0156FDB742C24BB6180057379BF_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_0 = ___0_tree;
		Requires_NotNull_TisNode_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA_mCC24F1A17F24FD312AC86A3A3B49F8C10EAC6411(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_1 = ___0_tree;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_2 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		uint8_t L_3 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_4 = ___0_tree;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_5 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		uint8_t L_6 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4));
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_6));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_IsRightHeavy_m5AF9C917436C8E56E091E9D9148230EAE2A8C9B3_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_0 = ___0_tree;
		Requires_NotNull_TisNode_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA_mCC24F1A17F24FD312AC86A3A3B49F8C10EAC6411(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_1 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		int32_t L_2;
		L_2 = Node_Balance_m2C358001DA7FF0156FDB742C24BB6180057379BF(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63));
		return (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_IsLeftHeavy_mE826E4ABA1E8421ECA14E9B7D5E3A9A9D6AFD9C2_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_0 = ___0_tree;
		Requires_NotNull_TisNode_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA_mCC24F1A17F24FD312AC86A3A3B49F8C10EAC6411(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_1 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		int32_t L_2;
		L_2 = Node_Balance_m2C358001DA7FF0156FDB742C24BB6180057379BF(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63));
		return (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)((int32_t)-2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_MakeBalanced_m5460D7A1374241BC30EFCFAEB87516EA0B3AF73F_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_0 = ___0_tree;
		Requires_NotNull_TisNode_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA_mCC24F1A17F24FD312AC86A3A3B49F8C10EAC6411(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_1 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		bool L_2;
		L_2 = Node_IsRightHeavy_m5AF9C917436C8E56E091E9D9148230EAE2A8C9B3(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 64));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_3 = ___0_tree;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_4 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		int32_t L_5;
		L_5 = Node_Balance_m2C358001DA7FF0156FDB742C24BB6180057379BF(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63));
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_6 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_7;
		L_7 = Node_RotateLeft_m186FF931DDF82573341193C671623860D4115A85(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
		return L_7;
	}

IL_0028:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_8 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_9;
		L_9 = Node_DoubleLeft_m60C97BE3A5A21892D5BB1FDB4F7F14DA67936D2C(L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 65));
		return L_9;
	}

IL_002f:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_10 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		bool L_11;
		L_11 = Node_IsLeftHeavy_mE826E4ABA1E8421ECA14E9B7D5E3A9A9D6AFD9C2(L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 66));
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_12 = ___0_tree;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_13 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		int32_t L_14;
		L_14 = Node_Balance_m2C358001DA7FF0156FDB742C24BB6180057379BF(L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63));
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_15 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_16;
		L_16 = Node_RotateRight_m3C892921A470A2C360A2D8D95B3CEC0DC6CF71E8(L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 61));
		return L_16;
	}

IL_004c:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_17 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_18;
		L_18 = Node_DoubleRight_mB57BDC0260F3130F76F43A80471A0A50BE8F582E(L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 67));
		return L_18;
	}

IL_0053:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_19 = ___0_tree;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_NodeTreeFromList_m62B6B941853B68240A874A941AD137AA9E383E67_gshared (RuntimeObject* ___0_items, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF300D2310959AF105732D339376803869D9B2B91);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const uint32_t SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_20 = alloca(SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* V_2 = NULL;
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* V_3 = NULL;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_4 = alloca(SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
	memset(V_4, 0, SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_items;
		Requires_NotNull_TisIOrderedCollection_1_t7A5FFBEB711437F5D0BDEBD1C897631D0DC59889_m0CD8C867251FBA14007F1CAF9BD70EE0C1FC10EA(L_0, _stringLiteralF300D2310959AF105732D339376803869D9B2B91, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 68));
		int32_t L_1 = ___1_start;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD, (String_t*)NULL, NULL);
		int32_t L_2 = ___2_length;
		Requires_Range_m1F4EA69EC6F6292F284590E64A7BC2B27160CB75((bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, (String_t*)NULL, NULL);
		int32_t L_3 = ___2_length;
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_4 = ((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 43)))->___EmptyNode;
		return L_4;
	}

IL_0038:
	{
		int32_t L_5 = ___2_length;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_5, 1))/2));
		int32_t L_6 = ___2_length;
		int32_t L_7 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_6, 1)), L_7));
		RuntimeObject* L_8 = ___0_items;
		int32_t L_9 = ___1_start;
		int32_t L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_11;
		L_11 = Node_NodeTreeFromList_m62B6B941853B68240A874A941AD137AA9E383E67(L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 42));
		V_2 = L_11;
		RuntimeObject* L_12 = ___0_items;
		int32_t L_13 = ___1_start;
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_16;
		L_16 = Node_NodeTreeFromList_m62B6B941853B68240A874A941AD137AA9E383E67(L_12, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 42));
		V_3 = L_16;
		RuntimeObject* L_17 = ___0_items;
		int32_t L_18 = ___1_start;
		int32_t L_19 = V_1;
		NullCheck(L_17);
		InterfaceActionInvoker2Invoker< int32_t, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 40), L_17, ((int32_t)il2cpp_codegen_add(L_18, L_19)), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_20);
		il2cpp_codegen_memcpy(V_4, L_20, SizeOf_KeyValuePair_2_tCC274AAC05B7C9F369B4FB414BF4600D7D9A5257);
		KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_4, (Il2CppFullySharedGenericAny*)L_21, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 34));
		KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_4, (Il2CppFullySharedGenericAny*)L_22, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 36));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_23 = V_2;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_24 = V_3;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_25 = (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Node__ctor_mD23E27629566B8D4468764E2D77949AF03A2AB6C(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_26, L_21, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? il2cpp_codegen_memcpy(L_27, L_22, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4): *(void**)L_22), L_23, L_24, (bool)1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 70));
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_SetOrAdd_m8B86F90CE4CCB870E9B3A640E56C0FED9994BDCD_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, RuntimeObject* ___2_keyComparer, RuntimeObject* ___3_valueComparer, bool ___4_overwriteExistingValue, bool* ___5_replacedExistingValue, bool* ___6_mutated, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_9 = L_3;
	const Il2CppFullySharedGenericAny L_14 = L_3;
	const Il2CppFullySharedGenericAny L_28 = L_3;
	const Il2CppFullySharedGenericAny L_48 = L_3;
	const Il2CppFullySharedGenericAny L_56 = L_3;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_10 = L_6;
	const Il2CppFullySharedGenericAny L_53 = L_6;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	const Il2CppFullySharedGenericAny L_15 = L_4;
	const Il2CppFullySharedGenericAny L_29 = L_4;
	const Il2CppFullySharedGenericAny L_41 = L_4;
	const Il2CppFullySharedGenericAny L_49 = L_4;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	const Il2CppFullySharedGenericAny L_42 = L_7;
	const Il2CppFullySharedGenericAny L_54 = L_7;
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* V_0 = NULL;
	int32_t V_1 = 0;
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* V_2 = NULL;
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* V_3 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool* L_0 = ___5_replacedExistingValue;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_0, (int8_t)0);
		bool L_1;
		L_1 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		bool* L_2 = ___6_mutated;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_2, (int8_t)1);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_5 = (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		Node__ctor_mD23E27629566B8D4468764E2D77949AF03A2AB6C(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_6, L_3, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? il2cpp_codegen_memcpy(L_7, L_4, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4): *(void**)L_4), __this, __this, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 70));
		return L_5;
	}

IL_001b:
	{
		V_0 = __this;
		RuntimeObject* L_8 = ___2_keyComparer;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		NullCheck(L_8);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 45), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_10: *(void**)L_10));
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_13 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		RuntimeObject* L_16 = ___2_keyComparer;
		RuntimeObject* L_17 = ___3_valueComparer;
		bool L_18 = ___4_overwriteExistingValue;
		bool* L_19 = ___5_replacedExistingValue;
		bool* L_20 = ___6_mutated;
		NullCheck(L_13);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_21;
		L_21 = Node_SetOrAdd_m8B86F90CE4CCB870E9B3A640E56C0FED9994BDCD(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_14: *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_15: *(void**)L_15), L_16, L_17, L_18, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_2 = L_21;
		bool* L_22 = ___6_mutated;
		int32_t L_23 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_22));
		if (!L_23)
		{
			goto IL_00d3;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_24 = V_2;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_25;
		L_25 = Node_Mutate_mDD3C860233B7D3DA02913EB2861F6016D1EE4343(__this, (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)NULL, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		V_0 = L_25;
		goto IL_00d3;
	}

IL_0059:
	{
		int32_t L_26 = V_1;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0084;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_27 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_memcpy(L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		RuntimeObject* L_30 = ___2_keyComparer;
		RuntimeObject* L_31 = ___3_valueComparer;
		bool L_32 = ___4_overwriteExistingValue;
		bool* L_33 = ___5_replacedExistingValue;
		bool* L_34 = ___6_mutated;
		NullCheck(L_27);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_35;
		L_35 = Node_SetOrAdd_m8B86F90CE4CCB870E9B3A640E56C0FED9994BDCD(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_28: *(void**)L_28), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_29: *(void**)L_29), L_30, L_31, L_32, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_3 = L_35;
		bool* L_36 = ___6_mutated;
		int32_t L_37 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_36));
		if (!L_37)
		{
			goto IL_00d3;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_38 = V_3;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_39;
		L_39 = Node_Mutate_mDD3C860233B7D3DA02913EB2861F6016D1EE4343(__this, L_38, (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		V_0 = L_39;
		goto IL_00d3;
	}

IL_0084:
	{
		RuntimeObject* L_40 = ___3_valueComparer;
		il2cpp_codegen_memcpy(L_41, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		il2cpp_codegen_memcpy(L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		NullCheck(L_40);
		bool L_43;
		L_43 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 47), L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_41: *(void**)L_41), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_42: *(void**)L_42));
		if (!L_43)
		{
			goto IL_009a;
		}
	}
	{
		bool* L_44 = ___6_mutated;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_44, (int8_t)0);
		return __this;
	}

IL_009a:
	{
		bool L_45 = ___4_overwriteExistingValue;
		if (!L_45)
		{
			goto IL_00bd;
		}
	}
	{
		bool* L_46 = ___6_mutated;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_46, (int8_t)1);
		bool* L_47 = ___5_replacedExistingValue;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_47, (int8_t)1);
		il2cpp_codegen_memcpy(L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		il2cpp_codegen_memcpy(L_49, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_50 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_51 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_52 = (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		Node__ctor_mD23E27629566B8D4468764E2D77949AF03A2AB6C(L_52, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_53, L_48, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)L_48), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? il2cpp_codegen_memcpy(L_54, L_49, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4): *(void**)L_49), L_50, L_51, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 70));
		V_0 = L_52;
		goto IL_00d3;
	}

IL_00bd:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t94F426715F6702F0295747008794B9AC9DF5757F_il2cpp_TypeInfo_var)));
		String_t* L_55;
		L_55 = SR_get_DuplicateKey_mAA6D35BD4D69F00D8F742656987A55B4D02C92C0(NULL);
		il2cpp_codegen_memcpy(L_56, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_56);
		String_t* L_58;
		L_58 = SR_Format_m15C2107D9AC3B0DBA15121DB9A582AB29DCAFDA4(L_55, L_57, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_59 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_59, L_58, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_59, method);
	}

IL_00d3:
	{
		bool* L_60 = ___6_mutated;
		int32_t L_61 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_60));
		if (L_61)
		{
			goto IL_00da;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_62 = V_0;
		return L_62;
	}

IL_00da:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_63 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_64;
		L_64 = Node_MakeBalanced_m5460D7A1374241BC30EFCFAEB87516EA0B3AF73F(L_63, il2cpp_rgctx_method(method->klass->rgctx_data, 72));
		return L_64;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_RemoveRecursive_mCAB60623F8107ED6FE89993718E83F0E54F5FEAA_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_keyComparer, bool* ___2_mutated, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_31 = L_3;
	const Il2CppFullySharedGenericAny L_40 = L_3;
	const Il2CppFullySharedGenericAny L_49 = L_3;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* V_0 = NULL;
	int32_t V_1 = 0;
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* V_2 = NULL;
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* V_3 = NULL;
	bool V_4 = false;
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* V_5 = NULL;
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* V_6 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		bool* L_1 = ___2_mutated;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_1, (int8_t)0);
		return __this;
	}

IL_000d:
	{
		V_0 = __this;
		RuntimeObject* L_2 = ___1_keyComparer;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		NullCheck(L_2);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 45), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_4: *(void**)L_4));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_00d9;
		}
	}
	{
		bool* L_7 = ___2_mutated;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_7, (int8_t)1);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_8 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_8);
		bool L_9;
		L_9 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_10 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_10);
		bool L_11;
		L_11 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_12 = ((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43)))->___EmptyNode;
		V_0 = L_12;
		goto IL_011b;
	}

IL_004b:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_13 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_13);
		bool L_14;
		L_14 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_15 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_15);
		bool L_16;
		L_16 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_17 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_0 = L_17;
		goto IL_011b;
	}

IL_0071:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_18 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_18);
		bool L_19;
		L_19 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (L_19)
		{
			goto IL_0097;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_20 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_20);
		bool L_21;
		L_21 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (!L_21)
		{
			goto IL_0097;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_22 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_0 = L_22;
		goto IL_011b;
	}

IL_0097:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_23 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_2 = L_23;
		goto IL_00a7;
	}

IL_00a0:
	{
		CHECK_PAUSE_POINT;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_24 = V_2;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_25 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_2 = L_25;
	}

IL_00a7:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_26 = V_2;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_27 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_27);
		bool L_28;
		L_28 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (!L_28)
		{
			goto IL_00a0;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_29 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_30 = V_2;
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		RuntimeObject* L_32 = ___1_keyComparer;
		NullCheck(L_29);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_33;
		L_33 = Node_Remove_m265E5CC12EE8ACF394EEA8E1F9AF920DBF2E84A0(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_31: *(void**)L_31), L_32, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 73));
		V_3 = L_33;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_34 = V_2;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_35 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_36 = V_3;
		NullCheck(L_34);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_37;
		L_37 = Node_Mutate_mDD3C860233B7D3DA02913EB2861F6016D1EE4343(L_34, L_35, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		V_0 = L_37;
		goto IL_011b;
	}

IL_00d9:
	{
		int32_t L_38 = V_1;
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00fd;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_39 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_memcpy(L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		RuntimeObject* L_41 = ___1_keyComparer;
		bool* L_42 = ___2_mutated;
		NullCheck(L_39);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_43;
		L_43 = Node_Remove_m265E5CC12EE8ACF394EEA8E1F9AF920DBF2E84A0(L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_40: *(void**)L_40), L_41, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 73));
		V_5 = L_43;
		bool* L_44 = ___2_mutated;
		int32_t L_45 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_44));
		if (!L_45)
		{
			goto IL_011b;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_46 = V_5;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_47;
		L_47 = Node_Mutate_mDD3C860233B7D3DA02913EB2861F6016D1EE4343(__this, L_46, (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		V_0 = L_47;
		goto IL_011b;
	}

IL_00fd:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_48 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		il2cpp_codegen_memcpy(L_49, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		RuntimeObject* L_50 = ___1_keyComparer;
		bool* L_51 = ___2_mutated;
		NullCheck(L_48);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_52;
		L_52 = Node_Remove_m265E5CC12EE8ACF394EEA8E1F9AF920DBF2E84A0(L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_49: *(void**)L_49), L_50, L_51, il2cpp_rgctx_method(method->klass->rgctx_data, 73));
		V_6 = L_52;
		bool* L_53 = ___2_mutated;
		int32_t L_54 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_53));
		if (!L_54)
		{
			goto IL_011b;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_55 = V_6;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_56;
		L_56 = Node_Mutate_mDD3C860233B7D3DA02913EB2861F6016D1EE4343(__this, (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)NULL, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		V_0 = L_56;
	}

IL_011b:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_57 = V_0;
		NullCheck(L_57);
		bool L_58;
		L_58 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(L_57, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (L_58)
		{
			goto IL_012a;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_59 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_60;
		L_60 = Node_MakeBalanced_m5460D7A1374241BC30EFCFAEB87516EA0B3AF73F(L_59, il2cpp_rgctx_method(method->klass->rgctx_data, 72));
		return L_60;
	}

IL_012a:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_61 = V_0;
		return L_61;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_Mutate_mDD3C860233B7D3DA02913EB2861F6016D1EE4343_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___0_left, Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const uint32_t SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_10 = L_1;
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	const Il2CppFullySharedGenericAny L_11 = L_2;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny G_B3_1 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	memset(G_B3_1, 0, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	Il2CppFullySharedGenericAny G_B3_2 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	memset(G_B3_2, 0, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* G_B2_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_1 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	memset(G_B2_1, 0, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	Il2CppFullySharedGenericAny G_B2_2 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	memset(G_B2_2, 0, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* G_B5_0 = NULL;
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* G_B5_1 = NULL;
	Il2CppFullySharedGenericAny G_B5_2 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	memset(G_B5_2, 0, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	Il2CppFullySharedGenericAny G_B5_3 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	memset(G_B5_3, 0, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* G_B4_0 = NULL;
	Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* G_B4_1 = NULL;
	Il2CppFullySharedGenericAny G_B4_2 = alloca(SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	memset(G_B4_2, 0, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
	Il2CppFullySharedGenericAny G_B4_3 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	memset(G_B4_3, 0, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_3 = ___0_left;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_4 = L_3;
		if (L_4)
		{
			G_B3_0 = ((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)L_4);
			il2cpp_codegen_memcpy(G_B3_1, L_2, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
			il2cpp_codegen_memcpy(G_B3_2, L_1, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
			goto IL_001f;
		}
		G_B2_0 = ((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)L_4);
		il2cpp_codegen_memcpy(G_B2_1, L_2, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		il2cpp_codegen_memcpy(G_B2_2, L_1, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_5 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		G_B3_0 = ((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)L_5);
		il2cpp_codegen_memcpy(G_B3_1, G_B2_1, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		il2cpp_codegen_memcpy(G_B3_2, G_B2_2, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	}

IL_001f:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_6 = ___1_right;
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_7 = L_6;
		if (L_7)
		{
			G_B5_0 = ((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)L_7);
			G_B5_1 = ((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)G_B3_0);
			il2cpp_codegen_memcpy(G_B5_2, G_B3_1, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
			il2cpp_codegen_memcpy(G_B5_3, G_B3_2, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
			goto IL_002a;
		}
		G_B4_0 = ((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)L_7);
		G_B4_1 = ((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)G_B3_0);
		il2cpp_codegen_memcpy(G_B4_2, G_B3_1, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		il2cpp_codegen_memcpy(G_B4_3, G_B3_2, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_8 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		G_B5_0 = ((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)L_8);
		G_B5_1 = ((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)G_B4_1);
		il2cpp_codegen_memcpy(G_B5_2, G_B4_2, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4);
		il2cpp_codegen_memcpy(G_B5_3, G_B4_3, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	}

IL_002a:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_9 = (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		Node__ctor_mD23E27629566B8D4468764E2D77949AF03A2AB6C(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_10, G_B5_3, SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A): *(void**)G_B5_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? il2cpp_codegen_memcpy(L_11, G_B5_2, SizeOf_TValue_t050368E329D8D2A0307A87438EC96B6C347D97F4): *(void**)G_B5_2), G_B5_1, G_B5_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 70));
		return L_9;
	}

IL_0031:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_12 = ___0_left;
		if (!L_12)
		{
			goto IL_003b;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_13 = ___0_left;
		il2cpp_codegen_write_instance_field_data<Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_13);
	}

IL_003b:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_14 = ___1_right;
		if (!L_14)
		{
			goto IL_0045;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_15 = ___1_right;
		il2cpp_codegen_write_instance_field_data<Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_15);
	}

IL_0045:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_16 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		uint8_t L_17 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_18 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		uint8_t L_19 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint8_t L_20;
		L_20 = Math_Max_m12FB4E1302123ADB441E3A7BDF52E8404DDE53A2(L_17, L_19, NULL);
		if (((int64_t)1 + (int64_t)L_20 < (int64_t)kIl2CppInt32Min) || ((int64_t)1 + (int64_t)L_20 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		uint8_t L_21 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,true,false>(((int32_t)il2cpp_codegen_add(1, (int32_t)L_20)),method));
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_21);
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* Node_Search_mC575BB604ECA70ECABCC82933DB968DC582D88EE_gshared (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_keyComparer, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	const Il2CppFullySharedGenericAny L_8 = L_2;
	const Il2CppFullySharedGenericAny L_12 = L_2;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = Node_get_IsEmpty_m1634B54BC5AC4C24A3983F63E30A880ED8518212(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___1_keyComparer;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		NullCheck(L_1);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 45), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_3: *(void**)L_3));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}
	{
		return __this;
	}

IL_001d:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_7 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		RuntimeObject* L_9 = ___1_keyComparer;
		NullCheck(L_7);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_10;
		L_10 = Node_Search_mC575BB604ECA70ECABCC82933DB968DC582D88EE(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_8: *(void**)L_8), L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		return L_10;
	}

IL_002f:
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_11 = *(Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_key : &___0_key), SizeOf_TKey_t09506BD72AD95AACE961330F361F6340258A297A);
		RuntimeObject* L_13 = ___1_keyComparer;
		NullCheck(L_11);
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_14;
		L_14 = Node_Search_mC575BB604ECA70ECABCC82933DB968DC582D88EE(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_12: *(void**)L_12), L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__cctor_m9F83936A9BE4F6AFEEB073104C555D34AB6A1664_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA* L_0 = (Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Node__ctor_m568035BE054FA345461F656D5D8C70C52F86AF13(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 74));
		((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 43)))->___EmptyNode = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Node_tC9188029F1E4A672BDCD992DAE73F4EE25998BFA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 43)))->___EmptyNode), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeEnumerable__ctor_m631FE25CF22C294244120B74820E5E13C131F5C0_gshared (NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F* __this, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___0_root, const RuntimeMethod* method) 
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
		return;
	}
}
IL2CPP_EXTERN_C  void NodeEnumerable__ctor_m631FE25CF22C294244120B74820E5E13C131F5C0_AdjustorThunk (RuntimeObject* __this, SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___0_root, const RuntimeMethod* method)
{
	NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F>(__this);
	NodeEnumerable__ctor_m631FE25CF22C294244120B74820E5E13C131F5C0(_thisAdjusted, ___0_root, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeEnumerable_GetEnumerator_m7BA27433C814767767FEA13026028BC89B99EB2B_gshared (NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F* __this, Enumerator_t4EFD4FF0495907DDDEB9C511462BDB1087642BC5* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t286D9E3EC3423AB90FABE68FEB7CA2EABE6295F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Enumerator_t4EFD4FF0495907DDDEB9C511462BDB1087642BC5 L_1 = alloca(SizeOf_Enumerator_t286D9E3EC3423AB90FABE68FEB7CA2EABE6295F4);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* L_0 = __this->____root;
		memset(L_1, 0, SizeOf_Enumerator_t286D9E3EC3423AB90FABE68FEB7CA2EABE6295F4);
		Enumerator__ctor_m50CB4D6A13D82D8FD1C6131602C9BE5E276D04D7((Enumerator_t4EFD4FF0495907DDDEB9C511462BDB1087642BC5*)L_1, L_0, (Builder_t78DA893EF9813330E1E2C308502E62A76678D876*)NULL, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_Enumerator_t286D9E3EC3423AB90FABE68FEB7CA2EABE6295F4);
		return;
	}
}
IL2CPP_EXTERN_C  void NodeEnumerable_GetEnumerator_m7BA27433C814767767FEA13026028BC89B99EB2B_AdjustorThunk (RuntimeObject* __this, Enumerator_t4EFD4FF0495907DDDEB9C511462BDB1087642BC5* il2cppRetVal, const RuntimeMethod* method)
{
	NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F>(__this);
	NodeEnumerable_GetEnumerator_m7BA27433C814767767FEA13026028BC89B99EB2B(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeEnumerable_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2DEE89BA9B30F3A31A231854B7A89DD365143A00_gshared (NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t286D9E3EC3423AB90FABE68FEB7CA2EABE6295F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Enumerator_t4EFD4FF0495907DDDEB9C511462BDB1087642BC5 L_0 = alloca(SizeOf_Enumerator_t286D9E3EC3423AB90FABE68FEB7CA2EABE6295F4);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NodeEnumerable_GetEnumerator_m7BA27433C814767767FEA13026028BC89B99EB2B(__this, (Enumerator_t4EFD4FF0495907DDDEB9C511462BDB1087642BC5*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* NodeEnumerable_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2DEE89BA9B30F3A31A231854B7A89DD365143A00_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F>(__this);
	RuntimeObject* _returnValue;
	_returnValue = NodeEnumerable_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2DEE89BA9B30F3A31A231854B7A89DD365143A00(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeEnumerable_System_Collections_IEnumerable_GetEnumerator_m8A17B09634755097AD065516BAF554501EBC1CB6_gshared (NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t286D9E3EC3423AB90FABE68FEB7CA2EABE6295F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Enumerator_t4EFD4FF0495907DDDEB9C511462BDB1087642BC5 L_0 = alloca(SizeOf_Enumerator_t286D9E3EC3423AB90FABE68FEB7CA2EABE6295F4);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NodeEnumerable_GetEnumerator_m7BA27433C814767767FEA13026028BC89B99EB2B(__this, (Enumerator_t4EFD4FF0495907DDDEB9C511462BDB1087642BC5*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* NodeEnumerable_System_Collections_IEnumerable_GetEnumerator_m8A17B09634755097AD065516BAF554501EBC1CB6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<NodeEnumerable_t3DA0ABCF99589D4723A1DF6608C3D92DEB32F23F>(__this);
	RuntimeObject* _returnValue;
	_returnValue = NodeEnumerable_System_Collections_IEnumerable_GetEnumerator_m8A17B09634755097AD065516BAF554501EBC1CB6(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePath__ctor_mA9A74612E0785F30CCC660C7936418FD57A9EB55_gshared (NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813* __this, int32_t ___0_nodeID, int32_t ___1_mainTreeNodeID, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_nodeID;
		__this->____nodeID = L_0;
		int32_t L_1 = ___1_mainTreeNodeID;
		__this->____mainTreeNodeID = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void NodePath__ctor_mA9A74612E0785F30CCC660C7936418FD57A9EB55_AdjustorThunk (RuntimeObject* __this, int32_t ___0_nodeID, int32_t ___1_mainTreeNodeID, const RuntimeMethod* method)
{
	NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813>(__this);
	NodePath__ctor_mA9A74612E0785F30CCC660C7936418FD57A9EB55(_thisAdjusted, ___0_nodeID, ___1_mainTreeNodeID, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullableComparer_1_Compare_m11C4941CF35CE74EF1B411C4BD5BB5F0EBE52876_gshared (NullableComparer_1_t1BC4D5CE667344ACACF9776303C9B3363E46D079* __this, Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339 ___0_x, Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339 ___1_y, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Nullable_1_t43F73ACE4BD829BB1577DBA75FABCD76A5901AD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const uint32_t SizeOf_T_t66C356754D14B7B97CBE454FDBA82870668383E0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t66C356754D14B7B97CBE454FDBA82870668383E0);
	const Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339 L_2 = alloca(SizeOf_Nullable_1_t43F73ACE4BD829BB1577DBA75FABCD76A5901AD7);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_inline((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)___0_x, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_inline((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)___1_y, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___1_y, SizeOf_Nullable_1_t43F73ACE4BD829BB1577DBA75FABCD76A5901AD7);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t66C356754D14B7B97CBE454FDBA82870668383E0);
		Il2CppConstrainedCallData L_5;
		Il2CppMethodPointer L_6 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), il2cpp_rgctx_method(method->klass->rgctx_data, 5), (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)___0_x, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), &L_5, L_4);
		int32_t L_7 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(L_6, L_5.method,L_5.thisPtr, L_3);
		return L_7;
	}

IL_002b:
	{
		return 1;
	}

IL_002d:
	{
		bool L_8;
		L_8 = Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_inline((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)___1_y, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (-1);
	}

IL_0038:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullableComparer_1_Equals_m333C224D349AD8C21ACB09E625CF1A7C61ECDC24_gshared (NullableComparer_1_t1BC4D5CE667344ACACF9776303C9B3363E46D079* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(NullableComparer_1_t1BC4D5CE667344ACACF9776303C9B3363E46D079*)((NullableComparer_1_t1BC4D5CE667344ACACF9776303C9B3363E46D079*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 6)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullableComparer_1_GetHashCode_m90D1089F5254B3FB8F39AD6C0CB18E4C798A509C_gshared (NullableComparer_1_t1BC4D5CE667344ACACF9776303C9B3363E46D079* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableComparer_1__ctor_mED4964D91D24A516A09E78E46424B3A222620DB6_gshared (NullableComparer_1_t1BC4D5CE667344ACACF9776303C9B3363E46D079* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Comparer_1__ctor_m36186DDB1533C95B95F9692D890571704896DCC2((Comparer_1_t178DF674F2B43D7321E70F9D20DC0FB879D78BCC*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullableEqualityComparer_1_Equals_m18CFB044FE4126E50AA130C52B7C6F769E5C443E_gshared (NullableEqualityComparer_1_t0C0CFE9457456335CB5101AC74592B8D8350EDA9* __this, Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339 ___0_x, Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339 ___1_y, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Nullable_1_t9860B87EFBA264852F3EFE7B97CBE73E723411D7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const uint32_t SizeOf_T_tD8F8BD971FC85E5AA54E64878A26D3BAFE18A198 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tD8F8BD971FC85E5AA54E64878A26D3BAFE18A198);
	const Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339 L_2 = alloca(SizeOf_Nullable_1_t9860B87EFBA264852F3EFE7B97CBE73E723411D7);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_inline((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)___0_x, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_inline((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)___1_y, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___1_y, SizeOf_Nullable_1_t9860B87EFBA264852F3EFE7B97CBE73E723411D7);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_tD8F8BD971FC85E5AA54E64878A26D3BAFE18A198);
		Il2CppConstrainedCallData L_5;
		Il2CppMethodPointer L_6 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), il2cpp_rgctx_method(method->klass->rgctx_data, 5), (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)___0_x, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), &L_5, L_4);
		bool L_7 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_6, L_5.method,L_5.thisPtr, L_3);
		return L_7;
	}

IL_002b:
	{
		return (bool)0;
	}

IL_002d:
	{
		bool L_8;
		L_8 = Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_inline((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)___1_y, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0038:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullableEqualityComparer_1_GetHashCode_m7B9611336367C4A14EB180B335F56C9183955245_gshared (NullableEqualityComparer_1_t0C0CFE9457456335CB5101AC74592B8D8350EDA9* __this, Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339 ___0_obj, const RuntimeMethod* method) 
{
	void* L_0 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppConstrainedCallData L_1;
		Il2CppMethodPointer L_2 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (void*)(Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)___0_obj, &L_1, L_0);
		typedef int32_t ( *func_L_3)(void*,const RuntimeMethod*);
		int32_t L_4 = ((func_L_3)L_2)(L_1.thisPtr,L_1.method);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullableEqualityComparer_1_IndexOf_m1C1EBAB96C87F222DF3619F71AC7C946442A6707_gshared (NullableEqualityComparer_1_t0C0CFE9457456335CB5101AC74592B8D8350EDA9* __this, Nullable_1U5BU5D_t403487FE4BCECFEE095568C37247ECCDA477FB50* ___0_array, Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Nullable_1_t9860B87EFBA264852F3EFE7B97CBE73E723411D7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const uint32_t SizeOf_T_tD8F8BD971FC85E5AA54E64878A26D3BAFE18A198 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_18 = alloca(SizeOf_T_tD8F8BD971FC85E5AA54E64878A26D3BAFE18A198);
	const Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339 L_17 = alloca(SizeOf_Nullable_1_t9860B87EFBA264852F3EFE7B97CBE73E723411D7);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_inline((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)___1_value, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3 = ___2_startIndex;
		V_1 = L_3;
		goto IL_0026;
	}

IL_0012:
	{
		CHECK_PAUSE_POINT;
		Nullable_1U5BU5D_t403487FE4BCECFEE095568C37247ECCDA477FB50* L_4 = ___0_array;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_inline(((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_6)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_7 = V_1;
		return L_7;
	}

IL_0022:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0026:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0067;
	}

IL_002c:
	{
		int32_t L_11 = ___2_startIndex;
		V_2 = L_11;
		goto IL_0063;
	}

IL_0030:
	{
		CHECK_PAUSE_POINT;
		Nullable_1U5BU5D_t403487FE4BCECFEE095568C37247ECCDA477FB50* L_12 = ___0_array;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		bool L_14;
		L_14 = Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_inline(((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Nullable_1U5BU5D_t403487FE4BCECFEE095568C37247ECCDA477FB50* L_15 = ___0_array;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_17, ___1_value, SizeOf_Nullable_1_t9860B87EFBA264852F3EFE7B97CBE73E723411D7);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_tD8F8BD971FC85E5AA54E64878A26D3BAFE18A198);
		Il2CppConstrainedCallData L_20;
		Il2CppMethodPointer L_21 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), il2cpp_rgctx_method(method->klass->rgctx_data, 5), (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), &L_20, L_19);
		bool L_22 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_21, L_20.method,L_20.thisPtr, L_18);
		if (!L_22)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_23 = V_2;
		return L_23;
	}

IL_005f:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0063:
	{
		int32_t L_25 = V_2;
		int32_t L_26 = V_0;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0030;
		}
	}

IL_0067:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullableEqualityComparer_1_LastIndexOf_m3F2A5F2B8B3665AC348C78FC5EB11720148A8756_gshared (NullableEqualityComparer_1_t0C0CFE9457456335CB5101AC74592B8D8350EDA9* __this, Nullable_1U5BU5D_t403487FE4BCECFEE095568C37247ECCDA477FB50* ___0_array, Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Nullable_1_t9860B87EFBA264852F3EFE7B97CBE73E723411D7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const uint32_t SizeOf_T_tD8F8BD971FC85E5AA54E64878A26D3BAFE18A198 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_18 = alloca(SizeOf_T_tD8F8BD971FC85E5AA54E64878A26D3BAFE18A198);
	const Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339 L_17 = alloca(SizeOf_Nullable_1_t9860B87EFBA264852F3EFE7B97CBE73E723411D7);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_inline((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)___1_value, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = ___2_startIndex;
		V_1 = L_3;
		goto IL_0028;
	}

IL_0014:
	{
		CHECK_PAUSE_POINT;
		Nullable_1U5BU5D_t403487FE4BCECFEE095568C37247ECCDA477FB50* L_4 = ___0_array;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_inline(((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_7 = V_1;
		return L_7;
	}

IL_0024:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0028:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0069;
	}

IL_002e:
	{
		int32_t L_11 = ___2_startIndex;
		V_2 = L_11;
		goto IL_0065;
	}

IL_0032:
	{
		CHECK_PAUSE_POINT;
		Nullable_1U5BU5D_t403487FE4BCECFEE095568C37247ECCDA477FB50* L_12 = ___0_array;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		bool L_14;
		L_14 = Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_inline(((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (!L_14)
		{
			goto IL_0061;
		}
	}
	{
		Nullable_1U5BU5D_t403487FE4BCECFEE095568C37247ECCDA477FB50* L_15 = ___0_array;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_17, ___1_value, SizeOf_Nullable_1_t9860B87EFBA264852F3EFE7B97CBE73E723411D7);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_tD8F8BD971FC85E5AA54E64878A26D3BAFE18A198);
		Il2CppConstrainedCallData L_20;
		Il2CppMethodPointer L_21 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), il2cpp_rgctx_method(method->klass->rgctx_data, 5), (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), &L_20, L_19);
		bool L_22 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_21, L_20.method,L_20.thisPtr, L_18);
		if (!L_22)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_23 = V_2;
		return L_23;
	}

IL_0061:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
	}

IL_0065:
	{
		int32_t L_25 = V_2;
		int32_t L_26 = V_0;
		if ((((int32_t)L_25) >= ((int32_t)L_26)))
		{
			goto IL_0032;
		}
	}

IL_0069:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullableEqualityComparer_1_Equals_mB7A0EAA864BEB97FF0C48EA6D88454A9627D7E4B_gshared (NullableEqualityComparer_1_t0C0CFE9457456335CB5101AC74592B8D8350EDA9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(NullableEqualityComparer_1_t0C0CFE9457456335CB5101AC74592B8D8350EDA9*)((NullableEqualityComparer_1_t0C0CFE9457456335CB5101AC74592B8D8350EDA9*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 8)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullableEqualityComparer_1_GetHashCode_mBEFA7666D9D894CB10FF21FAFCE5A6F944F1BD08_gshared (NullableEqualityComparer_1_t0C0CFE9457456335CB5101AC74592B8D8350EDA9* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableEqualityComparer_1__ctor_m034E8F1FC014EF9330283DBA8DDFCD6649E4FE9F_gshared (NullableEqualityComparer_1_t0C0CFE9457456335CB5101AC74592B8D8350EDA9* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1__ctor_m512B1E6051FF8B61852CC79C2A5678A15651C368((EqualityComparer_1_t7CF2CDB87E1B6F6C7D463172655828C6F2A7974B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Node_ParentHeight_m4CFC4675B0EA632CC45D346DF3FC41D3723A12C3_gshared_inline (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___0_left, Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_0 = ___0_left;
		uint8_t L_1 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* L_2 = ___1_right;
		uint8_t L_3 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint8_t L_4;
		L_4 = Math_Max_m12FB4E1302123ADB441E3A7BDF52E8404DDE53A2(L_1, L_3, NULL);
		if (((int64_t)1 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)1 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		uint8_t L_5 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,true,false>(((int32_t)il2cpp_codegen_add(1, (int32_t)L_4)),method));
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Node_get_Count_mE2E1BD68CBB361E8209B3E22A3EDA7E5C99B4230_gshared_inline (Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ReadOnlySpan_1_Slice_m5FF60C7FC975ABE8A18ECC2B3C066E77F55AECBD_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t120950580BDFD368223E024446019DB239080837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
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
		L_8 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_6, L_7, SizeOf_T_t120950580BDFD368223E024446019DB239080837);
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ReadOnlySpan_1_Slice_mB39169D4E17B6E306E9C695E4B46FF465EADAE44_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t120950580BDFD368223E024446019DB239080837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_3, L_4, SizeOf_T_t120950580BDFD368223E024446019DB239080837);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t120950580BDFD368223E024446019DB239080837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_3, L_4, SizeOf_T_t120950580BDFD368223E024446019DB239080837);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_gshared_inline (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Node_get_Count_mB1E99B9EDC8EE8589D98FF3626E87F386F9420E3_gshared_inline (Node_tB7DA73325EC5D28966D6B6ACA87A275C6BC811BC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_Item_mAE94673D67914B814978A88A7AD48410FAFB704C_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_value : &___0_value), SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0, SizeOf_T_t517EFD23692946AF48D70C64ED02055A596E70FA);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Node_get_Color_m9A8282043129C40F83EE3E6A8F4A49B8DF4480C7_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* Node_get_Right_m50EC9ECF680FDFCDE4D271D42B0F76E5993172C7_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = *(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
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
