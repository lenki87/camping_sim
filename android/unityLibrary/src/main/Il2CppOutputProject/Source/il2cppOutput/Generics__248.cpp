#include "pch-cpp.hpp"





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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};

struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
struct Dictionary_2_t6D165219FBC5112F01F1A41A9CFA56F2E1A19D67;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct ExecuteJobFunction_t6748D7E107B73BB4A53D07F6FAE83716E0666388;
struct HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57;
struct IComparer_1_tFAD3AE9FE3CE1FB3CBB781C55DC57C986D71521E;
struct IEnumerable_1_tB7C5DC980BD1ECBC0E632E480074F526B0AE43B8;
struct IEnumerable_1_t5C44357F6823EA78E35F0F1BD4086AA0F3408934;
struct IEnumerable_1_tD812E1F441800A1F228EE78FB23A163292743F77;
struct IEnumerable_1_tDA3DB14A8C53E0EFBEA9554E60CD303E733E672C;
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct IEventHolder_t20696FCAF035B851F2D4CD01F32193A8380F0B6C;
struct IIndexedCollectionPropertyBagEnumerator_1_t73A4FA06FC0D96AE6215829C44BEA1E64D2806AC;
struct IIndexedCollectionPropertyBagEnumerator_1_t218933170637CF5A1E8CB4453FFBF1668C543F16;
struct IIndexedCollectionPropertyBagEnumerator_1_t6B0CBDF76B7A74D14E91F0E734F3EC671A18EA12;
struct IIndexedCollectionPropertyBagEnumerator_1_t10A3FE79120150E0A39D2649E6366925E3E7977A;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct KeyCollection_tECC9D957485E7FBDB272AB66E3272DAEE913F763;
struct KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC;
struct LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C;
struct List_1_t62A239636F5DD077E898323BCAEF841E874663F6;
struct List_1_t90FE00BB2B99D64D0FC5C3B71BF96BC3FFA23AF9;
struct List_1_t4B846D5AA2F21AD00EE16A815E0984EC65E357A5;
struct List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t7253D93BC3B5BDCC4F6B9FD6460CF1AEC4C0EAD5;
struct PrimitiveParameterExpression_1_tEE20C9A20842E44239F978A05D919674BAE974ED;
struct PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396;
struct PriorityQueue_1_t811C24B98ED1CB91821F5F7AA7C2AD65D29CD72F;
struct PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409;
struct StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4;
struct Stack_1_t44D9E75D09A4B1095DD3D19FD083FCFEAD4EBD47;
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A;
struct ValueCollection_t10771642E8084FEF5AF49F6AB019D39FC5A32F36;
struct EntryU5BU5D_t14CF11A2E4F204C7D4C89924ABBBEFC373C02844;
struct HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87;
struct KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC;
struct StackItemU5BU5D_t290FE3B7F97797FCC59685228BFA6D8E209C601A;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BlobBuilder_tBBD57F4A395313817B6AD5C883DA9BD7A3E9BC84;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Entry_t475ED76E31923970E7F7A6522E570E7577C487B9;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct GradientFill_t3EF843B0259724DC8B31C0785448B27EC96CEDDF;
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFill_t4B489CA494A2042D3FCC143E718D89AEFE1D35AE;
struct IPropertyBagVisitor_tE8B9B7E14DBF946E6E65BD0ECC8679268715BF5A;
struct ITypeVisitor_tCB238D641EEE5D928DA9FEF70EDB7C2C13ED1599;
struct Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37;
struct String_t;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667;
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Type_t;
struct UxmlSerializedData_t5BDDB665835158F6BC2975E086891B337C3BB706;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377;
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1;
struct VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1;
struct XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9;
struct XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D;
struct TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2;
struct BufferResourceData_t0B823212ADCC9AA80412877B802DD43236781D57;
struct TextureResourceData_t0714EB0BFE2BFB2FC4E0CCFFBFE5CAA6C4B53BE3;
struct NRPInfo_tFAE346DBF564B1FDA1EBC1D2F0C3EDC93143D04F;
struct ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_AnimationModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_VectorGraphicsModule[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0074C49CE7D7ED9232C28459AA9DB19B1D06C223;
IL2CPP_EXTERN_C String_t* _stringLiteral146E57E580085C49FA4D7B226DB5FF8C1F7C5518;
IL2CPP_EXTERN_C String_t* _stringLiteralBFD0F59F9F38A92660652CA5BE172EFCA8501E47;
IL2CPP_EXTERN_C String_t* _stringLiteralC23725EE1ACD9996F8909AD0C76D39D2B4CB3ACA;
IL2CPP_EXTERN_C String_t* _stringLiteralD5E4655D9A51F8B1B8BF7844B9935B8A398D70E6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_CopyPtrToStructure_TisAnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A_m4586A434BA546E82429C2D0E361911FF6D9AFB0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JobMethodIndex_t61229F1B481AD22AB00E479AA42F2C49273B5A7C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PriorityHeap_1_t73D53462E145A3EBBFDE9DD3B1534390BB6CE8D5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PriorityQueue_1_t75752B7D1ECCABDBAEEB0ED0065A23DB0ADD16A0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PropertyBag_1_tA7397A5188F14D8ED179B666223A1046274815E1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PropertyChangedEvent_tDB66BBE0429BD31AFA15C0B0A4D67218E4D74D44_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3EO_tE95C52E7CAE27912D35531EB2E48A97BC3EBAA5F  : public RuntimeObject
{
};
struct Dictionary_2_t6D165219FBC5112F01F1A41A9CFA56F2E1A19D67  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t14CF11A2E4F204C7D4C89924ABBBEFC373C02844* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tECC9D957485E7FBDB272AB66E3272DAEE913F763* ____keys;
	ValueCollection_t10771642E8084FEF5AF49F6AB019D39FC5A32F36* ____values;
	RuntimeObject* ____syncRoot;
};
struct HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57  : public RuntimeObject
{
	Il2CppSharedGenericObject* ____key;
	int32_t ____node;
};
struct PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396  : public RuntimeObject
{
	LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* ____leq;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____nodes;
	HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* ____handles;
	int32_t ____size;
	int32_t ____max;
	int32_t ____freeList;
	bool ____initialized;
};
struct PriorityQueue_1_t811C24B98ED1CB91821F5F7AA7C2AD65D29CD72F  : public RuntimeObject
{
	LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* ____leq;
	PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* ____heap;
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____keys;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____order;
	int32_t ____size;
	int32_t ____max;
	bool ____initialized;
};
struct StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4  : public RuntimeObject
{
	int32_t ___p;
	int32_t ___r;
};
struct Stack_1_t44D9E75D09A4B1095DD3D19FD083FCFEAD4EBD47  : public RuntimeObject
{
	StackItemU5BU5D_t290FE3B7F97797FCC59685228BFA6D8E209C601A* ____array;
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
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
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
typedef Il2CppFullySharedGenericStruct IndexedCollectionPropertyBagEnumerable_1_t2B3DE6D978823100869CD2618FBDF5807E3B997E;
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct ProcessAnimationJobStruct_1_t53B6F4AA9902BA10D2DE9D1C81FC101B062906DD 
{
	union
	{
		struct
		{
		};
		uint8_t ProcessAnimationJobStruct_1_t17CFF6B33DCB3C1C17A1A9B7B952F0ED50EEC0A9__padding[1];
	};
};
struct PropertyChangedEvent_t6239E36B1DE89FA625F64D364C36ACAF8424D998 
{
	Dictionary_2_t6D165219FBC5112F01F1A41A9CFA56F2E1A19D67* ___m_Subscriptions;
};
struct BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F 
{
	uint32_t ____value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
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
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 
{
	KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC* ___m_Patterns;
};
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns;
};
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase;
	String_t* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase;
	char* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase;
	Il2CppChar* ___m_StringLowerCase;
};
struct PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C 
{
	int32_t ____handle;
};
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	String_t* ___U3CNameU3Ek__BackingField;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C 
{
	uint32_t ____value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
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
struct MethodImplRow_tECA978FA458612B1829C9060618B44F2AAA0891B 
{
	int32_t ___Class;
	int32_t ___MethodBody;
	int32_t ___MethodDecl;
};
struct MethodSemanticsRow_tB10B53ABD137ECB3E43EBDFC8AD888453A7861BD 
{
	uint16_t ___Semantic;
	int32_t ___Method;
	int32_t ___Association;
};
struct NestedClassRow_t1802507AB8CC3204D69F1717DBBAA41DF2599180 
{
	int32_t ___NestedClass;
	int32_t ___EnclosingClass;
};
struct PropertyMapRow_tEF71553D64AACE04AE025D38E2C4E5AF5879C971 
{
	int32_t ___Parent;
	int32_t ___PropertyList;
};
struct StateMachineMethodRow_t779779F25E30779A123E186B13CB4CC40066733E 
{
	int32_t ___MoveNextMethod;
	int32_t ___KickoffMethod;
};
struct BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
};
struct SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 
{
	String_t* ___sceneGUID;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___cellList;
};
struct SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591_marshaled_pinvoke
{
	char* ___sceneGUID;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___cellList;
};
struct SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591_marshaled_com
{
	Il2CppChar* ___sceneGUID;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___cellList;
};
struct ObsoletePerScenarioData_tB1EFC0C7B7EA6D0DD0CACC22888799725FC6787C 
{
	int32_t ___sceneHash;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellDataAsset;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellOptionalDataAsset;
};
struct ObsoletePerScenarioData_tB1EFC0C7B7EA6D0DD0CACC22888799725FC6787C_marshaled_pinvoke
{
	int32_t ___sceneHash;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellDataAsset;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellOptionalDataAsset;
};
struct ObsoletePerScenarioData_tB1EFC0C7B7EA6D0DD0CACC22888799725FC6787C_marshaled_com
{
	int32_t ___sceneHash;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellDataAsset;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellOptionalDataAsset;
};
struct StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A 
{
	int32_t ___offset;
	int32_t ___elementCount;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC 
{
	Il2CppChar ___First;
	Il2CppChar ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	bool ___canceled;
};
struct ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___canceled;
};
struct ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___canceled;
};
struct Segment_t7476FA02F7FF67504507F796A025E59EA4F8D46C 
{
	List_1_t7253D93BC3B5BDCC4F6B9FD6460CF1AEC4C0EAD5* ___tags;
	int32_t ___start;
	int32_t ___end;
};
struct Segment_t7476FA02F7FF67504507F796A025E59EA4F8D46C_marshaled_pinvoke
{
	List_1_t7253D93BC3B5BDCC4F6B9FD6460CF1AEC4C0EAD5* ___tags;
	int32_t ___start;
	int32_t ___end;
};
struct Segment_t7476FA02F7FF67504507F796A025E59EA4F8D46C_marshaled_com
{
	List_1_t7253D93BC3B5BDCC4F6B9FD6460CF1AEC4C0EAD5* ___tags;
	int32_t ___start;
	int32_t ___end;
};
struct HierarchyUpdate_t192B46AB72DD776A7FE4176054953012576A4F63 
{
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___Parent;
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___NewNode;
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___ReplaceNode;
};
struct HierarchyUpdate_t192B46AB72DD776A7FE4176054953012576A4F63_marshaled_pinvoke
{
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___Parent;
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___NewNode;
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___ReplaceNode;
};
struct HierarchyUpdate_t192B46AB72DD776A7FE4176054953012576A4F63_marshaled_com
{
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___Parent;
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___NewNode;
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___ReplaceNode;
};
struct NodeWithParent_t85C6F64F2938C8921A70900F392C103080CF2ED8 
{
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___node;
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___parent;
};
struct NodeWithParent_t85C6F64F2938C8921A70900F392C103080CF2ED8_marshaled_pinvoke
{
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___node;
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___parent;
};
struct NodeWithParent_t85C6F64F2938C8921A70900F392C103080CF2ED8_marshaled_com
{
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___node;
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___parent;
};
struct PostponedClip_tECED34BC1788F4E4B41F7D288923A6638E427AF4 
{
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___node;
};
struct PostponedClip_tECED34BC1788F4E4B41F7D288923A6638E427AF4_marshaled_pinvoke
{
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___node;
};
struct PostponedClip_tECED34BC1788F4E4B41F7D288923A6638E427AF4_marshaled_com
{
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___node;
};
struct PostponedStopData_t0D190DE044C821CA0439DB22E54BF4C897E87966 
{
	GradientFill_t3EF843B0259724DC8B31C0785448B27EC96CEDDF* ___fill;
};
struct PostponedStopData_t0D190DE044C821CA0439DB22E54BF4C897E87966_marshaled_pinvoke
{
	GradientFill_t3EF843B0259724DC8B31C0785448B27EC96CEDDF* ___fill;
};
struct PostponedStopData_t0D190DE044C821CA0439DB22E54BF4C897E87966_marshaled_com
{
	GradientFill_t3EF843B0259724DC8B31C0785448B27EC96CEDDF* ___fill;
};
struct ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___styleSheet;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___mediaQueries;
};
struct ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___styleSheet;
	char** ___mediaQueries;
};
struct ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___styleSheet;
	Il2CppChar** ___mediaQueries;
};
struct AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF 
{
	String_t* ___m_ElementName;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_NamesPath;
	String_t* ___m_AttributeName;
	String_t* ___m_Value;
};
struct AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshaled_pinvoke
{
	char* ___m_ElementName;
	char** ___m_NamesPath;
	char* ___m_AttributeName;
	char* ___m_Value;
};
struct AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshaled_com
{
	Il2CppChar* ___m_ElementName;
	Il2CppChar** ___m_NamesPath;
	Il2CppChar* ___m_AttributeName;
	Il2CppChar* ___m_Value;
};
struct UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 
{
	int32_t ___m_ElementId;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_ElementIdsPath;
	UxmlSerializedData_t5BDDB665835158F6BC2975E086891B337C3BB706* ___m_SerializedData;
};
struct UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67_marshaled_pinvoke
{
	int32_t ___m_ElementId;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_ElementIdsPath;
	UxmlSerializedData_t5BDDB665835158F6BC2975E086891B337C3BB706* ___m_SerializedData;
};
struct UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67_marshaled_com
{
	int32_t ___m_ElementId;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_ElementIdsPath;
	UxmlSerializedData_t5BDDB665835158F6BC2975E086891B337C3BB706* ___m_SerializedData;
};
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B 
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture;
	bool ___dynamic;
	int32_t ___refCount;
};
struct TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture;
	int32_t ___dynamic;
	int32_t ___refCount;
};
struct TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture;
	int32_t ___dynamic;
	int32_t ___refCount;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 
{
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_DelagateCallback;
	RuntimeObject* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 
{
	String_t* ___name;
	int32_t ___insertionPointId;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshaled_pinvoke
{
	char* ___name;
	int32_t ___insertionPointId;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___insertionPointId;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 
{
	String_t* ___slotName;
	int32_t ___assetId;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshaled_pinvoke
{
	char* ___slotName;
	int32_t ___assetId;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshaled_com
{
	Il2CppChar* ___slotName;
	int32_t ___assetId;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 
{
	String_t* ___alias;
	String_t* ___path;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshaled_pinvoke
{
	char* ___alias;
	char* ___path;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshaled_com
{
	Il2CppChar* ___alias;
	Il2CppChar* ___path;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset;
};
struct VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 
{
	RuntimeObject* ___source;
	int64_t ___version;
};
struct VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8_marshaled_pinvoke
{
	Il2CppIUnknown* ___source;
	int64_t ___version;
};
struct VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8_marshaled_com
{
	Il2CppIUnknown* ___source;
	int64_t ___version;
};
struct XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD 
{
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname;
	XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* ___xso;
};
struct XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_marshaled_pinvoke
{
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname;
	XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* ___xso;
};
struct XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_marshaled_com
{
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname;
	XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* ___xso;
};
struct ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 
{
	String_t* ___displayName;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action;
};
struct ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_marshaled_pinvoke
{
	char* ___displayName;
	Il2CppMethodPointer ___action;
};
struct ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_marshaled_com
{
	Il2CppChar* ___displayName;
	Il2CppMethodPointer ___action;
};
struct NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4 
{
	String_t* ___name;
	String_t* ___tooltip;
};
struct NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_marshaled_pinvoke
{
	char* ___name;
	char* ___tooltip;
};
struct NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___tooltip;
};
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D 
{
	int32_t ____index;
	int32_t ____stackDepth;
	int32_t ____continuationsDepth;
	String_t* ____name;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction;
};
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshaled_pinvoke
{
	int32_t ____index;
	int32_t ____stackDepth;
	int32_t ____continuationsDepth;
	char* ____name;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction;
};
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshaled_com
{
	int32_t ____index;
	int32_t ____stackDepth;
	int32_t ____continuationsDepth;
	Il2CppChar* ____name;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction;
};
struct PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31 
{
	String_t* ___filePath;
	int32_t ___line;
};
struct PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31_marshaled_pinvoke
{
	char* ___filePath;
	int32_t ___line;
};
struct PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31_marshaled_com
{
	Il2CppChar* ___filePath;
	int32_t ___line;
};
struct ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 
{
	String_t* ___name;
	bool ___imported;
	int32_t ___creationPassIndex;
	int32_t ___releasePassIndex;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumerList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producerList;
	bool ___memoryless;
	TextureResourceData_t0714EB0BFE2BFB2FC4E0CCFFBFE5CAA6C4B53BE3* ___textureData;
	BufferResourceData_t0B823212ADCC9AA80412877B802DD43236781D57* ___bufferData;
};
struct ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3_marshaled_pinvoke
{
	char* ___name;
	int32_t ___imported;
	int32_t ___creationPassIndex;
	int32_t ___releasePassIndex;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumerList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producerList;
	int32_t ___memoryless;
	TextureResourceData_t0714EB0BFE2BFB2FC4E0CCFFBFE5CAA6C4B53BE3* ___textureData;
	BufferResourceData_t0B823212ADCC9AA80412877B802DD43236781D57* ___bufferData;
};
struct ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___imported;
	int32_t ___creationPassIndex;
	int32_t ___releasePassIndex;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumerList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producerList;
	int32_t ___memoryless;
	TextureResourceData_t0714EB0BFE2BFB2FC4E0CCFFBFE5CAA6C4B53BE3* ___textureData;
	BufferResourceData_t0B823212ADCC9AA80412877B802DD43236781D57* ___bufferData;
};
struct PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 
{
	String_t* ___message;
	bool ___isCompatible;
};
struct PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3_marshaled_pinvoke
{
	char* ___message;
	int32_t ___isCompatible;
};
struct PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3_marshaled_com
{
	Il2CppChar* ___message;
	int32_t ___isCompatible;
};
struct EnumeratorType_tE4EA1CE9FE177E3B324E7C36E5AD8B91AE8F49C9 
{
	int32_t ___value__;
};
struct EnumeratorType_tF9B38F775993F372FAFD0B91B3CAF0EA72BBBAD2 
{
	int32_t ___value__;
};
struct EnumeratorType_t485827C413BC30C2D7020F107121D70CB8AB8F69 
{
	int32_t ___value__;
};
struct EnumeratorType_t213060DC702D8C5D779B12D7E6CE6AFC2D7BB6CA 
{
	int32_t ___value__;
};
typedef Il2CppFullySharedGenericStruct IndexedCollectionPropertyBagEnumerable_1_tF48235F7DD263F1A98B33EBEFC4E192DAC3E2DE8;
struct LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
};
struct PrimitiveParameterExpression_1_t817BB90AF8382BE20F8FD0E9A1508A6227273B93  : public ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110
{
};
struct PrimitiveParameterExpression_1_t3472890410B9EABBEA006747FAB75C83ED05D0EF  : public ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110
{
};
struct PrimitiveParameterExpression_1_tFB88225EB56949A5FE7789A097F7D3EF9E87F71F  : public ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110
{
};
struct PrimitiveParameterExpression_1_t84EA49070ADDAED1D947288626F447420F7018FB  : public ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110
{
};
struct PrimitiveParameterExpression_1_tF8C4A7CE27CA4A119A479E44DC4809FC7A1EB210  : public ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110
{
};
struct PrimitiveParameterExpression_1_tC964C6EB5263DD52D8A6F2E7A30831E4E78B168F  : public ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110
{
};
struct PrimitiveParameterExpression_1_t53C7A6D1CDD24E4536D67F3DA5A0CBCC52FB9354  : public ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110
{
};
struct PrimitiveParameterExpression_1_t69A4CB89EC79CA6D17497F54F8F5FEB4D5D08CBF  : public ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110
{
};
struct PrimitiveParameterExpression_1_t724ACADC8B1EA7446E226EDA6843CCF1A81B8D02  : public ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110
{
};
struct PrimitiveParameterExpression_1_tEEA462A425C4DCDF13971C28AA578F30672871A9  : public ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110
{
};
struct PrimitiveParameterExpression_1_t636203FF8694D0F7AD7FEDB5AE0166324EF4004F  : public ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110
{
};
struct PrimitiveParameterExpression_1_tE19231DCC163F99D61A92741130C5A50C829C892  : public ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110
{
};
struct PrimitiveParameterExpression_1_tBC700C0B6EDB3B78BFCEA74F8C24432261BD81AF  : public ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110
{
};
struct PrimitiveParameterExpression_1_tDF794270F4B8AB052535A17E28757CE8124CAC71  : public ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110
{
};
struct PrimitiveParameterExpression_1_tEE20C9A20842E44239F978A05D919674BAE974ED  : public ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110
{
};
struct Align_t293AAB5F8D4239F304F48DA84CAAB4071C78902C 
{
	int32_t ___value__;
};
struct AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A 
{
	uint32_t ___m_AnimatorBindingsVersion;
	intptr_t ___constant;
	intptr_t ___input;
	intptr_t ___output;
	intptr_t ___workspace;
	intptr_t ___inputStreamAccessor;
	intptr_t ___animationHandleBinder;
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
struct FilterParameterType_t7250262A78079140235AAFF6F4FA3CCB2F99E390 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
};
struct JobMethodIndex_t61229F1B481AD22AB00E479AA42F2C49273B5A7C 
{
	int32_t ___value__;
};
struct JobRanges_t5A1CDFF3E0DB1197050E1E28617B517C15AF6DC3 
{
	int32_t ___BatchSize;
	int32_t ___NumJobs;
	int32_t ___TotalIterationCount;
	intptr_t ___StartEndIndex;
};
struct LayoutUnit_tF18EC17FE8588A01C72784546410EA0D9B1D2F22 
{
	int32_t ___value__;
};
struct RenderGraphPassType_tD00EC2DAA135C660EE7E71652291A4672104EA2D 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SectionCharacteristics_t4CB501495BC18951119375C2DBFD3109D9D4AE8A 
{
	uint32_t ___value__;
};
struct SortDirection_t1CF90CCD8B5D86EF2630D0F080500514821467E4 
{
	int32_t ___value__;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct MemberRefRow_t84BC7461E5D5E9507B20B25B81DC56F8D4DEC7BC 
{
	int32_t ___Class;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Name;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___Signature;
};
struct MethodDebugInformationRow_t489AE45A17326F104C665343C996669CDE8A3C4C 
{
	int32_t ___Document;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___SequencePoints;
};
struct MethodRow_tC4BE0BD38B047D61E793BDF91466DFD5F58AA204 
{
	int32_t ___BodyOffset;
	uint16_t ___ImplFlags;
	uint16_t ___Flags;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Name;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___Signature;
	int32_t ___ParamList;
};
struct MethodSpecRow_tF88E07C9DEF6F4373A6A22E077B5808A52C3C3B1 
{
	int32_t ___Method;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___Instantiation;
};
struct ModuleRefRow_tC6583D00EC33AF50EE8268D5DF2C19B8E432FE48 
{
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Name;
};
struct ParamRow_tDE05B55A79E431AA9C2C99B644ECFA6BB170507B 
{
	uint16_t ___Flags;
	uint16_t ___Sequence;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Name;
};
struct PropertyRow_tE614EAA5056F13A5C2E5D2A355ED2851BAC9A3FC 
{
	uint16_t ___PropFlags;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Name;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___Type;
};
struct StandaloneSigRow_tEB21A03EB2C99BA42A001F2B88AA20C006AC6AD7 
{
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___Signature;
};
struct TypeDefRow_tD50F6B215CA358BAC12C68B4FB2A34064A36F3B1 
{
	uint32_t ___Flags;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Name;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Namespace;
	int32_t ___Extends;
	int32_t ___FieldList;
	int32_t ___MethodList;
};
struct TypeRefRow_tC4F2C78CB305973E6AA58FEA74148F72FE720CA1 
{
	int32_t ___ResolutionScope;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Name;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Namespace;
};
struct TypeSpecRow_t0DFFA75836FD00E8410AEF23A1054E028FFD5D68 
{
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___Signature;
};
struct ToolAction_t305D51E9ACAABE2502709D78374FDF80F3768E9D 
{
	int32_t ___value__;
};
struct Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AnimatedVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InitialVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AxisOfRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartSize;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_StartColor;
	uint32_t ___m_RandomSeed;
	uint32_t ___m_ParentRandomSeed;
	float ___m_Lifetime;
	float ___m_StartLifetime;
	int32_t ___m_MeshIndex;
	float ___m_EmitAccumulator0;
	float ___m_EmitAccumulator1;
	uint32_t ___m_Flags;
};
struct ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 
{
	String_t* ___scenario;
	ObsoletePerScenarioData_tB1EFC0C7B7EA6D0DD0CACC22888799725FC6787C ___data;
};
struct ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7_marshaled_pinvoke
{
	char* ___scenario;
	ObsoletePerScenarioData_tB1EFC0C7B7EA6D0DD0CACC22888799725FC6787C_marshaled_pinvoke ___data;
};
struct ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7_marshaled_com
{
	Il2CppChar* ___scenario;
	ObsoletePerScenarioData_tB1EFC0C7B7EA6D0DD0CACC22888799725FC6787C_marshaled_com ___data;
};
struct TagType_t247BEA6080E7E453FA6F0BC2E8C05D682D94E35A 
{
	int32_t ___value__;
};
struct NodeReferenceData_t3177A3B143685144BF76F48B2FE50CE4CFE19F62 
{
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___node;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	String_t* ___id;
};
struct NodeReferenceData_t3177A3B143685144BF76F48B2FE50CE4CFE19F62_marshaled_pinvoke
{
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___node;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	char* ___id;
};
struct NodeReferenceData_t3177A3B143685144BF76F48B2FE50CE4CFE19F62_marshaled_com
{
	SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7* ___node;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Il2CppChar* ___id;
};
struct BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___srcRect;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___dstPos;
	int32_t ___border;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint;
};
struct BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___srcRect;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___dstPos;
	int32_t ___border;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint;
};
struct BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___srcRect;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___dstPos;
	int32_t ___border;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint;
};
struct RaycastHitData_t5EAB266730389AB27715962670C2512800451841 
{
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___U3CgraphicU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldHitPositionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscreenPositionU3Ek__BackingField;
	float ___U3CdistanceU3Ek__BackingField;
};
struct RaycastHitData_t5EAB266730389AB27715962670C2512800451841_marshaled_pinvoke
{
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___U3CgraphicU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldHitPositionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscreenPositionU3Ek__BackingField;
	float ___U3CdistanceU3Ek__BackingField;
};
struct RaycastHitData_t5EAB266730389AB27715962670C2512800451841_marshaled_com
{
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___U3CgraphicU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldHitPositionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscreenPositionU3Ek__BackingField;
	float ___U3CdistanceU3Ek__BackingField;
};
struct PackRectItem_t06E5EC1DCC818753D059C68E333FC7B09925D27E 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Size;
	bool ___Rotated;
	RuntimeObject* ___Fill;
	int32_t ___SettingIndex;
};
struct PackRectItem_t06E5EC1DCC818753D059C68E333FC7B09925D27E_marshaled_pinvoke
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Size;
	int32_t ___Rotated;
	RuntimeObject* ___Fill;
	int32_t ___SettingIndex;
};
struct PackRectItem_t06E5EC1DCC818753D059C68E333FC7B09925D27E_marshaled_com
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Size;
	int32_t ___Rotated;
	RuntimeObject* ___Fill;
	int32_t ___SettingIndex;
};
struct VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E 
{
	NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4 ___nameAndTooltip;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___volumeProfile;
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ___volumeComponent;
	Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___volume;
};
struct VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E_marshaled_pinvoke
{
	NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_marshaled_pinvoke ___nameAndTooltip;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___volumeProfile;
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ___volumeComponent;
	Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___volume;
};
struct VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E_marshaled_com
{
	NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_marshaled_com ___nameAndTooltip;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___volumeProfile;
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ___volumeComponent;
	Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___volume;
};
struct LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___layoutName;
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___deviceMatcher;
};
struct LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6_marshaled_pinvoke
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___layoutName;
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke ___deviceMatcher;
};
struct LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6_marshaled_com
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___layoutName;
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com ___deviceMatcher;
};
struct VisualsProcessingType_t19983E0076886C15ED2761057B9992989A710ECC 
{
	int32_t ___value__;
};
struct PropertyBag_1_t9B0D7D63F90D24F16F87AF8413E98E8C803A81B9  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tDEB93F9DA6A09C131EDA3412D2CB2A9D59362E63  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t6840AB631DC79C250350FC6827D8311C898DE53A  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t1550A83788F13679513F394B6EDAEFDEF6DD83FD  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tD0DAAE89362D31371D9DECC2D7E4DBDEBC53E162  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t33E0C79EE0DA59E6A729E1B1A25242F129FCCEBB  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tC461C1DF80AEBE5BEB34543E22B80EDFE0D3C889  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tED064263A4CFD78CB222F5605696BFF1B974B371  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t080089E1968463ADDF3E4DCB431FDE05A2D57747  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t6958B8552CBAAD57D1EF84C1998729D995FC69C5  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t6143A06D3AE8F1E0B639EA443C13E7134182E552  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t4B28206939893D408035FF34E371970CE4A1E245  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tA2FF87306E115C430547366EF4C8AA32D97A6D9F  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tF45B9967ECAFBD74FBF226B8F821A80DB0966401  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tBA75029F0EAC25262FF2324AD8A9D84BC4CEAA7F  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tE1A06D66E8EAF44E81429199F4BAA9305FEAFFBE  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tBC60655FD5B03AF2B55D6D9739D6A08235F8294B  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tC597301DD23D1ED18DB72BC2061DF03BBC80D080  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t429DB594FC95EC58ACC43CC3D23876DF36F2A810  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t53B39CDBD832B82FEFFA488A8665E13C56DF497F  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t536F58B4E191D94DA01052EB645043A671219893  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t2D6A83576337049E1AA7A3AA7ACF2E3C905EFE6D  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t9EBF6DD4A021A9C01A37D0E549408B477F19C782  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tE874D3A323BEABED684696DA1FA1468E93D0CB6B  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t955906E20F3B8466D7B35BE8B781E5920A1641E9  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tFA29634A8AE6BDFDB406A9F297A6694DD535D13B  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t17FCC86BDC7CD460253D82E14B883AFAB2B58B69  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t48EB69946F071258B7E302B1CB1587E51AA4899B  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t3A8292E5FBAA78A4CD9958267F21BD8415907356  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tC8CC13C3835F60C196349ED876C10B1831B80321  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tFE99C1C91147C2FF5914A52ED138C48BB9F455E4  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tD413081183D831D5FD1DB047C6388E9EA8522318  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tFA4D14E31A2A501D102D88481DCBC9501A6EF390  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t0967321B2D6F146150A7805676EB01A1FD0E97B6  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tD4671A56749A7DF13214BCC142E5B63DD08DC6E2  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t24AD2D6DD8A94A3CAAAC2BF19CE9CC5FF2A5EF01  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t364035B0D1F144D8E24B3C51D979CE81A80C15E5  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t3A964CBC1C006687152955ADCE5E079A16FCAA64  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tB1D433798A416CD27C6D857D5ACBCE66F96F75D2  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tB5C03C61F7EE85ED25192EB102A1DD0C34FE1659  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tA8F2E4659F4B05E9EE432E67D41DF7D34D00ACBA  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t2F1387D95A1E9B93E66C397645BFB8BCD265219B  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tC24A0A7B21F69286D618A79A4F7CD6F8E9E64E46  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tBB54188F9777697633AEB26C10FCD9F2DD2069F0  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tB29236CBC4D16E03D6222DA324AB2ACF0D43B0A9  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tC860F51F8C5A65926877A98F7783DC6A935F7D1E  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t71AE3FABA64C0BDFD0A5C88C96C610D75DADFAA0  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tE41DECCC84B37A676AD4FB470E116D565F158E50  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t9A8DE563390AAE72BC4CD365302E3CF81023F56C  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tDDE34409F54B0316C92D71544B1048DCAB2C32E8  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tADBFBB103D4F7E1831F1D56F47B4A8F7909E4881  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tD0122DC44A710DD49FC41629A18C8D134C18FE98  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tB2D9FD6EEDEDCE81095EB5FE5BEDEB85C19FC587  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tE7CC94CF3AF5DBFA7C323C057A4FF56BDB716B60  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t8F79254FE423213DBAF2A7C950F4E481BC1E91B8  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t2DD9317B040ECE7B24AB61C113E75B4797E4E7F4  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t4C5B9B18BDE2E252F9CF8A6D1C186898A9930B77  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t770A3AEB214F16F29BBF110D9AC8426DF02198B2  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tF4B0D70F4EB5D361ECC58809FECA24A1759A522A  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t91769598ADBCE14E41CA455BE2D09EE13091BA08  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t5715FD36AD784697BBF54C75B9ED405E6B911E38  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t52FC6BE3D9818DD0B9B8BA9533F01AD2ECAA3A09  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tBDA52190085C86D7FEDC7F89C457AB561BD49D0C  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t2C5513E651D543BF3C3283FCF36634A508575D83  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t2EB8D9AC8781E653B6B2A84E2D2C949898F4C4B5  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t4C4BDE02A1DD1B90FCDA3BF929C73B897578522D  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t745C8514C16F4952BDE7FBF86BD26A02ECF946C7  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t79C20308C23C01C45762F8911B97E810F0515397  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tE6546B1D6A1EF896304F7F2A106E54AB94E036B7  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t3CE274E3A37C54E3388A75382A5881356D49E132  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t1E23861777A25A773264A698434477DCE18B34CF  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tA16FBB091D74A21AC539D829F65E5E8FAF2DB075  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t91378217184AE0BD640D9A003EF2CB208071D593  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
typedef Il2CppFullySharedGenericStruct PropertyCollection_1_t1A85A11A534CEDAC54B3831121B533C068ACD85C;
typedef Il2CppFullySharedGenericStruct PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D;
struct StyleEnum_1_t5578A741DA42584CA127D6AF3539B91F3E8CD180 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 
{
	int32_t ___m_Type;
	float ___m_FloatValue;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorValue;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
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
struct UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_Handle;
};
struct SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA 
{
	SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37* ___columnDesc;
	int32_t ___direction;
};
struct SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_marshaled_pinvoke
{
	SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37* ___columnDesc;
	int32_t ___direction;
};
struct SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_marshaled_com
{
	SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37* ___columnDesc;
	int32_t ___direction;
};
struct Section_t3C77A35C1AE76008B10FA56951E93F5CAC4940DA 
{
	String_t* ___Name;
	uint32_t ___Characteristics;
};
struct Section_t3C77A35C1AE76008B10FA56951E93F5CAC4940DA_marshaled_pinvoke
{
	char* ___Name;
	uint32_t ___Characteristics;
};
struct Section_t3C77A35C1AE76008B10FA56951E93F5CAC4940DA_marshaled_com
{
	Il2CppChar* ___Name;
	uint32_t ___Characteristics;
};
struct SerializedSection_tAB1067DC5BCA726D8712BD3FAE1DB3BFA490C23D 
{
	BlobBuilder_tBBD57F4A395313817B6AD5C883DA9BD7A3E9BC84* ___Builder;
	String_t* ___Name;
	uint32_t ___Characteristics;
	int32_t ___RelativeVirtualAddress;
	int32_t ___SizeOfRawData;
	int32_t ___PointerToRawData;
};
struct SerializedSection_tAB1067DC5BCA726D8712BD3FAE1DB3BFA490C23D_marshaled_pinvoke
{
	BlobBuilder_tBBD57F4A395313817B6AD5C883DA9BD7A3E9BC84* ___Builder;
	char* ___Name;
	uint32_t ___Characteristics;
	int32_t ___RelativeVirtualAddress;
	int32_t ___SizeOfRawData;
	int32_t ___PointerToRawData;
};
struct SerializedSection_tAB1067DC5BCA726D8712BD3FAE1DB3BFA490C23D_marshaled_com
{
	BlobBuilder_tBBD57F4A395313817B6AD5C883DA9BD7A3E9BC84* ___Builder;
	Il2CppChar* ___Name;
	uint32_t ___Characteristics;
	int32_t ___RelativeVirtualAddress;
	int32_t ___SizeOfRawData;
	int32_t ___PointerToRawData;
};
struct PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8 
{
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain;
	int32_t ___action;
};
struct PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8_marshaled_pinvoke
{
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain;
	int32_t ___action;
};
struct PaintedTerrain_t1B5DF2F9D06A308F0BDFF423A9237A22550FF1C8_marshaled_com
{
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain;
	int32_t ___action;
};
struct Tag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406 
{
	int32_t ___tagType;
	bool ___isClosing;
	int32_t ___start;
	int32_t ___end;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value2;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value3;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value4;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value5;
	int8_t ___nestingLevel;
};
struct Tag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406_marshaled_pinvoke
{
	int32_t ___tagType;
	int32_t ___isClosing;
	int32_t ___start;
	int32_t ___end;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value2;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value3;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value4;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value5;
	int8_t ___nestingLevel;
};
struct Tag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406_marshaled_com
{
	int32_t ___tagType;
	int32_t ___isClosing;
	int32_t ___start;
	int32_t ___end;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value2;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value3;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value4;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value5;
	int8_t ___nestingLevel;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D 
{
	String_t* ___m_Path;
	String_t* ___m_TypeFullName;
	LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B ___m_AssetReference;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	Type_t* ___m_CachedType;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshaled_pinvoke
{
	char* ___m_Path;
	char* ___m_TypeFullName;
	LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B ___m_AssetReference;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	Type_t* ___m_CachedType;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshaled_com
{
	Il2CppChar* ___m_Path;
	Il2CppChar* ___m_TypeFullName;
	LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B ___m_AssetReference;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	Type_t* ___m_CachedType;
};
struct PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F 
{
	String_t* ___name;
	int32_t ___type;
	ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99* ___resourceReadLists;
	ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99* ___resourceWriteLists;
	bool ___culled;
	bool ___async;
	int32_t ___nativeSubPassIndex;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	bool ___generateDebugData;
	NRPInfo_tFAE346DBF564B1FDA1EBC1D2F0C3EDC93143D04F* ___nrpInfo;
	PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31 ___scriptInfo;
};
struct PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F_marshaled_pinvoke
{
	char* ___name;
	int32_t ___type;
	ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99* ___resourceReadLists;
	ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99* ___resourceWriteLists;
	int32_t ___culled;
	int32_t ___async;
	int32_t ___nativeSubPassIndex;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___generateDebugData;
	NRPInfo_tFAE346DBF564B1FDA1EBC1D2F0C3EDC93143D04F* ___nrpInfo;
	PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31_marshaled_pinvoke ___scriptInfo;
};
struct PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___type;
	ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99* ___resourceReadLists;
	ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99* ___resourceWriteLists;
	int32_t ___culled;
	int32_t ___async;
	int32_t ___nativeSubPassIndex;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___generateDebugData;
	NRPInfo_tFAE346DBF564B1FDA1EBC1D2F0C3EDC93143D04F* ___nrpInfo;
	PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31_marshaled_com ___scriptInfo;
};
struct EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 
{
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289_marshaled_pinvoke
{
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289_marshaled_com
{
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct ExecuteJobFunction_t6748D7E107B73BB4A53D07F6FAE83716E0666388  : public MulticastDelegate_t
{
};
struct FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C 
{
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____0;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____1;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____2;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____3;
};
struct IndexedCollectionPropertyBagEnumerable_1_t25D3E23348A8FB961FD509BA4EA1E5F7E7F00C86 
{
	RuntimeObject* ___m_Impl;
	StyleEnum_1_t5578A741DA42584CA127D6AF3539B91F3E8CD180 ___m_Container;
};
struct LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C  : public MulticastDelegate_t
{
};
struct Predicate_1_tA6159D8B81831426F5DBEF7D39A3788B4585CE92  : public MulticastDelegate_t
{
};
struct Predicate_1_tA037CF2E55A6A38DE4B186669775C489BE59DA85  : public MulticastDelegate_t
{
};
struct Predicate_1_t90A6A9AF77532D4E34AC1EFF1FDF0EB60AD990BB  : public MulticastDelegate_t
{
};
struct Predicate_1_t83E8468C9DCF2A0976424ADB34E92E6FADDE340D  : public MulticastDelegate_t
{
};
struct Predicate_1_t57FE64B2DCC6F49AEA9E6383296CAA5F71520110  : public MulticastDelegate_t
{
};
struct Predicate_1_tE803873938580B2AC164725FCDB21311FDA71E5D  : public MulticastDelegate_t
{
};
struct Predicate_1_tF3DF859DEA2A9D2AC68055E97F590E0A536399CF  : public MulticastDelegate_t
{
};
struct Predicate_1_t487095A9DD9980464DA00E7C5C3E78C08B1E5276  : public MulticastDelegate_t
{
};
struct Predicate_1_tCFCD9D14A81A348DC8C0147B9FBCFD92DB004C87  : public MulticastDelegate_t
{
};
struct Predicate_1_tD52EE6A0D4483920DECFE1B375A0003B53F00FE1  : public MulticastDelegate_t
{
};
struct Predicate_1_tAB34908EDE292B43CDE576FCA0A897E4DD7ECFCB  : public MulticastDelegate_t
{
};
struct Predicate_1_tFBDA498F30864EEF2F25C8F872F510F707EE6360  : public MulticastDelegate_t
{
};
struct Predicate_1_t8FD9025847B121C90230B3AF56D922C129A6D629  : public MulticastDelegate_t
{
};
struct Predicate_1_tE6FFF0E406EC07710553E97666CDA3407FBACAB1  : public MulticastDelegate_t
{
};
struct Predicate_1_tCE53F5CF15FE8884E971D98135F9900567506E5C  : public MulticastDelegate_t
{
};
struct Predicate_1_t238E84019D92AB10C3549AA707EFE5BAFB44D6A3  : public MulticastDelegate_t
{
};
struct Predicate_1_t51DBC74A7C1E0943D5EFA3FE74416B197013147C  : public MulticastDelegate_t
{
};
struct Predicate_1_t244DD7756250F782592BC22D2B4D198469894D46  : public MulticastDelegate_t
{
};
struct Predicate_1_tE2F9A1C29405DB7A05B134EE0DCDCEB45B5FE965  : public MulticastDelegate_t
{
};
struct Predicate_1_t905C9AACF05FC0543DE2E8421782B6EA6F3236FF  : public MulticastDelegate_t
{
};
struct Predicate_1_t9B23A77B5D637DE7EBF3C177F9A34CAA4C1C02E4  : public MulticastDelegate_t
{
};
struct Predicate_1_t9939AC86819E2498AF558953EFF6F269E25648A6  : public MulticastDelegate_t
{
};
struct Predicate_1_t0C55B51239C83862F44CB14125E618A3597B0712  : public MulticastDelegate_t
{
};
struct Predicate_1_tD510DAD56990F5E890E872ED2EBBA496DBED7093  : public MulticastDelegate_t
{
};
struct Predicate_1_t28959210271C40F0A0780063E8A9A93017170B8B  : public MulticastDelegate_t
{
};
struct Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C  : public MulticastDelegate_t
{
};
struct Predicate_1_t423CD24D1C97FC8453B682DD50254CBD6E713EA9  : public MulticastDelegate_t
{
};
struct Predicate_1_t3009206B573A6BEB766C5332527E1566DCC784F4  : public MulticastDelegate_t
{
};
struct Predicate_1_t81AE4C166BF1776B95AE4B2E6FC429A666A1F5A7  : public MulticastDelegate_t
{
};
struct Predicate_1_t0DD3A888BD803AC1CD60A68FA523C362BEC7D5AE  : public MulticastDelegate_t
{
};
struct Predicate_1_t22E5517034846019C2AAC7CA126400E8452DE0A4  : public MulticastDelegate_t
{
};
struct Predicate_1_tF31071BD69F3E628CC4ABC304B923C681A600605  : public MulticastDelegate_t
{
};
struct Predicate_1_tCF4789C1A5D87395DDFA909A8CB82DC8F5016A84  : public MulticastDelegate_t
{
};
struct Predicate_1_t8E1D2B6133DD5E81983D1B3DB6CC98578070F922  : public MulticastDelegate_t
{
};
struct Predicate_1_t57256459B97F2C866E652724CD49C2CC4A8D50D7  : public MulticastDelegate_t
{
};
struct Predicate_1_tDDBC356BF27AE50A803AA6D2A94AEB24EBB1B869  : public MulticastDelegate_t
{
};
struct Predicate_1_t5EB227002D89EF0CF4F03AEB8D282C36CBF2EEE7  : public MulticastDelegate_t
{
};
struct Predicate_1_t3DAD00743A8030ED59E9F0E95E4904C4D1BA9300  : public MulticastDelegate_t
{
};
struct Predicate_1_t7ED9B622E51E090A6006AF45320697BC4751B3E4  : public MulticastDelegate_t
{
};
struct Predicate_1_t6BB7E4172E2E29F92C012A7C3025F88C4E728C26  : public MulticastDelegate_t
{
};
struct Predicate_1_t93A520FF4A311DBC767E0D16024BB6FCBC117E50  : public MulticastDelegate_t
{
};
struct Predicate_1_t866B5EAE9FE560007C1219A3435F35DF418529B1  : public MulticastDelegate_t
{
};
struct Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD  : public MulticastDelegate_t
{
};
struct Predicate_1_t844BFE826591174B7465BF1D9256083DEC51896B  : public MulticastDelegate_t
{
};
struct Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60  : public MulticastDelegate_t
{
};
struct Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C  : public MulticastDelegate_t
{
};
struct Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1  : public MulticastDelegate_t
{
};
struct Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A  : public MulticastDelegate_t
{
};
struct Predicate_1_t77D31E9C29315FDF86033FA263455FEE3B6606A0  : public MulticastDelegate_t
{
};
struct Predicate_1_tD9B0A67FFCA006944F30C87833D85327010B21C8  : public MulticastDelegate_t
{
};
struct Predicate_1_t5A26532C6713EDA207520BD9A6875002991F4EEC  : public MulticastDelegate_t
{
};
struct Predicate_1_t03BE024AE37F064A204DD4C45AA68DCE510D6E60  : public MulticastDelegate_t
{
};
struct Predicate_1_t7E5B83C99F6527762BD489BA76550A25F6333DA8  : public MulticastDelegate_t
{
};
struct Predicate_1_t2E5711CB35BA617C8E9CB94509B236A2133DC6BD  : public MulticastDelegate_t
{
};
struct Predicate_1_tAEAFCC5540A8AE22294FED9067093D60905E9579  : public MulticastDelegate_t
{
};
struct Predicate_1_t6016F6F497DF0502815BD6568904B53AD03DC7D2  : public MulticastDelegate_t
{
};
struct Predicate_1_t897AC601B2D18D49F8B416C6D9C4720337BE7D50  : public MulticastDelegate_t
{
};
struct Predicate_1_t56101C8E7148BBB4EB418E080837D40DD2285D45  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF 
{
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
	int32_t ___snapshotIndex;
	intptr_t ___vectorImagePtr;
	intptr_t ___texturePtr;
};
struct ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 
{
	int32_t ___index;
	String_t* ___name;
	float ___actualWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___width;
	bool ___visible;
};
struct ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_marshaled_pinvoke
{
	int32_t ___index;
	char* ___name;
	float ___actualWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___width;
	int32_t ___visible;
};
struct ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_marshaled_com
{
	int32_t ___index;
	Il2CppChar* ___name;
	float ___actualWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___width;
	int32_t ___visible;
};
struct IndexedCollectionPropertyBagEnumerable_1_t842A547CD36BAA3ED65CDC8EF097F6F8031E6F56 
{
	RuntimeObject* ___m_Impl;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Container;
};
struct Predicate_1_t373D1D7AC67DE97C3612E0A5ADCA5CF43CD8E524  : public MulticastDelegate_t
{
};
struct Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7  : public MulticastDelegate_t
{
};
struct PropertyCollection_1_t0B49E2F40FE959B1BD3004AC443133FB2334425C 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_t4B846D5AA2F21AD00EE16A815E0984EC65E357A5* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_t25D3E23348A8FB961FD509BA4EA1E5F7E7F00C86 ___m_IndexedCollectionPropertyBag;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct PropertyCollection_1_t26F2994FBF8EFDCFDAF40CB38EC30DB554333029 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_t62A239636F5DD077E898323BCAEF841E874663F6* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_t842A547CD36BAA3ED65CDC8EF097F6F8031E6F56 ___m_IndexedCollectionPropertyBag;
};
struct U3CU3EO_tE95C52E7CAE27912D35531EB2E48A97BC3EBAA5F_StaticFields
{
	ExecuteJobFunction_t6748D7E107B73BB4A53D07F6FAE83716E0666388* ___U3C0U3E__Execute;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct ProcessAnimationJobStruct_1_t53B6F4AA9902BA10D2DE9D1C81FC101B062906DD_StaticFields
{
	intptr_t ___jobReflectionData;
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
struct PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C_StaticFields
{
	int32_t ___Invalid;
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
struct PropertyCollection_1_t0B49E2F40FE959B1BD3004AC443133FB2334425C_StaticFields
{
	PropertyCollection_1_t0B49E2F40FE959B1BD3004AC443133FB2334425C ___U3CEmptyU3Ek__BackingField;
};
struct PropertyCollection_1_t26F2994FBF8EFDCFDAF40CB38EC30DB554333029_StaticFields
{
	PropertyCollection_1_t26F2994FBF8EFDCFDAF40CB38EC30DB554333029 ___U3CEmptyU3Ek__BackingField;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87  : public RuntimeArray
{
	ALIGN_FIELD (8) HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* m_Items[1];

	inline HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleElem__ctor_m41A2E6998CAC160482FB3E47FA8C1226116C387E_gshared (HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LessOrEqual_Invoke_m288DE6AD35E8B0DEEDEBEEC26C97498F1D56FC0F_gshared_inline (LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* __this, Il2CppSharedGenericObject* ___0_lhs, Il2CppSharedGenericObject* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityHeap_1_FloatDown_m321C5C3F648E3257AA839D68CC8AC624CECB869B_gshared (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, int32_t ___0_curr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityHeap_1_FloatUp_m60D346D61DD35A32C426B7636B3B288DD64685E2_gshared (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, int32_t ___0_curr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PriorityHeap_1_get_Empty_m575B2DBD151620AFC9AB87559161A6DDB5F121E0_gshared (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityHeap_1__ctor_m7A2DB586AD7DC9419F05D95183F5F5D4D1347D00_gshared (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, int32_t ___0_initialSize, LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* ___1_leq, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m5C333061E1285AC5B22F556173FBE157EF1A37B7_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackItem__ctor_m50064E4D830098ED19EC5973D7C575E6EEBD7994_gshared (StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Swap_m1BB9375A3F0DF46701F354478F449441FA9763E2_gshared (int32_t* ___0_a, int32_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mCAD00A69587F884F88C36DE7423C3C329166144E_gshared_inline (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityHeap_1_Init_m04285EAC5497782F8CEDE1EF4897484022DB3824_gshared (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C PriorityHeap_1_Insert_m2D385CC22053D5616238D289FAC8BF808860606B_gshared (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PriorityHeap_1_ExtractMin_m71B4613556B6D23D2EBE957EF23A1186333D4016_gshared (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PriorityHeap_1_Minimum_m29EFFDD2F5E81449FC063AA942DBF1484F3DF2B8_gshared (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityHeap_1_Remove_m26008E2F92FB72D4D96FF16E244784C6FF95408F_gshared (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteJobFunction__ctor_mA48BFAE3B94766CD82F48E799D55916A50E47A67_gshared (ExecuteJobFunction_t6748D7E107B73BB4A53D07F6FAE83716E0666388* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mBE6568C7ECF69CD1E86FDFF4E25D6CB529F76BF3_gshared_inline (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBagStore_AddPropertyBag_TisIl2CppFullySharedGenericAny_mB0AA53F19CB33A3C2A29AC822452167CB955F19D_gshared (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_AcceptWithSpecializedVisitor_TisIl2CppFullySharedGenericAny_mDB91562B01F9A25F2996347A1981D24A0DFBBFF1_gshared (RuntimeObject* ___0_properties, RuntimeObject* ___1_visitor, Il2CppFullySharedGenericAny* ___2_container, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_Instantiate_TisIl2CppFullySharedGenericAny_m16821F3B413A510B42D80A6D20A540E95AB55F6A_gshared (Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_TryInstantiate_TisIl2CppFullySharedGenericAny_m649F65DE0BCA16E2A127A53A46C010AD35120D3E_gshared (Il2CppFullySharedGenericAny* ___0_instance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyChangedEvent__ctor_mE96956B37FF2BBE1377185FCBDF06BE5B4F5B1B8_gshared (PropertyChangedEvent_t6239E36B1DE89FA625F64D364C36ACAF8424D998* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyChangedEvent_Notify_m5CE687C189758E6AAF3B1E938B7B04AE68145D7D_gshared (PropertyChangedEvent_t6239E36B1DE89FA625F64D364C36ACAF8424D998* __this, Il2CppFullySharedGenericAny ___0_instance, String_t* ___1_propertyName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mD132267FDFD79997EE2A47470E89CE83AC7CA91E_gshared (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterExpression__ctor_m5EC144E6CC98B684D27C88CBD48BD52B4441E87D (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void HandleElem__ctor_m41A2E6998CAC160482FB3E47FA8C1226116C387E (HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* __this, const RuntimeMethod* method)
{
	((  void (*) (HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57*, const RuntimeMethod*))HandleElem__ctor_m41A2E6998CAC160482FB3E47FA8C1226116C387E_gshared)(__this, method);
}
inline bool LessOrEqual_Invoke_m288DE6AD35E8B0DEEDEBEEC26C97498F1D56FC0F_inline (LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* __this, Il2CppSharedGenericObject* ___0_lhs, Il2CppSharedGenericObject* ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*))LessOrEqual_Invoke_m288DE6AD35E8B0DEEDEBEEC26C97498F1D56FC0F_gshared_inline)(__this, ___0_lhs, ___1_rhs, method);
}
inline void PriorityHeap_1_FloatDown_m321C5C3F648E3257AA839D68CC8AC624CECB869B (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, int32_t ___0_curr, const RuntimeMethod* method)
{
	((  void (*) (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396*, int32_t, const RuntimeMethod*))PriorityHeap_1_FloatDown_m321C5C3F648E3257AA839D68CC8AC624CECB869B_gshared)(__this, ___0_curr, method);
}
inline void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**, int32_t, const RuntimeMethod*))Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712_gshared)(___0_array, ___1_newSize, method);
}
inline void Array_Resize_TisHandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57_m2E343895C09779AFD99E9A981FEA5886A3669126 (HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87**, int32_t, const RuntimeMethod*))Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712_gshared)(___0_array, ___1_newSize, method);
}
inline void PriorityHeap_1_FloatUp_m60D346D61DD35A32C426B7636B3B288DD64685E2 (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, int32_t ___0_curr, const RuntimeMethod* method)
{
	((  void (*) (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396*, int32_t, const RuntimeMethod*))PriorityHeap_1_FloatUp_m60D346D61DD35A32C426B7636B3B288DD64685E2_gshared)(__this, ___0_curr, method);
}
inline bool PriorityHeap_1_get_Empty_m575B2DBD151620AFC9AB87559161A6DDB5F121E0 (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396*, const RuntimeMethod*))PriorityHeap_1_get_Empty_m575B2DBD151620AFC9AB87559161A6DDB5F121E0_gshared)(__this, method);
}
inline void PriorityHeap_1__ctor_m7A2DB586AD7DC9419F05D95183F5F5D4D1347D00 (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, int32_t ___0_initialSize, LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* ___1_leq, const RuntimeMethod* method)
{
	((  void (*) (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396*, int32_t, LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C*, const RuntimeMethod*))PriorityHeap_1__ctor_m7A2DB586AD7DC9419F05D95183F5F5D4D1347D00_gshared)(__this, ___0_initialSize, ___1_leq, method);
}
inline void Stack_1__ctor_m79E4898CA48C9B3FE0524289E869082D7B7E82C5 (Stack_1_t44D9E75D09A4B1095DD3D19FD083FCFEAD4EBD47* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t44D9E75D09A4B1095DD3D19FD083FCFEAD4EBD47*, const RuntimeMethod*))Stack_1__ctor_m5C333061E1285AC5B22F556173FBE157EF1A37B7_gshared)(__this, method);
}
inline void StackItem__ctor_m50064E4D830098ED19EC5973D7C575E6EEBD7994 (StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4* __this, const RuntimeMethod* method)
{
	((  void (*) (StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4*, const RuntimeMethod*))StackItem__ctor_m50064E4D830098ED19EC5973D7C575E6EEBD7994_gshared)(__this, method);
}
inline void Stack_1_Push_m6A29C6FAF5CB9AE9690CD3C157C931F8120C23C5 (Stack_1_t44D9E75D09A4B1095DD3D19FD083FCFEAD4EBD47* __this, StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4* Stack_1_Pop_mD1275302EB6B438DE0F6B91EAF4ADA191EC03254 (Stack_1_t44D9E75D09A4B1095DD3D19FD083FCFEAD4EBD47* __this, const RuntimeMethod* method)
{
	StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4* il2cppRetVal;
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void PriorityQueue_1_Swap_m1BB9375A3F0DF46701F354478F449441FA9763E2 (int32_t* ___0_a, int32_t* ___1_b, const RuntimeMethod* method)
{
	((  void (*) (int32_t*, int32_t*, const RuntimeMethod*))PriorityQueue_1_Swap_m1BB9375A3F0DF46701F354478F449441FA9763E2_gshared)(___0_a, ___1_b, method);
}
inline int32_t Stack_1_get_Count_m4912DF21AC15CC140CF1BE7041A987E2E4B2309A_inline (Stack_1_t44D9E75D09A4B1095DD3D19FD083FCFEAD4EBD47* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t44D9E75D09A4B1095DD3D19FD083FCFEAD4EBD47*, const RuntimeMethod*))Stack_1_get_Count_mCAD00A69587F884F88C36DE7423C3C329166144E_gshared_inline)(__this, method);
}
inline void PriorityHeap_1_Init_m04285EAC5497782F8CEDE1EF4897484022DB3824 (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, const RuntimeMethod* method)
{
	((  void (*) (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396*, const RuntimeMethod*))PriorityHeap_1_Init_m04285EAC5497782F8CEDE1EF4897484022DB3824_gshared)(__this, method);
}
inline PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C PriorityHeap_1_Insert_m2D385CC22053D5616238D289FAC8BF808860606B (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method)
{
	return ((  PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C (*) (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396*, Il2CppSharedGenericObject*, const RuntimeMethod*))PriorityHeap_1_Insert_m2D385CC22053D5616238D289FAC8BF808860606B_gshared)(__this, ___0_value, method);
}
inline void Array_Resize_TisIl2CppSharedGenericObject_m2368EE7266665D349010E73D8C23E09C635C3038 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979**, int32_t, const RuntimeMethod*))Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712_gshared)(___0_array, ___1_newSize, method);
}
inline Il2CppSharedGenericObject* PriorityHeap_1_ExtractMin_m71B4613556B6D23D2EBE957EF23A1186333D4016 (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396*, const RuntimeMethod*))PriorityHeap_1_ExtractMin_m71B4613556B6D23D2EBE957EF23A1186333D4016_gshared)(__this, method);
}
inline Il2CppSharedGenericObject* PriorityHeap_1_Minimum_m29EFFDD2F5E81449FC063AA942DBF1484F3DF2B8 (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396*, const RuntimeMethod*))PriorityHeap_1_Minimum_m29EFFDD2F5E81449FC063AA942DBF1484F3DF2B8_gshared)(__this, method);
}
inline void PriorityHeap_1_Remove_m26008E2F92FB72D4D96FF16E244784C6FF95408F (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C ___0_handle, const RuntimeMethod* method)
{
	((  void (*) (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396*, PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C, const RuntimeMethod*))PriorityHeap_1_Remove_m26008E2F92FB72D4D96FF16E244784C6FF95408F_gshared)(__this, ___0_handle, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
inline void ExecuteJobFunction__ctor_mA48BFAE3B94766CD82F48E799D55916A50E47A67 (ExecuteJobFunction_t6748D7E107B73BB4A53D07F6FAE83716E0666388* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ExecuteJobFunction_t6748D7E107B73BB4A53D07F6FAE83716E0666388*, RuntimeObject*, intptr_t, const RuntimeMethod*))ExecuteJobFunction__ctor_mA48BFAE3B94766CD82F48E799D55916A50E47A67_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t JobsUtility_CreateJobReflectionData_m17265DED7C2DBB0B2130896E2B8AC4CF5BD7FCE7 (Type_t* ___0_type, RuntimeObject* ___1_managedJobFunction0, RuntimeObject* ___2_managedJobFunction1, RuntimeObject* ___3_managedJobFunction2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
inline void UnsafeUtility_CopyPtrToStructure_TisAnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A_m4586A434BA546E82429C2D0E361911FF6D9AFB0A_inline (void* ___0_ptr, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, const RuntimeMethod*))UnsafeUtility_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mBE6568C7ECF69CD1E86FDFF4E25D6CB529F76BF3_gshared_inline)(___0_ptr, ___1_output, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292 (intptr_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void PropertyBagStore_AddPropertyBag_TisIl2CppFullySharedGenericAny_mB0AA53F19CB33A3C2A29AC822452167CB955F19D (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))PropertyBagStore_AddPropertyBag_TisIl2CppFullySharedGenericAny_mB0AA53F19CB33A3C2A29AC822452167CB955F19D_gshared)(___0_propertyBag, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void PropertyBag_AcceptWithSpecializedVisitor_TisIl2CppFullySharedGenericAny_mDB91562B01F9A25F2996347A1981D24A0DFBBFF1 (RuntimeObject* ___0_properties, RuntimeObject* ___1_visitor, Il2CppFullySharedGenericAny* ___2_container, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PropertyBag_AcceptWithSpecializedVisitor_TisIl2CppFullySharedGenericAny_mDB91562B01F9A25F2996347A1981D24A0DFBBFF1_gshared)(___0_properties, ___1_visitor, ___2_container, method);
}
inline void TypeUtility_Instantiate_TisIl2CppFullySharedGenericAny_m16821F3B413A510B42D80A6D20A540E95AB55F6A (Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))TypeUtility_Instantiate_TisIl2CppFullySharedGenericAny_m16821F3B413A510B42D80A6D20A540E95AB55F6A_gshared)(il2cppRetVal, method);
}
inline bool TypeUtility_TryInstantiate_TisIl2CppFullySharedGenericAny_m649F65DE0BCA16E2A127A53A46C010AD35120D3E (Il2CppFullySharedGenericAny* ___0_instance, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))TypeUtility_TryInstantiate_TisIl2CppFullySharedGenericAny_m649F65DE0BCA16E2A127A53A46C010AD35120D3E_gshared)(___0_instance, method);
}
inline void Dictionary_2__ctor_m86F6F4C579C08BF4813645D23D2DAC921319D763 (Dictionary_2_t6D165219FBC5112F01F1A41A9CFA56F2E1A19D67* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6D165219FBC5112F01F1A41A9CFA56F2E1A19D67*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)(__this, method);
}
inline void PropertyChangedEvent__ctor_mE96956B37FF2BBE1377185FCBDF06BE5B4F5B1B8 (PropertyChangedEvent_t6239E36B1DE89FA625F64D364C36ACAF8424D998* __this, const RuntimeMethod* method)
{
	((  void (*) (PropertyChangedEvent_t6239E36B1DE89FA625F64D364C36ACAF8424D998*, const RuntimeMethod*))PropertyChangedEvent__ctor_mE96956B37FF2BBE1377185FCBDF06BE5B4F5B1B8_gshared)(__this, method);
}
inline bool Dictionary_2_TryGetValue_mD426C2DFD26F2E52CBF02C044C8AA03E6DF844C9 (Dictionary_2_t6D165219FBC5112F01F1A41A9CFA56F2E1A19D67* __this, Type_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
inline void PropertyChangedEvent_Notify_m5CE687C189758E6AAF3B1E938B7B04AE68145D7D (PropertyChangedEvent_t6239E36B1DE89FA625F64D364C36ACAF8424D998* __this, Il2CppFullySharedGenericAny ___0_instance, String_t* ___1_propertyName, const RuntimeMethod* method)
{
	((  void (*) (PropertyChangedEvent_t6239E36B1DE89FA625F64D364C36ACAF8424D998*, Il2CppFullySharedGenericAny, String_t*, const RuntimeMethod*))PropertyChangedEvent_Notify_m5CE687C189758E6AAF3B1E938B7B04AE68145D7D_gshared)((PropertyChangedEvent_t6239E36B1DE89FA625F64D364C36ACAF8424D998*)__this, ___0_instance, ___1_propertyName, method);
}
inline void UnsafeUtility_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mD132267FDFD79997EE2A47470E89CE83AC7CA91E (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))UnsafeUtility_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mD132267FDFD79997EE2A47470E89CE83AC7CA91E_gshared)(___0_ptr, ___1_output, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveParameterExpression_1__ctor_m3087944CBB462A9FEAE385240F2AA2029AA387C5_gshared (PrimitiveParameterExpression_1_tEE20C9A20842E44239F978A05D919674BAE974ED* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___0_name;
		ParameterExpression__ctor_m5EC144E6CC98B684D27C88CBD48BD52B4441E87D((ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PrimitiveParameterExpression_1_get_Type_m9AF54297A1F15FB23BDDDFD2114A084DBFB207B1_gshared (PrimitiveParameterExpression_1_tEE20C9A20842E44239F978A05D919674BAE974ED* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PriorityHeap_1_get_Empty_m575B2DBD151620AFC9AB87559161A6DDB5F121E0_gshared (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityHeap_1_t73D53462E145A3EBBFDE9DD3B1534390BB6CE8D5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 834));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 835));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 836));
		int32_t L_0 = __this->____size;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityHeap_1__ctor_m7A2DB586AD7DC9419F05D95183F5F5D4D1347D00_gshared (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, int32_t ___0_initialSize, LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* ___1_leq, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityHeap_1_t73D53462E145A3EBBFDE9DD3B1534390BB6CE8D5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_initialSize), (&___1_leq));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 837));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 838));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 839));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 840));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 840));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 841));
		LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* L_0 = ___1_leq;
		__this->____leq = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____leq), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 842));
		int32_t L_1 = ___0_initialSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_1, 1)));
		__this->____nodes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodes), (void*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 843));
		int32_t L_3 = ___0_initialSize;
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_4 = (HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87*)(HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), (uint32_t)((int32_t)il2cpp_codegen_add(L_3, 1)));
		__this->____handles = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handles), (void*)L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 844));
		__this->____size = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 845));
		int32_t L_5 = ___0_initialSize;
		__this->____max = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 846));
		__this->____freeList = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 847));
		__this->____initialized = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 848));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____nodes;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 849));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_7 = __this->____handles;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 850));
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_8 = (HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		HandleElem__ctor_m41A2E6998CAC160482FB3E47FA8C1226116C387E(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 850));
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_9 = L_8;
		NullCheck(L_9);
		Il2CppSharedGenericObject** L_10 = (Il2CppSharedGenericObject**)(&L_9->____key);
		il2cpp_codegen_initobj(L_10, sizeof(Il2CppSharedGenericObject*));
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57*)L_9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 851));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityHeap_1_FloatDown_m321C5C3F648E3257AA839D68CC8AC624CECB869B_gshared (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, int32_t ___0_curr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityHeap_1_t73D53462E145A3EBBFDE9DD3B1534390BB6CE8D5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_curr));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 852));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 853));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 854));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____nodes;
		int32_t L_1 = ___0_curr;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 855));
		int32_t L_4 = ___0_curr;
		V_0 = ((int32_t)(L_4<<1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 856));
		int32_t L_5 = V_0;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0051;
		}
	}
	{
		LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* L_7 = __this->____leq;
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_8 = __this->____handles;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____nodes;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		int32_t L_13 = L_12;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_14 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Il2CppSharedGenericObject* L_15 = L_14->____key;
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_16 = __this->____handles;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->____nodes;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		int32_t L_21 = L_20;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_22 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_23 = L_22->____key;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 857));
		NullCheck(L_7);
		bool L_24;
		L_24 = LessOrEqual_Invoke_m288DE6AD35E8B0DEEDEBEEC26C97498F1D56FC0F_inline(L_7, L_15, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 857));
		if (!L_24)
		{
			goto IL_0051;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 858));
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0051:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 859));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->____nodes;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_2 = L_29;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 860));
		int32_t L_30 = V_0;
		int32_t L_31 = __this->____size;
		if ((((int32_t)L_30) > ((int32_t)L_31)))
		{
			goto IL_008a;
		}
	}
	{
		LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* L_32 = __this->____leq;
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_33 = __this->____handles;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		Il2CppSharedGenericObject* L_37 = L_36->____key;
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_38 = __this->____handles;
		int32_t L_39 = V_2;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		Il2CppSharedGenericObject* L_42 = L_41->____key;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 861));
		NullCheck(L_32);
		bool L_43;
		L_43 = LessOrEqual_Invoke_m288DE6AD35E8B0DEEDEBEEC26C97498F1D56FC0F_inline(L_32, L_37, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 861));
		if (!L_43)
		{
			goto IL_00a2;
		}
	}

