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

struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Element_t179C2EB2265F9878720AC84FD76D0A65EFD7F61E;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Burst[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Collections[];
IL2CPP_EXTERN_C RuntimeClass* Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeType* Element_t179C2EB2265F9878720AC84FD76D0A65EFD7F61E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985  : public RuntimeObject
{
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
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
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C  : public RuntimeObject
{
};
struct HashCode64_1_t25B99E9F7F998CC07CCA13124E03920779BFF803 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
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
struct v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_OffsetPadding[1];
			uint8_t ___Byte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_OffsetPadding[2];
			uint8_t ___Byte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_OffsetPadding[3];
			uint8_t ___Byte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_OffsetPadding[4];
			uint8_t ___Byte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_OffsetPadding[5];
			uint8_t ___Byte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_OffsetPadding[6];
			uint8_t ___Byte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_OffsetPadding[7];
			uint8_t ___Byte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___SByte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_OffsetPadding[1];
			int8_t ___SByte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_OffsetPadding[2];
			int8_t ___SByte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_OffsetPadding[3];
			int8_t ___SByte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_OffsetPadding[4];
			int8_t ___SByte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_OffsetPadding[5];
			int8_t ___SByte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_OffsetPadding[6];
			int8_t ___SByte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_OffsetPadding[7];
			int8_t ___SByte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___UShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_OffsetPadding[2];
			uint16_t ___UShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_OffsetPadding[4];
			uint16_t ___UShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_OffsetPadding[6];
			uint16_t ___UShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___SShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_OffsetPadding[2];
			int16_t ___SShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_OffsetPadding[4];
			int16_t ___SShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_OffsetPadding[6];
			int16_t ___SShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_OffsetPadding[4];
			uint32_t ___UInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___SInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_OffsetPadding[4];
			int32_t ___SInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ULong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___SLong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_OffsetPadding[4];
			float ___Float1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Double0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_forAlignmentOnly;
		};
	};
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct Array_t3B8F006A80A48C83471DE3516556F1AFE6873381 
{
	union
	{
		struct
		{
		};
		uint8_t Array_t3B8F006A80A48C83471DE3516556F1AFE6873381__padding[1];
	};
};
struct StreamingStateData_tB4ECCAB2ECCD0555A32604F161D9B80D9FA42B3A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___Acc;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Acc_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Buffer_OffsetPadding[64];
			uint8_t ___Buffer;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Buffer_OffsetPadding_forAlignmentOnly[64];
			uint8_t ___Buffer_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IsHash64_OffsetPadding[320];
			int32_t ___IsHash64;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___IsHash64_OffsetPadding_forAlignmentOnly[320];
			int32_t ___IsHash64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___BufferedSize_OffsetPadding[324];
			int32_t ___BufferedSize;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___BufferedSize_OffsetPadding_forAlignmentOnly[324];
			int32_t ___BufferedSize_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___NbStripesSoFar_OffsetPadding[328];
			int32_t ___NbStripesSoFar;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___NbStripesSoFar_OffsetPadding_forAlignmentOnly[328];
			int32_t ___NbStripesSoFar_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___TotalLength_OffsetPadding[336];
			int64_t ___TotalLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___TotalLength_OffsetPadding_forAlignmentOnly[336];
			int64_t ___TotalLength_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Seed_OffsetPadding[344];
			uint64_t ___Seed;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Seed_OffsetPadding_forAlignmentOnly[344];
			uint64_t ___Seed_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SecretKey_OffsetPadding[352];
			uint8_t ___SecretKey;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SecretKey_OffsetPadding_forAlignmentOnly[352];
			uint8_t ___SecretKey_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____PadEnd_OffsetPadding[540];
			uint8_t ____PadEnd;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____PadEnd_OffsetPadding_forAlignmentOnly[540];
			uint8_t ____PadEnd_forAlignmentOnly;
		};
	};
};
struct U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD__padding[32];
	};
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153 
{
	intptr_t ___m_Node;
	int32_t ___Version;
};
struct v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_OffsetPadding[1];
			uint8_t ___Byte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_OffsetPadding[2];
			uint8_t ___Byte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_OffsetPadding[3];
			uint8_t ___Byte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_OffsetPadding[4];
			uint8_t ___Byte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_OffsetPadding[5];
			uint8_t ___Byte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_OffsetPadding[6];
			uint8_t ___Byte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_OffsetPadding[7];
			uint8_t ___Byte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_OffsetPadding[8];
			uint8_t ___Byte8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_OffsetPadding[9];
			uint8_t ___Byte9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_OffsetPadding[10];
			uint8_t ___Byte10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_OffsetPadding[11];
			uint8_t ___Byte11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_OffsetPadding[12];
			uint8_t ___Byte12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_OffsetPadding[13];
			uint8_t ___Byte13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_OffsetPadding[14];
			uint8_t ___Byte14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_OffsetPadding[15];
			uint8_t ___Byte15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___SByte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_OffsetPadding[1];
			int8_t ___SByte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_OffsetPadding[2];
			int8_t ___SByte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_OffsetPadding[3];
			int8_t ___SByte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_OffsetPadding[4];
			int8_t ___SByte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_OffsetPadding[5];
			int8_t ___SByte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_OffsetPadding[6];
			int8_t ___SByte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_OffsetPadding[7];
			int8_t ___SByte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_OffsetPadding[8];
			int8_t ___SByte8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_OffsetPadding[9];
			int8_t ___SByte9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_OffsetPadding[10];
			int8_t ___SByte10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_OffsetPadding[11];
			int8_t ___SByte11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_OffsetPadding[12];
			int8_t ___SByte12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_OffsetPadding[13];
			int8_t ___SByte13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_OffsetPadding[14];
			int8_t ___SByte14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_OffsetPadding[15];
			int8_t ___SByte15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___UShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_OffsetPadding[2];
			uint16_t ___UShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_OffsetPadding[4];
			uint16_t ___UShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_OffsetPadding[6];
			uint16_t ___UShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_OffsetPadding[8];
			uint16_t ___UShort4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_OffsetPadding[10];
			uint16_t ___UShort5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_OffsetPadding[12];
			uint16_t ___UShort6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_OffsetPadding[14];
			uint16_t ___UShort7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___SShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_OffsetPadding[2];
			int16_t ___SShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_OffsetPadding[4];
			int16_t ___SShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_OffsetPadding[6];
			int16_t ___SShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_OffsetPadding[8];
			int16_t ___SShort4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_OffsetPadding[10];
			int16_t ___SShort5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_OffsetPadding[12];
			int16_t ___SShort6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_OffsetPadding[14];
			int16_t ___SShort7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_OffsetPadding[4];
			uint32_t ___UInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_OffsetPadding[8];
			uint32_t ___UInt2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_OffsetPadding[12];
			uint32_t ___UInt3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___SInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_OffsetPadding[4];
			int32_t ___SInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_OffsetPadding[8];
			int32_t ___SInt2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_OffsetPadding[12];
			int32_t ___SInt3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ULong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_OffsetPadding[8];
			uint64_t ___ULong1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___SLong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_OffsetPadding[8];
			int64_t ___SLong1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_OffsetPadding[4];
			float ___Float1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_OffsetPadding[8];
			float ___Float2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_OffsetPadding[12];
			float ___Float3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Double0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_OffsetPadding[8];
			double ___Double1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_OffsetPadding[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_OffsetPadding_forAlignmentOnly[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_forAlignmentOnly;
		};
	};
};
struct StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020 
{
	StreamingStateData_tB4ECCAB2ECCD0555A32604F161D9B80D9FA42B3A ___State;
};
struct StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 
{
	U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD ___Bits;
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
struct Element_t179C2EB2265F9878720AC84FD76D0A65EFD7F61E 
{
	int64_t ___TypeHash;
	void* ___m_Data;
	int32_t ___m_Size;
	int32_t ___m_Align;
	Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153 ___m_AudioHandle;
	Element_t179C2EB2265F9878720AC84FD76D0A65EFD7F61E* ___m_NextElement;
};
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985_StaticFields
{
	Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* ___defaultComparer;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crctab;
};
struct HashCode64_1_t25B99E9F7F998CC07CCA13124E03920779BFF803_StaticFields
{
	int64_t ___Value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_StaticFields
{
	int32_t ___SECRET_LIMIT;
	int32_t ___NB_STRIPES_PER_BLOCK;
	int32_t ___INTERNAL_BUFFER_SIZE;
	int32_t ___INTERNAL_BUFFER_STRIPES;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C_gshared (int32_t ___0_len, int32_t ___1_imm8, Il2CppFullySharedGenericStruct ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6_gshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* UnsafeUtilityExtensions_AddressOf_TisIl2CppFullySharedGenericStruct_m9A8A98C3D874841DE9AB55CBCFD69D17C27A0E2A_gshared_inline (Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_mDAEE7836D30B1E69218DA92D10DEFB59679D311A_gshared (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD_gshared (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisIl2CppFullySharedGenericAny_m469AED5D9ACBE5277201D8FD554BBB838C1256CE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_gshared_inline (Il2CppFullySharedGenericStruct* ___0_thing, const RuntimeMethod* method) ;

inline EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline)(method);
}
inline Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* Comparer_1_get_Default_m9BA7A3EA0D33B540EFC408B0C9C2B69F7A0C9E76 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* (*) (const RuntimeMethod*))Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___0_aindex, int32_t ___1_bindex, bool ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___0_aindex, int32_t ___1_bindex, const RuntimeMethod* method) ;
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204 (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123 (int32_t ___0_len, int32_t ___1_imm8, int32_t ___2_intRes2, const RuntimeMethod* method) ;
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C (int32_t ___0_len, int32_t ___1_imm8, Il2CppFullySharedGenericStruct ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6 (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6_gshared)(___0_ptr, ___1_max, method);
}
inline void* UnsafeUtilityExtensions_AddressOf_TisIl2CppFullySharedGenericStruct_m9A8A98C3D874841DE9AB55CBCFD69D17C27A0E2A_inline (Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method)
{
	return ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))UnsafeUtilityExtensions_AddressOf_TisIl2CppFullySharedGenericStruct_m9A8A98C3D874841DE9AB55CBCFD69D17C27A0E2A_gshared_inline)(___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_mD0C172FBC9AB99BC72DF8CC3665ABB61658AB9E5 (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, void* ___0_input, int32_t ___1_length, const RuntimeMethod* method) ;
inline void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method)
{
	((  void (*) (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared)(__this, ___0_input, method);
}
inline Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_mDAEE7836D30B1E69218DA92D10DEFB59679D311A (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___3_label, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2, const RuntimeMethod*))Array_Resize_TisIl2CppFullySharedGenericStruct_mDAEE7836D30B1E69218DA92D10DEFB59679D311A_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_label, method);
}
inline Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mA60C117B1C01C122EB2D509DD4EADE4FB44C2150 (void* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___3_label, int64_t ___4_size, int32_t ___5_align, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380 (void* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, int64_t ___4_size, int32_t ___5_align, const RuntimeMethod* method) ;
inline int64_t BurstRuntime_GetHashCode64_TisIl2CppFullySharedGenericStruct_m2DEFC0A879FEBC27379455B1D64DE42EC272E789_inline (const RuntimeMethod* method)
{
	return ((  int64_t (*) (const RuntimeMethod*))BurstRuntime_GetHashCode64_TisIl2CppFullySharedGenericAny_m469AED5D9ACBE5277201D8FD554BBB838C1256CE_gshared_inline)(method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared)(method);
}
inline void* ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_inline (Il2CppFullySharedGenericStruct* ___0_thing, const RuntimeMethod* method)
{
	return ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_gshared_inline)(___0_thing, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_12 = L_4;
	const Il2CppFullySharedGenericStruct L_20 = L_4;
	const Il2CppFullySharedGenericStruct L_35 = L_4;
	const Il2CppFullySharedGenericStruct L_39 = L_4;
	const Il2CppFullySharedGenericStruct L_52 = L_4;
	const Il2CppFullySharedGenericStruct L_65 = L_4;
	const Il2CppFullySharedGenericStruct L_156 = L_4;
	const Il2CppFullySharedGenericStruct L_21 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_36 = L_21;
	const Il2CppFullySharedGenericStruct L_40 = L_21;
	const Il2CppFullySharedGenericStruct L_53 = L_21;
	const Il2CppFullySharedGenericStruct L_66 = L_21;
	const Il2CppFullySharedGenericStruct L_157 = L_21;
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppFullySharedGenericStruct V_7 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_7, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_8 = false;
	Il2CppFullySharedGenericStruct V_9 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_9, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	Il2CppFullySharedGenericStruct V_43 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_43, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), V_7, V_9, (&V_10), (&V_36));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25433));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25434));
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25435));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25436));
		V_0 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25437));
		V_1 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25438));
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25439));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25440));
		goto IL_01ea;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25441));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25442));
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = V_3;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_4, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, (int32_t)L_3)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_7, L_4, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25443));
		int32_t L_5 = V_3;
		int32_t L_6 = ___1_alen;
		V_8 = (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25444));
		bool L_7 = V_8;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25445));
		V_0 = (bool)1;
	}

