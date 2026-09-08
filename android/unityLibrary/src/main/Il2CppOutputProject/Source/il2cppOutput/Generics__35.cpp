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
struct VirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker<T1*, T2>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[2] = { p1, &p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4Invoker;
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4Invoker<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[4] = { p1, p2, &p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4Invoker<T1, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2* p2, T3* p3, T4* p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[4] = { &p1, p2, p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4Invoker<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[4] = { p1, p2, p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3Invoker;
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3Invoker<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[3] = { p1, p2, p3 };
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};

struct Action_1_tC2AD01C698CC29D3D7198B520BE85B4647377721;
struct Action_1_t393B4FBBC9A299946D7CE704F32E4695BCD996A8;
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
struct Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D;
struct Action_1_t741CBBCB28E18BDBDEED4AE3BD7DBEEEA526DA43;
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB;
struct BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84;
struct BaseUxmlFactory_2_t4F742F612665CD7BBE9C245A5162C30582A2574B;
struct BasicNodePool_1_t07D164A3469FD884E0698CF0E4F2A5E56853BD7C;
struct BasicNode_1_t35824621448B5C86B405174E9DDB413FA8F4CEAE;
struct BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF;
struct BidirectionalDictionary_2_t3414A66FDA7CB6E1F164010642A3CB92AC50FFC9;
struct BindItemFunc_tF35544BC5322097FC2F45938ACB01EAD7341D531;
struct BindTitleFunc_tE6495C43FD418B3193CAADC0A24C39FBDEDA7953;
struct ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3;
struct ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25;
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct ContextChangedEvent_1_t00B1296AEA558860AB20DE41277BBF3B52355C62;
struct ContextChangedEvent_1_t5291A7D16AD61587D4084611519BED7AA5A48E75;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EventCallback_1_t0614255E69CD1E3308A0278ADB7B2E8C66C5578C;
struct EventCallback_1_t03539447F1BD061DA3772B3AE6CA325E283F65A7;
struct EventCallback_1_tDE93D01AB4244ED03015ADF985CF61A9E3CA060F;
struct EventCallback_1_t927E299F0ACAE553E3F8976037FE92354F5BAE07;
struct EventCallback_1_t9806BC090007BE5DD48FCD0CB7C9F4CDC509A3FC;
struct EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30;
struct EventCallback_1_t5B1D52718EA71C8F33D11D62351463B137A59482;
struct EventCallback_1_t22AD2A21FA6E90AFC97D4E5717205808F3111FE6;
struct EventHandler_1_t522C29C2B48DA5A0C0D9F0978320FD1F630ADE69;
struct FormatFunction_1_t616362C5665618E96267910B91F413BB7F187DB5;
struct FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033;
struct Func_1_t0F02B281E8525B246DF1A36C4BE1E428DCD36F5A;
struct Func_1_tC3BAF7B1A0EE680F2FE474FE6314A25CA0ACF303;
struct Func_1_t566D4A654882E282E54CDC3A001E05486F913903;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_2_t0822DB7CB25B793E1EDE7F83940DC719C6FBEBE2;
struct Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF;
struct Func_2_t66F48BE1C5E5D84869B6957DBA63D4149268C1B2;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct ICollection_1_t84901262D9F499B251E7EA8ADBE9B13114F002E7;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IComparer_1_t4483F9B9F43C7B0F8D4FEEAE12FAFDD3F9CF81FD;
struct IComparer_1_t4C4C7A2E92FA0630C0FDE241BFC2F70420D27B9D;
struct IComparer_1_t4D9E4734559EEB5EA4155A90B23EF5376F74A9CB;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IDictionary_2_t4D3B65115D85F2C21975A2BBF4A23860F8BCD02F;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_t986316985D3B0AC24AA996998AB35A285D86920F;
struct IEnumerable_1_t66D2FC6869C4F1146457F14D113D4397E4E3C9DB;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IList_1_tEECB2FDF1D40CC877426C7AA38CEC54B29EA7DEC;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA;
struct KeyboardEventBase_1_t836FB4DE804909DC1808DACAE69320837BCC7C9A;
struct LinkedPoolItem_1_tF4B4874E569A0B91848A46D0AE7BFE55B1789C68;
struct LinkedPoolItem_1_tC28630DCE90E3EFCF04091651CBFE50029C40C6A;
struct LinkedPool_1_t229CF46A2209FA5E8F02408D0A502FA03535DC4F;
struct LinkedPool_1_t090B7B3DD18FFEDDFDD18243F158230DF5AE4B74;
struct ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C;
struct List_1_t592DF2E59D6E244DA0041698383484A07C7E0480;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t569CB45C96475FFA9C716A7CC2ADE24112D38121;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_t9DBFF1202B9CF140B233388CFB97CA59663D27D2;
struct List_1_t83F6318ECE580FCC83D7D8AB9A8841147CEF4C65;
struct ObjectPool_1_t7225A2BF0516EA3EA0D9F1730D7A0FDCA63F8031;
struct ObjectPool_1_t27DA9A29063F4CBBC8133DE1C097C71B5C7D8E74;
struct ObjectPool_1_t7A7F484F41161E301E2DA60217558DF693560F91;
struct ObjectPool_1_t49C93518012AAFD526054E56F6A2BC930C793166;
struct ObjectPool_1_t5FC06EAFF1CF75D5A94102AEB85EBD17B92324E7;
struct ObjectPool_1_tC6626AC387E62EDBD0EA56924280D44E6476EC67;
struct ObjectPool_1_t37080504ECCFF986BCF1E7D4C1D26BB929DEC7E9;
struct ObjectPool_1_t9CFCA41CD780F7424037FA2A3EE846F2FBFEE4D0;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct CustomAttributeNamedArgument_1U5BU5D_tA233268E696452C561B28FA2063F0CED7C3FBD1E;
struct CustomAttributeTypedArgument_1U5BU5D_t6D586DD688598EBC6939E9FA86CFC166E60EAB14;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct ImmutableArray_1U5BU5D_tCEE41B06D86785846C5946846FE4C147C6BB8663;
struct ImmutableArray_1U5BU5D_t594282F1DE07A5DA17EC36A9F3D8E5234760FEEE;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DebugDirectoryEntryU5BU5D_t9C82229475CC97D13B6EDF537A699295881668BE;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ExceptionRegionU5BU5D_t8CC56E34C2D28EE2F9CF4902F41737C6C1229F18;
struct ExportedTypeHandleU5BU5D_t74265AC03C48F618174C501862DF769B682825E7;
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911;
struct MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061;
struct MethodDefinitionHandleU5BU5D_t49B83D2CDA1060A8E87C18B35A839AFB52A8FFE8;
struct NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2;
struct NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A;
struct NamespaceDefinitionHandleU5BU5D_tD1270F312DA5C8852EABE4DF355D001376E63BB9;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct SectionHeaderU5BU5D_t11F8F35E6EFBCF4817877D778A965E5095F0EAA1;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct TypeDefinitionHandleU5BU5D_tF67B10F360AAB6684F510AC124CC84EEF6B041D6;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
struct AvailableDeviceU5BU5D_t47A5F4F158146E9E9066D29DB4494D96AF8F1DB5;
struct RowCountsU5BU5D_t5643308C6F852B3BEE7DF8B31FF7FC06780B13CD;
struct SectionU5BU5D_tD9582A1E07CF20F887EAC5D8887C8D0EEA4898E2;
struct SerializedSectionU5BU5D_t7E849ADE83A7712DC9EF608A4A299A1A34B995DB;
struct __Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11;
struct __Il2CppFullySharedGenericStructTypeU5BU2CU2CU5D_tC681D70011AD3015263D61F870B415DEF598E9ED;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct BaseUxmlTraits_t2A13D24373542A6401FE350C5119DE0FCE86E21E;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct CustomStyleResolvedEvent_t54D095D62773F628A6A05A4531DEE990166062E6;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct DirContext_t21CDEEFF3EC861F7698FE8DA771A2E0E0D2C09EF;
struct Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44;
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794;
struct GeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A;
struct Handler_t6FB851C86EF75451F6C6D94F0F5470324D915F23;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct ICommand_t99383C87274669A6893CB01C8F699AA1DB62D383;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
struct IUxmlAttributes_t9B6679F04874117C59014DE49C35B1841F9A1DDE;
struct IVisualElementScheduledItem_t309F1A5445514122A9E3F64182D0D8A4DE34C48F;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct TemplateAsset_tC664499D6A2637AE64DC3F73181C4CBA73664807;
struct TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Thumb_t93918EA28AB7D7A87A976861423C11037819B679;
struct Type_t;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct EqualityComparer_tF8FCE99C5DBB2F35D74728CB65346435381CFD5B;
struct Data_t6BD087CC0FA9794D342D260035A70E365224C66E;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;
struct AdditionalData_tA7EB549FE1D91AD083C7F95012F20FEE8BECCA3A;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsNewtonsoft_Json[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_AppUI[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventCallback_1_t0614255E69CD1E3308A0278ADB7B2E8C66C5578C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventCallback_1_tDE93D01AB4244ED03015ADF985CF61A9E3CA060F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thumb_t93918EA28AB7D7A87A976861423C11037819B679_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementExtensions_tA6E36E6C2791BED77322D7B6B0B87946CEF352E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0F797B959E3585E4CF289A5B8642203432D803E0;
IL2CPP_EXTERN_C String_t* _stringLiteral38A595244C9E49B61FDAA6772D8C7511AC709AD6;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral639164D7DB698099D80AD83589ECAEA1743F27EC;
IL2CPP_EXTERN_C String_t* _stringLiteral80BB150F4BBC37BDB6764729B2775DEB4394A6B2;
IL2CPP_EXTERN_C String_t* _stringLiteralA3624EE238A5278BC2F6CF42F8D45EA11C9C3048;
IL2CPP_EXTERN_C String_t* _stringLiteralADBC5E125A6A88FBAD59CAA1D79C533C8DB5910F;
IL2CPP_EXTERN_C String_t* _stringLiteralC64491AE82ED63CAB156E371CDA5644260D22419;
IL2CPP_EXTERN_C String_t* _stringLiteralCA3FCAE60DEBD49DAC9253E4D2F0597EC9486081;
IL2CPP_EXTERN_C String_t* _stringLiteralCB62B97E393533314D3C809D57CB62D3059C0EF3;
IL2CPP_EXTERN_C String_t* _stringLiteralDF7F12D5711E1949CC3A1E99E20E19B3CC359C60;
IL2CPP_EXTERN_C String_t* _stringLiteralF6B9F94DF733AF4C50B58E31E9919E508D793D8A;
IL2CPP_EXTERN_C String_t* _stringLiteralFFC5AA3E4E8A7D479AE635797BE5C940534C37F6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseUxmlTraits_get_canHaveAnyAttribute_m34EF41172370836E58DE8512FAAA340E1A9E302F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallbackEventHandler_RegisterCallback_TisCustomStyleResolvedEvent_t54D095D62773F628A6A05A4531DEE990166062E6_m667D7BACFE267AD56818889E3879640E13998401_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContextChangedEvent_1_get_context_m2F06C39C7D19A644A8FE7F2EE5BEEE435AA6CC52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DirContext_get_dir_m69D64CF26B5C54313D67072A972839958E42C6F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Draggable_get_deltaPos_m7B4A63C52DF5AE16A109104FF2C527ACA824F43E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Draggable_get_position_m274C64615BFD41CCAD640FBC66BCE05ED04C1B2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashCode_Combine_TisBufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0C592F2C64E6018B8C214FECC30E9028E279DDFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyboardEventBase_1_get_keyCode_m1F9724EFC75BE6E998EC0DB5515F7FD577257D6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyboardEventBase_1_get_shiftKey_m6F17812A43DB9076880B0ACA64DD5675FA30E418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementExtensions_RegisterContextChangedCallback_TisDirContext_t21CDEEFF3EC861F7698FE8DA771A2E0E0D2C09EF_m8EC95C954D65D1EBF28FFCD48FF8CB8D17112738_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BaseUxmlFactory_2_tA6149D400DED4B92B92C2D82EB70A3059B85E910_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BaseUxmlTraits_t2A13D24373542A6401FE350C5119DE0FCE86E21E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BasicNodePool_1_tBC6017F889D74A9D56AE55268C66F4601F303569_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BasicNode_1_tA4E8AB631F23112FD2FCD177F26C0722DC9DD89E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BatchQueryJob_2_t48C70E8BE712025D26E023D0FCFA7633CEA29B3D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BidirectionalDictionary_2_t75A123AAE37326C391563C03896F7A2E8E17787A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BufferSlice_1_t5B9D8CE9AF1D89F0B3F6BAF314CBC5212CC3DC27_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ChangingEvent_1_t1B5FAE4097384717BD9E08D75C16F36ACA6397DA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ContextChangedEvent_1_tAA1772A9B6AB92C6637AC58E0379823D71625392_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DirContext_t21CDEEFF3EC861F7698FE8DA771A2E0E0D2C09EF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Direction_t7EB108B5086E69790833C3E0B1BA05E847CF7FA8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* KeyboardEventBase_1_t1BD61B378F695A091A888EC683388EACFD9F5056_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NestedCollectionDataU2A_t6C25FF7CEBAD0853912D21624E3F64D4EE4A54F5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Thumb_t93918EA28AB7D7A87A976861423C11037819B679_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11;
struct __Il2CppFullySharedGenericStructTypeU5BU2CU2CU5D_tC681D70011AD3015263D61F870B415DEF598E9ED;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3EO_tCD3C7A92AA128658B5FCC06D79A541B2E82D6969  : public RuntimeObject
{
};
struct BaseUxmlFactory_2_t4F742F612665CD7BBE9C245A5162C30582A2574B  : public RuntimeObject
{
	Il2CppSharedGenericObject* ___m_Traits;
};
struct BidirectionalDictionary_2_t3414A66FDA7CB6E1F164010642A3CB92AC50FFC9  : public RuntimeObject
{
	RuntimeObject* ____firstToSecond;
	RuntimeObject* ____secondToFirst;
	String_t* ____duplicateFirstErrorMessage;
	String_t* ____duplicateSecondErrorMessage;
};
struct BindingsMarshaller_tAAF32A050A9F5600F156CAE7A87A327F53CDECBF  : public RuntimeObject
{
};
struct BindingsMarshaller_t12F573EB566F57DBEA13CBE4F480416CDE5CCFBB  : public RuntimeObject
{
};
struct BindingsMarshaller_t9C31BEAEB23081E9C5B4B8CD1E4AD3DE5F70C4C3  : public RuntimeObject
{
};
struct BindingsMarshaller_t05EEE44455C302D0B5684DEF2D4214368E1DBE54  : public RuntimeObject
{
};
struct BindingsMarshaller_tB806544C0AF57016A8429BA730F9A62373C6E42A  : public RuntimeObject
{
};
struct BindingsMarshaller_tB720A4321DDD580E7FDC4A96EC90595277466775  : public RuntimeObject
{
};
struct BindingsMarshaller_t19C0A0E52C154D277F0354A899ED5172499475C2  : public RuntimeObject
{
};
struct BindingsMarshaller_tEB9834915274B87CDF6DEBF8A82142855511CA95  : public RuntimeObject
{
};
struct Builder_t3FB06D16958769EE5AB08619C7EF20907C817847  : public RuntimeObject
{
	CustomAttributeNamedArgument_1U5BU5D_tA233268E696452C561B28FA2063F0CED7C3FBD1E* ____elements;
	int32_t ____count;
};
struct Builder_t8A154243BDB5C0641F400D7058D1286B073CD8A7  : public RuntimeObject
{
	CustomAttributeTypedArgument_1U5BU5D_t6D586DD688598EBC6939E9FA86CFC166E60EAB14* ____elements;
	int32_t ____count;
};
struct Builder_t8C51620373324DAD7BC2831C7303EC92EE1629D9  : public RuntimeObject
{
	ImmutableArray_1U5BU5D_tCEE41B06D86785846C5946846FE4C147C6BB8663* ____elements;
	int32_t ____count;
};
struct Builder_tDB77018BFFF1686988C90E75162DA12C28DFB228  : public RuntimeObject
{
	ImmutableArray_1U5BU5D_t594282F1DE07A5DA17EC36A9F3D8E5234760FEEE* ____elements;
	int32_t ____count;
};
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985  : public RuntimeObject
{
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct LinkedPoolItem_1_t933B28FAF0C75E4D7D299ABC26EF1397072C43E4  : public RuntimeObject
{
	BasicNode_1_t35824621448B5C86B405174E9DDB413FA8F4CEAE* ___poolNext;
};
struct LinkedPoolItem_1_tF4B4874E569A0B91848A46D0AE7BFE55B1789C68  : public RuntimeObject
{
	BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF* ___poolNext;
};
struct LinkedPool_1_t0DA7096E3317F0D74F9F53FA1B67B2193066D690  : public RuntimeObject
{
	Func_1_t0F02B281E8525B246DF1A36C4BE1E428DCD36F5A* ___m_CreateFunc;
	Action_1_tC2AD01C698CC29D3D7198B520BE85B4647377721* ___m_ResetAction;
	int32_t ___m_Limit;
	BasicNode_1_t35824621448B5C86B405174E9DDB413FA8F4CEAE* ___m_PoolFirst;
	int32_t ___U3CCountU3Ek__BackingField;
};
struct LinkedPool_1_t229CF46A2209FA5E8F02408D0A502FA03535DC4F  : public RuntimeObject
{
	Func_1_tC3BAF7B1A0EE680F2FE474FE6314A25CA0ACF303* ___m_CreateFunc;
	Action_1_t393B4FBBC9A299946D7CE704F32E4695BCD996A8* ___m_ResetAction;
	int32_t ___m_Limit;
	BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF* ___m_PoolFirst;
	int32_t ___U3CCountU3Ek__BackingField;
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
struct BaseUxmlTraits_t2A13D24373542A6401FE350C5119DE0FCE86E21E  : public RuntimeObject
{
	bool ___U3CcanHaveAnyAttributeU3Ek__BackingField;
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct Manipulator_tD5727ABA1F5AD1A50927212FAEB090E6BBCB4EBE  : public RuntimeObject
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Target;
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
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
struct BasicNodePool_1_tC6A4D3981871B022827FEC48623A7DD565857F50  : public LinkedPool_1_t0DA7096E3317F0D74F9F53FA1B67B2193066D690
{
};
struct BasicNodePool_1_t07D164A3469FD884E0698CF0E4F2A5E56853BD7C  : public LinkedPool_1_t229CF46A2209FA5E8F02408D0A502FA03535DC4F
{
};
struct BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF : public LinkedPoolItem_1_tF4B4874E569A0B91848A46D0AE7BFE55B1789C68 {};
struct BatchQueryJobStruct_1_t02ED7AA5AEE40F045EE45C945081E04D9B842826 
{
	union
	{
		struct
		{
		};
		uint8_t BatchQueryJobStruct_1_t41F9FBE3A77F98C95520E5D96CAB0EE9A9256EA4__padding[1];
	};
};
struct BatchQueryJobStruct_1_t8CABB13A754B7D73B0A22D40749F04F70B45590D 
{
	union
	{
		struct
		{
		};
		uint8_t BatchQueryJobStruct_1_t41F9FBE3A77F98C95520E5D96CAB0EE9A9256EA4__padding[1];
	};
};
struct BatchQueryJobStruct_1_tD5847B4FD2EBF84A4537C81B756312E468728716 
{
	union
	{
		struct
		{
		};
		uint8_t BatchQueryJobStruct_1_t41F9FBE3A77F98C95520E5D96CAB0EE9A9256EA4__padding[1];
	};
};
struct BatchQueryJobStruct_1_t877374A2F47EBBAE196D889124AECECA5D3E2FE4 
{
	union
	{
		struct
		{
		};
		uint8_t BatchQueryJobStruct_1_t41F9FBE3A77F98C95520E5D96CAB0EE9A9256EA4__padding[1];
	};
};
struct BatchQueryJobStruct_1_tD02271670F522966D214C80225EC7237A7A11384 
{
	union
	{
		struct
		{
		};
		uint8_t BatchQueryJobStruct_1_t41F9FBE3A77F98C95520E5D96CAB0EE9A9256EA4__padding[1];
	};
};
struct BatchQueryJobStruct_1_tEC39ADF4980C6D7BA778DB3744413CC2C6606F68 
{
	union
	{
		struct
		{
		};
		uint8_t BatchQueryJobStruct_1_t41F9FBE3A77F98C95520E5D96CAB0EE9A9256EA4__padding[1];
	};
};
struct BatchQueryJobStruct_1_t4F96B2EC16E070708A5D57602758232E7FA74F07 
{
	union
	{
		struct
		{
		};
		uint8_t BatchQueryJobStruct_1_t41F9FBE3A77F98C95520E5D96CAB0EE9A9256EA4__padding[1];
	};
};
struct BatchQueryJobStruct_1_t0A7B51587D9F8ED362C25994510FFA60CD5A0151 
{
	union
	{
		struct
		{
		};
		uint8_t BatchQueryJobStruct_1_t41F9FBE3A77F98C95520E5D96CAB0EE9A9256EA4__padding[1];
	};
};
struct BatchQueryJobStruct_1_t3CDBE6D364251EE63B3BFBAE209F1321F38147E9 
{
	union
	{
		struct
		{
		};
		uint8_t BatchQueryJobStruct_1_t41F9FBE3A77F98C95520E5D96CAB0EE9A9256EA4__padding[1];
	};
};
struct BlittableNestedCollectionMarshaller_1_t606C31679CB4DF047781DD5821EBA17B57BC2A7A 
{
	union
	{
		struct
		{
		};
		uint8_t BlittableNestedCollectionMarshaller_1_t76F0DFA2C2804D8D6BB295AEE9FF6560A6C6018E__padding[1];
	};
};
struct BlittableNestedCollectionMarshaller_1_tB81878375D06C9303ECB66ADE19A42B19ED668B7 
{
	union
	{
		struct
		{
		};
		uint8_t BlittableNestedCollectionMarshaller_1_t76F0DFA2C2804D8D6BB295AEE9FF6560A6C6018E__padding[1];
	};
};
struct Buffer_1_t6B2DAE2FF4F8AD6246F6A04CEE5FA29CEF19422D 
{
	ImmutableArray_1U5BU5D_tCEE41B06D86785846C5946846FE4C147C6BB8663* ___items;
	int32_t ___count;
};
struct Buffer_1_t239EACA3025343D562871F46126CA8EE8255202E 
{
	ImmutableArray_1U5BU5D_t594282F1DE07A5DA17EC36A9F3D8E5234760FEEE* ___items;
	int32_t ___count;
};
struct Buffer_1_tCBB489BEFDCAD5EE0BE1EB873BE0D0A5E241FAEA 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___items;
	int32_t ___count;
};
struct Buffer_1_t54C8C0B832B413110FFBDE21D62B82DA9C546D32 
{
	DebugDirectoryEntryU5BU5D_t9C82229475CC97D13B6EDF537A699295881668BE* ___items;
	int32_t ___count;
};
struct Buffer_1_t701FB265E463B6E8E2F3C86F5C4BD3C9993B1656 
{
	ExceptionRegionU5BU5D_t8CC56E34C2D28EE2F9CF4902F41737C6C1229F18* ___items;
	int32_t ___count;
};
struct Buffer_1_t348135134D14E035922419AD10862D561ABD69C7 
{
	ExportedTypeHandleU5BU5D_t74265AC03C48F618174C501862DF769B682825E7* ___items;
	int32_t ___count;
};
struct Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10 
{
	GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___items;
	int32_t ___count;
};
struct Buffer_1_t7521E85AEF5FC449DCAA3CC247C109861F668453 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___items;
	int32_t ___count;
};
struct Buffer_1_t47C9FBB1C64CF912CC2F37FD425BCFE4E740813C 
{
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___items;
	int32_t ___count;
};
struct Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14 
{
	MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___items;
	int32_t ___count;
};
struct Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD 
{
	MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___items;
	int32_t ___count;
};
struct Buffer_1_t545D0376995AD0DDF01460E83C491B2236F57B87 
{
	MethodDefinitionHandleU5BU5D_t49B83D2CDA1060A8E87C18B35A839AFB52A8FFE8* ___items;
	int32_t ___count;
};
struct Buffer_1_t709A0F0E4967DFFEC8EECF06ABBE6F9EC01E17F9 
{
	NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* ___items;
	int32_t ___count;
};
struct Buffer_1_tBE90E210345D73735EF60776EA53E7DD4965FB69 
{
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ___items;
	int32_t ___count;
};
struct Buffer_1_tBB2A10F56A949456C22CDD4C242C2515D470789F 
{
	NamespaceDefinitionHandleU5BU5D_tD1270F312DA5C8852EABE4DF355D001376E63BB9* ___items;
	int32_t ___count;
};
struct Buffer_1_t00503E4134C43DB4701D184F18454B4D372F2BC2 
{
	SectionHeaderU5BU5D_t11F8F35E6EFBCF4817877D778A965E5095F0EAA1* ___items;
	int32_t ___count;
};
struct Buffer_1_t16633545A6E7106DC31D417F7D76D2B31F6D8C01 
{
	TypeDefinitionHandleU5BU5D_tF67B10F360AAB6684F510AC124CC84EEF6B041D6* ___items;
	int32_t ___count;
};
struct Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___items;
	int32_t ___count;
};
struct Buffer_1_t2F1FCC9FC2FBF87BF1F3015D0891FB06F60E47D4 
{
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___items;
	int32_t ___count;
};
struct Buffer_1_tFEC6DEE3917E51BA06EF38506F2907B4A32FF012 
{
	AvailableDeviceU5BU5D_t47A5F4F158146E9E9066D29DB4494D96AF8F1DB5* ___items;
	int32_t ___count;
};
struct Buffer_1_t64D25AFC2780D3AD446E81528502ED1BB4AEA037 
{
	RowCountsU5BU5D_t5643308C6F852B3BEE7DF8B31FF7FC06780B13CD* ___items;
	int32_t ___count;
};
struct Buffer_1_tF6B7E4F2FA384DBAD92D3352218375632FD5AC5D 
{
	SectionU5BU5D_tD9582A1E07CF20F887EAC5D8887C8D0EEA4898E2* ___items;
	int32_t ___count;
};
struct Buffer_1_tD9E9031B4B7102C803551B647549B5D9CA5ECFF5 
{
	SerializedSectionU5BU5D_t7E849ADE83A7712DC9EF608A4A299A1A34B995DB* ___items;
	int32_t ___count;
};
struct CustomStyleProperty_1_tE4B20CAB5BCFEE711EB4A26F077DC700987C0C2D 
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
struct OutArray2D_1_t85E0053A31509EEDF78A2BADF3B945CF1F06EFB6 
{
	__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11* ___array;
};
struct OutArray3D_1_t7FA435BCB6F753967110D6CBD90FE689BD53C989 
{
	__Il2CppFullySharedGenericStructTypeU5BU2CU2CU5D_tC681D70011AD3015263D61F870B415DEF598E9ED* ___array;
};
struct OutArray_1_tF4DB147CCFAEE5BD8DF99A3201B66BB9608736DC 
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___array;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct BufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325 
{
	uint64_t ___Value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CveaIdsPathU3Ek__BackingField;
	TemplateAsset_tC664499D6A2637AE64DC3F73181C4CBA73664807* ___U3CtemplateAssetU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField;
	List_1_t9DBFF1202B9CF140B233388CFB97CA59663D27D2* ___U3CattributeOverridesU3Ek__BackingField;
	List_1_t83F6318ECE580FCC83D7D8AB9A8841147CEF4C65* ___U3CserializedDataOverridesU3Ek__BackingField;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CnamesPathU3Ek__BackingField;
};
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CveaIdsPathU3Ek__BackingField;
	TemplateAsset_tC664499D6A2637AE64DC3F73181C4CBA73664807* ___U3CtemplateAssetU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField;
	List_1_t9DBFF1202B9CF140B233388CFB97CA59663D27D2* ___U3CattributeOverridesU3Ek__BackingField;
	List_1_t83F6318ECE580FCC83D7D8AB9A8841147CEF4C65* ___U3CserializedDataOverridesU3Ek__BackingField;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CnamesPathU3Ek__BackingField;
};
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CveaIdsPathU3Ek__BackingField;
	TemplateAsset_tC664499D6A2637AE64DC3F73181C4CBA73664807* ___U3CtemplateAssetU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField;
	List_1_t9DBFF1202B9CF140B233388CFB97CA59663D27D2* ___U3CattributeOverridesU3Ek__BackingField;
	List_1_t83F6318ECE580FCC83D7D8AB9A8841147CEF4C65* ___U3CserializedDataOverridesU3Ek__BackingField;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CnamesPathU3Ek__BackingField;
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
struct IntPtr_t 
{
	void* ___m_value;
};
struct NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC 
{
	void* ___Data;
	int32_t ___Length;
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
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 
{
	int32_t ___m_Index;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
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
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
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
struct BufferSlice_1_t1E842D2C07DE009CC1E8EF86F988EAD48B4D9B6D 
{
	BufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325 ___Id;
	uint64_t ___Offset;
};
struct BufferSlice_1_t29B00994B1AA9129BFE14FFA981385A50BE87DF3 
{
	BufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325 ___Id;
	uint64_t ___Offset;
};
struct BufferSlice_1_t2BC91682829A8EBB3C738A28DC6B7BFA01F6CACA 
{
	BufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325 ___Id;
	uint64_t ___Offset;
};
struct BufferSlice_1_t2FF7E97D371623277DA3F672A4058E5AA14DB6C9 
{
	BufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325 ___Id;
	uint64_t ___Offset;
};
struct BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6 
{
	BufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325 ___Id;
	uint64_t ___Offset;
};
struct ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct Optional_1_tBBBF23375D7D33E286E8D0D789DB5F2437EAE81D 
{
	bool ___isSet;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
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
struct BorderStyle_t3322FB9BD12AB53BB75E90835092D1E405198011 
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
struct Dir_tFE4CDBFE7A0F9B03060F0EED435079EEBB769BAF 
{
	int32_t ___value__;
};
struct Direction_t7EB108B5086E69790833C3E0B1BA05E847CF7FA8 
{
	int32_t ___value__;
};
struct EventModifiers_tB9DEEF73F8FC4C312B8E0C34336C7D9C3023B270 
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
struct GraphicEntry_t006D0D561923B1AE1B1B607C233D4B219ADFA76A 
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___actual;
	bool ___replaced;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___vectorImage;
};
struct GraphicEntry_t006D0D561923B1AE1B1B607C233D4B219ADFA76A_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___actual;
	int32_t ___replaced;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___vectorImage;
};
struct GraphicEntry_t006D0D561923B1AE1B1B607C233D4B219ADFA76A_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___actual;
	int32_t ___replaced;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___vectorImage;
};
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	int32_t ___value__;
};
struct LanguageDirection_t30A3B6BBCEE6A6F57641E4E008E0DCC40603558C 
{
	int32_t ___value__;
};
struct MouseButton_tEF578B8F208D798E053BC320C29FCBB655E24454 
{
	int32_t ___value__;
};
struct OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D 
{
	intptr_t ___arrayRef;
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
struct RenderHints_t4032FC4AB3FD946FD2A484865B8861730D9035E7 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E 
{
	int32_t ___value__;
};
struct TouchType_t84F82C73BC1A6012141735AD84DA67AA7F7AB43F 
{
	int32_t ___value__;
};
struct TrickleDown_t862EABE449B6C94F79F2B1D713990C35ABADDF38 
{
	int32_t ___value__;
};
struct ValueDisplayMode_t3C1105F1FD82B0FC1EF4E44223AC91FF57FD92E8 
{
	int32_t ___value__;
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
struct DragDirection_t44A81C7DEB7D3D5A07C66B856AC07ABA6BD91853 
{
	int32_t ___value__;
};
struct EventPropagation_t024AF56F7A787C03AA21B065B624553EF52E7B83 
{
	int32_t ___value__;
};
struct LifeCycleStatus_tEE500629F5431B574B8047EB70864747D348D38C 
{
	int32_t ___value__;
};
struct Passes_t07F0D19E37816EDD99646E6E7E9AB0002CCD0E77 
{
	int32_t ___value__;
};
struct BasicNode_1_t35824621448B5C86B405174E9DDB413FA8F4CEAE  : public LinkedPoolItem_1_t933B28FAF0C75E4D7D299ABC26EF1397072C43E4
{
	BasicNode_1_t35824621448B5C86B405174E9DDB413FA8F4CEAE* ___next;
	GraphicEntry_t006D0D561923B1AE1B1B607C233D4B219ADFA76A ___data;
};
struct NativeArray_1_tBA3163AA88A022A6A36D5C29D7EC2AE3B84C20B9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t911ED904190815D65BBD999C6D3A908C018FD94D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tCAC2EBEC42DFCCBAFD38471779E9F4B9D1B2AB9E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1472D4C5CB985CA28971B7796449C6095B495146 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7F8CFACBE82F083C6666DC3586D9070DD8507AD8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA4768FCBF582434C6D0AD6E05DBDCA0720353D8C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5567821FD9C18A04E8A660376DC94DAE37C0184A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3363B8E835CEFCA68080BBA7E14CB78552879E45 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0E2917029F593D82CA97EC0B8B09C05F2718B3D1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t20BE45D476923D27AF31DA5AAD57163CBD87A863 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
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
struct AdditionalStyle_t437A23C3272D957745765469A7073987455000F1 
{
	float ___outlineOffset;
	float ___outlineWidth;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___outlineColor;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___shadowOffset;
	float ___shadowSpread;
	float ___shadowBlur;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___shadowColor;
	bool ___shadowInset;
	float ___borderWidth;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderColor;
	int32_t ___borderStyle;
	int32_t ___borderDotFactor;
	float ___borderSpeed;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
};
struct AdditionalStyle_t437A23C3272D957745765469A7073987455000F1_marshaled_pinvoke
{
	float ___outlineOffset;
	float ___outlineWidth;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___outlineColor;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___shadowOffset;
	float ___shadowSpread;
	float ___shadowBlur;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___shadowColor;
	int32_t ___shadowInset;
	float ___borderWidth;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderColor;
	int32_t ___borderStyle;
	int32_t ___borderDotFactor;
	float ___borderSpeed;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
};
struct AdditionalStyle_t437A23C3272D957745765469A7073987455000F1_marshaled_com
{
	float ___outlineOffset;
	float ___outlineWidth;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___outlineColor;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___shadowOffset;
	float ___shadowSpread;
	float ___shadowBlur;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___shadowColor;
	int32_t ___shadowInset;
	float ___borderWidth;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderColor;
	int32_t ___borderStyle;
	int32_t ___borderDotFactor;
	float ___borderSpeed;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
};
struct AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___m_Result;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___m_CancellationToken;
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_LinkedCancellation;
};
struct AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke* ___m_Result;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke ___m_CancellationToken;
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_LinkedCancellation;
};
struct AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com** ___m_Result;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com ___m_CancellationToken;
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_LinkedCancellation;
};
struct DirContext_t21CDEEFF3EC861F7698FE8DA771A2E0E0D2C09EF  : public RuntimeObject
{
	int32_t ___U3CdirU3Ek__BackingField;
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
struct ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 
{
	int32_t ___U3CbuttonU3Ek__BackingField;
	int32_t ___U3CmodifiersU3Ek__BackingField;
	int32_t ___U3CclickCountU3Ek__BackingField;
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
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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
struct Action_1_t393B4FBBC9A299946D7CE704F32E4695BCD996A8  : public MulticastDelegate_t
{
};
struct AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB  : public AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40
{
};
struct BatchQueryJob_2_t50F677876040ED702A806ACC467D448B724608C7 
{
	NativeArray_1_tBA3163AA88A022A6A36D5C29D7EC2AE3B84C20B9 ___commands;
	NativeArray_1_t0E2917029F593D82CA97EC0B8B09C05F2718B3D1 ___results;
};
struct BatchQueryJob_2_t47EAE303730BD7BC02E257307FDF7E46EC6C8220 
{
	NativeArray_1_t911ED904190815D65BBD999C6D3A908C018FD94D ___commands;
	NativeArray_1_t0E2917029F593D82CA97EC0B8B09C05F2718B3D1 ___results;
};
struct BatchQueryJob_2_t36AD83DFDE540CC351C0D054AA11827044AA0CB1 
{
	NativeArray_1_tCAC2EBEC42DFCCBAFD38471779E9F4B9D1B2AB9E ___commands;
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___results;
};
struct BatchQueryJob_2_t6EF74BF49F7B79229114BF29AD82FBB556C335D2 
{
	NativeArray_1_t7F8CFACBE82F083C6666DC3586D9070DD8507AD8 ___commands;
	NativeArray_1_t1472D4C5CB985CA28971B7796449C6095B495146 ___results;
};
struct BatchQueryJob_2_tEF3BB6CF374751A11835150B0E23440FA681AF4A 
{
	NativeArray_1_tA4768FCBF582434C6D0AD6E05DBDCA0720353D8C ___commands;
	NativeArray_1_t1472D4C5CB985CA28971B7796449C6095B495146 ___results;
};
struct BatchQueryJob_2_t7CB242BD2A9589F4172689CFD0206845BCC9A341 
{
	NativeArray_1_t5567821FD9C18A04E8A660376DC94DAE37C0184A ___commands;
	NativeArray_1_t1472D4C5CB985CA28971B7796449C6095B495146 ___results;
};
struct BatchQueryJob_2_t131736AA952B1DD00F63E6ED925DEB0DA556B799 
{
	NativeArray_1_t3363B8E835CEFCA68080BBA7E14CB78552879E45 ___commands;
	NativeArray_1_t0E2917029F593D82CA97EC0B8B09C05F2718B3D1 ___results;
};
struct BatchQueryJob_2_tC24543DEBDED47F7F6EABA74DA286021E969ADA4 
{
	NativeArray_1_t20BE45D476923D27AF31DA5AAD57163CBD87A863 ___commands;
	NativeArray_1_t0E2917029F593D82CA97EC0B8B09C05F2718B3D1 ___results;
};
struct BatchQueryJob_2_t7D5A93A4AD033A8A940C89F3761A0DD654E6B912 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___commands;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___results;
};
struct BindItemFunc_tF35544BC5322097FC2F45938ACB01EAD7341D531  : public MulticastDelegate_t
{
};
struct BindTitleFunc_tE6495C43FD418B3193CAADC0A24C39FBDEDA7953  : public MulticastDelegate_t
{
};
struct EventBase_1_t8F2F1D9AFA0135C6A2C8450AC50D706047340414  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct EventBase_1_t98943FD54B6CC5594A770E114C66121F3D27BFC8  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct EventBase_1_tE6C4382B2E2569BBA63F949CACA04FC463065B43  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct EventBase_1_t0ED1648DE9684E52641473C8C89BD7F094C77E86  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct EventBase_1_t28A1B2B8FC43209D9402B4CC45E8C562DFDC26AD  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct EventBase_1_tCDEFDAD598AAC8D3B106EB41834C9619E903374E  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct EventBase_1_t730BB171C1C7F183359949BD5F4BA81AFE9A35CE  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct EventCallback_1_t0614255E69CD1E3308A0278ADB7B2E8C66C5578C  : public MulticastDelegate_t
{
};
struct EventCallback_1_tDE93D01AB4244ED03015ADF985CF61A9E3CA060F  : public MulticastDelegate_t
{
};
struct EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30  : public MulticastDelegate_t
{
};
struct FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033  : public MulticastDelegate_t
{
};
struct Func_1_tC3BAF7B1A0EE680F2FE474FE6314A25CA0ACF303  : public MulticastDelegate_t
{
};
struct Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct MouseManipulator_tE6C609D476BDF311E2934791E620CF833BB4097D  : public Manipulator_tD5727ABA1F5AD1A50927212FAEB090E6BBCB4EBE
{
	List_1_t569CB45C96475FFA9C716A7CC2ADE24112D38121* ___U3CactivatorsU3Ek__BackingField;
	ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 ___m_currentActivator;
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
struct ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3 : public EventBase_1_t8F2F1D9AFA0135C6A2C8450AC50D706047340414 {};
struct ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25 : public EventBase_1_t98943FD54B6CC5594A770E114C66121F3D27BFC8 {};
struct ContextChangedEvent_1_t00B1296AEA558860AB20DE41277BBF3B52355C62  : public EventBase_1_tE6C4382B2E2569BBA63F949CACA04FC463065B43
{
	DirContext_t21CDEEFF3EC861F7698FE8DA771A2E0E0D2C09EF* ___U3CcontextU3Ek__BackingField;
};
struct ContextChangedEvent_1_t5291A7D16AD61587D4084611519BED7AA5A48E75 : public EventBase_1_t0ED1648DE9684E52641473C8C89BD7F094C77E86 {};
struct KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA  : public EventBase_1_t730BB171C1C7F183359949BD5F4BA81AFE9A35CE
{
	int32_t ___U3CmodifiersU3Ek__BackingField;
	Il2CppChar ___U3CcharacterU3Ek__BackingField;
	int32_t ___U3CkeyCodeU3Ek__BackingField;
};
struct KeyboardEventBase_1_t836FB4DE804909DC1808DACAE69320837BCC7C9A  : public EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F
{
	int32_t ___U3CmodifiersU3Ek__BackingField;
	Il2CppChar ___U3CcharacterU3Ek__BackingField;
	int32_t ___U3CkeyCodeU3Ek__BackingField;
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
struct CustomStyleResolvedEvent_t54D095D62773F628A6A05A4531DEE990166062E6  : public EventBase_1_t28A1B2B8FC43209D9402B4CC45E8C562DFDC26AD
{
};
struct GeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A  : public EventBase_1_tCDEFDAD598AAC8D3B106EB41834C9619E903374E
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___U3ColdRectU3Ek__BackingField;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___U3CnewRectU3Ek__BackingField;
	int32_t ___U3ClayoutPassU3Ek__BackingField;
};
struct LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA 
{
	int32_t ___m_Manager;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Nodes;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Configs;
};
struct PointerManipulator_t54685840D83869016F04FD137BCC1B07016B2E72  : public MouseManipulator_tE6C609D476BDF311E2934791E620CF833BB4097D
{
	int32_t ___m_CurrentPointerId;
};
struct KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C  : public KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA
{
};
struct LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 ___m_Handle;
};
struct Pressable_tEE6D0D0E5E4201AB20B78307ED9A2F2006FEE939  : public PointerManipulator_t54685840D83869016F04FD137BCC1B07016B2E72
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___clicked;
	Action_1_t741CBBCB28E18BDBDEED4AE3BD7DBEEEA526DA43* ___clickedWithEventInfo;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___longClicked;
	bool ___U3CactiveU3Ek__BackingField;
	int32_t ___U3ClongPressDurationU3Ek__BackingField;
	bool ___U3CkeepEventPropagationU3Ek__BackingField;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_MoveEvent;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___m_TouchMoveEvent;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_UpEvent;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___m_TouchUpEvent;
	RuntimeObject* ___m_DeferDeactivate;
	RuntimeObject* ___m_DeferLongPress;
	RuntimeObject* ___m_PostProcessDisabledState;
	int32_t ___m_PointerId;
	RuntimeObject* ___m_Command;
	EventHandler_1_t522C29C2B48DA5A0C0D9F0978320FD1F630ADE69* ___propertyChanged;
};
struct Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44  : public Pressable_tEE6D0D0E5E4201AB20B78307ED9A2F2006FEE939
{
	Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D* ___m_DownHandler;
	Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D* ___m_DragHandler;
	Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D* ___m_UpHandler;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPos;
	int32_t ___U3CdragDirectionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaPosU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaStartPosU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ClocalPositionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CstartPositionU3Ek__BackingField;
	bool ___U3CisDownU3Ek__BackingField;
	bool ___U3ChasMovedU3Ek__BackingField;
	bool ___U3CctrlKeyU3Ek__BackingField;
	bool ___U3CshiftKeyU3Ek__BackingField;
	bool ___U3CaltKeyU3Ek__BackingField;
	bool ___U3CactionKeyU3Ek__BackingField;
	float ___U3CthresholdU3Ek__BackingField;
	Func_2_t0822DB7CB25B793E1EDE7F83940DC719C6FBEBE2* ___U3CacceptDragU3Ek__BackingField;
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
struct BaseVisualElement_t3A15DE2A0BD8897937D4BCEC14B42D08ACE99346  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	AdditionalData_tA7EB549FE1D91AD083C7F95012F20FEE8BECCA3A* ___U3CUnity_AppUI_UI_IAdditionalDataHolder_additionalDataU3Ek__BackingField;
};
struct Thumb_t93918EA28AB7D7A87A976861423C11037819B679  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794* ___m_Content;
	ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794* ___m_ValueLabelContainer;
	TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* ___m_ValueLabel;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Fill;
	int32_t ___m_DisplayValueLabel;
};
struct ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794  : public BaseVisualElement_t3A15DE2A0BD8897937D4BCEC14B42D08ACE99346
{
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RT;
	AdditionalStyle_t437A23C3272D957745765469A7073987455000F1 ___m_Style;
	Optional_1_tBBBF23375D7D33E286E8D0D789DB5F2437EAE81D ___m_OutlineColorByCode;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousSize;
	Optional_1_tBBBF23375D7D33E286E8D0D789DB5F2437EAE81D ___m_BackgroundColorByCode;
	int32_t ___m_PassMask;
};
struct BaseSlider_2_t8E24E24AC7EC8F3B3D6AD999CDE5802F78DCDE20  : public ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794
{
	Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___m_DraggerManipulator;
	int32_t ___m_HighValue;
	int32_t ___m_LowValue;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_PreviousValue;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_Value;
	int32_t ___m_CurrentDirection;
	Func_2_t66F48BE1C5E5D84869B6957DBA63D4149268C1B2* ___m_ValidateValue;
	int32_t ___m_Orientation;
	int32_t ___m_Step;
	int32_t ___m_ShiftStep;
	bool ___m_SwapThumbs;
	String_t* ___m_FormatString;
	FormatFunction_1_t616362C5665618E96267910B91F413BB7F187DB5* ___m_FormatFunc;
	int32_t ___m_DraggedThumbIndex;
	RuntimeObject* ___U3CcomparerU3Ek__BackingField;
	RuntimeObject* ___U3CthumbComparerU3Ek__BackingField;
};
struct BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84 : public ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794 {};
struct U3CU3EO_tCD3C7A92AA128658B5FCC06D79A541B2E82D6969_StaticFields
{
	Func_1_tC3BAF7B1A0EE680F2FE474FE6314A25CA0ACF303* ___U3C0U3E__Create;
	Action_1_t393B4FBBC9A299946D7CE704F32E4695BCD996A8* ___U3C1U3E__Reset;
};
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985_StaticFields
{
	Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* ___defaultComparer;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
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
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct BatchQueryJobStruct_1_t02ED7AA5AEE40F045EE45C945081E04D9B842826_StaticFields
{
	intptr_t ___jobReflectionData;
};
struct BatchQueryJobStruct_1_t8CABB13A754B7D73B0A22D40749F04F70B45590D_StaticFields
{
	intptr_t ___jobReflectionData;
};
struct BatchQueryJobStruct_1_tD5847B4FD2EBF84A4537C81B756312E468728716_StaticFields
{
	intptr_t ___jobReflectionData;
};
struct BatchQueryJobStruct_1_t877374A2F47EBBAE196D889124AECECA5D3E2FE4_StaticFields
{
	intptr_t ___jobReflectionData;
};
struct BatchQueryJobStruct_1_tD02271670F522966D214C80225EC7237A7A11384_StaticFields
{
	intptr_t ___jobReflectionData;
};
struct BatchQueryJobStruct_1_tEC39ADF4980C6D7BA778DB3744413CC2C6606F68_StaticFields
{
	intptr_t ___jobReflectionData;
};
struct BatchQueryJobStruct_1_t4F96B2EC16E070708A5D57602758232E7FA74F07_StaticFields
{
	intptr_t ___jobReflectionData;
};
struct BatchQueryJobStruct_1_t0A7B51587D9F8ED362C25994510FFA60CD5A0151_StaticFields
{
	intptr_t ___jobReflectionData;
};
struct BatchQueryJobStruct_1_t3CDBE6D364251EE63B3BFBAE209F1321F38147E9_StaticFields
{
	intptr_t ___jobReflectionData;
};
struct BlittableNestedCollectionMarshaller_1_t606C31679CB4DF047781DD5821EBA17B57BC2A7A_StaticFields
{
	int32_t ___AlignOfT;
};
struct BlittableNestedCollectionMarshaller_1_tB81878375D06C9303ECB66ADE19A42B19ED668B7_StaticFields
{
	int32_t ___AlignOfT;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_StaticFields
{
	CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___Default;
};
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0_StaticFields
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___focusableProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___tabIndexProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___delegatesFocusProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___canGrabFocusProperty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_StaticFields
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___kZero;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
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
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_StaticFields
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___Invalid;
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
struct Thumb_t93918EA28AB7D7A87A976861423C11037819B679_StaticFields
{
	EventCallback_1_t927E299F0ACAE553E3F8976037FE92354F5BAE07* ___k_OnPointerFocusIn;
	EventCallback_1_t9806BC090007BE5DD48FCD0CB7C9F4CDC509A3FC* ___k_OnPointerFocusOut;
	EventCallback_1_t927E299F0ACAE553E3F8976037FE92354F5BAE07* ___k_OnKeyboardFocusIn;
};
struct ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794_StaticFields
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___backgroundColorProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___outlineColorProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___passMaskProperty;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_Material;
	VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ___k_Vertices;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___k_Indices;
	int32_t ___k_Rect;
	int32_t ___k_OutlineThickness;
	int32_t ___k_OutlineColor;
	int32_t ___k_OutlineOffset;
	int32_t ___k_AASoftness;
	int32_t ___k_Phase;
	int32_t ___k_ShadowOffset;
	int32_t ___k_Radiuses;
	int32_t ___k_Color;
	int32_t ___k_BackgroundImage;
	CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 ___k_UssBorderWidth;
	CustomStyleProperty_1_tE4B20CAB5BCFEE711EB4A26F077DC700987C0C2D ___k_UssBorderColor;
	CustomStyleProperty_1_t6871E5DBF19AB4DC7E1134B32A03B7A458D52E9F ___k_UssBorderStyle;
	CustomStyleProperty_1_t6871E5DBF19AB4DC7E1134B32A03B7A458D52E9F ___k_UssBorderDotFactor;
	CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 ___k_UssBorderSpeed;
	CustomStyleProperty_1_tE4B20CAB5BCFEE711EB4A26F077DC700987C0C2D ___k_UssBackgroundColor;
	CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 ___k_UssOutlineWidth;
	CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 ___k_UssOutlineOffset;
	CustomStyleProperty_1_tE4B20CAB5BCFEE711EB4A26F077DC700987C0C2D ___k_UssOutlineColor;
	CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 ___k_UssShadowOffsetX;
	CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 ___k_UssShadowOffsetY;
	CustomStyleProperty_1_t6871E5DBF19AB4DC7E1134B32A03B7A458D52E9F ___k_UssShadowType;
	CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 ___k_UssShadowSpread;
	CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 ___k_UssShadowBlur;
	CustomStyleProperty_1_tE4B20CAB5BCFEE711EB4A26F077DC700987C0C2D ___k_UssShadowColor;
	int32_t ___k_BorderThickness;
	int32_t ___k_BorderColor;
	int32_t ___k_BorderStyle;
	int32_t ___k_BorderDotFactor;
	int32_t ___k_BorderSpeed;
	int32_t ___k_ShadowColor;
	int32_t ___k_ShadowInset;
	int32_t ___k_Ratio;
	int32_t ___k_BackgroundImageTransform;
	int32_t ___k_BackgroundSize;
	Handler_t6FB851C86EF75451F6C6D94F0F5470324D915F23* ___s_Handler;
};
struct BaseSlider_2_t8E24E24AC7EC8F3B3D6AD999CDE5802F78DCDE20_StaticFields
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___lowValueProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___highValueProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___formatStringProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___formatFunctionProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___valueProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___invalidProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___validateValueProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___orientationProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___stepProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___shiftStepProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___swapThumbsProperty;
};
struct BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___lowValueProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___highValueProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___formatStringProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___formatFunctionProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___valueProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___invalidProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___validateValueProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___orientationProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___stepProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___shiftStepProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___swapThumbsProperty;
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
struct __Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11  : public RuntimeArray
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
	inline uint8_t* GetAddressAt(il2cpp_array_size_t i0, il2cpp_array_size_t i1)
	{
		il2cpp_array_size_t i0Bound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i0, i0Bound);
		il2cpp_array_size_t i1Bound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i1, i1Bound);

		il2cpp_array_size_t index = il2cpp_array_calc_byte_offset(this, i0 * i1Bound + i1);
		return m_Items + index;
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t i0, il2cpp_array_size_t i1)
	{
		il2cpp_array_size_t i1Bound = bounds[1].length;

		il2cpp_array_size_t index = il2cpp_array_calc_byte_offset(this, i0 * i1Bound + i1);
		return m_Items + index;
	}
};
struct __Il2CppFullySharedGenericStructTypeU5BU2CU2CU5D_tC681D70011AD3015263D61F870B415DEF598E9ED  : public RuntimeArray
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
	inline uint8_t* GetAddressAt(il2cpp_array_size_t i0, il2cpp_array_size_t i1, il2cpp_array_size_t i2)
	{
		il2cpp_array_size_t i0Bound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i0, i0Bound);
		il2cpp_array_size_t i1Bound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i1, i1Bound);
		il2cpp_array_size_t i2Bound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i2, i2Bound);

		il2cpp_array_size_t index = il2cpp_array_calc_byte_offset(this, (i0 * i1Bound + i1) * i2Bound + i2);
		return m_Items + index;
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t i0, il2cpp_array_size_t i1, il2cpp_array_size_t i2)
	{
		il2cpp_array_size_t i1Bound = bounds[1].length;
		il2cpp_array_size_t i2Bound = bounds[2].length;

		il2cpp_array_size_t index = il2cpp_array_calc_byte_offset(this, (i0 * i1Bound + i1) * i2Bound + i2);
		return m_Items + index;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_orientation_m96EF324815D9303E04A1279D90037787CEF49927_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_invalid_m231B9FD6E07171433A9B436E5B059595E7173A85_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_swapThumbs_m72C281B22EA79EA9B3D7A45914337623239B521F_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCallback_1__ctor_m4FA52DD3A2C04411AB70840FB07831BC7AE7A993_gshared (EventCallback_1_t22AD2A21FA6E90AFC97D4E5717205808F3111FE6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_RegisterCallback_TisIl2CppSharedGenericObject_mADA60DA6265A096768601EDE87108F04A585DF5C_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_1_t5B1D52718EA71C8F33D11D62351463B137A59482* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementExtensions_RegisterContextChangedCallback_TisIl2CppFullySharedGenericAny_m85ACE46FD0B5C0D9F2AA4C4DEC8426C78D2CAB1E_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, EventCallback_1_t03539447F1BD061DA3772B3AE6CA325E283F65A7* ___1_callback, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseSlider_2_get_thumbComparer_mFA5827386358B531C8C93665C223668056C19079_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* ChangeEvent_1_GetPooled_mAE42CDB3455238CA5C981AE506F09F526FB29881_gshared (Il2CppFullySharedGenericAny ___0_previousValue, Il2CppFullySharedGenericAny ___1_newValue, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSlider_2_get_value_mF335EBB27619640856C7FCE15498756C7E3F3ACC_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseSlider_2_get_invalid_m69A4FEE6AB40F6B44C06DC60B0E7EB32DDA98D0E_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_value_mCA4DEFB0DD712279EC029F5BA93A3F9888B178E6_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContextChangedEvent_1_get_context_m31DD301EAFA717B91D1C0A1ACE8E5DBC11A5BE1F_gshared_inline (ContextChangedEvent_1_t5291A7D16AD61587D4084611519BED7AA5A48E75* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseSlider_2_get_comparer_mC30DA5A2B0762867DC4D02862BB1C3E968610321_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_FindClosestThumbValue_mE23F071F78843DCA416E46CCFD37CF01605E6517_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, int32_t* ___2_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChangingEvent_1_set_previousValue_m467BD2D8305170CE3AF022E5C508D19499695BB0_gshared_inline (ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChangingEvent_1_set_newValue_mFFC68A1445E1D8D76B22D8471F02C8038AD32818_gshared_inline (ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaseSlider_2_GetNormalizedValueFromDrag_m887E6D97C58BF9949AD9F766E2CDF2F9F9283CCF_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseSlider_2_HandleSwap_mBEC909D04B30FD2FBFE62DB1BEE372780E9CED2D_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_values, int32_t ___1_thumbIndex, Il2CppFullySharedGenericStruct ___2_newThumbValue, int32_t ___3_dir, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSlider_2_get_orientation_m54531884E5C519A4D0C40D26CF9776F07F334E5E_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_FindClosestThumbValue_m55A4D60A4627306FCDDC172F46092EDBB0D05412_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct ___0_v, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, int32_t* ___2_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyboardEventBase_1_get_keyCode_mAA76399AE86C7D052CE8E0F734F06918AB10B737_gshared_inline (KeyboardEventBase_1_t836FB4DE804909DC1808DACAE69320837BCC7C9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyboardEventBase_1_get_shiftKey_mC89C6EE9BA2846C43867FEE16897C6AA923CA708_gshared (KeyboardEventBase_1_t836FB4DE804909DC1808DACAE69320837BCC7C9A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseSlider_2_get_swapThumbs_mB9B92B107973C9BE48DDB86738BB27116B49B1CB_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Activator_CreateInstance_TisIl2CppFullySharedGenericAny_m68F3B5F53DBB1741E028DA541BE07A3D2382138D_gshared (Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicNode_1__ctor_m5F6BD5BB6499D84BA6B02A525E787403F72CFA78_gshared (BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_gshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedPool_1__ctor_mA90FF0FF6ACA48E315BEBF9094DECAEB5E96D732_gshared (LinkedPool_1_t090B7B3DD18FFEDDFDD18243F158230DF5AE4B74* __this, Func_1_t566D4A654882E282E54CDC3A001E05486F913903* ___0_createFunc, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___1_resetAction, int32_t ___2_limit, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedPoolItem_1__ctor_m4AB21551B2F384CB3BEF93476D5987D1435F3D8A_gshared (LinkedPoolItem_1_tC28630DCE90E3EFCF04091651CBFE50029C40C6A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchQueryJob_2__ctor_m52B5B1BDEE537675680BDEFA6BF9D38FC31DA09B_gshared (BatchQueryJob_2_t7D5A93A4AD033A8A940C89F3761A0DD654E6B912* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_commands, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_results, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidirectionalDictionary_2__ctor_m3DEDCB25ADA7434626E019394CCA18604C9666E0_gshared (BidirectionalDictionary_2_t3414A66FDA7CB6E1F164010642A3CB92AC50FFC9* __this, RuntimeObject* ___0_firstEqualityComparer, RuntimeObject* ___1_secondEqualityComparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidirectionalDictionary_2__ctor_m62510A3C100B871B916158FFAD89A803EA1672B6_gshared (BidirectionalDictionary_2_t3414A66FDA7CB6E1F164010642A3CB92AC50FFC9* __this, RuntimeObject* ___0_firstEqualityComparer, RuntimeObject* ___1_secondEqualityComparer, String_t* ___2_duplicateFirstErrorMessage, String_t* ___3_duplicateSecondErrorMessage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m244D396B16E7F73DE815F4FFA6F35DD89B6ED7CB_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* UnsafeUtility_AsPointer_TisIl2CppFullySharedGenericAny_m7634F721F2472F0B576B143F4179633869A2FA75_gshared_inline (Il2CppFullySharedGenericAny* ___0_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject** UnsafeUtility_ClassAsRef_TisIl2CppSharedGenericObject_mED347FFB189955A213A94F3C6AB5F7EE945B57A9_gshared (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInstantiateOperation_1__ctor_m3E48F09CFE1A0F8060541BE23BCFE2BB4B9526B6_gshared (AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB* __this, intptr_t ___0_ptr, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m87850B36DC83BF310EC6136E6D14DC5634F96F05_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC NoAllocHelpers_CreateReadOnlySpan_TisIl2CppFullySharedGenericAny_mC3833ABA237F5EEEE4815E56BC0773989DC842BB_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m0EA73CEAF52AB31E2713E59AB88541332594D914_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSlice_1__ctor_m6A9A6D44D17454B752C78055938E767084F8FE72_gshared (BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6* __this, BufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325 ___0_id, uint64_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m1A9E2DCBEF63A15C4DD60438D4F6D1ED2D0F4C90_gshared (Il2CppFullySharedGenericAny ___0_value1, Il2CppFullySharedGenericAny ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferSlice_1_GetHashCode_mA19E9A8E5C93A5991B403D3F178F1D86ABBD3115_gshared (BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSlice_1_Equals_m374BFA17526A0F475A2DBE475A5E86A288156105_gshared (BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6* __this, BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSlice_1_Equals_mF33B6211EE3684C98B95601B93A69CF31E4BCD42_gshared (BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49_gshared (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Buffer_1_ToArray_mFA9AEA7D664154CB0695FD1ED98B3C9539146194_gshared (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared (RuntimeObject* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;

inline Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290 (const RuntimeMethod* method)
{
	return ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared)(method);
}
inline Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* Comparer_1_get_Default_m9BA7A3EA0D33B540EFC408B0C9C2B69F7A0C9E76 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* (*) (const RuntimeMethod*))Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExVisualElement__ctor_m3042A692009D0AAEED7239D3E06DCB1025CB8620 (ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExVisualElement_set_passMask_mEC908F41B90239CF9C013AA20D3FBF635E3CC860 (ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline void BaseSlider_2_set_orientation_m96EF324815D9303E04A1279D90037787CEF49927 (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, int32_t, const RuntimeMethod*))BaseSlider_2_set_orientation_m96EF324815D9303E04A1279D90037787CEF49927_gshared)(__this, ___0_value, method);
}
inline void BaseSlider_2_set_invalid_m231B9FD6E07171433A9B436E5B059595E7173A85 (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, bool ___0_value, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, bool, const RuntimeMethod*))BaseSlider_2_set_invalid_m231B9FD6E07171433A9B436E5B059595E7173A85_gshared)(__this, ___0_value, method);
}
inline void BaseSlider_2_set_swapThumbs_m72C281B22EA79EA9B3D7A45914337623239B521F (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, bool ___0_value, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, bool, const RuntimeMethod*))BaseSlider_2_set_swapThumbs_m72C281B22EA79EA9B3D7A45914337623239B521F_gshared)(__this, ___0_value, method);
}
inline void EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5 (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventCallback_1__ctor_m4FA52DD3A2C04411AB70840FB07831BC7AE7A993_gshared)(__this, ___0_object, ___1_method, method);
}
inline void CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method)
{
	((  void (*) (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*, EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30*, int32_t, const RuntimeMethod*))CallbackEventHandler_RegisterCallback_TisIl2CppSharedGenericObject_mADA60DA6265A096768601EDE87108F04A585DF5C_gshared)(__this, ___0_callback, ___1_useTrickleDown, method);
}
inline void EventCallback_1__ctor_mA03324C646FE93909402ABA6C660D14D22ACE4F8 (EventCallback_1_tDE93D01AB4244ED03015ADF985CF61A9E3CA060F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventCallback_1_tDE93D01AB4244ED03015ADF985CF61A9E3CA060F*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventCallback_1__ctor_m4FA52DD3A2C04411AB70840FB07831BC7AE7A993_gshared)(__this, ___0_object, ___1_method, method);
}
inline void CallbackEventHandler_RegisterCallback_TisCustomStyleResolvedEvent_t54D095D62773F628A6A05A4531DEE990166062E6_m667D7BACFE267AD56818889E3879640E13998401 (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_1_tDE93D01AB4244ED03015ADF985CF61A9E3CA060F* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method)
{
	((  void (*) (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*, EventCallback_1_tDE93D01AB4244ED03015ADF985CF61A9E3CA060F*, int32_t, const RuntimeMethod*))CallbackEventHandler_RegisterCallback_TisIl2CppSharedGenericObject_mADA60DA6265A096768601EDE87108F04A585DF5C_gshared)(__this, ___0_callback, ___1_useTrickleDown, method);
}
inline void EventCallback_1__ctor_m64A88572B5AD45BBC7789FFEB7C0F10EEBD183CA (EventCallback_1_t0614255E69CD1E3308A0278ADB7B2E8C66C5578C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventCallback_1_t0614255E69CD1E3308A0278ADB7B2E8C66C5578C*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventCallback_1__ctor_m4FA52DD3A2C04411AB70840FB07831BC7AE7A993_gshared)(__this, ___0_object, ___1_method, method);
}
inline void VisualElementExtensions_RegisterContextChangedCallback_TisDirContext_t21CDEEFF3EC861F7698FE8DA771A2E0E0D2C09EF_m8EC95C954D65D1EBF28FFCD48FF8CB8D17112738 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, EventCallback_1_t0614255E69CD1E3308A0278ADB7B2E8C66C5578C* ___1_callback, const RuntimeMethod* method)
{
	((  void (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, EventCallback_1_t0614255E69CD1E3308A0278ADB7B2E8C66C5578C*, const RuntimeMethod*))VisualElementExtensions_RegisterContextChangedCallback_TisIl2CppFullySharedGenericAny_m85ACE46FD0B5C0D9F2AA4C4DEC8426C78D2CAB1E_gshared)(___0_element, ___1_callback, method);
}
inline RuntimeObject* BaseSlider_2_get_thumbComparer_mFA5827386358B531C8C93665C223668056C19079_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, const RuntimeMethod*))BaseSlider_2_get_thumbComparer_mFA5827386358B531C8C93665C223668056C19079_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891 (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E* ___0_property, const RuntimeMethod* method) ;
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
inline ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* ChangeEvent_1_GetPooled_mAE42CDB3455238CA5C981AE506F09F526FB29881 (Il2CppFullySharedGenericAny ___0_previousValue, Il2CppFullySharedGenericAny ___1_newValue, const RuntimeMethod* method)
{
	return ((  ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* (*) (Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))ChangeEvent_1_GetPooled_mAE42CDB3455238CA5C981AE506F09F526FB29881_gshared)(___0_previousValue, ___1_newValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
inline void BaseSlider_2_get_value_mF335EBB27619640856C7FCE15498756C7E3F3ACC_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))BaseSlider_2_get_value_mF335EBB27619640856C7FCE15498756C7E3F3ACC_gshared_inline)((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Delegate_op_Inequality_mA9EAADBA0C976289CCD49DC5A4BEDBB060B579E0 (Delegate_t* ___0_d1, Delegate_t* ___1_d2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_ClassListContains_m202159CA74B09E919CBF4497AA5FAD6AD9B1666F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, String_t* ___0_cls, const RuntimeMethod* method) ;
inline bool BaseSlider_2_get_invalid_m69A4FEE6AB40F6B44C06DC60B0E7EB32DDA98D0E (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, const RuntimeMethod*))BaseSlider_2_get_invalid_m69A4FEE6AB40F6B44C06DC60B0E7EB32DDA98D0E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, String_t* ___0_className, bool ___1_enable, const RuntimeMethod* method) ;
inline bool Func_2_Invoke_mFF6CAE6DFB13AFB5921FB3201467228A326875DE_inline (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* __this, Il2CppFullySharedGenericAny ___0_arg, const RuntimeMethod* method)
{
	bool il2cppRetVal;
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_arg, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void BaseSlider_2_set_value_mCA4DEFB0DD712279EC029F5BA93A3F9888B178E6 (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseSlider_2_set_value_mCA4DEFB0DD712279EC029F5BA93A3F9888B178E6_gshared)((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, ___0_value, method);
}
inline DirContext_t21CDEEFF3EC861F7698FE8DA771A2E0E0D2C09EF* ContextChangedEvent_1_get_context_m2F06C39C7D19A644A8FE7F2EE5BEEE435AA6CC52_inline (ContextChangedEvent_1_t00B1296AEA558860AB20DE41277BBF3B52355C62* __this, const RuntimeMethod* method)
{
	DirContext_t21CDEEFF3EC861F7698FE8DA771A2E0E0D2C09EF* il2cppRetVal;
	((  void (*) (ContextChangedEvent_1_t5291A7D16AD61587D4084611519BED7AA5A48E75*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))ContextChangedEvent_1_get_context_m31DD301EAFA717B91D1C0A1ACE8E5DBC11A5BE1F_gshared_inline)((ContextChangedEvent_1_t5291A7D16AD61587D4084611519BED7AA5A48E75*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DirContext_get_dir_m69D64CF26B5C54313D67072A972839958E42C6F2_inline (DirContext_t21CDEEFF3EC861F7698FE8DA771A2E0E0D2C09EF* __this, const RuntimeMethod* method) ;
inline RuntimeObject* BaseSlider_2_get_comparer_mC30DA5A2B0762867DC4D02862BB1C3E968610321_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, const RuntimeMethod*))BaseSlider_2_get_comparer_mC30DA5A2B0762867DC4D02862BB1C3E968610321_gshared_inline)(__this, method);
}
inline void Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 Span_1_op_Implicit_m400E4768CE49AAE9E8572B8D80CEB4AD59A02895 (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_gshared)(___0_span, method);
}
inline void BaseSlider_2_FindClosestThumbValue_mE23F071F78843DCA416E46CCFD37CF01605E6517 (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, int32_t* ___2_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44*, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, int32_t*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))BaseSlider_2_FindClosestThumbValue_mE23F071F78843DCA416E46CCFD37CF01605E6517_gshared)((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, ___0_dragger, ___1_values, ___2_index, il2cppRetVal, method);
}
inline ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* EventBase_1_GetPooled_m804D84D26927A165B5581BD5ACE73ACFC8AF2B93 (const RuntimeMethod* method)
{
	return ((  ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* (*) (const RuntimeMethod*))EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C_gshared)(method);
}
inline void ChangingEvent_1_set_previousValue_m467BD2D8305170CE3AF022E5C508D19499695BB0_inline (ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25*, Il2CppFullySharedGenericAny, const RuntimeMethod*))ChangingEvent_1_set_previousValue_m467BD2D8305170CE3AF022E5C508D19499695BB0_gshared_inline)((ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25*)__this, ___0_value, method);
}
inline void ChangingEvent_1_set_newValue_mFFC68A1445E1D8D76B22D8471F02C8038AD32818_inline (ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25*, Il2CppFullySharedGenericAny, const RuntimeMethod*))ChangingEvent_1_set_newValue_mFFC68A1445E1D8D76B22D8471F02C8038AD32818_gshared_inline)((ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25*)__this, ___0_value, method);
}
inline float BaseSlider_2_GetNormalizedValueFromDrag_m887E6D97C58BF9949AD9F766E2CDF2F9F9283CCF (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, const RuntimeMethod* method)
{
	return ((  float (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44*, const RuntimeMethod*))BaseSlider_2_GetNormalizedValueFromDrag_m887E6D97C58BF9949AD9F766E2CDF2F9F9283CCF_gshared)(__this, ___0_dragger, method);
}
inline void BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_gshared_inline)((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, il2cppRetVal, method);
}
inline void BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_gshared_inline)((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, il2cppRetVal, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Draggable_get_deltaPos_m7B4A63C52DF5AE16A109104FF2C527ACA824F43E_inline (Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* __this, const RuntimeMethod* method) ;
inline int32_t BaseSlider_2_HandleSwap_mBEC909D04B30FD2FBFE62DB1BEE372780E9CED2D (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_values, int32_t ___1_thumbIndex, Il2CppFullySharedGenericStruct ___2_newThumbValue, int32_t ___3_dir, const RuntimeMethod* method)
{
	return ((  int32_t (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, int32_t, Il2CppFullySharedGenericStruct, int32_t, const RuntimeMethod*))BaseSlider_2_HandleSwap_mBEC909D04B30FD2FBFE62DB1BEE372780E9CED2D_gshared)((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, ___0_values, ___1_thumbIndex, ___2_newThumbValue, ___3_dir, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Draggable_get_position_m274C64615BFD41CCAD640FBC66BCE05ED04C1B2D_inline (Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 VisualElementExtensions_WorldToLocal_m9AB4674D3198B2C87E9D53DB56077BA769059EF9 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ele, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_p, const RuntimeMethod* method) ;
inline int32_t BaseSlider_2_get_orientation_m54531884E5C519A4D0C40D26CF9776F07F334E5E_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, const RuntimeMethod*))BaseSlider_2_get_orientation_m54531884E5C519A4D0C40D26CF9776F07F334E5E_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
inline int32_t ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_gshared_inline)(__this, method);
}
inline Il2CppFullySharedGenericStruct* ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_gshared_inline)(__this, ___0_index, method);
}
inline void BaseSlider_2_FindClosestThumbValue_m55A4D60A4627306FCDDC172F46092EDBB0D05412 (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct ___0_v, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, int32_t* ___2_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, Il2CppFullySharedGenericStruct, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, int32_t*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))BaseSlider_2_FindClosestThumbValue_m55A4D60A4627306FCDDC172F46092EDBB0D05412_gshared)((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, ___0_v, ___1_values, ___2_index, il2cppRetVal, method);
}
inline void Func_2_Invoke_mC18915A79E2024105FB43AF1E4CE50CC993D4A45_inline (Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF* __this, int32_t ___0_arg, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, (Il2CppFullySharedGenericAny)&___0_arg, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_IndexOf_m1CC000F2192D5D561AE87B2EC3AB312BD0D714AE (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, int32_t, const RuntimeMethod*))Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_gshared_inline)(__this, ___0_index, method);
}
inline int32_t KeyboardEventBase_1_get_keyCode_m1F9724EFC75BE6E998EC0DB5515F7FD577257D6B_inline (KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA*, const RuntimeMethod*))KeyboardEventBase_1_get_keyCode_mAA76399AE86C7D052CE8E0F734F06918AB10B737_gshared_inline)(__this, method);
}
inline bool KeyboardEventBase_1_get_shiftKey_m6F17812A43DB9076880B0ACA64DD5675FA30E418 (KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA*, const RuntimeMethod*))KeyboardEventBase_1_get_shiftKey_mC89C6EE9BA2846C43867FEE16897C6AA923CA708_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_StopPropagation_mEFC7E5AB7164157065FF19064A6ADCBB0D8AF6FB (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thumb_EnsureKeyboardFocus_m40E2202C3772F69395E7C364E2820799F3F8AB56 (Thumb_t93918EA28AB7D7A87A976861423C11037819B679* __this, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_gshared_inline)(__this, method);
}
inline bool BaseSlider_2_get_swapThumbs_mB9B92B107973C9BE48DDB86738BB27116B49B1CB_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, const RuntimeMethod*))BaseSlider_2_get_swapThumbs_mB9B92B107973C9BE48DDB86738BB27116B49B1CB_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E BindingId_op_Implicit_mF43027FCA60BD4AEC267D144641BC0E6E91686CC (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingId__ctor_m1193F0EA5249BA3CF38D7299139D6518F906851C (BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E* __this, String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3 (const RuntimeMethod* method)
{
	Il2CppSharedGenericObject* il2cppRetVal;
	((  void (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))Activator_CreateInstance_TisIl2CppFullySharedGenericAny_m68F3B5F53DBB1741E028DA541BE07A3D2382138D_gshared)((Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseUxmlTraits_get_canHaveAnyAttribute_m34EF41172370836E58DE8512FAAA340E1A9E302F_inline (BaseUxmlTraits_t2A13D24373542A6401FE350C5119DE0FCE86E21E* __this, const RuntimeMethod* method) ;
inline void BasicNode_1__ctor_m5F6BD5BB6499D84BA6B02A525E787403F72CFA78 (BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF* __this, const RuntimeMethod* method)
{
	((  void (*) (BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF*, const RuntimeMethod*))BasicNode_1__ctor_m5F6BD5BB6499D84BA6B02A525E787403F72CFA78_gshared)(__this, method);
}
inline void Func_1__ctor_m2DCD99B6BCAB07ED2D4B1820AC33296E472F875A (Func_1_tC3BAF7B1A0EE680F2FE474FE6314A25CA0ACF303* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tC3BAF7B1A0EE680F2FE474FE6314A25CA0ACF303*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Action_1__ctor_m1B3261AD6B265DF149E27AB11D0C0B00B3455A92 (Action_1_t393B4FBBC9A299946D7CE704F32E4695BCD996A8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t393B4FBBC9A299946D7CE704F32E4695BCD996A8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)(__this, ___0_object, ___1_method, method);
}
inline void LinkedPool_1__ctor_mF6783A365E7DF1981A187B21043FCF3406B20478 (LinkedPool_1_t229CF46A2209FA5E8F02408D0A502FA03535DC4F* __this, Func_1_tC3BAF7B1A0EE680F2FE474FE6314A25CA0ACF303* ___0_createFunc, Action_1_t393B4FBBC9A299946D7CE704F32E4695BCD996A8* ___1_resetAction, int32_t ___2_limit, const RuntimeMethod* method)
{
	((  void (*) (LinkedPool_1_t229CF46A2209FA5E8F02408D0A502FA03535DC4F*, Func_1_tC3BAF7B1A0EE680F2FE474FE6314A25CA0ACF303*, Action_1_t393B4FBBC9A299946D7CE704F32E4695BCD996A8*, int32_t, const RuntimeMethod*))LinkedPool_1__ctor_mA90FF0FF6ACA48E315BEBF9094DECAEB5E96D732_gshared)(__this, ___0_createFunc, ___1_resetAction, ___2_limit, method);
}
inline void LinkedPoolItem_1__ctor_m1B6AE5051EF5340BD225C4F07C3A84F10D9F819D (LinkedPoolItem_1_tF4B4874E569A0B91848A46D0AE7BFE55B1789C68* __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedPoolItem_1_tF4B4874E569A0B91848A46D0AE7BFE55B1789C68*, const RuntimeMethod*))LinkedPoolItem_1__ctor_m4AB21551B2F384CB3BEF93476D5987D1435F3D8A_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t JobsUtility_CreateJobReflectionData_m17265DED7C2DBB0B2130896E2B8AC4CF5BD7FCE7 (Type_t* ___0_type, RuntimeObject* ___1_managedJobFunction0, RuntimeObject* ___2_managedJobFunction1, RuntimeObject* ___3_managedJobFunction2, const RuntimeMethod* method) ;
inline void BatchQueryJob_2__ctor_m52B5B1BDEE537675680BDEFA6BF9D38FC31DA09B (BatchQueryJob_2_t7D5A93A4AD033A8A940C89F3761A0DD654E6B912* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_commands, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_results, const RuntimeMethod* method)
{
	((  void (*) (BatchQueryJob_2_t7D5A93A4AD033A8A940C89F3761A0DD654E6B912*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))BatchQueryJob_2__ctor_m52B5B1BDEE537675680BDEFA6BF9D38FC31DA09B_gshared)(__this, ___0_commands, ___1_results, method);
}
inline void BidirectionalDictionary_2__ctor_m3DEDCB25ADA7434626E019394CCA18604C9666E0 (BidirectionalDictionary_2_t3414A66FDA7CB6E1F164010642A3CB92AC50FFC9* __this, RuntimeObject* ___0_firstEqualityComparer, RuntimeObject* ___1_secondEqualityComparer, const RuntimeMethod* method)
{
	((  void (*) (BidirectionalDictionary_2_t3414A66FDA7CB6E1F164010642A3CB92AC50FFC9*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))BidirectionalDictionary_2__ctor_m3DEDCB25ADA7434626E019394CCA18604C9666E0_gshared)(__this, ___0_firstEqualityComparer, ___1_secondEqualityComparer, method);
}
inline void BidirectionalDictionary_2__ctor_m62510A3C100B871B916158FFAD89A803EA1672B6 (BidirectionalDictionary_2_t3414A66FDA7CB6E1F164010642A3CB92AC50FFC9* __this, RuntimeObject* ___0_firstEqualityComparer, RuntimeObject* ___1_secondEqualityComparer, String_t* ___2_duplicateFirstErrorMessage, String_t* ___3_duplicateSecondErrorMessage, const RuntimeMethod* method)
{
	((  void (*) (BidirectionalDictionary_2_t3414A66FDA7CB6E1F164010642A3CB92AC50FFC9*, RuntimeObject*, RuntimeObject*, String_t*, String_t*, const RuntimeMethod*))BidirectionalDictionary_2__ctor_m62510A3C100B871B916158FFAD89A803EA1672B6_gshared)(__this, ___0_firstEqualityComparer, ___1_secondEqualityComparer, ___2_duplicateFirstErrorMessage, ___3_duplicateSecondErrorMessage, method);
}
inline void Dictionary_2__ctor_m244D396B16E7F73DE815F4FFA6F35DD89B6ED7CB (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m244D396B16E7F73DE815F4FFA6F35DD89B6ED7CB_gshared)(__this, ___0_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5 (String_t* ___0_format, RuntimeObject* ___1_provider, RuntimeObject* ___2_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void* UnsafeUtility_AsPointer_Tis__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11_mD55DB93E327F0A9936ECB513A0AA6A6D23D21BB8_inline (__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11** ___0_output, const RuntimeMethod* method)
{
	return ((  void* (*) (__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11**, const RuntimeMethod*))UnsafeUtility_AsPointer_TisIl2CppFullySharedGenericAny_m7634F721F2472F0B576B143F4179633869A2FA75_gshared_inline)(___0_output, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
inline __Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11** UnsafeUtility_ClassAsRef_Tis__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11_m34ADE7039A54136B23A8BBB7D4AB62CD6C14B1F2 (void* ___0_ptr, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11** (*) (void*, const RuntimeMethod*))UnsafeUtility_ClassAsRef_TisIl2CppSharedGenericObject_mED347FFB189955A213A94F3C6AB5F7EE945B57A9_gshared)(___0_ptr, method);
}
inline void* UnsafeUtility_AsPointer_Tis__Il2CppFullySharedGenericStructTypeU5BU2CU2CU5D_tC681D70011AD3015263D61F870B415DEF598E9ED_mEF4E21935057DF6910B67820FBC0C88A1DDB16C5_inline (__Il2CppFullySharedGenericStructTypeU5BU2CU2CU5D_tC681D70011AD3015263D61F870B415DEF598E9ED** ___0_output, const RuntimeMethod* method)
{
	return ((  void* (*) (__Il2CppFullySharedGenericStructTypeU5BU2CU2CU5D_tC681D70011AD3015263D61F870B415DEF598E9ED**, const RuntimeMethod*))UnsafeUtility_AsPointer_TisIl2CppFullySharedGenericAny_m7634F721F2472F0B576B143F4179633869A2FA75_gshared_inline)(___0_output, method);
}
inline __Il2CppFullySharedGenericStructTypeU5BU2CU2CU5D_tC681D70011AD3015263D61F870B415DEF598E9ED** UnsafeUtility_ClassAsRef_Tis__Il2CppFullySharedGenericStructTypeU5BU2CU2CU5D_tC681D70011AD3015263D61F870B415DEF598E9ED_m29F21EB4349E5A5D29AD5B25A4EA50F122E66818 (void* ___0_ptr, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericStructTypeU5BU2CU2CU5D_tC681D70011AD3015263D61F870B415DEF598E9ED** (*) (void*, const RuntimeMethod*))UnsafeUtility_ClassAsRef_TisIl2CppSharedGenericObject_mED347FFB189955A213A94F3C6AB5F7EE945B57A9_gshared)(___0_ptr, method);
}
inline void* UnsafeUtility_AsPointer_Tis__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1_m8A4CCD3B55A006CAB42C0AC49BE500623CBE644C_inline (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1** ___0_output, const RuntimeMethod* method)
{
	return ((  void* (*) (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1**, const RuntimeMethod*))UnsafeUtility_AsPointer_TisIl2CppFullySharedGenericAny_m7634F721F2472F0B576B143F4179633869A2FA75_gshared_inline)(___0_output, method);
}
inline __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1** UnsafeUtility_ClassAsRef_Tis__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1_m22CD3147EC41A77E9F46D24D25E9C796A736A32A (void* ___0_ptr, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1** (*) (void*, const RuntimeMethod*))UnsafeUtility_ClassAsRef_TisIl2CppSharedGenericObject_mED347FFB189955A213A94F3C6AB5F7EE945B57A9_gshared)(___0_ptr, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53 (const RuntimeMethod* method) ;
inline void AsyncInstantiateOperation_1__ctor_m3E48F09CFE1A0F8060541BE23BCFE2BB4B9526B6 (AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB* __this, intptr_t ___0_ptr, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method)
{
	((  void (*) (AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB*, intptr_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))AsyncInstantiateOperation_1__ctor_m3E48F09CFE1A0F8060541BE23BCFE2BB4B9526B6_gshared)(__this, ___0_ptr, ___1_cancellationToken, method);
}
inline int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BindingsAllocator_Malloc_m8AFEBBAC8AFDEB713BE39CB6C945A29BF1B95C25 (int32_t ___0_size, const RuntimeMethod* method) ;
inline void Span_1__ctor_mCB02A605FC251F9D261E295465D5B1EC81F620E7_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, const RuntimeMethod*))Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared_inline)(__this, ___0_array, method);
}
inline void Span_1_CopyTo_mC87816F92C911740C3511C4A9DF085020A7D0F28 (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))Span_1_CopyTo_m87850B36DC83BF310EC6136E6D14DC5634F96F05_gshared)(__this, ___0_destination, method);
}
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 NoAllocHelpers_CreateReadOnlySpan_TisIl2CppFullySharedGenericStruct_m66E2527407B1586F806D204A95F57D1226D6E74D_inline (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_list, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))NoAllocHelpers_CreateReadOnlySpan_TisIl2CppFullySharedGenericAny_mC3833ABA237F5EEEE4815E56BC0773989DC842BB_gshared_inline)(___0_list, method);
}
inline void ReadOnlySpan_1_CopyTo_m50A3A496B3D51522906BB81E1F4FF1899D5C8AA6 (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m0EA73CEAF52AB31E2713E59AB88541332594D914_gshared)(__this, ___0_destination, method);
}
inline void BufferSlice_1__ctor_m6A9A6D44D17454B752C78055938E767084F8FE72 (BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6* __this, BufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325 ___0_id, uint64_t ___1_offset, const RuntimeMethod* method)
{
	((  void (*) (BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6*, BufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325, uint64_t, const RuntimeMethod*))BufferSlice_1__ctor_m6A9A6D44D17454B752C78055938E767084F8FE72_gshared)(__this, ___0_id, ___1_offset, method);
}
inline int32_t HashCode_Combine_TisBufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0C592F2C64E6018B8C214FECC30E9028E279DDFE (BufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325 ___0_value1, uint64_t ___1_value2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))HashCode_Combine_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m1A9E2DCBEF63A15C4DD60438D4F6D1ED2D0F4C90_gshared)((Il2CppFullySharedGenericAny)&___0_value1, (Il2CppFullySharedGenericAny)&___1_value2, method);
}
inline int32_t BufferSlice_1_GetHashCode_mA19E9A8E5C93A5991B403D3F178F1D86ABBD3115 (BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6*, const RuntimeMethod*))BufferSlice_1_GetHashCode_mA19E9A8E5C93A5991B403D3F178F1D86ABBD3115_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferID_op_Equality_m35207D2200DA9AFEE9E8E2560B34928B4208CBD6 (BufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325 ___0_a, BufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325 ___1_b, const RuntimeMethod* method) ;
inline bool BufferSlice_1_Equals_m374BFA17526A0F475A2DBE475A5E86A288156105 (BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6* __this, BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6*, BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6, const RuntimeMethod*))BufferSlice_1_Equals_m374BFA17526A0F475A2DBE475A5E86A288156105_gshared)(__this, ___0_other, method);
}
inline bool BufferSlice_1_Equals_mF33B6211EE3684C98B95601B93A69CF31E4BCD42 (BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6*, RuntimeObject*, const RuntimeMethod*))BufferSlice_1_Equals_mF33B6211EE3684C98B95601B93A69CF31E4BCD42_gshared)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline void Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49 (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49_gshared)(__this, ___0_source, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Buffer_1_ToArray_mFA9AEA7D664154CB0695FD1ED98B3C9539146194 (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697* __this, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*, const RuntimeMethod*))Buffer_1_ToArray_mFA9AEA7D664154CB0695FD1ED98B3C9539146194_gshared)(__this, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
inline ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* UnsafeUtility_As_TisListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C_m6BEC4E15003DEBC3B54982D8B583886DBEA18582 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared)(___0_from, method);
}
inline void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2__ctor_m0B15B365448FF7716334A239AEE9BFAEE86E389D_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackEventHandler_RegisterCallback_TisCustomStyleResolvedEvent_t54D095D62773F628A6A05A4531DEE990166062E6_m667D7BACFE267AD56818889E3879640E13998401_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallback_1_t0614255E69CD1E3308A0278ADB7B2E8C66C5578C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallback_1_tDE93D01AB4244ED03015ADF985CF61A9E3CA060F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementExtensions_RegisterContextChangedCallback_TisDirContext_t21CDEEFF3EC861F7698FE8DA771A2E0E0D2C09EF_m8EC95C954D65D1EBF28FFCD48FF8CB8D17112738_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementExtensions_tA6E36E6C2791BED77322D7B6B0B87946CEF352E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5392));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5393));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5394));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24), (-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5395));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5396));
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5396));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),25), (RuntimeObject*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5397));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5398));
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_1;
		L_1 = Comparer_1_get_Default_m9BA7A3EA0D33B540EFC408B0C9C2B69F7A0C9E76(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5398));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),26), (RuntimeObject*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5399));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5400));
		il2cpp_codegen_runtime_class_init_inline(ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794_il2cpp_TypeInfo_var);
		ExVisualElement__ctor_m3042A692009D0AAEED7239D3E06DCB1025CB8620((ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5400));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5401));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5402));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5403));
		NullCheck((ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794*)__this);
		ExVisualElement_set_passMask_mEC908F41B90239CF9C013AA20D3FBF635E3CC860((ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794*)__this, (int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5403));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5404));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5405));
		BaseSlider_2_set_orientation_m96EF324815D9303E04A1279D90037787CEF49927(__this, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5405));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5406));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5407));
		BaseSlider_2_set_invalid_m231B9FD6E07171433A9B436E5B059595E7173A85(__this, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5407));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5408));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5409));
		BaseSlider_2_set_swapThumbs_m72C281B22EA79EA9B3D7A45914337623239B521F(__this, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5409));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5410));
		void* L_2 = (void*)GetVirtualMethodInfo((RuntimeObject*)__this, 213);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5411));
		EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30* L_3 = (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30*)il2cpp_codegen_object_new(EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30_il2cpp_TypeInfo_var);
		EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5(L_3, (RuntimeObject*)__this, (intptr_t)(L_2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5411));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5412));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, L_3, (int32_t)0, CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5412));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5413));
		void* L_4 = (void*)GetVirtualMethodInfo((RuntimeObject*)__this, 214);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5414));
		EventCallback_1_tDE93D01AB4244ED03015ADF985CF61A9E3CA060F* L_5 = (EventCallback_1_tDE93D01AB4244ED03015ADF985CF61A9E3CA060F*)il2cpp_codegen_object_new(EventCallback_1_tDE93D01AB4244ED03015ADF985CF61A9E3CA060F_il2cpp_TypeInfo_var);
		EventCallback_1__ctor_mA03324C646FE93909402ABA6C660D14D22ACE4F8(L_5, (RuntimeObject*)__this, (intptr_t)(L_4), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5415));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_RegisterCallback_TisCustomStyleResolvedEvent_t54D095D62773F628A6A05A4531DEE990166062E6_m667D7BACFE267AD56818889E3879640E13998401((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, L_5, (int32_t)0, CallbackEventHandler_RegisterCallback_TisCustomStyleResolvedEvent_t54D095D62773F628A6A05A4531DEE990166062E6_m667D7BACFE267AD56818889E3879640E13998401_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5415));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5416));
		void* L_6 = (void*)GetVirtualMethodInfo((RuntimeObject*)__this, 215);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5417));
		EventCallback_1_t0614255E69CD1E3308A0278ADB7B2E8C66C5578C* L_7 = (EventCallback_1_t0614255E69CD1E3308A0278ADB7B2E8C66C5578C*)il2cpp_codegen_object_new(EventCallback_1_t0614255E69CD1E3308A0278ADB7B2E8C66C5578C_il2cpp_TypeInfo_var);
		EventCallback_1__ctor_m64A88572B5AD45BBC7789FFEB7C0F10EEBD183CA(L_7, (RuntimeObject*)__this, (intptr_t)(L_6), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5417));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5418));
		il2cpp_codegen_runtime_class_init_inline(VisualElementExtensions_tA6E36E6C2791BED77322D7B6B0B87946CEF352E2_il2cpp_TypeInfo_var);
		VisualElementExtensions_RegisterContextChangedCallback_TisDirContext_t21CDEEFF3EC861F7698FE8DA771A2E0E0D2C09EF_m8EC95C954D65D1EBF28FFCD48FF8CB8D17112738((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this, L_7, VisualElementExtensions_RegisterContextChangedCallback_TisDirContext_t21CDEEFF3EC861F7698FE8DA771A2E0E0D2C09EF_m8EC95C954D65D1EBF28FFCD48FF8CB8D17112738_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5418));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5419));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5420));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5421));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5422));
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)), SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_lowValue_mC9A5C644B1C2D26E19B0E78897F7318D40F7234E_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_5 = L_1;
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_value : &___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5423));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5424));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5425));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5426));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5427));
		RuntimeObject* L_0;
		L_0 = BaseSlider_2_get_thumbComparer_mFA5827386358B531C8C93665C223668056C19079_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5427));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)), SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(L_2, ___0_value, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5428));
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_0, L_1, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5428));
		V_0 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5429));
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5430));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5431));
		il2cpp_codegen_memcpy(L_5, ___0_value, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_5, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5432));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5433));
		VirtualActionInvoker0::Invoke(207, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5433));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5434));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5435));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)))->___lowValueProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5435));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5436));
	}