IL_008a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 862));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = __this->____nodes;
		int32_t L_45 = ___0_curr;
		int32_t L_46 = V_1;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (int32_t)L_46);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 863));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_47 = __this->____handles;
		int32_t L_48 = V_1;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		int32_t L_51 = ___0_curr;
		NullCheck(L_50);
		L_50->____node = L_51;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 864));
		return;
	}

IL_00a2:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 865));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = __this->____nodes;
		int32_t L_53 = ___0_curr;
		int32_t L_54 = V_2;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (int32_t)L_54);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 866));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_55 = __this->____handles;
		int32_t L_56 = V_2;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = ___0_curr;
		NullCheck(L_58);
		L_58->____node = L_59;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 867));
		int32_t L_60 = V_0;
		___0_curr = L_60;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 868));
		goto IL_0009;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityHeap_1_FloatUp_m60D346D61DD35A32C426B7636B3B288DD64685E2_gshared (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, int32_t ___0_curr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityHeap_1_t73D53462E145A3EBBFDE9DD3B1534390BB6CE8D5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_curr));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 869));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 870));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 871));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____nodes;
		int32_t L_1 = ___0_curr;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 872));
		int32_t L_4 = ___0_curr;
		V_0 = ((int32_t)(L_4>>1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 873));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____nodes;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 874));
		int32_t L_9 = V_0;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* L_10 = __this->____leq;
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_11 = __this->____handles;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Il2CppSharedGenericObject* L_15 = L_14->____key;
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_16 = __this->____handles;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_20 = L_19->____key;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 875));
		NullCheck(L_10);
		bool L_21;
		L_21 = LessOrEqual_Invoke_m288DE6AD35E8B0DEEDEBEEC26C97498F1D56FC0F_inline(L_10, L_15, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 875));
		if (!L_21)
		{
			goto IL_0058;
		}
	}

