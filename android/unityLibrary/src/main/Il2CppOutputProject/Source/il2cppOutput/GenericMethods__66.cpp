#include "pch-cpp.hpp"





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

struct Action_1_tDE27E4087E2A730577614D92D9245ECECFF1E065;
struct Action_1_tB5D3D80BDD52AC40FDE982ADB98F46D82B14A520;
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Action_1_t818E1CDEF1E2320BB767719C88DA5BD3914C976A;
struct Action_1_tB2B1169F57221DF3B9DEE70DB08786B17BCD83E6;
struct Dictionary_2_tEC8B84C0B165859CC7198B04F1CF7D7E35B7D3D5;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct Func_1_tFB20DFB5FD830D27B2DDBF2A0616D8408894BCEF;
struct Func_1_t3562516825219E4C5D56D7A5AA4DA5E7118E4032;
struct Func_1_t566D4A654882E282E54CDC3A001E05486F913903;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_1_tFF3E2DF3986A7CF057331EB1EAFA404E157A2C83;
struct Func_1_tD3AF27A4BBE4E3EF996041AFA0AFF8F24F6BBF71;
struct GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct ISignatureTypeProvider_2_t3070F0B7FC64369BFC60135B0954266AACAC228D;
struct List_1_t43D738AFE227B1EA62303EE615C3FE9260ACD199;
struct List_1_t3BF16D6F174CEAD80666CDEE841271670BD0CAD0;
struct List_1_t948BEA99EC45AC7F41C18ABA972FF722CFD0DDAD;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_tEBC1DC7981B70AEF800BCCA8CEED784343A92D05;
struct List_1_t81598647AF68AC640322094DA94B10BB77712178;
struct ObjectPool_1_t2184AA1C7CACBE62DF11E0F26B73D85AC246F2E1;
struct ObjectPool_1_tDF1CBAC8F45FE7A38564D25A887E0824155AB946;
struct ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3;
struct ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340;
struct ObjectPool_1_t252DACFE69441FA4DE4E098755CA048E3B7877BA;
struct SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ProjectionInfoU5BU5D_tB2A3FA52462779A586655B2A8C9D4C520DB191DF;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct DebugMetadataHeader_t1310A29B76236776EBECB5CB6B6BECC3E35CA83A;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2;
struct IPropertyBagVisitor_tE8B9B7E14DBF946E6E65BD0ECC8679268715BF5A;
struct IPropertyVisitor_tF3D6EE64B9F811F9B4E5001E70D1EAEB3CA8B8FC;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F;
struct MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63;
struct MethodInfo_t;
struct NamespaceCache_t56DBC3FC7454384FA42D4EFA4E16220FB295F105;
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446;
struct String_t;
struct Type_t;
struct VirtualHeap_t2F4EC50A35BF4E06CBB9F1B1632573752AF1B339;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540;
struct ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C RuntimeClass* GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Get_m4A4F6AD2B655F16D104EC84EA2DA1D9FE14B2684_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Get_mF6A30FA72FBF2E3181811AB561B34C17C4B9CA7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Release_m00352A4DEBA12CD10F87E0CF9C13F4A3D4D74946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Release_m6F09F7230B34474465ADC6A65AAAC4124B843AAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PathVisitor_get_ReturnCode_m900403F09B0392B4D8C2E2E0EBD06148FCFA2734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PathVisitor_set_Path_m8E3F004534B73D33C70C3BD20729F5987F11627B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PathVisitor_set_ReadonlyVisit_m852F4CA7A95317B2AA5CBC9AB914037FC5A0CABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectPool_1_t6568D3E8B246E33BDECAEAB6801BDB4C954A4E70_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
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
struct ObjectPool_1_t2184AA1C7CACBE62DF11E0F26B73D85AC246F2E1  : public RuntimeObject
{
	List_1_t43D738AFE227B1EA62303EE615C3FE9260ACD199* ___m_List;
	Func_1_tFB20DFB5FD830D27B2DDBF2A0616D8408894BCEF* ___m_CreateFunc;
	Action_1_tDE27E4087E2A730577614D92D9245ECECFF1E065* ___m_ActionOnGet;
	Action_1_tDE27E4087E2A730577614D92D9245ECECFF1E065* ___m_ActionOnRelease;
	Action_1_tDE27E4087E2A730577614D92D9245ECECFF1E065* ___m_ActionOnDestroy;
	int32_t ___m_MaxSize;
	bool ___m_CollectionCheck;
	GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* ___m_FreshlyReleased;
	int32_t ___U3CCountAllU3Ek__BackingField;
};
struct ObjectPool_1_tDF1CBAC8F45FE7A38564D25A887E0824155AB946  : public RuntimeObject
{
	List_1_t3BF16D6F174CEAD80666CDEE841271670BD0CAD0* ___m_List;
	Func_1_t3562516825219E4C5D56D7A5AA4DA5E7118E4032* ___m_CreateFunc;
	Action_1_tB5D3D80BDD52AC40FDE982ADB98F46D82B14A520* ___m_ActionOnGet;
	Action_1_tB5D3D80BDD52AC40FDE982ADB98F46D82B14A520* ___m_ActionOnRelease;
	Action_1_tB5D3D80BDD52AC40FDE982ADB98F46D82B14A520* ___m_ActionOnDestroy;
	int32_t ___m_MaxSize;
	bool ___m_CollectionCheck;
	SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE* ___m_FreshlyReleased;
	int32_t ___U3CCountAllU3Ek__BackingField;
};
struct ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3  : public RuntimeObject
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___m_List;
	Func_1_t566D4A654882E282E54CDC3A001E05486F913903* ___m_CreateFunc;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___m_ActionOnGet;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___m_ActionOnRelease;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___m_ActionOnDestroy;
	int32_t ___m_MaxSize;
	bool ___m_CollectionCheck;
	Il2CppSharedGenericObject* ___m_FreshlyReleased;
	int32_t ___U3CCountAllU3Ek__BackingField;
};
struct ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340  : public RuntimeObject
{
	List_1_tEBC1DC7981B70AEF800BCCA8CEED784343A92D05* ___m_List;
	Func_1_tFF3E2DF3986A7CF057331EB1EAFA404E157A2C83* ___m_CreateFunc;
	Action_1_t818E1CDEF1E2320BB767719C88DA5BD3914C976A* ___m_ActionOnGet;
	Action_1_t818E1CDEF1E2320BB767719C88DA5BD3914C976A* ___m_ActionOnRelease;
	Action_1_t818E1CDEF1E2320BB767719C88DA5BD3914C976A* ___m_ActionOnDestroy;
	int32_t ___m_MaxSize;
	bool ___m_CollectionCheck;
	GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* ___m_FreshlyReleased;
	int32_t ___U3CCountAllU3Ek__BackingField;
};
struct ObjectPool_1_t252DACFE69441FA4DE4E098755CA048E3B7877BA  : public RuntimeObject
{
	List_1_t81598647AF68AC640322094DA94B10BB77712178* ___m_List;
	Func_1_tD3AF27A4BBE4E3EF996041AFA0AFF8F24F6BBF71* ___m_CreateFunc;
	Action_1_tB2B1169F57221DF3B9DEE70DB08786B17BCD83E6* ___m_ActionOnGet;
	Action_1_tB2B1169F57221DF3B9DEE70DB08786B17BCD83E6* ___m_ActionOnRelease;
	Action_1_tB2B1169F57221DF3B9DEE70DB08786B17BCD83E6* ___m_ActionOnDestroy;
	int32_t ___m_MaxSize;
	bool ___m_CollectionCheck;
	ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272* ___m_FreshlyReleased;
	int32_t ___U3CCountAllU3Ek__BackingField;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct PropertyContainer_tD782808FE67EA532AEFD2BC7974D5F8419905076  : public RuntimeObject
{
};
struct PropertyVisitor_t70A043FFF04B0F628C2468238C3087A109336AD4  : public RuntimeObject
{
	List_1_t948BEA99EC45AC7F41C18ABA972FF722CFD0DDAD* ___m_Adapters;
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
struct ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array;
};
typedef Il2CppFullySharedGenericStruct SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A;
struct BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F 
{
	uint32_t ____value;
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
struct MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 
{
	uint8_t* ___Pointer;
	int32_t ___Length;
};
struct PropertyDefinition_t88695666F682918458265E17792F5759C9B7E04E 
{
	MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F* ____reader;
	int32_t ____rowId;
};
struct PropertyDefinition_t88695666F682918458265E17792F5759C9B7E04E_marshaled_pinvoke
{
	MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F* ____reader;
	int32_t ____rowId;
};
struct PropertyDefinition_t88695666F682918458265E17792F5759C9B7E04E_marshaled_com
{
	MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F* ____reader;
	int32_t ____rowId;
};
struct SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC 
{
	uint8_t ____rawValue;
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
typedef Il2CppFullySharedGenericStruct MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB;
struct AssemblyOSTableReader_tA3571EE1819AF6C135BBBB87F931D0084725B893 
{
	int32_t ___NumberOfRows;
	int32_t ____OSPlatformIdOffset;
	int32_t ____OSMajorVersionIdOffset;
	int32_t ____OSMinorVersionIdOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct AssemblyProcessorTableReader_tFBE9A5DA145EDAFB010998B99430D1C06891A1EA 
{
	int32_t ___NumberOfRows;
	int32_t ____ProcessorOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct AssemblyRefOSTableReader_t1F6EC2F94A3370428D83AD4DEAA46A7218E9C6A1 
{
	int32_t ___NumberOfRows;
	bool ____IsAssemblyRefTableRowRefSizeSmall;
	int32_t ____OSPlatformIdOffset;
	int32_t ____OSMajorVersionIdOffset;
	int32_t ____OSMinorVersionIdOffset;
	int32_t ____AssemblyRefOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct AssemblyRefOSTableReader_t1F6EC2F94A3370428D83AD4DEAA46A7218E9C6A1_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsAssemblyRefTableRowRefSizeSmall;
	int32_t ____OSPlatformIdOffset;
	int32_t ____OSMajorVersionIdOffset;
	int32_t ____OSMinorVersionIdOffset;
	int32_t ____AssemblyRefOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct AssemblyRefOSTableReader_t1F6EC2F94A3370428D83AD4DEAA46A7218E9C6A1_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsAssemblyRefTableRowRefSizeSmall;
	int32_t ____OSPlatformIdOffset;
	int32_t ____OSMajorVersionIdOffset;
	int32_t ____OSMinorVersionIdOffset;
	int32_t ____AssemblyRefOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct AssemblyRefProcessorTableReader_tA66A408A3A629191811E1BB5C9E560F49B6D5B45 
{
	int32_t ___NumberOfRows;
	bool ____IsAssemblyRefTableRowSizeSmall;
	int32_t ____ProcessorOffset;
	int32_t ____AssemblyRefOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct AssemblyRefProcessorTableReader_tA66A408A3A629191811E1BB5C9E560F49B6D5B45_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsAssemblyRefTableRowSizeSmall;
	int32_t ____ProcessorOffset;
	int32_t ____AssemblyRefOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct AssemblyRefProcessorTableReader_tA66A408A3A629191811E1BB5C9E560F49B6D5B45_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsAssemblyRefTableRowSizeSmall;
	int32_t ____ProcessorOffset;
	int32_t ____AssemblyRefOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct AssemblyRefTableReader_tB36E4193B3B5F2006CE16B169F419F38754AA5C9 
{
	int32_t ___NumberOfNonVirtualRows;
	int32_t ___NumberOfVirtualRows;
	bool ____IsStringHeapRefSizeSmall;
	bool ____IsBlobHeapRefSizeSmall;
	int32_t ____MajorVersionOffset;
	int32_t ____MinorVersionOffset;
	int32_t ____BuildNumberOffset;
	int32_t ____RevisionNumberOffset;
	int32_t ____FlagsOffset;
	int32_t ____PublicKeyOrTokenOffset;
	int32_t ____NameOffset;
	int32_t ____CultureOffset;
	int32_t ____HashValueOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct AssemblyRefTableReader_tB36E4193B3B5F2006CE16B169F419F38754AA5C9_marshaled_pinvoke
{
	int32_t ___NumberOfNonVirtualRows;
	int32_t ___NumberOfVirtualRows;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____MajorVersionOffset;
	int32_t ____MinorVersionOffset;
	int32_t ____BuildNumberOffset;
	int32_t ____RevisionNumberOffset;
	int32_t ____FlagsOffset;
	int32_t ____PublicKeyOrTokenOffset;
	int32_t ____NameOffset;
	int32_t ____CultureOffset;
	int32_t ____HashValueOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct AssemblyRefTableReader_tB36E4193B3B5F2006CE16B169F419F38754AA5C9_marshaled_com
{
	int32_t ___NumberOfNonVirtualRows;
	int32_t ___NumberOfVirtualRows;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____MajorVersionOffset;
	int32_t ____MinorVersionOffset;
	int32_t ____BuildNumberOffset;
	int32_t ____RevisionNumberOffset;
	int32_t ____FlagsOffset;
	int32_t ____PublicKeyOrTokenOffset;
	int32_t ____NameOffset;
	int32_t ____CultureOffset;
	int32_t ____HashValueOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct AssemblyTableReader_t24C8E795A28C062EB478F575CE85BF2129210CE3 
{
	int32_t ___NumberOfRows;
	bool ____IsStringHeapRefSizeSmall;
	bool ____IsBlobHeapRefSizeSmall;
	int32_t ____HashAlgIdOffset;
	int32_t ____MajorVersionOffset;
	int32_t ____MinorVersionOffset;
	int32_t ____BuildNumberOffset;
	int32_t ____RevisionNumberOffset;
	int32_t ____FlagsOffset;
	int32_t ____PublicKeyOffset;
	int32_t ____NameOffset;
	int32_t ____CultureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct AssemblyTableReader_t24C8E795A28C062EB478F575CE85BF2129210CE3_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____HashAlgIdOffset;
	int32_t ____MajorVersionOffset;
	int32_t ____MinorVersionOffset;
	int32_t ____BuildNumberOffset;
	int32_t ____RevisionNumberOffset;
	int32_t ____FlagsOffset;
	int32_t ____PublicKeyOffset;
	int32_t ____NameOffset;
	int32_t ____CultureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct AssemblyTableReader_t24C8E795A28C062EB478F575CE85BF2129210CE3_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____HashAlgIdOffset;
	int32_t ____MajorVersionOffset;
	int32_t ____MinorVersionOffset;
	int32_t ____BuildNumberOffset;
	int32_t ____RevisionNumberOffset;
	int32_t ____FlagsOffset;
	int32_t ____PublicKeyOffset;
	int32_t ____NameOffset;
	int32_t ____CultureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct BlobHeap_t0AB5C6DBC3E2D91683A5750C0393957D20708DE4 
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
	VirtualHeap_t2F4EC50A35BF4E06CBB9F1B1632573752AF1B339* ____lazyVirtualHeap;
};
struct BlobHeap_t0AB5C6DBC3E2D91683A5750C0393957D20708DE4_marshaled_pinvoke
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
	VirtualHeap_t2F4EC50A35BF4E06CBB9F1B1632573752AF1B339* ____lazyVirtualHeap;
};
struct BlobHeap_t0AB5C6DBC3E2D91683A5750C0393957D20708DE4_marshaled_com
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
	VirtualHeap_t2F4EC50A35BF4E06CBB9F1B1632573752AF1B339* ____lazyVirtualHeap;
};
struct BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203 
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ____block;
	uint8_t* ____endPointer;
	uint8_t* ____currentPointer;
};
struct ClassLayoutTableReader_t32F12764AB213671F128189ACD3319FBBB0D093B 
{
	int32_t ___NumberOfRows;
	bool ____IsTypeDefTableRowRefSizeSmall;
	int32_t ____PackagingSizeOffset;
	int32_t ____ClassSizeOffset;
	int32_t ____ParentOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ClassLayoutTableReader_t32F12764AB213671F128189ACD3319FBBB0D093B_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsTypeDefTableRowRefSizeSmall;
	int32_t ____PackagingSizeOffset;
	int32_t ____ClassSizeOffset;
	int32_t ____ParentOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ClassLayoutTableReader_t32F12764AB213671F128189ACD3319FBBB0D093B_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsTypeDefTableRowRefSizeSmall;
	int32_t ____PackagingSizeOffset;
	int32_t ____ClassSizeOffset;
	int32_t ____ParentOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ConstantTableReader_tF215F0AD08D774EF14D2523CFD7330C347DCE2C8 
{
	int32_t ___NumberOfRows;
	bool ____IsHasConstantRefSizeSmall;
	bool ____IsBlobHeapRefSizeSmall;
	int32_t ____TypeOffset;
	int32_t ____ParentOffset;
	int32_t ____ValueOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ConstantTableReader_tF215F0AD08D774EF14D2523CFD7330C347DCE2C8_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsHasConstantRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____TypeOffset;
	int32_t ____ParentOffset;
	int32_t ____ValueOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ConstantTableReader_tF215F0AD08D774EF14D2523CFD7330C347DCE2C8_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsHasConstantRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____TypeOffset;
	int32_t ____ParentOffset;
	int32_t ____ValueOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct CustomAttributeTableReader_t11C02FBA392005507A695E48A78400FBF4007C4D 
{
	int32_t ___NumberOfRows;
	bool ____IsHasCustomAttributeRefSizeSmall;
	bool ____IsCustomAttributeTypeRefSizeSmall;
	bool ____IsBlobHeapRefSizeSmall;
	int32_t ____ParentOffset;
	int32_t ____TypeOffset;
	int32_t ____ValueOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___PtrTable;
};
struct CustomAttributeTableReader_t11C02FBA392005507A695E48A78400FBF4007C4D_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsHasCustomAttributeRefSizeSmall;
	int32_t ____IsCustomAttributeTypeRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____ParentOffset;
	int32_t ____TypeOffset;
	int32_t ____ValueOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
	Il2CppSafeArray* ___PtrTable;
};
struct CustomAttributeTableReader_t11C02FBA392005507A695E48A78400FBF4007C4D_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsHasCustomAttributeRefSizeSmall;
	int32_t ____IsCustomAttributeTypeRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____ParentOffset;
	int32_t ____TypeOffset;
	int32_t ____ValueOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
	Il2CppSafeArray* ___PtrTable;
};
struct CustomDebugInformationTableReader_tC23247E3A3A949E33711E707CF79D0927D89DC57 
{
	int32_t ___NumberOfRows;
	bool ____isHasCustomDebugInformationRefSizeSmall;
	bool ____isGuidHeapRefSizeSmall;
	bool ____isBlobHeapRefSizeSmall;
	int32_t ____kindOffset;
	int32_t ____valueOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct CustomDebugInformationTableReader_tC23247E3A3A949E33711E707CF79D0927D89DC57_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____isHasCustomDebugInformationRefSizeSmall;
	int32_t ____isGuidHeapRefSizeSmall;
	int32_t ____isBlobHeapRefSizeSmall;
	int32_t ____kindOffset;
	int32_t ____valueOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct CustomDebugInformationTableReader_tC23247E3A3A949E33711E707CF79D0927D89DC57_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____isHasCustomDebugInformationRefSizeSmall;
	int32_t ____isGuidHeapRefSizeSmall;
	int32_t ____isBlobHeapRefSizeSmall;
	int32_t ____kindOffset;
	int32_t ____valueOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct DeclSecurityTableReader_t859F98173FA0710776882E55159D6407FBE82FAE 
{
	int32_t ___NumberOfRows;
	bool ____IsHasDeclSecurityRefSizeSmall;
	bool ____IsBlobHeapRefSizeSmall;
	int32_t ____ActionOffset;
	int32_t ____ParentOffset;
	int32_t ____PermissionSetOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct DeclSecurityTableReader_t859F98173FA0710776882E55159D6407FBE82FAE_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsHasDeclSecurityRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____ActionOffset;
	int32_t ____ParentOffset;
	int32_t ____PermissionSetOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct DeclSecurityTableReader_t859F98173FA0710776882E55159D6407FBE82FAE_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsHasDeclSecurityRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____ActionOffset;
	int32_t ____ParentOffset;
	int32_t ____PermissionSetOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
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
struct DocumentTableReader_t761BADFDDCB932C96D8B44DF0439FB1BB4A1EFB8 
{
	int32_t ___NumberOfRows;
	bool ____isGuidHeapRefSizeSmall;
	bool ____isBlobHeapRefSizeSmall;
	int32_t ____hashAlgorithmOffset;
	int32_t ____hashOffset;
	int32_t ____languageOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct DocumentTableReader_t761BADFDDCB932C96D8B44DF0439FB1BB4A1EFB8_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____isGuidHeapRefSizeSmall;
	int32_t ____isBlobHeapRefSizeSmall;
	int32_t ____hashAlgorithmOffset;
	int32_t ____hashOffset;
	int32_t ____languageOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct DocumentTableReader_t761BADFDDCB932C96D8B44DF0439FB1BB4A1EFB8_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____isGuidHeapRefSizeSmall;
	int32_t ____isBlobHeapRefSizeSmall;
	int32_t ____hashAlgorithmOffset;
	int32_t ____hashOffset;
	int32_t ____languageOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct EnCLogTableReader_t5A17E6D4BEFDCAD419D4C887FC79C22EC2E79C9C 
{
	int32_t ___NumberOfRows;
	int32_t ____TokenOffset;
	int32_t ____FuncCodeOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct EnCMapTableReader_t54A2DFAD95F462E39E565C8984937F9AF15A49CB 
{
	int32_t ___NumberOfRows;
	int32_t ____TokenOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct EventMapTableReader_t073ECFB5FFA1D8060E152377500FA7D1D159D1AF 
{
	int32_t ___NumberOfRows;
	bool ____IsTypeDefTableRowRefSizeSmall;
	bool ____IsEventRefSizeSmall;
	int32_t ____ParentOffset;
	int32_t ____EventListOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct EventMapTableReader_t073ECFB5FFA1D8060E152377500FA7D1D159D1AF_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsTypeDefTableRowRefSizeSmall;
	int32_t ____IsEventRefSizeSmall;
	int32_t ____ParentOffset;
	int32_t ____EventListOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct EventMapTableReader_t073ECFB5FFA1D8060E152377500FA7D1D159D1AF_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsTypeDefTableRowRefSizeSmall;
	int32_t ____IsEventRefSizeSmall;
	int32_t ____ParentOffset;
	int32_t ____EventListOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct EventPtrTableReader_tF8C994285281E201BE7FF94CC8F7207721F0FC40 
{
	int32_t ___NumberOfRows;
	bool ____IsEventTableRowRefSizeSmall;
	int32_t ____EventOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct EventPtrTableReader_tF8C994285281E201BE7FF94CC8F7207721F0FC40_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsEventTableRowRefSizeSmall;
	int32_t ____EventOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct EventPtrTableReader_tF8C994285281E201BE7FF94CC8F7207721F0FC40_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsEventTableRowRefSizeSmall;
	int32_t ____EventOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct EventTableReader_t5DAB467B333FE05F54ECDB2D0DE03234E44EA6FA 
{
	int32_t ___NumberOfRows;
	bool ____IsTypeDefOrRefRefSizeSmall;
	bool ____IsStringHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____EventTypeOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct EventTableReader_t5DAB467B333FE05F54ECDB2D0DE03234E44EA6FA_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsTypeDefOrRefRefSizeSmall;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____EventTypeOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct EventTableReader_t5DAB467B333FE05F54ECDB2D0DE03234E44EA6FA_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsTypeDefOrRefRefSizeSmall;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____EventTypeOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ExportedTypeTableReader_t1F6601662AFE295FA0C3733C7DBE77BF78BFBE1B 
{
	int32_t ___NumberOfRows;
	bool ____IsImplementationRefSizeSmall;
	bool ____IsStringHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____TypeDefIdOffset;
	int32_t ____TypeNameOffset;
	int32_t ____TypeNamespaceOffset;
	int32_t ____ImplementationOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ExportedTypeTableReader_t1F6601662AFE295FA0C3733C7DBE77BF78BFBE1B_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsImplementationRefSizeSmall;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____TypeDefIdOffset;
	int32_t ____TypeNameOffset;
	int32_t ____TypeNamespaceOffset;
	int32_t ____ImplementationOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ExportedTypeTableReader_t1F6601662AFE295FA0C3733C7DBE77BF78BFBE1B_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsImplementationRefSizeSmall;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____TypeDefIdOffset;
	int32_t ____TypeNameOffset;
	int32_t ____TypeNamespaceOffset;
	int32_t ____ImplementationOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct FieldLayoutTableReader_t5FC9A5C9C15088F246246B207FE89AA522B2E545 
{
	int32_t ___NumberOfRows;
	bool ____IsFieldTableRowRefSizeSmall;
	int32_t ____OffsetOffset;
	int32_t ____FieldOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct FieldLayoutTableReader_t5FC9A5C9C15088F246246B207FE89AA522B2E545_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsFieldTableRowRefSizeSmall;
	int32_t ____OffsetOffset;
	int32_t ____FieldOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct FieldLayoutTableReader_t5FC9A5C9C15088F246246B207FE89AA522B2E545_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsFieldTableRowRefSizeSmall;
	int32_t ____OffsetOffset;
	int32_t ____FieldOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct FieldMarshalTableReader_t42A58AAB651FAC9B449334B3188DC601D7D72C14 
{
	int32_t ___NumberOfRows;
	bool ____IsHasFieldMarshalRefSizeSmall;
	bool ____IsBlobHeapRefSizeSmall;
	int32_t ____ParentOffset;
	int32_t ____NativeTypeOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct FieldMarshalTableReader_t42A58AAB651FAC9B449334B3188DC601D7D72C14_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsHasFieldMarshalRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____ParentOffset;
	int32_t ____NativeTypeOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct FieldMarshalTableReader_t42A58AAB651FAC9B449334B3188DC601D7D72C14_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsHasFieldMarshalRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____ParentOffset;
	int32_t ____NativeTypeOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct FieldPtrTableReader_t65A798873C6DF4BFEA45EBA8BF4A791AF74CFE51 
{
	int32_t ___NumberOfRows;
	bool ____IsFieldTableRowRefSizeSmall;
	int32_t ____FieldOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct FieldPtrTableReader_t65A798873C6DF4BFEA45EBA8BF4A791AF74CFE51_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsFieldTableRowRefSizeSmall;
	int32_t ____FieldOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct FieldPtrTableReader_t65A798873C6DF4BFEA45EBA8BF4A791AF74CFE51_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsFieldTableRowRefSizeSmall;
	int32_t ____FieldOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct FieldRVATableReader_t69F7F4120FB5683A3247E097D27BBC0ED679699D 
{
	int32_t ___NumberOfRows;
	bool ____IsFieldTableRowRefSizeSmall;
	int32_t ____RvaOffset;
	int32_t ____FieldOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct FieldRVATableReader_t69F7F4120FB5683A3247E097D27BBC0ED679699D_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsFieldTableRowRefSizeSmall;
	int32_t ____RvaOffset;
	int32_t ____FieldOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct FieldRVATableReader_t69F7F4120FB5683A3247E097D27BBC0ED679699D_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsFieldTableRowRefSizeSmall;
	int32_t ____RvaOffset;
	int32_t ____FieldOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct FieldTableReader_tA995381BC419BD7842ECA60D2228252D6DA49358 
{
	int32_t ___NumberOfRows;
	bool ____IsStringHeapRefSizeSmall;
	bool ____IsBlobHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____SignatureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct FieldTableReader_tA995381BC419BD7842ECA60D2228252D6DA49358_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____SignatureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct FieldTableReader_tA995381BC419BD7842ECA60D2228252D6DA49358_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____SignatureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct FileTableReader_tF28A6D293DE3659EE51A32BA03B46B52CF239BF8 
{
	int32_t ___NumberOfRows;
	bool ____IsStringHeapRefSizeSmall;
	bool ____IsBlobHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____HashValueOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct FileTableReader_tF28A6D293DE3659EE51A32BA03B46B52CF239BF8_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____HashValueOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct FileTableReader_tF28A6D293DE3659EE51A32BA03B46B52CF239BF8_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____HashValueOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct GenericParamConstraintTableReader_t97FCE5F5D811FE04C53A1A269B6C204CE44325E4 
{
	int32_t ___NumberOfRows;
	bool ____IsGenericParamTableRowRefSizeSmall;
	bool ____IsTypeDefOrRefRefSizeSmall;
	int32_t ____OwnerOffset;
	int32_t ____ConstraintOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct GenericParamConstraintTableReader_t97FCE5F5D811FE04C53A1A269B6C204CE44325E4_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsGenericParamTableRowRefSizeSmall;
	int32_t ____IsTypeDefOrRefRefSizeSmall;
	int32_t ____OwnerOffset;
	int32_t ____ConstraintOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct GenericParamConstraintTableReader_t97FCE5F5D811FE04C53A1A269B6C204CE44325E4_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsGenericParamTableRowRefSizeSmall;
	int32_t ____IsTypeDefOrRefRefSizeSmall;
	int32_t ____OwnerOffset;
	int32_t ____ConstraintOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct GenericParamTableReader_tFF8D3A999D8086AD164E92B72A69B4CD7CB4CFC1 
{
	int32_t ___NumberOfRows;
	bool ____IsTypeOrMethodDefRefSizeSmall;
	bool ____IsStringHeapRefSizeSmall;
	int32_t ____NumberOffset;
	int32_t ____FlagsOffset;
	int32_t ____OwnerOffset;
	int32_t ____NameOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct GenericParamTableReader_tFF8D3A999D8086AD164E92B72A69B4CD7CB4CFC1_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsTypeOrMethodDefRefSizeSmall;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____NumberOffset;
	int32_t ____FlagsOffset;
	int32_t ____OwnerOffset;
	int32_t ____NameOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct GenericParamTableReader_tFF8D3A999D8086AD164E92B72A69B4CD7CB4CFC1_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsTypeOrMethodDefRefSizeSmall;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____NumberOffset;
	int32_t ____FlagsOffset;
	int32_t ____OwnerOffset;
	int32_t ____NameOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct GuidHeap_t881A71513711FC2AC318553C3A88DF5850A588BA 
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ImplMapTableReader_t9D5EBD5D8EAB42F2D4D5D90FCFDE372F814C7C96 
{
	int32_t ___NumberOfRows;
	bool ____IsModuleRefTableRowRefSizeSmall;
	bool ____IsMemberForwardRowRefSizeSmall;
	bool ____IsStringHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____MemberForwardedOffset;
	int32_t ____ImportNameOffset;
	int32_t ____ImportScopeOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ImplMapTableReader_t9D5EBD5D8EAB42F2D4D5D90FCFDE372F814C7C96_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsModuleRefTableRowRefSizeSmall;
	int32_t ____IsMemberForwardRowRefSizeSmall;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____MemberForwardedOffset;
	int32_t ____ImportNameOffset;
	int32_t ____ImportScopeOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ImplMapTableReader_t9D5EBD5D8EAB42F2D4D5D90FCFDE372F814C7C96_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsModuleRefTableRowRefSizeSmall;
	int32_t ____IsMemberForwardRowRefSizeSmall;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____MemberForwardedOffset;
	int32_t ____ImportNameOffset;
	int32_t ____ImportScopeOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ImportScopeTableReader_t661D8292C0E2B83F9CB0E50B9E0D6A08AC1B05F5 
{
	int32_t ___NumberOfRows;
	bool ____isImportScopeRefSizeSmall;
	bool ____isBlobHeapRefSizeSmall;
	int32_t ____importsOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ImportScopeTableReader_t661D8292C0E2B83F9CB0E50B9E0D6A08AC1B05F5_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____isImportScopeRefSizeSmall;
	int32_t ____isBlobHeapRefSizeSmall;
	int32_t ____importsOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ImportScopeTableReader_t661D8292C0E2B83F9CB0E50B9E0D6A08AC1B05F5_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____isImportScopeRefSizeSmall;
	int32_t ____isBlobHeapRefSizeSmall;
	int32_t ____importsOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct InterfaceImplTableReader_tE592285A5078E3FD3B8D3281383372BE52669C69 
{
	int32_t ___NumberOfRows;
	bool ____IsTypeDefTableRowRefSizeSmall;
	bool ____IsTypeDefOrRefRefSizeSmall;
	int32_t ____ClassOffset;
	int32_t ____InterfaceOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct InterfaceImplTableReader_tE592285A5078E3FD3B8D3281383372BE52669C69_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsTypeDefTableRowRefSizeSmall;
	int32_t ____IsTypeDefOrRefRefSizeSmall;
	int32_t ____ClassOffset;
	int32_t ____InterfaceOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct InterfaceImplTableReader_tE592285A5078E3FD3B8D3281383372BE52669C69_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsTypeDefTableRowRefSizeSmall;
	int32_t ____IsTypeDefOrRefRefSizeSmall;
	int32_t ____ClassOffset;
	int32_t ____InterfaceOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct LocalConstantTableReader_t1FE50FEA7B7F6DCE571D9E6B5F142B33F3113F99 
{
	int32_t ___NumberOfRows;
	bool ____isStringHeapRefSizeSmall;
	bool ____isBlobHeapRefSizeSmall;
	int32_t ____signatureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct LocalConstantTableReader_t1FE50FEA7B7F6DCE571D9E6B5F142B33F3113F99_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____isStringHeapRefSizeSmall;
	int32_t ____isBlobHeapRefSizeSmall;
	int32_t ____signatureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct LocalConstantTableReader_t1FE50FEA7B7F6DCE571D9E6B5F142B33F3113F99_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____isStringHeapRefSizeSmall;
	int32_t ____isBlobHeapRefSizeSmall;
	int32_t ____signatureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct LocalScopeTableReader_t3385D5D14A400B212C2F9581AFBF1B21200C4098 
{
	int32_t ___NumberOfRows;
	bool ____isMethodRefSmall;
	bool ____isImportScopeRefSmall;
	bool ____isLocalConstantRefSmall;
	bool ____isLocalVariableRefSmall;
	int32_t ____importScopeOffset;
	int32_t ____variableListOffset;
	int32_t ____constantListOffset;
	int32_t ____startOffsetOffset;
	int32_t ____lengthOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct LocalScopeTableReader_t3385D5D14A400B212C2F9581AFBF1B21200C4098_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____isMethodRefSmall;
	int32_t ____isImportScopeRefSmall;
	int32_t ____isLocalConstantRefSmall;
	int32_t ____isLocalVariableRefSmall;
	int32_t ____importScopeOffset;
	int32_t ____variableListOffset;
	int32_t ____constantListOffset;
	int32_t ____startOffsetOffset;
	int32_t ____lengthOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct LocalScopeTableReader_t3385D5D14A400B212C2F9581AFBF1B21200C4098_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____isMethodRefSmall;
	int32_t ____isImportScopeRefSmall;
	int32_t ____isLocalConstantRefSmall;
	int32_t ____isLocalVariableRefSmall;
	int32_t ____importScopeOffset;
	int32_t ____variableListOffset;
	int32_t ____constantListOffset;
	int32_t ____startOffsetOffset;
	int32_t ____lengthOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct LocalVariableTableReader_t7C268B1091AE0BF7CC36F3AFB9C11FBB9D88B649 
{
	int32_t ___NumberOfRows;
	bool ____isStringHeapRefSizeSmall;
	int32_t ____attributesOffset;
	int32_t ____indexOffset;
	int32_t ____nameOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct LocalVariableTableReader_t7C268B1091AE0BF7CC36F3AFB9C11FBB9D88B649_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____isStringHeapRefSizeSmall;
	int32_t ____attributesOffset;
	int32_t ____indexOffset;
	int32_t ____nameOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct LocalVariableTableReader_t7C268B1091AE0BF7CC36F3AFB9C11FBB9D88B649_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____isStringHeapRefSizeSmall;
	int32_t ____attributesOffset;
	int32_t ____indexOffset;
	int32_t ____nameOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ManifestResourceTableReader_t2EFA8A8A321B116CB91C20C1A29DF21307745C80 
{
	int32_t ___NumberOfRows;
	bool ____IsImplementationRefSizeSmall;
	bool ____IsStringHeapRefSizeSmall;
	int32_t ____OffsetOffset;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____ImplementationOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ManifestResourceTableReader_t2EFA8A8A321B116CB91C20C1A29DF21307745C80_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsImplementationRefSizeSmall;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____OffsetOffset;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____ImplementationOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ManifestResourceTableReader_t2EFA8A8A321B116CB91C20C1A29DF21307745C80_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsImplementationRefSizeSmall;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____OffsetOffset;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____ImplementationOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MemberRefTableReader_t328965B5F24129147BCD1A393289894AFE8A6439 
{
	int32_t ___NumberOfRows;
	bool ____IsMemberRefParentRefSizeSmall;
	bool ____IsStringHeapRefSizeSmall;
	bool ____IsBlobHeapRefSizeSmall;
	int32_t ____ClassOffset;
	int32_t ____NameOffset;
	int32_t ____SignatureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MemberRefTableReader_t328965B5F24129147BCD1A393289894AFE8A6439_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsMemberRefParentRefSizeSmall;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____ClassOffset;
	int32_t ____NameOffset;
	int32_t ____SignatureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MemberRefTableReader_t328965B5F24129147BCD1A393289894AFE8A6439_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsMemberRefParentRefSizeSmall;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____ClassOffset;
	int32_t ____NameOffset;
	int32_t ____SignatureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MetadataKind_t37813C16273248EFB461E1DE268B5FB5111B298B 
{
	int32_t ___value__;
};
struct MetadataReaderOptions_t38AD783F3FB4268BFE642A51C8780DDA40AE1EEC 
{
	int32_t ___value__;
};
struct MetadataStreamKind_tC35C98EBF9E10C71A21D78BC16EC07AC85F113C4 
{
	int32_t ___value__;
};
struct MethodDebugInformationTableReader_t92F46DCA4BD5B8FDB56F9672DA83EB9A8C77432F 
{
	int32_t ___NumberOfRows;
	bool ____isDocumentRefSmall;
	bool ____isBlobHeapRefSizeSmall;
	int32_t ____sequencePointsOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MethodDebugInformationTableReader_t92F46DCA4BD5B8FDB56F9672DA83EB9A8C77432F_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____isDocumentRefSmall;
	int32_t ____isBlobHeapRefSizeSmall;
	int32_t ____sequencePointsOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MethodDebugInformationTableReader_t92F46DCA4BD5B8FDB56F9672DA83EB9A8C77432F_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____isDocumentRefSmall;
	int32_t ____isBlobHeapRefSizeSmall;
	int32_t ____sequencePointsOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MethodImplTableReader_tAA9E48F689C778B22720C09DA5B8D30B2839BFCE 
{
	int32_t ___NumberOfRows;
	bool ____IsTypeDefTableRowRefSizeSmall;
	bool ____IsMethodDefOrRefRefSizeSmall;
	int32_t ____ClassOffset;
	int32_t ____MethodBodyOffset;
	int32_t ____MethodDeclarationOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MethodImplTableReader_tAA9E48F689C778B22720C09DA5B8D30B2839BFCE_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsTypeDefTableRowRefSizeSmall;
	int32_t ____IsMethodDefOrRefRefSizeSmall;
	int32_t ____ClassOffset;
	int32_t ____MethodBodyOffset;
	int32_t ____MethodDeclarationOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MethodImplTableReader_tAA9E48F689C778B22720C09DA5B8D30B2839BFCE_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsTypeDefTableRowRefSizeSmall;
	int32_t ____IsMethodDefOrRefRefSizeSmall;
	int32_t ____ClassOffset;
	int32_t ____MethodBodyOffset;
	int32_t ____MethodDeclarationOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MethodPtrTableReader_t263ABDE9C09EA207BF093B5FA4A3A76A1E92F8A8 
{
	int32_t ___NumberOfRows;
	bool ____IsMethodTableRowRefSizeSmall;
	int32_t ____MethodOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MethodPtrTableReader_t263ABDE9C09EA207BF093B5FA4A3A76A1E92F8A8_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsMethodTableRowRefSizeSmall;
	int32_t ____MethodOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MethodPtrTableReader_t263ABDE9C09EA207BF093B5FA4A3A76A1E92F8A8_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsMethodTableRowRefSizeSmall;
	int32_t ____MethodOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MethodSemanticsTableReader_tF181B5BD9FE09939991DB590D3CBEB368D10392E 
{
	int32_t ___NumberOfRows;
	bool ____IsMethodTableRowRefSizeSmall;
	bool ____IsHasSemanticRefSizeSmall;
	int32_t ____SemanticsFlagOffset;
	int32_t ____MethodOffset;
	int32_t ____AssociationOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MethodSemanticsTableReader_tF181B5BD9FE09939991DB590D3CBEB368D10392E_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsMethodTableRowRefSizeSmall;
	int32_t ____IsHasSemanticRefSizeSmall;
	int32_t ____SemanticsFlagOffset;
	int32_t ____MethodOffset;
	int32_t ____AssociationOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MethodSemanticsTableReader_tF181B5BD9FE09939991DB590D3CBEB368D10392E_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsMethodTableRowRefSizeSmall;
	int32_t ____IsHasSemanticRefSizeSmall;
	int32_t ____SemanticsFlagOffset;
	int32_t ____MethodOffset;
	int32_t ____AssociationOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MethodSpecTableReader_tB4F02FD9EE8D8EFB1637F6D689A64C06E73E4A85 
{
	int32_t ___NumberOfRows;
	bool ____IsMethodDefOrRefRefSizeSmall;
	bool ____IsBlobHeapRefSizeSmall;
	int32_t ____MethodOffset;
	int32_t ____InstantiationOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MethodSpecTableReader_tB4F02FD9EE8D8EFB1637F6D689A64C06E73E4A85_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsMethodDefOrRefRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____MethodOffset;
	int32_t ____InstantiationOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MethodSpecTableReader_tB4F02FD9EE8D8EFB1637F6D689A64C06E73E4A85_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsMethodDefOrRefRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____MethodOffset;
	int32_t ____InstantiationOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MethodTableReader_t1513B53074809ED3E39C9594FBF7909FE96F805E 
{
	int32_t ___NumberOfRows;
	bool ____IsParamRefSizeSmall;
	bool ____IsStringHeapRefSizeSmall;
	bool ____IsBlobHeapRefSizeSmall;
	int32_t ____RvaOffset;
	int32_t ____ImplFlagsOffset;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____SignatureOffset;
	int32_t ____ParamListOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MethodTableReader_t1513B53074809ED3E39C9594FBF7909FE96F805E_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsParamRefSizeSmall;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____RvaOffset;
	int32_t ____ImplFlagsOffset;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____SignatureOffset;
	int32_t ____ParamListOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct MethodTableReader_t1513B53074809ED3E39C9594FBF7909FE96F805E_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsParamRefSizeSmall;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____RvaOffset;
	int32_t ____ImplFlagsOffset;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____SignatureOffset;
	int32_t ____ParamListOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ModuleRefTableReader_tDCD84F1A3D53F226C2A5D8E4ED62685AE66D9A9A 
{
	int32_t ___NumberOfRows;
	bool ____IsStringHeapRefSizeSmall;
	int32_t ____NameOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ModuleRefTableReader_tDCD84F1A3D53F226C2A5D8E4ED62685AE66D9A9A_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____NameOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ModuleRefTableReader_tDCD84F1A3D53F226C2A5D8E4ED62685AE66D9A9A_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____NameOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ModuleTableReader_t04363CC2276CEE4203B71F690DE7EBD0DC9D24AC 
{
	int32_t ___NumberOfRows;
	bool ____IsStringHeapRefSizeSmall;
	bool ____IsGUIDHeapRefSizeSmall;
	int32_t ____GenerationOffset;
	int32_t ____NameOffset;
	int32_t ____MVIdOffset;
	int32_t ____EnCIdOffset;
	int32_t ____EnCBaseIdOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ModuleTableReader_t04363CC2276CEE4203B71F690DE7EBD0DC9D24AC_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____IsGUIDHeapRefSizeSmall;
	int32_t ____GenerationOffset;
	int32_t ____NameOffset;
	int32_t ____MVIdOffset;
	int32_t ____EnCIdOffset;
	int32_t ____EnCBaseIdOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ModuleTableReader_t04363CC2276CEE4203B71F690DE7EBD0DC9D24AC_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____IsGUIDHeapRefSizeSmall;
	int32_t ____GenerationOffset;
	int32_t ____NameOffset;
	int32_t ____MVIdOffset;
	int32_t ____EnCIdOffset;
	int32_t ____EnCBaseIdOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct NestedClassTableReader_t3B46B4E83EB2115EF5AF95BE558C0D52C117DF59 
{
	int32_t ___NumberOfRows;
	bool ____IsTypeDefTableRowRefSizeSmall;
	int32_t ____NestedClassOffset;
	int32_t ____EnclosingClassOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct NestedClassTableReader_t3B46B4E83EB2115EF5AF95BE558C0D52C117DF59_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsTypeDefTableRowRefSizeSmall;
	int32_t ____NestedClassOffset;
	int32_t ____EnclosingClassOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct NestedClassTableReader_t3B46B4E83EB2115EF5AF95BE558C0D52C117DF59_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsTypeDefTableRowRefSizeSmall;
	int32_t ____NestedClassOffset;
	int32_t ____EnclosingClassOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ParamPtrTableReader_t47CD256531B000D36B8652D1121F4974733B314B 
{
	int32_t ___NumberOfRows;
	bool ____IsParamTableRowRefSizeSmall;
	int32_t ____ParamOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ParamPtrTableReader_t47CD256531B000D36B8652D1121F4974733B314B_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsParamTableRowRefSizeSmall;
	int32_t ____ParamOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ParamPtrTableReader_t47CD256531B000D36B8652D1121F4974733B314B_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsParamTableRowRefSizeSmall;
	int32_t ____ParamOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ParamTableReader_t42AB2CC3C4778038354FF6B9297CA1EA1AFC70E7 
{
	int32_t ___NumberOfRows;
	bool ____IsStringHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____SequenceOffset;
	int32_t ____NameOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ParamTableReader_t42AB2CC3C4778038354FF6B9297CA1EA1AFC70E7_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____SequenceOffset;
	int32_t ____NameOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct ParamTableReader_t42AB2CC3C4778038354FF6B9297CA1EA1AFC70E7_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____SequenceOffset;
	int32_t ____NameOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct PropertyMapTableReader_tC14EB4FBC6C6E310B4133237FB917005452DFFC4 
{
	int32_t ___NumberOfRows;
	bool ____IsTypeDefTableRowRefSizeSmall;
	bool ____IsPropertyRefSizeSmall;
	int32_t ____ParentOffset;
	int32_t ____PropertyListOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct PropertyMapTableReader_tC14EB4FBC6C6E310B4133237FB917005452DFFC4_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsTypeDefTableRowRefSizeSmall;
	int32_t ____IsPropertyRefSizeSmall;
	int32_t ____ParentOffset;
	int32_t ____PropertyListOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct PropertyMapTableReader_tC14EB4FBC6C6E310B4133237FB917005452DFFC4_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsTypeDefTableRowRefSizeSmall;
	int32_t ____IsPropertyRefSizeSmall;
	int32_t ____ParentOffset;
	int32_t ____PropertyListOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct PropertyPtrTableReader_tC7274FCA9D7BCF385D29EF5988256869ED21AAA1 
{
	int32_t ___NumberOfRows;
	bool ____IsPropertyTableRowRefSizeSmall;
	int32_t ____PropertyOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct PropertyPtrTableReader_tC7274FCA9D7BCF385D29EF5988256869ED21AAA1_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsPropertyTableRowRefSizeSmall;
	int32_t ____PropertyOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct PropertyPtrTableReader_tC7274FCA9D7BCF385D29EF5988256869ED21AAA1_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsPropertyTableRowRefSizeSmall;
	int32_t ____PropertyOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct PropertyTableReader_tE9C91812340577B0575C4205ED49122BA14DBEF9 
{
	int32_t ___NumberOfRows;
	bool ____IsStringHeapRefSizeSmall;
	bool ____IsBlobHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____SignatureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct PropertyTableReader_tE9C91812340577B0575C4205ED49122BA14DBEF9_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____SignatureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct PropertyTableReader_tE9C91812340577B0575C4205ED49122BA14DBEF9_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____SignatureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StandAloneSigTableReader_t82E1797B03527E4C30C8B5E0811503CA918CB76C 
{
	int32_t ___NumberOfRows;
	bool ____IsBlobHeapRefSizeSmall;
	int32_t ____SignatureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct StandAloneSigTableReader_t82E1797B03527E4C30C8B5E0811503CA918CB76C_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____SignatureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct StandAloneSigTableReader_t82E1797B03527E4C30C8B5E0811503CA918CB76C_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____SignatureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct StateMachineMethodTableReader_tBA27BFB0897F68E464BDFF566B536EF2A3CCD217 
{
	int32_t ___NumberOfRows;
	bool ____isMethodRefSizeSmall;
	int32_t ____kickoffMethodOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct StateMachineMethodTableReader_tBA27BFB0897F68E464BDFF566B536EF2A3CCD217_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____isMethodRefSizeSmall;
	int32_t ____kickoffMethodOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct StateMachineMethodTableReader_tBA27BFB0897F68E464BDFF566B536EF2A3CCD217_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____isMethodRefSizeSmall;
	int32_t ____kickoffMethodOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct StringHeap_t5257DEF79E1BDC88D7F6379552AA46B6A920F815 
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
	VirtualHeap_t2F4EC50A35BF4E06CBB9F1B1632573752AF1B339* ____lazyVirtualHeap;
};
struct StringHeap_t5257DEF79E1BDC88D7F6379552AA46B6A920F815_marshaled_pinvoke
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
	VirtualHeap_t2F4EC50A35BF4E06CBB9F1B1632573752AF1B339* ____lazyVirtualHeap;
};
struct StringHeap_t5257DEF79E1BDC88D7F6379552AA46B6A920F815_marshaled_com
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
	VirtualHeap_t2F4EC50A35BF4E06CBB9F1B1632573752AF1B339* ____lazyVirtualHeap;
};
struct TableMask_tE1544FAD1588527AC474768FC236D9729C5E0E1A 
{
	uint64_t ___value__;
};
struct TypeDefTableReader_t9686EABD2B613A4CBD610ABF6C54AF1B695A9983 
{
	int32_t ___NumberOfRows;
	bool ____IsFieldRefSizeSmall;
	bool ____IsMethodRefSizeSmall;
	bool ____IsTypeDefOrRefRefSizeSmall;
	bool ____IsStringHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____NamespaceOffset;
	int32_t ____ExtendsOffset;
	int32_t ____FieldListOffset;
	int32_t ____MethodListOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct TypeDefTableReader_t9686EABD2B613A4CBD610ABF6C54AF1B695A9983_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsFieldRefSizeSmall;
	int32_t ____IsMethodRefSizeSmall;
	int32_t ____IsTypeDefOrRefRefSizeSmall;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____NamespaceOffset;
	int32_t ____ExtendsOffset;
	int32_t ____FieldListOffset;
	int32_t ____MethodListOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct TypeDefTableReader_t9686EABD2B613A4CBD610ABF6C54AF1B695A9983_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsFieldRefSizeSmall;
	int32_t ____IsMethodRefSizeSmall;
	int32_t ____IsTypeDefOrRefRefSizeSmall;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____FlagsOffset;
	int32_t ____NameOffset;
	int32_t ____NamespaceOffset;
	int32_t ____ExtendsOffset;
	int32_t ____FieldListOffset;
	int32_t ____MethodListOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct TypeRefTableReader_t8A033AA214D375769088AE33A942A2AFCCEA49D6 
{
	int32_t ___NumberOfRows;
	bool ____IsResolutionScopeRefSizeSmall;
	bool ____IsStringHeapRefSizeSmall;
	int32_t ____ResolutionScopeOffset;
	int32_t ____NameOffset;
	int32_t ____NamespaceOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct TypeRefTableReader_t8A033AA214D375769088AE33A942A2AFCCEA49D6_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsResolutionScopeRefSizeSmall;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____ResolutionScopeOffset;
	int32_t ____NameOffset;
	int32_t ____NamespaceOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct TypeRefTableReader_t8A033AA214D375769088AE33A942A2AFCCEA49D6_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsResolutionScopeRefSizeSmall;
	int32_t ____IsStringHeapRefSizeSmall;
	int32_t ____ResolutionScopeOffset;
	int32_t ____NameOffset;
	int32_t ____NamespaceOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct TypeSpecTableReader_t488FCE29B17303C8F08611CF9949E3F742D2C361 
{
	int32_t ___NumberOfRows;
	bool ____IsBlobHeapRefSizeSmall;
	int32_t ____SignatureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct TypeSpecTableReader_t488FCE29B17303C8F08611CF9949E3F742D2C361_marshaled_pinvoke
{
	int32_t ___NumberOfRows;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____SignatureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct TypeSpecTableReader_t488FCE29B17303C8F08611CF9949E3F742D2C361_marshaled_com
{
	int32_t ___NumberOfRows;
	int32_t ____IsBlobHeapRefSizeSmall;
	int32_t ____SignatureOffset;
	int32_t ___RowSize;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct UserStringHeap_t588E19A6B2BC729D5AAEDE59C3BE654DF39CD71C 
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
};
struct VisitExceptionKind_t7E6C3EABD5439F2B4CA31C246B2AA4AC16A77DF5 
{
	int32_t ___value__;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F  : public RuntimeObject
{
	NamespaceCache_t56DBC3FC7454384FA42D4EFA4E16220FB295F105* ___NamespaceCache;
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 ___Block;
	int32_t ___WinMDMscorlibRef;
	RuntimeObject* ____memoryOwnerObj;
	int32_t ____options;
	Dictionary_2_tEC8B84C0B165859CC7198B04F1CF7D7E35B7D3D5* ____lazyNestedTypesMap;
	String_t* ____versionString;
	int32_t ____metadataKind;
	int32_t ____metadataStreamKind;
	DebugMetadataHeader_t1310A29B76236776EBECB5CB6B6BECC3E35CA83A* ____debugMetadataHeader;
	StringHeap_t5257DEF79E1BDC88D7F6379552AA46B6A920F815 ___StringHeap;
	BlobHeap_t0AB5C6DBC3E2D91683A5750C0393957D20708DE4 ___BlobHeap;
	GuidHeap_t881A71513711FC2AC318553C3A88DF5850A588BA ___GuidHeap;
	UserStringHeap_t588E19A6B2BC729D5AAEDE59C3BE654DF39CD71C ___UserStringHeap;
	bool ___IsMinimalDelta;
	uint64_t ____sortedTables;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___TableRowCounts;
	ModuleTableReader_t04363CC2276CEE4203B71F690DE7EBD0DC9D24AC ___ModuleTable;
	TypeRefTableReader_t8A033AA214D375769088AE33A942A2AFCCEA49D6 ___TypeRefTable;
	TypeDefTableReader_t9686EABD2B613A4CBD610ABF6C54AF1B695A9983 ___TypeDefTable;
	FieldPtrTableReader_t65A798873C6DF4BFEA45EBA8BF4A791AF74CFE51 ___FieldPtrTable;
	FieldTableReader_tA995381BC419BD7842ECA60D2228252D6DA49358 ___FieldTable;
	MethodPtrTableReader_t263ABDE9C09EA207BF093B5FA4A3A76A1E92F8A8 ___MethodPtrTable;
	MethodTableReader_t1513B53074809ED3E39C9594FBF7909FE96F805E ___MethodDefTable;
	ParamPtrTableReader_t47CD256531B000D36B8652D1121F4974733B314B ___ParamPtrTable;
	ParamTableReader_t42AB2CC3C4778038354FF6B9297CA1EA1AFC70E7 ___ParamTable;
	InterfaceImplTableReader_tE592285A5078E3FD3B8D3281383372BE52669C69 ___InterfaceImplTable;
	MemberRefTableReader_t328965B5F24129147BCD1A393289894AFE8A6439 ___MemberRefTable;
	ConstantTableReader_tF215F0AD08D774EF14D2523CFD7330C347DCE2C8 ___ConstantTable;
	CustomAttributeTableReader_t11C02FBA392005507A695E48A78400FBF4007C4D ___CustomAttributeTable;
	FieldMarshalTableReader_t42A58AAB651FAC9B449334B3188DC601D7D72C14 ___FieldMarshalTable;
	DeclSecurityTableReader_t859F98173FA0710776882E55159D6407FBE82FAE ___DeclSecurityTable;
	ClassLayoutTableReader_t32F12764AB213671F128189ACD3319FBBB0D093B ___ClassLayoutTable;
	FieldLayoutTableReader_t5FC9A5C9C15088F246246B207FE89AA522B2E545 ___FieldLayoutTable;
	StandAloneSigTableReader_t82E1797B03527E4C30C8B5E0811503CA918CB76C ___StandAloneSigTable;
	EventMapTableReader_t073ECFB5FFA1D8060E152377500FA7D1D159D1AF ___EventMapTable;
	EventPtrTableReader_tF8C994285281E201BE7FF94CC8F7207721F0FC40 ___EventPtrTable;
	EventTableReader_t5DAB467B333FE05F54ECDB2D0DE03234E44EA6FA ___EventTable;
	PropertyMapTableReader_tC14EB4FBC6C6E310B4133237FB917005452DFFC4 ___PropertyMapTable;
	PropertyPtrTableReader_tC7274FCA9D7BCF385D29EF5988256869ED21AAA1 ___PropertyPtrTable;
	PropertyTableReader_tE9C91812340577B0575C4205ED49122BA14DBEF9 ___PropertyTable;
	MethodSemanticsTableReader_tF181B5BD9FE09939991DB590D3CBEB368D10392E ___MethodSemanticsTable;
	MethodImplTableReader_tAA9E48F689C778B22720C09DA5B8D30B2839BFCE ___MethodImplTable;
	ModuleRefTableReader_tDCD84F1A3D53F226C2A5D8E4ED62685AE66D9A9A ___ModuleRefTable;
	TypeSpecTableReader_t488FCE29B17303C8F08611CF9949E3F742D2C361 ___TypeSpecTable;
	ImplMapTableReader_t9D5EBD5D8EAB42F2D4D5D90FCFDE372F814C7C96 ___ImplMapTable;
	FieldRVATableReader_t69F7F4120FB5683A3247E097D27BBC0ED679699D ___FieldRvaTable;
	EnCLogTableReader_t5A17E6D4BEFDCAD419D4C887FC79C22EC2E79C9C ___EncLogTable;
	EnCMapTableReader_t54A2DFAD95F462E39E565C8984937F9AF15A49CB ___EncMapTable;
	AssemblyTableReader_t24C8E795A28C062EB478F575CE85BF2129210CE3 ___AssemblyTable;
	AssemblyProcessorTableReader_tFBE9A5DA145EDAFB010998B99430D1C06891A1EA ___AssemblyProcessorTable;
	AssemblyOSTableReader_tA3571EE1819AF6C135BBBB87F931D0084725B893 ___AssemblyOSTable;
	AssemblyRefTableReader_tB36E4193B3B5F2006CE16B169F419F38754AA5C9 ___AssemblyRefTable;
	AssemblyRefProcessorTableReader_tA66A408A3A629191811E1BB5C9E560F49B6D5B45 ___AssemblyRefProcessorTable;
	AssemblyRefOSTableReader_t1F6EC2F94A3370428D83AD4DEAA46A7218E9C6A1 ___AssemblyRefOSTable;
	FileTableReader_tF28A6D293DE3659EE51A32BA03B46B52CF239BF8 ___FileTable;
	ExportedTypeTableReader_t1F6601662AFE295FA0C3733C7DBE77BF78BFBE1B ___ExportedTypeTable;
	ManifestResourceTableReader_t2EFA8A8A321B116CB91C20C1A29DF21307745C80 ___ManifestResourceTable;
	NestedClassTableReader_t3B46B4E83EB2115EF5AF95BE558C0D52C117DF59 ___NestedClassTable;
	GenericParamTableReader_tFF8D3A999D8086AD164E92B72A69B4CD7CB4CFC1 ___GenericParamTable;
	MethodSpecTableReader_tB4F02FD9EE8D8EFB1637F6D689A64C06E73E4A85 ___MethodSpecTable;
	GenericParamConstraintTableReader_t97FCE5F5D811FE04C53A1A269B6C204CE44325E4 ___GenericParamConstraintTable;
	DocumentTableReader_t761BADFDDCB932C96D8B44DF0439FB1BB4A1EFB8 ___DocumentTable;
	MethodDebugInformationTableReader_t92F46DCA4BD5B8FDB56F9672DA83EB9A8C77432F ___MethodDebugInformationTable;
	LocalScopeTableReader_t3385D5D14A400B212C2F9581AFBF1B21200C4098 ___LocalScopeTable;
	LocalVariableTableReader_t7C268B1091AE0BF7CC36F3AFB9C11FBB9D88B649 ___LocalVariableTable;
	LocalConstantTableReader_t1FE50FEA7B7F6DCE571D9E6B5F142B33F3113F99 ___LocalConstantTable;
	ImportScopeTableReader_t661D8292C0E2B83F9CB0E50B9E0D6A08AC1B05F5 ___ImportScopeTable;
	StateMachineMethodTableReader_tBA27BFB0897F68E464BDFF566B536EF2A3CCD217 ___StateMachineMethodTable;
	CustomDebugInformationTableReader_tC23247E3A3A949E33711E707CF79D0927D89DC57 ___CustomDebugInformationTable;
	MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63* ___U3CUTF8DecoderU3Ek__BackingField;
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
struct VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE 
{
	int32_t ___U3CIgnoreExceptionsU3Ek__BackingField;
};
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505  : public MulticastDelegate_t
{
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};
struct Func_1_t566D4A654882E282E54CDC3A001E05486F913903  : public MulticastDelegate_t
{
};
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
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
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446  : public RuntimeObject
{
	int32_t ___m_PathIndex;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
	bool ___U3CReadonlyVisitU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
};
struct GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421 : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446 {};
struct SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446 {};
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	RuntimeObject* ___Property;
};
struct ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	RuntimeObject* ___Visitor;
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
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___WinRTPrefix;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_projectedTypeNames;
	ProjectionInfoU5BU5D_tB2A3FA52462779A586655B2A8C9D4C520DB191DF* ___s_projectionInfos;
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
struct GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421_StaticFields
{
	ObjectPool_1_t2184AA1C7CACBE62DF11E0F26B73D85AC246F2E1* ___Pool;
};
struct SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE_StaticFields
{
	ObjectPool_1_tDF1CBAC8F45FE7A38564D25A887E0824155AB946* ___Pool;
};
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_StaticFields
{
	ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340* ___Pool;
};
struct ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272_StaticFields
{
	ObjectPool_1_t252DACFE69441FA4DE4E098755CA048E3B7877BA* ___Pool;
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_AcceptWithSpecializedVisitor_TisIl2CppFullySharedGenericAny_mDB91562B01F9A25F2996347A1981D24A0DFBBFF1_gshared (RuntimeObject* ___0_properties, RuntimeObject* ___1_visitor, Il2CppFullySharedGenericAny* ___2_container, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, Il2CppSharedGenericObject* ___0_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6_gshared (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryGetProperty_TisIl2CppFullySharedGenericAny_m88C88F028D482D463AECB560312CE67C25FAAD59_gshared (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, RuntimeObject** ___2_property, int32_t* ___3_returnCode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4F1769770A3A0B4E309335855CE106FE78D353BB_gshared (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, Il2CppFullySharedGenericAny* ___2_value, int32_t* ___3_returnCode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA4B822A9C5AA47E305D70016F7098A3BEB61FFA1_gshared (Il2CppFullySharedGenericAny* ___0_container, String_t* ___1_name, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TrySetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE4D41C318BA0C5E38BD7DD9635E46ACA8923A9DD_gshared (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TrySetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mBB92013428A9E3C36D4A188916047CA22FA2DC5D_gshared (Il2CppFullySharedGenericAny* ___0_container, String_t* ___1_name, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TrySetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA77CCF3362119D1AC07E905B430E798F0D470726_gshared (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, Il2CppFullySharedGenericAny ___2_value, int32_t* ___3_returnCode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2__ctor_mE9E4545341ADC55D8511126A371C234FD5CF26AF_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, RuntimeObject* ___0_provider, MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F* ___1_metadataReader, Il2CppFullySharedGenericAny ___2_genericContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_DecodeMethodSignature_m3CCFD8E0277778BE3ACCB4D477C67E9DBC319D3F_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyDefinition_DecodeSignature_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03090965A254EB4E3C5BAA2B6D8BB38CC5B766F5_gshared (PropertyDefinition_t88695666F682918458265E17792F5759C9B7E04E* __this, RuntimeObject* ___0_provider, Il2CppFullySharedGenericAny ___1_genericContext, MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_gshared_inline (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountInactive_m40351B6BE62E0944A0813C07869822EC0D1E8D26_gshared (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_inline (Type_t* ___0_type, const RuntimeMethod* method) ;
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_m90F2EBB48D60993594856358C572964C8011143E (Type_t* ___0_type, const RuntimeMethod* method) ;
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8_gshared)(method);
}
inline void PropertyBag_AcceptWithSpecializedVisitor_TisIl2CppFullySharedGenericAny_mDB91562B01F9A25F2996347A1981D24A0DFBBFF1 (RuntimeObject* ___0_properties, RuntimeObject* ___1_visitor, Il2CppFullySharedGenericAny* ___2_container, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PropertyBag_AcceptWithSpecializedVisitor_TisIl2CppFullySharedGenericAny_mDB91562B01F9A25F2996347A1981D24A0DFBBFF1_gshared)(___0_properties, ___1_visitor, ___2_container, method);
}
inline ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272* ObjectPool_1_Get_m4A4F6AD2B655F16D104EC84EA2DA1D9FE14B2684_inline (ObjectPool_1_t252DACFE69441FA4DE4E098755CA048E3B7877BA* __this, const RuntimeMethod* method)
{
	return ((  ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272* (*) (ObjectPool_1_t252DACFE69441FA4DE4E098755CA048E3B7877BA*, const RuntimeMethod*))ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_gshared_inline)(__this, method);
}
inline void ObjectPool_1_Release_m00352A4DEBA12CD10F87E0CF9C13F4A3D4D74946_inline (ObjectPool_1_t252DACFE69441FA4DE4E098755CA048E3B7877BA* __this, ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272* ___0_element, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t252DACFE69441FA4DE4E098755CA048E3B7877BA*, ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272*, const RuntimeMethod*))ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_gshared_inline)(__this, ___0_element, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_Path_m8E3F004534B73D33C70C3BD20729F5987F11627B_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_value, const RuntimeMethod* method) ;
inline bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6 (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool PropertyContainer_TryGetProperty_TisIl2CppFullySharedGenericAny_m88C88F028D482D463AECB560312CE67C25FAAD59 (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, RuntimeObject** ___2_property, int32_t* ___3_returnCode, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79*, RuntimeObject**, int32_t*, const RuntimeMethod*))PropertyContainer_TryGetProperty_TisIl2CppFullySharedGenericAny_m88C88F028D482D463AECB560312CE67C25FAAD59_gshared)(___0_container, ___1_path, ___2_property, ___3_returnCode, method);
}
inline GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* ObjectPool_1_Get_mF6A30FA72FBF2E3181811AB561B34C17C4B9CA7F_inline (ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340* __this, const RuntimeMethod* method)
{
	return ((  GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* (*) (ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340*, const RuntimeMethod*))ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_gshared_inline)(__this, method);
}
inline void ObjectPool_1_Release_m6F09F7230B34474465ADC6A65AAAC4124B843AAD_inline (ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340* __this, GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* ___0_element, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340*, GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540*, const RuntimeMethod*))ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_gshared_inline)(__this, ___0_element, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PathVisitor_get_ReturnCode_m900403F09B0392B4D8C2E2E0EBD06148FCFA2734_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) ;
inline bool PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4F1769770A3A0B4E309335855CE106FE78D353BB (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, Il2CppFullySharedGenericAny* ___2_value, int32_t* ___3_returnCode, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79*, Il2CppFullySharedGenericAny*, int32_t*, const RuntimeMethod*))PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4F1769770A3A0B4E309335855CE106FE78D353BB_gshared)(___0_container, ___1_path, ___2_value, ___3_returnCode, method);
}
inline bool PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA4B822A9C5AA47E305D70016F7098A3BEB61FFA1 (Il2CppFullySharedGenericAny* ___0_container, String_t* ___1_name, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, String_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA4B822A9C5AA47E305D70016F7098A3BEB61FFA1_gshared)(___0_container, ___1_name, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyPath__ctor_m8889FD75F8EDE2DAAD4A5491B55C292DB207A794 (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyPath_get_IsEmpty_m5923CD28AB201F75C64F40AED27C7E42FC5DBF50 (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, const RuntimeMethod* method) ;
inline GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* ObjectPool_1_Get_mB7CC64CDFD890311D54C24718B75099163BE4CE7_inline (ObjectPool_1_t2184AA1C7CACBE62DF11E0F26B73D85AC246F2E1* __this, const RuntimeMethod* method)
{
	return ((  GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* (*) (ObjectPool_1_t2184AA1C7CACBE62DF11E0F26B73D85AC246F2E1*, const RuntimeMethod*))ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_ReadonlyVisit_m852F4CA7A95317B2AA5CBC9AB914037FC5A0CABD_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, bool ___0_value, const RuntimeMethod* method) ;
inline void ObjectPool_1_Release_m38E0E88A9C8581BF4FFC4E43567E6A9FD099FDA4_inline (ObjectPool_1_t2184AA1C7CACBE62DF11E0F26B73D85AC246F2E1* __this, GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* ___0_element, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t2184AA1C7CACBE62DF11E0F26B73D85AC246F2E1*, GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421*, const RuntimeMethod*))ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_gshared_inline)(__this, ___0_element, method);
}
inline bool PropertyContainer_TrySetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE4D41C318BA0C5E38BD7DD9635E46ACA8923A9DD (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79*, Il2CppFullySharedGenericAny, const RuntimeMethod*))PropertyContainer_TrySetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE4D41C318BA0C5E38BD7DD9635E46ACA8923A9DD_gshared)(___0_container, ___1_path, ___2_value, method);
}
inline bool PropertyContainer_TrySetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mBB92013428A9E3C36D4A188916047CA22FA2DC5D (Il2CppFullySharedGenericAny* ___0_container, String_t* ___1_name, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, String_t*, Il2CppFullySharedGenericAny, const RuntimeMethod*))PropertyContainer_TrySetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mBB92013428A9E3C36D4A188916047CA22FA2DC5D_gshared)(___0_container, ___1_name, ___2_value, method);
}
inline bool PropertyContainer_TrySetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA77CCF3362119D1AC07E905B430E798F0D470726 (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, Il2CppFullySharedGenericAny ___2_value, int32_t* ___3_returnCode, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79*, Il2CppFullySharedGenericAny, int32_t*, const RuntimeMethod*))PropertyContainer_TrySetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA77CCF3362119D1AC07E905B430E798F0D470726_gshared)(___0_container, ___1_path, ___2_value, ___3_returnCode, method);
}
inline SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE* ObjectPool_1_Get_mE1B2FB27A56EDD5A042B87399DD84174F8030065_inline (ObjectPool_1_tDF1CBAC8F45FE7A38564D25A887E0824155AB946* __this, const RuntimeMethod* method)
{
	return ((  SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE* (*) (ObjectPool_1_tDF1CBAC8F45FE7A38564D25A887E0824155AB946*, const RuntimeMethod*))ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_gshared_inline)(__this, method);
}
inline void ObjectPool_1_Release_m3E9E58DBD42DBEFA51281AF24D47E6CDAA9AB58B_inline (ObjectPool_1_tDF1CBAC8F45FE7A38564D25A887E0824155AB946* __this, SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE* ___0_element, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tDF1CBAC8F45FE7A38564D25A887E0824155AB946*, SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE*, const RuntimeMethod*))ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_gshared_inline)(__this, ___0_element, method);
}
inline void SignatureDecoder_2__ctor_mE9E4545341ADC55D8511126A371C234FD5CF26AF (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, RuntimeObject* ___0_provider, MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F* ___1_metadataReader, Il2CppFullySharedGenericAny ___2_genericContext, const RuntimeMethod* method)
{
	((  void (*) (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*, RuntimeObject*, MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F*, Il2CppFullySharedGenericAny, const RuntimeMethod*))SignatureDecoder_2__ctor_mE9E4545341ADC55D8511126A371C234FD5CF26AF_gshared)((SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*)__this, ___0_provider, ___1_metadataReader, ___2_genericContext, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F PropertyDefinition_get_Signature_m41EAF500084BA256ABE806F44DF8A0E77F4B437D (PropertyDefinition_t88695666F682918458265E17792F5759C9B7E04E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203 MetadataReader_GetBlobReader_m16ED58EC4011DEA06AF78C51DAE94667BDFFCFBA (MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F* __this, BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F ___0_handle, const RuntimeMethod* method) ;
inline void SignatureDecoder_2_DecodeMethodSignature_m3CCFD8E0277778BE3ACCB4D477C67E9DBC319D3F (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203*, MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB*, const RuntimeMethod*))SignatureDecoder_2_DecodeMethodSignature_m3CCFD8E0277778BE3ACCB4D477C67E9DBC319D3F_gshared)((SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*)__this, ___0_blobReader, il2cppRetVal, method);
}
inline void PropertyDefinition_DecodeSignature_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03090965A254EB4E3C5BAA2B6D8BB38CC5B766F5 (PropertyDefinition_t88695666F682918458265E17792F5759C9B7E04E* __this, RuntimeObject* ___0_provider, Il2CppFullySharedGenericAny ___1_genericContext, MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (PropertyDefinition_t88695666F682918458265E17792F5759C9B7E04E*, RuntimeObject*, Il2CppFullySharedGenericAny, MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB*, const RuntimeMethod*))PropertyDefinition_DecodeSignature_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03090965A254EB4E3C5BAA2B6D8BB38CC5B766F5_gshared)((PropertyDefinition_t88695666F682918458265E17792F5759C9B7E04E*)__this, ___0_provider, ___1_genericContext, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared)(method);
}
inline int32_t List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D_inline (Func_1_t566D4A654882E282E54CDC3A001E05486F913903* __this, const RuntimeMethod* method)
{
	Il2CppSharedGenericObject* il2cppRetVal;
	((  void (*) (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_gshared_inline)((Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline int32_t ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, const RuntimeMethod*))ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_gshared_inline)(__this, method);
}
inline void ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, int32_t, const RuntimeMethod*))ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_gshared_inline)(__this, ___0_value, method);
}
inline Il2CppSharedGenericObject* List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	Il2CppSharedGenericObject* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared)(__this, ___0_index, method);
}
inline void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
inline int32_t ObjectPool_1_get_CountInactive_m40351B6BE62E0944A0813C07869822EC0D1E8D26 (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, const RuntimeMethod*))ObjectPool_1_get_CountInactive_m40351B6BE62E0944A0813C07869822EC0D1E8D26_gshared)(__this, method);
}
inline void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6_gshared (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)));
	void* L_24 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)));
	void* L_32 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
	const Il2CppFullySharedGenericAny L_41 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
	const Il2CppFullySharedGenericAny L_47 = L_10;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
	memset(V_0, 0, SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_visitor), (&___1_container), (&___2_returnCode), (&___3_parameters));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 60));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 61));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 62));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 63));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 63));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 64));
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 64));
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 65));
		int32_t* L_3 = ___2_returnCode;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_3, (int32_t)2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 66));
		return (bool)0;
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 67));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 68));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 68));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 69));
		bool L_6;
		L_6 = TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_inline(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 69));
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 70));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 71));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_7;
		L_7 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 71));
		Il2CppFullySharedGenericAny* L_8 = ___1_container;
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 72));
		NullCheck(L_7);
		bool L_11;
		L_11 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_10: *(void**)L_10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 72));
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 73));
		int32_t* L_12 = ___2_returnCode;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_12, (int32_t)1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 74));
		return (bool)0;
	}