IL_0036:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5437));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5438));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5439));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5440));
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_highValue_m7F03F349DCCB6462D64B7CECDF29EB39E69DCCC1_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_5 = L_1;
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_value : &___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5441));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5442));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5443));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5444));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5445));
		RuntimeObject* L_0;
		L_0 = BaseSlider_2_get_thumbComparer_mFA5827386358B531C8C93665C223668056C19079_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5445));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(L_2, ___0_value, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5446));
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_0, L_1, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5446));
		V_0 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5447));
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5448));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5449));
		il2cpp_codegen_memcpy(L_5, ___0_value, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_5, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5450));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5451));
		VirtualActionInvoker0::Invoke(207, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5451));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5452));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5453));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)))->___highValueProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5453));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5454));
	}

IL_0036:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5455));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_get_value_mF335EBB27619640856C7FCE15498756C7E3F3ACC_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5456));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5457));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5458));
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)), SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_value_mCA4DEFB0DD712279EC029F5BA93A3F9888B178E6_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_17 = L_0;
	const Il2CppFullySharedGenericAny L_19 = L_0;
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_10 = L_1;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_11 = L_3;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_12 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	memset(V_0, 0, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	bool V_1 = false;
	bool V_2 = false;
	ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* V_3 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_value : &___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0, (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5459));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5460));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5461));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5462));
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_value : &___0_value), SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5463));
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(223, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_0: *(void**)L_0), (Il2CppFullySharedGenericAny*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5463));
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5464));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5465));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_2;
		L_2 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5465));
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)), SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5466));
		NullCheck(L_2);
		bool L_5;
		L_5 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_4: *(void**)L_4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5466));
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5467));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0077;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5468));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5469));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5470));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this);
		RuntimeObject* L_7;
		L_7 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5470));
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5471));
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_006c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5472));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5473));
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)), SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5474));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
		ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* L_13;
		L_13 = ChangeEvent_1_GetPooled_mAE42CDB3455238CA5C981AE506F09F526FB29881((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? il2cpp_codegen_memcpy(L_11, L_9, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? il2cpp_codegen_memcpy(L_12, L_10, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1): *(void**)L_10), il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5474));
		V_3 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5483));
					ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* L_14 = V_3;
					if (!L_14)
					{
						goto IL_0068;
					}
				}
				{
					ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* L_15 = V_3;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5484));
					NullCheck((RuntimeObject*)L_15);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5484));
				}