IL_0040:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 876));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____nodes;
		int32_t L_23 = ___0_curr;
		int32_t L_24 = V_1;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)L_24);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 877));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_25 = __this->____handles;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = ___0_curr;
		NullCheck(L_28);
		L_28->____node = L_29;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 878));
		return;
	}

IL_0058:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 879));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____nodes;
		int32_t L_31 = ___0_curr;
		int32_t L_32 = V_2;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)L_32);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 880));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_33 = __this->____handles;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		int32_t L_37 = ___0_curr;
		NullCheck(L_36);
		L_36->____node = L_37;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 881));
		int32_t L_38 = V_0;
		___0_curr = L_38;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 882));
		goto IL_0009;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityHeap_1_Init_m04285EAC5497782F8CEDE1EF4897484022DB3824_gshared (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityHeap_1_t73D53462E145A3EBBFDE9DD3B1534390BB6CE8D5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 883));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 884));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 885));
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 886));
		goto IL_0014;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 887));
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 888));
		PriorityHeap_1_FloatDown_m321C5C3F648E3257AA839D68CC8AC624CECB869B(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 888));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 889));
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 890));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 891));
		__this->____initialized = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 892));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C PriorityHeap_1_Insert_m2D385CC22053D5616238D289FAC8BF808860606B_gshared (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityHeap_1_t73D53462E145A3EBBFDE9DD3B1534390BB6CE8D5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C V_3;
	memset((&V_3), 0, sizeof(V_3));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 893));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 894));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 895));
		int32_t L_0 = __this->____size;
		V_2 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_2;
		__this->____size = L_1;
		int32_t L_2 = V_2;
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 896));
		int32_t L_3 = V_0;
		int32_t L_4 = __this->____max;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(L_3, 2))) <= ((int32_t)L_4)))
		{
			goto IL_0051;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 897));
		int32_t L_5 = __this->____max;
		__this->____max = ((int32_t)(L_5<<1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 898));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)(&__this->____nodes);
		int32_t L_7 = __this->____max;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 899));
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916(L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 899));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 900));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87** L_8 = (HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87**)(&__this->____handles);
		int32_t L_9 = __this->____max;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 901));
		Array_Resize_TisHandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57_m2E343895C09779AFD99E9A981FEA5886A3669126(L_8, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 901));
	}