IL_0033:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25446));
		V_1 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25447));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25448));
		goto IL_01d6;
	}

IL_003d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25449));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25450));
		Il2CppFullySharedGenericStruct* L_8 = ___2_b;
		int32_t L_9 = V_4;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		uint32_t L_11 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_12, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, (int32_t)L_11)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_9, L_12, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25451));
		int32_t L_13 = V_4;
		int32_t L_14 = ___3_blen;
		V_11 = (bool)((((int32_t)L_13) == ((int32_t)L_14))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25452));
		bool L_15 = V_11;
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25453));
		V_1 = (bool)1;
	}

IL_005e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25454));
		int32_t L_16 = ___5_imm8;
		V_13 = ((int32_t)(((int32_t)(L_16>>2))&3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25455));
		int32_t L_17 = V_13;
		V_12 = L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25456));
		int32_t L_18 = V_12;
		switch (L_18)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25457));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25458));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_19;
		L_19 = EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25458));
		il2cpp_codegen_memcpy(L_20, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_21, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25459));
		NullCheck(L_19);
		bool L_22;
		L_22 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_19, L_20, L_21);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25459));
		V_10 = L_22;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25460));
		bool L_23 = V_0;
		bool L_24 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_23) == ((int32_t)0))? 1 : 0)&(int32_t)L_24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25461));
		bool L_25 = V_14;
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25462));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25463));
		goto IL_00c4;
	}