IL_0068:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5485));
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5475));
			ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* L_16 = V_3;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5476));
			NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_16);
			EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_16, (RuntimeObject*)__this, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5476));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5477));
			il2cpp_codegen_memcpy(L_17, V_0, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5478));
			VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(206, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_17: *(void**)L_17));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5478));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5479));
			ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* L_18 = V_3;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5480));
			NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(8, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_18);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5480));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5481));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5482));
			VirtualActionInvoker0::Invoke(212, __this);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5482));
			goto IL_0069;
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

IL_0069:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5486));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5487));
		goto IL_0076;
	}

IL_006c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5488));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5489));
		il2cpp_codegen_memcpy(L_19, V_0, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5490));
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(206, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_19: *(void**)L_19));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5490));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5491));
	}

IL_0076:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5492));
	}

IL_0077:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5493));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseSlider_2_get_formatString_m64EDB5D3E4D541AAD87886AC72E8821942B76127_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5494));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5495));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5496));
		String_t* L_0 = *(String_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),22));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_formatString_mD37381E4CFC980F38268C4E74E00E5C17B140FBA_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5497));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5498));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5499));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5500));
		String_t* L_0 = *(String_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),22));
		String_t* L_1 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5501));
		bool L_2;
		L_2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5501));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5502));
		String_t* L_3 = ___0_value;
		il2cpp_codegen_write_instance_field_data<String_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),22), L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5503));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5504));
		BaseSlider_2_get_value_mF335EBB27619640856C7FCE15498756C7E3F3ACC_inline(__this, (Il2CppFullySharedGenericAny*)L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5504));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5505));
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(206, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_4: *(void**)L_4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5505));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5506));
		bool L_5 = V_0;
		V_1 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5507));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5508));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5509));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)))->___formatStringProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5509));
	}