IL_0047:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 75));
		bool L_13 = il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (L_13)
		{
			goto IL_00ca;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 78));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 78));
		Il2CppFullySharedGenericAny* L_16 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 79));
		Il2CppConstrainedCallData L_18;
		Il2CppMethodPointer L_19 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 7), (void*)L_16, &L_18, L_17);
		typedef Type_t* ( *func_L_20)(void*,const RuntimeMethod*);
		Type_t* L_21 = ((func_L_20)L_19)(L_18.thisPtr,L_18.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 79));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 80));
		bool L_22;
		L_22 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_15, L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 80));
		if (!L_22)
		{
			goto IL_00ca;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 81));
		Il2CppFullySharedGenericAny* L_23 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 82));
		Il2CppConstrainedCallData L_25;
		Il2CppMethodPointer L_26 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 7), (void*)L_23, &L_25, L_24);
		typedef Type_t* ( *func_L_27)(void*,const RuntimeMethod*);
		Type_t* L_28 = ((func_L_27)L_26)(L_25.thisPtr,L_25.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 82));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 83));
		bool L_29;
		L_29 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_28, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 83));
		if (L_29)
		{
			goto IL_008d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 84));
		int32_t* L_30 = ___2_returnCode;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_30, (int32_t)2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 85));
		return (bool)0;
	}