IL_00a3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25464));
		bool L_26 = V_0;
		if (!L_26)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_27 = V_1;
		G_B13_0 = ((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25465));
		bool L_28 = V_15;
		if (!L_28)
		{
			goto IL_00b8;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25466));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25467));
		goto IL_00c4;
	}

IL_00b8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25468));
		bool L_29 = V_0;
		bool L_30 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_29&(int32_t)L_30));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25469));
		bool L_31 = V_16;
		if (!L_31)
		{
			goto IL_00c4;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25470));
		V_10 = (bool)0;
	}

IL_00c4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25471));
		goto IL_01c2;
	}

IL_00c9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25472));
		int32_t L_32 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_32&1))) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25473));
		bool L_33 = V_17;
		if (!L_33)
		{
			goto IL_00ed;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25474));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25475));
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_34;
		L_34 = Comparer_1_get_Default_m9BA7A3EA0D33B540EFC408B0C9C2B69F7A0C9E76(il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25475));
		il2cpp_codegen_memcpy(L_35, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_36, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25476));
		NullCheck(L_34);
		int32_t L_37;
		L_37 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_34, L_35, L_36);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25476));
		V_10 = (bool)((((int32_t)((((int32_t)L_37) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25477));
		goto IL_0103;
	}

IL_00ed:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25478));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25479));
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_38;
		L_38 = Comparer_1_get_Default_m9BA7A3EA0D33B540EFC408B0C9C2B69F7A0C9E76(il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25479));
		il2cpp_codegen_memcpy(L_39, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_40, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25480));
		NullCheck(L_38);
		int32_t L_41;
		L_41 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_38, L_39, L_40);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25480));
		V_10 = (bool)((((int32_t)((((int32_t)L_41) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25481));
		bool L_42 = V_0;
		bool L_43 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_42) == ((int32_t)0))? 1 : 0)&(int32_t)L_43));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25482));
		bool L_44 = V_18;
		if (!L_44)
		{
			goto IL_0114;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25483));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25484));
		goto IL_0135;
	}