IL_0033:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5510));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033* BaseSlider_2_get_formatFunction_mE64BDBEBC619D3D50D1BBE2CC0691EA5C8ED597A_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5511));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5512));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5513));
		FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033* L_0 = *(FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),23));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_formatFunction_mBE059478E6D7D23FE82422213C00C6E47B5CDEC3_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5514));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5515));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5516));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5517));
		FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033* L_0 = *(FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),23));
		FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033* L_1 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5518));
		bool L_2;
		L_2 = Delegate_op_Inequality_mA9EAADBA0C976289CCD49DC5A4BEDBB060B579E0((Delegate_t*)L_0, (Delegate_t*)L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5518));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5519));
		FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033* L_3 = ___0_value;
		il2cpp_codegen_write_instance_field_data<FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),23), L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5520));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5521));
		BaseSlider_2_get_value_mF335EBB27619640856C7FCE15498756C7E3F3ACC_inline(__this, (Il2CppFullySharedGenericAny*)L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5521));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5522));
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(206, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_4: *(void**)L_4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5522));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5523));
		bool L_5 = V_0;
		V_1 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5524));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5525));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5526));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)))->___formatFunctionProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5526));
	}

IL_0033:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5527));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseSlider_2_get_invalid_m69A4FEE6AB40F6B44C06DC60B0E7EB32DDA98D0E_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF7F12D5711E1949CC3A1E99E20E19B3CC359C60);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5528));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5529));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5530));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5531));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this);
		bool L_0;
		L_0 = VisualElement_ClassListContains_m202159CA74B09E919CBF4497AA5FAD6AD9B1666F((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this, _stringLiteralDF7F12D5711E1949CC3A1E99E20E19B3CC359C60, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5531));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_invalid_m231B9FD6E07171433A9B436E5B059595E7173A85_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF7F12D5711E1949CC3A1E99E20E19B3CC359C60);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5532));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5533));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5534));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5535));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5536));
		bool L_0;
		L_0 = BaseSlider_2_get_invalid_m69A4FEE6AB40F6B44C06DC60B0E7EB32DDA98D0E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5536));
		bool L_1 = ___0_value;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5537));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5538));
		goto IL_0029;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5539));
		bool L_3 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5540));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this);
		VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this, _stringLiteralDF7F12D5711E1949CC3A1E99E20E19B3CC359C60, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5540));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5541));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5542));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)))->___invalidProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5542));
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5543));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* BaseSlider_2_get_validateValue_mD6D5ED5FF9C88F1A5375B61388EB187BBD526188_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5544));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5545));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5546));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_validateValue_mF48FA53A5B6BB83AF724DA44B13F0D150C004D9B_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5547));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5548));
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* G_B2_0 = NULL;
	BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* G_B2_1 = NULL;
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* G_B1_0 = NULL;
	BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* G_B3_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5549));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5550));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5551));
		bool L_2;
		L_2 = Delegate_op_Inequality_mA9EAADBA0C976289CCD49DC5A4BEDBB060B579E0((Delegate_t*)L_0, (Delegate_t*)L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5551));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5552));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3 = ___0_value;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17), L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5553));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_4 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_5 = L_4;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
			goto IL_0023;
		}
		G_B1_0 = L_5;
		G_B1_1 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
	}
	{
		G_B3_0 = 0;
		G_B3_1 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)G_B1_1);
		goto IL_0031;
	}

IL_0023:
	{
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)), SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5554));
		NullCheck(G_B2_0);
		bool L_7;
		L_7 = Func_2_Invoke_mFF6CAE6DFB13AFB5921FB3201467228A326875DE_inline(G_B2_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_6: *(void**)L_6), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5554));
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		G_B3_1 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)G_B2_1);
	}

IL_0031:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5555));
		NullCheck(G_B3_1);
		BaseSlider_2_set_invalid_m231B9FD6E07171433A9B436E5B059595E7173A85(G_B3_1, (bool)G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5555));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5556));
		bool L_8 = V_0;
		V_1 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5557));
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5558));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5559));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)))->___validateValueProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5559));
	}

IL_0048:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5560));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseSlider_2_get_orientation_m54531884E5C519A4D0C40D26CF9776F07F334E5E_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5561));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5562));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5563));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_orientation_m96EF324815D9303E04A1279D90037787CEF49927_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Direction_t7EB108B5086E69790833C3E0B1BA05E847CF7FA8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5564));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5565));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5566));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5567));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5568));
		int32_t L_1 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5569));
		VirtualActionInvoker1< int32_t >::Invoke(208, __this, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5569));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5570));
		int32_t L_2 = V_0;
		int32_t L_3 = ___0_value;
		V_1 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5571));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5572));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5573));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)))->___orientationProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5573));
	}

IL_0027:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5574));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_get_step_mCAA0C4FC15DF8661B8265D72E8C0261543D980B0_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5575));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5576));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5577));
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),19)), SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_step_m8315E81A358618F28C7B5F2EB24BF1F641654D82_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_8 = L_0;
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_value : &___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5578));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5579));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5580));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5581));
		il2cpp_codegen_memcpy(L_0, ___0_value, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5582));
		Il2CppConstrainedCallData L_3;
		Il2CppMethodPointer L_4 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), il2cpp_rgctx_method(method->klass->rgctx_data, 40), (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),19)))), &L_3, L_2);
		typedef bool ( *func_L_5)(void*,RuntimeObject*,const RuntimeMethod*);
		bool L_6 = ((func_L_5)L_4)(L_3.thisPtr, L_1,L_3.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5582));
		V_0 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5583));
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_001e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5584));
		goto IL_0026;
	}

IL_001e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5585));
		il2cpp_codegen_memcpy(L_8, ___0_value, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5586));
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericStruct >::Invoke(209, __this, L_8);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5586));
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5587));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_get_shiftStep_m3449B6FB83676A6853176159A4551FE32128852D_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5588));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5589));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5590));
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),20)), SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_shiftStep_mA0A89F67343556BD20FBE99D42B285A2C80397D5_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_8 = L_0;
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_value : &___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5591));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5592));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5593));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5594));
		il2cpp_codegen_memcpy(L_0, ___0_value, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5595));
		Il2CppConstrainedCallData L_3;
		Il2CppMethodPointer L_4 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), il2cpp_rgctx_method(method->klass->rgctx_data, 40), (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),20)))), &L_3, L_2);
		typedef bool ( *func_L_5)(void*,RuntimeObject*,const RuntimeMethod*);
		bool L_6 = ((func_L_5)L_4)(L_3.thisPtr, L_1,L_3.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5595));
		V_0 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5596));
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_001e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5597));
		goto IL_0026;
	}

IL_001e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5598));
		il2cpp_codegen_memcpy(L_8, ___0_value, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5599));
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericStruct >::Invoke(210, __this, L_8);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5599));
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5600));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseSlider_2_get_swapThumbs_mB9B92B107973C9BE48DDB86738BB27116B49B1CB_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5601));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5602));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5603));
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),21));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_swapThumbs_m72C281B22EA79EA9B3D7A45914337623239B521F_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5604));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5605));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5606));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5607));
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),21));
		bool L_1 = ___0_value;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5608));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5609));
		goto IL_0018;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5610));
		bool L_3 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5611));
		VirtualActionInvoker1< bool >::Invoke(211, __this, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5611));
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5612));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseSlider_2_get_comparer_mC30DA5A2B0762867DC4D02862BB1C3E968610321_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5613));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5614));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5615));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),25));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_comparer_m3DF758CA2DA30D78DCCEB44A06D0AF53E384633B_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5616));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5617));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5618));
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),25), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseSlider_2_get_thumbComparer_mFA5827386358B531C8C93665C223668056C19079_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5619));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5620));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5621));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),26));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_thumbComparer_m9A49887111239CD2015635A94313AE3498421AC2_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5622));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5623));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5624));
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),26), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_OnSliderRangeChanged_mE0573BC3256C093A9C3A54FB723FED1B79C32D3B_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5625));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5626));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5627));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5628));
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)), SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5629));
		BaseSlider_2_set_value_mCA4DEFB0DD712279EC029F5BA93A3F9888B178E6(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1): *(void**)L_0), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5629));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5630));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_SetOrientation_mB36F6C460C33AB7BBB53CD05AA8C72A82911029D_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, int32_t ___0_newValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_newValue));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5631));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5632));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5633));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5634));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
		int32_t L_1 = ___0_newValue;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5635));
		int32_t L_2 = ___0_newValue;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18), L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5636));
		bool L_3 = V_0;
		V_1 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5637));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5638));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5639));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)))->___orientationProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5639));
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5640));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_SetStep_mD42FD6C0770B55A33E3881A5EC146FA5D977B5AB_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct ___0_newStep, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_newStep : &___0_newStep));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5641));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5642));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5643));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5644));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5645));
		RuntimeObject* L_0;
		L_0 = BaseSlider_2_get_thumbComparer_mFA5827386358B531C8C93665C223668056C19079_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5645));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),19)), SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(L_2, ___0_newStep, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5646));
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_0, L_1, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5646));
		V_0 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5647));
		il2cpp_codegen_memcpy(L_4, ___0_newStep, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),19), L_4, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5648));
		bool L_5 = V_0;
		V_1 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5649));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5650));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5651));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)))->___stepProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5651));
	}

IL_002f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5652));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_SetShiftStep_mBF6CBCF14715D45DB081E45D2CFC11A3CD7D78D1_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct ___0_newShiftStep, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_newShiftStep : &___0_newShiftStep));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5653));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5654));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5655));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5656));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5657));
		RuntimeObject* L_0;
		L_0 = BaseSlider_2_get_thumbComparer_mFA5827386358B531C8C93665C223668056C19079_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5657));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),20)), SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(L_2, ___0_newShiftStep, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5658));
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_0, L_1, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5658));
		V_0 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5659));
		il2cpp_codegen_memcpy(L_4, ___0_newShiftStep, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),20), L_4, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5660));
		bool L_5 = V_0;
		V_1 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5661));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5662));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5663));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)))->___shiftStepProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5663));
	}

IL_002f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5664));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_SetSwapThumbs_m70DFBDA9735000FF2559933B85A6D6495CAE1C02_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, bool ___0_newSwapThumbs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_newSwapThumbs));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5665));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5666));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5667));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5668));
		bool L_0 = ___0_newSwapThumbs;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),21), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5669));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5670));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)))->___swapThumbsProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5670));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5671));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_InvokeValueChangedCallbacks_m1A1DD2CB5823ECBC0F4F9B33FDC112686252B399_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5672));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5673));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5674));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5675));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5676));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)))->___valueProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5676));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5677));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_OnGeometryChanged_m4BF0EC4BA6D75DCED1D9B1410556CAC0886D9E6D_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, GeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A* ___0_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_evt));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5678));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5679));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5680));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5681));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5682));
		BaseSlider_2_get_value_mF335EBB27619640856C7FCE15498756C7E3F3ACC_inline(__this, (Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5682));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5683));
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(206, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_0: *(void**)L_0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5683));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5684));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_OnStyleResolved_m3D90015E110BFDE9F079098AE896AC56DF5D2EBF_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, CustomStyleResolvedEvent_t54D095D62773F628A6A05A4531DEE990166062E6* ___0_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_evt));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5685));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5686));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5687));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5688));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5689));
		BaseSlider_2_get_value_mF335EBB27619640856C7FCE15498756C7E3F3ACC_inline(__this, (Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5689));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5690));
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(206, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_0: *(void**)L_0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5690));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5691));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_OnDirectionChanged_m43E5F240D54130850D2790F306B10C518A42F092_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, ContextChangedEvent_1_t00B1296AEA558860AB20DE41277BBF3B52355C62* ___0_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContextChangedEvent_1_get_context_m2F06C39C7D19A644A8FE7F2EE5BEEE435AA6CC52_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_evt));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5692));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5693));
	DirContext_t21CDEEFF3EC861F7698FE8DA771A2E0E0D2C09EF* G_B2_0 = NULL;
	BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* G_B2_1 = NULL;
	DirContext_t21CDEEFF3EC861F7698FE8DA771A2E0E0D2C09EF* G_B1_0 = NULL;
	BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* G_B3_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5694));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5695));
		ContextChangedEvent_1_t00B1296AEA558860AB20DE41277BBF3B52355C62* L_0 = ___0_evt;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5696));
		NullCheck(L_0);
		DirContext_t21CDEEFF3EC861F7698FE8DA771A2E0E0D2C09EF* L_1;
		L_1 = ContextChangedEvent_1_get_context_m2F06C39C7D19A644A8FE7F2EE5BEEE435AA6CC52_inline(L_0, ContextChangedEvent_1_get_context_m2F06C39C7D19A644A8FE7F2EE5BEEE435AA6CC52_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5696));
		DirContext_t21CDEEFF3EC861F7698FE8DA771A2E0E0D2C09EF* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
			goto IL_000f;
		}
		G_B1_0 = L_2;
		G_B1_1 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
	}
	{
		G_B3_0 = 0;
		G_B3_1 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)G_B1_1);
		goto IL_0014;
	}

IL_000f:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5697));
		NullCheck(G_B2_0);
		int32_t L_3;
		L_3 = DirContext_get_dir_m69D64CF26B5C54313D67072A972839958E42C6F2_inline(G_B2_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5697));
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)G_B2_1);
	}

IL_0014:
	{
		NullCheck(G_B3_1);
		il2cpp_codegen_write_instance_field_data<int32_t>(G_B3_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), (int32_t)G_B3_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5698));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5699));
		BaseSlider_2_get_value_mF335EBB27619640856C7FCE15498756C7E3F3ACC_inline(__this, (Il2CppFullySharedGenericAny*)L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5699));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5700));
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(206, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_4: *(void**)L_4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5700));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5701));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_OnTrackUp_m2461DCAC37A22186F80177CE5C5C105B323AC5D1_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_5 = L_1;
	const Il2CppFullySharedGenericAny L_13 = L_1;
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_6 = L_2;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* V_0 = NULL;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dragger));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5702));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5703));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5704));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5705));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24), (-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5706));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5707));
		RuntimeObject* L_0;
		L_0 = BaseSlider_2_get_comparer_mC30DA5A2B0762867DC4D02862BB1C3E968610321_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5707));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)), SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5708));
		BaseSlider_2_get_value_mF335EBB27619640856C7FCE15498756C7E3F3ACC_inline(__this, (Il2CppFullySharedGenericAny*)L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5708));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5709));
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_2: *(void**)L_2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5709));
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5710));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5711));
		goto IL_006b;
	}

IL_0028:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5712));
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)), SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5713));
		BaseSlider_2_get_value_mF335EBB27619640856C7FCE15498756C7E3F3ACC_inline(__this, (Il2CppFullySharedGenericAny*)L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5713));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5714));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
		ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* L_9;
		L_9 = ChangeEvent_1_GetPooled_mAE42CDB3455238CA5C981AE506F09F526FB29881((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? il2cpp_codegen_memcpy(L_7, L_5, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1): *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? il2cpp_codegen_memcpy(L_8, L_6, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1): *(void**)L_6), il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5714));
		V_0 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5725));
					ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* L_10 = V_0;
					if (!L_10)
					{
						goto IL_006a;
					}
				}
				{
					ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* L_11 = V_0;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5726));
					NullCheck((RuntimeObject*)L_11);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5726));
				}

IL_006a:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5727));
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5715));
			ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* L_12 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5716));
			NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_12);
			EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_12, (RuntimeObject*)__this, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5716));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5717));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5718));
			BaseSlider_2_get_value_mF335EBB27619640856C7FCE15498756C7E3F3ACC_inline(__this, (Il2CppFullySharedGenericAny*)L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5718));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5719));
			VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(206, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_13: *(void**)L_13));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5719));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5720));
			ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* L_14 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5721));
			NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(8, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_14);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5721));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5722));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5723));
			VirtualActionInvoker0::Invoke(212, __this);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5723));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5724));
			goto IL_006b;
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

IL_006b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5728));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_OnTrackDown_m7E7815ED475939D9268D69135ECF8AE60EFF8353_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericStruct L_15 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD V_3;
	memset((&V_3), 0, sizeof(V_3));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dragger));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5729));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5730));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5731));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5732));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5733));
		BaseSlider_2_get_value_mF335EBB27619640856C7FCE15498756C7E3F3ACC_inline(__this, (Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5733));
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_0, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5734));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5735));
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(227, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5735));
		V_2 = L_1;
		int32_t L_2 = V_2;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4;
		if ((uintptr_t)L_3 * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_3, (int32_t)L_4));
		int8_t* L_6;
		if (L_5 == 0)
		{
			L_6 = NULL;
		}
		else
		{
			L_6 = (int8_t*)alloca(L_5);
			memset(L_6, 0, L_5);
		}
		int32_t L_7 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5736));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline((&L_8), (void*)L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5736));
		V_3 = L_8;
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_9 = V_3;
		V_0 = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5737));
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)), SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5738));
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD >::Invoke(229, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_10: *(void**)L_10), L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5738));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5739));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_12 = ___0_dragger;
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_13 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5740));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_14;
		L_14 = Span_1_op_Implicit_m400E4768CE49AAE9E8572B8D80CEB4AD59A02895(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5740));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5741));
		BaseSlider_2_FindClosestThumbValue_mE23F071F78843DCA416E46CCFD37CF01605E6517(__this, L_12, L_14, (&V_1), (Il2CppFullySharedGenericStruct*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5741));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5742));
		int32_t L_16 = V_1;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24), L_16);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5743));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_OnTrackDragged_mB057261AB9952BB49EC152D752B40C6167CB65BB_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_9 = L_3;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_11 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	memset(V_0, 0, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* V_1 = NULL;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dragger));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5744));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5745));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5746));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5747));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24));
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5748));
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5749));
		goto IL_0058;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5750));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_2 = ___0_dragger;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5751));
		VirtualActionInvoker2Invoker< Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44*, Il2CppFullySharedGenericAny* >::Invoke(220, __this, L_2, (Il2CppFullySharedGenericAny*)L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5751));
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5752));
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5753));
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(206, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_4: *(void**)L_4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5753));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5754));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5755));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 58));
		ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* L_5;
		L_5 = EventBase_1_GetPooled_m804D84D26927A165B5581BD5ACE73ACFC8AF2B93(il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5755));
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5765));
					ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* L_6 = V_1;
					if (!L_6)
					{
						goto IL_0057;
					}
				}
				{
					ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* L_7 = V_1;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5766));
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5766));
				}

IL_0057:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5767));
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5756));
			ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* L_8 = V_1;
			il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)), SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5757));
			NullCheck(L_8);
			ChangingEvent_1_set_previousValue_m467BD2D8305170CE3AF022E5C508D19499695BB0_inline(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_9: *(void**)L_9), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5757));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5758));
			ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* L_10 = V_1;
			il2cpp_codegen_memcpy(L_11, V_0, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5759));
			NullCheck(L_10);
			ChangingEvent_1_set_newValue_mFFC68A1445E1D8D76B22D8471F02C8038AD32818_inline(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_11: *(void**)L_11), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5759));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5760));
			ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* L_12 = V_1;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5761));
			NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_12);
			EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_12, (RuntimeObject*)__this, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5761));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5762));
			ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* L_13 = V_1;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5763));
			NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(8, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_13);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5763));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5764));
			goto IL_0058;
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
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5768));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* BaseSlider_2_GetTrackElement_m6B802DCB4A3ED078A2BF8B56E2BCC430BCB8545D_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5769));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5770));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5771));
		return (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_ComputeValueFromDrag_mA685A0647D865FB43D0C6CA147A3807B9D9928F5_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Direction_t7EB108B5086E69790833C3E0B1BA05E847CF7FA8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_40 = L_9;
	const Il2CppFullySharedGenericAny L_41 = L_9;
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_34 = L_13;
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_36 = L_14;
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(V_2, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Il2CppFullySharedGenericAny V_9 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	memset(V_9, 0, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dragger));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), V_2, (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5772));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5773));
	int32_t G_B11_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B21_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5774));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5775));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5776));
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(227, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5776));
		V_5 = L_0;
		int32_t L_1 = V_5;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4;
		if ((uintptr_t)L_2 * (uintptr_t)L_3 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_4 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_2, (int32_t)L_3));
		int8_t* L_5;
		if (L_4 == 0)
		{
			L_5 = NULL;
		}
		else
		{
			L_5 = (int8_t*)alloca(L_4);
			memset(L_5, 0, L_4);
		}
		int32_t L_6 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5777));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_7;
		memset((&L_7), 0, sizeof(L_7));
		Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline((&L_7), (void*)L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5777));
		V_6 = L_7;
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_8 = V_6;
		V_0 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5778));
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)), SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5779));
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD >::Invoke(229, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_9: *(void**)L_9), L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5779));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5780));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_11 = ___0_dragger;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5781));
		float L_12;
		L_12 = BaseSlider_2_GetNormalizedValueFromDrag_m887E6D97C58BF9949AD9F766E2CDF2F9F9283CCF(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5781));
		V_1 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5782));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5783));
		BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline(__this, (Il2CppFullySharedGenericStruct*)L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5783));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5784));
		BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_inline(__this, (Il2CppFullySharedGenericStruct*)L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5784));
		float L_15 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5785));
		VirtualActionInvoker4Invoker< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, float, Il2CppFullySharedGenericStruct* >::Invoke(235, __this, L_13, L_14, L_15, (Il2CppFullySharedGenericStruct*)L_16);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5785));
		il2cpp_codegen_memcpy(V_2, L_16, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5786));
		int32_t L_17 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
		V_8 = L_17;
		if (1)
		{
			goto IL_0057;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5787));
	}

IL_0057:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5788));
		int32_t L_18 = V_8;
		if (!L_18)
		{
			goto IL_0064;
		}
	}
	{
		goto IL_005d;
	}

IL_005d:
	{
		int32_t L_19 = V_8;
		if ((((int32_t)L_19) == ((int32_t)1)))
		{
			goto IL_00ad;
		}
	}
	{
		goto IL_00c7;
	}

IL_0064:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5789));
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
		if (!L_20)
		{
			goto IL_006e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5790));
		goto IL_0088;
	}

IL_006e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5791));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_21 = ___0_dragger;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5792));
		NullCheck(L_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Draggable_get_deltaPos_m7B4A63C52DF5AE16A109104FF2C527ACA824F43E_inline(L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5792));
		float L_23 = L_22.___x;
		if ((((float)L_23) > ((float)(0.0f))))
		{
			goto IL_0083;
		}
	}
	{
		G_B11_0 = (-1);
		goto IL_0084;
	}

IL_0083:
	{
		G_B11_0 = 1;
	}

IL_0084:
	{
		V_7 = G_B11_0;
		goto IL_00cc;
	}

IL_0088:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5793));
		int32_t L_24 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
		if ((((int32_t)L_24) == ((int32_t)1)))
		{
			goto IL_0093;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5794));
		goto IL_00c7;
	}

IL_0093:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5795));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_25 = ___0_dragger;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5796));
		NullCheck(L_25);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Draggable_get_deltaPos_m7B4A63C52DF5AE16A109104FF2C527ACA824F43E_inline(L_25, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5796));
		float L_27 = L_26.___x;
		if ((((float)L_27) > ((float)(0.0f))))
		{
			goto IL_00a8;
		}
	}
	{
		G_B17_0 = 1;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B17_0 = (-1);
	}

IL_00a9:
	{
		V_7 = G_B17_0;
		goto IL_00cc;
	}

IL_00ad:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5797));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_28 = ___0_dragger;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5798));
		NullCheck(L_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Draggable_get_deltaPos_m7B4A63C52DF5AE16A109104FF2C527ACA824F43E_inline(L_28, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5798));
		float L_30 = L_29.___y;
		if ((((float)L_30) > ((float)(0.0f))))
		{
			goto IL_00c2;
		}
	}
	{
		G_B21_0 = 1;
		goto IL_00c3;
	}

IL_00c2:
	{
		G_B21_0 = (-1);
	}

IL_00c3:
	{
		V_7 = G_B21_0;
		goto IL_00cc;
	}

IL_00c7:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5799));
		V_7 = 0;
		goto IL_00cc;
	}

IL_00cc:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5800));
		if (1)
		{
			goto IL_00d0;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5801));
	}

IL_00d0:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5802));
		int32_t L_31 = V_7;
		V_3 = L_31;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5803));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_32 = V_0;
		int32_t L_33 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24));
		il2cpp_codegen_memcpy(L_34, V_2, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		int32_t L_35 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5804));
		int32_t L_37;
		L_37 = BaseSlider_2_HandleSwap_mBEC909D04B30FD2FBFE62DB1BEE372780E9CED2D(__this, L_32, L_33, il2cpp_codegen_memcpy(L_36, L_34, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4), L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 67));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5804));
		V_4 = L_37;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5805));
		int32_t L_38 = V_4;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24), L_38);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5806));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_39 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5807));
		VirtualActionInvoker2Invoker< Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny* >::Invoke(228, __this, L_39, (Il2CppFullySharedGenericAny*)L_40);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5807));
		il2cpp_codegen_memcpy(V_9, L_40, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		goto IL_00f7;
	}

IL_00f7:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5808));
		il2cpp_codegen_memcpy(L_41, V_9, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_41, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaseSlider_2_GetNormalizedValueFromDrag_m887E6D97C58BF9949AD9F766E2CDF2F9F9283CCF_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Direction_t7EB108B5086E69790833C3E0B1BA05E847CF7FA8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dragger));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5809));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5810));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5811));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5812));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5813));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0;
		L_0 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(219, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5813));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5814));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = V_0;
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_2 = ___0_dragger;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5815));
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Draggable_get_position_m274C64615BFD41CCAD640FBC66BCE05ED04C1B2D_inline(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5815));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5816));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = VisualElementExtensions_WorldToLocal_m9AB4674D3198B2C87E9D53DB56077BA769059EF9(L_1, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5816));
		V_1 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5817));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5818));
		int32_t L_5;
		L_5 = BaseSlider_2_get_orientation_m54531884E5C519A4D0C40D26CF9776F07F334E5E_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 71));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5818));
		V_5 = L_5;
		if (1)
		{
			goto IL_0021;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5819));
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5820));
		int32_t L_6 = V_5;
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_7 = V_5;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0054;
	}

IL_002e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5821));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5822));
		NullCheck(L_8);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9;
		L_9 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5822));
		V_6 = L_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5823));
		il2cpp_codegen_runtime_class_init_inline(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		float L_10;
		L_10 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline((&V_6), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5823));
		V_4 = L_10;
		goto IL_005d;
	}

IL_0041:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5824));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5825));
		NullCheck(L_11);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		L_12 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5825));
		V_6 = L_12;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5826));
		il2cpp_codegen_runtime_class_init_inline(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		float L_13;
		L_13 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&V_6), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5826));
		V_4 = L_13;
		goto IL_005d;
	}

IL_0054:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5827));
		V_4 = (0.0f);
		goto IL_005d;
	}

IL_005d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5828));
		if (1)
		{
			goto IL_0061;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5829));
	}

IL_0061:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5830));
		float L_14 = V_4;
		V_2 = L_14;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5831));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5832));
		int32_t L_15;
		L_15 = BaseSlider_2_get_orientation_m54531884E5C519A4D0C40D26CF9776F07F334E5E_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 71));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5832));
		V_7 = L_15;
		if (1)
		{
			goto IL_0070;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5833));
	}

IL_0070:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5834));
		int32_t L_16 = V_7;
		if (!L_16)
		{
			goto IL_007d;
		}
	}
	{
		goto IL_0076;
	}

IL_0076:
	{
		int32_t L_17 = V_7;
		if ((((int32_t)L_17) == ((int32_t)1)))
		{
			goto IL_00a8;
		}
	}
	{
		goto IL_00b4;
	}

IL_007d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5835));
		int32_t L_18 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
		if (!L_18)
		{
			goto IL_0087;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5836));
		goto IL_0091;
	}

IL_0087:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5837));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_1;
		float L_20 = L_19.___x;
		V_4 = L_20;
		goto IL_00bd;
	}

IL_0091:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5838));
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
		if ((((int32_t)L_21) == ((int32_t)1)))
		{
			goto IL_009c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5839));
		goto IL_00b4;
	}

IL_009c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5840));
		float L_22 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_1;
		float L_24 = L_23.___x;
		V_4 = ((float)il2cpp_codegen_subtract(L_22, L_24));
		goto IL_00bd;
	}

IL_00a8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5841));
		float L_25 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_1;
		float L_27 = L_26.___y;
		V_4 = ((float)il2cpp_codegen_subtract(L_25, L_27));
		goto IL_00bd;
	}

IL_00b4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5842));
		V_4 = (0.0f);
		goto IL_00bd;
	}

IL_00bd:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5843));
		if (1)
		{
			goto IL_00c1;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5844));
	}

IL_00c1:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5845));
		float L_28 = V_4;
		V_3 = L_28;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5846));
		float L_29 = V_3;
		float L_30 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5847));
		float L_31;
		L_31 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_29, L_30, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5847));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5848));
		float L_32;
		L_32 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_31, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5848));
		float L_33 = V_2;
		V_8 = ((float)(L_32/L_33));
		goto IL_00db;
	}

IL_00db:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5849));
		float L_34 = V_8;
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_FindClosestThumbValue_mE23F071F78843DCA416E46CCFD37CF01605E6517_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, int32_t* ___2_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_7 = L_4;
	const Il2CppFullySharedGenericStruct L_16 = L_4;
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_15 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	float V_0 = 0.0f;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(V_1, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	bool V_2 = false;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(V_3, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dragger), (&___1_values), (&___2_index));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), V_1);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5850));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5851));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5852));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5853));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5854));
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline((&___1_values), il2cpp_rgctx_method(method->klass->rgctx_data, 72));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5854));
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5855));
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5856));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5857));
		int32_t* L_2 = ___2_index;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_2, (int32_t)0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5858));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5859));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline((&___1_values), 0, il2cpp_rgctx_method(method->klass->rgctx_data, 74));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5859));
		il2cpp_codegen_memcpy(L_4, L_3, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(V_3, L_4, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		goto IL_004b;
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5860));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_5 = ___0_dragger;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5861));
		float L_6;
		L_6 = BaseSlider_2_GetNormalizedValueFromDrag_m887E6D97C58BF9949AD9F766E2CDF2F9F9283CCF(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5861));
		V_0 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5862));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5863));
		BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline(__this, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5863));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5864));
		BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_inline(__this, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5864));
		float L_9 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5865));
		VirtualActionInvoker4Invoker< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, float, Il2CppFullySharedGenericStruct* >::Invoke(235, __this, L_7, L_8, L_9, (Il2CppFullySharedGenericStruct*)L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5865));
		il2cpp_codegen_memcpy(V_1, L_10, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5866));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_12 = ___1_values;
		int32_t* L_13 = ___2_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5867));
		BaseSlider_2_FindClosestThumbValue_m55A4D60A4627306FCDDC172F46092EDBB0D05412(__this, il2cpp_codegen_memcpy(L_14, L_11, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4), L_12, L_13, (Il2CppFullySharedGenericStruct*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 76));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5867));
		il2cpp_codegen_memcpy(V_3, L_15, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		goto IL_004b;
	}

