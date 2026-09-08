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
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1Invoker;
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[1] = { p1 };
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
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct BaseRenderFunc_2_t6B00DB2FCD05EF9F3F4030193ECC944BBD329ACA;
struct BaseRenderFunc_2_tC11CA5334BC198AD71E615336FD765AFE7B1E62E;
struct BaseRenderGraphPass_2_t0F0305B903C11DF38DEC749353A76FDBA5A26DEB;
struct BaseRenderGraphPass_2_t407183B2A4BB1007A162B44C240D1E1C26C7FB21;
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49;
struct ComputeRenderGraphPass_1_tE2D8EC8270679EC54415778E7514EE262C3DE338;
struct Dictionary_2_t7096FDAEA6CE93401BE4CE39471636261DB28BF5;
struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
struct DynamicArray_1_t843ECB88E0EEDBBB658FF535E6B19186D9F69540;
struct HashSet_1_t0F16759FF079A28DCA2DCF39BA6A61B5D502A475;
struct IComparer_1_tFAD3AE9FE3CE1FB3CBB781C55DC57C986D71521E;
struct IEqualityComparer_1_t87776E75BE5CAC515E2BEA35263A59279E57E972;
struct IEqualityComparer_1_t6AFBDAD61899EC8E72EE5704032C72F5BA86C4AA;
struct IEqualityComparer_1_t735A9E7EADBF1195179CC6C43A408BBF6F38A7EF;
struct KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC;
struct List_1_t93556F5BC290149F13350CCB1F0DBFFECE376CA3;
struct List_1_t38894513E46A6B97A5AAD6E40AC40F8D0E361549;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tAFCDB9CCBAF11013AA7B0EC7BB51B10127AB467C;
struct List_1_t67B4F73A05A1220FF45824DBE29F391490B25A0C;
struct List_1_t4ACF9489301B655268E8A9C77CAED339DA26EE65;
struct List_1_t41896DF347A129D13205BBFADE03DFB21E05E459;
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
struct List_1_t7253D93BC3B5BDCC4F6B9FD6460CF1AEC4C0EAD5;
struct List_1_t70EE7982F45810D4B024CF720D910E67974A3094;
struct List_1_tB0B308D151FBF226396B20253C1FF11CF7D10D3A;
struct Tables_t232F49F68D3E6642F250795C6A94C4A1453C466C;
struct Tables_t60489ADA5CDDDF0F891AF81ECF10DDD2EB6A4315;
struct Tables_t91446EFFF179D2449B741A2871A07303AF867B03;
struct KeyValuePair_2U5BU5D_t996EEA720019339FA75CC1E9044156E6FA8002E3;
struct KeyValuePair_2U5BU5D_tC07BA613A58A51D934ADC90E8DE39001899194B1;
struct KeyValuePair_2U5BU5D_tA81EC07CE65B18CEB6CD4B5FFF721CA560D10F20;
struct KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC;
struct List_1U5BU5D_tBC36CD3A22E16740615AC57FE9C6B659DAC8ECD8;
struct AttachmentDescriptorU5BU5D_tC70107EBD955FE94BA31C7FDC146069EF9C547C1;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9;
struct NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2;
struct NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE;
struct SubPassDescriptorU5BU5D_tF2049226934378D3C1994935C781C945FC75C708;
struct TextureAccessU5BU5D_t02D7243719E98C8FA4B2925C4AACC249913D7293;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
struct RandomWriteResourceInfoU5BU5D_t79D1DFED62BB70EF55CFEEDFC5B0413F84F882F3;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct Assembly_t;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Binding_tA1358A155852138C1926082E4F3245B6F631CBED;
struct BlobBuilder_tBBD57F4A395313817B6AD5C883DA9BD7A3E9BC84;
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
struct CompilerContextData_t0E7B5B9E1A939E4546A3AE9D8357556FC956A77D;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct ComputeCommandBuffer_tA6FA5F68FE745317C94802C6A828FC21AC0ADF61;
struct ComputeGraphContext_t4C18687C77814418D826A1B68C0D02781A9DFC7F;
struct DecalCachedChunk_tDEF493C8A3A1F442BDEC1794BDDA0996B32DCACE;
struct DecalCulledChunk_tFD4472F0ADDD173C7B13E8B0529983E745F12ED3;
struct DecalDrawCallChunk_tBD0491A1B0B7D19DF01A5C9EDE0A40CBEDBF7A3A;
struct DecalEntityChunk_t2CDCBFA35711DA074631D26572EF9755A3AD740C;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Entry_t475ED76E31923970E7F7A6522E570E7577C487B9;
struct EventConsumer_t6D08A21A3FF574758C289118775786B6D35754F3;
struct FieldInfo_t;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct GradientFill_t3EF843B0259724DC8B31C0785448B27EC96CEDDF;
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IFill_t4B489CA494A2042D3FCC143E718D89AEFE1D35AE;
struct Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998;
struct InternalRenderGraphContext_t7197268EBA8C241EB895B070A5E0C71B111D7503;
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9;
struct ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct RenderGraphDefaultResources_tCE331152C84ED1A36CF186CA0092AE10E599E25D;
struct RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437;
struct RenderGraphPass_tEFB5BD685D417024760D82991EEEA4F4D0454A93;
struct SceneNode_tCF192B58EAA46C463559AA0ABFE0722C5268E1D7;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
struct SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37;
struct String_t;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667;
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Type_t;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct UxmlSerializedData_t5BDDB665835158F6BC2975E086891B337C3BB706;
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
struct VisualEffectAsset_t0CD57FD9980CD68033BD96DA356697F92A69E688;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377;
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1;
struct VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1;
struct XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9;
struct XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D;
struct BindingData_t63DF4F2F4FA1BE1BD6130C2DDAE1888DCD76381A;
struct TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2;
struct BufferResourceData_t0B823212ADCC9AA80412877B802DD43236781D57;
struct TextureResourceData_t0714EB0BFE2BFB2FC4E0CCFFBFE5CAA6C4B53BE3;
struct NRPInfo_tFAE346DBF564B1FDA1EBC1D2F0C3EDC93143D04F;
struct ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_RenderPipelines_Core_Runtime[];
IL2CPP_EXTERN_C RuntimeClass* ComputeGraphContext_t4C18687C77814418D826A1B68C0D02781A9DFC7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralFCEB30C9E43E9D0062BBC9BA13C1FAFD780871FC;
IL2CPP_EXTERN_C const RuntimeType* BaseRenderGraphPass_2_t001F73D210FFBFF4E1F02D807948F7D189B688BA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ComputeRenderGraphPass_1_tAEE1C7D1A235A6E5CED6E0D57146DA61F70D4707_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var;
struct Assembly_t_marshaled_com;
struct AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshaled_com;
struct LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D;
struct SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9;
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ComponentSingleton_1_t7C80444CBDFE2ED98D05C22212A90AC3795B1535  : public RuntimeObject
{
};
struct ConcurrentDictionary_2_t6553E8F57A500F679C67863C02D94ECDFA489C33  : public RuntimeObject
{
	Tables_t232F49F68D3E6642F250795C6A94C4A1453C466C* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t996EEA720019339FA75CC1E9044156E6FA8002E3* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t72691F75B6C45685845A39BBFE01D1B70992B54E  : public RuntimeObject
{
	Tables_t60489ADA5CDDDF0F891AF81ECF10DDD2EB6A4315* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_tC07BA613A58A51D934ADC90E8DE39001899194B1* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t0A6BCCBCD2F7139BB7805897FF13E3E6AF27F6C3  : public RuntimeObject
{
	Tables_t91446EFFF179D2449B741A2871A07303AF867B03* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_tA81EC07CE65B18CEB6CD4B5FFF721CA560D10F20* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct Assembly_t  : public RuntimeObject
{
};
struct Assembly_t_marshaled_pinvoke
{
};
struct Assembly_t_marshaled_com
{
};
struct ComputeGraphContext_t4C18687C77814418D826A1B68C0D02781A9DFC7F  : public RuntimeObject
{
	InternalRenderGraphContext_t7197268EBA8C241EB895B070A5E0C71B111D7503* ___wrappedContext;
	ComputeCommandBuffer_tA6FA5F68FE745317C94802C6A828FC21AC0ADF61* ___cmd;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437  : public RuntimeObject
{
	Dictionary_2_t7096FDAEA6CE93401BE4CE39471636261DB28BF5* ___m_ArrayPool;
	List_1_t93556F5BC290149F13350CCB1F0DBFFECE376CA3* ___m_AllocatedArrays;
	List_1_tAFCDB9CCBAF11013AA7B0EC7BB51B10127AB467C* ___m_AllocatedMaterialPropertyBlocks;
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
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 
{
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 
{
	NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 
{
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE 
{
	uint32_t ___start;
	uint32_t ___size;
	RuntimeObject* ___handle;
	bool ___shortLived;
};
struct Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_pinvoke
{
	uint32_t ___start;
	uint32_t ___size;
	Il2CppIUnknown* ___handle;
	int32_t ___shortLived;
};
struct Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_com
{
	uint32_t ___start;
	uint32_t ___size;
	Il2CppIUnknown* ___handle;
	int32_t ___shortLived;
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
struct DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 
{
	uint8_t ___m_WriteEnabled;
	int8_t ___m_CompareFunction;
};
struct EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0 
{
	uint32_t ____vToken;
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
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	int32_t ___m_Code;
};
struct GuidHandle_tBD83795685737579B04079056AFFE6A40F967EE4 
{
	int32_t ____index;
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
struct LabelHandle_t3049CD9713642B48A3AFB4BCFF191BE02E751BA7 
{
	int32_t ___U3CIdU3Ek__BackingField;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct PassIdentifier_tB001434DD777C99EE72429B150D574210E94CE70 
{
	uint32_t ___m_SubShaderIndex;
	uint32_t ___m_PassIndex;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 
{
	uint8_t ___m_WriteMask;
	uint8_t ___m_SourceColorBlendMode;
	uint8_t ___m_DestinationColorBlendMode;
	uint8_t ___m_SourceAlphaBlendMode;
	uint8_t ___m_DestinationAlphaBlendMode;
	uint8_t ___m_ColorBlendOperation;
	uint8_t ___m_AlphaBlendOperation;
	uint8_t ___m_Padding;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 
{
	float ___shr0;
	float ___shr1;
	float ___shr2;
	float ___shr3;
	float ___shr4;
	float ___shr5;
	float ___shr6;
	float ___shr7;
	float ___shr8;
	float ___shg0;
	float ___shg1;
	float ___shg2;
	float ___shg3;
	float ___shg4;
	float ___shg5;
	float ___shg6;
	float ___shg7;
	float ___shg8;
	float ___shb0;
	float ___shb1;
	float ___shb2;
	float ___shb3;
	float ___shb4;
	float ___shb5;
	float ___shb6;
	float ___shb7;
	float ___shb8;
};
struct StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 
{
	uint8_t ___m_Enabled;
	uint8_t ___m_ReadMask;
	uint8_t ___m_WriteMask;
	uint8_t ___m_Padding;
	uint8_t ___m_CompareFunctionFront;
	uint8_t ___m_PassOperationFront;
	uint8_t ___m_FailOperationFront;
	uint8_t ___m_ZFailOperationFront;
	uint8_t ___m_CompareFunctionBack;
	uint8_t ___m_PassOperationBack;
	uint8_t ___m_FailOperationBack;
	uint8_t ___m_ZFailOperationBack;
};
struct StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C 
{
	uint32_t ____value;
};
struct StructWithStringIntAndFloat_tD9AF4D9DF877ED21E942A5E0EAF96C705E895BEB 
{
	String_t* ___a;
	int32_t ___b;
	float ___c;
};
struct StructWithStringIntAndFloat_tD9AF4D9DF877ED21E942A5E0EAF96C705E895BEB_marshaled_pinvoke
{
	char* ___a;
	int32_t ___b;
	float ___c;
};
struct StructWithStringIntAndFloat_tD9AF4D9DF877ED21E942A5E0EAF96C705E895BEB_marshaled_com
{
	Il2CppChar* ___a;
	int32_t ___b;
	float ___c;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 
{
	String_t* ___name;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* ___handles;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshaled_pinvoke
{
	char* ___name;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshaled_com
{
	Il2CppChar* ___name;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	String_t* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct TypeDefinitionHandle_tE85E143F0FED1313BA132EB2151B5FC04F00043B 
{
	int32_t ____rowId;
};
struct UIDocumentHierarchicalIndex_tB5F81735A42395827E61B3BB21C46133D0AC36BF 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___pathToParent;
};
struct UIDocumentHierarchicalIndex_tB5F81735A42395827E61B3BB21C46133D0AC36BF_marshaled_pinvoke
{
	Il2CppSafeArray* ___pathToParent;
};
struct UIDocumentHierarchicalIndex_tB5F81735A42395827E61B3BB21C46133D0AC36BF_marshaled_com
{
	Il2CppSafeArray* ___pathToParent;
};
struct UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC 
{
	int32_t ___startCharIdx;
	int32_t ___height;
	float ___topY;
	float ___leading;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 
{
	String_t* ___content;
};
struct UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1_marshaled_pinvoke
{
	char* ___content;
};
struct UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1_marshaled_com
{
	Il2CppChar* ___content;
};
struct UxmlDescription_t3A8DD15AED042FE57717A7B7E2585E4FE22D529D 
{
	String_t* ___uxmlName;
	String_t* ___cSharpName;
	String_t* ___overriddenCSharpName;
	FieldInfo_t* ___serializedField;
	FieldInfo_t* ___serializedFieldAttributeFlags;
	Type_t* ___fieldType;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___obsoleteNames;
};
struct UxmlDescription_t3A8DD15AED042FE57717A7B7E2585E4FE22D529D_marshaled_pinvoke
{
	char* ___uxmlName;
	char* ___cSharpName;
	char* ___overriddenCSharpName;
	FieldInfo_t* ___serializedField;
	FieldInfo_t* ___serializedFieldAttributeFlags;
	Type_t* ___fieldType;
	char** ___obsoleteNames;
};
struct UxmlDescription_t3A8DD15AED042FE57717A7B7E2585E4FE22D529D_marshaled_com
{
	Il2CppChar* ___uxmlName;
	Il2CppChar* ___cSharpName;
	Il2CppChar* ___overriddenCSharpName;
	FieldInfo_t* ___serializedField;
	FieldInfo_t* ___serializedFieldAttributeFlags;
	Type_t* ___fieldType;
	Il2CppChar** ___obsoleteNames;
};
struct UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B 
{
	String_t* ___prefix;
	String_t* ___resolvedNamespace;
};
struct UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B_marshaled_pinvoke
{
	char* ___prefix;
	char* ___resolvedNamespace;
};
struct UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B_marshaled_com
{
	Il2CppChar* ___prefix;
	Il2CppChar* ___resolvedNamespace;
};
struct UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 
{
	String_t* ___name;
	String_t* ___value;
};
struct UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4_marshaled_pinvoke
{
	char* ___name;
	char* ___value;
};
struct UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___value;
};
struct VFXBatchedEffectInfo_t9FD17831A7E3BF5267119337DDDA16BAEAF64D48 
{
	VisualEffectAsset_t0CD57FD9980CD68033BD96DA356697F92A69E688* ___vfxAsset;
	uint32_t ___activeBatchCount;
	uint32_t ___inactiveBatchCount;
	uint32_t ___activeInstanceCount;
	uint32_t ___unbatchedInstanceCount;
	uint32_t ___totalInstanceCapacity;
	uint32_t ___maxInstancePerBatchCapacity;
	uint64_t ___totalGPUSizeInBytes;
	uint64_t ___totalCPUSizeInBytes;
};
struct VFXBatchedEffectInfo_t9FD17831A7E3BF5267119337DDDA16BAEAF64D48_marshaled_pinvoke
{
	VisualEffectAsset_t0CD57FD9980CD68033BD96DA356697F92A69E688* ___vfxAsset;
	uint32_t ___activeBatchCount;
	uint32_t ___inactiveBatchCount;
	uint32_t ___activeInstanceCount;
	uint32_t ___unbatchedInstanceCount;
	uint32_t ___totalInstanceCapacity;
	uint32_t ___maxInstancePerBatchCapacity;
	uint64_t ___totalGPUSizeInBytes;
	uint64_t ___totalCPUSizeInBytes;
};
struct VFXBatchedEffectInfo_t9FD17831A7E3BF5267119337DDDA16BAEAF64D48_marshaled_com
{
	VisualEffectAsset_t0CD57FD9980CD68033BD96DA356697F92A69E688* ___vfxAsset;
	uint32_t ___activeBatchCount;
	uint32_t ___inactiveBatchCount;
	uint32_t ___activeInstanceCount;
	uint32_t ___unbatchedInstanceCount;
	uint32_t ___totalInstanceCapacity;
	uint32_t ___maxInstancePerBatchCapacity;
	uint64_t ___totalGPUSizeInBytes;
	uint64_t ___totalCPUSizeInBytes;
};
struct VFXExposedProperty_tBBCDED7FC34F046367672FBDFCC8F81CBAFAE96D 
{
	String_t* ___name;
	Type_t* ___type;
};
struct VFXExposedProperty_tBBCDED7FC34F046367672FBDFCC8F81CBAFAE96D_marshaled_pinvoke
{
	char* ___name;
	Type_t* ___type;
};
struct VFXExposedProperty_tBBCDED7FC34F046367672FBDFCC8F81CBAFAE96D_marshaled_com
{
	Il2CppChar* ___name;
	Type_t* ___type;
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
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 
{
	int32_t ___IdOfInstance;
	int32_t ___AccelStructID;
};
struct AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
	int32_t ___U3CFrameIndexU3Ek__BackingField;
};
struct AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161_marshaled_pinvoke
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
	int32_t ___U3CFrameIndexU3Ek__BackingField;
};
struct AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161_marshaled_com
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
	int32_t ___U3CFrameIndexU3Ek__BackingField;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	int32_t ___order;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct Page_t04FE552A388BF55B12C8868E19589136957E00A5 
{
	uint16_t ___x;
	uint16_t ___y;
	int32_t ___freeSlots;
};
struct Block_tBD2149E220F819A66A4A0A18F237932ACD9011DE 
{
	int32_t ___offset;
	int32_t ___count;
};
struct AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___attributeOverrides;
};
struct AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49_marshaled_pinvoke
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___attributeOverrides;
};
struct AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49_marshaled_com
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___attributeOverrides;
};
struct SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	int32_t ___templateId;
	List_1_tB0B308D151FBF226396B20253C1FF11CF7D10D3A* ___attributeOverrides;
};
struct SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014_marshaled_pinvoke
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	int32_t ___templateId;
	List_1_tB0B308D151FBF226396B20253C1FF11CF7D10D3A* ___attributeOverrides;
};
struct SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014_marshaled_com
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	int32_t ___templateId;
	List_1_tB0B308D151FBF226396B20253C1FF11CF7D10D3A* ___attributeOverrides;
};
struct ChangesFromUI_t56B0B09645F7D36924555D832D21882400771022 
{
	int64_t ___version;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___binding;
	BindingData_t63DF4F2F4FA1BE1BD6130C2DDAE1888DCD76381A* ___bindingData;
};
struct ChangesFromUI_t56B0B09645F7D36924555D832D21882400771022_marshaled_pinvoke
{
	int64_t ___version;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___binding;
	BindingData_t63DF4F2F4FA1BE1BD6130C2DDAE1888DCD76381A* ___bindingData;
};
struct ChangesFromUI_t56B0B09645F7D36924555D832D21882400771022_marshaled_com
{
	int64_t ___version;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___binding;
	BindingData_t63DF4F2F4FA1BE1BD6130C2DDAE1888DCD76381A* ___bindingData;
};
struct DecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D 
{
	int32_t ___chunkIndex;
	int32_t ___arrayIndex;
	int32_t ___version;
};
struct CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9 
{
	DecalEntityChunk_t2CDCBFA35711DA074631D26572EF9755A3AD740C* ___entityChunk;
	DecalCachedChunk_tDEF493C8A3A1F442BDEC1794BDDA0996B32DCACE* ___cachedChunk;
	DecalCulledChunk_tFD4472F0ADDD173C7B13E8B0529983E745F12ED3* ___culledChunk;
	DecalDrawCallChunk_tBD0491A1B0B7D19DF01A5C9EDE0A40CBEDBF7A3A* ___drawCallChunk;
	int32_t ___previousChunkIndex;
	bool ___valid;
};
struct CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9_marshaled_pinvoke
{
	DecalEntityChunk_t2CDCBFA35711DA074631D26572EF9755A3AD740C* ___entityChunk;
	DecalCachedChunk_tDEF493C8A3A1F442BDEC1794BDDA0996B32DCACE* ___cachedChunk;
	DecalCulledChunk_tFD4472F0ADDD173C7B13E8B0529983E745F12ED3* ___culledChunk;
	DecalDrawCallChunk_tBD0491A1B0B7D19DF01A5C9EDE0A40CBEDBF7A3A* ___drawCallChunk;
	int32_t ___previousChunkIndex;
	int32_t ___valid;
};
struct CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9_marshaled_com
{
	DecalEntityChunk_t2CDCBFA35711DA074631D26572EF9755A3AD740C* ___entityChunk;
	DecalCachedChunk_tDEF493C8A3A1F442BDEC1794BDDA0996B32DCACE* ___cachedChunk;
	DecalCulledChunk_tFD4472F0ADDD173C7B13E8B0529983E745F12ED3* ___culledChunk;
	DecalDrawCallChunk_tBD0491A1B0B7D19DF01A5C9EDE0A40CBEDBF7A3A* ___drawCallChunk;
	int32_t ___previousChunkIndex;
	int32_t ___valid;
};
struct AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C 
{
	int32_t ___vertexCount;
	int32_t ___indexCount;
};
struct FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SubTreeRoot;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_FocusedElement;
};
struct FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SubTreeRoot;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_FocusedElement;
};
struct FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SubTreeRoot;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_FocusedElement;
};
struct BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2 
{
	String_t* ___action;
	String_t* ___id;
	String_t* ___path;
	String_t* ___interactions;
	String_t* ___processors;
};
struct BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2_marshaled_pinvoke
{
	char* ___action;
	char* ___id;
	char* ___path;
	char* ___interactions;
	char* ___processors;
};
struct BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2_marshaled_com
{
	Il2CppChar* ___action;
	Il2CppChar* ___id;
	Il2CppChar* ___path;
	Il2CppChar* ___interactions;
	Il2CppChar* ___processors;
};
struct RowCounts_t7C20BB319478D12D43A8A6E9BD0EBEF939A2828B 
{
	int32_t ___AggregateInserts;
	int32_t ___Updates;
};
struct ClassLayoutRow_t98EFE5B0FCFA1EF34F17762F74D4924DC64110D4 
{
	uint16_t ___PackingSize;
	uint32_t ___ClassSize;
	int32_t ___Parent;
};
struct EncLogRow_t57F2F06DB04DF25460467BCFFD529453B4D2B4DD 
{
	int32_t ___Token;
	uint8_t ___FuncCode;
};
struct EncMapRow_t7877049C78369DE1F996688603B66BBBF7B267C2 
{
	int32_t ___Token;
};
struct EventMapRow_t6E13FF5D43E0DBE97195F3277B401A5B04F1C7F6 
{
	int32_t ___Parent;
	int32_t ___EventList;
};
struct FieldLayoutRow_tC9ACD126316F63B7828427099F79DF470CC2161C 
{
	int32_t ___Offset;
	int32_t ___Field;
};
struct FieldRvaRow_tD4D0491C1CD0D16DE7B50CCDF6D05442D9700C2E 
{
	int32_t ___Offset;
	int32_t ___Field;
};
struct GenericParamConstraintRow_t8219DEA6D214905875512B46EFB037710039980D 
{
	int32_t ___Owner;
	int32_t ___Constraint;
};
struct InterfaceImplRow_t9D1711220AD0F4622AD1ECD98AEBF13EFD3FC79C 
{
	int32_t ___Class;
	int32_t ___Interface;
};
struct LocalScopeRow_tD04D83AABFC861B3D712D4C30E5798F5C7BC39FD 
{
	int32_t ___Method;
	int32_t ___ImportScope;
	int32_t ___VariableList;
	int32_t ___ConstantList;
	int32_t ___StartOffset;
	int32_t ___Length;
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
struct SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 
{
	String_t* ___AssemblyName;
	Assembly_t* ___Assembly;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Dependencies;
};
struct SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53_marshaled_pinvoke
{
	char* ___AssemblyName;
	Assembly_t_marshaled_pinvoke ___Assembly;
	Il2CppSafeArray* ___Dependencies;
};
struct SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53_marshaled_com
{
	Il2CppChar* ___AssemblyName;
	Assembly_t_marshaled_com* ___Assembly;
	Il2CppSafeArray* ___Dependencies;
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
struct TextureIdentifier_tA1CDC255400F534A6496877CC86C07B80C45A199 
{
	uint64_t ___value;
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
struct U3CscalerNameU3Ee__FixedBuffer_tE49106E61AF80D651A1E51FBD7AAF36EEF9CDB0B 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CscalerNameU3Ee__FixedBuffer_tE49106E61AF80D651A1E51FBD7AAF36EEF9CDB0B__padding[320];
	};
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
struct LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
};
struct AccessFlags_tB7D400C853C05A1DB9C6B56DF14E43721F0B1739 
{
	int32_t ___value__;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AvailableTrackingData_t223756B90093C1B8974F04856043E3983BA37402 
{
	int32_t ___value__;
};
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 
{
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState0;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState1;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState2;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState3;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState4;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState5;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState6;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState7;
	uint8_t ___m_SeparateMRTBlendStates;
	uint8_t ___m_AlphaToMask;
	int16_t ___m_Padding;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 
{
	bool ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke
{
	int32_t ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com
{
	int32_t ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct CullMode_t049B71889E4E981866E205A3F71DC8B856306D50 
{
	int32_t ___value__;
};
struct DebugDirectoryEntryType_tE4F516EE54C0D93C04F76F3B800976BAEA5F8E9B 
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
struct EventModifiers_tB9DEEF73F8FC4C312B8E0C34336C7D9C3023B270 
{
	int32_t ___value__;
};
struct ExceptionRegionKind_t99262FD7E32FEEE419616F8BBE5535BCDD25738E 
{
	uint16_t ___value__;
};
struct ExtendedFeatureFlags_t736CECC24E1DDF78CDF8A2B134DFF9B1CA2BE01F 
{
	int32_t ___value__;
};
struct FeatureType_t794EFAD24C687FA0CDC5A313581A39F5CB61CC41 
{
	int32_t ___value__;
};
struct FilterFunctionType_tF29290365A61009BE6F2EF6C6C6218E72CB9F64A 
{
	int32_t ___value__;
};
struct FilterParameterType_t7250262A78079140235AAFF6F4FA3CCB2F99E390 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct HideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A 
{
	int32_t ___value__;
};
struct ILOpCode_t6F0D7BCBF2ED4ACD3B1C05B684A6E74BDC9D6AC1 
{
	uint16_t ___value__;
};
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	int32_t ___value__;
};
struct LayoutUnit_tF18EC17FE8588A01C72784546410EA0D9B1D2F22 
{
	int32_t ___value__;
};
struct MaterialPropertyValueType_t3AE79BF4BF4F82EFA7E2ED2CB4EC5BAB096BC5A8 
{
	int32_t ___value__;
};
struct MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF 
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
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct RenderGraphPassType_tD00EC2DAA135C660EE7E71652291A4672104EA2D 
{
	int32_t ___value__;
};
struct RenderGraphResourceType_t5F552AF06E38DEC5775B77F13C8783A895FCD086 
{
	int32_t ___value__;
};
struct RenderStateMask_tC9C95BF62EADEE4D622D4E16CDE1DF94E2A9EF57 
{
	int32_t ___value__;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ScaleMode_t16AD656758EE54C56B3DA34FE4F2033C9C2EE13D 
{
	int32_t ___value__;
};
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 
{
	intptr_t ___m_Ptr;
};
struct SectionCharacteristics_t4CB501495BC18951119375C2DBFD3109D9D4AE8A 
{
	uint32_t ___value__;
};
struct ShadingRateCombiner_tF7F5DDD676DF45F67B2A7BC7F14373F4DFAD2B1C 
{
	int32_t ___value__;
};
struct ShadingRateFragmentSize_tE61BBA9B957F4537F04519746FCABE0F5FA94C9F 
{
	int32_t ___value__;
};
struct SomeEnum_t5DCDAB15324242E1329F56BA40D5F0E794D607ED 
{
	int32_t ___value__;
};
struct SortDirection_t1CF90CCD8B5D86EF2630D0F080500514821467E4 
{
	int32_t ___value__;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct StyleSelectorType_t425962DE6D175F785FA2B5554D793B71D39430A3 
{
	int32_t ___value__;
};
struct StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834 
{
	int32_t ___value__;
};
struct StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE 
{
	int32_t ___value__;
};
struct TextEditOp_tE72D8D20A659F09B65139B604442E5A70F848B58 
{
	int32_t ___value__;
};
struct TextSelectOp_tA7F70185F9205EE9DEF86DC6929C73768D165F43 
{
	int32_t ___value__;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E 
{
	int32_t ___value__;
};
struct TouchType_t84F82C73BC1A6012141735AD84DA67AA7F7AB43F 
{
	int32_t ___value__;
};
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	int32_t ___value__;
};
struct UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cursorPos;
	float ___charWidth;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___prevPosition;
};
struct URPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481 
{
	int32_t ___value__;
};
struct VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv;
	uint32_t ___settingIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle;
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F 
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
struct VisualElementTransformFlags_t47F836489394ED28F75EAD7C76A8F70FAB5E4A10 
{
	int32_t ___value__;
};
struct X509ChainStatusFlags_t57C80D7C1F4C319F6D6B9FBDEA402E3023E6C769 
{
	int32_t ___value__;
};
struct XRNode_t41F4B2F0EDD99DB33C49EC731C8C7F9DF142B5FF 
{
	int32_t ___value__;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___prevViewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___visibleMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
	bool ___isPrevViewMatrixValid;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_marshaled_pinvoke
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___prevViewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___visibleMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
	int32_t ___isPrevViewMatrixValid;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_marshaled_com
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___prevViewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___visibleMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
	int32_t ___isPrevViewMatrixValid;
};
struct ScopeTransitionType_t6E07CFC7F104E66937274EA67AF2704D03670F82 
{
	int32_t ___value__;
};
struct ScalerInfo_tCDB4548B8C1ABDB390E4CC9BB0E418767636E52A 
{
	U3CscalerNameU3Ee__FixedBuffer_tE49106E61AF80D651A1E51FBD7AAF36EEF9CDB0B ___scalerName;
	uint32_t ___enabled;
	int32_t ___overrideLevel;
	int32_t ___currentLevel;
	int32_t ___maxLevel;
	float ___scale;
	uint32_t ___applied;
};
struct Allocation_tB22CAD44C5AF0C13B3D441F8B419C9BA1D19F70C 
{
	int32_t ___handle;
	Block_tBD2149E220F819A66A4A0A18F237932ACD9011DE ___block;
};
struct SliderMode_t36F7E9E0E8DBC959372C33D9E99D9C510E1368B9 
{
	int32_t ___value__;
};
struct MessageType_t4D4BB9B792D5A93B6925CEE30CECB29566AD7A94 
{
	uint8_t ___value__;
};
struct CachedType_t8BE88AA2DD904D23AEA5FFEF8F0254FE3379514E 
{
	int32_t ___value__;
};
struct Registration_t4882E3A82099DD20B2E91917C08BD4D2216F21D7 
{
	EventConsumer_t6D08A21A3FF574758C289118775786B6D35754F3* ___handler;
	int32_t ___priority;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___playerId;
	HashSet_1_t0F16759FF079A28DCA2DCF39BA6A61B5D502A475* ____types;
};
struct Registration_t4882E3A82099DD20B2E91917C08BD4D2216F21D7_marshaled_pinvoke
{
	Il2CppMethodPointer ___handler;
	int32_t ___priority;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___playerId;
	HashSet_1_t0F16759FF079A28DCA2DCF39BA6A61B5D502A475* ____types;
};
struct Registration_t4882E3A82099DD20B2E91917C08BD4D2216F21D7_marshaled_com
{
	Il2CppMethodPointer ___handler;
	int32_t ___priority;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___playerId;
	HashSet_1_t0F16759FF079A28DCA2DCF39BA6A61B5D502A475* ____types;
};
struct ShaderVariant_t6958B29FCD94A8B128836D290CFD00D6CC976837 
{
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader;
	PassIdentifier_tB001434DD777C99EE72429B150D574210E94CE70 ___passId;
	LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9* ___keywords;
};
struct ShaderVariant_t6958B29FCD94A8B128836D290CFD00D6CC976837_marshaled_pinvoke
{
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader;
	PassIdentifier_tB001434DD777C99EE72429B150D574210E94CE70 ___passId;
	LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshaled_pinvoke* ___keywords;
};
struct ShaderVariant_t6958B29FCD94A8B128836D290CFD00D6CC976837_marshaled_com
{
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader;
	PassIdentifier_tB001434DD777C99EE72429B150D574210E94CE70 ___passId;
	LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshaled_com* ___keywords;
};
struct HIDCollectionType_t7AC7F0F059AEAEEFBD54D5F4DB1DFCB85254C854 
{
	int32_t ___value__;
};
struct HIDElementFlags_t3C41C626435310A0F354E862D4747C2369E8720C 
{
	int32_t ___value__;
};
struct HIDReportType_t37249B7677BD7083BEB296DEC42B8A0C0ADE562F 
{
	int32_t ___value__;
};
struct UsagePage_t6EF545F107AB1DED99B07C377BD0B8457DC6F7B8 
{
	int32_t ___value__;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB 
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___text;
	bool ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___text;
	int32_t ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___text;
	int32_t ___hasEscapes;
};
struct JsonValueType_t36BA339F107E5E9C0966C45F896E27F3BCC5A2AB 
{
	int32_t ___value__;
};
struct NativeColorPage_tD578D4E96ABBDBB0E6A608F6CE97A0362ABD7D4B 
{
	int32_t ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct RepeatRectUV_tD14FA437CD80FC82B2ED78B34A201F3C91416A7C 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv;
};
struct AllocToFree_tE4DBFDF44B21D35677B13570BA217FDAE35476CB 
{
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE ___alloc;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___page;
	bool ___vertices;
};
struct AllocToFree_tE4DBFDF44B21D35677B13570BA217FDAE35476CB_marshaled_pinvoke
{
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_pinvoke ___alloc;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___page;
	int32_t ___vertices;
};
struct AllocToFree_tE4DBFDF44B21D35677B13570BA217FDAE35476CB_marshaled_com
{
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_com ___alloc;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___page;
	int32_t ___vertices;
};
struct AllocToUpdate_t7E5493AF0DAEBF6C8D1E005C93179042069A46A3 
{
	uint32_t ___id;
	uint32_t ___allocTime;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___meshHandle;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE ___permAllocVerts;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE ___permAllocIndices;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___permPage;
	bool ___copyBackIndices;
};
struct AllocToUpdate_t7E5493AF0DAEBF6C8D1E005C93179042069A46A3_marshaled_pinvoke
{
	uint32_t ___id;
	uint32_t ___allocTime;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___meshHandle;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_pinvoke ___permAllocVerts;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_pinvoke ___permAllocIndices;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___permPage;
	int32_t ___copyBackIndices;
};
struct AllocToUpdate_t7E5493AF0DAEBF6C8D1E005C93179042069A46A3_marshaled_com
{
	uint32_t ___id;
	uint32_t ___allocTime;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___meshHandle;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_com ___permAllocVerts;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_com ___permAllocIndices;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___permPage;
	int32_t ___copyBackIndices;
};
struct SubMeshInstance_tB6A39F545201E674EBB3EBA9A490D6CC1F19113E 
{
	int32_t ___meshInstanceID;
	int32_t ___vertexOffset;
	int32_t ___gameObjectInstanceID;
	int32_t ___subMeshIndex;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform;
};
struct AssemblyRefTableRow_t112C74C2E09EAA50E331D04421D28D3086817DA6 
{
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___Version;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___PublicKeyToken;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Name;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Culture;
	uint32_t ___Flags;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___HashValue;
};
struct AssemblyRefTableRow_t112C74C2E09EAA50E331D04421D28D3086817DA6_marshaled_pinvoke
{
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___Version;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___PublicKeyToken;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Name;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Culture;
	uint32_t ___Flags;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___HashValue;
};
struct AssemblyRefTableRow_t112C74C2E09EAA50E331D04421D28D3086817DA6_marshaled_com
{
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___Version;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___PublicKeyToken;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Name;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Culture;
	uint32_t ___Flags;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___HashValue;
};
struct ConstantRow_t79C64063A0EDCB175FEBB6AE7A772733DA569A9B 
{
	uint8_t ___Type;
	int32_t ___Parent;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___Value;
};
struct CustomAttributeRow_t1CB1F88FF662F6E0B586928F1E83EE99EFC5F61D 
{
	int32_t ___Parent;
	int32_t ___Type;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___Value;
};
struct CustomDebugInformationRow_tE5380E8BDCD4FFF0691F55826830E830CF765729 
{
	int32_t ___Parent;
	GuidHandle_tBD83795685737579B04079056AFFE6A40F967EE4 ___Kind;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___Value;
};
struct DeclSecurityRow_t230D9A9FADCE1CBDF9FCF1CDCF054CE1669BF8E6 
{
	uint16_t ___Action;
	int32_t ___Parent;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___PermissionSet;
};
struct DocumentRow_t63C1F62B63354B6B92697D188D8496A6B0B048E6 
{
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___Name;
	GuidHandle_tBD83795685737579B04079056AFFE6A40F967EE4 ___HashAlgorithm;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___Hash;
	GuidHandle_tBD83795685737579B04079056AFFE6A40F967EE4 ___Language;
};
struct EventRow_t4610D570FC0268A41038F03FD5160310D6D4BA30 
{
	uint16_t ___EventFlags;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Name;
	int32_t ___EventType;
};
struct ExportedTypeRow_t100E12B83AE74E741C6E67EEEE132608E4733D90 
{
	uint32_t ___Flags;
	int32_t ___TypeDefId;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___TypeName;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___TypeNamespace;
	int32_t ___Implementation;
};
struct FieldDefRow_t605E5BF4E11196BB9FC04A49EF64D9CB4ACBEDB6 
{
	uint16_t ___Flags;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Name;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___Signature;
};
struct FieldMarshalRow_t4456C303359B2D547CCC558B7D89F3E774C62856 
{
	int32_t ___Parent;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___NativeType;
};
struct FileTableRow_t8A2E28EE0FDD8ACB4EA37976A4E0BBD95E31D75C 
{
	uint32_t ___Flags;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___FileName;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___HashValue;
};
struct GenericParamRow_tD44C8C944FA3CE8B9F670A40023A2DBF2FF573C8 
{
	uint16_t ___Number;
	uint16_t ___Flags;
	int32_t ___Owner;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Name;
};
struct ImplMapRow_t55BACA22A73E5B6896C02D23F31E87105132F9C2 
{
	uint16_t ___MappingFlags;
	int32_t ___MemberForwarded;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___ImportName;
	int32_t ___ImportScope;
};
struct ImportScopeRow_t016D420D44D3D9C3A1B1E5AEBEAD2D69D7D01E21 
{
	int32_t ___Parent;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___Imports;
};
struct LocalConstantRow_t6D08782CB4CADF05A92218253E5C52052074AB93 
{
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Name;
	BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___Signature;
};
struct LocalVariableRow_tD67258308DF6F97471FCF654209C19AF76F76C2D 
{
	uint16_t ___Attributes;
	uint16_t ___Index;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Name;
};
struct ManifestResourceRow_t2A01D2AFD0F210FA478DE1EA295B8D34D0899580 
{
	uint32_t ___Offset;
	uint32_t ___Flags;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___Name;
	int32_t ___Implementation;
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
struct Direction_t7783E528E50FAB7F36720CD0F263B96ED3DE80F8 
{
	int32_t ___value__;
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
struct SettingsOptions_t935A71692F21EE9D959FCAC00574AA018F8BA2CB 
{
	uint16_t ___value__;
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
struct Flags_t36D5070200D1061BA68BF41808748FA000DEE57C 
{
	int32_t ___value__;
};
struct VisualsProcessingType_t19983E0076886C15ED2761057B9992989A710ECC 
{
	int32_t ___value__;
};
struct NativeArray_1_tE60150ECC1618145E24B39FDB42788271982A962 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 
{
	int32_t ___m_Type;
	float ___m_FloatValue;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorValue;
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct InternalRenderGraphContext_t7197268EBA8C241EB895B070A5E0C71B111D7503  : public RuntimeObject
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___renderContext;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd;
	RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437* ___renderGraphPool;
	RenderGraphDefaultResources_tCE331152C84ED1A36CF186CA0092AE10E599E25D* ___defaultResources;
	RenderGraphPass_tEFB5BD685D417024760D82991EEEA4F4D0454A93* ___executingPass;
	CompilerContextData_t0E7B5B9E1A939E4546A3AE9D8357556FC956A77D* ___compilerContext;
	bool ___contextlessTesting;
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
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			bool ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			Il2CppChar ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
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
struct RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 
{
	int32_t ___m_CullingMode;
	int32_t ___m_OffsetUnits;
	float ___m_OffsetFactor;
	uint8_t ___m_DepthClip;
	uint8_t ___m_Conservative;
	uint8_t ___m_Padding1;
	uint8_t ___m_Padding2;
};
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C 
{
	uint32_t ___m_VersionIndex;
	uint32_t ___m_Validity;
	int32_t ___m_Type;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	int32_t ___U3CidU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField;
	char* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField;
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	String_t* ___m_Value;
	int32_t ___m_Type;
	RuntimeObject* ___tempData;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value;
	int32_t ___m_Type;
	Il2CppIUnknown* ___tempData;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value;
	int32_t ___m_Type;
	Il2CppIUnknown* ___tempData;
};
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C 
{
	int32_t ___type;
	String_t* ___text;
	float ___number;
};
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_pinvoke
{
	int32_t ___type;
	char* ___text;
	float ___number;
};
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_com
{
	int32_t ___type;
	Il2CppChar* ___text;
	float ___number;
};
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D 
{
	int32_t ___m_ValueType;
	int32_t ___valueIndex;
};
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 
{
	int32_t ___id;
	int32_t ___keyword;
	RuntimeObject* ___value;
};
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_pinvoke
{
	int32_t ___id;
	int32_t ___keyword;
	Il2CppIUnknown* ___value;
};
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_com
{
	int32_t ___id;
	int32_t ___keyword;
	Il2CppIUnknown* ___value;
};
struct SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___U3CboundsU3Ek__BackingField;
	int32_t ___U3CtopologyU3Ek__BackingField;
	int32_t ___U3CindexStartU3Ek__BackingField;
	int32_t ___U3CindexCountU3Ek__BackingField;
	int32_t ___U3CbaseVertexU3Ek__BackingField;
	int32_t ___U3CfirstVertexU3Ek__BackingField;
	int32_t ___U3CvertexCountU3Ek__BackingField;
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	int32_t ___m_FingerId;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta;
	float ___m_TimeDelta;
	int32_t ___m_TapCount;
	int32_t ___m_Phase;
	int32_t ___m_Type;
	float ___m_Pressure;
	float ___m_maximumPossiblePressure;
	float ___m_Radius;
	float ___m_RadiusVariance;
	float ___m_AltitudeAngle;
	float ___m_AzimuthAngle;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UnmanagedMaterialPropertyValue_t32418EF3A65B66312EE3D81C88513C1116711B75 
{
	int32_t ___name;
	int32_t ___type;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___packedValue;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___textureValue;
};
struct UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_Handle;
};
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	int32_t ___U3CattributeU3Ek__BackingField;
	int32_t ___U3CformatU3Ek__BackingField;
	int32_t ___U3CdimensionU3Ek__BackingField;
	int32_t ___U3CstreamU3Ek__BackingField;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D 
{
	int32_t ___status;
	String_t* ___info;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke
{
	int32_t ___status;
	char* ___info;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com
{
	int32_t ___status;
	Il2CppChar* ___info;
};
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 
{
	String_t* ___name;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints;
	int32_t ___featureType;
	uint32_t ___customSize;
};
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2_marshaled_pinvoke
{
	char* ___name;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints;
	int32_t ___featureType;
	uint32_t ___customSize;
};
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2_marshaled_com
{
	Il2CppChar* ___name;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints;
	int32_t ___featureType;
	uint32_t ___customSize;
};
struct XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A 
{
	int32_t ___m_Type;
	int32_t ___m_AvailableFields;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Acceleration;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularAcceleration;
	int32_t ___m_Tracked;
	uint64_t ___m_UniqueID;
};
struct ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___perLightShadowSliceIndex;
	uint16_t ___requestedResolution;
	uint16_t ___offsetX;
	uint16_t ___offsetY;
	uint16_t ___allocatedResolution;
	uint16_t ___m_ShadowProperties;
};
struct BranchInfo_t3DA3CB857F187E4D6FF19F1F851EE21FBE4363F5 
{
	int32_t ___OperandOffset;
	LabelHandle_t3049CD9713642B48A3AFB4BCFF191BE02E751BA7 ___Label;
	int32_t ____instructionEndDisplacement;
	int32_t ___ILOffset;
	uint16_t ___OpCode;
};
struct ExceptionHandlerInfo_tD621246106D4CD1BBDDEB4D1845BA3D0F7EBFC1B 
{
	uint16_t ___Kind;
	LabelHandle_t3049CD9713642B48A3AFB4BCFF191BE02E751BA7 ___TryStart;
	LabelHandle_t3049CD9713642B48A3AFB4BCFF191BE02E751BA7 ___TryEnd;
	LabelHandle_t3049CD9713642B48A3AFB4BCFF191BE02E751BA7 ___HandlerStart;
	LabelHandle_t3049CD9713642B48A3AFB4BCFF191BE02E751BA7 ___HandlerEnd;
	LabelHandle_t3049CD9713642B48A3AFB4BCFF191BE02E751BA7 ___FilterStart;
	EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0 ___CatchType;
};
struct Entry_tB6089BD1D837B3F224832107155848CD3D053E1B 
{
	uint32_t ___Stamp;
	uint32_t ___Version;
	int32_t ___Type;
	int32_t ___DataSize;
};
struct HIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7 
{
	int32_t ___type;
	int32_t ___usage;
	int32_t ___usagePage;
	int32_t ___parent;
	int32_t ___childCount;
	int32_t ___firstChild;
};
struct HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED 
{
	int32_t ___usage;
	int32_t ___usagePage;
	int32_t ___unit;
	int32_t ___unitExponent;
	int32_t ___logicalMin;
	int32_t ___logicalMax;
	int32_t ___physicalMin;
	int32_t ___physicalMax;
	int32_t ___reportType;
	int32_t ___collectionIndex;
	int32_t ___reportId;
	int32_t ___reportSizeInBits;
	int32_t ___reportOffsetInBits;
	int32_t ___flags;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___usageMin;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___usageMax;
};
struct HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED_marshaled_pinvoke
{
	int32_t ___usage;
	int32_t ___usagePage;
	int32_t ___unit;
	int32_t ___unitExponent;
	int32_t ___logicalMin;
	int32_t ___logicalMax;
	int32_t ___physicalMin;
	int32_t ___physicalMax;
	int32_t ___reportType;
	int32_t ___collectionIndex;
	int32_t ___reportId;
	int32_t ___reportSizeInBits;
	int32_t ___reportOffsetInBits;
	int32_t ___flags;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___usageMin;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___usageMax;
};
struct HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED_marshaled_com
{
	int32_t ___usage;
	int32_t ___usagePage;
	int32_t ___unit;
	int32_t ___unitExponent;
	int32_t ___logicalMin;
	int32_t ___logicalMax;
	int32_t ___physicalMin;
	int32_t ___physicalMax;
	int32_t ___reportType;
	int32_t ___collectionIndex;
	int32_t ___reportId;
	int32_t ___reportSizeInBits;
	int32_t ___reportOffsetInBits;
	int32_t ___flags;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___usageMin;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___usageMax;
};
struct HIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F 
{
	int32_t ___reportId;
	int32_t ___reportType;
	int32_t ___currentBitOffset;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2 
{
	int32_t ___type;
	bool ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	RuntimeObject* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_com
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___subRect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	int32_t ___scaleMode;
	intptr_t ___backgroundRepeatInstanceList;
	int32_t ___backgroundRepeatInstanceListStartIndex;
	int32_t ___backgroundRepeatInstanceListEndIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___backgroundRepeatRect;
	intptr_t ___texture;
	intptr_t ___sprite;
	intptr_t ___vectorImage;
	intptr_t ___spriteTexture;
	intptr_t ___spriteVertices;
	intptr_t ___spriteUVs;
	intptr_t ___spriteTriangles;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___spriteGeomRect;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___contentSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureSize;
	float ___texturePixelsPerPoint;
	int32_t ___leftSlice;
	int32_t ___topSlice;
	int32_t ___rightSlice;
	int32_t ___bottomSlice;
	float ___sliceScale;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rectInset;
	NativeColorPage_tD578D4E96ABBDBB0E6A608F6CE97A0362ABD7D4B ___colorPage;
	int32_t ___meshFlags;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___leftColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___topColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___rightColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___bottomColorPage;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_pinvoke
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___leftColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___topColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___rightColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___bottomColorPage;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_com
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___leftColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___topColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___rightColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___bottomColorPage;
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
struct KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 
{
	int32_t ___U3CkeyU3Ek__BackingField;
	int32_t ___U3CmodifiersU3Ek__BackingField;
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
struct BaseRenderFunc_2_t6B00DB2FCD05EF9F3F4030193ECC944BBD329ACA  : public MulticastDelegate_t
{
};
struct BaseRenderFunc_2_tC11CA5334BC198AD71E615336FD765AFE7B1E62E  : public MulticastDelegate_t
{
};
struct Comparison_1_t11F78E54645546468696C9CAAB9785713FDD3C1D  : public MulticastDelegate_t
{
};
struct Comparison_1_tE5158BD22459A74C69001333CA23C931AAE2FA86  : public MulticastDelegate_t
{
};
struct Comparison_1_tE4B60551ACB89BC8425E9FE52ADE32E2BE73FEDD  : public MulticastDelegate_t
{
};
struct Comparison_1_t8A17D401F5001CA5886AB96498B99F3E936A08EB  : public MulticastDelegate_t
{
};
struct Comparison_1_tF84C0F4BD9DB4A47B2C3C596C05475A92DAE08D7  : public MulticastDelegate_t
{
};
struct Comparison_1_t19B26D40AF6E5B6CFE1C22A1B663C58BF3F92DC5  : public MulticastDelegate_t
{
};
struct Comparison_1_tA503AAE0258A4326482B77662614D54B769842E6  : public MulticastDelegate_t
{
};
struct Comparison_1_tBCC4CA10777B41199AAC917419860BAFAB534CFA  : public MulticastDelegate_t
{
};
struct Comparison_1_t8BAC82466F40FB22277E7EDF4CA6926294B4989D  : public MulticastDelegate_t
{
};
struct Comparison_1_t15A407A79E37409C1131265016BD74B9C186AA69  : public MulticastDelegate_t
{
};
struct Comparison_1_tCE96114C3B053890228B1BFC6AFCCD20289BD13A  : public MulticastDelegate_t
{
};
struct Comparison_1_t9675CD64965015038255FCAB0F96BEF64804BAA6  : public MulticastDelegate_t
{
};
struct Comparison_1_tC93FAD7C1AE6977BCEB783924667E7FDE3D75081  : public MulticastDelegate_t
{
};
struct Comparison_1_t2685F2A67114D0BF25D38F9C8521F3237947C117  : public MulticastDelegate_t
{
};
struct Comparison_1_t729B8C8EAEE9D22CF06C7FDC7BBF9029198A4C35  : public MulticastDelegate_t
{
};
struct Comparison_1_t92E0ADFCD8283E92368230A5A0235E020106A7A2  : public MulticastDelegate_t
{
};
struct Comparison_1_tD755B36DD73CEAE9B0E7BFE083489A1097F64783  : public MulticastDelegate_t
{
};
struct Comparison_1_tE6F02BB19312F9A27AEEA88373BEACBF0C114942  : public MulticastDelegate_t
{
};
struct Comparison_1_t1CE4E4CEBF16C28AC611CC0AF59C0F69FD9EFC34  : public MulticastDelegate_t
{
};
struct Comparison_1_tF3E59E3F5B78F038EABD93D316993799BF2A9671  : public MulticastDelegate_t
{
};
struct Comparison_1_tDBF0B5EAC8FD372792A4C6AF562EC6CB7BFCE84A  : public MulticastDelegate_t
{
};
struct Comparison_1_t80323898F6B93744F05D82CC81677AFE447FC3E1  : public MulticastDelegate_t
{
};
struct Comparison_1_t13F1243B56F95143AD268EE91E46701998A40539  : public MulticastDelegate_t
{
};
struct Comparison_1_tEB47E563C49896E023B67107A8386F91407C1905  : public MulticastDelegate_t
{
};
struct Comparison_1_tF066A0EA3AD70B742E51B5CA89F29E000FC9CF03  : public MulticastDelegate_t
{
};
struct Comparison_1_tF77ABBDA0482B2BE658FA3EE0DFA2E0ECB09A60B  : public MulticastDelegate_t
{
};
struct Comparison_1_tCE25FD8843602A5F64B1B21412BCB30B5D5B6991  : public MulticastDelegate_t
{
};
struct Comparison_1_t27829EBDE842D386BD0B07B272D865D005B43F21  : public MulticastDelegate_t
{
};
struct Comparison_1_t0B9BE926A72F827E04ABCF0672F4CFD8E4285997  : public MulticastDelegate_t
{
};
struct Comparison_1_t2CAC4BAD707CF4A7C9F5F697FEA1CF991CEFDA19  : public MulticastDelegate_t
{
};
struct Comparison_1_t1C5FFE793D8D949B56DFE05D0D9C7F2366A12ED8  : public MulticastDelegate_t
{
};
struct Comparison_1_tACAAA4A282F18E1DF4B8D2203D8FD42489CF6508  : public MulticastDelegate_t
{
};
struct Comparison_1_t52FE35588887E8D52BB283271E6532F0485A31FC  : public MulticastDelegate_t
{
};
struct Comparison_1_t2441427CBF4E0A9A8DB2BA49AFF56C89B005749D  : public MulticastDelegate_t
{
};
struct Comparison_1_t62C1A79709C2A4E1D24E98B891646E1A011C2405  : public MulticastDelegate_t
{
};
struct Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65  : public MulticastDelegate_t
{
};
struct Comparison_1_tB7D0BE8AEE7B5E137427A69D38BAA20B4CEB9962  : public MulticastDelegate_t
{
};
struct Comparison_1_t388CFEE675F4A6E15BB604A7AD4C3A5B6D265FB7  : public MulticastDelegate_t
{
};
struct Comparison_1_t481A1DF2F78166A7F0827FA0A9A8E26233D3973E  : public MulticastDelegate_t
{
};
struct Comparison_1_t4392E10ECA33E90CBCB60909FBAEF90898AB4D90  : public MulticastDelegate_t
{
};
struct Comparison_1_t6447E02D95C4C995AE37F197D13D355CC1E9AE10  : public MulticastDelegate_t
{
};
struct Comparison_1_tDCFB713A0B3F3D462CB386CE951FF1A1E4B459D0  : public MulticastDelegate_t
{
};
struct Comparison_1_tC1158E104FF5CCC5765B087271D160D205BA9A94  : public MulticastDelegate_t
{
};
struct Comparison_1_tA4C703DDA6BD0818320A4707D673EBE2DC0068FC  : public MulticastDelegate_t
{
};
struct Comparison_1_t89BA6BA726C49026677C45BEDBD41952739E06A2  : public MulticastDelegate_t
{
};
struct Comparison_1_t55FCE173570442A2D451AE8BFC15B22D41D55DC9  : public MulticastDelegate_t
{
};
struct Comparison_1_t5E6876DDE66F8FD799553279FF8A7B1FC5ED9F79  : public MulticastDelegate_t
{
};
struct Comparison_1_tCC0DD2EF5FD4D03E423A3C172F5D948A944669DA  : public MulticastDelegate_t
{
};
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49  : public MulticastDelegate_t
{
};
struct Comparison_1_t7F4AA622C1F22734C55CF75CFEFBEF108FDBAF9A  : public MulticastDelegate_t
{
};
struct Comparison_1_tC0DCDC1D31A6E33EF49DDE4E34BC02DCFF391759  : public MulticastDelegate_t
{
};
struct Comparison_1_t8940C48A5D530AD8AA4C9BD4EF5A116ED037E0A3  : public MulticastDelegate_t
{
};
struct Comparison_1_tC126A1DB2317CDCD96353C3DB19460E7A21F51EA  : public MulticastDelegate_t
{
};
struct Comparison_1_t53C7968EAD02BE23D913BD2C7F7F58BBBDD8D096  : public MulticastDelegate_t
{
};
struct Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3  : public MulticastDelegate_t
{
};
struct Comparison_1_tD9EBEF6A651DABC3E978C4201E05B2E5CEBD249C  : public MulticastDelegate_t
{
};
struct Comparison_1_tCF0509416DC0A7D2BD0141D3A589DCF44C18C043  : public MulticastDelegate_t
{
};
struct Comparison_1_t148B00C7E51756B859F2BDAD87FC3C6EBA65870B  : public MulticastDelegate_t
{
};
struct Comparison_1_t18ABEE6B681CF80C2E705AD3E523322FACBA3653  : public MulticastDelegate_t
{
};
struct Comparison_1_tF90EB5CCAED2B2735F272BDD3FB1DE593CCD0B7E  : public MulticastDelegate_t
{
};
struct Comparison_1_tB5CA1191001C249F5A17EB47DE44AE7178EB8D5F  : public MulticastDelegate_t
{
};
struct Comparison_1_tAF7D8D1E3C0F12BC383951F1938EFDCED9156824  : public MulticastDelegate_t
{
};
struct Comparison_1_t12CD56A430006D8C34BA97D085C6F0A1455FF160  : public MulticastDelegate_t
{
};
struct Comparison_1_tC6BFEF80B936380835F710285DAC4522ED4AB9A2  : public MulticastDelegate_t
{
};
struct Comparison_1_t52BFB1786E8AC835D688E40CD5258A4641CA16C7  : public MulticastDelegate_t
{
};
struct Comparison_1_t1D70AD681199BAE9A46BB890478D827A9BA04A36  : public MulticastDelegate_t
{
};
struct Comparison_1_t94B0A14C91609896F9AB2694A5D2EC342A4FEC03  : public MulticastDelegate_t
{
};
struct Comparison_1_tCA72A825EBBE7255DBCDB6B3BE73296C87C75F86  : public MulticastDelegate_t
{
};
struct Comparison_1_t2018CA0ED02A280E24DB112F562FB22B91B0517D  : public MulticastDelegate_t
{
};
struct Comparison_1_tD654C48FB90A48F56CE96FE4B4E79146CBE0CD88  : public MulticastDelegate_t
{
};
struct Comparison_1_tDBBF0D3F41E0E4F376722274F6E422B8756CE6A6  : public MulticastDelegate_t
{
};
struct Comparison_1_t43290271F92E52062015A85644C015A449EA3F39  : public MulticastDelegate_t
{
};
struct Comparison_1_t99EDEF7C7742853CAFC7896BBBE2427FF0B15BBC  : public MulticastDelegate_t
{
};
struct Comparison_1_t47F61CD7F77E4DB861CD611744B43F607206091A  : public MulticastDelegate_t
{
};
struct Comparison_1_tB9F950C795E8ACCCC54115F6F28E7ABD61D0287C  : public MulticastDelegate_t
{
};
struct Comparison_1_t0AC918C940F16A046B367004E65100581BDD00E6  : public MulticastDelegate_t
{
};
struct Comparison_1_tFA15690664FA590B7F2D68145495AD3308E76A2B  : public MulticastDelegate_t
{
};
struct Comparison_1_t52A2A8811D1B518BAAD9944A6DF0D8021C1FB6D9  : public MulticastDelegate_t
{
};
struct Comparison_1_t09F8F94F4023D59BA60457DAEAAE9083D22004DC  : public MulticastDelegate_t
{
};
struct Comparison_1_tE8A770CDE45A8B40CE6820231E9004E578844D5A  : public MulticastDelegate_t
{
};
struct Comparison_1_tDFB506CAEAFFCCC0FA98152C423520534E181E97  : public MulticastDelegate_t
{
};
struct Comparison_1_tE930E552B2802A3EE5966F499F9F6B87538DBCE9  : public MulticastDelegate_t
{
};
struct Comparison_1_t00C1B7CAE2F805189C3B14C99DFAF40425BF95DC  : public MulticastDelegate_t
{
};
struct Comparison_1_tD4713A14ACCF43728089041940C833C356C0AAD4  : public MulticastDelegate_t
{
};
struct Comparison_1_t1DC53E9EEAF7582D2EC3C09C98BF8B73F0EBCBA0  : public MulticastDelegate_t
{
};
struct Comparison_1_tBB0AFB3B7B93AB523B7E8DE4AC988747703AF3E2  : public MulticastDelegate_t
{
};
struct Comparison_1_t8453C51951027ECEF528230C047FCC00003C7427  : public MulticastDelegate_t
{
};
struct Comparison_1_t58C2C029C26482D555AB51A54C76CE2A2C8A31C5  : public MulticastDelegate_t
{
};
struct Comparison_1_t6BE7D80CA69CCC2C0704C501CDE54478D0750991  : public MulticastDelegate_t
{
};
struct Comparison_1_tAE1711C28739B8CC40C0FE29F82EB415FD3F991F  : public MulticastDelegate_t
{
};
struct Comparison_1_t9A6DC07752BEE7A6F8685DFAB67BA4F9CA6C1BDD  : public MulticastDelegate_t
{
};
struct Comparison_1_tB22E2596ED8B509BC2ADE11BC9C0A46B29C578C6  : public MulticastDelegate_t
{
};
struct Comparison_1_t23B9C482B83B1A698DA697AC4E926CDE6B13AD72  : public MulticastDelegate_t
{
};
struct Comparison_1_t79E63326583F04894D09704381A52FC72C20F6FB  : public MulticastDelegate_t
{
};
struct Comparison_1_tDE5F795BCF6C685C2BCED2882E825039EB9D10B3  : public MulticastDelegate_t
{
};
struct Comparison_1_t57EDF19972B65B8D2FBC982046B784DD10C64E2A  : public MulticastDelegate_t
{
};
struct Comparison_1_tBF6B1555AEAB2F63E7D6B3FB32CE05CFA09F736B  : public MulticastDelegate_t
{
};
struct Comparison_1_tADF8514F9AC9584E8B3C98BE9EF694D5B125B467  : public MulticastDelegate_t
{
};
struct Comparison_1_t684BA387C63D9154981860204EA44FDDDC46163B  : public MulticastDelegate_t
{
};
struct Comparison_1_tAB6D42CEDC6DB4CDD9731047C9F173E005EE6301  : public MulticastDelegate_t
{
};
struct Comparison_1_tDCF5C4376BC04B41F6D5E662DF343CB60293F564  : public MulticastDelegate_t
{
};
struct Comparison_1_t6E613262012E3BED4A9051C491CC1267FAF22946  : public MulticastDelegate_t
{
};
struct Comparison_1_tFB61EBEDE396C232CE2C8AB089EC89398CCFD66C  : public MulticastDelegate_t
{
};
struct Comparison_1_t265D52C277A753E66AE2B99ADFA45E6DCEF89642  : public MulticastDelegate_t
{
};
struct Comparison_1_t879D08410D64B617C615C8D3CCAA69BA9C30C0EC  : public MulticastDelegate_t
{
};
struct Comparison_1_t2BDF83F941B163C63DAAB5FD1EF38627C8EB3DE2  : public MulticastDelegate_t
{
};
struct Comparison_1_tF02AA8B23699A5028351FF24E5DA392A77662FCA  : public MulticastDelegate_t
{
};
struct Comparison_1_tB3CD1E16C66F8EF8C94792FD92A97B9F369663B9  : public MulticastDelegate_t
{
};
struct Comparison_1_t8E7B9CCA271B65D1406CAC75B3BBA855379F35EA  : public MulticastDelegate_t
{
};
struct Comparison_1_t7CC81FE354568588DB88D606DA0B67353312164A  : public MulticastDelegate_t
{
};
struct Comparison_1_t1650BF8616A78FB52A5B13A65991CF927956FBE4  : public MulticastDelegate_t
{
};
struct Comparison_1_t93F34146060C2F1F615F3E4B6080FC3A7312FEFB  : public MulticastDelegate_t
{
};
struct Comparison_1_tFF3EEFDA496A42C69C9CBEDA51C0400DAF4BBC4D  : public MulticastDelegate_t
{
};
struct Comparison_1_tECB3CE8FF3372FFF9215CF8F9C42E9BCAE03A2CD  : public MulticastDelegate_t
{
};
struct Comparison_1_t056EE9B5816F42E1580BF08393F05F093DEE2626  : public MulticastDelegate_t
{
};
struct Comparison_1_t6AA89066A1C292DC4F42CC02569C4AAFA6D6BC66  : public MulticastDelegate_t
{
};
struct Comparison_1_tAE63FC3EEB36C1F5608916E2B73B23D27A6550B8  : public MulticastDelegate_t
{
};
struct Comparison_1_t9F1FBB8E62B412F2324C36413B3703278B15BA8F  : public MulticastDelegate_t
{
};
struct Comparison_1_t571DA7D7EE27031721368C99D2D5A82B61989CF5  : public MulticastDelegate_t
{
};
struct Comparison_1_tBB7A739CD1500F72F55CDE04D999B4477FF04AE6  : public MulticastDelegate_t
{
};
struct Comparison_1_t9B34E5A77986569D97117B1C139A50D81AC8F1EC  : public MulticastDelegate_t
{
};
struct Comparison_1_t4F9D0E9767AAA293CF1BB8BC3C4AF7B109BE7755  : public MulticastDelegate_t
{
};
struct Comparison_1_t5E0AEE202E1A7570FA3AEAFC87BBEF53192A442F  : public MulticastDelegate_t
{
};
struct Comparison_1_tBA8E62E1D99117B29F57BB6477E7B2CEDD1B5158  : public MulticastDelegate_t
{
};
struct Comparison_1_tD6701E0A17B1B1975B062FC8944966FF3CD0F70A  : public MulticastDelegate_t
{
};
struct Comparison_1_t696010B4A8BB4CD935DE4A0ABA1CA0F819B77A99  : public MulticastDelegate_t
{
};
struct Comparison_1_t295CB37AB7504AAE6CBC644D9611774EB5678080  : public MulticastDelegate_t
{
};
struct Comparison_1_t044AF6585069225E1512F1E2DF8684016B5F1888  : public MulticastDelegate_t
{
};
struct Comparison_1_tD4A7C84A781729F852B9DB1C82808D62D1C98E52  : public MulticastDelegate_t
{
};
struct Comparison_1_t9F167C473890596BE04A62A3AEC73FAC4926004E  : public MulticastDelegate_t
{
};
struct Comparison_1_tB37367478ABE2FE5FD2203EA6868D24C205BA55F  : public MulticastDelegate_t
{
};
struct Comparison_1_t4F66A2E6956CB06B2F8672C175C48747CEF60DC5  : public MulticastDelegate_t
{
};
struct Comparison_1_tCC8415BEB0406C0976211154410CE202D001809C  : public MulticastDelegate_t
{
};
struct Comparison_1_t65FE0E0CB4C3E36FE75C908F1083A33349C7CE7C  : public MulticastDelegate_t
{
};
struct Comparison_1_tA6E38F9B8A5E125EC6515F9679C2079C747A0149  : public MulticastDelegate_t
{
};
struct Comparison_1_tF90CF02211A4FECA9C87D42EABC48A1B135AC253  : public MulticastDelegate_t
{
};
struct Comparison_1_t51E86E6047A0B80EBEAF97ECDAA0F946E40B7630  : public MulticastDelegate_t
{
};
struct Comparison_1_t2B8E14EC42C1F374C5B6E70E29421609DB142FDF  : public MulticastDelegate_t
{
};
struct Comparison_1_t6483AAC5D174AEAD9E262E279414D7784D401172  : public MulticastDelegate_t
{
};
struct Comparison_1_t67300D8DAB98FC52AC36653D7AD171DC4E008DD7  : public MulticastDelegate_t
{
};
struct Comparison_1_t28A89FF29270FD0DFFF0F2768336939B7C6371A3  : public MulticastDelegate_t
{
};
struct Comparison_1_t453273420138742F28B59945D2A30D1C72B418C1  : public MulticastDelegate_t
{
};
struct Comparison_1_tC43D775D61466C0F117D815FD0443D450287145F  : public MulticastDelegate_t
{
};
struct Comparison_1_t713334E895F5A004C17AB92C51658CE5B36C0980  : public MulticastDelegate_t
{
};
struct Comparison_1_tF29CD924376C14ADEB61089AE2142AE074320840  : public MulticastDelegate_t
{
};
struct Comparison_1_t4703F25317F49005421F55E324565AD56F754157  : public MulticastDelegate_t
{
};
struct Comparison_1_tB7FFB31708D82AA5655A2AA4E61A2E410409EAA5  : public MulticastDelegate_t
{
};
struct Comparison_1_t3BDBAE977B81246E2F9B29C9238AF62657D31000  : public MulticastDelegate_t
{
};
struct Comparison_1_t9587F6BBCCF465868BB507F3842094EB3EFE433C  : public MulticastDelegate_t
{
};
struct Comparison_1_t8F1A85756B851CC5CBE65A93BF18AA7D89B79C7D  : public MulticastDelegate_t
{
};
struct Comparison_1_t2CC3A9749FFE6C137307D37250EA2187BC4BC230  : public MulticastDelegate_t
{
};
struct Comparison_1_t2E9E3A70B36A979327C1C4C2C8C4F170248BAC7E  : public MulticastDelegate_t
{
};
struct Comparison_1_t2AE1E7D59ADBD15B61C504C1309A27A6F38C475B  : public MulticastDelegate_t
{
};
struct Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87  : public MulticastDelegate_t
{
};
struct Comparison_1_tE7F571C15042D58AB52BAF0BDB4BD5CEC6995062  : public MulticastDelegate_t
{
};
struct Comparison_1_t561AF27D83A3BA7A3BE3A30EE3F33F9F87A5274F  : public MulticastDelegate_t
{
};
struct Comparison_1_tDF19E1FD642A6D03EC22D6BC3C7899090B8EB768  : public MulticastDelegate_t
{
};
struct Comparison_1_tE7E96FD34C52F0992924E65405618B941FEA3229  : public MulticastDelegate_t
{
};
struct Comparison_1_tC652E94860093FBD669CD9F7858E5C6792867D13  : public MulticastDelegate_t
{
};
struct Comparison_1_tF9D3C7C8DECDE1C77E07524A7105544DA85CD005  : public MulticastDelegate_t
{
};
struct Comparison_1_t43ED6298DAADE9D387284C9C350C6CEADD2D10B7  : public MulticastDelegate_t
{
};
struct Comparison_1_t5B5B82187A230EA3688CBAD764108FFA8BE8291C  : public MulticastDelegate_t
{
};
struct Comparison_1_t99148C658F954F6EC6B8A9A591A30B8F244C62E4  : public MulticastDelegate_t
{
};
struct Comparison_1_t7B4E5654CF90CD4076DED5653773927E348018C2  : public MulticastDelegate_t
{
};
struct Comparison_1_t0D538E030DA616BAE9EC08BBAF8EAB30350CCADC  : public MulticastDelegate_t
{
};
struct Comparison_1_t03C0C4E193ABD150DF480970F6EF023B7DC546BF  : public MulticastDelegate_t
{
};
struct Comparison_1_tDD6AE20BEE11AB8BC31E0631A586EC8A928E4C0B  : public MulticastDelegate_t
{
};
struct Comparison_1_t386C1480B6D4EAD4B489D013C29A2296380CF129  : public MulticastDelegate_t
{
};
struct Comparison_1_tDCA6874ED42906DDBDBFF650AB61B40A69842333  : public MulticastDelegate_t
{
};
struct FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C 
{
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____0;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____1;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____2;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____3;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
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
struct RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 
{
	BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 ___m_BlendState;
	RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 ___m_RasterState;
	DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 ___m_DepthState;
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___m_StencilState;
	int32_t ___m_StencilReference;
	int32_t ___m_Mask;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle;
};
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	bool ___builtin;
};
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_pinvoke
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___builtin;
};
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_com
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___builtin;
};
struct GeometrySlot_tD424D8BAD216C628C1818B196A406745EC8AB5DA 
{
	uint32_t ___refCount;
	uint32_t ___hash;
	Allocation_tB22CAD44C5AF0C13B3D441F8B419C9BA1D19F70C ___meshChunkTableAlloc;
	NativeArray_1_tE60150ECC1618145E24B39FDB42788271982A962 ___meshChunks;
	bool ___hasGPUData;
};
struct GeometrySlot_tD424D8BAD216C628C1818B196A406745EC8AB5DA_marshaled_pinvoke
{
	uint32_t ___refCount;
	uint32_t ___hash;
	Allocation_tB22CAD44C5AF0C13B3D441F8B419C9BA1D19F70C ___meshChunkTableAlloc;
	NativeArray_1_tE60150ECC1618145E24B39FDB42788271982A962 ___meshChunks;
	int32_t ___hasGPUData;
};
struct GeometrySlot_tD424D8BAD216C628C1818B196A406745EC8AB5DA_marshaled_com
{
	uint32_t ___refCount;
	uint32_t ___hash;
	Allocation_tB22CAD44C5AF0C13B3D441F8B419C9BA1D19F70C ___meshChunkTableAlloc;
	NativeArray_1_tE60150ECC1618145E24B39FDB42788271982A962 ___meshChunks;
	int32_t ___hasGPUData;
};
struct ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD 
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___U3CnameU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___U3ClayoutU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___U3CvariantsU3Ek__BackingField;
	String_t* ___U3CuseStateFromU3Ek__BackingField;
	String_t* ___U3CdisplayNameU3Ek__BackingField;
	String_t* ___U3CshortDisplayNameU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CusagesU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CaliasesU3Ek__BackingField;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField;
	ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 ___U3CprocessorsU3Ek__BackingField;
	uint32_t ___U3CoffsetU3Ek__BackingField;
	uint32_t ___U3CbitU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	int32_t ___U3CflagsU3Ek__BackingField;
	int32_t ___U3CarraySizeU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CdefaultStateU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CminValueU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CmaxValueU3Ek__BackingField;
};
struct ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD_marshaled_pinvoke
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___U3CnameU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___U3ClayoutU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___U3CvariantsU3Ek__BackingField;
	char* ___U3CuseStateFromU3Ek__BackingField;
	char* ___U3CdisplayNameU3Ek__BackingField;
	char* ___U3CshortDisplayNameU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CusagesU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CaliasesU3Ek__BackingField;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField;
	ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 ___U3CprocessorsU3Ek__BackingField;
	uint32_t ___U3CoffsetU3Ek__BackingField;
	uint32_t ___U3CbitU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	int32_t ___U3CflagsU3Ek__BackingField;
	int32_t ___U3CarraySizeU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CdefaultStateU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CminValueU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CmaxValueU3Ek__BackingField;
};
struct ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD_marshaled_com
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___U3CnameU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___U3ClayoutU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___U3CvariantsU3Ek__BackingField;
	Il2CppChar* ___U3CuseStateFromU3Ek__BackingField;
	Il2CppChar* ___U3CdisplayNameU3Ek__BackingField;
	Il2CppChar* ___U3CshortDisplayNameU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CusagesU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CaliasesU3Ek__BackingField;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField;
	ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 ___U3CprocessorsU3Ek__BackingField;
	uint32_t ___U3CoffsetU3Ek__BackingField;
	uint32_t ___U3CbitU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	int32_t ___U3CflagsU3Ek__BackingField;
	int32_t ___U3CarraySizeU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CdefaultStateU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CminValueU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CmaxValueU3Ek__BackingField;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2 
{
	bool ___isBorderJob;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509 ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_marshaled_pinvoke
{
	int32_t ___isBorderJob;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_pinvoke ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_marshaled_com
{
	int32_t ___isBorderJob;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_com ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
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
struct Comparison_1_t5889909C36CD86DEF91396F57847BA81B3D8BCFF  : public MulticastDelegate_t
{
};
struct Comparison_1_t162DDD8A9BAC871143836D9F8678CC97E6C6F802  : public MulticastDelegate_t
{
};
struct Comparison_1_t2F5BDFFA7A6D843886EA00D1EBD956689B1A3E4E  : public MulticastDelegate_t
{
};
struct Comparison_1_tD99FA69CB413A36512D95EF33FBE88F6DC46AA18  : public MulticastDelegate_t
{
};
struct Comparison_1_tA943A001B1F178513C88B85989F180B23402AC1F  : public MulticastDelegate_t
{
};
struct Comparison_1_t758F73D242ED056DDF06435BA032D8AB09C69DDC  : public MulticastDelegate_t
{
};
struct Comparison_1_t9B7FBDDC31C2B4C836D05D7AB3126CC41FEA3F95  : public MulticastDelegate_t
{
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
struct StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___id;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___id_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyword_OffsetPadding[4];
			int32_t ___keyword;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyword_OffsetPadding_forAlignmentOnly[4];
			int32_t ___keyword_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___number_OffsetPadding[8];
			float ___number;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___number_OffsetPadding_forAlignmentOnly[8];
			float ___number_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___length_OffsetPadding[8];
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___length;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___length_OffsetPadding_forAlignmentOnly[8];
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___length_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___color_OffsetPadding[8];
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___color_OffsetPadding_forAlignmentOnly[8];
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___position_OffsetPadding[8];
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___position;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___position_OffsetPadding_forAlignmentOnly[8];
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___position_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___repeat_OffsetPadding[8];
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___repeat;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___repeat_OffsetPadding_forAlignmentOnly[8];
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___repeat_forAlignmentOnly;
		};
	};
};
struct TextureAccess_t68FFBA1B28C09FE70680D69372E2208931B66328 
{
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 ___textureHandle;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
	int32_t ___flags;
};
struct TextureAccess_t68FFBA1B28C09FE70680D69372E2208931B66328_marshaled_pinvoke
{
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_pinvoke ___textureHandle;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
	int32_t ___flags;
};
struct TextureAccess_t68FFBA1B28C09FE70680D69372E2208931B66328_marshaled_com
{
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_com ___textureHandle;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
	int32_t ___flags;
};
struct UnmanagedFilterFunction_t46D1C73262CD8245474DBC2CA5878C80E08A1B11 
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_CustomDefinition;
};
struct GraphicsState_t1E5C03694C4B4A65DAE1B231DD75B2B5DB6077AC 
{
	VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___vertexAttributes;
	AttachmentDescriptorU5BU5D_tC70107EBD955FE94BA31C7FDC146069EF9C547C1* ___attachments;
	SubPassDescriptorU5BU5D_tF2049226934378D3C1994935C781C945FC75C708* ___subPasses;
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 ___renderState;
	int32_t ___topology;
	int32_t ___forceCullMode;
	int32_t ___shadingRateCombinerPrimitive;
	int32_t ___shadingRateCombinerFragment;
	int32_t ___baseShadingRate;
	float ___depthBias;
	float ___slopeDepthBias;
	int32_t ___depthAttachmentIndex;
	int32_t ___subPassIndex;
	int32_t ___shadingRateIndex;
	int32_t ___multiviewCount;
	int32_t ___sampleCount;
	bool ___hasEyeTexture;
	bool ___wireframe;
	bool ___invertCulling;
	bool ___negativeScale;
	bool ___invertProjection;
};
struct GraphicsState_t1E5C03694C4B4A65DAE1B231DD75B2B5DB6077AC_marshaled_pinvoke
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___vertexAttributes;
	AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E* ___attachments;
	SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9* ___subPasses;
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 ___renderState;
	int32_t ___topology;
	int32_t ___forceCullMode;
	int32_t ___shadingRateCombinerPrimitive;
	int32_t ___shadingRateCombinerFragment;
	int32_t ___baseShadingRate;
	float ___depthBias;
	float ___slopeDepthBias;
	int32_t ___depthAttachmentIndex;
	int32_t ___subPassIndex;
	int32_t ___shadingRateIndex;
	int32_t ___multiviewCount;
	int32_t ___sampleCount;
	int32_t ___hasEyeTexture;
	int32_t ___wireframe;
	int32_t ___invertCulling;
	int32_t ___negativeScale;
	int32_t ___invertProjection;
};
struct GraphicsState_t1E5C03694C4B4A65DAE1B231DD75B2B5DB6077AC_marshaled_com
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___vertexAttributes;
	AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E* ___attachments;
	SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9* ___subPasses;
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 ___renderState;
	int32_t ___topology;
	int32_t ___forceCullMode;
	int32_t ___shadingRateCombinerPrimitive;
	int32_t ___shadingRateCombinerFragment;
	int32_t ___baseShadingRate;
	float ___depthBias;
	float ___slopeDepthBias;
	int32_t ___depthAttachmentIndex;
	int32_t ___subPassIndex;
	int32_t ___shadingRateIndex;
	int32_t ___multiviewCount;
	int32_t ___sampleCount;
	int32_t ___hasEyeTexture;
	int32_t ___wireframe;
	int32_t ___invertCulling;
	int32_t ___negativeScale;
	int32_t ___invertProjection;
};
struct Comparison_1_tDEDD2609C3AA3FE49B0B4CA4B2379FE4AAAE0191  : public MulticastDelegate_t
{
};
struct Comparison_1_tFB8531F0EC8949F6D02D80E70176021BC6EFAD65  : public MulticastDelegate_t
{
};
struct Comparison_1_t38EB765F3DC30BFD5145422A793602AF7618B220  : public MulticastDelegate_t
{
};
struct RenderGraphPass_tEFB5BD685D417024760D82991EEEA4F4D0454A93  : public RuntimeObject
{
	String_t* ___U3CnameU3Ek__BackingField;
	int32_t ___U3CindexU3Ek__BackingField;
	int32_t ___U3CtypeU3Ek__BackingField;
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___U3CcustomSamplerU3Ek__BackingField;
	bool ___U3CenableAsyncComputeU3Ek__BackingField;
	bool ___U3CallowPassCullingU3Ek__BackingField;
	bool ___U3CallowGlobalStateU3Ek__BackingField;
	bool ___U3CenableFoveatedRasterizationU3Ek__BackingField;
	int32_t ___U3CextendedFeatureFlagsU3Ek__BackingField;
	TextureAccess_t68FFBA1B28C09FE70680D69372E2208931B66328 ___U3CdepthAccessU3Ek__BackingField;
	TextureAccessU5BU5D_t02D7243719E98C8FA4B2925C4AACC249913D7293* ___U3CcolorBufferAccessU3Ek__BackingField;
	int32_t ___U3CcolorBufferMaxIndexU3Ek__BackingField;
	bool ___U3ChasShadingRateImageU3Ek__BackingField;
	TextureAccess_t68FFBA1B28C09FE70680D69372E2208931B66328 ___U3CshadingRateAccessU3Ek__BackingField;
	bool ___U3ChasShadingRateStatesU3Ek__BackingField;
	int32_t ___U3CshadingRateFragmentSizeU3Ek__BackingField;
	int32_t ___U3CprimitiveShadingRateCombinerU3Ek__BackingField;
	int32_t ___U3CfragmentShadingRateCombinerU3Ek__BackingField;
	TextureAccessU5BU5D_t02D7243719E98C8FA4B2925C4AACC249913D7293* ___U3CfragmentInputAccessU3Ek__BackingField;
	int32_t ___U3CfragmentInputMaxIndexU3Ek__BackingField;
	RandomWriteResourceInfoU5BU5D_t79D1DFED62BB70EF55CFEEDFC5B0413F84F882F3* ___U3CrandomAccessResourceU3Ek__BackingField;
	int32_t ___U3CrandomAccessResourceMaxIndexU3Ek__BackingField;
	bool ___U3CgenerateDebugDataU3Ek__BackingField;
	bool ___U3CallowRendererListCullingU3Ek__BackingField;
	List_1U5BU5D_tBC36CD3A22E16740615AC57FE9C6B659DAC8ECD8* ___resourceReadLists;
	List_1U5BU5D_tBC36CD3A22E16740615AC57FE9C6B659DAC8ECD8* ___resourceWriteLists;
	List_1U5BU5D_tBC36CD3A22E16740615AC57FE9C6B659DAC8ECD8* ___transientResourceList;
	List_1_t67B4F73A05A1220FF45824DBE29F391490B25A0C* ___usedRendererListList;
	List_1_t38894513E46A6B97A5AAD6E40AC40F8D0E361549* ___setGlobalsList;
	bool ___useAllGlobalTextures;
	List_1_t4ACF9489301B655268E8A9C77CAED339DA26EE65* ___implicitReadsList;
	PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31 ___U3CdebugScriptInfoU3Ek__BackingField;
};
struct BindingRequest_tB47D4B85CD5F177F9D6891D44DE7958EE23A7172 
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___bindingId;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___binding;
	bool ___shouldProcess;
};
struct BindingRequest_tB47D4B85CD5F177F9D6891D44DE7958EE23A7172_marshaled_pinvoke
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke ___bindingId;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___binding;
	int32_t ___shouldProcess;
};
struct BindingRequest_tB47D4B85CD5F177F9D6891D44DE7958EE23A7172_marshaled_com
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com ___bindingId;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___binding;
	int32_t ___shouldProcess;
};
struct BaseRenderGraphPass_2_t0F0305B903C11DF38DEC749353A76FDBA5A26DEB  : public RenderGraphPass_tEFB5BD685D417024760D82991EEEA4F4D0454A93
{
	Il2CppSharedGenericObject* ___data;
	BaseRenderFunc_2_t6B00DB2FCD05EF9F3F4030193ECC944BBD329ACA* ___renderFunc;
};
struct BaseRenderGraphPass_2_t407183B2A4BB1007A162B44C240D1E1C26C7FB21  : public RenderGraphPass_tEFB5BD685D417024760D82991EEEA4F4D0454A93
{
	Il2CppSharedGenericObject* ___data;
	BaseRenderFunc_2_tC11CA5334BC198AD71E615336FD765AFE7B1E62E* ___renderFunc;
};
struct Comparison_1_tA1D6CF508BFA679A7BA13D5E06E4648BAE6831E2  : public MulticastDelegate_t
{
};
struct ComputeRenderGraphPass_1_tE2D8EC8270679EC54415778E7514EE262C3DE338  : public BaseRenderGraphPass_2_t0F0305B903C11DF38DEC749353A76FDBA5A26DEB
{
};
struct ComponentSingleton_1_t7C80444CBDFE2ED98D05C22212A90AC3795B1535_StaticFields
{
	Il2CppSharedGenericObject* ___s_Instance;
};
struct ConcurrentDictionary_2_t6553E8F57A500F679C67863C02D94ECDFA489C33_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t72691F75B6C45685845A39BBFE01D1B70992B54E_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t0A6BCCBCD2F7139BB7805897FF13E3E6AF27F6C3_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ComputeGraphContext_t4C18687C77814418D826A1B68C0D02781A9DFC7F_StaticFields
{
	ComputeCommandBuffer_tA6FA5F68FE745317C94802C6A828FC21AC0ADF61* ___computecmd;
};
struct RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437_StaticFields
{
	DynamicArray_1_t843ECB88E0EEDBBB658FF535E6B19186D9F69540* ___s_AllocatedPools;
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
struct ComputeRenderGraphPass_1_tE2D8EC8270679EC54415778E7514EE262C3DE338_StaticFields
{
	ComputeGraphContext_t4C18687C77814418D826A1B68C0D02781A9DFC7F* ___c;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseRenderFunc_2_Invoke_m9D5C67D1ED7DB7B83C160EED4EE4A9653E5F80F6_gshared_inline (BaseRenderFunc_2_tC11CA5334BC198AD71E615336FD765AFE7B1E62E* __this, Il2CppSharedGenericObject* ___0_data, Il2CppFullySharedGenericAny ___1_renderGraphContext, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseRenderGraphPass_2_Release_mC9F93A9D5F566BFF5E6F6E7BF6667C828B96820E_gshared_inline (BaseRenderGraphPass_2_t407183B2A4BB1007A162B44C240D1E1C26C7FB21* __this, RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437* ___0_pool, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderGraphObjectPool_Release_TisIl2CppSharedGenericObject_m41E89F411886EB72C412391048C5DFBB4BF6BFFC_gshared (RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRenderGraphPass_2__ctor_mDB087533ED27EE1E23108F904FD875B485316D27_gshared (BaseRenderGraphPass_2_t407183B2A4BB1007A162B44C240D1E1C26C7FB21* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreUtils_Destroy_mD2FDD299C528530E4CC5F99EFBAF90ABC7B02C69 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeGraphContext_FromInternalContext_m51483B16D9535D0F456D567B343283A6E0866C39 (ComputeGraphContext_t4C18687C77814418D826A1B68C0D02781A9DFC7F* __this, InternalRenderGraphContext_t7197268EBA8C241EB895B070A5E0C71B111D7503* ___0_context, const RuntimeMethod* method) ;
inline void BaseRenderFunc_2_Invoke_mCF0E7DED5B5B2D26C2EFF9EA27EB65B281C5CE89_inline (BaseRenderFunc_2_t6B00DB2FCD05EF9F3F4030193ECC944BBD329ACA* __this, Il2CppSharedGenericObject* ___0_data, ComputeGraphContext_t4C18687C77814418D826A1B68C0D02781A9DFC7F* ___1_renderGraphContext, const RuntimeMethod* method)
{
	((  void (*) (BaseRenderFunc_2_tC11CA5334BC198AD71E615336FD765AFE7B1E62E*, Il2CppSharedGenericObject*, Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseRenderFunc_2_Invoke_m9D5C67D1ED7DB7B83C160EED4EE4A9653E5F80F6_gshared_inline)((BaseRenderFunc_2_tC11CA5334BC198AD71E615336FD765AFE7B1E62E*)__this, ___0_data, (Il2CppFullySharedGenericAny)___1_renderGraphContext, method);
}
inline void BaseRenderGraphPass_2_Release_mE359AFB8BB9EC4A4F2628BB79F3BE2259967C330_inline (BaseRenderGraphPass_2_t0F0305B903C11DF38DEC749353A76FDBA5A26DEB* __this, RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437* ___0_pool, const RuntimeMethod* method)
{
	((  void (*) (BaseRenderGraphPass_2_t0F0305B903C11DF38DEC749353A76FDBA5A26DEB*, RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437*, const RuntimeMethod*))BaseRenderGraphPass_2_Release_mC9F93A9D5F566BFF5E6F6E7BF6667C828B96820E_gshared_inline)(__this, ___0_pool, method);
}
inline void RenderGraphObjectPool_Release_TisComputeRenderGraphPass_1_tE2D8EC8270679EC54415778E7514EE262C3DE338_m795F1E0FF349B85F697181C24E7C8102811DD635 (RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437* __this, ComputeRenderGraphPass_1_tE2D8EC8270679EC54415778E7514EE262C3DE338* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437*, ComputeRenderGraphPass_1_tE2D8EC8270679EC54415778E7514EE262C3DE338*, const RuntimeMethod*))RenderGraphObjectPool_Release_TisIl2CppSharedGenericObject_m41E89F411886EB72C412391048C5DFBB4BF6BFFC_gshared)(__this, ___0_value, method);
}
inline void BaseRenderGraphPass_2__ctor_m6CB61F049A2B7B002BBEC964291E81F5244C9575 (BaseRenderGraphPass_2_t0F0305B903C11DF38DEC749353A76FDBA5A26DEB* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseRenderGraphPass_2_t0F0305B903C11DF38DEC749353A76FDBA5A26DEB*, const RuntimeMethod*))BaseRenderGraphPass_2__ctor_mDB087533ED27EE1E23108F904FD875B485316D27_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeGraphContext__ctor_m05C8B9C8C98B49AC2F62765FEA1961B0AB1CB492 (ComputeGraphContext_t4C18687C77814418D826A1B68C0D02781A9DFC7F* __this, const RuntimeMethod* method) ;
inline void RenderGraphObjectPool_Release_TisIl2CppSharedGenericObject_m41E89F411886EB72C412391048C5DFBB4BF6BFFC (RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437*, Il2CppSharedGenericObject*, const RuntimeMethod*))RenderGraphObjectPool_Release_TisIl2CppSharedGenericObject_m41E89F411886EB72C412391048C5DFBB4BF6BFFC_gshared)(__this, ___0_value, method);
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
int32_t Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_Multicast(Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* currentDelegate = reinterpret_cast<Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_x, ___1_y, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
int32_t Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_OpenStaticInvoker(Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_x, ___1_y);
}
int32_t Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_ClosedStaticInvoker(Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_x, ___1_y);
}
int32_t Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_ClosedInstInvoker(Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_x, ___1_y);
}
int32_t Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_OpenInstInvoker(Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	NullCheck(___0_x);
	return InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_x, ___1_y);
}
int32_t Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_OpenVirtualInvoker(Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	NullCheck(___0_x);
	return VirtualFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_x, ___1_y);
}
int32_t Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_OpenInterfaceInvoker(Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	NullCheck(___0_x);
	return InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_x, ___1_y);
}
int32_t Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_OpenGenericVirtualInvoker(Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	NullCheck(___0_x);
	return GenericVirtualFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(method, (RuntimeObject*)___0_x, ___1_y);
}
int32_t Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_OpenGenericInterfaceInvoker(Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	NullCheck(___0_x);
	return GenericInterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(method, (RuntimeObject*)___0_x, ___1_y);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m3B594919B20B90AF5727A416D5798BA4468358CC_gshared (Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
			__this->___invoke_impl = (intptr_t)&Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_ClosedStaticInvoker;
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
						__this->___invoke_impl = (intptr_t)&Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_mB760859B20CBCFA0435D3F65B103D432CCAC07F9_gshared (Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_x, ___1_y, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ComponentSingleton_1_get_instance_m2505877EAF0900F185F59283BD5687A6CB6D1BE2_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCEB30C9E43E9D0062BBC9BA13C1FAFD780871FC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	Il2CppSharedGenericObject* V_2 = NULL;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6941));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6942));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6943));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6944));
		Il2CppSharedGenericObject* L_0 = ((ComponentSingleton_1_t7C80444CBDFE2ED98D05C22212A90AC3795B1535_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Instance;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6945));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6945));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6946));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0059;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6947));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6948));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6949));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6949));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6950));
		NullCheck((MemberInfo_t*)L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6950));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6951));
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFCEB30C9E43E9D0062BBC9BA13C1FAFD780871FC, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6951));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6952));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_7, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6952));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6953));
		NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_8);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_8, (int32_t)((int32_t)61), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6953));
		V_1 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6954));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6955));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6955));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6956));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6957));
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6957));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6958));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6959));
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_12;
		L_12 = GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD(L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6959));
		((ComponentSingleton_1_t7C80444CBDFE2ED98D05C22212A90AC3795B1535_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Instance = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((ComponentSingleton_1_t7C80444CBDFE2ED98D05C22212A90AC3795B1535_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Instance), (void*)L_12);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6960));
	}