IL_008d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 86));
		Il2CppFullySharedGenericAny* L_31 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 87));
		Il2CppConstrainedCallData L_33;
		Il2CppMethodPointer L_34 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 7), (void*)L_31, &L_33, L_32);
		typedef Type_t* ( *func_L_35)(void*,const RuntimeMethod*);
		Type_t* L_36 = ((func_L_35)L_34)(L_33.thisPtr,L_33.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 87));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 88));
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_37;
		L_37 = PropertyBagStore_GetPropertyBag_m90F2EBB48D60993594856358C572964C8011143E(L_36, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 88));
		V_1 = L_37;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 89));
		RuntimeObject* L_38 = V_1;
		if (L_38)
		{
			goto IL_00a7;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 90));
		int32_t* L_39 = ___2_returnCode;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_39, (int32_t)3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 91));
		return (bool)0;
	}

IL_00a7:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 92));
		Il2CppFullySharedGenericAny* L_40 = ___1_container;
		il2cpp_codegen_memcpy(L_41, L_40, SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
		RuntimeObject* L_42 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_41);
		V_2 = L_42;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 93));
		RuntimeObject* L_43 = V_1;
		RuntimeObject* L_44 = ___0_visitor;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 94));
		NullCheck(L_43);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject** >::Invoke(1, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, L_43, L_44, (&V_2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 94));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 95));
		Il2CppFullySharedGenericAny* L_45 = ___1_container;
		RuntimeObject* L_46 = V_2;
		void* L_48 = UnBox_Any(L_46, il2cpp_rgctx_data(method->rgctx_data, 1), L_47);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_45, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_48)), SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_45, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_48)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 96));
		goto IL_00e0;
	}