IL_0051:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 902));
		int32_t L_10 = __this->____freeList;
		if (L_10)
		{
			goto IL_005d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 903));
		int32_t L_11 = V_0;
		V_1 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 904));
		goto IL_0077;
	}

IL_005d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 905));
		int32_t L_12 = __this->____freeList;
		V_1 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 906));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_13 = __this->____handles;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		int32_t L_17 = L_16->____node;
		__this->____freeList = L_17;
	}

IL_0077:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 907));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->____nodes;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)L_20);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 908));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_21 = __this->____handles;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if (L_24)
		{
			goto IL_00a7;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 909));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_25 = __this->____handles;
		int32_t L_26 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 910));
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_27 = (HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		HandleElem__ctor_m41A2E6998CAC160482FB3E47FA8C1226116C387E(L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 910));
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_28 = L_27;
		Il2CppSharedGenericObject* L_29 = ___0_value;
		NullCheck(L_28);
		L_28->____key = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->____key), (void*)L_29);
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_30 = L_28;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		L_30->____node = L_31;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_30);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57*)L_30);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 911));
		goto IL_00c3;
	}

IL_00a7:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 912));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_32 = __this->____handles;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		int32_t L_36 = V_0;
		NullCheck(L_35);
		L_35->____node = L_36;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 913));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_37 = __this->____handles;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		Il2CppSharedGenericObject* L_41 = ___0_value;
		NullCheck(L_40);
		L_40->____key = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_40->____key), (void*)L_41);
	}