IL_0114:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25485));
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_011d;
		}
	}
	{
		bool L_46 = V_1;
		G_B26_0 = ((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25486));
		bool L_47 = V_19;
		if (!L_47)
		{
			goto IL_0129;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25487));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25488));
		goto IL_0135;
	}

IL_0129:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25489));
		bool L_48 = V_0;
		bool L_49 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_48&(int32_t)L_49));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25490));
		bool L_50 = V_20;
		if (!L_50)
		{
			goto IL_0135;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25491));
		V_10 = (bool)0;
	}

IL_0135:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25492));
		goto IL_01c2;
	}

IL_013a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25493));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25494));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_51;
		L_51 = EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25494));
		il2cpp_codegen_memcpy(L_52, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_53, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25495));
		NullCheck(L_51);
		bool L_54;
		L_54 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_51, L_52, L_53);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25495));
		V_10 = L_54;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25496));
		bool L_55 = V_0;
		bool L_56 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_55) == ((int32_t)0))? 1 : 0)&(int32_t)L_56));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25497));
		bool L_57 = V_21;
		if (!L_57)
		{
			goto IL_015b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25498));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25499));
		goto IL_017c;
	}

IL_015b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25500));
		bool L_58 = V_0;
		if (!L_58)
		{
			goto IL_0164;
		}
	}
	{
		bool L_59 = V_1;
		G_B36_0 = ((((int32_t)L_59) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25501));
		bool L_60 = V_22;
		if (!L_60)
		{
			goto IL_0170;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25502));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25503));
		goto IL_017c;
	}

IL_0170:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25504));
		bool L_61 = V_0;
		bool L_62 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_61&(int32_t)L_62));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25505));
		bool L_63 = V_23;
		if (!L_63)
		{
			goto IL_017c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25506));
		V_10 = (bool)1;
	}

IL_017c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25507));
		goto IL_01c2;
	}

IL_017e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25508));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25509));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_64;
		L_64 = EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25509));
		il2cpp_codegen_memcpy(L_65, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_66, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25510));
		NullCheck(L_64);
		bool L_67;
		L_67 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_64, L_65, L_66);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25510));
		V_10 = L_67;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25511));
		bool L_68 = V_0;
		bool L_69 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_68) == ((int32_t)0))? 1 : 0)&(int32_t)L_69));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25512));
		bool L_70 = V_24;
		if (!L_70)
		{
			goto IL_019f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25513));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25514));
		goto IL_01c0;
	}

IL_019f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25515));
		bool L_71 = V_0;
		if (!L_71)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_72 = V_1;
		G_B46_0 = ((((int32_t)L_72) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25516));
		bool L_73 = V_25;
		if (!L_73)
		{
			goto IL_01b4;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25517));
		V_10 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25518));
		goto IL_01c0;
	}

IL_01b4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25519));
		bool L_74 = V_0;
		bool L_75 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_74&(int32_t)L_75));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25520));
		bool L_76 = V_26;
		if (!L_76)
		{
			goto IL_01c0;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25521));
		V_10 = (bool)1;
	}

IL_01c0:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25522));
		goto IL_01c2;
	}

IL_01c2:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25523));
		int32_t L_77 = V_3;
		int32_t L_78 = V_4;
		bool L_79 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25524));
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_77, L_78, L_79, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25524));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25525));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25526));
		int32_t L_80 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_01d6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25527));
		int32_t L_81 = V_4;
		int32_t L_82 = ___4_len;
		V_27 = (bool)((((int32_t)L_81) < ((int32_t)L_82))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25528));
		bool L_83 = V_27;
		if (L_83)
		{
			goto IL_003d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25529));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25530));
		int32_t L_84 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_01ea:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25531));
		int32_t L_85 = V_3;
		int32_t L_86 = ___4_len;
		V_28 = (bool)((((int32_t)L_85) < ((int32_t)L_86))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25532));
		bool L_87 = V_28;
		if (L_87)
		{
			goto IL_0014;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25533));
		V_6 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25534));
		int32_t L_88 = ___5_imm8;
		V_30 = ((int32_t)(((int32_t)(L_88>>2))&3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25535));
		int32_t L_89 = V_30;
		V_29 = L_89;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25536));
		int32_t L_90 = V_29;
		switch (L_90)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25537));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25538));
		goto IL_0260;
	}