IL_00ca:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 97));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 98));
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_49;
		L_49 = PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8(il2cpp_rgctx_method(method->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 98));
		V_3 = L_49;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 99));
		RuntimeObject* L_50 = V_3;
		if (L_50)
		{
			goto IL_00d8;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 100));
		int32_t* L_51 = ___2_returnCode;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_51, (int32_t)3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 101));
		return (bool)0;
	}

IL_00d8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 102));
		RuntimeObject* L_52 = V_3;
		RuntimeObject* L_53 = ___0_visitor;
		Il2CppFullySharedGenericAny* L_54 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 103));
		PropertyBag_AcceptWithSpecializedVisitor_TisIl2CppFullySharedGenericAny_mDB91562B01F9A25F2996347A1981D24A0DFBBFF1(L_52, L_53, L_54, il2cpp_rgctx_method(method->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 103));
	}

IL_00e0:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 104));
		int32_t* L_55 = ___2_returnCode;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_55, (int32_t)0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 105));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mE8E0A0738AB9C63403C72383BAA1BACC1CF12254_gshared (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___2_path, int32_t* ___3_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___4_parameters, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Get_m4A4F6AD2B655F16D104EC84EA2DA1D9FE14B2684_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_m00352A4DEBA12CD10F87E0CF9C13F4A3D4D74946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272* V_0 = NULL;
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_visitor), (&___1_container), (&___2_path), (&___3_returnCode), (&___4_parameters));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 132));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 133));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 134));
		il2cpp_codegen_runtime_class_init_inline(ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272_il2cpp_TypeInfo_var);
		ObjectPool_1_t252DACFE69441FA4DE4E098755CA048E3B7877BA* L_0 = ((ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272_StaticFields*)il2cpp_codegen_static_fields_for(ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272_il2cpp_TypeInfo_var))->___Pool;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 135));
		NullCheck(L_0);
		ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272* L_1;
		L_1 = ObjectPool_1_Get_m4A4F6AD2B655F16D104EC84EA2DA1D9FE14B2684_inline(L_0, ObjectPool_1_Get_m4A4F6AD2B655F16D104EC84EA2DA1D9FE14B2684_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 135));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 141));
				il2cpp_codegen_runtime_class_init_inline(ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272_il2cpp_TypeInfo_var);
				ObjectPool_1_t252DACFE69441FA4DE4E098755CA048E3B7877BA* L_2 = ((ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272_StaticFields*)il2cpp_codegen_static_fields_for(ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272_il2cpp_TypeInfo_var))->___Pool;
				ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272* L_3 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 142));
				NullCheck(L_2);
				ObjectPool_1_Release_m00352A4DEBA12CD10F87E0CF9C13F4A3D4D74946_inline(L_2, L_3, ObjectPool_1_Release_m00352A4DEBA12CD10F87E0CF9C13F4A3D4D74946_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 142));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 143));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 136));
			ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272* L_4 = V_0;
			PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* L_5 = ___2_path;
			PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_6 = (*(PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79*)L_5);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 137));
			NullCheck((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_4);
			PathVisitor_set_Path_m8E3F004534B73D33C70C3BD20729F5987F11627B_inline((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_4, L_6, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 137));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 138));
			ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272* L_7 = V_0;
			RuntimeObject* L_8 = ___0_visitor;
			NullCheck(L_7);
			L_7->___Visitor = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&L_7->___Visitor), (void*)L_8);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 139));
			ValueAtPathVisitor_t713B7439F95F2C319B82631342796DD413260272* L_9 = V_0;
			Il2CppFullySharedGenericAny* L_10 = ___1_container;
			int32_t* L_11 = ___3_returnCode;
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_12 = ___4_parameters;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 140));
			bool L_13;
			L_13 = PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6((RuntimeObject*)L_9, L_10, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 1));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 140));
			V_1 = L_13;
			goto IL_0037;
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