IL_00c3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 914));
		bool L_42 = __this->____initialized;
		if (!L_42)
		{
			goto IL_00d2;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 915));
		int32_t L_43 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 916));
		PriorityHeap_1_FloatUp_m60D346D61DD35A32C426B7636B3B288DD64685E2(__this, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 916));
	}

IL_00d2:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 917));
		il2cpp_codegen_initobj((&V_3), sizeof(PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C));
		int32_t L_44 = V_1;
		(&V_3)->____handle = L_44;
		PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C L_45 = V_3;
		return L_45;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PriorityHeap_1_ExtractMin_m71B4613556B6D23D2EBE957EF23A1186333D4016_gshared (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityHeap_1_t73D53462E145A3EBBFDE9DD3B1534390BB6CE8D5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 918));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 919));
	Il2CppSharedGenericObject* G_B3_0 = NULL;
	Il2CppSharedGenericObject* G_B1_0 = NULL;
	Il2CppSharedGenericObject* G_B2_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 920));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____nodes;
		NullCheck(L_0);
		int32_t L_1 = 1;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 921));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_3 = __this->____handles;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Il2CppSharedGenericObject* L_7 = L_6->____key;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 922));
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			G_B3_0 = L_7;
			goto IL_0091;
		}
		G_B1_0 = L_7;
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 923));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____nodes;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____nodes;
		int32_t L_11 = __this->____size;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_13);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 924));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_14 = __this->____handles;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____nodes;
		NullCheck(L_15);
		int32_t L_16 = 1;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_14);
		int32_t L_18 = L_17;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_19 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		L_19->____node = 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 925));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_20 = __this->____handles;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		Il2CppSharedGenericObject** L_24 = (Il2CppSharedGenericObject**)(&L_23->____key);
		il2cpp_codegen_initobj(L_24, sizeof(Il2CppSharedGenericObject*));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 926));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_25 = __this->____handles;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = __this->____freeList;
		NullCheck(L_28);
		L_28->____node = L_29;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 927));
		int32_t L_30 = V_0;
		__this->____freeList = L_30;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 928));
		int32_t L_31 = __this->____size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		int32_t L_32 = V_1;
		__this->____size = L_32;
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			G_B3_0 = G_B1_0;
			goto IL_0091;
		}
		G_B2_0 = G_B1_0;
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 929));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 930));
		PriorityHeap_1_FloatDown_m321C5C3F648E3257AA839D68CC8AC624CECB869B(__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 930));
		G_B3_0 = G_B2_0;
	}