IL_004b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5868));
		il2cpp_codegen_memcpy(L_16, V_3, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_FindClosestThumbValue_m55A4D60A4627306FCDDC172F46092EDBB0D05412_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct ___0_v, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, int32_t* ___2_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_6 = L_4;
	const Il2CppFullySharedGenericStruct L_15 = L_4;
	const Il2CppFullySharedGenericStruct L_28 = L_4;
	const Il2CppFullySharedGenericStruct L_39 = L_4;
	const Il2CppFullySharedGenericStruct L_45 = L_4;
	const Il2CppFullySharedGenericStruct L_46 = L_4;
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_16 = L_7;
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_17 = L_8;
	const Il2CppFullySharedGenericStruct L_18 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(V_3, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	Il2CppFullySharedGenericStruct V_7 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(V_7, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	int32_t V_8 = 0;
	Il2CppFullySharedGenericStruct V_9 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(V_9, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_v : &___0_v), (&___1_values), (&___2_index));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), V_3, (&V_4), (&V_5), (&V_8), V_9, (&V_10), (&V_11));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5869));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5870));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5871));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5872));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5873));
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline((&___1_values), il2cpp_rgctx_method(method->klass->rgctx_data, 72));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5873));
		V_6 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5874));
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5875));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5876));
		int32_t* L_2 = ___2_index;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_2, (int32_t)0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5877));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5878));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline((&___1_values), 0, il2cpp_rgctx_method(method->klass->rgctx_data, 74));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5878));
		il2cpp_codegen_memcpy(L_4, L_3, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(V_7, L_4, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		goto IL_0102;
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5879));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5880));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5881));
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline((&___1_values), il2cpp_rgctx_method(method->klass->rgctx_data, 72));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5881));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5882));
		V_2 = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5883));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_3, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5884));
		V_4 = ((std::numeric_limits<float>::max)());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5885));
		il2cpp_codegen_memcpy(L_6, ___0_v, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5886));
		BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline(__this, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5886));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5887));
		BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_inline(__this, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5887));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5888));
		float L_9;
		L_9 = VirtualFuncInvoker3Invoker< float, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(236, __this, L_6, L_7, L_8);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5888));
		V_5 = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5889));
		goto IL_00ea;
	}

IL_0060:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5890));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5891));
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		V_8 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_11, L_12))/2))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5892));
		int32_t L_13 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5893));
		Il2CppFullySharedGenericStruct* L_14;
		L_14 = ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline((&___1_values), L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 74));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5893));
		il2cpp_codegen_memcpy(L_15, L_14, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(V_9, L_15, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5894));
		il2cpp_codegen_memcpy(L_16, V_9, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5895));
		BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline(__this, (Il2CppFullySharedGenericStruct*)L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5895));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5896));
		BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_inline(__this, (Il2CppFullySharedGenericStruct*)L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5896));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5897));
		float L_19;
		L_19 = VirtualFuncInvoker3Invoker< float, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(236, __this, L_16, L_17, L_18);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5897));
		V_10 = L_19;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5898));
		float L_20 = V_10;
		float L_21 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5899));
		float L_22;
		L_22 = fabsf(((float)il2cpp_codegen_subtract(L_20, L_21)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5899));
		V_11 = L_22;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5900));
		float L_23 = V_11;
		float L_24 = V_4;
		V_12 = (bool)((((float)L_23) < ((float)L_24))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5901));
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00b4;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5902));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5903));
		float L_26 = V_11;
		V_4 = L_26;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5904));
		int32_t L_27 = V_8;
		V_2 = L_27;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5905));
		il2cpp_codegen_memcpy(L_28, V_9, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(V_3, L_28, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5906));
	}

IL_00b4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5907));
		float L_29 = V_10;
		float L_30 = V_5;
		V_13 = (bool)((((float)L_29) < ((float)L_30))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5908));
		bool L_31 = V_13;
		if (!L_31)
		{
			goto IL_00c9;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5909));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5910));
		int32_t L_32 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5911));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5912));
		goto IL_00e9;
	}

IL_00c9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5913));
		float L_33 = V_10;
		float L_34 = V_5;
		V_14 = (bool)((((float)L_33) > ((float)L_34))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5914));
		bool L_35 = V_14;
		if (!L_35)
		{
			goto IL_00de;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5915));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5916));
		int32_t L_36 = V_8;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5917));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5918));
		goto IL_00e9;
	}

IL_00de:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5919));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5920));
		int32_t* L_37 = ___2_index;
		int32_t L_38 = V_8;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_37, (int32_t)L_38);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5921));
		il2cpp_codegen_memcpy(L_39, V_9, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(V_7, L_39, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		goto IL_0102;
	}

IL_00e9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5922));
	}

IL_00ea:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5923));
		int32_t L_40 = V_0;
		int32_t L_41 = V_1;
		V_15 = (bool)((((int32_t)((((int32_t)L_40) > ((int32_t)L_41))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5924));
		bool L_42 = V_15;
		if (L_42)
		{
			goto IL_0060;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5925));
		int32_t* L_43 = ___2_index;
		int32_t L_44 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_43, (int32_t)L_44);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5926));
		il2cpp_codegen_memcpy(L_45, V_3, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(V_7, L_45, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		goto IL_0102;
	}

IL_0102:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5927));
		il2cpp_codegen_memcpy(L_46, V_7, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_46, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_FindClosestThumbValue_mCDAAF997419AC6278684BC7CB682C8C9F11D5B74_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct ___0_v, int32_t ___1_count, Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF* ___2_predicate, int32_t* ___3_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_6 = L_4;
	const Il2CppFullySharedGenericStruct L_15 = L_4;
	const Il2CppFullySharedGenericStruct L_28 = L_4;
	const Il2CppFullySharedGenericStruct L_39 = L_4;
	const Il2CppFullySharedGenericStruct L_45 = L_4;
	const Il2CppFullySharedGenericStruct L_46 = L_4;
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_16 = L_7;
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_17 = L_8;
	const Il2CppFullySharedGenericStruct L_18 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(V_3, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	Il2CppFullySharedGenericStruct V_7 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(V_7, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	int32_t V_8 = 0;
	Il2CppFullySharedGenericStruct V_9 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(V_9, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_v : &___0_v), (&___1_count), (&___2_predicate), (&___3_index));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), V_3, (&V_4), (&V_5), (&V_8), V_9, (&V_10), (&V_11));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5928));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5929));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5930));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5931));
		int32_t L_0 = ___1_count;
		V_6 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5932));
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5933));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5934));
		int32_t* L_2 = ___3_index;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_2, (int32_t)0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5935));
		Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF* L_3 = ___2_predicate;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5936));
		NullCheck(L_3);
		Func_2_Invoke_mC18915A79E2024105FB43AF1E4CE50CC993D4A45_inline(L_3, 0, (Il2CppFullySharedGenericStruct*)L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 79));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5936));
		il2cpp_codegen_memcpy(V_7, L_4, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		goto IL_00ed;
	}

IL_001e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5937));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5938));
		int32_t L_5 = ___1_count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5939));
		V_2 = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5940));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_3, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5941));
		V_4 = ((std::numeric_limits<float>::max)());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5942));
		il2cpp_codegen_memcpy(L_6, ___0_v, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5943));
		BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline(__this, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5943));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5944));
		BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_inline(__this, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5944));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5945));
		float L_9;
		L_9 = VirtualFuncInvoker3Invoker< float, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(236, __this, L_6, L_7, L_8);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5945));
		V_5 = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5946));
		goto IL_00d4;
	}

IL_004f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5947));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5948));
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		V_8 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_11, L_12))/2))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5949));
		Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF* L_13 = ___2_predicate;
		int32_t L_14 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5950));
		NullCheck(L_13);
		Func_2_Invoke_mC18915A79E2024105FB43AF1E4CE50CC993D4A45_inline(L_13, L_14, (Il2CppFullySharedGenericStruct*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 79));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5950));
		il2cpp_codegen_memcpy(V_9, L_15, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5951));
		il2cpp_codegen_memcpy(L_16, V_9, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5952));
		BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline(__this, (Il2CppFullySharedGenericStruct*)L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5952));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5953));
		BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_inline(__this, (Il2CppFullySharedGenericStruct*)L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5953));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5954));
		float L_19;
		L_19 = VirtualFuncInvoker3Invoker< float, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(236, __this, L_16, L_17, L_18);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5954));
		V_10 = L_19;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5955));
		float L_20 = V_10;
		float L_21 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5956));
		float L_22;
		L_22 = fabsf(((float)il2cpp_codegen_subtract(L_20, L_21)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5956));
		V_11 = L_22;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5957));
		float L_23 = V_11;
		float L_24 = V_4;
		V_12 = (bool)((((float)L_23) < ((float)L_24))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5958));
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_009d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5959));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5960));
		float L_26 = V_11;
		V_4 = L_26;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5961));
		int32_t L_27 = V_8;
		V_2 = L_27;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5962));
		il2cpp_codegen_memcpy(L_28, V_9, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(V_3, L_28, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5963));
	}

IL_009d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5964));
		float L_29 = V_10;
		float L_30 = V_5;
		V_13 = (bool)((((float)L_29) < ((float)L_30))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5965));
		bool L_31 = V_13;
		if (!L_31)
		{
			goto IL_00b2;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5966));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5967));
		int32_t L_32 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5968));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5969));
		goto IL_00d3;
	}

IL_00b2:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5970));
		float L_33 = V_10;
		float L_34 = V_5;
		V_14 = (bool)((((float)L_33) > ((float)L_34))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5971));
		bool L_35 = V_14;
		if (!L_35)
		{
			goto IL_00c7;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5972));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5973));
		int32_t L_36 = V_8;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5974));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5975));
		goto IL_00d3;
	}

IL_00c7:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5976));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5977));
		int32_t* L_37 = ___3_index;
		int32_t L_38 = V_8;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_37, (int32_t)L_38);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5978));
		il2cpp_codegen_memcpy(L_39, V_9, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(V_7, L_39, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		goto IL_00ed;
	}

IL_00d3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5979));
	}

IL_00d4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5980));
		int32_t L_40 = V_0;
		int32_t L_41 = V_1;
		V_15 = (bool)((((int32_t)((((int32_t)L_40) > ((int32_t)L_41))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5981));
		bool L_42 = V_15;
		if (L_42)
		{
			goto IL_004f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5982));
		int32_t* L_43 = ___3_index;
		int32_t L_44 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_43, (int32_t)L_44);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5983));
		il2cpp_codegen_memcpy(L_45, V_3, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(V_7, L_45, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		goto IL_00ed;
	}

IL_00ed:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5984));
		il2cpp_codegen_memcpy(L_46, V_7, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_46, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_OnKeyDown_m45C7A2EFAADB87D5F0D19532020E62E1E7F1E0EA_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C* ___0_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyboardEventBase_1_get_keyCode_m1F9724EFC75BE6E998EC0DB5515F7FD577257D6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyboardEventBase_1_get_shiftKey_m6F17812A43DB9076880B0ACA64DD5675FA30E418_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thumb_t93918EA28AB7D7A87A976861423C11037819B679_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thumb_t93918EA28AB7D7A87A976861423C11037819B679_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_58 = L_7;
	const Il2CppFullySharedGenericAny L_62 = L_7;
	const Il2CppFullySharedGenericAny L_73 = L_7;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_63 = L_17;
	const Il2CppFullySharedGenericAny L_75 = L_17;
	const Il2CppFullySharedGenericAny L_65 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_77 = L_65;
	const Il2CppFullySharedGenericAny L_66 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_79 = L_66;
	const Il2CppFullySharedGenericAny L_80 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_81 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_82 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericStruct L_21 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_32 = L_21;
	const Il2CppFullySharedGenericStruct L_35 = L_21;
	const Il2CppFullySharedGenericStruct L_36 = L_21;
	const Il2CppFullySharedGenericStruct L_38 = L_21;
	const Il2CppFullySharedGenericStruct L_44 = L_21;
	const Il2CppFullySharedGenericStruct L_47 = L_21;
	const Il2CppFullySharedGenericStruct L_48 = L_21;
	const Il2CppFullySharedGenericStruct L_50 = L_21;
	const Il2CppFullySharedGenericStruct L_53 = L_21;
	const Il2CppFullySharedGenericStruct L_22 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_55 = L_22;
	int32_t V_0 = 0;
	Thumb_t93918EA28AB7D7A87A976861423C11037819B679* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	memset(V_3, 0, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD V_4;
	memset((&V_4), 0, sizeof(V_4));
	Il2CppFullySharedGenericStruct V_5 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(V_5, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	Il2CppFullySharedGenericStruct V_6 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(V_6, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	int32_t V_7 = 0;
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	memset(V_8, 0, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	int32_t V_9 = 0;
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	Thumb_t93918EA28AB7D7A87A976861423C11037819B679* V_14 = NULL;
	bool V_15 = false;
	ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* V_16 = NULL;
	ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* V_17 = NULL;
	bool V_18 = false;
	bool V_19 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_evt));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), V_3, (&V_4), V_5, V_6, (&V_7), V_8, (&V_14), (&V_16), (&V_17));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5985));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5986));
	int32_t G_B3_0 = 0;
	Il2CppFullySharedGenericStruct G_B15_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B15_0, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* G_B15_1 = NULL;
	Il2CppFullySharedGenericStruct G_B14_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B14_0, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* G_B14_1 = NULL;
	Il2CppFullySharedGenericStruct G_B16_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B16_0, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	Il2CppFullySharedGenericStruct G_B16_1 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B16_1, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* G_B16_2 = NULL;
	Il2CppFullySharedGenericStruct G_B27_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B27_0, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* G_B27_1 = NULL;
	Il2CppFullySharedGenericStruct G_B26_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B26_0, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* G_B26_1 = NULL;
	Il2CppFullySharedGenericStruct G_B28_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B28_0, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	Il2CppFullySharedGenericStruct G_B28_1 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B28_1, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* G_B28_2 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5987));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5988));
		KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C* L_0 = ___0_evt;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5989));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_0);
		RuntimeObject* L_1;
		L_1 = EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5989));
		V_1 = ((Thumb_t93918EA28AB7D7A87A976861423C11037819B679*)IsInstClass((RuntimeObject*)L_1, Thumb_t93918EA28AB7D7A87A976861423C11037819B679_il2cpp_TypeInfo_var));
		Thumb_t93918EA28AB7D7A87A976861423C11037819B679* L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001f;
	}

IL_0013:
	{
		Thumb_t93918EA28AB7D7A87A976861423C11037819B679* L_3 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5990));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_3);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4;
		L_4 = VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000_inline((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5990));
		Thumb_t93918EA28AB7D7A87A976861423C11037819B679* L_5 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5991));
		NullCheck(L_4);
		int32_t L_6;
		L_6 = VisualElement_IndexOf_m1CC000F2192D5D561AE87B2EC3AB312BD0D714AE(L_4, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5991));
		G_B3_0 = L_6;
	}

IL_001f:
	{
		V_0 = G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5992));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5993));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5994));
		BaseSlider_2_get_value_mF335EBB27619640856C7FCE15498756C7E3F3ACC_inline(__this, (Il2CppFullySharedGenericAny*)L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5994));
		il2cpp_codegen_memcpy(V_3, L_7, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5995));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5996));
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(227, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5996));
		V_9 = L_8;
		int32_t L_9 = V_9;
		uintptr_t L_10 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		uint32_t L_11 = SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4;
		if ((uintptr_t)L_10 * (uintptr_t)L_11 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_12 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_10, (int32_t)L_11));
		int8_t* L_13;
		if (L_12 == 0)
		{
			L_13 = NULL;
		}
		else
		{
			L_13 = (int8_t*)alloca(L_12);
			memset(L_13, 0, L_12);
		}
		int32_t L_14 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5997));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_15;
		memset((&L_15), 0, sizeof(L_15));
		Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline((&L_15), (void*)L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5997));
		V_10 = L_15;
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_16 = V_10;
		V_4 = L_16;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5998));
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)), SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_18 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5999));
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD >::Invoke(229, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_17: *(void**)L_17), L_18);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5999));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6000));
		int32_t L_19 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6001));
		Il2CppFullySharedGenericStruct* L_20;
		L_20 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&V_4), L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6001));
		il2cpp_codegen_memcpy(L_21, L_20, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(V_5, L_21, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6002));
		il2cpp_codegen_memcpy(L_22, V_5, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(V_6, L_22, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6003));
		KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C* L_23 = ___0_evt;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6004));
		NullCheck((KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA*)L_23);
		int32_t L_24;
		L_24 = KeyboardEventBase_1_get_keyCode_m1F9724EFC75BE6E998EC0DB5515F7FD577257D6B_inline((KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA*)L_23, KeyboardEventBase_1_get_keyCode_m1F9724EFC75BE6E998EC0DB5515F7FD577257D6B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6004));
		V_12 = L_24;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6005));
		int32_t L_25 = V_12;
		V_11 = L_25;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6006));
		int32_t L_26 = V_11;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_26, ((int32_t)273))))
		{
			case 0:
			{
				goto IL_0114;
			}
			case 1:
			{
				goto IL_00bf;
			}
			case 2:
			{
				goto IL_00ac;
			}
			case 3:
			{
				goto IL_009a;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_009a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6007));
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
		if (L_27)
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_28 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
		if (!L_28)
		{
			goto IL_00ca;
		}
	}

IL_00aa:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6008));
		goto IL_00ef;
	}

IL_00ac:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6009));
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
		if (L_29)
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
		if ((((int32_t)L_30) == ((int32_t)1)))
		{
			goto IL_00ca;
		}
	}

IL_00bd:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6010));
		goto IL_0102;
	}

IL_00bf:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6011));
		int32_t L_31 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
		if ((((int32_t)L_31) == ((int32_t)1)))
		{
			goto IL_00ca;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6012));
		goto IL_0144;
	}

IL_00ca:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6013));
		il2cpp_codegen_memcpy(L_32, V_6, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C* L_33 = ___0_evt;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6014));
		NullCheck((KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA*)L_33);
		bool L_34;
		L_34 = KeyboardEventBase_1_get_shiftKey_m6F17812A43DB9076880B0ACA64DD5675FA30E418((KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA*)L_33, KeyboardEventBase_1_get_shiftKey_m6F17812A43DB9076880B0ACA64DD5675FA30E418_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6014));
		if (L_34)
		{
			il2cpp_codegen_memcpy(G_B15_0, L_32, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
			G_B15_1 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
			goto IL_00dd;
		}
		il2cpp_codegen_memcpy(G_B14_0, L_32, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		G_B14_1 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
	}
	{
		il2cpp_codegen_memcpy(L_35, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),19)), SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(G_B16_0, L_35, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(G_B16_1, G_B14_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		G_B16_2 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)G_B14_1);
		goto IL_00e3;
	}

IL_00dd:
	{
		il2cpp_codegen_memcpy(L_36, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),20)), SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(G_B16_0, L_36, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(G_B16_1, G_B15_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		G_B16_2 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)G_B15_1);
	}

IL_00e3:
	{
		KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C* L_37 = ___0_evt;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6015));
		NullCheck(G_B16_2);
		VirtualActionInvoker4Invoker< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C*, Il2CppFullySharedGenericStruct* >::Invoke(224, G_B16_2, G_B16_1, G_B16_0, L_37, (Il2CppFullySharedGenericStruct*)L_38);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6015));
		il2cpp_codegen_memcpy(V_6, L_38, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6016));
		V_2 = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6017));
		goto IL_0144;
	}

IL_00ef:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6018));
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
		if (L_39)
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_40 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
		if ((((int32_t)L_40) == ((int32_t)1)))
		{
			goto IL_011f;
		}
	}

IL_0100:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6019));
		goto IL_0144;
	}

IL_0102:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6020));
		int32_t L_41 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
		if (L_41)
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_42 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
		if (!L_42)
		{
			goto IL_011f;
		}
	}

IL_0112:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6021));
		goto IL_0144;
	}

IL_0114:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6022));
		int32_t L_43 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
		if ((((int32_t)L_43) == ((int32_t)1)))
		{
			goto IL_011f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6023));
		goto IL_0144;
	}

IL_011f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6024));
		il2cpp_codegen_memcpy(L_44, V_6, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C* L_45 = ___0_evt;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6025));
		NullCheck((KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA*)L_45);
		bool L_46;
		L_46 = KeyboardEventBase_1_get_shiftKey_m6F17812A43DB9076880B0ACA64DD5675FA30E418((KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA*)L_45, KeyboardEventBase_1_get_shiftKey_m6F17812A43DB9076880B0ACA64DD5675FA30E418_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6025));
		if (L_46)
		{
			il2cpp_codegen_memcpy(G_B27_0, L_44, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
			G_B27_1 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
			goto IL_0132;
		}
		il2cpp_codegen_memcpy(G_B26_0, L_44, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		G_B26_1 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
	}
	{
		il2cpp_codegen_memcpy(L_47, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),19)), SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(G_B28_0, L_47, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(G_B28_1, G_B26_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		G_B28_2 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)G_B26_1);
		goto IL_0138;
	}

IL_0132:
	{
		il2cpp_codegen_memcpy(L_48, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),20)), SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(G_B28_0, L_48, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(G_B28_1, G_B27_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		G_B28_2 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)G_B27_1);
	}

IL_0138:
	{
		KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C* L_49 = ___0_evt;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6026));
		NullCheck(G_B28_2);
		VirtualActionInvoker4Invoker< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C*, Il2CppFullySharedGenericStruct* >::Invoke(225, G_B28_2, G_B28_1, G_B28_0, L_49, (Il2CppFullySharedGenericStruct*)L_50);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6026));
		il2cpp_codegen_memcpy(V_6, L_50, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6027));
		V_2 = 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6028));
		goto IL_0144;
	}

IL_0144:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6029));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_51 = V_4;
		int32_t L_52 = V_0;
		il2cpp_codegen_memcpy(L_53, V_6, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		int32_t L_54 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6030));
		int32_t L_56;
		L_56 = BaseSlider_2_HandleSwap_mBEC909D04B30FD2FBFE62DB1BEE372780E9CED2D(__this, L_51, L_52, il2cpp_codegen_memcpy(L_55, L_53, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4), L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 67));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6030));
		V_7 = L_56;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6031));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_57 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6032));
		VirtualActionInvoker2Invoker< Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny* >::Invoke(228, __this, L_57, (Il2CppFullySharedGenericAny*)L_58);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6032));
		il2cpp_codegen_memcpy(V_8, L_58, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6033));
		int32_t L_59 = V_2;
		V_13 = (bool)((!(((uint32_t)L_59) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6034));
		bool L_60 = V_13;
		if (!L_60)
		{
			goto IL_0273;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6035));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6036));
		KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C* L_61 = ___0_evt;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6037));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_61);
		EventBase_StopPropagation_mEFC7E5AB7164157065FF19064A6ADCBB0D8AF6FB((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_61, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6037));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6038));
		il2cpp_codegen_memcpy(L_62, V_8, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6039));
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(223, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_62: *(void**)L_62), (Il2CppFullySharedGenericAny*)L_63);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6039));
		il2cpp_codegen_memcpy(V_8, L_63, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6040));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6041));
		RuntimeObject* L_64;
		L_64 = BaseSlider_2_get_comparer_mC30DA5A2B0762867DC4D02862BB1C3E968610321_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6041));
		il2cpp_codegen_memcpy(L_65, V_8, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		il2cpp_codegen_memcpy(L_66, V_3, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6042));
		NullCheck(L_64);
		int32_t L_67;
		L_67 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_64, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_65: *(void**)L_65), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_66: *(void**)L_66));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6042));
		V_15 = (bool)((!(((uint32_t)L_67) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6043));
		bool L_68 = V_15;
		if (!L_68)
		{
			goto IL_020a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6044));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6045));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6046));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 58));
		ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* L_69;
		L_69 = EventBase_1_GetPooled_m804D84D26927A165B5581BD5ACE73ACFC8AF2B93(il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6046));
		V_16 = L_69;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01fc:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6069));
					ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* L_70 = V_16;
					if (!L_70)
					{
						goto IL_0208;
					}
				}
				{
					ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* L_71 = V_16;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6070));
					NullCheck((RuntimeObject*)L_71);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_71);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6070));
				}

IL_0208:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6071));
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6047));
				ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* L_72 = V_16;
				il2cpp_codegen_memcpy(L_73, V_3, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6048));
				NullCheck(L_72);
				ChangingEvent_1_set_previousValue_m467BD2D8305170CE3AF022E5C508D19499695BB0_inline(L_72, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_73: *(void**)L_73), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6048));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6049));
				ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* L_74 = V_16;
				il2cpp_codegen_memcpy(L_75, V_8, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6050));
				NullCheck(L_74);
				ChangingEvent_1_set_newValue_mFFC68A1445E1D8D76B22D8471F02C8038AD32818_inline(L_74, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_75: *(void**)L_75), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6050));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6051));
				ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* L_76 = V_16;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6052));
				NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_76);
				EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_76, (RuntimeObject*)__this, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6052));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6053));
				il2cpp_codegen_memcpy(L_77, V_8, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6054));
				VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(206, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_77: *(void**)L_77));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6054));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6055));
				ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* L_78 = V_16;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6056));
				NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
				VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(8, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_78);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6056));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6057));
				il2cpp_codegen_memcpy(L_79, V_3, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
				il2cpp_codegen_memcpy(L_80, V_8, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6058));
				il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
				ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* L_83;
				L_83 = ChangeEvent_1_GetPooled_mAE42CDB3455238CA5C981AE506F09F526FB29881((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? il2cpp_codegen_memcpy(L_81, L_79, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1): *(void**)L_79), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? il2cpp_codegen_memcpy(L_82, L_80, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1): *(void**)L_80), il2cpp_rgctx_method(method->klass->rgctx_data, 26));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6058));
				V_17 = L_83;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_01ed_1:
					{
						STORE_TRY_ID(methodExecutionContext, 0);
						{
							CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6065));
							ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* L_84 = V_17;
							if (!L_84)
							{
								goto IL_01f9_1;
							}
						}
						{
							ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* L_85 = V_17;
							STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6066));
							NullCheck((RuntimeObject*)L_85);
							InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_85);
							CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6066));
						}

IL_01f9_1:
						{
							CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6067));
							return;
						}
					}
				});
				try
				{
					STORE_TRY_ID(methodExecutionContext, 1);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6059));
					ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* L_86 = V_17;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6060));
					NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_86);
					EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_86, (RuntimeObject*)__this, NULL);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6060));
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6061));
					ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* L_87 = V_17;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6062));
					NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
					VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(8, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_87);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6062));
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6063));
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6064));
					VirtualActionInvoker0::Invoke(212, __this);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6064));
					goto IL_01fa_1;
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

IL_01fa_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6068));
				goto IL_0209;
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

IL_0209:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6072));
	}

IL_020a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6073));
		KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C* L_88 = ___0_evt;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6074));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_88);
		RuntimeObject* L_89;
		L_89 = EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_88, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6074));
		V_14 = ((Thumb_t93918EA28AB7D7A87A976861423C11037819B679*)IsInstClass((RuntimeObject*)L_89, Thumb_t93918EA28AB7D7A87A976861423C11037819B679_il2cpp_TypeInfo_var));
		Thumb_t93918EA28AB7D7A87A976861423C11037819B679* L_90 = V_14;
		V_18 = (bool)((!(((RuntimeObject*)(Thumb_t93918EA28AB7D7A87A976861423C11037819B679*)L_90) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6075));
		bool L_91 = V_18;
		if (!L_91)
		{
			goto IL_0272;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6076));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6077));
		KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C* L_92 = ___0_evt;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6078));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_92);
		RuntimeObject* L_93;
		L_93 = EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_92, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6078));
		Thumb_t93918EA28AB7D7A87A976861423C11037819B679* L_94 = V_14;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6079));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_94);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_95;
		L_95 = VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000_inline((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_94, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6079));
		int32_t L_96 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6080));
		NullCheck(L_95);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_97;
		L_97 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_95, L_96, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6080));
		V_19 = (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_93) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_97))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6081));
		bool L_98 = V_19;
		if (!L_98)
		{
			goto IL_0258;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6082));
		Thumb_t93918EA28AB7D7A87A976861423C11037819B679* L_99 = V_14;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6083));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_99);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_100;
		L_100 = VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000_inline((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_99, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6083));
		int32_t L_101 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6084));
		NullCheck(L_100);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_102;
		L_102 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_100, L_101, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6084));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6085));
		NullCheck((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)L_102);
		VirtualActionInvoker0::Invoke(23, (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)L_102);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6085));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6086));
		goto IL_0271;
	}

IL_0258:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6087));
		Thumb_t93918EA28AB7D7A87A976861423C11037819B679* L_103 = V_14;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6088));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_103);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_104;
		L_104 = VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000_inline((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_103, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6088));
		int32_t L_105 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6089));
		NullCheck(L_104);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_106;
		L_106 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_104, L_105, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6089));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6090));
		NullCheck(((Thumb_t93918EA28AB7D7A87A976861423C11037819B679*)CastclassClass((RuntimeObject*)L_106, Thumb_t93918EA28AB7D7A87A976861423C11037819B679_il2cpp_TypeInfo_var)));
		Thumb_EnsureKeyboardFocus_m40E2202C3772F69395E7C364E2820799F3F8AB56(((Thumb_t93918EA28AB7D7A87A976861423C11037819B679*)CastclassClass((RuntimeObject*)L_106, Thumb_t93918EA28AB7D7A87A976861423C11037819B679_il2cpp_TypeInfo_var)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6090));
	}

IL_0271:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6091));
	}

IL_0272:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6092));
	}

IL_0273:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6093));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseSlider_2_HandleSwap_mBEC909D04B30FD2FBFE62DB1BEE372780E9CED2D_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_values, int32_t ___1_thumbIndex, Il2CppFullySharedGenericStruct ___2_newThumbValue, int32_t ___3_dir, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_7 = L_3;
	const Il2CppFullySharedGenericStruct L_11 = L_3;
	const Il2CppFullySharedGenericStruct L_12 = L_3;
	const Il2CppFullySharedGenericStruct L_17 = L_3;
	const Il2CppFullySharedGenericStruct L_18 = L_3;
	const Il2CppFullySharedGenericStruct L_19 = L_3;
	const Il2CppFullySharedGenericStruct L_25 = L_3;
	const Il2CppFullySharedGenericStruct L_36 = L_3;
	const Il2CppFullySharedGenericStruct L_49 = L_3;
	const Il2CppFullySharedGenericStruct L_61 = L_3;
	const Il2CppFullySharedGenericStruct L_73 = L_3;
	const Il2CppFullySharedGenericStruct L_22 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_39 = L_22;
	const Il2CppFullySharedGenericStruct L_52 = L_22;
	const Il2CppFullySharedGenericStruct L_64 = L_22;
	const Il2CppFullySharedGenericStruct L_76 = L_22;
	const Il2CppFullySharedGenericStruct L_41 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_66 = L_41;
	const Il2CppFullySharedGenericStruct L_42 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_67 = L_42;
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericStruct* V_6 = NULL;
	Il2CppFullySharedGenericStruct V_7 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(V_7, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	Il2CppFullySharedGenericStruct V_8 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(V_8, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	bool V_9 = false;
	bool V_10 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values), (&___1_thumbIndex), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___2_newThumbValue : &___2_newThumbValue), (&___3_dir));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6094));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 6095));
	Il2CppFullySharedGenericStruct G_B5_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B5_0, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* G_B5_1 = NULL;
	Il2CppFullySharedGenericStruct G_B4_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B4_0, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* G_B4_1 = NULL;
	Il2CppFullySharedGenericStruct G_B6_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B6_0, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	Il2CppFullySharedGenericStruct G_B6_1 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B6_1, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* G_B6_2 = NULL;
	Il2CppFullySharedGenericStruct G_B8_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B8_0, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	Il2CppFullySharedGenericStruct G_B8_1 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B8_1, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* G_B8_2 = NULL;
	Il2CppFullySharedGenericStruct G_B7_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B7_0, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	Il2CppFullySharedGenericStruct G_B7_1 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B7_1, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* G_B7_2 = NULL;
	Il2CppFullySharedGenericStruct G_B9_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B9_0, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	Il2CppFullySharedGenericStruct G_B9_1 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B9_1, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	Il2CppFullySharedGenericStruct G_B9_2 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(G_B9_2, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* G_B9_3 = NULL;
	int32_t G_B19_0 = 0;
	int32_t G_B26_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6096));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6097));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6098));
		int32_t L_0;
		L_0 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&___0_values), il2cpp_rgctx_method(method->klass->rgctx_data, 84));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6098));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6099));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6100));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6101));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6102));
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_values), 0, il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6102));
		il2cpp_codegen_memcpy(L_3, ___2_newThumbValue, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_2, L_3, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), (void**)(Il2CppFullySharedGenericStruct*)L_2, (void*)L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6103));
		V_2 = 0;
		goto IL_01da;
	}