IL_0037:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 144));
		bool L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryGetProperty_TisIl2CppFullySharedGenericAny_m83B306B1202AA25202ED1E04313944703F5A9D3C_gshared (Il2CppFullySharedGenericAny ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, RuntimeObject** ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_container : &___0_container), (&___1_path), (&___2_property));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 169));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 170));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 171));
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* L_0 = ___1_path;
		RuntimeObject** L_1 = ___2_property;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 172));
		bool L_2;
		L_2 = PropertyContainer_TryGetProperty_TisIl2CppFullySharedGenericAny_m88C88F028D482D463AECB560312CE67C25FAAD59((Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_container : &___0_container), L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 172));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryGetProperty_TisIl2CppFullySharedGenericAny_m9D8A9651148B96D6F483224324DF5E1139D7B6F4_gshared (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, RuntimeObject** ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_path), (&___2_property));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 173));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 174));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 175));
		Il2CppFullySharedGenericAny* L_0 = ___0_container;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* L_1 = ___1_path;
		RuntimeObject** L_2 = ___2_property;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 176));
		bool L_3;
		L_3 = PropertyContainer_TryGetProperty_TisIl2CppFullySharedGenericAny_m88C88F028D482D463AECB560312CE67C25FAAD59(L_0, L_1, L_2, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 176));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryGetProperty_TisIl2CppFullySharedGenericAny_m88C88F028D482D463AECB560312CE67C25FAAD59_gshared (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, RuntimeObject** ___2_property, int32_t* ___3_returnCode, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Get_mF6A30FA72FBF2E3181811AB561B34C17C4B9CA7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_m6F09F7230B34474465ADC6A65AAAC4124B843AAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* V_0 = NULL;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_path), (&___2_property), (&___3_returnCode));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 177));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 178));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 179));
		il2cpp_codegen_runtime_class_init_inline(GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_il2cpp_TypeInfo_var);
		ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340* L_0 = ((GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_StaticFields*)il2cpp_codegen_static_fields_for(GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_il2cpp_TypeInfo_var))->___Pool;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 180));
		NullCheck(L_0);
		GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* L_1;
		L_1 = ObjectPool_1_Get_mF6A30FA72FBF2E3181811AB561B34C17C4B9CA7F_inline(L_0, ObjectPool_1_Get_mF6A30FA72FBF2E3181811AB561B34C17C4B9CA7F_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 180));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 191));
				il2cpp_codegen_runtime_class_init_inline(GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_il2cpp_TypeInfo_var);
				ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340* L_2 = ((GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_StaticFields*)il2cpp_codegen_static_fields_for(GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_il2cpp_TypeInfo_var))->___Pool;
				GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* L_3 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 192));
				NullCheck(L_2);
				ObjectPool_1_Release_m6F09F7230B34474465ADC6A65AAAC4124B843AAD_inline(L_2, L_3, ObjectPool_1_Release_m6F09F7230B34474465ADC6A65AAAC4124B843AAD_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 192));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 193));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 181));
				GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* L_4 = V_0;
				PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* L_5 = ___1_path;
				PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_6 = (*(PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79*)L_5);
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 182));
				NullCheck((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_4);
				PathVisitor_set_Path_m8E3F004534B73D33C70C3BD20729F5987F11627B_inline((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_4, L_6, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 182));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 183));
				GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* L_7 = V_0;
				Il2CppFullySharedGenericAny* L_8 = ___0_container;
				int32_t* L_9 = ___3_returnCode;
				il2cpp_codegen_initobj((&V_1), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
				VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_10 = V_1;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 184));
				bool L_11;
				L_11 = PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6((RuntimeObject*)L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 184));
				if (L_11)
				{
					goto IL_0031_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 185));
				RuntimeObject** L_12 = ___2_property;
				il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_12, (RuntimeObject*)NULL);
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 186));
				V_2 = (bool)0;
				goto IL_0055;
			}