IL_0227:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25539));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25540));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25541));
		goto IL_024f;
	}

IL_022d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25542));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25543));
		int32_t L_91 = V_6;
		int32_t L_92 = V_4;
		int32_t L_93 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25544));
		bool L_94;
		L_94 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_92, L_93, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25544));
		if (L_94)
		{
			G_B61_0 = L_91;
			goto IL_023f;
		}
		G_B60_0 = L_91;
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_95 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_95&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25545));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25546));
		int32_t L_96 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_024f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25547));
		int32_t L_97 = V_4;
		int32_t L_98 = ___4_len;
		V_31 = (bool)((((int32_t)L_97) < ((int32_t)L_98))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25548));
		bool L_99 = V_31;
		if (L_99)
		{
			goto IL_022d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25549));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25550));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0260:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25551));
		int32_t L_101 = V_3;
		int32_t L_102 = ___4_len;
		V_32 = (bool)((((int32_t)L_101) < ((int32_t)L_102))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25552));
		bool L_103 = V_32;
		if (L_103)
		{
			goto IL_0227;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25553));
		goto IL_035a;
	}

IL_0270:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25554));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25555));
		goto IL_02bb;
	}

IL_0274:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25556));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25557));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25558));
		goto IL_02aa;
	}

IL_027a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25559));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25560));
		int32_t L_104 = V_6;
		int32_t L_105 = V_4;
		int32_t L_106 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25561));
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25561));
		if (!L_107)
		{
			G_B71_0 = L_104;
			goto IL_0297;
		}
		G_B70_0 = L_104;
	}
	{
		int32_t L_108 = V_4;
		int32_t L_109 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25562));
		bool L_110;
		L_110 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_108, 1)), L_109, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25562));
		if (L_110)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
		G_B71_0 = G_B70_0;
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_111 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_111&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25563));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25564));
		int32_t L_112 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_112, 2));
	}

IL_02aa:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25565));
		int32_t L_113 = V_4;
		int32_t L_114 = ___4_len;
		V_33 = (bool)((((int32_t)L_113) < ((int32_t)L_114))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25566));
		bool L_115 = V_33;
		if (L_115)
		{
			goto IL_027a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25567));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25568));
		int32_t L_116 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_02bb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25569));
		int32_t L_117 = V_3;
		int32_t L_118 = ___4_len;
		V_34 = (bool)((((int32_t)L_117) < ((int32_t)L_118))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25570));
		bool L_119 = V_34;
		if (L_119)
		{
			goto IL_0274;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25571));
		goto IL_035a;
	}

IL_02cb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25572));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25573));
		goto IL_02ee;
	}

IL_02cf:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25574));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25575));
		int32_t L_120 = V_6;
		int32_t L_121 = V_3;
		int32_t L_122 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25576));
		bool L_123;
		L_123 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_121, L_122, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25576));
		if (L_123)
		{
			G_B81_0 = L_120;
			goto IL_02e0;
		}
		G_B80_0 = L_120;
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_124 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_124&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25577));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25578));
		int32_t L_125 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_125, 1));
	}

IL_02ee:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25579));
		int32_t L_126 = V_3;
		int32_t L_127 = ___4_len;
		V_35 = (bool)((((int32_t)L_126) < ((int32_t)L_127))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25580));
		bool L_128 = V_35;
		if (L_128)
		{
			goto IL_02cf;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25581));
		goto IL_035a;
	}

IL_02fb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25582));
		int32_t L_129 = ___6_allOnes;
		V_6 = L_129;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25583));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25584));
		goto IL_034d;
	}

IL_0303:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25585));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25586));
		int32_t L_130 = V_3;
		V_36 = L_130;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25587));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25588));
		goto IL_033a;
	}

IL_030c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25589));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25590));
		int32_t L_131 = V_4;
		int32_t L_132 = V_36;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25591));
		bool L_133;
		L_133 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_131, L_132, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25591));
		V_37 = (bool)((((int32_t)L_133) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25592));
		bool L_134 = V_37;
		if (!L_134)
		{
			goto IL_032d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25593));
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_6 = ((int32_t)(L_135&((~((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
	}

IL_032d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25594));
		int32_t L_137 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_137, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25595));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25596));
		int32_t L_138 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_138, 1));
	}

IL_033a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25597));
		int32_t L_139 = V_4;
		int32_t L_140 = ___4_len;
		int32_t L_141 = V_3;
		V_38 = (bool)((((int32_t)L_139) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_140, L_141))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25598));
		bool L_142 = V_38;
		if (L_142)
		{
			goto IL_030c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25599));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25600));
		int32_t L_143 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_034d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25601));
		int32_t L_144 = V_3;
		int32_t L_145 = ___4_len;
		V_39 = (bool)((((int32_t)L_144) < ((int32_t)L_145))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25602));
		bool L_146 = V_39;
		if (L_146)
		{
			goto IL_0303;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25603));
		goto IL_035a;
	}