IL_0059:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6961));
		Il2CppSharedGenericObject* L_13 = ((ComponentSingleton_1_t7C80444CBDFE2ED98D05C22212A90AC3795B1535_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Instance;
		V_2 = L_13;
		goto IL_0061;
	}

IL_0061:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6962));
		Il2CppSharedGenericObject* L_14 = V_2;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentSingleton_1_Release_mB9383C73EDFF08E281C933227E55366607692226_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6963));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6964));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6965));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6966));
		Il2CppSharedGenericObject* L_0 = ((ComponentSingleton_1_t7C80444CBDFE2ED98D05C22212A90AC3795B1535_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Instance;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6967));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6967));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6968));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6969));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6970));
		Il2CppSharedGenericObject* L_3 = ((ComponentSingleton_1_t7C80444CBDFE2ED98D05C22212A90AC3795B1535_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Instance;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6971));
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6971));
		V_1 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6972));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6973));
		il2cpp_codegen_runtime_class_init_inline(CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var);
		CoreUtils_Destroy_mD2FDD299C528530E4CC5F99EFBAF90ABC7B02C69((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6973));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6974));
		il2cpp_codegen_initobj((&((ComponentSingleton_1_t7C80444CBDFE2ED98D05C22212A90AC3795B1535_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Instance), sizeof(Il2CppSharedGenericObject*));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6975));
	}