IL_0031_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 187));
				int32_t* L_13 = ___3_returnCode;
				GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* L_14 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 188));
				NullCheck((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_14);
				int32_t L_15;
				L_15 = PathVisitor_get_ReturnCode_m900403F09B0392B4D8C2E2E0EBD06148FCFA2734_inline((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_14, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 188));
				il2cpp_codegen_stind<int32_t>((int32_t*)L_13, (int32_t)L_15);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 189));
				RuntimeObject** L_16 = ___2_property;
				GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* L_17 = V_0;
				NullCheck(L_17);
				RuntimeObject* L_18 = L_17->___Property;
				il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_16, (RuntimeObject*)L_18);
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_18);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 190));
				int32_t* L_19 = ___3_returnCode;
				int32_t L_20 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)L_19));
				V_2 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
				goto IL_0055;
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

IL_0055:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 194));
		bool L_21 = V_2;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD90CBCB11A912316EC6A0D913E737D7F8057AF43_gshared (Il2CppFullySharedGenericAny ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_container : &___0_container), (&___1_path), (&___2_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 248));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 249));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 250));
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* L_0 = ___1_path;
		Il2CppFullySharedGenericAny* L_1 = ___2_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 251));
		bool L_2;
		L_2 = PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4F1769770A3A0B4E309335855CE106FE78D353BB((Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_container : &___0_container), L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 251));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mC1D3346E97A4E70B571368FBBD165B95EB05A64C_gshared (Il2CppFullySharedGenericAny ___0_container, String_t* ___1_name, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_container : &___0_container), (&___1_name), (&___2_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 238));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 239));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 240));
		String_t* L_0 = ___1_name;
		Il2CppFullySharedGenericAny* L_1 = ___2_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 241));
		bool L_2;
		L_2 = PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA4B822A9C5AA47E305D70016F7098A3BEB61FFA1((Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_container : &___0_container), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 241));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m31533F05E560E9B046A41755AB9131E90D48E6FC_gshared (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_path), (&___2_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 252));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 253));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 254));
		Il2CppFullySharedGenericAny* L_0 = ___0_container;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* L_1 = ___1_path;
		Il2CppFullySharedGenericAny* L_2 = ___2_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 255));
		bool L_3;
		L_3 = PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4F1769770A3A0B4E309335855CE106FE78D353BB(L_0, L_1, L_2, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 255));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA4B822A9C5AA47E305D70016F7098A3BEB61FFA1_gshared (Il2CppFullySharedGenericAny* ___0_container, String_t* ___1_name, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_name), (&___2_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 242));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 243));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 244));
		String_t* L_0 = ___1_name;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 245));
		PropertyPath__ctor_m8889FD75F8EDE2DAAD4A5491B55C292DB207A794((&V_0), L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 245));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 246));
		Il2CppFullySharedGenericAny* L_1 = ___0_container;
		Il2CppFullySharedGenericAny* L_2 = ___2_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 247));
		bool L_3;
		L_3 = PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4F1769770A3A0B4E309335855CE106FE78D353BB(L_1, (&V_0), L_2, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 247));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4F1769770A3A0B4E309335855CE106FE78D353BB_gshared (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, Il2CppFullySharedGenericAny* ___2_value, int32_t* ___3_returnCode, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t3FC78A7104DBD8F84891DCAC8F9F3301CF3A9BC9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TValue_t3FC78A7104DBD8F84891DCAC8F9F3301CF3A9BC9);
	GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* V_0 = NULL;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_path), (&___2_value), (&___3_returnCode));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 256));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 257));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 258));
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* L_0 = ___1_path;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 259));
		bool L_1;
		L_1 = PropertyPath_get_IsEmpty_m5923CD28AB201F75C64F40AED27C7E42FC5DBF50(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 259));
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 260));
		int32_t* L_2 = ___3_returnCode;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_2, (int32_t)4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 261));
		Il2CppFullySharedGenericAny* L_3 = ___2_value;
		il2cpp_codegen_initobj(L_3, SizeOf_TValue_t3FC78A7104DBD8F84891DCAC8F9F3301CF3A9BC9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 262));
		return (bool)0;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 263));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
		ObjectPool_1_t2184AA1C7CACBE62DF11E0F26B73D85AC246F2E1* L_4 = ((GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)))->___Pool;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 264));
		NullCheck(L_4);
		GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* L_5;
		L_5 = ObjectPool_1_Get_mB7CC64CDFD890311D54C24718B75099163BE4CE7_inline(L_4, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 264));
		V_0 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 265));
		GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* L_6 = V_0;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* L_7 = ___1_path;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_8 = (*(PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79*)L_7);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 266));
		NullCheck((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_6);
		PathVisitor_set_Path_m8E3F004534B73D33C70C3BD20729F5987F11627B_inline((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_6, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 266));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 267));
		GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* L_9 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 268));
		NullCheck((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_9);
		PathVisitor_set_ReadonlyVisit_m852F4CA7A95317B2AA5CBC9AB914037FC5A0CABD_inline((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_9, (bool)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 268));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 277));
				il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
				ObjectPool_1_t2184AA1C7CACBE62DF11E0F26B73D85AC246F2E1* L_10 = ((GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)))->___Pool;
				GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* L_11 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 278));
				NullCheck(L_10);
				ObjectPool_1_Release_m38E0E88A9C8581BF4FFC4E43567E6A9FD099FDA4_inline(L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 8));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 278));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 279));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 269));
				GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* L_12 = V_0;
				Il2CppFullySharedGenericAny* L_13 = ___0_container;
				int32_t* L_14 = ___3_returnCode;
				il2cpp_codegen_initobj((&V_1), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
				VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_15 = V_1;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 270));
				bool L_16;
				L_16 = PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6((RuntimeObject*)L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 7));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 270));
				if (L_16)
				{
					goto IL_0050_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 271));
				Il2CppFullySharedGenericAny* L_17 = ___2_value;
				il2cpp_codegen_initobj(L_17, SizeOf_TValue_t3FC78A7104DBD8F84891DCAC8F9F3301CF3A9BC9);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 272));
				V_2 = (bool)0;
				goto IL_0078;
			}