IL_0025:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6104));
		int32_t L_4 = ___1_thumbIndex;
		V_0 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6105));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6106));
		bool L_5;
		L_5 = BaseSlider_2_get_swapThumbs_mB9B92B107973C9BE48DDB86738BB27116B49B1CB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 85));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6106));
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6107));
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_008f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6108));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6109));
		il2cpp_codegen_memcpy(L_7, ___2_newThumbValue, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		int32_t L_8 = ___1_thumbIndex;
		if (!L_8)
		{
			il2cpp_codegen_memcpy(G_B5_0, L_7, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
			G_B5_1 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
			goto IL_004b;
		}
		il2cpp_codegen_memcpy(G_B4_0, L_7, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		G_B4_1 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
	}
	{
		int32_t L_9 = ___1_thumbIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6110));
		Il2CppFullySharedGenericStruct* L_10;
		L_10 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_values), ((int32_t)il2cpp_codegen_subtract(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6110));
		il2cpp_codegen_memcpy(L_11, L_10, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(G_B6_0, L_11, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(G_B6_1, G_B4_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		G_B6_2 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)G_B4_1);
		goto IL_0051;
	}

IL_004b:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6111));
		BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline(__this, (Il2CppFullySharedGenericStruct*)L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6111));
		il2cpp_codegen_memcpy(G_B6_0, L_12, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(G_B6_1, G_B5_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		G_B6_2 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)G_B5_1);
	}

IL_0051:
	{
		int32_t L_13 = ___1_thumbIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6112));
		int32_t L_14;
		L_14 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&___0_values), il2cpp_rgctx_method(method->klass->rgctx_data, 84));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6112));
		if ((((int32_t)L_13) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_14, 1)))))
		{
			il2cpp_codegen_memcpy(G_B8_0, G_B6_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
			il2cpp_codegen_memcpy(G_B8_1, G_B6_1, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
			G_B8_2 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)G_B6_2);
			goto IL_006e;
		}
		il2cpp_codegen_memcpy(G_B7_0, G_B6_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(G_B7_1, G_B6_1, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		G_B7_2 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)G_B6_2);
	}
	{
		int32_t L_15 = ___1_thumbIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6113));
		Il2CppFullySharedGenericStruct* L_16;
		L_16 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_values), ((int32_t)il2cpp_codegen_add(L_15, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6113));
		il2cpp_codegen_memcpy(L_17, L_16, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(G_B9_0, L_17, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(G_B9_1, G_B7_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(G_B9_2, G_B7_1, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		G_B9_3 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)G_B7_2);
		goto IL_0074;
	}

IL_006e:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6114));
		BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_inline(__this, (Il2CppFullySharedGenericStruct*)L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6114));
		il2cpp_codegen_memcpy(G_B9_0, L_18, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(G_B9_1, G_B8_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(G_B9_2, G_B8_1, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		G_B9_3 = ((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)G_B8_2);
	}

IL_0074:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6115));
		NullCheck(G_B9_3);
		VirtualActionInvoker4Invoker< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(230, G_B9_3, G_B9_2, G_B9_1, G_B9_0, (Il2CppFullySharedGenericStruct*)L_19);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6115));
		il2cpp_codegen_memcpy(___2_newThumbValue, L_19, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6116));
		int32_t L_20 = ___1_thumbIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6117));
		Il2CppFullySharedGenericStruct* L_21;
		L_21 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_values), L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6117));
		il2cpp_codegen_memcpy(L_22, ___2_newThumbValue, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_21, L_22, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), (void**)(Il2CppFullySharedGenericStruct*)L_21, (void*)L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6118));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6119));
		goto IL_01d6;
	}

IL_008f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6120));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6121));
		int32_t L_23 = ___1_thumbIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6122));
		Il2CppFullySharedGenericStruct* L_24;
		L_24 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_values), L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6122));
		il2cpp_codegen_memcpy(L_25, ___2_newThumbValue, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_24, L_25, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), (void**)(Il2CppFullySharedGenericStruct*)L_24, (void*)L_25);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6123));
		int32_t L_26 = ___3_dir;
		V_5 = L_26;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6124));
		int32_t L_27 = V_5;
		V_4 = L_27;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6125));
		int32_t L_28 = V_4;
		if ((((int32_t)L_28) == ((int32_t)(-1))))
		{
			goto IL_014d;
		}
	}
	{
		goto IL_00b0;
	}

IL_00b0:
	{
		int32_t L_29 = V_4;
		if ((((int32_t)L_29) == ((int32_t)1)))
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_01d5;
	}

IL_00ba:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6126));
		goto IL_0106;
	}

IL_00bc:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6127));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6128));
		int32_t L_30 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6129));
		Il2CppFullySharedGenericStruct* L_31;
		L_31 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_values), L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6129));
		V_6 = L_31;
		int32_t L_32 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6130));
		Il2CppFullySharedGenericStruct* L_33;
		L_33 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_values), ((int32_t)il2cpp_codegen_add(L_32, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6130));
		int32_t L_34 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6131));
		Il2CppFullySharedGenericStruct* L_35;
		L_35 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_values), ((int32_t)il2cpp_codegen_add(L_34, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6131));
		il2cpp_codegen_memcpy(L_36, L_35, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(V_7, L_36, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		int32_t L_37 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6132));
		Il2CppFullySharedGenericStruct* L_38;
		L_38 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_values), L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6132));
		il2cpp_codegen_memcpy(L_39, L_38, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(V_8, L_39, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		Il2CppFullySharedGenericStruct* L_40 = V_6;
		il2cpp_codegen_memcpy(L_41, V_7, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_40, L_41, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), (void**)(Il2CppFullySharedGenericStruct*)L_40, (void*)L_41);
		il2cpp_codegen_memcpy(L_42, V_8, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_33, L_42, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), (void**)(Il2CppFullySharedGenericStruct*)L_33, (void*)L_42);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6133));
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6134));
	}

IL_0106:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6135));
		int32_t L_44 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6136));
		int32_t L_45;
		L_45 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&___0_values), il2cpp_rgctx_method(method->klass->rgctx_data, 84));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6136));
		if ((((int32_t)L_44) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_45, 1)))))
		{
			goto IL_013e;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6137));
		RuntimeObject* L_46;
		L_46 = BaseSlider_2_get_thumbComparer_mFA5827386358B531C8C93665C223668056C19079_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6137));
		int32_t L_47 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6138));
		Il2CppFullySharedGenericStruct* L_48;
		L_48 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_values), L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6138));
		il2cpp_codegen_memcpy(L_49, L_48, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		int32_t L_50 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6139));
		Il2CppFullySharedGenericStruct* L_51;
		L_51 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_values), ((int32_t)il2cpp_codegen_add(L_50, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6139));
		il2cpp_codegen_memcpy(L_52, L_51, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6140));
		NullCheck(L_46);
		int32_t L_53;
		L_53 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_46, L_49, L_52);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6140));
		G_B19_0 = ((((int32_t)L_53) > ((int32_t)0))? 1 : 0);
		goto IL_013f;
	}

IL_013e:
	{
		G_B19_0 = 0;
	}

IL_013f:
	{
		V_9 = (bool)G_B19_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6141));
		bool L_54 = V_9;
		if (L_54)
		{
			goto IL_00bc;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6142));
		goto IL_01d5;
	}

IL_014d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6143));
		goto IL_0199;
	}

IL_014f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6144));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6145));
		int32_t L_55 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6146));
		Il2CppFullySharedGenericStruct* L_56;
		L_56 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_values), L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6146));
		V_6 = L_56;
		int32_t L_57 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6147));
		Il2CppFullySharedGenericStruct* L_58;
		L_58 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_values), ((int32_t)il2cpp_codegen_subtract(L_57, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6147));
		int32_t L_59 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6148));
		Il2CppFullySharedGenericStruct* L_60;
		L_60 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_values), ((int32_t)il2cpp_codegen_subtract(L_59, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6148));
		il2cpp_codegen_memcpy(L_61, L_60, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(V_8, L_61, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		int32_t L_62 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6149));
		Il2CppFullySharedGenericStruct* L_63;
		L_63 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_values), L_62, il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6149));
		il2cpp_codegen_memcpy(L_64, L_63, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(V_7, L_64, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		Il2CppFullySharedGenericStruct* L_65 = V_6;
		il2cpp_codegen_memcpy(L_66, V_8, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_65, L_66, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), (void**)(Il2CppFullySharedGenericStruct*)L_65, (void*)L_66);
		il2cpp_codegen_memcpy(L_67, V_7, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_58, L_67, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), (void**)(Il2CppFullySharedGenericStruct*)L_58, (void*)L_67);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6150));
		int32_t L_68 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_68, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6151));
	}

IL_0199:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6152));
		int32_t L_69 = V_0;
		if ((((int32_t)L_69) <= ((int32_t)0)))
		{
			goto IL_01c9;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6153));
		RuntimeObject* L_70;
		L_70 = BaseSlider_2_get_thumbComparer_mFA5827386358B531C8C93665C223668056C19079_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6153));
		int32_t L_71 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6154));
		Il2CppFullySharedGenericStruct* L_72;
		L_72 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_values), L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6154));
		il2cpp_codegen_memcpy(L_73, L_72, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		int32_t L_74 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6155));
		Il2CppFullySharedGenericStruct* L_75;
		L_75 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_values), ((int32_t)il2cpp_codegen_subtract(L_74, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6155));
		il2cpp_codegen_memcpy(L_76, L_75, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6156));
		NullCheck(L_70);
		int32_t L_77;
		L_77 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_70, L_73, L_76);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6156));
		G_B26_0 = ((((int32_t)L_77) < ((int32_t)0))? 1 : 0);
		goto IL_01ca;
	}

IL_01c9:
	{
		G_B26_0 = 0;
	}

IL_01ca:
	{
		V_10 = (bool)G_B26_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6157));
		bool L_78 = V_10;
		if (L_78)
		{
			goto IL_014f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6158));
		goto IL_01d5;
	}

IL_01d5:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6159));
	}

IL_01d6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6160));
		int32_t L_79 = V_0;
		V_2 = L_79;
		goto IL_01da;
	}

IL_01da:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6161));
		int32_t L_80 = V_2;
		return L_80;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_OnTrackClicked_m708DE01A99C0EB8E8606E24855007C74CB4FE968_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6162));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 6163));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6164));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6165));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_GetClampedValue_mFC3DDC02D4F1007F866D4CF6A01A8539D25C3EC5_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericAny ___0_newValue, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_13 = L_9;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_7 = L_0;
	const Il2CppFullySharedGenericStruct L_10 = L_0;
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_8 = L_1;
	const Il2CppFullySharedGenericStruct L_11 = L_1;
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(V_0, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(V_1, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	memset(V_3, 0, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_newValue : &___0_newValue));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0, V_1);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6166));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 6167));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6168));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6169));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6170));
		BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline(__this, (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6170));
		il2cpp_codegen_memcpy(V_0, L_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6171));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6172));
		BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_inline(__this, (Il2CppFullySharedGenericStruct*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6172));
		il2cpp_codegen_memcpy(V_1, L_1, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6173));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6174));
		RuntimeObject* L_2;
		L_2 = BaseSlider_2_get_thumbComparer_mFA5827386358B531C8C93665C223668056C19079_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6174));
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(L_4, V_1, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6175));
		NullCheck(L_2);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_2, L_3, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6175));
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6176));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6177));
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(V_1, L_8, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(V_0, L_7, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	}

IL_0027:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6178));
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_newValue : &___0_newValue), SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6179));
		VirtualActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny* >::Invoke(226, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_9: *(void**)L_9), L_10, L_11, (Il2CppFullySharedGenericAny*)L_12);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6179));
		il2cpp_codegen_memcpy(V_3, L_12, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		goto IL_0033;
	}

IL_0033:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6180));
		il2cpp_codegen_memcpy(L_13, V_3, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_KeyDecrement_m9E44FD1281C7BA8C9E167864C26C66BA2E52A8F8_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct ___0_baseValue, Il2CppFullySharedGenericStruct ___1_stepValue, KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C* ___2_evt, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_3 = L_0;
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(V_0, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_baseValue : &___0_baseValue), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_stepValue : &___1_stepValue), (&___2_evt));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6181));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 6182));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6183));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6184));
		il2cpp_codegen_memcpy(L_0, ___1_stepValue, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(L_1, ___0_baseValue, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6185));
		VirtualActionInvoker4Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(237, __this, (-1), L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6185));
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		goto IL_000d;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6186));
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_KeyIncrement_mE96ED32B14073658042347B3E0DA1BAAD338CECA_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct ___0_baseValue, Il2CppFullySharedGenericStruct ___1_stepValue, KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C* ___2_evt, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_3 = L_0;
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	memset(V_0, 0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_baseValue : &___0_baseValue), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_stepValue : &___1_stepValue), (&___2_evt));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6187));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 6188));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6189));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6190));
		il2cpp_codegen_memcpy(L_0, ___1_stepValue, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(L_1, ___0_baseValue, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6191));
		VirtualActionInvoker4Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(237, __this, 1, L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6191));
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		goto IL_000d;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6192));
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_Clamp_mA700D062A38B8B55954A6C53995C859712E060CD_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericAny ___0_v, Il2CppFullySharedGenericStruct ___1_lowBound, Il2CppFullySharedGenericStruct ___2_highBound, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	const Il2CppFullySharedGenericAny L_24 = L_9;
	const Il2CppFullySharedGenericAny L_25 = L_9;
	const Il2CppFullySharedGenericStruct L_15 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	const Il2CppFullySharedGenericStruct L_18 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	bool V_4 = false;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	memset(V_5, 0, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_v : &___0_v), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_lowBound : &___1_lowBound), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___2_highBound : &___2_highBound));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6193));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 6194));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6195));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6196));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6197));
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(227, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6197));
		V_1 = L_0;
		int32_t L_1 = V_1;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4;
		if ((uintptr_t)L_2 * (uintptr_t)L_3 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_4 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_2, (int32_t)L_3));
		int8_t* L_5;
		if (L_4 == 0)
		{
			L_5 = NULL;
		}
		else
		{
			L_5 = (int8_t*)alloca(L_4);
			memset(L_5, 0, L_4);
		}
		int32_t L_6 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6198));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_7;
		memset((&L_7), 0, sizeof(L_7));
		Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline((&L_7), (void*)L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6198));
		V_2 = L_7;
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_8 = V_2;
		V_0 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6199));
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_v : &___0_v), SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6200));
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD >::Invoke(229, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_9: *(void**)L_9), L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6200));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6201));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6202));
		goto IL_0051;
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6203));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6204));
		int32_t L_11 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6205));
		Il2CppFullySharedGenericStruct* L_12;
		L_12 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&V_0), L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6205));
		int32_t L_13 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6206));
		Il2CppFullySharedGenericStruct* L_14;
		L_14 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&V_0), L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6206));
		il2cpp_codegen_memcpy(L_15, L_14, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(L_16, ___1_lowBound, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(L_17, ___2_highBound, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6207));
		VirtualActionInvoker4Invoker< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(230, __this, L_15, L_16, L_17, (Il2CppFullySharedGenericStruct*)L_18);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6207));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_12, L_18, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), (void**)(Il2CppFullySharedGenericStruct*)L_12, (void*)L_18);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6208));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6209));
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0051:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6210));
		int32_t L_20 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6211));
		int32_t L_21;
		L_21 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 84));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6211));
		V_4 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6212));
		bool L_22 = V_4;
		if (L_22)
		{
			goto IL_0029;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6213));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_23 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6214));
		VirtualActionInvoker2Invoker< Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny* >::Invoke(228, __this, L_23, (Il2CppFullySharedGenericAny*)L_24);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6214));
		il2cpp_codegen_memcpy(V_5, L_24, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		goto IL_006c;
	}

IL_006c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6215));
		il2cpp_codegen_memcpy(L_25, V_5, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_25, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseSlider_2_ParseValueToString_m19D4795F210CA1602437E317257851511D54A9F6_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericAny ___0_val, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	void* L_0 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)));
	String_t* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_val : &___0_val));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6216));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 6217));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6218));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6219));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6220));
		Il2CppConstrainedCallData L_1;
		Il2CppMethodPointer L_2 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20), il2cpp_rgctx_method(method->klass->rgctx_data, 89), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_val : &___0_val), &L_1, L_0);
		typedef String_t* ( *func_L_3)(void*,const RuntimeMethod*);
		String_t* L_4 = ((func_L_3)L_2)(L_1.thisPtr,L_1.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6220));
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6221));
		String_t* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseSlider_2_ParseRawValueToString_mA8EB1BFB5E44EFACE935E6AAD8E0A74D9BA5DB60_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericAny ___0_val, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	void* L_0 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)));
	String_t* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_val : &___0_val));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6222));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 6223));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6224));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6225));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6226));
		Il2CppConstrainedCallData L_1;
		Il2CppMethodPointer L_2 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20), il2cpp_rgctx_method(method->klass->rgctx_data, 89), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_val : &___0_val), &L_1, L_0);
		typedef String_t* ( *func_L_3)(void*,const RuntimeMethod*);
		String_t* L_4 = ((func_L_3)L_2)(L_1.thisPtr,L_1.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6226));
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6227));
		String_t* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseSlider_2_ParseSubValueToString_m3E168E55A9E4F6365F626BFE779F1ED04500FDEB_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct ___0_val, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	void* L_0 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)));
	String_t* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_val : &___0_val));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6228));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 6229));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6230));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6231));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6232));
		Il2CppConstrainedCallData L_1;
		Il2CppMethodPointer L_2 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), il2cpp_rgctx_method(method->klass->rgctx_data, 90), (void*)(Il2CppFullySharedGenericStruct*)___0_val, &L_1, L_0);
		typedef String_t* ( *func_L_3)(void*,const RuntimeMethod*);
		String_t* L_4 = ((func_L_3)L_2)(L_1.thisPtr,L_1.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6232));
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6233));
		String_t* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2__cctor_mEBBAD9E1E488A3198B46825FDC07F1DC78825E95_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F797B959E3585E4CF289A5B8642203432D803E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38A595244C9E49B61FDAA6772D8C7511AC709AD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral639164D7DB698099D80AD83589ECAEA1743F27EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80BB150F4BBC37BDB6764729B2775DEB4394A6B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3624EE238A5278BC2F6CF42F8D45EA11C9C3048);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADBC5E125A6A88FBAD59CAA1D79C533C8DB5910F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC64491AE82ED63CAB156E371CDA5644260D22419);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA3FCAE60DEBD49DAC9253E4D2F0597EC9486081);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB62B97E393533314D3C809D57CB62D3059C0EF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6B9F94DF733AF4C50B58E31E9919E508D793D8A);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6234));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 6235));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6236));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6237));
		il2cpp_codegen_runtime_class_init_inline(BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_il2cpp_TypeInfo_var);
		BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E L_0;
		L_0 = BindingId_op_Implicit_mF43027FCA60BD4AEC267D144641BC0E6E91686CC(_stringLiteral80BB150F4BBC37BDB6764729B2775DEB4394A6B2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6237));
		((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___lowValueProperty = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___lowValueProperty))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___lowValueProperty))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___lowValueProperty))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___lowValueProperty))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___lowValueProperty))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___lowValueProperty))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___lowValueProperty))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___lowValueProperty))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___lowValueProperty))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___lowValueProperty))->___m_Path), (void*)NULL);
		#endif
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6238));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6239));
		BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E L_1;
		L_1 = BindingId_op_Implicit_mF43027FCA60BD4AEC267D144641BC0E6E91686CC(_stringLiteralC64491AE82ED63CAB156E371CDA5644260D22419, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6239));
		((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___highValueProperty = L_1;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___highValueProperty))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___highValueProperty))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___highValueProperty))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___highValueProperty))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___highValueProperty))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___highValueProperty))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___highValueProperty))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___highValueProperty))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___highValueProperty))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___highValueProperty))->___m_Path), (void*)NULL);
		#endif
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6240));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6241));
		BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E L_2;
		L_2 = BindingId_op_Implicit_mF43027FCA60BD4AEC267D144641BC0E6E91686CC(_stringLiteral0F797B959E3585E4CF289A5B8642203432D803E0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6241));
		((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatStringProperty = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatStringProperty))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatStringProperty))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatStringProperty))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatStringProperty))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatStringProperty))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatStringProperty))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatStringProperty))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatStringProperty))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatStringProperty))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatStringProperty))->___m_Path), (void*)NULL);
		#endif
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6242));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6243));
		BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E L_3;
		L_3 = BindingId_op_Implicit_mF43027FCA60BD4AEC267D144641BC0E6E91686CC(_stringLiteralF6B9F94DF733AF4C50B58E31E9919E508D793D8A, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6243));
		((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatFunctionProperty = L_3;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatFunctionProperty))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatFunctionProperty))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatFunctionProperty))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatFunctionProperty))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatFunctionProperty))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatFunctionProperty))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatFunctionProperty))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatFunctionProperty))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatFunctionProperty))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___formatFunctionProperty))->___m_Path), (void*)NULL);
		#endif
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6244));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6245));
		BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E L_4;
		L_4 = BindingId_op_Implicit_mF43027FCA60BD4AEC267D144641BC0E6E91686CC(_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6245));
		((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___valueProperty = L_4;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___valueProperty))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___valueProperty))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___valueProperty))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___valueProperty))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___valueProperty))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___valueProperty))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___valueProperty))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___valueProperty))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___valueProperty))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___valueProperty))->___m_Path), (void*)NULL);
		#endif
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6246));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6247));
		BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E L_5;
		L_5 = BindingId_op_Implicit_mF43027FCA60BD4AEC267D144641BC0E6E91686CC(_stringLiteral639164D7DB698099D80AD83589ECAEA1743F27EC, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6247));
		((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___invalidProperty = L_5;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___invalidProperty))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___invalidProperty))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___invalidProperty))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___invalidProperty))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___invalidProperty))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___invalidProperty))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___invalidProperty))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___invalidProperty))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___invalidProperty))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___invalidProperty))->___m_Path), (void*)NULL);
		#endif
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6248));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6249));
		BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E L_6;
		L_6 = BindingId_op_Implicit_mF43027FCA60BD4AEC267D144641BC0E6E91686CC(_stringLiteral38A595244C9E49B61FDAA6772D8C7511AC709AD6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6249));
		((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___validateValueProperty = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___validateValueProperty))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___validateValueProperty))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___validateValueProperty))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___validateValueProperty))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___validateValueProperty))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___validateValueProperty))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___validateValueProperty))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___validateValueProperty))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___validateValueProperty))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___validateValueProperty))->___m_Path), (void*)NULL);
		#endif
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6250));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6251));
		BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E L_7;
		memset((&L_7), 0, sizeof(L_7));
		BindingId__ctor_m1193F0EA5249BA3CF38D7299139D6518F906851C((&L_7), _stringLiteralCB62B97E393533314D3C809D57CB62D3059C0EF3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6251));
		((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___orientationProperty = L_7;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___orientationProperty))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___orientationProperty))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___orientationProperty))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___orientationProperty))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___orientationProperty))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___orientationProperty))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___orientationProperty))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___orientationProperty))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___orientationProperty))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___orientationProperty))->___m_Path), (void*)NULL);
		#endif
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6252));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6253));
		BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E L_8;
		memset((&L_8), 0, sizeof(L_8));
		BindingId__ctor_m1193F0EA5249BA3CF38D7299139D6518F906851C((&L_8), _stringLiteralA3624EE238A5278BC2F6CF42F8D45EA11C9C3048, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6253));
		((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___stepProperty = L_8;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___stepProperty))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___stepProperty))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___stepProperty))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___stepProperty))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___stepProperty))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___stepProperty))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___stepProperty))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___stepProperty))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___stepProperty))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___stepProperty))->___m_Path), (void*)NULL);
		#endif
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6254));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6255));
		BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E L_9;
		memset((&L_9), 0, sizeof(L_9));
		BindingId__ctor_m1193F0EA5249BA3CF38D7299139D6518F906851C((&L_9), _stringLiteralCA3FCAE60DEBD49DAC9253E4D2F0597EC9486081, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6255));
		((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___shiftStepProperty = L_9;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___shiftStepProperty))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___shiftStepProperty))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___shiftStepProperty))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___shiftStepProperty))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___shiftStepProperty))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___shiftStepProperty))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___shiftStepProperty))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___shiftStepProperty))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___shiftStepProperty))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___shiftStepProperty))->___m_Path), (void*)NULL);
		#endif
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6256));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6257));
		BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E L_10;
		memset((&L_10), 0, sizeof(L_10));
		BindingId__ctor_m1193F0EA5249BA3CF38D7299139D6518F906851C((&L_10), _stringLiteralADBC5E125A6A88FBAD59CAA1D79C533C8DB5910F, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 6257));
		((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___swapThumbsProperty = L_10;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___swapThumbsProperty))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___swapThumbsProperty))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___swapThumbsProperty))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___swapThumbsProperty))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___swapThumbsProperty))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___swapThumbsProperty))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___swapThumbsProperty))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___swapThumbsProperty))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___swapThumbsProperty))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___swapThumbsProperty))->___m_Path), (void*)NULL);
		#endif
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseUxmlFactory_2__ctor_mB5581BC832B19FD662AEDC7C4C60B6AE780C10CD_gshared (BaseUxmlFactory_2_t4F742F612665CD7BBE9C245A5162C30582A2574B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUxmlFactory_2_tA6149D400DED4B92B92C2D82EB70A3059B85E910_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115335));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115336));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115337));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115338));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115338));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115339));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115340));
		Il2CppSharedGenericObject* L_0;
		L_0 = Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115340));
		__this->___m_Traits = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Traits), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115341));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseUxmlFactory_2_get_uxmlName_m83AB7E0FCCDF421628CDEB5FAE9C116AECC267DA_gshared (BaseUxmlFactory_2_t4F742F612665CD7BBE9C245A5162C30582A2574B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUxmlFactory_2_tA6149D400DED4B92B92C2D82EB70A3059B85E910_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115342));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115343));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115344));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 3)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115345));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115345));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115346));
		NullCheck((MemberInfo_t*)L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115346));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseUxmlFactory_2_get_uxmlNamespace_m1FDE37E0687BE53B7876AA8493A7F33DB0628BB6_gshared (BaseUxmlFactory_2_t4F742F612665CD7BBE9C245A5162C30582A2574B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUxmlFactory_2_tA6149D400DED4B92B92C2D82EB70A3059B85E910_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115347));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115348));
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115349));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 3)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115350));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115350));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115351));
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(24, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115351));
		String_t* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0018;
		}
		G_B1_0 = L_3;
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseUxmlFactory_2_get_uxmlQualifiedName_mBF2240F8EC2721E32D6504920BE596B2265383F2_gshared (BaseUxmlFactory_2_t4F742F612665CD7BBE9C245A5162C30582A2574B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUxmlFactory_2_tA6149D400DED4B92B92C2D82EB70A3059B85E910_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115352));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115353));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115354));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 3)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115355));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115355));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115356));
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(26, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115356));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* BaseUxmlFactory_2_get_uxmlType_m44772E7B10084CC3A265B077F3D1AB802F1B1FC6_gshared (BaseUxmlFactory_2_t4F742F612665CD7BBE9C245A5162C30582A2574B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUxmlFactory_2_tA6149D400DED4B92B92C2D82EB70A3059B85E910_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115357));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115358));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115359));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 3)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115360));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115360));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseUxmlFactory_2_get_canHaveAnyAttribute_m168D65B4473CA823410B8C87F643099DE5F2E520_gshared (BaseUxmlFactory_2_t4F742F612665CD7BBE9C245A5162C30582A2574B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUxmlFactory_2_tA6149D400DED4B92B92C2D82EB70A3059B85E910_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115361));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115362));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115363));
		Il2CppSharedGenericObject* L_0 = __this->___m_Traits;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115364));
		NullCheck((BaseUxmlTraits_t2A13D24373542A6401FE350C5119DE0FCE86E21E*)L_0);
		bool L_1;
		L_1 = BaseUxmlTraits_get_canHaveAnyAttribute_m34EF41172370836E58DE8512FAAA340E1A9E302F_inline((BaseUxmlTraits_t2A13D24373542A6401FE350C5119DE0FCE86E21E*)L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115364));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseUxmlFactory_2_get_uxmlAttributesDescription_mE41C0E810BCCE0215C0C3C22A2C459CAA7E27743_gshared (BaseUxmlFactory_2_t4F742F612665CD7BBE9C245A5162C30582A2574B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUxmlFactory_2_tA6149D400DED4B92B92C2D82EB70A3059B85E910_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115365));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115366));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115367));
		Il2CppSharedGenericObject* L_0 = __this->___m_Traits;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115368));
		NullCheck((BaseUxmlTraits_t2A13D24373542A6401FE350C5119DE0FCE86E21E*)L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, (BaseUxmlTraits_t2A13D24373542A6401FE350C5119DE0FCE86E21E*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115368));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseUxmlFactory_2_get_uxmlChildElementsDescription_m1AB5DE3DF7A1CB1B632609A90BF66C5A032BD99B_gshared (BaseUxmlFactory_2_t4F742F612665CD7BBE9C245A5162C30582A2574B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUxmlFactory_2_tA6149D400DED4B92B92C2D82EB70A3059B85E910_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115369));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115370));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115371));
		Il2CppSharedGenericObject* L_0 = __this->___m_Traits;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115372));
		NullCheck((BaseUxmlTraits_t2A13D24373542A6401FE350C5119DE0FCE86E21E*)L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5, (BaseUxmlTraits_t2A13D24373542A6401FE350C5119DE0FCE86E21E*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115372));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseUxmlFactory_2_get_substituteForTypeName_m44AD2897C993357A613DAF77A79CA4187B547E09_gshared (BaseUxmlFactory_2_t4F742F612665CD7BBE9C245A5162C30582A2574B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUxmlFactory_2_tA6149D400DED4B92B92C2D82EB70A3059B85E910_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115373));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115374));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115375));
		bool L_0 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115379));
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		return L_1;
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115380));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115381));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115381));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115382));
		NullCheck((MemberInfo_t*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115382));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseUxmlFactory_2_get_substituteForTypeNamespace_m4EA9BEEA7DC44FD02DD34535D0BCFEEC23E76B12_gshared (BaseUxmlFactory_2_t4F742F612665CD7BBE9C245A5162C30582A2574B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUxmlFactory_2_tA6149D400DED4B92B92C2D82EB70A3059B85E910_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115383));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115384));
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115385));
		bool L_0 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115389));
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		return L_1;
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115390));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115391));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115391));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115392));
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(24, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115392));
		String_t* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_0039;
		}
		G_B3_0 = L_5;
	}
	{
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		G_B4_0 = L_6;
	}