IL_0091:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 931));
		return G_B3_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PriorityHeap_1_Minimum_m29EFFDD2F5E81449FC063AA942DBF1484F3DF2B8_gshared (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityHeap_1_t73D53462E145A3EBBFDE9DD3B1534390BB6CE8D5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 932));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 933));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 934));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_0 = __this->____handles;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____nodes;
		NullCheck(L_1);
		int32_t L_2 = 1;
		int32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		int32_t L_4 = L_3;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_5 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_6 = L_5->____key;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityHeap_1_Remove_m26008E2F92FB72D4D96FF16E244784C6FF95408F_gshared (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* __this, PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityHeap_1_t73D53462E145A3EBBFDE9DD3B1534390BB6CE8D5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_handle));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 935));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 936));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 937));
		PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C L_0 = ___0_handle;
		int32_t L_1 = L_0.____handle;
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 938));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_2 = __this->____handles;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		int32_t L_6 = L_5->____node;
		V_1 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 939));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____nodes;
		int32_t L_8 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____nodes;
		int32_t L_10 = __this->____size;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_12);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 940));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_13 = __this->____handles;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____nodes;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_13);
		int32_t L_18 = L_17;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_19 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = V_1;
		NullCheck(L_19);
		L_19->____node = L_20;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 941));
		int32_t L_21 = V_1;
		int32_t L_22 = __this->____size;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		int32_t L_23 = V_2;
		__this->____size = L_23;
		int32_t L_24 = V_2;
		if ((((int32_t)L_21) > ((int32_t)L_24)))
		{
			goto IL_009e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 942));
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) <= ((int32_t)1)))
		{
			goto IL_008e;
		}
	}
	{
		LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* L_26 = __this->____leq;
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_27 = __this->____handles;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = __this->____nodes;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)(L_29>>1));
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_27);
		int32_t L_32 = L_31;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_33 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		Il2CppSharedGenericObject* L_34 = L_33->____key;
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_35 = __this->____handles;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->____nodes;
		int32_t L_37 = V_1;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_35);
		int32_t L_40 = L_39;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_41 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		Il2CppSharedGenericObject* L_42 = L_41->____key;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 943));
		NullCheck(L_26);
		bool L_43;
		L_43 = LessOrEqual_Invoke_m288DE6AD35E8B0DEEDEBEEC26C97498F1D56FC0F_inline(L_26, L_34, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 943));
		if (!L_43)
		{
			goto IL_0097;
		}
	}

IL_008e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 944));
		int32_t L_44 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 945));
		PriorityHeap_1_FloatDown_m321C5C3F648E3257AA839D68CC8AC624CECB869B(__this, L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 945));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 946));
		goto IL_009e;
	}

IL_0097:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 947));
		int32_t L_45 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 948));
		PriorityHeap_1_FloatUp_m60D346D61DD35A32C426B7636B3B288DD64685E2(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 948));
	}

IL_009e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 949));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_46 = __this->____handles;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		Il2CppSharedGenericObject** L_50 = (Il2CppSharedGenericObject**)(&L_49->____key);
		il2cpp_codegen_initobj(L_50, sizeof(Il2CppSharedGenericObject*));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 950));
		HandleElemU5BU5D_t2F99F391F066C8EB42FA311B47EABF4E927B6C87* L_51 = __this->____handles;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		HandleElem_tD91D561CFB372B1A0DC395EBF1E24FEA1C044E57* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		int32_t L_55 = __this->____freeList;
		NullCheck(L_54);
		L_54->____node = L_55;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 951));
		int32_t L_56 = V_0;
		__this->____freeList = L_56;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 952));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PriorityQueue_1_get_Empty_m5BB7E870214E127AF40E65D554305C7FA50C5C29_gshared (PriorityQueue_1_t811C24B98ED1CB91821F5F7AA7C2AD65D29CD72F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_t75752B7D1ECCABDBAEEB0ED0065A23DB0ADD16A0_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 953));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 954));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 955));
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* L_1 = __this->____heap;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 956));
		NullCheck(L_1);
		bool L_2;
		L_2 = PriorityHeap_1_get_Empty_m575B2DBD151620AFC9AB87559161A6DDB5F121E0(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 956));
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1__ctor_m1B4C2DA7CC2344E44088D7028F0AD27ACFEC39EF_gshared (PriorityQueue_1_t811C24B98ED1CB91821F5F7AA7C2AD65D29CD72F* __this, int32_t ___0_initialSize, LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* ___1_leq, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_t75752B7D1ECCABDBAEEB0ED0065A23DB0ADD16A0_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_initialSize), (&___1_leq));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 957));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 958));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 959));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 960));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 960));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 961));
		LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* L_0 = ___1_leq;
		__this->____leq = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____leq), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 962));
		int32_t L_1 = ___0_initialSize;
		LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* L_2 = ___1_leq;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 963));
		PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* L_3 = (PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		PriorityHeap_1__ctor_m7A2DB586AD7DC9419F05D95183F5F5D4D1347D00(L_3, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 963));
		__this->____heap = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____heap), (void*)L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 964));
		int32_t L_4 = ___0_initialSize;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), (uint32_t)L_4);
		__this->____keys = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 965));
		__this->____size = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 966));
		int32_t L_6 = ___0_initialSize;
		__this->____max = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 967));
		__this->____initialized = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 968));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Swap_m1BB9375A3F0DF46701F354478F449441FA9763E2_gshared (int32_t* ___0_a, int32_t* ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 969));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 970));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 971));
		int32_t* L_0 = ___0_a;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 972));
		int32_t* L_2 = ___0_a;
		int32_t* L_3 = ___1_b;
		int32_t L_4 = il2cpp_codegen_ldind<int32_t, int32_t>(L_3);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_2, (int32_t)L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 973));
		int32_t* L_5 = ___1_b;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 974));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Init_mDBCA569A859FE5ABA0FDED70E6F0D228D4A630A3_gshared (PriorityQueue_1_t811C24B98ED1CB91821F5F7AA7C2AD65D29CD72F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_t75752B7D1ECCABDBAEEB0ED0065A23DB0ADD16A0_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_t44D9E75D09A4B1095DD3D19FD083FCFEAD4EBD47* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 975));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 976));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 977));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 978));
		Stack_1_t44D9E75D09A4B1095DD3D19FD083FCFEAD4EBD47* L_0 = (Stack_1_t44D9E75D09A4B1095DD3D19FD083FCFEAD4EBD47*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
		Stack_1__ctor_m79E4898CA48C9B3FE0524289E869082D7B7E82C5(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 978));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 979));
		V_6 = (uint32_t)((int32_t)2016473283);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 980));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 981));
		int32_t L_1 = __this->____size;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 982));
		int32_t L_2 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_2, 1)));
		__this->____order = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____order), (void*)L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 983));
		V_5 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 984));
		int32_t L_4 = V_1;
		V_3 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 985));
		goto IL_0046;
	}

IL_0032:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 986));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____order;
		int32_t L_6 = V_3;
		int32_t L_7 = V_5;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int32_t)L_7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 987));
		int32_t L_8 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 988));
		int32_t L_9 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0046:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 989));
		int32_t L_10 = V_3;
		int32_t L_11 = V_2;
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_0032;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 990));
		Stack_1_t44D9E75D09A4B1095DD3D19FD083FCFEAD4EBD47* L_12 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 991));
		StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4* L_13 = (StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
		StackItem__ctor_m50064E4D830098ED19EC5973D7C575E6EEBD7994(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 991));
		StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4* L_14 = L_13;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		L_14->___p = L_15;
		StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4* L_16 = L_14;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		L_16->___r = L_17;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 992));
		NullCheck(L_12);
		Stack_1_Push_m6A29C6FAF5CB9AE9690CD3C157C931F8120C23C5(L_12, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 992));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 993));
		goto IL_023c;
	}

IL_0068:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 994));
		Stack_1_t44D9E75D09A4B1095DD3D19FD083FCFEAD4EBD47* L_18 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 995));
		NullCheck(L_18);
		StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4* L_19;
		L_19 = Stack_1_Pop_mD1275302EB6B438DE0F6B91EAF4ADA191EC03254(L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 995));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 996));
		StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4* L_20 = L_19;
		NullCheck(L_20);
		int32_t L_21 = L_20->___p;
		V_1 = L_21;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 997));
		NullCheck(L_20);
		int32_t L_22 = L_20->___r;
		V_2 = L_22;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 998));
		goto IL_01bb;
	}

IL_0080:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 999));
		uint32_t L_23 = V_6;
		V_6 = (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_23, ((int32_t)1539415821))), 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1000));
		int32_t L_24 = V_1;
		uint32_t L_25 = V_6;
		uint64_t L_26 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_25,NULL));
		int32_t L_27 = V_2;
		int32_t L_28 = V_1;
		int64_t L_29 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_27, L_28)), 1)),NULL));
		int32_t L_30 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_26%L_29)),NULL));
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, L_30));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1001));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____order;
		int32_t L_32 = V_3;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_5 = L_34;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1002));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = __this->____order;
		int32_t L_36 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = __this->____order;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		int32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)L_40);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1003));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____order;
		int32_t L_42 = V_1;
		int32_t L_43 = V_5;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (int32_t)L_43);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1004));
		int32_t L_44 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_44, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1005));
		int32_t L_45 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c7:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1006));
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1007));
		LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* L_47 = __this->____leq;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_48 = __this->____keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____order;
		int32_t L_50 = V_3;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_48);
		int32_t L_53 = L_52;
		Il2CppSharedGenericObject* L_54 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_55 = __this->____keys;
		int32_t L_56 = V_5;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Il2CppSharedGenericObject* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1008));
		NullCheck(L_47);
		bool L_59;
		L_59 = LessOrEqual_Invoke_m288DE6AD35E8B0DEEDEBEEC26C97498F1D56FC0F_inline(L_47, L_54, L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1008));
		if (!L_59)
		{
			goto IL_00c7;
		}
	}

IL_00f8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1009));
		int32_t L_60 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_60, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1010));
		LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* L_61 = __this->____leq;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_62 = __this->____keys;
		int32_t L_63 = V_5;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		Il2CppSharedGenericObject* L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_66 = __this->____keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = __this->____order;
		int32_t L_68 = V_4;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		int32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_66);
		int32_t L_71 = L_70;
		Il2CppSharedGenericObject* L_72 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1011));
		NullCheck(L_61);
		bool L_73;
		L_73 = LessOrEqual_Invoke_m288DE6AD35E8B0DEEDEBEEC26C97498F1D56FC0F_inline(L_61, L_65, L_72, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1011));
		if (!L_73)
		{
			goto IL_00f8;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1012));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = __this->____order;
		int32_t L_75 = V_3;
		NullCheck(L_74);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = __this->____order;
		int32_t L_77 = V_4;
		NullCheck(L_76);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1013));
		PriorityQueue_1_Swap_m1BB9375A3F0DF46701F354478F449441FA9763E2(((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75))), ((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_77))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1013));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1014));
		int32_t L_78 = V_3;
		int32_t L_79 = V_4;
		if ((((int32_t)L_78) < ((int32_t)L_79)))
		{
			goto IL_00c7;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1015));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = __this->____order;
		int32_t L_81 = V_3;
		NullCheck(L_80);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = __this->____order;
		int32_t L_83 = V_4;
		NullCheck(L_82);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1016));
		PriorityQueue_1_Swap_m1BB9375A3F0DF46701F354478F449441FA9763E2(((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81))), ((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_83))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1016));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1017));
		int32_t L_84 = V_3;
		int32_t L_85 = V_1;
		int32_t L_86 = V_2;
		int32_t L_87 = V_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_84, L_85))) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_86, L_87)))))
		{
			goto IL_019b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1018));
		Stack_1_t44D9E75D09A4B1095DD3D19FD083FCFEAD4EBD47* L_88 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1019));
		StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4* L_89 = (StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
		StackItem__ctor_m50064E4D830098ED19EC5973D7C575E6EEBD7994(L_89, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1019));
		StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4* L_90 = L_89;
		int32_t L_91 = V_4;
		NullCheck(L_90);
		L_90->___p = ((int32_t)il2cpp_codegen_add(L_91, 1));
		StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4* L_92 = L_90;
		int32_t L_93 = V_2;
		NullCheck(L_92);
		L_92->___r = L_93;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1020));
		NullCheck(L_88);
		Stack_1_Push_m6A29C6FAF5CB9AE9690CD3C157C931F8120C23C5(L_88, L_92, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1020));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1021));
		int32_t L_94 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_94, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1022));
		goto IL_01bb;
	}