IL_0050_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 273));
				Il2CppFullySharedGenericAny* L_18 = ___2_value;
				GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* L_19 = V_0;
				il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 2),1)), SizeOf_TValue_t3FC78A7104DBD8F84891DCAC8F9F3301CF3A9BC9);
				il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_18, L_20, SizeOf_TValue_t3FC78A7104DBD8F84891DCAC8F9F3301CF3A9BC9);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_18, (void*)L_20);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 274));
				int32_t* L_21 = ___3_returnCode;
				GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* L_22 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 275));
				NullCheck((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_22);
				int32_t L_23;
				L_23 = PathVisitor_get_ReturnCode_m900403F09B0392B4D8C2E2E0EBD06148FCFA2734_inline((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_22, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 275));
				il2cpp_codegen_stind<int32_t>((int32_t*)L_21, (int32_t)L_23);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 276));
				goto IL_0072;
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

IL_0072:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 280));
		int32_t* L_24 = ___3_returnCode;
		int32_t L_25 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)L_24));
		return (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
	}

IL_0078:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 281));
		bool L_26 = V_2;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TrySetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE457B91E5E68120AC770811C10FF0ECFED42E631_gshared (Il2CppFullySharedGenericAny ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tFB766FD8CC805BBA619CB8BA1A30E572EAAC3452 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tFB766FD8CC805BBA619CB8BA1A30E572EAAC3452);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_tFB766FD8CC805BBA619CB8BA1A30E572EAAC3452);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_container : &___0_container), (&___1_path), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_value : &___2_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 379));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 380));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 381));
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* L_0 = ___1_path;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_value : &___2_value), SizeOf_TValue_tFB766FD8CC805BBA619CB8BA1A30E572EAAC3452);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 382));
		bool L_3;
		L_3 = PropertyContainer_TrySetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE4D41C318BA0C5E38BD7DD9635E46ACA8923A9DD((Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_container : &___0_container), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_TValue_tFB766FD8CC805BBA619CB8BA1A30E572EAAC3452): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 382));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TrySetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03A2B0ECA49EEF95A2C2722367DBA76F1DB926F9_gshared (Il2CppFullySharedGenericAny ___0_container, String_t* ___1_name, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t060CA868703BDC9CD1519270188DB171F38F3FD2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t060CA868703BDC9CD1519270188DB171F38F3FD2);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t060CA868703BDC9CD1519270188DB171F38F3FD2);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_container : &___0_container), (&___1_name), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_value : &___2_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 369));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 370));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 371));
		String_t* L_0 = ___1_name;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_value : &___2_value), SizeOf_TValue_t060CA868703BDC9CD1519270188DB171F38F3FD2);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 372));
		bool L_3;
		L_3 = PropertyContainer_TrySetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mBB92013428A9E3C36D4A188916047CA22FA2DC5D((Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_container : &___0_container), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_TValue_t060CA868703BDC9CD1519270188DB171F38F3FD2): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 372));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TrySetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE4D41C318BA0C5E38BD7DD9635E46ACA8923A9DD_gshared (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t9BA28B69B1502EED6CBDA37E8C29FEA52F455581 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t9BA28B69B1502EED6CBDA37E8C29FEA52F455581);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t9BA28B69B1502EED6CBDA37E8C29FEA52F455581);
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_path), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_value : &___2_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 383));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 384));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 385));
		Il2CppFullySharedGenericAny* L_0 = ___0_container;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* L_1 = ___1_path;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_value : &___2_value), SizeOf_TValue_t9BA28B69B1502EED6CBDA37E8C29FEA52F455581);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 386));
		bool L_4;
		L_4 = PropertyContainer_TrySetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA77CCF3362119D1AC07E905B430E798F0D470726(L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_3, L_2, SizeOf_TValue_t9BA28B69B1502EED6CBDA37E8C29FEA52F455581): *(void**)L_2), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 386));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TrySetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mBB92013428A9E3C36D4A188916047CA22FA2DC5D_gshared (Il2CppFullySharedGenericAny* ___0_container, String_t* ___1_name, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t3198CB50E03A9534123373082EEB6AB0B61CD6B9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t3198CB50E03A9534123373082EEB6AB0B61CD6B9);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t3198CB50E03A9534123373082EEB6AB0B61CD6B9);
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_name), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_value : &___2_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 373));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 374));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 375));
		String_t* L_0 = ___1_name;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 376));
		PropertyPath__ctor_m8889FD75F8EDE2DAAD4A5491B55C292DB207A794((&V_0), L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 376));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 377));
		Il2CppFullySharedGenericAny* L_1 = ___0_container;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_value : &___2_value), SizeOf_TValue_t3198CB50E03A9534123373082EEB6AB0B61CD6B9);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 378));
		bool L_4;
		L_4 = PropertyContainer_TrySetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE4D41C318BA0C5E38BD7DD9635E46ACA8923A9DD(L_1, (&V_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_3, L_2, SizeOf_TValue_t3198CB50E03A9534123373082EEB6AB0B61CD6B9): *(void**)L_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 378));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TrySetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA77CCF3362119D1AC07E905B430E798F0D470726_gshared (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, Il2CppFullySharedGenericAny ___2_value, int32_t* ___3_returnCode, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t2C792C41DD7D99A271866D481C975AF13351073B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_t2C792C41DD7D99A271866D481C975AF13351073B);
	SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE* V_0 = NULL;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_path), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_value : &___2_value), (&___3_returnCode));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 387));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 388));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 389));
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* L_0 = ___1_path;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 390));
		bool L_1;
		L_1 = PropertyPath_get_IsEmpty_m5923CD28AB201F75C64F40AED27C7E42FC5DBF50(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 390));
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 391));
		int32_t* L_2 = ___3_returnCode;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_2, (int32_t)4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 392));
		return (bool)0;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 393));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ObjectPool_1_tDF1CBAC8F45FE7A38564D25A887E0824155AB946* L_3 = ((SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Pool;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 394));
		NullCheck(L_3);
		SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE* L_4;
		L_4 = ObjectPool_1_Get_mE1B2FB27A56EDD5A042B87399DD84174F8030065_inline(L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 394));
		V_0 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 395));
		SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE* L_5 = V_0;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* L_6 = ___1_path;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_7 = (*(PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79*)L_6);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 396));
		NullCheck((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_5);
		PathVisitor_set_Path_m8E3F004534B73D33C70C3BD20729F5987F11627B_inline((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_5, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 396));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 397));
		SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_value : &___2_value), SizeOf_TValue_t2C792C41DD7D99A271866D481C975AF13351073B);
		NullCheck(L_8);
		il2cpp_codegen_write_instance_field_data(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),1), L_9, SizeOf_TValue_t2C792C41DD7D99A271866D481C975AF13351073B);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 404));
				il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
				ObjectPool_1_tDF1CBAC8F45FE7A38564D25A887E0824155AB946* L_10 = ((SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Pool;
				SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE* L_11 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 405));
				NullCheck(L_10);
				ObjectPool_1_Release_m3E9E58DBD42DBEFA51281AF24D47E6CDAA9AB58B_inline(L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 7));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 405));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 406));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 398));
				SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE* L_12 = V_0;
				Il2CppFullySharedGenericAny* L_13 = ___0_container;
				int32_t* L_14 = ___3_returnCode;
				il2cpp_codegen_initobj((&V_1), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
				VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_15 = V_1;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 399));
				bool L_16;
				L_16 = PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6((RuntimeObject*)L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 6));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 399));
				if (L_16)
				{
					goto IL_0042_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 400));
				V_2 = (bool)0;
				goto IL_005e;
			}