IL_0039:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseUxmlFactory_2_get_substituteForTypeQualifiedName_m4E39555EF0DAB4DA7E4974801BA6C6495ACB2C93_gshared (BaseUxmlFactory_2_t4F742F612665CD7BBE9C245A5162C30582A2574B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUxmlFactory_2_tA6149D400DED4B92B92C2D82EB70A3059B85E910_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115393));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115394));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115395));
		bool L_0 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115399));
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		return L_1;
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115400));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115401));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115401));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115402));
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(26, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115402));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseUxmlFactory_2_AcceptsAttributeBag_m02181C6B24D2EBFB289D1E67F07684749ECCB961_gshared (BaseUxmlFactory_2_t4F742F612665CD7BBE9C245A5162C30582A2574B* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUxmlFactory_2_tA6149D400DED4B92B92C2D82EB70A3059B85E910_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_bag), (&___1_cc));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115403));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115404));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115405));
		return (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicNodePool_1_Reset_m0F9E01EFAE8C4C866C55762836A1F965F73252CD_gshared (BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF* ___0_node, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t641B8D1AB2D64FE602B65EB8F1C2A58892ED3D6E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_node));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125947));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125948));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125949));
		BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF* L_0 = ___0_node;
		NullCheck(L_0);
		il2cpp_codegen_write_instance_field_data<BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF*>(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), (BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125950));
		BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF* L_1 = ___0_node;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), SizeOf_T_t641B8D1AB2D64FE602B65EB8F1C2A58892ED3D6E);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125951));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF* BasicNodePool_1_Create_m94C97592B0D090E5D5C6829EDD25295A88BC7091_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125952));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125953));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125954));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125955));
		BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF* L_0 = (BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		BasicNode_1__ctor_m5F6BD5BB6499D84BA6B02A525E787403F72CFA78(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125955));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicNodePool_1__ctor_mC6F418FE137A6E73CCAD00809D16FDC9D4AE72F9_gshared (BasicNodePool_1_t07D164A3469FD884E0698CF0E4F2A5E56853BD7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicNodePool_1_tBC6017F889D74A9D56AE55268C66F4601F303569_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125956));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125957));
	Func_1_tC3BAF7B1A0EE680F2FE474FE6314A25CA0ACF303* G_B2_0 = NULL;
	BasicNodePool_1_t07D164A3469FD884E0698CF0E4F2A5E56853BD7C* G_B2_1 = NULL;
	Func_1_tC3BAF7B1A0EE680F2FE474FE6314A25CA0ACF303* G_B1_0 = NULL;
	BasicNodePool_1_t07D164A3469FD884E0698CF0E4F2A5E56853BD7C* G_B1_1 = NULL;
	Action_1_t393B4FBBC9A299946D7CE704F32E4695BCD996A8* G_B4_0 = NULL;
	Func_1_tC3BAF7B1A0EE680F2FE474FE6314A25CA0ACF303* G_B4_1 = NULL;
	BasicNodePool_1_t07D164A3469FD884E0698CF0E4F2A5E56853BD7C* G_B4_2 = NULL;
	Action_1_t393B4FBBC9A299946D7CE704F32E4695BCD996A8* G_B3_0 = NULL;
	Func_1_tC3BAF7B1A0EE680F2FE474FE6314A25CA0ACF303* G_B3_1 = NULL;
	BasicNodePool_1_t07D164A3469FD884E0698CF0E4F2A5E56853BD7C* G_B3_2 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125958));
		Func_1_tC3BAF7B1A0EE680F2FE474FE6314A25CA0ACF303* L_0 = ((U3CU3EO_tCD3C7A92AA128658B5FCC06D79A541B2E82D6969_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)))->___U3C0U3E__Create;
		Func_1_tC3BAF7B1A0EE680F2FE474FE6314A25CA0ACF303* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_001c;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125959));
		Func_1_tC3BAF7B1A0EE680F2FE474FE6314A25CA0ACF303* L_2 = (Func_1_tC3BAF7B1A0EE680F2FE474FE6314A25CA0ACF303*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		Func_1__ctor_m2DCD99B6BCAB07ED2D4B1820AC33296E472F875A(L_2, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125959));
		Func_1_tC3BAF7B1A0EE680F2FE474FE6314A25CA0ACF303* L_3 = L_2;
		((U3CU3EO_tCD3C7A92AA128658B5FCC06D79A541B2E82D6969_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)))->___U3C0U3E__Create = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tCD3C7A92AA128658B5FCC06D79A541B2E82D6969_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)))->___U3C0U3E__Create), (void*)L_3);
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
	}

IL_001c:
	{
		Action_1_t393B4FBBC9A299946D7CE704F32E4695BCD996A8* L_4 = ((U3CU3EO_tCD3C7A92AA128658B5FCC06D79A541B2E82D6969_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)))->___U3C1U3E__Reset;
		Action_1_t393B4FBBC9A299946D7CE704F32E4695BCD996A8* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = G_B2_0;
			G_B4_2 = G_B2_1;
			goto IL_0037;
		}
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125960));
		Action_1_t393B4FBBC9A299946D7CE704F32E4695BCD996A8* L_6 = (Action_1_t393B4FBBC9A299946D7CE704F32E4695BCD996A8*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
		Action_1__ctor_m1B3261AD6B265DF149E27AB11D0C0B00B3455A92(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125960));
		Action_1_t393B4FBBC9A299946D7CE704F32E4695BCD996A8* L_7 = L_6;
		((U3CU3EO_tCD3C7A92AA128658B5FCC06D79A541B2E82D6969_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)))->___U3C1U3E__Reset = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tCD3C7A92AA128658B5FCC06D79A541B2E82D6969_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)))->___U3C1U3E__Reset), (void*)L_7);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0037:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125961));
		LinkedPool_1__ctor_mF6783A365E7DF1981A187B21043FCF3406B20478((LinkedPool_1_t229CF46A2209FA5E8F02408D0A502FA03535DC4F*)G_B4_2, G_B4_1, G_B4_0, ((int32_t)10000), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125961));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125962));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicNode_1_InsertFirst_mB2B8A86E4956DBC2160A5D364AE2FB2AA86729EF_gshared (BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF* __this, BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF** ___0_first, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicNode_1_tA4E8AB631F23112FD2FCD177F26C0722DC9DD89E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_first));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125939));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125940));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125941));
		BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF** L_0 = ___0_first;
		BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF* L_1 = il2cpp_codegen_ldind<BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF*, BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF*>(L_0);
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125942));
		BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF** L_2 = ___0_first;
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_2, (RuntimeObject*)__this);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)__this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125943));
		return;
	}

IL_0008:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125944));
		BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF** L_3 = ___0_first;
		BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF* L_4 = il2cpp_codegen_ldind<BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF*, BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF*>(L_3);
		BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF* L_5 = *(BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF**)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		il2cpp_codegen_write_instance_field_data<BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0), L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125945));
		BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF** L_6 = ___0_first;
		BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF* L_7 = il2cpp_codegen_ldind<BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF*, BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF*>(L_6);
		NullCheck(L_7);
		il2cpp_codegen_write_instance_field_data<BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF*>(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0), __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 125946));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicNode_1__ctor_m5F6BD5BB6499D84BA6B02A525E787403F72CFA78_gshared (BasicNode_1_t406697C6300D88260337D6ADBCAEAE1DF9F756AF* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		LinkedPoolItem_1__ctor_m1B6AE5051EF5340BD225C4F07C3A84F10D9F819D((LinkedPoolItem_1_tF4B4874E569A0B91848A46D0AE7BFE55B1789C68*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BatchQueryJobStruct_1_Initialize_mC1463CBF7472A124AAA0EAC3D6F9C9E661C8F525_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 451));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 452));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 453));
		intptr_t L_0 = ((BatchQueryJobStruct_1_t3CDBE6D364251EE63B3BFBAE209F1321F38147E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___jobReflectionData;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 454));
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 454));
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 455));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 456));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 456));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 457));
		intptr_t L_4;
		L_4 = JobsUtility_CreateJobReflectionData_m17265DED7C2DBB0B2130896E2B8AC4CF5BD7FCE7(L_3, NULL, NULL, NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 457));
		((BatchQueryJobStruct_1_t3CDBE6D364251EE63B3BFBAE209F1321F38147E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___jobReflectionData = L_4;
	}

IL_0028:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 458));
		intptr_t L_5 = ((BatchQueryJobStruct_1_t3CDBE6D364251EE63B3BFBAE209F1321F38147E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___jobReflectionData;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchQueryJob_2__ctor_m52B5B1BDEE537675680BDEFA6BF9D38FC31DA09B_gshared (BatchQueryJob_2_t7D5A93A4AD033A8A940C89F3761A0DD654E6B912* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_commands, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_results, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchQueryJob_2_t48C70E8BE712025D26E023D0FCFA7633CEA29B3D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_commands), (&___1_results));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 446));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 447));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 448));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_commands;
		__this->___commands = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 449));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = ___1_results;
		__this->___results = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 450));
		return;
	}
}
IL2CPP_EXTERN_C  void BatchQueryJob_2__ctor_m52B5B1BDEE537675680BDEFA6BF9D38FC31DA09B_AdjustorThunk (RuntimeObject* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_commands, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_results, const RuntimeMethod* method)
{
	BatchQueryJob_2_t7D5A93A4AD033A8A940C89F3761A0DD654E6B912* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BatchQueryJob_2_t7D5A93A4AD033A8A940C89F3761A0DD654E6B912>(__this);
	BatchQueryJob_2__ctor_m52B5B1BDEE537675680BDEFA6BF9D38FC31DA09B(_thisAdjusted, ___0_commands, ___1_results, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidirectionalDictionary_2__ctor_mA9B4A9F341FF639E885A3CCAD54DA2F2CC46239E_gshared (BidirectionalDictionary_2_t3414A66FDA7CB6E1F164010642A3CB92AC50FFC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidirectionalDictionary_2_t75A123AAE37326C391563C03896F7A2E8E17787A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13362));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13363));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13364));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13365));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13365));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13366));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13366));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13367));
		BidirectionalDictionary_2__ctor_m3DEDCB25ADA7434626E019394CCA18604C9666E0(__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13367));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13368));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidirectionalDictionary_2__ctor_m3DEDCB25ADA7434626E019394CCA18604C9666E0_gshared (BidirectionalDictionary_2_t3414A66FDA7CB6E1F164010642A3CB92AC50FFC9* __this, RuntimeObject* ___0_firstEqualityComparer, RuntimeObject* ___1_secondEqualityComparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidirectionalDictionary_2_t75A123AAE37326C391563C03896F7A2E8E17787A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFC5AA3E4E8A7D479AE635797BE5C940534C37F6);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_firstEqualityComparer), (&___1_secondEqualityComparer));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13369));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13370));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13371));
		RuntimeObject* L_0 = ___0_firstEqualityComparer;
		RuntimeObject* L_1 = ___1_secondEqualityComparer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13372));
		BidirectionalDictionary_2__ctor_m62510A3C100B871B916158FFAD89A803EA1672B6(__this, L_0, L_1, _stringLiteralFFC5AA3E4E8A7D479AE635797BE5C940534C37F6, _stringLiteralFFC5AA3E4E8A7D479AE635797BE5C940534C37F6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13372));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13373));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidirectionalDictionary_2__ctor_m62510A3C100B871B916158FFAD89A803EA1672B6_gshared (BidirectionalDictionary_2_t3414A66FDA7CB6E1F164010642A3CB92AC50FFC9* __this, RuntimeObject* ___0_firstEqualityComparer, RuntimeObject* ___1_secondEqualityComparer, String_t* ___2_duplicateFirstErrorMessage, String_t* ___3_duplicateSecondErrorMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidirectionalDictionary_2_t75A123AAE37326C391563C03896F7A2E8E17787A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_firstEqualityComparer), (&___1_secondEqualityComparer), (&___2_duplicateFirstErrorMessage), (&___3_duplicateSecondErrorMessage));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13374));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13375));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13376));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13377));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13377));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13378));
		RuntimeObject* L_0 = ___0_firstEqualityComparer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13379));
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
		Dictionary_2__ctor_m244D396B16E7F73DE815F4FFA6F35DD89B6ED7CB(L_1, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13379));
		__this->____firstToSecond = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____firstToSecond), (void*)(RuntimeObject*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13380));
		RuntimeObject* L_2 = ___1_secondEqualityComparer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13381));
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_3 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		Dictionary_2__ctor_m244D396B16E7F73DE815F4FFA6F35DD89B6ED7CB(L_3, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13381));
		__this->____secondToFirst = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____secondToFirst), (void*)(RuntimeObject*)L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13382));
		String_t* L_4 = ___2_duplicateFirstErrorMessage;
		__this->____duplicateFirstErrorMessage = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____duplicateFirstErrorMessage), (void*)L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13383));
		String_t* L_5 = ___3_duplicateSecondErrorMessage;
		__this->____duplicateSecondErrorMessage = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____duplicateSecondErrorMessage), (void*)L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13384));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidirectionalDictionary_2_Set_m1FFE1C842DB033B9D60AF7F61C881D38E9C776C5_gshared (BidirectionalDictionary_2_t3414A66FDA7CB6E1F164010642A3CB92AC50FFC9* __this, Il2CppFullySharedGenericAny ___0_first, Il2CppFullySharedGenericAny ___1_second, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidirectionalDictionary_2_t75A123AAE37326C391563C03896F7A2E8E17787A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSecond_t2220931A411DB9B732F9FC1AC3C7972048AC4553 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const uint32_t SizeOf_TFirst_t3EBC8F9FAA67A448006D4FD551BCA19C770B2E18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)));
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17)));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TFirst_t3EBC8F9FAA67A448006D4FD551BCA19C770B2E18);
	const Il2CppFullySharedGenericAny L_12 = L_1;
	const Il2CppFullySharedGenericAny L_19 = L_1;
	const Il2CppFullySharedGenericAny L_33 = L_1;
	const Il2CppFullySharedGenericAny L_37 = alloca(SizeOf_TFirst_t3EBC8F9FAA67A448006D4FD551BCA19C770B2E18);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TSecond_t2220931A411DB9B732F9FC1AC3C7972048AC4553);
	const Il2CppFullySharedGenericAny L_17 = L_3;
	const Il2CppFullySharedGenericAny L_28 = L_3;
	const Il2CppFullySharedGenericAny L_34 = L_3;
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_TSecond_t2220931A411DB9B732F9FC1AC3C7972048AC4553);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TSecond_t2220931A411DB9B732F9FC1AC3C7972048AC4553);
	memset(V_0, 0, SizeOf_TSecond_t2220931A411DB9B732F9FC1AC3C7972048AC4553);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TFirst_t3EBC8F9FAA67A448006D4FD551BCA19C770B2E18);
	memset(V_1, 0, SizeOf_TFirst_t3EBC8F9FAA67A448006D4FD551BCA19C770B2E18);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17)) ? ___0_first : &___0_first), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___1_second : &___1_second));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0, V_1);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13385));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13386));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13387));
		RuntimeObject* L_0 = __this->____firstToSecond;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17)) ? ___0_first : &___0_first), SizeOf_TFirst_t3EBC8F9FAA67A448006D4FD551BCA19C770B2E18);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13388));
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(7, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17)) ? L_1: *(void**)L_1), (Il2CppFullySharedGenericAny*)V_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13388));
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13389));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___1_second : &___1_second), SizeOf_TSecond_t2220931A411DB9B732F9FC1AC3C7972048AC4553);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20), L_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13390));
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20), il2cpp_rgctx_method(method->klass->rgctx_data, 21), (void*)(Il2CppFullySharedGenericAny*)V_0, &L_6, L_5);
		typedef bool ( *func_L_8)(void*,RuntimeObject*,const RuntimeMethod*);
		bool L_9 = ((func_L_8)L_7)(L_6.thisPtr, L_4,L_6.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13390));
		if (L_9)
		{
			goto IL_0041;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13391));
		String_t* L_10 = __this->____duplicateFirstErrorMessage;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13392));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_11;
		L_11 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13392));
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17)) ? ___0_first : &___0_first), SizeOf_TFirst_t3EBC8F9FAA67A448006D4FD551BCA19C770B2E18);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), L_12);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13393));
		String_t* L_14;
		L_14 = StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5(L_10, (RuntimeObject*)L_11, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13393));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13394));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13394));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0041:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13395));
		RuntimeObject* L_16 = __this->____secondToFirst;
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___1_second : &___1_second), SizeOf_TSecond_t2220931A411DB9B732F9FC1AC3C7972048AC4553);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13396));
		NullCheck(L_16);
		bool L_18;
		L_18 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(7, il2cpp_rgctx_data(method->klass->rgctx_data, 16), L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_17: *(void**)L_17), (Il2CppFullySharedGenericAny*)V_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13396));
		if (!L_18)
		{
			goto IL_0082;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13397));
		il2cpp_codegen_memcpy(L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17)) ? ___0_first : &___0_first), SizeOf_TFirst_t3EBC8F9FAA67A448006D4FD551BCA19C770B2E18);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), L_19);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13398));
		Il2CppConstrainedCallData L_22;
		Il2CppMethodPointer L_23 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), il2cpp_rgctx_method(method->klass->rgctx_data, 24), (void*)(Il2CppFullySharedGenericAny*)V_1, &L_22, L_21);
		typedef bool ( *func_L_24)(void*,RuntimeObject*,const RuntimeMethod*);
		bool L_25 = ((func_L_24)L_23)(L_22.thisPtr, L_20,L_22.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13398));
		if (L_25)
		{
			goto IL_0082;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13399));
		String_t* L_26 = __this->____duplicateSecondErrorMessage;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13400));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_27;
		L_27 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13400));
		il2cpp_codegen_memcpy(L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___1_second : &___1_second), SizeOf_TSecond_t2220931A411DB9B732F9FC1AC3C7972048AC4553);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20), L_28);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13401));
		String_t* L_30;
		L_30 = StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5(L_26, (RuntimeObject*)L_27, L_29, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13401));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13402));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_31 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_31, L_30, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13402));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, method);
	}

IL_0082:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13403));
		RuntimeObject* L_32 = __this->____firstToSecond;
		il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17)) ? ___0_first : &___0_first), SizeOf_TFirst_t3EBC8F9FAA67A448006D4FD551BCA19C770B2E18);
		il2cpp_codegen_memcpy(L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___1_second : &___1_second), SizeOf_TSecond_t2220931A411DB9B732F9FC1AC3C7972048AC4553);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13404));
		NullCheck(L_32);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_32, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17)) ? L_33: *(void**)L_33), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_34: *(void**)L_34));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13404));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13405));
		RuntimeObject* L_35 = __this->____secondToFirst;
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___1_second : &___1_second), SizeOf_TSecond_t2220931A411DB9B732F9FC1AC3C7972048AC4553);
		il2cpp_codegen_memcpy(L_37, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17)) ? ___0_first : &___0_first), SizeOf_TFirst_t3EBC8F9FAA67A448006D4FD551BCA19C770B2E18);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13406));
		NullCheck(L_35);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 16), L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_36: *(void**)L_36), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17)) ? L_37: *(void**)L_37));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13406));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13407));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidirectionalDictionary_2_TryGetByFirst_mFDB314C59CCE3ECE08299675983EA32A2A9FE23E_gshared (BidirectionalDictionary_2_t3414A66FDA7CB6E1F164010642A3CB92AC50FFC9* __this, Il2CppFullySharedGenericAny ___0_first, Il2CppFullySharedGenericAny* ___1_second, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidirectionalDictionary_2_t75A123AAE37326C391563C03896F7A2E8E17787A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TFirst_t3EBC8F9FAA67A448006D4FD551BCA19C770B2E18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TFirst_t3EBC8F9FAA67A448006D4FD551BCA19C770B2E18);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17)) ? ___0_first : &___0_first), (&___1_second));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13408));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13409));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13410));
		RuntimeObject* L_0 = __this->____firstToSecond;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17)) ? ___0_first : &___0_first), SizeOf_TFirst_t3EBC8F9FAA67A448006D4FD551BCA19C770B2E18);
		Il2CppFullySharedGenericAny* L_2 = ___1_second;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13411));
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(7, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17)) ? L_1: *(void**)L_1), L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13411));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidirectionalDictionary_2_TryGetBySecond_m4E950599C91910ED5DD0D3B9494A6F9DF67C1CCD_gshared (BidirectionalDictionary_2_t3414A66FDA7CB6E1F164010642A3CB92AC50FFC9* __this, Il2CppFullySharedGenericAny ___0_second, Il2CppFullySharedGenericAny* ___1_first, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidirectionalDictionary_2_t75A123AAE37326C391563C03896F7A2E8E17787A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSecond_t2220931A411DB9B732F9FC1AC3C7972048AC4553 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSecond_t2220931A411DB9B732F9FC1AC3C7972048AC4553);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_second : &___0_second), (&___1_first));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13412));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13413));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13414));
		RuntimeObject* L_0 = __this->____secondToFirst;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_second : &___0_second), SizeOf_TSecond_t2220931A411DB9B732F9FC1AC3C7972048AC4553);
		Il2CppFullySharedGenericAny* L_2 = ___1_first;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13415));
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(7, il2cpp_rgctx_data(method->klass->rgctx_data, 16), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_1: *(void**)L_1), L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsNewtonsoft_Json + 13415));
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
void BindItemFunc_Invoke_m3A1A2FC9CC0DEDC9B951722535AEC2F47CF7E140_Multicast(BindItemFunc_tF35544BC5322097FC2F45938ACB01EAD7341D531* __this, Il2CppSharedGenericObject* ___0_item, int32_t ___1_index, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BindItemFunc_tF35544BC5322097FC2F45938ACB01EAD7341D531* currentDelegate = reinterpret_cast<BindItemFunc_tF35544BC5322097FC2F45938ACB01EAD7341D531*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_item, ___1_index, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void BindItemFunc_Invoke_m3A1A2FC9CC0DEDC9B951722535AEC2F47CF7E140_OpenInst(BindItemFunc_tF35544BC5322097FC2F45938ACB01EAD7341D531* __this, Il2CppSharedGenericObject* ___0_item, int32_t ___1_index, const RuntimeMethod* method)
{
	NullCheck(___0_item);
	typedef void (*FunctionPointerType) (Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_item, ___1_index, method);
}
void BindItemFunc_Invoke_m3A1A2FC9CC0DEDC9B951722535AEC2F47CF7E140_OpenStatic(BindItemFunc_tF35544BC5322097FC2F45938ACB01EAD7341D531* __this, Il2CppSharedGenericObject* ___0_item, int32_t ___1_index, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_item, ___1_index, method);
}
void BindItemFunc_Invoke_m3A1A2FC9CC0DEDC9B951722535AEC2F47CF7E140_OpenVirtual(BindItemFunc_tF35544BC5322097FC2F45938ACB01EAD7341D531* __this, Il2CppSharedGenericObject* ___0_item, int32_t ___1_index, const RuntimeMethod* method)
{
	NullCheck(___0_item);
	VirtualActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_item, ___1_index);
}
void BindItemFunc_Invoke_m3A1A2FC9CC0DEDC9B951722535AEC2F47CF7E140_OpenInterface(BindItemFunc_tF35544BC5322097FC2F45938ACB01EAD7341D531* __this, Il2CppSharedGenericObject* ___0_item, int32_t ___1_index, const RuntimeMethod* method)
{
	NullCheck(___0_item);
	InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_item, ___1_index);
}
void BindItemFunc_Invoke_m3A1A2FC9CC0DEDC9B951722535AEC2F47CF7E140_OpenGenericVirtual(BindItemFunc_tF35544BC5322097FC2F45938ACB01EAD7341D531* __this, Il2CppSharedGenericObject* ___0_item, int32_t ___1_index, const RuntimeMethod* method)
{
	NullCheck(___0_item);
	GenericVirtualActionInvoker1< int32_t >::Invoke(method, ___0_item, ___1_index);
}
void BindItemFunc_Invoke_m3A1A2FC9CC0DEDC9B951722535AEC2F47CF7E140_OpenGenericInterface(BindItemFunc_tF35544BC5322097FC2F45938ACB01EAD7341D531* __this, Il2CppSharedGenericObject* ___0_item, int32_t ___1_index, const RuntimeMethod* method)
{
	NullCheck(___0_item);
	GenericInterfaceActionInvoker1< int32_t >::Invoke(method, ___0_item, ___1_index);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindItemFunc__ctor_m88945AA54EDFBC0D037050272F18653D9727776F_gshared (BindItemFunc_tF35544BC5322097FC2F45938ACB01EAD7341D531* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
			__this->___invoke_impl = (intptr_t)&BindItemFunc_Invoke_m3A1A2FC9CC0DEDC9B951722535AEC2F47CF7E140_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
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
						__this->___invoke_impl = (intptr_t)&BindItemFunc_Invoke_m3A1A2FC9CC0DEDC9B951722535AEC2F47CF7E140_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&BindItemFunc_Invoke_m3A1A2FC9CC0DEDC9B951722535AEC2F47CF7E140_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&BindItemFunc_Invoke_m3A1A2FC9CC0DEDC9B951722535AEC2F47CF7E140_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&BindItemFunc_Invoke_m3A1A2FC9CC0DEDC9B951722535AEC2F47CF7E140_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&BindItemFunc_Invoke_m3A1A2FC9CC0DEDC9B951722535AEC2F47CF7E140_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&BindItemFunc_Invoke_m3A1A2FC9CC0DEDC9B951722535AEC2F47CF7E140_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindItemFunc_Invoke_m3A1A2FC9CC0DEDC9B951722535AEC2F47CF7E140_gshared (BindItemFunc_tF35544BC5322097FC2F45938ACB01EAD7341D531* __this, Il2CppSharedGenericObject* ___0_item, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_item, ___1_index, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BindItemFunc_BeginInvoke_mE48FCE0475661C7C5B9D84053EF25ED34808B6CA_gshared (BindItemFunc_tF35544BC5322097FC2F45938ACB01EAD7341D531* __this, Il2CppSharedGenericObject* ___0_item, int32_t ___1_index, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_item;
	__d_args[1] = Box(il2cpp_defaults.int32_class, &___1_index);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindItemFunc_EndInvoke_m2B015D01FBC0989D8B49A34FF0ABE306A26E2471_gshared (BindItemFunc_tF35544BC5322097FC2F45938ACB01EAD7341D531* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void BindTitleFunc_Invoke_m703133FC01774E7C72A71A33CF84724D8BBBA679_Multicast(BindTitleFunc_tE6495C43FD418B3193CAADC0A24C39FBDEDA7953* __this, Il2CppSharedGenericObject* ___0_item, RuntimeObject* ___1_selectedIndices, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BindTitleFunc_tE6495C43FD418B3193CAADC0A24C39FBDEDA7953* currentDelegate = reinterpret_cast<BindTitleFunc_tE6495C43FD418B3193CAADC0A24C39FBDEDA7953*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_item, ___1_selectedIndices, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void BindTitleFunc_Invoke_m703133FC01774E7C72A71A33CF84724D8BBBA679_OpenInst(BindTitleFunc_tE6495C43FD418B3193CAADC0A24C39FBDEDA7953* __this, Il2CppSharedGenericObject* ___0_item, RuntimeObject* ___1_selectedIndices, const RuntimeMethod* method)
{
	NullCheck(___0_item);
	typedef void (*FunctionPointerType) (Il2CppSharedGenericObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_item, ___1_selectedIndices, method);
}
void BindTitleFunc_Invoke_m703133FC01774E7C72A71A33CF84724D8BBBA679_OpenStatic(BindTitleFunc_tE6495C43FD418B3193CAADC0A24C39FBDEDA7953* __this, Il2CppSharedGenericObject* ___0_item, RuntimeObject* ___1_selectedIndices, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Il2CppSharedGenericObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_item, ___1_selectedIndices, method);
}
void BindTitleFunc_Invoke_m703133FC01774E7C72A71A33CF84724D8BBBA679_OpenVirtual(BindTitleFunc_tE6495C43FD418B3193CAADC0A24C39FBDEDA7953* __this, Il2CppSharedGenericObject* ___0_item, RuntimeObject* ___1_selectedIndices, const RuntimeMethod* method)
{
	NullCheck(___0_item);
	VirtualActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_item, ___1_selectedIndices);
}
void BindTitleFunc_Invoke_m703133FC01774E7C72A71A33CF84724D8BBBA679_OpenInterface(BindTitleFunc_tE6495C43FD418B3193CAADC0A24C39FBDEDA7953* __this, Il2CppSharedGenericObject* ___0_item, RuntimeObject* ___1_selectedIndices, const RuntimeMethod* method)
{
	NullCheck(___0_item);
	InterfaceActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_item, ___1_selectedIndices);
}
void BindTitleFunc_Invoke_m703133FC01774E7C72A71A33CF84724D8BBBA679_OpenGenericVirtual(BindTitleFunc_tE6495C43FD418B3193CAADC0A24C39FBDEDA7953* __this, Il2CppSharedGenericObject* ___0_item, RuntimeObject* ___1_selectedIndices, const RuntimeMethod* method)
{
	NullCheck(___0_item);
	GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(method, ___0_item, ___1_selectedIndices);
}
void BindTitleFunc_Invoke_m703133FC01774E7C72A71A33CF84724D8BBBA679_OpenGenericInterface(BindTitleFunc_tE6495C43FD418B3193CAADC0A24C39FBDEDA7953* __this, Il2CppSharedGenericObject* ___0_item, RuntimeObject* ___1_selectedIndices, const RuntimeMethod* method)
{
	NullCheck(___0_item);
	GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(method, ___0_item, ___1_selectedIndices);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindTitleFunc__ctor_m29332248486D75C63D9F9B15960C02FE1A86CB68_gshared (BindTitleFunc_tE6495C43FD418B3193CAADC0A24C39FBDEDA7953* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
			__this->___invoke_impl = (intptr_t)&BindTitleFunc_Invoke_m703133FC01774E7C72A71A33CF84724D8BBBA679_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
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
						__this->___invoke_impl = (intptr_t)&BindTitleFunc_Invoke_m703133FC01774E7C72A71A33CF84724D8BBBA679_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&BindTitleFunc_Invoke_m703133FC01774E7C72A71A33CF84724D8BBBA679_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&BindTitleFunc_Invoke_m703133FC01774E7C72A71A33CF84724D8BBBA679_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&BindTitleFunc_Invoke_m703133FC01774E7C72A71A33CF84724D8BBBA679_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&BindTitleFunc_Invoke_m703133FC01774E7C72A71A33CF84724D8BBBA679_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&BindTitleFunc_Invoke_m703133FC01774E7C72A71A33CF84724D8BBBA679_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindTitleFunc_Invoke_m703133FC01774E7C72A71A33CF84724D8BBBA679_gshared (BindTitleFunc_tE6495C43FD418B3193CAADC0A24C39FBDEDA7953* __this, Il2CppSharedGenericObject* ___0_item, RuntimeObject* ___1_selectedIndices, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_item, ___1_selectedIndices, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BindTitleFunc_BeginInvoke_mC30418F91DD68E1D686A8880895D3FA7E6499F02_gshared (BindTitleFunc_tE6495C43FD418B3193CAADC0A24C39FBDEDA7953* __this, Il2CppSharedGenericObject* ___0_item, RuntimeObject* ___1_selectedIndices, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_item;
	__d_args[1] = ___1_selectedIndices;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindTitleFunc_EndInvoke_mCA407E16BC858EFE47F93B8C61F80825C91CD00E_gshared (BindTitleFunc_tE6495C43FD418B3193CAADC0A24C39FBDEDA7953* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D BindingsMarshaller_ConvertToUnmanaged_mCAD609A187002D26C92D27DA999CECD737D913D0_gshared (OutArray2D_1_t85E0053A31509EEDF78A2BADF3B945CF1F06EFB6* ___0_marshalled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_marshalled));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40633));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40634));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40635));
		il2cpp_codegen_initobj((&V_0), sizeof(OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D));
		OutArray2D_1_t85E0053A31509EEDF78A2BADF3B945CF1F06EFB6* L_0 = ___0_marshalled;
		__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11** L_1 = (__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11**)(&L_0->___array);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40636));
		void* L_2;
		L_2 = UnsafeUtility_AsPointer_Tis__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11_mD55DB93E327F0A9936ECB513A0AA6A6D23D21BB8_inline(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40636));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40637));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40637));
		(&V_0)->___arrayRef = L_3;
		OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OutArray2D_1_t85E0053A31509EEDF78A2BADF3B945CF1F06EFB6 BindingsMarshaller_ConvertToManaged_mDBE1A18CB960DD8ACF0C8A401051040AB90800E4_gshared (OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D* ___0_unmanaged, const RuntimeMethod* method) 
{
	OutArray2D_1_t85E0053A31509EEDF78A2BADF3B945CF1F06EFB6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_unmanaged));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40638));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40639));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40640));
		il2cpp_codegen_initobj((&V_0), sizeof(OutArray2D_1_t85E0053A31509EEDF78A2BADF3B945CF1F06EFB6));
		OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D* L_0 = ___0_unmanaged;
		intptr_t L_1 = L_0->___arrayRef;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40641));
		void* L_2;
		L_2 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40641));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40642));
		__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11** L_3;
		L_3 = UnsafeUtility_ClassAsRef_Tis__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11_m34ADE7039A54136B23A8BBB7D4AB62CD6C14B1F2(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40642));
		__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11* L_4 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11*, __Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11*>(L_3);
		(&V_0)->___array = L_4;
		OutArray2D_1_t85E0053A31509EEDF78A2BADF3B945CF1F06EFB6 L_5 = V_0;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D BindingsMarshaller_ConvertToUnmanaged_mCFB3220B596DFD2B916F462CD72E799A155DCD4B_gshared (OutArray3D_1_t7FA435BCB6F753967110D6CBD90FE689BD53C989* ___0_marshalled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_marshalled));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40650));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40651));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40652));
		il2cpp_codegen_initobj((&V_0), sizeof(OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D));
		OutArray3D_1_t7FA435BCB6F753967110D6CBD90FE689BD53C989* L_0 = ___0_marshalled;
		__Il2CppFullySharedGenericStructTypeU5BU2CU2CU5D_tC681D70011AD3015263D61F870B415DEF598E9ED** L_1 = (__Il2CppFullySharedGenericStructTypeU5BU2CU2CU5D_tC681D70011AD3015263D61F870B415DEF598E9ED**)(&L_0->___array);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40653));
		void* L_2;
		L_2 = UnsafeUtility_AsPointer_Tis__Il2CppFullySharedGenericStructTypeU5BU2CU2CU5D_tC681D70011AD3015263D61F870B415DEF598E9ED_mEF4E21935057DF6910B67820FBC0C88A1DDB16C5_inline(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40653));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40654));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40654));
		(&V_0)->___arrayRef = L_3;
		OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OutArray3D_1_t7FA435BCB6F753967110D6CBD90FE689BD53C989 BindingsMarshaller_ConvertToManaged_m8132975D754459011491E861BABFFF983C87C750_gshared (OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D* ___0_unmanaged, const RuntimeMethod* method) 
{
	OutArray3D_1_t7FA435BCB6F753967110D6CBD90FE689BD53C989 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_unmanaged));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40655));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40656));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40657));
		il2cpp_codegen_initobj((&V_0), sizeof(OutArray3D_1_t7FA435BCB6F753967110D6CBD90FE689BD53C989));
		OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D* L_0 = ___0_unmanaged;
		intptr_t L_1 = L_0->___arrayRef;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40658));
		void* L_2;
		L_2 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40658));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40659));
		__Il2CppFullySharedGenericStructTypeU5BU2CU2CU5D_tC681D70011AD3015263D61F870B415DEF598E9ED** L_3;
		L_3 = UnsafeUtility_ClassAsRef_Tis__Il2CppFullySharedGenericStructTypeU5BU2CU2CU5D_tC681D70011AD3015263D61F870B415DEF598E9ED_m29F21EB4349E5A5D29AD5B25A4EA50F122E66818(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40659));
		__Il2CppFullySharedGenericStructTypeU5BU2CU2CU5D_tC681D70011AD3015263D61F870B415DEF598E9ED* L_4 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericStructTypeU5BU2CU2CU5D_tC681D70011AD3015263D61F870B415DEF598E9ED*, __Il2CppFullySharedGenericStructTypeU5BU2CU2CU5D_tC681D70011AD3015263D61F870B415DEF598E9ED*>(L_3);
		(&V_0)->___array = L_4;
		OutArray3D_1_t7FA435BCB6F753967110D6CBD90FE689BD53C989 L_5 = V_0;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D BindingsMarshaller_ConvertToUnmanaged_m5D2422AF7596371A8960B4CD55D47D166E6AD9CC_gshared (OutArray_1_tF4DB147CCFAEE5BD8DF99A3201B66BB9608736DC* ___0_marshalled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_marshalled));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40616));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40617));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40618));
		il2cpp_codegen_initobj((&V_0), sizeof(OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D));
		OutArray_1_tF4DB147CCFAEE5BD8DF99A3201B66BB9608736DC* L_0 = ___0_marshalled;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1** L_1 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1**)(&L_0->___array);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40619));
		void* L_2;
		L_2 = UnsafeUtility_AsPointer_Tis__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1_m8A4CCD3B55A006CAB42C0AC49BE500623CBE644C_inline(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40619));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40620));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40620));
		(&V_0)->___arrayRef = L_3;
		OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OutArray_1_tF4DB147CCFAEE5BD8DF99A3201B66BB9608736DC BindingsMarshaller_ConvertToManaged_m265F5BA6A9477A6FA9D0594B6F5189BFDBFE1F55_gshared (OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D* ___0_unmanaged, const RuntimeMethod* method) 
{
	OutArray_1_tF4DB147CCFAEE5BD8DF99A3201B66BB9608736DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_unmanaged));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40621));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40622));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40623));
		il2cpp_codegen_initobj((&V_0), sizeof(OutArray_1_tF4DB147CCFAEE5BD8DF99A3201B66BB9608736DC));
		OutArrayNativeData_t1347B58A57764B4581C660554D031D18677E008D* L_0 = ___0_unmanaged;
		intptr_t L_1 = L_0->___arrayRef;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40624));
		void* L_2;
		L_2 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40624));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40625));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1** L_3;
		L_3 = UnsafeUtility_ClassAsRef_Tis__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1_m22CD3147EC41A77E9F46D24D25E9C796A736A32A(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40625));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*>(L_3);
		(&V_0)->___array = L_4;
		OutArray_1_tF4DB147CCFAEE5BD8DF99A3201B66BB9608736DC L_5 = V_0;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB* BindingsMarshaller_ConvertToManaged_mD7C5D167A07AF13DC52573567DAC93E35AA1648E_gshared (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28791));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28792));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28793));
		intptr_t L_0 = ___0_ptr;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28794));
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1;
		L_1 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28794));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28795));
		AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB* L_2 = (AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		AsyncInstantiateOperation_1__ctor_m3E48F09CFE1A0F8060541BE23BCFE2BB4B9526B6(L_2, L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28795));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BindingsMarshaller_ConvertToNative_m63C81F92915CACC35B3C1AAF1BD882AA96B90300_gshared (AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB* ___0_obj, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_obj));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28796));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28797));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28798));
		AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C*)L_0)->___m_Ptr;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableNestedCollectionMarshaller_1__cctor_m259E816CC95CB6780247349CB69F6644BB8B1B8C_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40221));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40222));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40223));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40224));
		int32_t L_0;
		L_0 = UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40224));
		((BlittableNestedCollectionMarshaller_1_tB81878375D06C9303ECB66ADE19A42B19ED668B7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___AlignOfT = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40225));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC BlittableNestedCollectionMarshaller_1_ConvertToUnmanaged_m527435FCC6A865B38898E685278AB94A421E60F7_gshared (RuntimeObject* ___0_outerCollection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NestedCollectionDataU2A_t6C25FF7CEBAD0853912D21624E3F64D4EE4A54F5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tC487AA3B245AF3B6825765058DA7A19023E901D8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_77 = alloca(SizeOf_T_tC487AA3B245AF3B6825765058DA7A19023E901D8);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC* V_2 = NULL;
	NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC V_3;
	memset((&V_3), 0, sizeof(V_3));
	uintptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	Il2CppFullySharedGenericStruct* V_5 = NULL;
	NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	RuntimeObject* V_9 = NULL;
	int32_t V_10 = 0;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_11 = NULL;
	List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* V_12 = NULL;
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD V_13;
	memset((&V_13), 0, sizeof(V_13));
	ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_outerCollection));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_7), (&V_8), (&V_9), (&V_10), (&V_11), (&V_12), (&V_15));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40226));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40227));
	RuntimeObject* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B14_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40228));
		RuntimeObject* L_0 = ___0_outerCollection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40229));
		il2cpp_codegen_initobj((&V_6), sizeof(NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC));
		NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC L_1 = V_6;
		return L_1;
	}