IL_035a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25604));
		V_5 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25605));
		V_1 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25606));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25607));
		goto IL_0401;
	}

IL_0366:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25608));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25609));
		int32_t L_147 = ___5_imm8;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25610));
		bool L_148 = V_40;
		if (!L_148)
		{
			goto IL_03ee;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25611));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25612));
		int32_t L_149 = ___5_imm8;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_149&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25613));
		bool L_150 = V_41;
		if (!L_150)
		{
			goto IL_03dc;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25614));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25615));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25616));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_151;
		L_151 = EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25616));
		Il2CppFullySharedGenericStruct* L_152 = ___2_b;
		int32_t L_153 = V_3;
		intptr_t L_154 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_153,NULL));
		uint32_t L_155 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_156, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_152, ((intptr_t)il2cpp_codegen_multiply(L_154, (int32_t)L_155)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_43, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_157, V_43, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25617));
		NullCheck(L_151);
		bool L_158;
		L_158 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_151, L_156, L_157);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25617));
		V_42 = L_158;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25618));
		bool L_159 = V_42;
		if (!L_159)
		{
			goto IL_03b3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25619));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25620));
		V_1 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25621));
	}

IL_03b3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25622));
		bool L_160 = V_1;
		V_44 = L_160;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25623));
		bool L_161 = V_44;
		if (!L_161)
		{
			goto IL_03ca;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25624));
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(L_163&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25625));
		goto IL_03d9;
	}

IL_03ca:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25626));
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03d9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25627));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25628));
		goto IL_03eb;
	}

IL_03dc:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25629));
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(((~L_169))&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03eb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25630));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25631));
		goto IL_03fc;
	}

IL_03ee:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25632));
		int32_t L_171 = V_5;
		int32_t L_172 = V_6;
		int32_t L_173 = V_3;
		V_5 = ((int32_t)(L_171|((int32_t)(L_172&((int32_t)(1<<((int32_t)(L_173&((int32_t)31)))))))));
	}

IL_03fc:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25633));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25634));
		int32_t L_174 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_174, 1));
	}

IL_0401:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25635));
		int32_t L_175 = V_3;
		int32_t L_176 = ___4_len;
		V_45 = (bool)((((int32_t)L_175) < ((int32_t)L_176))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25636));
		bool L_177 = V_45;
		if (L_177)
		{
			goto IL_0366;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25637));
		int32_t L_178 = V_5;
		V_46 = L_178;
		goto IL_0415;
	}

IL_0415:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25638));
		int32_t L_179 = V_46;
		return L_179;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6_gshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	memset(V_2, 0, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	int32_t V_3 = 0;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_max));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25415));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25416));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25417));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25418));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25419));
		goto IL_0037;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25420));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25421));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25422));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_0;
		L_0 = EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25422));
		Il2CppFullySharedGenericStruct* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64;
		il2cpp_codegen_memcpy(L_5, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))), SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_2, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_memcpy(L_6, V_2, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25423));
		NullCheck(L_0);
		bool L_7;
		L_7 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_0, L_5, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25423));
		V_1 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25424));
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25425));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25426));
		int32_t L_9 = V_0;
		V_3 = L_9;
		goto IL_0045;
	}

IL_0032:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25427));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25428));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0037:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25429));
		int32_t L_11 = V_0;
		int32_t L_12 = ___1_max;
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25430));
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_0005;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25431));
		int32_t L_14 = ___1_max;
		V_3 = L_14;
		goto IL_0045;
	}

IL_0045:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25432));
		int32_t L_15 = V_3;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C_gshared (int32_t ___0_len, int32_t ___1_imm8, Il2CppFullySharedGenericStruct ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_len), (&___1_imm8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_allOnesT : &___2_allOnesT), (&___3_intRes2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25334));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25335));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25336));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25337));
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25338));
		int32_t L_0 = ___1_imm8;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25339));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25340));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25341));
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0);
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		V_2 = (Il2CppFullySharedGenericStruct*)L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25342));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25343));
		goto IL_0061;
	}

IL_0022:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25344));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25345));
		int32_t L_4 = ___3_intRes2;
		int32_t L_5 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_4&((int32_t)(1<<((int32_t)(L_5&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25346));
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25347));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25348));
		Il2CppFullySharedGenericStruct* L_7 = V_2;
		int32_t L_8 = V_3;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		uint32_t L_10 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_memcpy(L_11, ___2_allOnesT, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, (int32_t)L_10)))), L_11, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, (int32_t)L_10)))), (void*)L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25349));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25350));
		goto IL_005c;
	}

IL_0049:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25351));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25352));
		Il2CppFullySharedGenericStruct* L_12 = V_2;
		int32_t L_13 = V_3;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_initobj(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))), SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25353));
	}