IL_0042_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 401));
				int32_t* L_17 = ___3_returnCode;
				SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE* L_18 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 402));
				NullCheck((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_18);
				int32_t L_19;
				L_19 = PathVisitor_get_ReturnCode_m900403F09B0392B4D8C2E2E0EBD06148FCFA2734_inline((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_18, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 402));
				il2cpp_codegen_stind<int32_t>((int32_t*)L_17, (int32_t)L_19);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 403));
				goto IL_0058;
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

IL_0058:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 407));
		int32_t* L_20 = ___3_returnCode;
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)L_20));
		return (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
	}

IL_005e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 408));
		bool L_22 = V_2;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyDefinition_DecodeSignature_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03090965A254EB4E3C5BAA2B6D8BB38CC5B766F5_gshared (PropertyDefinition_t88695666F682918458265E17792F5759C9B7E04E* __this, RuntimeObject* ___0_provider, Il2CppFullySharedGenericAny ___1_genericContext, MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SignatureDecoder_2_t2ED4CD7EA3167D9C3937FF59955B043EE8D90772 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
	const uint32_t SizeOf_TGenericContext_tC670869BBF48E08F4FDFC91A3A0272BC01FEBE29 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_MethodSignature_1_t65EFC8786683DFE5C2BA6C7D223288C8C39B9AD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TGenericContext_tC670869BBF48E08F4FDFC91A3A0272BC01FEBE29);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TGenericContext_tC670869BBF48E08F4FDFC91A3A0272BC01FEBE29);
	const MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB L_7 = alloca(SizeOf_MethodSignature_1_t65EFC8786683DFE5C2BA6C7D223288C8C39B9AD5);
	SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A V_0 = alloca(SizeOf_SignatureDecoder_2_t2ED4CD7EA3167D9C3937FF59955B043EE8D90772);
	memset(V_0, 0, SizeOf_SignatureDecoder_2_t2ED4CD7EA3167D9C3937FF59955B043EE8D90772);
	BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_provider;
		MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F* L_1 = __this->____reader;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_genericContext : &___1_genericContext), SizeOf_TGenericContext_tC670869BBF48E08F4FDFC91A3A0272BC01FEBE29);
		SignatureDecoder_2__ctor_mE9E4545341ADC55D8511126A371C234FD5CF26AF((SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*)V_0, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_3, L_2, SizeOf_TGenericContext_tC670869BBF48E08F4FDFC91A3A0272BC01FEBE29): *(void**)L_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F* L_4 = __this->____reader;
		BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F L_5;
		L_5 = PropertyDefinition_get_Signature_m41EAF500084BA256ABE806F44DF8A0E77F4B437D(__this, NULL);
		NullCheck(L_4);
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203 L_6;
		L_6 = MetadataReader_GetBlobReader_m16ED58EC4011DEA06AF78C51DAE94667BDFFCFBA(L_4, L_5, NULL);
		V_1 = L_6;
		SignatureDecoder_2_DecodeMethodSignature_m3CCFD8E0277778BE3ACCB4D477C67E9DBC319D3F((SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*)V_0, (&V_1), (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB*)L_7, il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_MethodSignature_1_t65EFC8786683DFE5C2BA6C7D223288C8C39B9AD5);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyDefinition_DecodeSignature_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03090965A254EB4E3C5BAA2B6D8BB38CC5B766F5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_provider, Il2CppFullySharedGenericAny ___1_genericContext, MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* il2cppRetVal, const RuntimeMethod* method)
{
	PropertyDefinition_t88695666F682918458265E17792F5759C9B7E04E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PropertyDefinition_t88695666F682918458265E17792F5759C9B7E04E>(__this);
	PropertyDefinition_DecodeSignature_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03090965A254EB4E3C5BAA2B6D8BB38CC5B766F5(_thisAdjusted, ___0_provider, ___1_genericContext, il2cppRetVal, method);
	return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_ReadonlyVisit_m852F4CA7A95317B2AA5CBC9AB914037FC5A0CABD_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathVisitor_set_ReadonlyVisit_m852F4CA7A95317B2AA5CBC9AB914037FC5A0CABD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PathVisitor_set_ReadonlyVisit_m852F4CA7A95317B2AA5CBC9AB914037FC5A0CABD_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2583));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2584));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2585));
		bool L_0 = ___0_value;
		__this->___U3CReadonlyVisitU3Ek__BackingField = L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_t6568D3E8B246E33BDECAEAB6801BDB4C954A4E70_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppSharedGenericObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41847));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41848));
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B7_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B6_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41849));
		Il2CppSharedGenericObject* L_0 = __this->___m_FreshlyReleased;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41850));
		Il2CppSharedGenericObject* L_1 = __this->___m_FreshlyReleased;
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41851));
		Il2CppSharedGenericObject** L_2 = (Il2CppSharedGenericObject**)(&__this->___m_FreshlyReleased);
		il2cpp_codegen_initobj(L_2, sizeof(Il2CppSharedGenericObject*));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41852));
		goto IL_0074;
	}

IL_0022:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41853));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_3 = __this->___m_List;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41854));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41854));
		if (L_4)
		{
			goto IL_004d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41855));
		Func_1_t566D4A654882E282E54CDC3A001E05486F913903* L_5 = __this->___m_CreateFunc;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41856));
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_6;
		L_6 = Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41856));
		V_0 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41857));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41858));
		int32_t L_7;
		L_7 = ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41858));
		V_1 = L_7;
		int32_t L_8 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41859));
		ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_inline(__this, ((int32_t)il2cpp_codegen_add(L_8, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41859));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41860));
		goto IL_0074;
	}

IL_004d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41861));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_9 = __this->___m_List;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41862));
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41862));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41863));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_11 = __this->___m_List;
		int32_t L_12 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41864));
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41864));
		V_0 = L_13;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41865));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_14 = __this->___m_List;
		int32_t L_15 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41866));
		NullCheck(L_14);
		List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C(L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41866));
	}

IL_0074:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41867));
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_16 = __this->___m_ActionOnGet;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_17 = L_16;
		if (L_17)
		{
			G_B7_0 = L_17;
			goto IL_0080;
		}
		G_B6_0 = L_17;
	}
	{
		goto IL_0086;
	}

IL_0080:
	{
		Il2CppSharedGenericObject* L_18 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41868));
		NullCheck(G_B7_0);
		Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_inline(G_B7_0, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41868));
	}

IL_0086:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41869));
		Il2CppSharedGenericObject* L_19 = V_0;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, Il2CppSharedGenericObject* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_t6568D3E8B246E33BDECAEAB6801BDB4C954A4E70_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_element));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41875));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41876));
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B2_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B1_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B9_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B8_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41877));
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_0 = __this->___m_ActionOnRelease;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		Il2CppSharedGenericObject* L_2 = ___0_element;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41878));
		NullCheck(G_B2_0);
		Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_inline(G_B2_0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41878));
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41879));
		Il2CppSharedGenericObject* L_3 = __this->___m_FreshlyReleased;
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41880));
		Il2CppSharedGenericObject* L_4 = ___0_element;
		__this->___m_FreshlyReleased = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FreshlyReleased), (void*)L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41881));
		return;
	}

IL_0027:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41882));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41883));
		int32_t L_5;
		L_5 = ObjectPool_1_get_CountInactive_m40351B6BE62E0944A0813C07869822EC0D1E8D26(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41883));
		int32_t L_6 = __this->___m_MaxSize;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0042;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41884));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_7 = __this->___m_List;
		Il2CppSharedGenericObject* L_8 = ___0_element;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41885));
		NullCheck(L_7);
		List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41885));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41886));
		return;
	}

IL_0042:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41887));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41888));
		int32_t L_9;
		L_9 = ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41888));
		V_0 = L_9;
		int32_t L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41889));
		ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_10, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41889));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41890));
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_11 = __this->___m_ActionOnDestroy;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_12 = L_11;
		if (L_12)
		{
			G_B9_0 = L_12;
			goto IL_005d;
		}
		G_B8_0 = L_12;
	}
	{
		return;
	}

IL_005d:
	{
		Il2CppSharedGenericObject* L_13 = ___0_element;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41891));
		NullCheck(G_B9_0);
		Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_inline(G_B9_0, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41891));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41892));
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_gshared_inline (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_t6568D3E8B246E33BDECAEAB6801BDB4C954A4E70_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41811));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41812));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41813));
		int32_t L_0 = __this->___U3CCountAllU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_t6568D3E8B246E33BDECAEAB6801BDB4C954A4E70_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41814));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41815));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 41816));
		int32_t L_0 = ___0_value;
		__this->___U3CCountAllU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