IL_000e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40230));
		RuntimeObject* L_2 = ___0_outerCollection;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40231));
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40231));
		V_0 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40232));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40233));
		V_7 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40234));
		goto IL_003e;
	}

IL_001c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40235));
		int32_t L_4 = V_1;
		RuntimeObject* L_5 = ___0_outerCollection;
		int32_t L_6 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40236));
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_5, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40236));
		RuntimeObject* L_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
		if (L_8)
		{
			G_B5_0 = L_8;
			G_B5_1 = L_4;
			goto IL_0031;
		}
		G_B4_0 = L_8;
		G_B4_1 = L_4;
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_1;
		goto IL_0036;
	}

IL_0031:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40237));
		NullCheck(G_B5_0);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), G_B5_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40237));
		G_B6_0 = L_9;
		G_B6_1 = G_B5_1;
	}

IL_0036:
	{
		V_1 = ((int32_t)il2cpp_codegen_add(G_B6_1, G_B6_0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40238));
		int32_t L_10 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40239));
		int32_t L_11 = V_7;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40240));
		int32_t L_13 = V_1;
		if (L_13)
		{
			goto IL_0051;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40241));
		il2cpp_codegen_initobj((&V_6), sizeof(NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC));
		NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC L_14 = V_6;
		return L_14;
	}

IL_0051:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40242));
		RuntimeObject* L_15 = ___0_outerCollection;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40243));
		NullCheck((RuntimeObject*)L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40243));
		uint32_t L_17 = sizeof(NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC);
		if (((int64_t)L_16 * (int64_t)L_17 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_16 * (int64_t)L_17 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		int32_t L_18 = ((BlittableNestedCollectionMarshaller_1_tB81878375D06C9303ECB66ADE19A42B19ED668B7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___AlignOfT;
		if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_16, (int32_t)L_17)) + (int64_t)L_18 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_16, (int32_t)L_17)) + (int64_t)L_18 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		int32_t L_19 = V_1;
		uint32_t L_20 = SizeOf_T_tC487AA3B245AF3B6825765058DA7A19023E901D8;
		if (((int64_t)L_19 * (int64_t)L_20 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_19 * (int64_t)L_20 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		if (((int64_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_16, (int32_t)L_17)), L_18)) + (int64_t)((int32_t)il2cpp_codegen_multiply(L_19, (int32_t)L_20)) < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_16, (int32_t)L_17)), L_18)) + (int64_t)((int32_t)il2cpp_codegen_multiply(L_19, (int32_t)L_20)) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40244));
		void* L_21;
		L_21 = BindingsAllocator_Malloc_m8AFEBBAC8AFDEB713BE39CB6C945A29BF1B95C25(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_16, (int32_t)L_17)), L_18)), ((int32_t)il2cpp_codegen_multiply(L_19, (int32_t)L_20)))), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40244));
		V_2 = (NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC*)L_21;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40245));
		RuntimeObject* L_22 = ___0_outerCollection;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40246));
		NullCheck((RuntimeObject*)L_22);
		int32_t L_23;
		L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40246));
		(&V_3)->___Length = L_23;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40247));
		NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC* L_24 = V_2;
		(&V_3)->___Data = (void*)L_24;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40248));
		NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC* L_25 = V_2;
		NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC L_26 = V_3;
		int32_t L_27 = L_26.___Length;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		uint32_t L_29 = sizeof(NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC);
		V_4 = (uintptr_t)((NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(L_28, (int32_t)L_29))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40249));
		uintptr_t L_30 = V_4;
		int32_t L_31 = ((BlittableNestedCollectionMarshaller_1_tB81878375D06C9303ECB66ADE19A42B19ED668B7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___AlignOfT;
		intptr_t L_32 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_31,NULL));
		uintptr_t L_33 = V_4;
		int32_t L_34 = ((BlittableNestedCollectionMarshaller_1_tB81878375D06C9303ECB66ADE19A42B19ED668B7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___AlignOfT;
		intptr_t L_35 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_34,NULL));
		V_4 = (uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_subtract(L_32, ((intptr_t)((uintptr_t)(intptr_t)L_33%(uintptr_t)(intptr_t)L_35))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40250));
		uintptr_t L_36 = V_4;
		V_5 = (Il2CppFullySharedGenericStruct*)L_36;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40251));
		V_8 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40252));
		goto IL_01a5;
	}

IL_00bb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40253));
		RuntimeObject* L_37 = ___0_outerCollection;
		int32_t L_38 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40254));
		NullCheck(L_37);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_37, L_38);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40254));
		V_9 = ((RuntimeObject*)Castclass((RuntimeObject*)L_39, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40255));
		RuntimeObject* L_40 = V_9;
		if (L_40)
		{
			goto IL_00d1;
		}
	}
	{
		G_B14_0 = 0;
		goto IL_00d8;
	}

IL_00d1:
	{
		RuntimeObject* L_41 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40256));
		NullCheck((RuntimeObject*)L_41);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (RuntimeObject*)L_41);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40256));
		G_B14_0 = L_42;
	}

IL_00d8:
	{
		V_10 = G_B14_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40257));
		NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC* L_43 = V_2;
		int32_t L_44 = V_10;
		NullCheck(L_43);
		L_43->___Length = L_44;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40258));
		int32_t L_45 = V_10;
		if (L_45)
		{
			goto IL_00f3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40259));
		NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC* L_46 = V_2;
		uintptr_t L_47 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		NullCheck(L_46);
		L_46->___Data = (void*)L_47;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40260));
		goto IL_0196;
	}

IL_00f3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40261));
		NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC* L_48 = V_2;
		Il2CppFullySharedGenericStruct* L_49 = V_5;
		NullCheck(L_48);
		L_48->___Data = (void*)L_49;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40262));
		RuntimeObject* L_50 = V_9;
		V_11 = ((__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)IsInst((RuntimeObject*)L_50, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_51 = V_11;
		if (L_51)
		{
			goto IL_0117;
		}
	}
	{
		RuntimeObject* L_52 = V_9;
		V_12 = ((List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*)IsInstClass((RuntimeObject*)L_52, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_53 = V_12;
		if (L_53)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_016b;
	}

IL_0117:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40263));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_54 = V_11;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40264));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_55;
		memset((&L_55), 0, sizeof(L_55));
		Span_1__ctor_mCB02A605FC251F9D261E295465D5B1EC81F620E7_inline((&L_55), L_54, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40264));
		V_13 = L_55;
		Il2CppFullySharedGenericStruct* L_56 = V_5;
		int32_t L_57 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40265));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_58;
		memset((&L_58), 0, sizeof(L_58));
		Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline((&L_58), (void*)L_56, L_57, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40265));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40266));
		Span_1_CopyTo_mC87816F92C911740C3511C4A9DF085020A7D0F28((&V_13), L_58, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40266));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40267));
		Il2CppFullySharedGenericStruct* L_59 = V_5;
		int32_t L_60 = V_10;
		intptr_t L_61 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_60,NULL));
		uint32_t L_62 = SizeOf_T_tC487AA3B245AF3B6825765058DA7A19023E901D8;
		V_5 = ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_59, ((intptr_t)il2cpp_codegen_multiply(L_61, (int32_t)L_62))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40268));
		goto IL_0196;
	}

IL_0141:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40269));
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_63 = V_12;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40270));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_64;
		L_64 = NoAllocHelpers_CreateReadOnlySpan_TisIl2CppFullySharedGenericStruct_m66E2527407B1586F806D204A95F57D1226D6E74D_inline(L_63, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40270));
		V_14 = L_64;
		Il2CppFullySharedGenericStruct* L_65 = V_5;
		int32_t L_66 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40271));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_67;
		memset((&L_67), 0, sizeof(L_67));
		Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline((&L_67), (void*)L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40271));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40272));
		ReadOnlySpan_1_CopyTo_m50A3A496B3D51522906BB81E1F4FF1899D5C8AA6((&V_14), L_67, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40272));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40273));
		Il2CppFullySharedGenericStruct* L_68 = V_5;
		int32_t L_69 = V_10;
		intptr_t L_70 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_69,NULL));
		uint32_t L_71 = SizeOf_T_tC487AA3B245AF3B6825765058DA7A19023E901D8;
		V_5 = ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(L_70, (int32_t)L_71))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40274));
		goto IL_0196;
	}

IL_016b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40275));
		V_15 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40276));
		goto IL_0190;
	}

IL_0170:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40277));
		Il2CppFullySharedGenericStruct* L_72 = V_5;
		Il2CppFullySharedGenericStruct* L_73 = L_72;
		uint32_t L_74 = SizeOf_T_tC487AA3B245AF3B6825765058DA7A19023E901D8;
		V_5 = ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_73, (int32_t)L_74));
		RuntimeObject* L_75 = V_9;
		int32_t L_76 = V_15;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40278));
		NullCheck(L_75);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_75, L_76, (Il2CppFullySharedGenericStruct*)L_77);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40278));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_73, L_77, SizeOf_T_tC487AA3B245AF3B6825765058DA7A19023E901D8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)L_73, (void*)L_77);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40279));
		int32_t L_78 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_0190:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40280));
		int32_t L_79 = V_15;
		int32_t L_80 = V_10;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_0170;
		}
	}

IL_0196:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40281));
		NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC* L_81 = V_2;
		uint32_t L_82 = sizeof(NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC);
		V_2 = ((NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC*)il2cpp_codegen_add((intptr_t)L_81, (int32_t)L_82));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40282));
		int32_t L_83 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_01a5:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40283));
		int32_t L_84 = V_8;
		int32_t L_85 = V_0;
		if ((((int32_t)L_84) < ((int32_t)L_85)))
		{
			goto IL_00bb;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 40284));
		NestedCollectionData_tEF8BB0885EA550C8F07C6EC50F45D415F2271DEC L_86 = V_3;
		return L_86;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSlice_1__ctor_m6A9A6D44D17454B752C78055938E767084F8FE72_gshared (BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6* __this, BufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325 ___0_id, uint64_t ___1_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferSlice_1_t5B9D8CE9AF1D89F0B3F6BAF314CBC5212CC3DC27_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_id), (&___1_offset));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42521));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42522));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42523));
		BufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325 L_0 = ___0_id;
		__this->___Id = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42524));
		uint64_t L_1 = ___1_offset;
		__this->___Offset = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42525));
		return;
	}
}
IL2CPP_EXTERN_C  void BufferSlice_1__ctor_m6A9A6D44D17454B752C78055938E767084F8FE72_AdjustorThunk (RuntimeObject* __this, BufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325 ___0_id, uint64_t ___1_offset, const RuntimeMethod* method)
{
	BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6>(__this);
	BufferSlice_1__ctor_m6A9A6D44D17454B752C78055938E767084F8FE72(_thisAdjusted, ___0_id, ___1_offset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferSlice_1_GetHashCode_mA19E9A8E5C93A5991B403D3F178F1D86ABBD3115_gshared (BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferSlice_1_t5B9D8CE9AF1D89F0B3F6BAF314CBC5212CC3DC27_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_Combine_TisBufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0C592F2C64E6018B8C214FECC30E9028E279DDFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42557));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42558));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42559));
		BufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325 L_0 = __this->___Id;
		uint64_t L_1 = __this->___Offset;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42560));
		il2cpp_codegen_runtime_class_init_inline(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = HashCode_Combine_TisBufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0C592F2C64E6018B8C214FECC30E9028E279DDFE(L_0, L_1, HashCode_Combine_TisBufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0C592F2C64E6018B8C214FECC30E9028E279DDFE_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42560));
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t BufferSlice_1_GetHashCode_mA19E9A8E5C93A5991B403D3F178F1D86ABBD3115_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6>(__this);
	int32_t _returnValue;
	_returnValue = BufferSlice_1_GetHashCode_mA19E9A8E5C93A5991B403D3F178F1D86ABBD3115(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSlice_1_Equals_m374BFA17526A0F475A2DBE475A5E86A288156105_gshared (BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6* __this, BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferSlice_1_t5B9D8CE9AF1D89F0B3F6BAF314CBC5212CC3DC27_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_other));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42561));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42562));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42563));
		BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6 L_0 = ___0_other;
		BufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325 L_1 = L_0.___Id;
		BufferID_t68446F7F1686FB8D474CC910EE4BD04FC2C82325 L_2 = __this->___Id;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42564));
		bool L_3;
		L_3 = BufferID_op_Equality_m35207D2200DA9AFEE9E8E2560B34928B4208CBD6(L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42564));
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6 L_4 = ___0_other;
		uint64_t L_5 = L_4.___Offset;
		uint64_t L_6 = __this->___Offset;
		return (bool)((((int64_t)L_5) == ((int64_t)L_6))? 1 : 0);
	}

IL_0022:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BufferSlice_1_Equals_m374BFA17526A0F475A2DBE475A5E86A288156105_AdjustorThunk (RuntimeObject* __this, BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6 ___0_other, const RuntimeMethod* method)
{
	BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6>(__this);
	bool _returnValue;
	_returnValue = BufferSlice_1_Equals_m374BFA17526A0F475A2DBE475A5E86A288156105(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSlice_1_Equals_mF33B6211EE3684C98B95601B93A69CF31E4BCD42_gshared (BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferSlice_1_t5B9D8CE9AF1D89F0B3F6BAF314CBC5212CC3DC27_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_obj));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42565));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42566));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42567));
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))));
		BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6 L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42568));
		bool L_3;
		L_3 = BufferSlice_1_Equals_m374BFA17526A0F475A2DBE475A5E86A288156105(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42568));
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BufferSlice_1_Equals_mF33B6211EE3684C98B95601B93A69CF31E4BCD42_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6>(__this);
	bool _returnValue;
	_returnValue = BufferSlice_1_Equals_mF33B6211EE3684C98B95601B93A69CF31E4BCD42(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSlice_1_op_Equality_m75BBFADEADD559B3C61F8FA10CB5F6433D3DE8B1_gshared (BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6 ___0_a, BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6 ___1_b, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42569));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42570));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42571));
		BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6 L_0 = ___1_b;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42572));
		bool L_1;
		L_1 = BufferSlice_1_Equals_m374BFA17526A0F475A2DBE475A5E86A288156105((&___0_a), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42572));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSlice_1_op_Inequality_m14F6F842BE74783700A213A0388FD5994326D689_gshared (BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6 ___0_a, BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6 ___1_b, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42573));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42574));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42575));
		BufferSlice_1_t4C381A6491AA64B3A31C46BB5C8F1B03941623D6 L_0 = ___1_b;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42576));
		bool L_1;
		L_1 = BufferSlice_1_Equals_m374BFA17526A0F475A2DBE475A5E86A288156105((&___0_a), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42576));
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49_gshared (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TElement_tCC55E69011CBBB042DB4A63960CAF5C6643D9FA5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TElement_tCC55E69011CBBB042DB4A63960CAF5C6643D9FA5);
	const Il2CppFullySharedGenericAny L_28 = L_14;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_TElement_tCC55E69011CBBB042DB4A63960CAF5C6643D9FA5);
	memset(V_4, 0, SizeOf_TElement_tCC55E69011CBBB042DB4A63960CAF5C6643D9FA5);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_5 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		V_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		V_1 = 0;
		RuntimeObject* L_0 = ___0_source;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_2);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_5 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		RuntimeObject* L_7 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_0;
		NullCheck(L_7);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_7, L_8, 0);
		goto IL_0086;
	}

IL_002a:
	{
		RuntimeObject* L_9 = ___0_source;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_9);
		V_3 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007c:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					RuntimeObject* L_11 = V_3;
					if (!L_11)
					{
						goto IL_0085;
					}
				}
				{
					RuntimeObject* L_12 = V_3;
					NullCheck((RuntimeObject*)L_12);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				}

IL_0085:
				{
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0072_1;
			}

IL_0033_1:
			{
				CHECK_PAUSE_POINT;
				RuntimeObject* L_13 = V_3;
				NullCheck(L_13);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_13, (Il2CppFullySharedGenericAny*)L_14);
				il2cpp_codegen_memcpy(V_4, L_14, SizeOf_TElement_tCC55E69011CBBB042DB4A63960CAF5C6643D9FA5);
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_0;
				if (L_15)
				{
					goto IL_0047_1;
				}
			}
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)4);
				V_0 = L_16;
				goto IL_0065_1;
			}

IL_0047_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = V_0;
				NullCheck(L_17);
				int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
				int32_t L_19 = V_1;
				if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
				{
					goto IL_0065_1;
				}
			}
			{
				int32_t L_20 = V_1;
				if (((int64_t)L_20 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_20 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)((int32_t)il2cpp_codegen_multiply(L_20, 2)));
				V_5 = L_21;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = V_0;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = V_5;
				int32_t L_24 = V_1;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, 0, L_24, NULL);
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = V_5;
				V_0 = L_25;
			}

IL_0065_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = V_0;
				int32_t L_27 = V_1;
				il2cpp_codegen_memcpy(L_28, V_4, SizeOf_TElement_tCC55E69011CBBB042DB4A63960CAF5C6643D9FA5);
				NullCheck(L_26);
				il2cpp_codegen_memcpy((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), L_28, SizeOf_TElement_tCC55E69011CBBB042DB4A63960CAF5C6643D9FA5);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9), (void**)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), (void*)L_28);
				int32_t L_29 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
			}

IL_0072_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck((RuntimeObject*)L_30);
				bool L_31;
				L_31 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_30);
				if (L_31)
				{
					goto IL_0033_1;
				}
			}
			{
				goto IL_0086;
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

IL_0086:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = V_0;
		__this->___items = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___items), (void*)L_32);
		int32_t L_33 = V_1;
		__this->___count = L_33;
		return;
	}
}
IL2CPP_EXTERN_C  void Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697>(__this);
	Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49(_thisAdjusted, ___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Buffer_1_ToArray_mFA9AEA7D664154CB0695FD1ED98B3C9539146194_gshared (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->___count;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		return L_1;
	}

IL_000f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->___items;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		int32_t L_4 = __this->___count;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0026;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->___items;
		return L_5;
	}

IL_0026:
	{
		int32_t L_6 = __this->___count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)L_6);
		V_0 = L_7;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->___items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		int32_t L_10 = __this->___count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Buffer_1_ToArray_mFA9AEA7D664154CB0695FD1ED98B3C9539146194_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697>(__this);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* _returnValue;
	_returnValue = Buffer_1_ToArray_mFA9AEA7D664154CB0695FD1ED98B3C9539146194(_thisAdjusted, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DirContext_get_dir_m69D64CF26B5C54313D67072A972839958E42C6F2_inline (DirContext_t21CDEEFF3EC861F7698FE8DA771A2E0E0D2C09EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirContext_get_dir_m69D64CF26B5C54313D67072A972839958E42C6F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirContext_t21CDEEFF3EC861F7698FE8DA771A2E0E0D2C09EF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DirContext_get_dir_m69D64CF26B5C54313D67072A972839958E42C6F2_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 56236));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 56237));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 56238));
		int32_t L_0 = __this->___U3CdirU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Draggable_get_deltaPos_m7B4A63C52DF5AE16A109104FF2C527ACA824F43E_inline (Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Draggable_get_deltaPos_m7B4A63C52DF5AE16A109104FF2C527ACA824F43E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Draggable_get_deltaPos_m7B4A63C52DF5AE16A109104FF2C527ACA824F43E_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 44081));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 44082));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 44083));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CdeltaPosU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Draggable_get_position_m274C64615BFD41CCAD640FBC66BCE05ED04C1B2D_inline (Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Draggable_get_position_m274C64615BFD41CCAD640FBC66BCE05ED04C1B2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Draggable_get_position_m274C64615BFD41CCAD640FBC66BCE05ED04C1B2D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 44099));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 44100));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 44101));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8286));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8287));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8288));
		float L_0 = __this->___m_Width;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8292));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8293));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8294));
		float L_0 = __this->___m_Height;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 25515));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 25516));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 25517));
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		float L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		float L_3 = ___0_a;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 25547));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 25548));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 25549));
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		float L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		float L_3 = ___0_a;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 81960));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 81961));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 81962));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = __this->___m_LogicalParent;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseUxmlTraits_get_canHaveAnyAttribute_m34EF41172370836E58DE8512FAAA340E1A9E302F_inline (BaseUxmlTraits_t2A13D24373542A6401FE350C5119DE0FCE86E21E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUxmlTraits_get_canHaveAnyAttribute_m34EF41172370836E58DE8512FAAA340E1A9E302F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUxmlTraits_t2A13D24373542A6401FE350C5119DE0FCE86E21E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BaseUxmlTraits_get_canHaveAnyAttribute_m34EF41172370836E58DE8512FAAA340E1A9E302F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115252));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115253));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 115254));
		bool L_0 = __this->___U3CcanHaveAnyAttributeU3Ek__BackingField;
		return L_0;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseSlider_2_get_thumbComparer_mFA5827386358B531C8C93665C223668056C19079_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5619));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5620));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5621));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),26));
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSlider_2_get_value_mF335EBB27619640856C7FCE15498756C7E3F3ACC_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5456));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5457));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5458));
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)), SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_t21C347B4BA9AFD50FC89D23D04F44F9F12D572C1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContextChangedEvent_1_get_context_m31DD301EAFA717B91D1C0A1ACE8E5DBC11A5BE1F_gshared_inline (ContextChangedEvent_1_t5291A7D16AD61587D4084611519BED7AA5A48E75* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContextChangedEvent_1_tAA1772A9B6AB92C6637AC58E0379823D71625392_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t9BB6B8C3277A612208CBA9630C43D3F38626C75E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t9BB6B8C3277A612208CBA9630C43D3F38626C75E);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 37322));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 37323));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 37324));
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T_t9BB6B8C3277A612208CBA9630C43D3F38626C75E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t9BB6B8C3277A612208CBA9630C43D3F38626C75E);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseSlider_2_get_comparer_mC30DA5A2B0762867DC4D02862BB1C3E968610321_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5613));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5614));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5615));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),25));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChangingEvent_1_set_previousValue_m467BD2D8305170CE3AF022E5C508D19499695BB0_gshared_inline (ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangingEvent_1_t1B5FAE4097384717BD9E08D75C16F36ACA6397DA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t762FC9D9FC5E841CF82183D16E3DEC2DBF206B13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t762FC9D9FC5E841CF82183D16E3DEC2DBF206B13);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_value : &___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 37313));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 37314));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 37315));
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_value : &___0_value), SizeOf_TValue_t762FC9D9FC5E841CF82183D16E3DEC2DBF206B13);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0, SizeOf_TValue_t762FC9D9FC5E841CF82183D16E3DEC2DBF206B13);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChangingEvent_1_set_newValue_mFFC68A1445E1D8D76B22D8471F02C8038AD32818_gshared_inline (ChangingEvent_1_t75D792D4751D12894F5F7A38ED69E8058670CC25* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangingEvent_1_t1B5FAE4097384717BD9E08D75C16F36ACA6397DA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t762FC9D9FC5E841CF82183D16E3DEC2DBF206B13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t762FC9D9FC5E841CF82183D16E3DEC2DBF206B13);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_value : &___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 37319));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 37320));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 37321));
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_value : &___0_value), SizeOf_TValue_t762FC9D9FC5E841CF82183D16E3DEC2DBF206B13);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_0, SizeOf_TValue_t762FC9D9FC5E841CF82183D16E3DEC2DBF206B13);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5420));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5421));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5422));
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)), SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5438));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5439));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5440));
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TScalar_t76C4F20592EE2DA51D857E86B896A10EB5CBCBF4);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSlider_2_get_orientation_m54531884E5C519A4D0C40D26CF9776F07F334E5E_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5561));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5562));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5563));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
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
		L_5 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_3, L_4, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyboardEventBase_1_get_keyCode_mAA76399AE86C7D052CE8E0F734F06918AB10B737_gshared_inline (KeyboardEventBase_1_t836FB4DE804909DC1808DACAE69320837BCC7C9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyboardEventBase_1_t1BD61B378F695A091A888EC683388EACFD9F5056_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45199));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45200));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 45201));
		int32_t L_0 = __this->___U3CkeyCodeU3Ek__BackingField;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseSlider_2_get_swapThumbs_mB9B92B107973C9BE48DDB86738BB27116B49B1CB_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5601));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 5602));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 5603));
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),21));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* UnsafeUtility_AsPointer_TisIl2CppFullySharedGenericAny_m7634F721F2472F0B576B143F4179633869A2FA75_gshared_inline (Il2CppFullySharedGenericAny* ___0_output, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_output));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3786));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3787));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3788));
		Il2CppFullySharedGenericAny* L_0 = ___0_output;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericAny*,intptr_t,false,false>(L_0,NULL));
		return (void*)(L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
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
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		Il2CppFullySharedGenericAny* L_10;
		L_10 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_9);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_11;
		memset((&L_11), 0, sizeof(L_11));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_11), L_10);
		__this->____pointer = L_11;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		__this->____length = L_13;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC NoAllocHelpers_CreateReadOnlySpan_TisIl2CppFullySharedGenericAny_mC3833ABA237F5EEEE4815E56BC0773989DC842BB_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* V_0 = NULL;
	ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31776));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31777));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31778));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31779));
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31780));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31781));
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C_m6BEC4E15003DEBC3B54982D8B583886DBEA18582((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31781));
		V_0 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31782));
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_4 = V_0;
		NullCheck(L_4);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31783));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_inline((&L_8), L_5, 0, L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 31783));
		return L_8;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t120950580BDFD368223E024446019DB239080837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
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
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Il2CppFullySharedGenericAny* L_12;
		L_12 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_11);
		int32_t L_13 = ___1_start;
		Il2CppFullySharedGenericAny* L_14;
		L_14 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_12, L_13, SizeOf_T_t120950580BDFD368223E024446019DB239080837);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