IL_019b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1023));
		Stack_1_t44D9E75D09A4B1095DD3D19FD083FCFEAD4EBD47* L_95 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1024));
		StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4* L_96 = (StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
		StackItem__ctor_m50064E4D830098ED19EC5973D7C575E6EEBD7994(L_96, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1024));
		StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4* L_97 = L_96;
		int32_t L_98 = V_1;
		NullCheck(L_97);
		L_97->___p = L_98;
		StackItem_t125FD261A6084CAB0F746CBCE277948D6A57C9F4* L_99 = L_97;
		int32_t L_100 = V_3;
		NullCheck(L_99);
		L_99->___r = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1025));
		NullCheck(L_95);
		Stack_1_Push_m6A29C6FAF5CB9AE9690CD3C157C931F8120C23C5(L_95, L_99, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1025));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1026));
		int32_t L_101 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_01bb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1027));
		int32_t L_102 = V_2;
		int32_t L_103 = V_1;
		if ((((int32_t)L_102) > ((int32_t)((int32_t)il2cpp_codegen_add(L_103, ((int32_t)10))))))
		{
			goto IL_0080;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1028));
		int32_t L_104 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1029));
		goto IL_0238;
	}

IL_01cb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1030));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = __this->____order;
		int32_t L_106 = V_3;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		int32_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_5 = L_108;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1031));
		int32_t L_109 = V_3;
		V_4 = L_109;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1032));
		goto IL_01f4;
	}

IL_01da:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1033));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____order;
		int32_t L_111 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = __this->____order;
		int32_t L_113 = V_4;
		NullCheck(L_112);
		int32_t L_114 = ((int32_t)il2cpp_codegen_subtract(L_113, 1));
		int32_t L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(L_111), (int32_t)L_115);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1034));
		int32_t L_116 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_116, 1));
	}

IL_01f4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1035));
		int32_t L_117 = V_4;
		int32_t L_118 = V_1;
		if ((((int32_t)L_117) <= ((int32_t)L_118)))
		{
			goto IL_0229;
		}
	}
	{
		LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* L_119 = __this->____leq;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_120 = __this->____keys;
		int32_t L_121 = V_5;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		Il2CppSharedGenericObject* L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_124 = __this->____keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_125 = __this->____order;
		int32_t L_126 = V_4;
		NullCheck(L_125);
		int32_t L_127 = ((int32_t)il2cpp_codegen_subtract(L_126, 1));
		int32_t L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_124);
		int32_t L_129 = L_128;
		Il2CppSharedGenericObject* L_130 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1036));
		NullCheck(L_119);
		bool L_131;
		L_131 = LessOrEqual_Invoke_m288DE6AD35E8B0DEEDEBEEC26C97498F1D56FC0F_inline(L_119, L_123, L_130, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1036));
		if (!L_131)
		{
			goto IL_01da;
		}
	}

IL_0229:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1037));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = __this->____order;
		int32_t L_133 = V_4;
		int32_t L_134 = V_5;
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(L_133), (int32_t)L_134);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1038));
		int32_t L_135 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_135, 1));
	}

IL_0238:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1039));
		int32_t L_136 = V_3;
		int32_t L_137 = V_2;
		if ((((int32_t)L_136) <= ((int32_t)L_137)))
		{
			goto IL_01cb;
		}
	}

IL_023c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1040));
		Stack_1_t44D9E75D09A4B1095DD3D19FD083FCFEAD4EBD47* L_138 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1041));
		NullCheck(L_138);
		int32_t L_139;
		L_139 = Stack_1_get_Count_m4912DF21AC15CC140CF1BE7041A987E2E4B2309A_inline(L_138, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1041));
		if ((((int32_t)L_139) > ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1042));
		int32_t L_140 = __this->____size;
		__this->____max = L_140;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1043));
		__this->____initialized = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1044));
		PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* L_141 = __this->____heap;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1045));
		NullCheck(L_141);
		PriorityHeap_1_Init_m04285EAC5497782F8CEDE1EF4897484022DB3824(L_141, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1045));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1046));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C PriorityQueue_1_Insert_m2CB8460FDE3D7AF841CA254ABED21A634B1C4B06_gshared (PriorityQueue_1_t811C24B98ED1CB91821F5F7AA7C2AD65D29CD72F* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_t75752B7D1ECCABDBAEEB0ED0065A23DB0ADD16A0_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1047));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1048));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1049));
		bool L_0 = __this->____initialized;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1050));
		PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* L_1 = __this->____heap;
		Il2CppSharedGenericObject* L_2 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1051));
		NullCheck(L_1);
		PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C L_3;
		L_3 = PriorityHeap_1_Insert_m2D385CC22053D5616238D289FAC8BF808860606B(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1051));
		return L_3;
	}

IL_0015:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1052));
		int32_t L_4 = __this->____size;
		V_0 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1053));
		int32_t L_5 = __this->____size;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_1;
		__this->____size = L_6;
		int32_t L_7 = V_1;
		int32_t L_8 = __this->____max;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0054;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1054));
		int32_t L_9 = __this->____max;
		__this->____max = ((int32_t)(L_9<<1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1055));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_10 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979**)(&__this->____keys);
		int32_t L_11 = __this->____max;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1056));
		Array_Resize_TisIl2CppSharedGenericObject_m2368EE7266665D349010E73D8C23E09C635C3038(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1056));
	}

IL_0054:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1057));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = __this->____keys;
		int32_t L_13 = V_0;
		Il2CppSharedGenericObject* L_14 = ___0_value;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Il2CppSharedGenericObject*)L_14);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1058));
		il2cpp_codegen_initobj((&V_2), sizeof(PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C));
		int32_t L_15 = V_0;
		(&V_2)->____handle = ((-((int32_t)il2cpp_codegen_add(L_15, 1))));
		PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C L_16 = V_2;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PriorityQueue_1_ExtractMin_m07156F2DAE5EA559CABED48094A12DA6C48F262E_gshared (PriorityQueue_1_t811C24B98ED1CB91821F5F7AA7C2AD65D29CD72F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_t75752B7D1ECCABDBAEEB0ED0065A23DB0ADD16A0_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppSharedGenericObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1059));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1060));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1061));
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1062));
		PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* L_1 = __this->____heap;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1063));
		NullCheck(L_1);
		Il2CppSharedGenericObject* L_2;
		L_2 = PriorityHeap_1_ExtractMin_m71B4613556B6D23D2EBE957EF23A1186333D4016(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1063));
		return L_2;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1064));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____order;
		int32_t L_5 = __this->____size;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		int32_t L_8 = L_7;
		Il2CppSharedGenericObject* L_9 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1065));
		PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* L_10 = __this->____heap;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1066));
		NullCheck(L_10);
		bool L_11;
		L_11 = PriorityHeap_1_get_Empty_m575B2DBD151620AFC9AB87559161A6DDB5F121E0(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1066));
		if (L_11)
		{
			goto IL_0063;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1067));
		PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* L_12 = __this->____heap;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1068));
		NullCheck(L_12);
		Il2CppSharedGenericObject* L_13;
		L_13 = PriorityHeap_1_Minimum_m29EFFDD2F5E81449FC063AA942DBF1484F3DF2B8(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1068));
		V_1 = L_13;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1069));
		LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* L_14 = __this->____leq;
		Il2CppSharedGenericObject* L_15 = V_1;
		Il2CppSharedGenericObject* L_16 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1070));
		NullCheck(L_14);
		bool L_17;
		L_17 = LessOrEqual_Invoke_m288DE6AD35E8B0DEEDEBEEC26C97498F1D56FC0F_inline(L_14, L_15, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1070));
		if (!L_17)
		{
			goto IL_0063;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1071));
		PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* L_18 = __this->____heap;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1072));
		NullCheck(L_18);
		Il2CppSharedGenericObject* L_19;
		L_19 = PriorityHeap_1_ExtractMin_m71B4613556B6D23D2EBE957EF23A1186333D4016(L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1072));
		return L_19;
	}

IL_0063:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1073));
		int32_t L_20 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1074));
		int32_t L_21 = __this->____size;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_009b;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_22 = __this->____keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->____order;
		int32_t L_24 = __this->____size;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_22);
		int32_t L_27 = L_26;
		Il2CppSharedGenericObject* L_28 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if (!L_28)
		{
			goto IL_0063;
		}
	}

IL_009b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1075));
		Il2CppSharedGenericObject* L_29 = V_0;
		return L_29;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PriorityQueue_1_Minimum_m19F12F0FA52367C92FEFB671CDBBEAD6EEB18F1B_gshared (PriorityQueue_1_t811C24B98ED1CB91821F5F7AA7C2AD65D29CD72F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_t75752B7D1ECCABDBAEEB0ED0065A23DB0ADD16A0_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppSharedGenericObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1076));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1077));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1078));
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1079));
		PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* L_1 = __this->____heap;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1080));
		NullCheck(L_1);
		Il2CppSharedGenericObject* L_2;
		L_2 = PriorityHeap_1_Minimum_m29EFFDD2F5E81449FC063AA942DBF1484F3DF2B8(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1080));
		return L_2;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1081));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____order;
		int32_t L_5 = __this->____size;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		int32_t L_8 = L_7;
		Il2CppSharedGenericObject* L_9 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1082));
		PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* L_10 = __this->____heap;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1083));
		NullCheck(L_10);
		bool L_11;
		L_11 = PriorityHeap_1_get_Empty_m575B2DBD151620AFC9AB87559161A6DDB5F121E0(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1083));
		if (L_11)
		{
			goto IL_0059;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1084));
		PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* L_12 = __this->____heap;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1085));
		NullCheck(L_12);
		Il2CppSharedGenericObject* L_13;
		L_13 = PriorityHeap_1_Minimum_m29EFFDD2F5E81449FC063AA942DBF1484F3DF2B8(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1085));
		V_1 = L_13;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1086));
		LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* L_14 = __this->____leq;
		Il2CppSharedGenericObject* L_15 = V_1;
		Il2CppSharedGenericObject* L_16 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1087));
		NullCheck(L_14);
		bool L_17;
		L_17 = LessOrEqual_Invoke_m288DE6AD35E8B0DEEDEBEEC26C97498F1D56FC0F_inline(L_14, L_15, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1087));
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1088));
		Il2CppSharedGenericObject* L_18 = V_1;
		return L_18;
	}

IL_0059:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1089));
		Il2CppSharedGenericObject* L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Remove_mA66B6777CBEE9BE7F1E537ACD1D13B2BC0C1B08D_gshared (PriorityQueue_1_t811C24B98ED1CB91821F5F7AA7C2AD65D29CD72F* __this, PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_t75752B7D1ECCABDBAEEB0ED0065A23DB0ADD16A0_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_handle));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1090));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1091));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1092));
		PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C L_0 = ___0_handle;
		int32_t L_1 = L_0.____handle;
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1093));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1094));
		PriorityHeap_1_tBDE36E5D44D2DFAE830DE528AF224A5CBCFA4396* L_3 = __this->____heap;
		PQHandle_tD7A64623ABBD69EB87BB26EC3DC81D35D0E6A37C L_4 = ___0_handle;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1095));
		NullCheck(L_3);
		PriorityHeap_1_Remove_m26008E2F92FB72D4D96FF16E244784C6FF95408F(L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1095));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1096));
		return;
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1097));
		int32_t L_5 = V_0;
		V_0 = ((-((int32_t)il2cpp_codegen_add(L_5, 1))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1098));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = __this->____keys;
		int32_t L_7 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_8 = V_1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Il2CppSharedGenericObject*)L_8);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1099));
		goto IL_0042;
	}

IL_0034:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1100));
		int32_t L_9 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_0042:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1101));
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = __this->____keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____order;
		int32_t L_13 = __this->____size;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		int32_t L_16 = L_15;
		Il2CppSharedGenericObject* L_17 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if (!L_17)
		{
			goto IL_0034;
		}
	}