IL_005c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25354));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25355));
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0061:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25356));
		int32_t L_17 = V_3;
		int32_t L_18 = ___0_len;
		V_5 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25357));
		bool L_19 = V_5;
		if (L_19)
		{
			goto IL_0022;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25358));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25359));
		goto IL_0078;
	}

IL_006e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25360));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25361));
		int32_t L_20 = ___3_intRes2;
		(&V_0)->___SInt0 = L_20;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25362));
	}

IL_0078:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25363));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_21 = V_0;
		V_6 = L_21;
		goto IL_007d;
	}

IL_007d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25364));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_22 = V_6;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisIl2CppFullySharedGenericStruct_m92A1CC07F00E8D1EFF164A7AAA2CEF3A90BC8071_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, Il2CppFullySharedGenericStruct ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___7_allOnesT : &___7_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25375));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25376));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25377));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25378));
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		Il2CppFullySharedGenericStruct* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25379));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25379));
		V_0 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25380));
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25381));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25381));
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25382));
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisIl2CppFullySharedGenericStruct_m81548202F0BF107992042F154D34BCB0C7366524_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, Il2CppFullySharedGenericStruct ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___7_allOnesT : &___7_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25326));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25327));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25328));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25329));
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		Il2CppFullySharedGenericStruct* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25330));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25330));
		V_0 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25331));
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		il2cpp_codegen_memcpy(L_10, ___7_allOnesT, SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
		int32_t L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25332));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13;
		L_13 = Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C(L_8, L_9, il2cpp_codegen_memcpy(L_12, L_10, SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25332));
		V_1 = L_13;
		goto IL_0020;
	}

IL_0020:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25333));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisIl2CppFullySharedGenericStruct_m0723D40FF7E3DA850D8AF6948CB6C949F855583D_gshared (Il2CppFullySharedGenericStruct* ___0_a, Il2CppFullySharedGenericStruct* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, Il2CppFullySharedGenericStruct ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b), (&___2_len), (&___3_imm8), (&___4_allOnes), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___5_allOnesT : &___5_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25365));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25366));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25367));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25368));
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		Il2CppFullySharedGenericStruct* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25369));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25369));
		Il2CppFullySharedGenericStruct* L_4 = ___1_b;
		Il2CppFullySharedGenericStruct* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25370));
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25370));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25371));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25371));
		V_0 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25372));
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25373));
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25373));
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25374));
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisIl2CppFullySharedGenericStruct_m16F77547DC1C2BE0F6959A4B639E1210EF674C66_gshared (Il2CppFullySharedGenericStruct* ___0_a, Il2CppFullySharedGenericStruct* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, Il2CppFullySharedGenericStruct ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b), (&___2_len), (&___3_imm8), (&___4_allOnes), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___5_allOnesT : &___5_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25316));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25317));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25318));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25319));
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		Il2CppFullySharedGenericStruct* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25320));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25320));
		Il2CppFullySharedGenericStruct* L_4 = ___1_b;
		Il2CppFullySharedGenericStruct* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25321));
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25321));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25322));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25322));
		V_0 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25323));
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		il2cpp_codegen_memcpy(L_14, ___5_allOnesT, SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
		int32_t L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25324));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17;
		L_17 = Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C(L_12, L_13, il2cpp_codegen_memcpy(L_16, L_14, SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13), L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25324));
		V_1 = L_17;
		goto IL_0028;
	}