IL_0039:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 6976));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeRenderGraphPass_1_Execute_mB841EEE608841101D4DE6E1DC9ADE20A2E0B0306_gshared (ComputeRenderGraphPass_1_tE2D8EC8270679EC54415778E7514EE262C3DE338* __this, InternalRenderGraphContext_t7197268EBA8C241EB895B070A5E0C71B111D7503* ___0_renderGraphContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputeRenderGraphPass_1_tAEE1C7D1A235A6E5CED6E0D57146DA61F70D4707_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_renderGraphContext));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54327));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54328));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54329));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54330));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		ComputeGraphContext_t4C18687C77814418D826A1B68C0D02781A9DFC7F* L_0 = ((ComputeRenderGraphPass_1_tE2D8EC8270679EC54415778E7514EE262C3DE338_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)))->___c;
		InternalRenderGraphContext_t7197268EBA8C241EB895B070A5E0C71B111D7503* L_1 = ___0_renderGraphContext;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54331));
		NullCheck(L_0);
		ComputeGraphContext_FromInternalContext_m51483B16D9535D0F456D567B343283A6E0866C39(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54331));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54332));
		BaseRenderFunc_2_t6B00DB2FCD05EF9F3F4030193ECC944BBD329ACA* L_2 = ((BaseRenderGraphPass_2_t0F0305B903C11DF38DEC749353A76FDBA5A26DEB*)__this)->___renderFunc;
		Il2CppSharedGenericObject* L_3 = ((BaseRenderGraphPass_2_t0F0305B903C11DF38DEC749353A76FDBA5A26DEB*)__this)->___data;
		ComputeGraphContext_t4C18687C77814418D826A1B68C0D02781A9DFC7F* L_4 = ((ComputeRenderGraphPass_1_tE2D8EC8270679EC54415778E7514EE262C3DE338_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)))->___c;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54333));
		NullCheck(L_2);
		BaseRenderFunc_2_Invoke_mCF0E7DED5B5B2D26C2EFF9EA27EB65B281C5CE89_inline(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54333));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54334));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeRenderGraphPass_1_Release_m66F1D6F822BC6E0085573CED3503DC0661BBF14F_gshared (ComputeRenderGraphPass_1_tE2D8EC8270679EC54415778E7514EE262C3DE338* __this, RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437* ___0_pool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputeRenderGraphPass_1_tAEE1C7D1A235A6E5CED6E0D57146DA61F70D4707_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_pool));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54335));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54336));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54337));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54338));
		RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437* L_0 = ___0_pool;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54339));
		NullCheck((BaseRenderGraphPass_2_t0F0305B903C11DF38DEC749353A76FDBA5A26DEB*)__this);
		BaseRenderGraphPass_2_Release_mE359AFB8BB9EC4A4F2628BB79F3BE2259967C330_inline((BaseRenderGraphPass_2_t0F0305B903C11DF38DEC749353A76FDBA5A26DEB*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54339));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54340));
		RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437* L_1 = ___0_pool;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54341));
		NullCheck(L_1);
		RenderGraphObjectPool_Release_TisComputeRenderGraphPass_1_tE2D8EC8270679EC54415778E7514EE262C3DE338_m795F1E0FF349B85F697181C24E7C8102811DD635(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54341));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54342));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeRenderGraphPass_1__ctor_mEA11C0425A3189EB66097B58445820819A34DBC2_gshared (ComputeRenderGraphPass_1_tE2D8EC8270679EC54415778E7514EE262C3DE338* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		BaseRenderGraphPass_2__ctor_m6CB61F049A2B7B002BBEC964291E81F5244C9575((BaseRenderGraphPass_2_t0F0305B903C11DF38DEC749353A76FDBA5A26DEB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeRenderGraphPass_1__cctor_m21A38341E90C975652A948A8F01F5CE8B8AE9553_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputeGraphContext_t4C18687C77814418D826A1B68C0D02781A9DFC7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54343));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54344));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54345));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54346));
		ComputeGraphContext_t4C18687C77814418D826A1B68C0D02781A9DFC7F* L_0 = (ComputeGraphContext_t4C18687C77814418D826A1B68C0D02781A9DFC7F*)il2cpp_codegen_object_new(ComputeGraphContext_t4C18687C77814418D826A1B68C0D02781A9DFC7F_il2cpp_TypeInfo_var);
		ComputeGraphContext__ctor_m05C8B9C8C98B49AC2F62765FEA1961B0AB1CB492(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54346));
		((ComputeRenderGraphPass_1_tE2D8EC8270679EC54415778E7514EE262C3DE338_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___c = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ComputeRenderGraphPass_1_tE2D8EC8270679EC54415778E7514EE262C3DE338_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___c), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseRenderFunc_2_Invoke_m9D5C67D1ED7DB7B83C160EED4EE4A9653E5F80F6_gshared_inline (BaseRenderFunc_2_tC11CA5334BC198AD71E615336FD765AFE7B1E62E* __this, Il2CppSharedGenericObject* ___0_data, Il2CppFullySharedGenericAny ___1_renderGraphContext, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_data, ___1_renderGraphContext, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseRenderGraphPass_2_Release_mC9F93A9D5F566BFF5E6F6E7BF6667C828B96820E_gshared_inline (BaseRenderGraphPass_2_t407183B2A4BB1007A162B44C240D1E1C26C7FB21* __this, RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437* ___0_pool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRenderGraphPass_2_t001F73D210FFBFF4E1F02D807948F7D189B688BA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_pool));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54289));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54290));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54291));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54292));
		RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437* L_0 = ___0_pool;
		Il2CppSharedGenericObject* L_1 = __this->___data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54293));
		NullCheck(L_0);
		RenderGraphObjectPool_Release_TisIl2CppSharedGenericObject_m41E89F411886EB72C412391048C5DFBB4BF6BFFC(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54293));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54294));
		Il2CppSharedGenericObject** L_2 = (Il2CppSharedGenericObject**)(&__this->___data);
		il2cpp_codegen_initobj(L_2, sizeof(Il2CppSharedGenericObject*));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54295));
		__this->___renderFunc = (BaseRenderFunc_2_tC11CA5334BC198AD71E615336FD765AFE7B1E62E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___renderFunc), (void*)(BaseRenderFunc_2_tC11CA5334BC198AD71E615336FD765AFE7B1E62E*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 54296));
		return;
	}
}