IL_006c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_VectorGraphicsModule + 1102));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProcessAnimationJobStruct_1_GetJobReflectionData_m8F636665FEDE1B3771316C87350E0EF1302227AB_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2064));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2065));
	ExecuteJobFunction_t6748D7E107B73BB4A53D07F6FAE83716E0666388* G_B3_0 = NULL;
	Type_t* G_B3_1 = NULL;
	ExecuteJobFunction_t6748D7E107B73BB4A53D07F6FAE83716E0666388* G_B2_0 = NULL;
	Type_t* G_B2_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2066));
		intptr_t L_0 = ((ProcessAnimationJobStruct_1_t53B6F4AA9902BA10D2DE9D1C81FC101B062906DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___jobReflectionData;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2067));
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2067));
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2068));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2069));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2069));
		ExecuteJobFunction_t6748D7E107B73BB4A53D07F6FAE83716E0666388* L_4 = ((U3CU3EO_tE95C52E7CAE27912D35531EB2E48A97BC3EBAA5F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)))->___U3C0U3E__Execute;
		ExecuteJobFunction_t6748D7E107B73BB4A53D07F6FAE83716E0666388* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = L_3;
			goto IL_0036;
		}
		G_B2_0 = L_5;
		G_B2_1 = L_3;
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2070));
		ExecuteJobFunction_t6748D7E107B73BB4A53D07F6FAE83716E0666388* L_6 = (ExecuteJobFunction_t6748D7E107B73BB4A53D07F6FAE83716E0666388*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		ExecuteJobFunction__ctor_mA48BFAE3B94766CD82F48E799D55916A50E47A67(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2070));
		ExecuteJobFunction_t6748D7E107B73BB4A53D07F6FAE83716E0666388* L_7 = L_6;
		((U3CU3EO_tE95C52E7CAE27912D35531EB2E48A97BC3EBAA5F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)))->___U3C0U3E__Execute = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tE95C52E7CAE27912D35531EB2E48A97BC3EBAA5F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)))->___U3C0U3E__Execute), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_0036:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2071));
		intptr_t L_8;
		L_8 = JobsUtility_CreateJobReflectionData_m17265DED7C2DBB0B2130896E2B8AC4CF5BD7FCE7(G_B3_1, (RuntimeObject*)G_B3_0, NULL, NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2071));
		((ProcessAnimationJobStruct_1_t53B6F4AA9902BA10D2DE9D1C81FC101B062906DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___jobReflectionData = L_8;
	}

IL_0042:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2072));
		intptr_t L_9 = ((ProcessAnimationJobStruct_1_t53B6F4AA9902BA10D2DE9D1C81FC101B062906DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___jobReflectionData;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessAnimationJobStruct_1_Execute_m4E92A392819AD17626BF01D56CCB0B8CABDEBB7C_gshared (Il2CppFullySharedGenericStruct* ___0_data, intptr_t ___1_animationStreamPtr, intptr_t ___2_methodIndex, JobRanges_t5A1CDFF3E0DB1197050E1E28617B517C15AF6DC3* ___3_ranges, int32_t ___4_jobIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JobMethodIndex_t61229F1B481AD22AB00E479AA42F2C49273B5A7C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_CopyPtrToStructure_TisAnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A_m4586A434BA546E82429C2D0E361911FF6D9AFB0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	void* L_13 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data), (&___1_animationStreamPtr), (&___2_methodIndex), (&___3_ranges), (&___4_jobIndex));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2073));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2074));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2075));
		intptr_t L_0 = ___1_animationStreamPtr;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2076));
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2076));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2077));
		UnsafeUtility_CopyPtrToStructure_TisAnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A_m4586A434BA546E82429C2D0E361911FF6D9AFB0A_inline(L_1, (&V_0), UnsafeUtility_CopyPtrToStructure_TisAnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A_m4586A434BA546E82429C2D0E361911FF6D9AFB0A_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2077));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2078));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2079));
		int32_t L_2;
		L_2 = IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292((&___2_methodIndex), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2079));
		V_1 = (int32_t)L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2080));
		int32_t L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_003a;
	}

IL_001e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2081));
		Il2CppFullySharedGenericStruct* L_5 = ___0_data;
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2082));
		Il2CppConstrainedCallData L_8;
		Il2CppMethodPointer L_9 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10), (void*)L_5, &L_8, L_7);
		typedef void ( *func_L_10)(void*,AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A,const RuntimeMethod*);
		((func_L_10)L_9)(L_8.thisPtr, L_6,L_8.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2082));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2083));
		return;
	}

IL_002c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2084));
		Il2CppFullySharedGenericStruct* L_11 = ___0_data;
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A L_12 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2085));
		Il2CppConstrainedCallData L_14;
		Il2CppMethodPointer L_15 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11), (void*)L_11, &L_14, L_13);
		typedef void ( *func_L_16)(void*,AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A,const RuntimeMethod*);
		((func_L_16)L_15)(L_14.thisPtr, L_12,L_14.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2085));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2086));
		return;
	}

IL_003a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2087));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2088));
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_17 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5E4655D9A51F8B1B8BF7844B9935B8A398D70E6)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AnimationModule + 2088));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__cctor_m7132EB86C61D9CFCD8D60094ABF4791FCB0CD0B5_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2237));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2238));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2239));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2240));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2240));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2241));
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2241));
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2242));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2243));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2243));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2244));
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFD0F59F9F38A92660652CA5BE172EFCA8501E47)), (RuntimeObject*)L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2244));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2245));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2245));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2246));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Unity_Properties_Internal_IPropertyBagRegister_Register_m54B6F69083B35A3F7C301A639D48050B235A6D7F_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBag_1_tA7397A5188F14D8ED179B666223A1046274815E1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2247));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2248));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2249));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2250));
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		PropertyBagStore_AddPropertyBag_TisIl2CppFullySharedGenericAny_mB0AA53F19CB33A3C2A29AC822452167CB955F19D((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2250));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2251));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Accept_mB0872E61EC1AD02FC6F72F936F04557118FF271A_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, RuntimeObject* ___0_visitor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBag_1_tA7397A5188F14D8ED179B666223A1046274815E1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_visitor));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2252));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2253));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2254));
		RuntimeObject* L_0 = ___0_visitor;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2255));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2256));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC23725EE1ACD9996F8909AD0C76D39D2B4CB3ACA)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2256));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2257));
		RuntimeObject* L_2 = ___0_visitor;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2258));
		NullCheck(L_2);
		GenericInterfaceActionInvoker0::Invoke(il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2258));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2259));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Unity_Properties_IPropertyBag_Accept_mF954ED782F35F4B80660336C424100D6B458F975_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, RuntimeObject* ___0_visitor, RuntimeObject** ___1_container, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBag_1_tA7397A5188F14D8ED179B666223A1046274815E1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	const Il2CppFullySharedGenericAny L_18 = L_7;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	memset(V_0, 0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	RuntimeObject* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_visitor), (&___1_container));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2260));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2261));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2262));
		RuntimeObject** L_0 = ___1_container;
		RuntimeObject* L_1 = il2cpp_codegen_ldind<RuntimeObject*, RuntimeObject*>(L_0);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2263));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2264));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0074C49CE7D7ED9232C28459AA9DB19B1D06C223)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2264));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2265));
		RuntimeObject** L_3 = ___1_container;
		RuntimeObject* L_4 = il2cpp_codegen_ldind<RuntimeObject*, RuntimeObject*>(L_3);
		V_1 = L_4;
		RuntimeObject* L_5 = V_1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_6 = V_1;
		void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7);
		il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)), SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		goto IL_0044;
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2266));
		RuntimeObject** L_9 = ___1_container;
		RuntimeObject* L_10 = il2cpp_codegen_ldind<RuntimeObject*, RuntimeObject*>(L_9);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2267));
		NullCheck(L_10);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type(L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2267));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2268));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2268));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2269));
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral146E57E580085C49FA4D7B226DB5FF8C1F7C5518)), (RuntimeObject*)L_11, (RuntimeObject*)L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2269));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2270));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2270));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0044:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2271));
		RuntimeObject* L_16 = ___0_visitor;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2272));
		PropertyBag_AcceptWithSpecializedVisitor_TisIl2CppFullySharedGenericAny_mDB91562B01F9A25F2996347A1981D24A0DFBBFF1((RuntimeObject*)__this, L_16, (Il2CppFullySharedGenericAny*)V_0, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2272));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2273));
		RuntimeObject** L_17 = ___1_container;
		il2cpp_codegen_memcpy(L_18, V_0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_18);
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_17, (RuntimeObject*)L_19);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)L_19);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2274));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Unity_Properties_IPropertyBagU3CTContainerU3E_Accept_m0947C6DD88E15158A0D96620D397C94711A31657_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBag_1_tA7397A5188F14D8ED179B666223A1046274815E1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_visitor), (&___1_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2275));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2276));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2277));
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppFullySharedGenericAny* L_1 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2278));
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_0, (RuntimeObject*)__this, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2278));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2279));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Unity_Properties_IPropertyBagU3CTContainerU3E_GetProperties_m1F6375B2ED52299AEBC0E2B190FD958394F8BB46_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBag_1_tA7397A5188F14D8ED179B666223A1046274815E1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_PropertyCollection_1_t023CA0F2B326ED320DF74F5E011F7F8008A5DC80 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D L_0 = alloca(SizeOf_PropertyCollection_1_t023CA0F2B326ED320DF74F5E011F7F8008A5DC80);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2280));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2281));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2282));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2283));
		VirtualActionInvoker1Invoker< PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* >::Invoke(14, __this, (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2283));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_PropertyCollection_1_t023CA0F2B326ED320DF74F5E011F7F8008A5DC80);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Unity_Properties_IPropertyBagU3CTContainerU3E_GetProperties_mF6BCB70A56083644373C4BEC94C1F6745E0FBE99_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, Il2CppFullySharedGenericAny* ___0_container, PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBag_1_tA7397A5188F14D8ED179B666223A1046274815E1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_PropertyCollection_1_t023CA0F2B326ED320DF74F5E011F7F8008A5DC80 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D L_1 = alloca(SizeOf_PropertyCollection_1_t023CA0F2B326ED320DF74F5E011F7F8008A5DC80);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2284));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2285));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2286));
		Il2CppFullySharedGenericAny* L_0 = ___0_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2287));
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny*, PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* >::Invoke(15, __this, L_0, (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2287));
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_PropertyCollection_1_t023CA0F2B326ED320DF74F5E011F7F8008A5DC80);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyBag_1_Unity_Properties_IConstructor_get_InstantiationKind_m2C299F894780F5CCB18B26BEF99C95EAC40D2C95_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBag_1_tA7397A5188F14D8ED179B666223A1046274815E1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2288));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2289));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2290));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2291));
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(16, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2291));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Unity_Properties_IConstructorU3CTContainerU3E_Instantiate_m8AB68F3EC8FB382C1A64FD54DF8E23CC2543E5EA_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBag_1_tA7397A5188F14D8ED179B666223A1046274815E1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2292));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2293));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2294));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2295));
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(17, __this, (Il2CppFullySharedGenericAny*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2295));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyBag_1_get_InstantiationKind_m12E943B094001EC2736190825F084562FBE84235_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBag_1_tA7397A5188F14D8ED179B666223A1046274815E1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2296));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2297));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2298));
		int32_t L_0 = __this->___U3CInstantiationKindU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Instantiate_mD74F4CF48BC2E122C974C038AB838190C3988783_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBag_1_tA7397A5188F14D8ED179B666223A1046274815E1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	memset(V_0, 0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2299));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2300));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2301));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_CreateInstance_m4177435516B11C9DDE96C336467856F03BECEFDA_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBag_1_tA7397A5188F14D8ED179B666223A1046274815E1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2302));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2303));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2304));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2305));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		TypeUtility_Instantiate_TisIl2CppFullySharedGenericAny_m16821F3B413A510B42D80A6D20A540E95AB55F6A((Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2305));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_1_TryCreateInstance_m3E2A1E94AA3CCC3491B8D347251B9D5161DF8851_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, Il2CppFullySharedGenericAny* ___0_instance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBag_1_tA7397A5188F14D8ED179B666223A1046274815E1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_instance));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2306));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2307));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2308));
		Il2CppFullySharedGenericAny* L_0 = ___0_instance;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2309));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = TypeUtility_TryInstantiate_TisIl2CppFullySharedGenericAny_m649F65DE0BCA16E2A127A53A46C010AD35120D3E(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2309));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__ctor_mF9D3CBA5488FDEB46B255A12E5CF4DDF4BD76175_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyChangedEvent__ctor_mE96956B37FF2BBE1377185FCBDF06BE5B4F5B1B8_gshared (PropertyChangedEvent_t6239E36B1DE89FA625F64D364C36ACAF8424D998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEvent_tDB66BBE0429BD31AFA15C0B0A4D67218E4D74D44_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38191));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38192));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38193));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38194));
		Dictionary_2_t6D165219FBC5112F01F1A41A9CFA56F2E1A19D67* L_0 = (Dictionary_2_t6D165219FBC5112F01F1A41A9CFA56F2E1A19D67*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Dictionary_2__ctor_m86F6F4C579C08BF4813645D23D2DAC921319D763(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38194));
		__this->___m_Subscriptions = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Subscriptions), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38195));
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyChangedEvent__ctor_mE96956B37FF2BBE1377185FCBDF06BE5B4F5B1B8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PropertyChangedEvent_t6239E36B1DE89FA625F64D364C36ACAF8424D998* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PropertyChangedEvent_t6239E36B1DE89FA625F64D364C36ACAF8424D998>(__this);
	PropertyChangedEvent__ctor_mE96956B37FF2BBE1377185FCBDF06BE5B4F5B1B8(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyChangedEvent_Notify_m5CE687C189758E6AAF3B1E938B7B04AE68145D7D_gshared (PropertyChangedEvent_t6239E36B1DE89FA625F64D364C36ACAF8424D998* __this, Il2CppFullySharedGenericAny ___0_instance, String_t* ___1_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEvent_tDB66BBE0429BD31AFA15C0B0A4D67218E4D74D44_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10)));
	const uint32_t SizeOf_TBase_t6D894BE74050620E938ADD0865CA8E27E494EF0B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TBase_t6D894BE74050620E938ADD0865CA8E27E494EF0B);
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10)) ? ___0_instance : &___0_instance), (&___1_propertyName));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38227));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38228));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38229));
		Dictionary_2_t6D165219FBC5112F01F1A41A9CFA56F2E1A19D67* L_0 = __this->___m_Subscriptions;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38230));
		Il2CppConstrainedCallData L_2;
		Il2CppMethodPointer L_3 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10)) ? ___0_instance : &___0_instance), &L_2, L_1);
		typedef Type_t* ( *func_L_4)(void*,const RuntimeMethod*);
		Type_t* L_5 = ((func_L_4)L_3)(L_2.thisPtr,L_2.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38230));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38231));
		NullCheck(L_0);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_mD426C2DFD26F2E52CBF02C044C8AA03E6DF844C9(L_0, L_5, (&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38231));
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38232));
		RuntimeObject* L_7 = V_0;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10)) ? ___0_instance : &___0_instance), SizeOf_TBase_t6D894BE74050620E938ADD0865CA8E27E494EF0B);
		String_t* L_9 = ___1_propertyName;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38233));
		NullCheck(L_7);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, String_t* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10)) ? L_8: *(void**)L_8), L_9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38233));
	}

IL_0024:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 38234));
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyChangedEvent_Notify_m5CE687C189758E6AAF3B1E938B7B04AE68145D7D_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny ___0_instance, String_t* ___1_propertyName, const RuntimeMethod* method)
{
	PropertyChangedEvent_t6239E36B1DE89FA625F64D364C36ACAF8424D998* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PropertyChangedEvent_t6239E36B1DE89FA625F64D364C36ACAF8424D998>(__this);
	PropertyChangedEvent_Notify_m5CE687C189758E6AAF3B1E938B7B04AE68145D7D(_thisAdjusted, ___0_instance, ___1_propertyName, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LessOrEqual_Invoke_m288DE6AD35E8B0DEEDEBEEC26C97498F1D56FC0F_gshared_inline (LessOrEqual_tBD3BB9465F4CC59DB2FFF896B865893E8E4E208C* __this, Il2CppSharedGenericObject* ___0_lhs, Il2CppSharedGenericObject* ___1_rhs, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_lhs, ___1_rhs, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mBE6568C7ECF69CD1E86FDFF4E25D6CB529F76BF3_gshared_inline (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_output));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3722));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3723));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3724));
		void* L_0 = ___0_ptr;
		Il2CppFullySharedGenericStruct* L_1 = ___1_output;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3725));
		UnsafeUtility_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mD132267FDFD79997EE2A47470E89CE83AC7CA91E(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3725));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3726));
		return;
	}
}