IL_0028:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25325));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_1;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t0FAE9973A0C60B49E231E1F7F01F959BFBB59552 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_input));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31245));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31246));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31247));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31248));
		Il2CppFullySharedGenericStruct* L_0 = ___0_input;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31249));
		void* L_1;
		L_1 = UnsafeUtilityExtensions_AddressOf_TisIl2CppFullySharedGenericStruct_m9A8A98C3D874841DE9AB55CBCFD69D17C27A0E2A_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31249));
		uint32_t L_2 = SizeOf_T_t0FAE9973A0C60B49E231E1F7F01F959BFBB59552;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31250));
		il2cpp_codegen_runtime_class_init_inline(StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_il2cpp_TypeInfo_var);
		StreamingState_Update_mD0C172FBC9AB99BC72DF8CC3665ABB61658AB9E5(__this, L_1, (int32_t)L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31250));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31251));
		return;
	}
}
IL2CPP_EXTERN_C  void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method)
{
	StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020>(__this);
	StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D(_thisAdjusted, ___0_input, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Allocate_TisIl2CppFullySharedGenericStruct_m040B30CAEA05884CC6EF77610B3FABB3B53AB4AD_gshared (int64_t ___0_count, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___1_label, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_count), (&___1_label));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20917));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20918));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20919));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20920));
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		int64_t L_2 = ___0_count;
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 L_3 = ___1_label;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20921));
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = Array_Resize_TisIl2CppFullySharedGenericStruct_mDAEE7836D30B1E69218DA92D10DEFB59679D311A((Il2CppFullySharedGenericStruct*)L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20921));
		V_0 = L_4;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20922));
		Il2CppFullySharedGenericStruct* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Allocate_TisIl2CppFullySharedGenericStruct_m472C3AE183E3C768741B28481DD1F012013B13A6_gshared (int64_t ___0_count, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_count), (&___1_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20911));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20912));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20913));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20914));
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		int64_t L_2 = ___0_count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20915));
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD((Il2CppFullySharedGenericStruct*)L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20915));
		V_0 = L_4;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20916));
		Il2CppFullySharedGenericStruct* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Free_TisIl2CppFullySharedGenericStruct_mA04A0C63F38A5DB9CAC0294B7DC90B9D35EACC14_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, int64_t ___1_count, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___2_label, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_pointer), (&___1_count), (&___2_label));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20932));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20933));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20934));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20935));
		Il2CppFullySharedGenericStruct* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20936));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20937));
		goto IL_0017;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20938));
		Il2CppFullySharedGenericStruct* L_3 = ___0_pointer;
		int64_t L_4 = ___1_count;
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 L_6 = ___2_label;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20939));
		Il2CppFullySharedGenericStruct* L_7;
		L_7 = Array_Resize_TisIl2CppFullySharedGenericStruct_mDAEE7836D30B1E69218DA92D10DEFB59679D311A(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20939));
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20940));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Free_TisIl2CppFullySharedGenericStruct_m6AA7597FA98F8020ABEFACEA0A1D00A384716627_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, int64_t ___1_count, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_pointer), (&___1_count), (&___2_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20923));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20924));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20925));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20926));
		Il2CppFullySharedGenericStruct* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20927));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20928));
		goto IL_0017;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20929));
		Il2CppFullySharedGenericStruct* L_3 = ___0_pointer;
		int64_t L_4 = ___1_count;
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___2_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20930));
		Il2CppFullySharedGenericStruct* L_7;
		L_7 = Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20930));
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20931));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_mDAEE7836D30B1E69218DA92D10DEFB59679D311A_gshared (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___3_label, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t463F46A118A7AA284DE9A95CCBE473111EF5DF8B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_label));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20906));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20907));
		Il2CppFullySharedGenericStruct* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 L_3 = ___3_label;
		uint32_t L_4 = SizeOf_T_t463F46A118A7AA284DE9A95CCBE473111EF5DF8B;
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		void* L_7;
		L_7 = Array_Resize_mA60C117B1C01C122EB2D509DD4EADE4FB44C2150((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20909));
		V_0 = (Il2CppFullySharedGenericStruct*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20910));
		Il2CppFullySharedGenericStruct* L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD_gshared (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4439E68F64AF98A1F1E70993ACB3E0626E7A7954 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20897));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20898));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20899));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20900));
		Il2CppFullySharedGenericStruct* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = SizeOf_T_t4439E68F64AF98A1F1E70993ACB3E0626E7A7954;
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20901));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20901));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20902));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20902));
		V_0 = (Il2CppFullySharedGenericStruct*)L_7;
		goto IL_0019;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20903));
		Il2CppFullySharedGenericStruct* L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Element_TryGetData_TisIl2CppFullySharedGenericStruct_mFDED972E2C230399C1C03BAF409EE324307371E6_gshared (Element_t179C2EB2265F9878720AC84FD76D0A65EFD7F61E* __this, Il2CppFullySharedGenericStruct* ___0_data, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Element_t179C2EB2265F9878720AC84FD76D0A65EFD7F61E_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tA88E8842F5C04E6D9B36F42EB8BF6EBC7CDDBE84 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_tA88E8842F5C04E6D9B36F42EB8BF6EBC7CDDBE84);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1935));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1936));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1937));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1938));
		int64_t L_0;
		L_0 = BurstRuntime_GetHashCode64_TisIl2CppFullySharedGenericStruct_m2DEFC0A879FEBC27379455B1D64DE42EC272E789_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1938));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1939));
		int64_t L_1 = __this->___TypeHash;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_0020;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1940));
		Il2CppFullySharedGenericStruct* L_2 = ___0_data;
		void* L_3 = __this->___m_Data;
		il2cpp_codegen_memcpy(L_4, L_3, SizeOf_T_tA88E8842F5C04E6D9B36F42EB8BF6EBC7CDDBE84);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_2, L_4, SizeOf_T_tA88E8842F5C04E6D9B36F42EB8BF6EBC7CDDBE84);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)L_2, (void*)L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1941));
		return (bool)1;
	}

IL_0020:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1942));
		Il2CppFullySharedGenericStruct* L_5 = ___0_data;
		il2cpp_codegen_initobj(L_5, SizeOf_T_tA88E8842F5C04E6D9B36F42EB8BF6EBC7CDDBE84);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1943));
		return (bool)0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* UnsafeUtilityExtensions_AddressOf_TisIl2CppFullySharedGenericStruct_m9A8A98C3D874841DE9AB55CBCFD69D17C27A0E2A_gshared_inline (Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	void* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40696));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 40697));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40698));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40699));
		Il2CppFullySharedGenericStruct* L_0 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40700));
		void* L_1;
		L_1 = ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40700));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 40701));
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisIl2CppFullySharedGenericAny_m469AED5D9ACBE5277201D8FD554BBB838C1256CE_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3496));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3497));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3498));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t25B99E9F7F998CC07CCA13124E03920779BFF803_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_gshared_inline (Il2CppFullySharedGenericStruct* ___0_thing, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_thing;
		return (void*)(L_0);
	}
}
