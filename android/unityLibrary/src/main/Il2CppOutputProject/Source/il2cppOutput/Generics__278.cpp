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
struct VirtualActionInvoker4Invoker<T1, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2* p2, T3* p3, T4* p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[4] = { &p1, p2, p3, p4 };
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

struct U3CU3Ec__DisplayClass34_0_tA02E84D61A87B1706CC915763144DBF463282B65;
struct U3CU3Ec__DisplayClass34_1_t796D3E086B09C5D156D46C42694AD2147D80C3C4;
struct U3Cget_ValuesU3Ed__26_t8912FCF68691584B3E413E86C68EFCD26FDB8FDC;
struct Action_1_t6C09FBBFF7948D096D883948A5B816A3035797DA;
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D;
struct Action_1_t741CBBCB28E18BDBDEED4AE3BD7DBEEEA526DA43;
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Action_1_t21FD3C63C847CD92920291C92517DD3E3D04358C;
struct BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84;
struct ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3;
struct Comparer_1_tF3D2078BE77AE0230378A17DEA2AD9691B7DD7CF;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EventCallback_1_t424C96066075D21342F190671F3D0ED8AB5900D6;
struct EventCallback_1_t927E299F0ACAE553E3F8976037FE92354F5BAE07;
struct EventCallback_1_t9806BC090007BE5DD48FCD0CB7C9F4CDC509A3FC;
struct EventCallback_1_tF213A6C7DEAE29A9970B73DB52E8778214E5CD9C;
struct EventCallback_1_t5B1D52718EA71C8F33D11D62351463B137A59482;
struct EventCallback_1_t22AD2A21FA6E90AFC97D4E5717205808F3111FE6;
struct EventHandler_1_t522C29C2B48DA5A0C0D9F0978320FD1F630ADE69;
struct FormatFunction_1_t616362C5665618E96267910B91F413BB7F187DB5;
struct FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033;
struct FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532;
struct FrozenSetInternalBase_2_tD90E9EAB085EBF69420B86C9D951CD4760B72778;
struct FrozenSetInternalBase_2_t62C159D9357EA79697AE3E6E27DF518340282A45;
struct FrozenSetInternalBase_2_t1B2D92D358E227A249302318323204E296E8A96C;
struct FrozenSetInternalBase_2_tFAC6718D3C69B5161BC3E66BF49125F5B8658930;
struct FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706;
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C;
struct Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F;
struct Func_2_t0822DB7CB25B793E1EDE7F83940DC719C6FBEBE2;
struct Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354;
struct Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF;
struct Func_2_t66F48BE1C5E5D84869B6957DBA63D4149268C1B2;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IComparer_1_tEF02CBFE07263DD389B385B476CB8477C31E1742;
struct IComparer_1_t4483F9B9F43C7B0F8D4FEEAE12FAFDD3F9CF81FD;
struct IComparer_1_t7E870201BF4F9A2658830A9FA35ED97BC476A8B4;
struct IComparer_1_t4C4C7A2E92FA0630C0FDE241BFC2F70420D27B9D;
struct IComparer_1_t4D9E4734559EEB5EA4155A90B23EF5376F74A9CB;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IDictionary_2_t4D3B65115D85F2C21975A2BBF4A23860F8BCD02F;
struct IEnumerable_1_t3F5EDFFE579A4E530DE955172D88EAA7B13253CE;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEqualityComparer_1_tE6B9DA002A35D6F58856181BEAC9DAC9D371E3E3;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IList_1_tB14A20E1521EA7C611D7F6B7991224A4DB35CA01;
struct IList_1_t41559A30C4AA73362259918CD00049780D07CD1C;
struct INotifyValueChanged_1_t905ACE09F3F199E97F63DC27F2EE138ACA0E1DF8;
struct KeyCollection_t9F395A2A93A76581F1294973A1B42865B6E5D557;
struct KeyCollection_tC3CA54B0C3EEB1BE954190073D5BE2338CCD5B70;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41;
struct KeyList_tC3E937275F7F8CC0D1FF4570B622A988211260D0;
struct KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A;
struct KeyValuePairComparer_t7F43F653B6ADD38382B1A6391C5E184CC3F16337;
struct KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA;
struct KeyboardEventBase_1_t836FB4DE804909DC1808DACAE69320837BCC7C9A;
struct List_1_t592DF2E59D6E244DA0041698383484A07C7E0480;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_t569CB45C96475FFA9C716A7CC2ADE24112D38121;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct Node_tBEF81DD6C8E4523DE5F5F5A828279366160A3BEE;
struct Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5;
struct Node_tC2EEBFB373A2257CE78D509BF5166768644B3A0F;
struct Node_t2B864085C0A7CDAF76C92E4B645B56E5CC1A9AAB;
struct Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB;
struct ObjectPool_1_t7225A2BF0516EA3EA0D9F1730D7A0FDCA63F8031;
struct ObjectPool_1_t37080504ECCFF986BCF1E7D4C1D26BB929DEC7E9;
struct ScaleHandler_t3B7E87A7012BE426C8B9F38B00FBF0178DCFC615;
struct ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3;
struct SecurePooledObject_1_t123B8EA1F7C07207452C49B21D9CB6CEE6AD46C8;
struct Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0;
struct SmallFrozenDictionary_2_t41C0C4A4052E17E2A4D0AC7210EDE36C604D45A6;
struct SmallFrozenSet_1_tDE7B6B4C98EB8442065DEA04C14788EA1A071737;
struct SmallValueTypeComparableFrozenDictionary_2_tB1B3A39417FF529B18003501A6EB6D388EB2DCA6;
struct SmallValueTypeComparableFrozenSet_1_t1572E9A676BE7FF6EFC9CCF1664312605BDC81D6;
struct SmallValueTypeDefaultComparerFrozenDictionary_2_t2A91C1B4BC85B6C8B1D7755B4DC1F6035B23971D;
struct SmallValueTypeDefaultComparerFrozenSet_1_t92FB2791E5B14877BECD7B64AA760805F5D38442;
struct SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6;
struct SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232;
struct SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA;
struct SortedListKeyEnumerator_t2ADF545BACFDC8960A493D065743C0C7B520533F;
struct SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5;
struct SortedList_2_tA18FBD9172637D697F682AF34E557F03BD711F3F;
struct SortedList_2_t9C81D0EB1AE55E2C8EE9A023519853D497059664;
struct SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075;
struct SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73;
struct SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D;
struct Stack_1_t619480024DD1CBC06EAAC47D77F6949481D305DC;
struct TreeSet_1_t14D7C77F9BEB32789A78CC2FBF8F9FE5990DA1AB;
struct TreeSet_1_t78E9B70C80B430EED23BDD3B737645D530FA4DC5;
struct TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C;
struct TreeSet_1_t893C2C985223822F8DA21C0FC445E230A634B7A8;
struct TreeWalkPredicate_1_tCF0B6A96E5A4424F65CE7DD88579E080CAE69463;
struct TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016;
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6;
struct UnsafeList_1_t5981E53C5D824E8CD97E5C4EFDAFD733B3AD9EAC;
struct ValueCollection_tC3E0042065EDA99AF7683F1925725D2D952F152E;
struct ValueCollection_t758F6F80ED1AD459B1C60E43C9507B24CE1F7943;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E;
struct ValueList_tC6C75E12271CE9C7D01699BF578EC09A16BC7E6A;
struct ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct PooledResourceEntry_1U5BU5D_tD8CE662EF59EB4CD5975FF8926B3A27CA8439FDB;
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4;
struct CompilerContextData_t0E7B5B9E1A939E4546A3AE9D8357556FC956A77D;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44;
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794;
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct Handler_t6FB851C86EF75451F6C6D94F0F5470324D915F23;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IBinaryTree_t16CFE96080CF5E1556537A43642E232C7CF5CCCD;
struct IBinding_t02FD99E9C9F2072B28E110F16C157666F5B2DBC7;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct ICommand_t99383C87274669A6893CB01C8F699AA1DB62D383;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
struct IManipulator_t72ADA8E9221C6883C2EAF66532E4C88914018708;
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
struct IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7;
struct IVisualElementScheduledItem_t309F1A5445514122A9E3F64182D0D8A4DE34C48F;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C;
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55;
struct Pressable_tEE6D0D0E5E4201AB20B78307ED9A2F2006FEE939;
struct RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct TextEditingManipulator_t9AC543C81F3778888F421C8D93003EBC8902EB29;
struct TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0;
struct TextSelectingManipulator_t85DD873E0C5537C1F8468B6FE5E4C9995B193855;
struct Thumb_t93918EA28AB7D7A87A976861423C11037819B679;
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
struct Type_t;
struct UITKTextHandle_t1FF3B4EC2367C05F42D61C660D6FE30DF91C06CE;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct Vector2IntField_tDDE92992326F0D508AA0C09A58FA4CA9C6F3EA8C;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct EqualityComparer_tF8FCE99C5DBB2F35D74728CB65346435381CFD5B;
struct Data_t6BD087CC0FA9794D342D260035A70E365224C66E;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;
struct AdditionalData_tA7EB549FE1D91AD083C7F95012F20FEE8BECCA3A;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_MathematicsModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_AppUI[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Collections[];
IL2CPP_EXTERN_C RuntimeClass* Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventCallback_1_tF213A6C7DEAE29A9970B73DB52E8778214E5CD9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_t94F426715F6702F0295747008794B9AC9DF5757F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thumb_t93918EA28AB7D7A87A976861423C11037819B679_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementExtensionsBridge_t6194D94D4106340FC8758B3B1FC12CB7C6BBF8C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09FD22DA3CEFEACE96CB263E19361486F432DB29;
IL2CPP_EXTERN_C String_t* _stringLiteral0B9779B4482B5757A62E35A78F836C7223060D22;
IL2CPP_EXTERN_C String_t* _stringLiteral28130BDD1CD6621C2A10526CF9E1BCF988FD05A2;
IL2CPP_EXTERN_C String_t* _stringLiteral28F5556D5186BD01F2BC1E9B0C7A212EE57DA762;
IL2CPP_EXTERN_C String_t* _stringLiteral2C9A60B92D5B3C991E271D79DB8573AF17B106C9;
IL2CPP_EXTERN_C String_t* _stringLiteral3868ACD899AB3CDEA1DA06F3E399FA662E69562A;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4E1153B903B6D0BC0918581AF40C92AE0685C641;
IL2CPP_EXTERN_C String_t* _stringLiteral4E27DC11166A1DF4403DBB003AEBE0EEF677B34E;
IL2CPP_EXTERN_C String_t* _stringLiteral4EF8FF032B3EF9324025A65A946F1B5D8ADEC385;
IL2CPP_EXTERN_C String_t* _stringLiteral50BAE9CA8DD81443EAB70C4AC3E027B6BB03FF19;
IL2CPP_EXTERN_C String_t* _stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97;
IL2CPP_EXTERN_C String_t* _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511;
IL2CPP_EXTERN_C String_t* _stringLiteral6E98B1502C11CA8B7A1C602C9987402A01DF2ABC;
IL2CPP_EXTERN_C String_t* _stringLiteral70482276F3497E5EEFDF5E02F1CBB3BC2A885FC0;
IL2CPP_EXTERN_C String_t* _stringLiteral75F68197F0EEB77B4867DD7660A26C5EEA3442BF;
IL2CPP_EXTERN_C String_t* _stringLiteral77DABB39995B17E24355BAB420FEF3583991DC43;
IL2CPP_EXTERN_C String_t* _stringLiteral7AD6187FA81CC6A339196395E123DD1BA96E49A3;
IL2CPP_EXTERN_C String_t* _stringLiteral7B12843E2C98BF0A69E743103E44E05F37A0E24F;
IL2CPP_EXTERN_C String_t* _stringLiteral7B9879F8A6A410FA35922B7796206F8D7190EAE2;
IL2CPP_EXTERN_C String_t* _stringLiteral855C653EF804C504EB79C72BC912701BC04CAD17;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral8E533D9D3DD401E92B5EA23D5D26399EB2EF7E00;
IL2CPP_EXTERN_C String_t* _stringLiteral945B451469256760A68A4DD6010313804FCAADE2;
IL2CPP_EXTERN_C String_t* _stringLiteralA182D778DF6139F5811DBB9A20D32AD0149CB8A6;
IL2CPP_EXTERN_C String_t* _stringLiteralA1E40CBF68D0DAA33F52ED0860663C8FFA82B43F;
IL2CPP_EXTERN_C String_t* _stringLiteralAB5B4572F82FD6845056019D1A00533D7667C81B;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralB2313879D6EB4BED1B7E38401344DF45C1F11C43;
IL2CPP_EXTERN_C String_t* _stringLiteralB9A9CC34BFB27E319904EB3CAC4099ABB8D83F42;
IL2CPP_EXTERN_C String_t* _stringLiteralBA3E1754129AF8E4A8B14C41BACEC842580552DF;
IL2CPP_EXTERN_C String_t* _stringLiteralBAEC302981498B70342805DB19674D1130BD616F;
IL2CPP_EXTERN_C String_t* _stringLiteralBD9E4F36B748F19339571133F1334F19F10E6518;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8;
IL2CPP_EXTERN_C String_t* _stringLiteralC35ADE47D32B2B14174862582BB87C3177473D2C;
IL2CPP_EXTERN_C String_t* _stringLiteralC524653D78C03BE4033DDC43C45B67FFB841D141;
IL2CPP_EXTERN_C String_t* _stringLiteralC6B63F7FB591D400CED221156DD37772BD32B9A8;
IL2CPP_EXTERN_C String_t* _stringLiteralDF7F12D5711E1949CC3A1E99E20E19B3CC359C60;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralECF97F9F3209775CC5BF032CE88B6A0C2F18015C;
IL2CPP_EXTERN_C String_t* _stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618;
IL2CPP_EXTERN_C String_t* _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Reverse_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0BF4BAB7341EDF17DC6634DB4CE68255A825C61F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallbackEventHandler_RegisterCallback_TisKeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C_m046581E97BE6F7CECB84314566EB164BC15C9A66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Draggable_get_ctrlKey_mAEA22D241EA363E4AA1A043D364DFAD041497617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Draggable_get_isDown_m6E614B667C5EC0936525B13110B1FE3A61510AF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Draggable_set_dragDirection_mFE1245A5A09AE6472B97A84FC2AC3301E867F9EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyboardEventBase_1_get_ctrlKey_m1AC16CE6BAF7B8D25F4583B1E6A2A58F1F135FDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pressable_get_active_m71AC8A3CE3788DF30045AFA35010607ACCA0AE37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BaseSlider_2_tA64CD0A0B2DA21947F74F0F76A7A17A84723E995_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ChangeEvent_1_tF4AB19770B2A0847418DA555026B3EBEC86AFF81_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Pressable_tEE6D0D0E5E4201AB20B78307ED9A2F2006FEE939_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RestrictedValuesPolicy_t2EB683A5541CB4354485D70C81B711C4AD297E2E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SortIndicesComparer_2_t7165E0A15486445188B393E6EB7B7FA45EF2269D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SortJobDefer_2_t6C562844623B9AC555400FF3FBC52CBDC80C04B1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SortJob_2_t04DA5EBD5D5BA6ACBB1809BAE9F267AB724D8930_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Thumb_t93918EA28AB7D7A87A976861423C11037819B679_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TrackDisplayType_t6CEF00929E8CE48387477557BE23333DD0F33431_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec__DisplayClass34_0_tA02E84D61A87B1706CC915763144DBF463282B65 : public RuntimeObject {};
struct U3CU3Ec__DisplayClass34_1_t796D3E086B09C5D156D46C42694AD2147D80C3C4  : public RuntimeObject
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___valueComparer;
	U3CU3Ec__DisplayClass34_0_tA02E84D61A87B1706CC915763144DBF463282B65* ___CSU24U3CU3E8__locals1;
};
struct Comparer_1_tF3D2078BE77AE0230378A17DEA2AD9691B7DD7CF  : public RuntimeObject
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
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532  : public RuntimeObject
{
	RuntimeObject* ___U3CComparerU3Ek__BackingField;
};
struct FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706  : public RuntimeObject
{
	RuntimeObject* ___U3CComparerU3Ek__BackingField;
};
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41  : public RuntimeObject
{
	SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* ____dictionary;
};
struct SortedDictionary_2_tA94042D6C0D4E1ADAEF33AA688F788E15AEFA792  : public RuntimeObject
{
	KeyCollection_t9F395A2A93A76581F1294973A1B42865B6E5D557* ____keys;
	ValueCollection_tC3E0042065EDA99AF7683F1925725D2D952F152E* ____values;
	TreeSet_1_t14D7C77F9BEB32789A78CC2FBF8F9FE5990DA1AB* ____set;
};
struct SortedDictionary_2_tF8FBEAD6B3705908CADD8EB06B59E188B0F8373B  : public RuntimeObject
{
	KeyCollection_tC3CA54B0C3EEB1BE954190073D5BE2338CCD5B70* ____keys;
	ValueCollection_t758F6F80ED1AD459B1C60E43C9507B24CE1F7943* ____values;
	TreeSet_1_t78E9B70C80B430EED23BDD3B737645D530FA4DC5* ____set;
};
struct SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232  : public RuntimeObject
{
	KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41* ____keys;
	ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E* ____values;
	TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* ____set;
};
struct SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA : public RuntimeObject {};
struct SortedListKeyEnumerator_t46F89AA970C39A4E0A383677C0A649ECE551797A  : public RuntimeObject
{
	SortedList_2_tA18FBD9172637D697F682AF34E557F03BD711F3F* ____sortedList;
	int32_t ____index;
	int32_t ____version;
	uint64_t ____currentKey;
};
struct SortedListKeyEnumerator_tBBEBA29228B9A3FA4FF7A6070BDC94D53ADD5208  : public RuntimeObject
{
	SortedList_2_t9C81D0EB1AE55E2C8EE9A023519853D497059664* ____sortedList;
	int32_t ____index;
	int32_t ____version;
	uint64_t ____currentKey;
};
struct SortedListKeyEnumerator_t2ADF545BACFDC8960A493D065743C0C7B520533F : public RuntimeObject {};
struct SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5 : public RuntimeObject {};
struct SortedList_2_tA18FBD9172637D697F682AF34E557F03BD711F3F  : public RuntimeObject
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___keys;
	PooledResourceEntry_1U5BU5D_tD8CE662EF59EB4CD5975FF8926B3A27CA8439FDB* ___values;
	int32_t ____size;
	int32_t ___version;
	RuntimeObject* ___comparer;
	KeyList_tC3E937275F7F8CC0D1FF4570B622A988211260D0* ___keyList;
	ValueList_tC6C75E12271CE9C7D01699BF578EC09A16BC7E6A* ___valueList;
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
struct SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73  : public RuntimeObject
{
	Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* ___root;
	RuntimeObject* ___comparer;
	int32_t ___count;
	int32_t ___version;
	RuntimeObject* ____syncRoot;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___siInfo;
};
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E  : public RuntimeObject
{
	SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* ____dictionary;
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
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
struct DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_t4A26F5A7B2EFA2BDABB2F6FA752896E1F6506114__padding[1];
	};
};
struct DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_t4A26F5A7B2EFA2BDABB2F6FA752896E1F6506114__padding[1];
	};
};
struct DefaultComparer_1_t0F39973C3E447023E3D3182C6710202AA34073E9 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_t4A26F5A7B2EFA2BDABB2F6FA752896E1F6506114__padding[1];
	};
};
struct Enumerator_tF9BFB3693F73790EC6EAEDB86F72DD7F30172E22 
{
	SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73* ____tree;
	int32_t ____version;
	Stack_1_t619480024DD1CBC06EAAC47D77F6949481D305DC* ____stack;
	Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* ____current;
	bool ____reverse;
};
struct Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____entries;
	int32_t ____index;
};
struct Enumerator_t905B1D6DCBEB9FFA0482DFED57078825B5E3E1DC 
{
	int32_t ____poolUserId;
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ____root;
	SecurePooledObject_1_t123B8EA1F7C07207452C49B21D9CB6CEE6AD46C8* ____stack;
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ____current;
};
struct Enumerator_t8EF80EB947F78323C5BEAB098F00F5236A057AB8 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____keys;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____values;
	int32_t ____index;
};
struct GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9 
{
	SmallFrozenSet_1_tDE7B6B4C98EB8442065DEA04C14788EA1A071737* ____set;
};
struct GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031 
{
	SmallValueTypeComparableFrozenSet_1_t1572E9A676BE7FF6EFC9CCF1664312605BDC81D6* ____set;
};
struct GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4 
{
	SmallValueTypeDefaultComparerFrozenSet_1_t92FB2791E5B14877BECD7B64AA760805F5D38442* ____set;
};
struct HashBucket_t41A930D41913C581811740D49F3DBAEF7A239D43 
{
	int32_t ____firstValue;
	Node_tC2EEBFB373A2257CE78D509BF5166768644B3A0F* ____additionalElements;
};
typedef Il2CppFullySharedGenericStruct HashBucket_t31FCCF0BDD6808CC6078033BE249017344ACE4ED;
struct HashEntry_1_t321B6CFFB564D62096DCCA22A3A491DE5469D195 
{
	int32_t ___hash;
	int32_t ___lastFrameUsed;
	CompilerContextData_t0E7B5B9E1A939E4546A3AE9D8357556FC956A77D* ___compiledGraph;
};
struct KeyValuePairComparer_t7F43F653B6ADD38382B1A6391C5E184CC3F16337  : public Comparer_1_tF3D2078BE77AE0230378A17DEA2AD9691B7DD7CF
{
	RuntimeObject* ___keyComparer;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_tD560F959C416C02DF18D049D3CEE276352F633EF;
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 
{
	UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___m_ListData;
};
struct NativeList_1_t6E24AAB229C43EDF63A324C60B8B1A8B638AEC05 
{
	UnsafeList_1_t5981E53C5D824E8CD97E5C4EFDAFD733B3AD9EAC* ___m_ListData;
};
struct PooledResourceEntry_1_t71513DDA5CE24619FE4D20DCFB1A74AC10C1B894 
{
	Il2CppSharedGenericObject* ___resource;
	int32_t ___frameIndex;
	int32_t ___executionCount;
};
typedef Il2CppFullySharedGenericStruct SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7;
typedef Il2CppFullySharedGenericStruct SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B;
typedef Il2CppFullySharedGenericStruct SliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E;
struct Slot_t3D6F59B8061C33D6ADE1DDB6081830EA9663C334 
{
	int32_t ___hashCode;
	Il2CppChar ___value;
	int32_t ___next;
};
struct Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___value;
};
struct Slot_tEA2D8282E9A5C3740D622EF2860F93438167A05D 
{
	int32_t ___hashCode;
	int32_t ___value;
	int32_t ___next;
};
struct Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint32_t ___value;
};
typedef Il2CppFullySharedGenericStruct Slot_tEC146EEEF7022C6542EBF082D658446682962BFD;
typedef Il2CppFullySharedGenericStruct Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B;
typedef Il2CppFullySharedGenericStruct Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9;
struct SmallFrozenDictionary_2_t41C0C4A4052E17E2A4D0AC7210EDE36C604D45A6  : public FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____keys;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____values;
};
struct SmallValueTypeComparableFrozenDictionary_2_tB1B3A39417FF529B18003501A6EB6D388EB2DCA6 : public FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532 {};
struct SmallValueTypeDefaultComparerFrozenDictionary_2_t2A91C1B4BC85B6C8B1D7755B4DC1F6035B23971D  : public FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____keys;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____values;
};
typedef Il2CppFullySharedGenericStruct SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E;
typedef Il2CppFullySharedGenericStruct SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A;
struct TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C  : public SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73
{
};
struct ValueTuple_2_tC3AECC35C8C5A0E0288CD2C3BFF250D56BFCAB6E 
{
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___Item1;
	int32_t ___Item2;
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
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
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
struct SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	int32_t ___styleSheetIndexInStack;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	int32_t ___styleSheetIndexInStack;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	int32_t ___styleSheetIndexInStack;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
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
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
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
struct U3Cget_ValuesU3Ed__26_t8912FCF68691584B3E413E86C68EFCD26FDB8FDC : public RuntimeObject {};
struct ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct Enumerator_t6C2EA3C5E2783C9D331AFD95E98BB5FC8A28C5C4 
{
	Enumerator_tF9BFB3693F73790EC6EAEDB86F72DD7F30172E22 ____treeEnum;
	int32_t ____getEnumeratorRetType;
};
struct FrozenSetInternalBase_2_tD90E9EAB085EBF69420B86C9D951CD4760B72778  : public FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706
{
	GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9 ____thisSet;
};
struct FrozenSetInternalBase_2_t62C159D9357EA79697AE3E6E27DF518340282A45  : public FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706
{
	GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031 ____thisSet;
};
struct FrozenSetInternalBase_2_t1B2D92D358E227A249302318323204E296E8A96C  : public FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706
{
	GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4 ____thisSet;
};
typedef Il2CppFullySharedGenericStruct HashBucket_tD9E961ABFBD36A4CB5F704E40582C04EA6CFCDEF;
struct Optional_1_tBBBF23375D7D33E286E8D0D789DB5F2437EAE81D 
{
	bool ___isSet;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value;
};
typedef Il2CppFullySharedGenericStruct SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB;
typedef Il2CppFullySharedGenericStruct SegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642;
struct Slot_t864090C53F16AB23F10CD5181950BF6DFE61B3BB 
{
	int32_t ___hashCode;
	int32_t ___next;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___value;
};
struct Slot_t99E1DAD9EC10BC2CA3AD0951B37A54FB9B0C1992 
{
	int32_t ___hashCode;
	int32_t ___next;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___value;
};
struct Slot_tCB72C599DABCE4272F4FE679367967D207668EEC 
{
	UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 ___Item;
	int32_t ___SequenceNumber;
};
typedef Il2CppFullySharedGenericStruct SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A;
struct SortJobDefer_2_tF0DA7CBD168D28FF160DAD2A253EC1A512EEC8C7 
{
	NativeList_1_t6E24AAB229C43EDF63A324C60B8B1A8B638AEC05 ___Data;
	DefaultComparer_1_t0F39973C3E447023E3D3182C6710202AA34073E9 ___Comp;
};
struct SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 
{
	int32_t* ___Data;
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___Comp;
	int32_t ___Length;
};
struct SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 
{
	uint64_t* ___Data;
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___Comp;
	int32_t ___Length;
};
struct SortJob_2_t8252BDD7C6DCA7693D4D8F99380B8E5ACCE2D5CD 
{
	Il2CppFullySharedGenericAny* ___Data;
	DefaultComparer_1_t0F39973C3E447023E3D3182C6710202AA34073E9 ___Comp;
	int32_t ___Length;
};
struct SortedInt32KeyNode_1_t8D8DB6F733B5380172E9A1F0219E9058184E38D1  : public RuntimeObject
{
	int32_t ____key;
	HashBucket_t41A930D41913C581811740D49F3DBAEF7A239D43 ____value;
	bool ____frozen;
	uint8_t ____height;
	SortedInt32KeyNode_1_t8D8DB6F733B5380172E9A1F0219E9058184E38D1* ____left;
	SortedInt32KeyNode_1_t8D8DB6F733B5380172E9A1F0219E9058184E38D1* ____right;
};
struct SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169 : public RuntimeObject {};
struct SortedListValueEnumerator_t3170598218C64F9D26C164F7A677D11A9B7D841A  : public RuntimeObject
{
	SortedList_2_tA18FBD9172637D697F682AF34E557F03BD711F3F* ____sortedList;
	int32_t ____index;
	int32_t ____version;
	PooledResourceEntry_1_t71513DDA5CE24619FE4D20DCFB1A74AC10C1B894 ____currentValue;
};
struct SortedListValueEnumerator_t6032EB0423124997E5E154410B16853850082409  : public RuntimeObject
{
	SortedList_2_t9C81D0EB1AE55E2C8EE9A023519853D497059664* ____sortedList;
	int32_t ____index;
	int32_t ____version;
	ValueTuple_2_tC3AECC35C8C5A0E0288CD2C3BFF250D56BFCAB6E ____currentValue;
};
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 
{
	Il2CppFullySharedGenericStruct* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
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
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	int32_t ___value__;
};
struct LanguageDirection_t30A3B6BBCEE6A6F57641E4E008E0DCC40603558C 
{
	int32_t ___value__;
};
struct LayoutUnit_tF18EC17FE8588A01C72784546410EA0D9B1D2F22 
{
	int32_t ___value__;
};
struct LengthUnit_t746199A94302055274F284E176E01D38EE8A669A 
{
	int32_t ___value__;
};
struct MatchedRule_tCB4750DEEA522CAB73AF23456E65E1F63C0FE73D 
{
	SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 ___matchRecord;
	String_t* ___displayPath;
	int32_t ___lineNumber;
	String_t* ___fullPath;
};
struct MatchedRule_tCB4750DEEA522CAB73AF23456E65E1F63C0FE73D_marshaled_pinvoke
{
	SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshaled_pinvoke ___matchRecord;
	char* ___displayPath;
	int32_t ___lineNumber;
	char* ___fullPath;
};
struct MatchedRule_tCB4750DEEA522CAB73AF23456E65E1F63C0FE73D_marshaled_com
{
	SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshaled_com ___matchRecord;
	Il2CppChar* ___displayPath;
	int32_t ___lineNumber;
	Il2CppChar* ___fullPath;
};
struct MouseButton_tEF578B8F208D798E053BC320C29FCBB655E24454 
{
	int32_t ___value__;
};
struct NodeColor_t3C462CF5E46B843CC52B1FF46B6488BC18768F4F 
{
	uint8_t ___value__;
};
struct PickingMode_t5699BF9E5F2587E0D297984D5BF5B63B768E66AC 
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
struct RenderHints_t4032FC4AB3FD946FD2A484865B8861730D9035E7 
{
	int32_t ___value__;
};
struct RestrictedValuesPolicy_t2EB683A5541CB4354485D70C81B711C4AD297E2E 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E 
{
	int32_t ___value__;
};
struct TouchScreenKeyboardType_t3F5A06315B263282460BE67DE01393B6FB3780C1 
{
	int32_t ___value__;
};
struct TouchType_t84F82C73BC1A6012141735AD84DA67AA7F7AB43F 
{
	int32_t ___value__;
};
struct TrackDisplayType_t6CEF00929E8CE48387477557BE23333DD0F33431 
{
	int32_t ___value__;
};
struct TrickleDown_t862EABE449B6C94F79F2B1D713990C35ABADDF38 
{
	int32_t ___value__;
};
struct URPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481 
{
	int32_t ___value__;
};
struct UsageHints_t2C29E97E6A37FA32178EA7E8A715008BD4834C42 
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
struct DragDirection_t44A81C7DEB7D3D5A07C66B856AC07ABA6BD91853 
{
	int32_t ___value__;
};
struct Type_tDE4005CDD70E001C9402FEE8D2F2431154FED092 
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
struct Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5 : public RuntimeObject {};
struct Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB : public RuntimeObject {};
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
struct Slot_t6D9C5375C49F26BBB83C1AA8D3004BC41CFB3101 
{
	int32_t ___hashCode;
	int32_t ___next;
	MatchedRule_tCB4750DEEA522CAB73AF23456E65E1F63C0FE73D ___value;
};
struct Slot_t107140077E4F213600549572DE6940154D1795BF 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___value;
};
struct Slot_t53E3422D2B6450790E1FE5B3066840A95C2DA735 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___value;
};
struct Slot_tA6A7C770D32AB8313CAAFFFB393FD823314C023E 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___value;
};
struct SmallFrozenSet_1_tDE7B6B4C98EB8442065DEA04C14788EA1A071737  : public FrozenSetInternalBase_2_tD90E9EAB085EBF69420B86C9D951CD4760B72778
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
};
struct SmallValueTypeComparableFrozenSet_1_t1572E9A676BE7FF6EFC9CCF1664312605BDC81D6 : public FrozenSetInternalBase_2_t62C159D9357EA79697AE3E6E27DF518340282A45 {};
struct SmallValueTypeDefaultComparerFrozenSet_1_t92FB2791E5B14877BECD7B64AA760805F5D38442  : public FrozenSetInternalBase_2_t1B2D92D358E227A249302318323204E296E8A96C
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
};
struct SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909 : public RuntimeObject {};
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
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
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
struct Action_1_t6C09FBBFF7948D096D883948A5B816A3035797DA  : public MulticastDelegate_t
{
};
struct Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D  : public MulticastDelegate_t
{
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};
struct EventBase_1_t8F2F1D9AFA0135C6A2C8450AC50D706047340414  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct EventBase_1_t730BB171C1C7F183359949BD5F4BA81AFE9A35CE  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct EventCallback_1_t424C96066075D21342F190671F3D0ED8AB5900D6  : public MulticastDelegate_t
{
};
struct EventCallback_1_tF213A6C7DEAE29A9970B73DB52E8778214E5CD9C  : public MulticastDelegate_t
{
};
struct FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033  : public MulticastDelegate_t
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
struct ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3  : public MulticastDelegate_t
{
};
struct SortComparer_t18B580FB9BFBDD618535E80A0CA612296909F6B7  : public MulticastDelegate_t
{
};
struct SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6  : public MulticastDelegate_t
{
};
struct TreeWalkPredicate_1_tCF0B6A96E5A4424F65CE7DD88579E080CAE69463  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
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
struct MouseManipulator_tE6C609D476BDF311E2934791E620CF833BB4097D  : public Manipulator_tD5727ABA1F5AD1A50927212FAEB090E6BBCB4EBE
{
	List_1_t569CB45C96475FFA9C716A7CC2ADE24112D38121* ___U3CactivatorsU3Ek__BackingField;
	ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 ___m_currentActivator;
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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
struct StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Value;
	int32_t ___m_Keyword;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	bool ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 
{
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
	Data_t6BD087CC0FA9794D342D260035A70E365224C66E* ___m_Data;
};
struct ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3 : public EventBase_1_t8F2F1D9AFA0135C6A2C8450AC50D706047340414 {};
struct KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA  : public EventBase_1_t730BB171C1C7F183359949BD5F4BA81AFE9A35CE
{
	int32_t ___U3CmodifiersU3Ek__BackingField;
	Il2CppChar ___U3CcharacterU3Ek__BackingField;
	int32_t ___U3CkeyCodeU3Ek__BackingField;
};
struct Slot_tEE444C62D9FC9B5D53D6541EEB01C136B0F395F1 
{
	int32_t ___hashCode;
	int32_t ___next;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___value;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
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
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_pinvoke
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_com
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct Slot_t813EFAC64EFCBDDEF6E6A1254A0015B9F3963846 
{
	int32_t ___hashCode;
	int32_t ___next;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___value;
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
struct BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	RuntimeObject* ___U3CbindingU3Ek__BackingField;
	String_t* ___U3CbindingPathU3Ek__BackingField;
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
struct TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0  : public BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C
{
	Action_1_t21FD3C63C847CD92920291C92517DD3E3D04358C* ___U3CPostProcessTextVerticesU3Ek__BackingField;
	UITKTextHandle_t1FF3B4EC2367C05F42D61C660D6FE30DF91C06CE* ___U3CuitkTextHandleU3Ek__BackingField;
	String_t* ___m_Text;
	bool ___m_EnableRichText;
	bool ___m_EmojiFallbackSupport;
	bool ___m_ParseEscapeSequences;
	bool ___m_DisplayTooltipWhenElided;
	bool ___U3CisElidedU3Ek__BackingField;
	String_t* ___elidedText;
	bool ___m_WasElided;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___U3CcachedFontAssetU3Ek__BackingField;
	TextEditingManipulator_t9AC543C81F3778888F421C8D93003EBC8902EB29* ___U3CeditingManipulatorU3Ek__BackingField;
	bool ___isInputField;
	bool ___m_Multiline;
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_TouchScreenKeyboard;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___onIsReadOnlyChanged;
	int32_t ___m_KeyboardType;
	bool ___m_HideSoftKeyboard;
	bool ___m_HideMobileInput;
	bool ___m_IsReadOnly;
	int32_t ___m_MaxLength;
	String_t* ___m_PlaceholderText;
	bool ___U3CUnityEngine_UIElements_ITextEdition_isDelayedU3Ek__BackingField;
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___U3CUnityEngine_UIElements_ITextEdition_AcceptCharacterU3Ek__BackingField;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___U3CUnityEngine_UIElements_ITextEdition_UpdateScrollOffsetU3Ek__BackingField;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CUnityEngine_UIElements_ITextEdition_UpdateValueFromTextU3Ek__BackingField;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CUnityEngine_UIElements_ITextEdition_UpdateTextFromValueU3Ek__BackingField;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CUnityEngine_UIElements_ITextEdition_MoveFocusToCompositeRootU3Ek__BackingField;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3COnPlaceholderChangedU3Ek__BackingField;
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___U3CUnityEngine_UIElements_ITextEdition_GetDefaultValueTypeU3Ek__BackingField;
	String_t* ___m_RenderedText;
	String_t* ___m_OriginalText;
	Il2CppChar ___m_MaskChar;
	bool ___m_IsPassword;
	bool ___m_HidePlaceholderTextOnFocus;
	bool ___m_AutoCorrection;
	TextSelectingManipulator_t85DD873E0C5537C1F8468B6FE5E4C9995B193855* ___m_SelectingManipulator;
	bool ___m_IsSelectable;
	bool ___m_DoubleClickSelectsWord;
	bool ___m_TripleClickSelectsLine;
	bool ___m_SelectAllOnFocus;
	bool ___m_SelectAllOnMouseUp;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CursorColor;
	float ___m_CursorWidth;
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
struct Slider_3_t3436604DADC8DAF5883A2D402C911F7A8260C139  : public BaseSlider_2_t8E24E24AC7EC8F3B3D6AD999CDE5802F78DCDE20
{
	bool ___m_ShowMarks;
	bool ___m_ShowMarksLabel;
	RuntimeObject* ___m_CustomMarks;
	int32_t ___m_DisplayValueLabel;
	int32_t ___m_RestrictedValues;
	ScaleHandler_t3B7E87A7012BE426C8B9F38B00FBF0178DCFC615* ___m_Scale;
	int32_t ___m_TrackDisplayMode;
	bool ___m_ShowInputField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SliderControl;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_TrackElement;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ProgressContainer;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_MarkContainer;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ThumbsContainer;
	Vector2IntField_tDDE92992326F0D508AA0C09A58FA4CA9C6F3EA8C* ___m_InputField;
	Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___m_GetCustomMarkValuePredicate;
	Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___m_GetStepValuePredicate;
};
struct Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0 : public ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794 {};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532_StaticFields
{
	FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532* ___U3CEmptyU3Ek__BackingField;
};
struct FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706_StaticFields
{
	FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___U3CEmptyU3Ek__BackingField;
};
struct SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA_StaticFields
{
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___EmptyNode;
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
struct SortedInt32KeyNode_1_t8D8DB6F733B5380172E9A1F0219E9058184E38D1_StaticFields
{
	SortedInt32KeyNode_1_t8D8DB6F733B5380172E9A1F0219E9058184E38D1* ___EmptyNode;
};
struct SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169_StaticFields
{
	SortedInt32KeyNode_1_t9D9746992A637BBA972FCDE889E9DE970B492169* ___EmptyNode;
};
struct SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909_StaticFields
{
	SortedInt32KeyNode_1_tA3E1CD0FA9C94C0F2D51E9D714CE4521AD699909* ___EmptyNode;
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
struct Pressable_tEE6D0D0E5E4201AB20B78307ED9A2F2006FEE939_StaticFields
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___commandProperty;
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
struct TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_StaticFields
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___displayTooltipWhenElidedProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___emojiFallbackSupportProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enableRichTextProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___isElidedProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___parseEscapeSequencesProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___textProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___valueProperty;
	String_t* ___ussClassName;
	String_t* ___selectableUssClassName;
	String_t* ___k_EllipsisText;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___autoCorrectionProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___hideSoftKeyboardProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___hideMobileInputProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___keyboardTypeProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___isReadOnlyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___isPasswordProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___maxLengthProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___maskCharProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___isSelectableProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___cursorIndexProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectIndexProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___doubleClickSelectsWordProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___tripleClickSelectsLineProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___cursorPositionProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectAllOnFocusProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectAllOnMouseUpProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectionProperty;
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
struct Slider_3_t3436604DADC8DAF5883A2D402C911F7A8260C139_StaticFields
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___showMarksProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___showMarksLabelProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___customMarksProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___displayValueLabelProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___restrictedValuesProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___scaleProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___trackProperty;
};
struct Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___showMarksProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___showMarksLabelProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___customMarksProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___displayValueLabelProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___restrictedValuesProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___scaleProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___trackProperty;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetShowMarks_m26D8927A87530B7768301799A74A5F28FDC66CCC_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, bool ___0_newShowMarks, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetShowMarksLabel_m1E0E6D73299447C73CB3ABC75DDC01DEB479F83D_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, bool ___0_newShowMarksLabel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnumerableExtensions_SequenceEqual_TisIl2CppFullySharedGenericAny_m62332304463FCAB69FE1F5EA391C4C8277C6FE27_gshared (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetCustomMarks_m96016CD27E61AC9289C6C16615954ABE6E7F9522_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, RuntimeObject* ___0_newCustomMarks, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetDisplayValueLabel_m3B166610B5092C0B7FB72EE50968911D1700C11A_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, int32_t ___0_newValueDisplayMode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetRestrictedValues_m6732FE692BE6FAA9B3D8629529AA4C67CB54732C_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, int32_t ___0_newRestrictedValues, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetScale_m942423AEBA78CD85FCC776804B094D53ED9E9717_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* ___0_newScale, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetTrackDisplayMode_m650AD7630A57BB3D2701A40F036F36B109239053_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, int32_t ___0_newTrackDisplayMode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetShowInputField_mAFC115120666BC8188C7F482EDEDEF868F9272AC_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, bool ___0_newShowInputField, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2__ctor_m0B15B365448FF7716334A239AEE9BFAEE86E389D_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Activator_CreateInstance_TisIl2CppFullySharedGenericAny_m68F3B5F53DBB1741E028DA541BE07A3D2382138D_gshared (Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_orientation_m96EF324815D9303E04A1279D90037787CEF49927_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCallback_1__ctor_m4FA52DD3A2C04411AB70840FB07831BC7AE7A993_gshared (EventCallback_1_t22AD2A21FA6E90AFC97D4E5717205808F3111FE6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_RegisterCallback_TisIl2CppSharedGenericObject_mADA60DA6265A096768601EDE87108F04A585DF5C_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_1_t5B1D52718EA71C8F33D11D62351463B137A59482* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyboardEventBase_1_get_ctrlKey_mDBEC9559E2537D882E09EDB0107CDDC2502036EA_gshared (KeyboardEventBase_1_t836FB4DE804909DC1808DACAE69320837BCC7C9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_GetRestrictedThumbValue_mB8DD2F56997D87F8B5DFA1B8E4BF274BD9BB1DB0_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, Il2CppFullySharedGenericStruct ___0_newValue, Il2CppFullySharedGenericStruct ___1_stepValue, bool ___2_ctrlKey, int32_t* ___3_stepOrMarkIndex, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Slider_3_GetOrientationClassName_m068A18C999AE432E8FA20909A357AE63E69F4983_gshared (int32_t ___0_enumValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_SetStep_mD42FD6C0770B55A33E3881A5EC146FA5D977B5AB_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct ___0_newStep, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_OnTrackDown_m7E7815ED475939D9268D69135ECF8AE60EFF8353_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_OnTrackUp_m2461DCAC37A22186F80177CE5C5C105B323AC5D1_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_ClearThumbsActiveState_mBD5D5457B3929990E3B499945B2CA4EAF2DF0B6F_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_ComputeValueFromDrag_mA685A0647D865FB43D0C6CA147A3807B9D9928F5_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_GetRestrictedValue_mE7365920EDB407F489F55F0500B824E43017B2AA_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, Il2CppFullySharedGenericAny ___0_newValue, bool ___1_ctrlKey, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_GetClampedValue_mFC3DDC02D4F1007F866D4CF6A01A8539D25C3EC5_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericAny ___0_newValue, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* BaseSlider_2_get_validateValue_mD6D5ED5FF9C88F1A5375B61388EB187BBD526188_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_invalid_m231B9FD6E07171433A9B436E5B059595E7173A85_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_BindInputField_mF8D122C7643525FBA55D231DE9F9C4437FCE1703_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_RefreshMarks_m886AC7B8ED4770083E747CF60B8BE2E27779F267_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0__, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_RefreshProgressElements_mFC18689B8F20FA17961AA3BFD110969BBC6EAFBA_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_RefreshThumbs_m6F2313650544AD2115CB6DE6BAD72052267E3D77_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_values, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* Slider_3_get_scale_m060644BBA05E2BAB0FFBD2F4702D293D065C522B_gshared_inline (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScaleHandler_Invoke_mE01466896DEF28D463FEEF6E29E184793266A594_gshared_inline (ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* __this, Il2CppFullySharedGenericStruct ___0_value, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseSlider_2_get_invalid_m69A4FEE6AB40F6B44C06DC60B0E7EB32DDA98D0E_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_FindClosestThumbValue_mE23F071F78843DCA416E46CCFD37CF01605E6517_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, int32_t* ___2_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_EnsureProgressElements_m7107F48E30EB68996D4C92E493E94DD0E54307EF_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisIl2CppFullySharedGenericAny_m83EA25933C1AD0EA4D4437FDCF807AE9150FF4F4_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetProgressElementTransform_m11526405F5C43CE0650846F63700F1037D8DCEF5_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, float ___1_start, float ___2_end, bool ___3_isHorizontal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_RefreshCustomMarks_m3D288AE6DB4D87B5CEF95BE33498B36DF670758D_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Slider_3_HasValidStep_mBBC9AF42A9B89E5FBBF411D609F212566AA1E572_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_RefreshStepMarks_m92E6F85FB1ACE0496FA13E27B466700598EE9F0F_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Slider_3_get_showMarksLabel_mEF457D126A7FE19693D0DD9247F1690E58194CE4_gshared_inline (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseSlider_2_get_thumbComparer_mFA5827386358B531C8C93665C223668056C19079_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Slider_3_GetTrackDisplayTypeUssClassName_m0CFF96131A634D6A4B7EA870A8347B002B3D7BE8_gshared (int32_t ___0_enumValue, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BaseSlider_2_get_formatString_m64EDB5D3E4D541AAD87886AC72E8821942B76127_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033* BaseSlider_2_get_formatFunction_mE64BDBEBC619D3D50D1BBE2CC0691EA5C8ED597A_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool INotifyValueChangedExtensions_RegisterValueChangedCallback_TisIl2CppFullySharedGenericAny_m50E49B3920DDDB55FB3A9A3E3A3C28B944F17A83_gshared (RuntimeObject* ___0_control, EventCallback_1_t424C96066075D21342F190671F3D0ED8AB5900D6* ___1_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool INotifyValueChangedExtensions_UnregisterValueChangedCallback_TisIl2CppFullySharedGenericAny_mCA080B8D2EE1011CBEEC2A62C3582F0FC00717AC_gshared (RuntimeObject* ___0_control, EventCallback_1_t424C96066075D21342F190671F3D0ED8AB5900D6* ___1_callback, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChangeEvent_1_get_newValue_m83811A7602CB9AC9F15F7638C6BF3CE866A941ED_gshared_inline (ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_set_value_mCA4DEFB0DD712279EC029F5BA93A3F9888B178E6_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Slider_3_get_restrictedValues_m4B49225E63D7156F822BDD7C17E278ADBE3FE4D4_gshared_inline (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSlider_2_FindClosestThumbValue_mCDAAF997419AC6278684BC7CB682C8C9F11D5B74_gshared (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct ___0_v, int32_t ___1_count, Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF* ___2_predicate, int32_t* ___3_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_RestrictedThumbValue_mAEC435A64252DCABB7CAC3C0A974BC5B5CE2CE5C_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, Il2CppFullySharedGenericStruct ___0_newValue, Il2CppFullySharedGenericStruct ___1_stepValue, int32_t* ___2_stepOrMarkIndex, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Comparer_m46CB1D13F7DB369D819F4C2397EAF293292FF2CF_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrozenDictionary_2__ctor_mA30E63CCE609F2CB0B0DBA8CEBF81443E1822B1A_gshared (FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3D2F482254DE4B06E4B482E0A42DCBF30180B7CA_gshared (Enumerator_t8EF80EB947F78323C5BEAB098F00F5236A057AB8* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FrozenDictionary_2_get_Comparer_m3874268CD9839B437894F50851DCF04394632B0E_gshared_inline (FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m3025B6666A254AEDE933EDE04AD66D456C52AD00_gshared_inline (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrozenSetInternalBase_2__ctor_mD19128BF80089097292C97D66993F7ADC0EFA57F_gshared (FrozenSetInternalBase_2_tFAC6718D3C69B5161BC3E66BF49125F5B8658930* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FrozenSet_1_get_Comparer_mB3265D335E5104BC225CEFFFED328ACA8FC573D0_gshared_inline (FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m387AC31F21D5AB2FB06304034A2536356A191C59_gshared (Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_entries, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m8EE3DB1C1E6B93DE1E6E590D97BC6E937862B9F2_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_m5CAADAB28D2C20F31F2E806FD1C0376C9F580710_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortIndicesComparer_2_Compare_mE7B74FF9C99161C4447EF543B78A336D08096292_gshared (SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForDeferExtensions_ScheduleByRef_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m04D7A7A6BB05035DAE56B266FDB363B0303E38F4_gshared (Il2CppFullySharedGenericStruct* ___0_jobData, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___1_list, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisIl2CppFullySharedGenericStruct_mF266365A1A83D3A8671F9B001353E6658E321E57_gshared (Il2CppFullySharedGenericStruct ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 SortJobDefer_2_Schedule_mB75384614976E2ECF4F25943615BF38317BE2814_gshared (SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisIl2CppFullySharedGenericStruct_m364BAC197FCE9C0398886D7A55115738B4B2BDFD_gshared (Il2CppFullySharedGenericStruct ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 SortJob_2_Schedule_m998B8D3F60028D49ED6C4FDCD51C0D7DDE0A06D8_gshared (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2__ctor_mFA2F1C62428D2FDD719081256DAA0B3F4877D69F_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePairComparer__ctor_mBA29BBC72C5798EF75190B4437A0C0DB87DDC62A_gshared (KeyValuePairComparer_t7F43F653B6ADD38382B1A6391C5E184CC3F16337* __this, RuntimeObject* ___0_keyComparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeSet_1__ctor_mECC7FC438B99CFE28B54069F42AD38C9CA2655E6_gshared (TreeSet_1_t893C2C985223822F8DA21C0FC445E230A634B7A8* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_Add_mAF89E4EAB2D98CB81C066F6DC2A2C11FF43CC1BC_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_get_Item_m68FF84117314DB42151562EC40D7DD433F22A81A_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_Remove_m7FF75998DF211EB5A66B2AFE5118C13A3C6A0A74_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_Item_mAE94673D67914B814978A88A7AD48410FAFB704C_gshared_inline (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_UpdateVersion_m172929972B25F2EDDF426E8D7D69003E7E001E2C_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m52E978AD4C7656BD9BE47C5DE851F1F8DADF3A5A_gshared (KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41* __this, SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41* SortedDictionary_2_get_Keys_m8EAB83A1BFB2EBC1A574F960FD89AEF091CC35D6_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m7E60BF0E35BB70C5BA0388E0CAA2D6F72DE54A8F_gshared (ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E* __this, SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E* SortedDictionary_2_get_Values_m171C96BDC47A588120C6585ABED2CC550A28055A_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_m3774BCBD554B0329AD84B86DC0998FC0890AAB90_gshared (U3CU3Ec__DisplayClass34_0_tA02E84D61A87B1706CC915763144DBF463282B65* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWalkPredicate_1__ctor_m984A5C401EEC6FA4AD15922857EC2E4ABDF12347_gshared (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_1__ctor_m725AA08A5D90852C5188B62B501E489C78FC7C8D_gshared (U3CU3Ec__DisplayClass34_1_t796D3E086B09C5D156D46C42694AD2147D80C3C4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_CopyTo_m34CB5771C13F8F93B145C512B6A2D217CC4B12F9_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mA347E7F9A4E89648A28432A4CEA2FABA20C4DEEE_gshared (Enumerator_t6C2EA3C5E2783C9D331AFD95E98BB5FC8A28C5C4* __this, SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_IsCompatibleKey_m603435A698B78800B58FBECFE5353DE4EFEBE0E1_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_TryGetValue_mE5557EAF42A20477EE9DD9B6654DE9FC7126B2C1_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_set_Item_mDC751F9F41169639062DB90A7E3A24B19D5E201F_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_Add_mA3BDBB8DD7D25776DF9E26E035F2164AEDF0B97E_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_ContainsKey_m56C9790C11A918372279FC513DF233544CA23829_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_Remove_mD90CF2DB5271EDB847D9B41AB0A2DECB2F91489D_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared (Il2CppSharedGenericObject* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ValuesU3Ed__26__ctor_mD70D70552D62D68793D8529E778BED3F9707F0F2_gshared (U3Cget_ValuesU3Ed__26_t8912FCF68691584B3E413E86C68EFCD26FDB8FDC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mDD2B3B02D2DF85F1A79FF5F335ECEE80071842F1_gshared (Enumerator_t905B1D6DCBEB9FFA0482DFED57078825B5E3E1DC* __this, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_root, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_SetOrAdd_m2C2D829D7CBEB15EE6DCB7B6686913F34B1FAFA7_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, int32_t ___0_key, Il2CppFullySharedGenericAny ___1_value, RuntimeObject* ___2_valueComparer, bool ___3_overwriteExistingValue, bool* ___4_replacedExistingValue, bool* ___5_mutated, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_RemoveRecursive_m3A254BE428AEC6122E3524C149C4DFB799C21FE5_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, int32_t ___0_key, bool* ___1_mutated, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedInt32KeyNode_1_Freeze_m24B7BF41A648151B92774C3DA4C0908BB2D4E470_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, Action_1_t6C09FBBFF7948D096D883948A5B816A3035797DA* ___0_freezeAction, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_Mutate_m7542A80E4817C87A311CFAD9D5A5B7EF9B93003D_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_left, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_RotateRight_m874236017303489BE43BD7B7AA73BD7BCB6FD5E0_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_RotateLeft_m6EEBD6ECD53AEFFBE60EA5CB6FB2E29E5FFF3648_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedInt32KeyNode_1_Balance_mA08EAA877DE4CE03CF1799DA0C28A2A03FFCB5AD_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedInt32KeyNode_1_IsRightHeavy_mC64DB1CD1C3AA1E8BF277EFA87F0A0BBC0C1490F_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_DoubleLeft_mC18651981E89C3914CC88B7B179F49AB4311B824_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedInt32KeyNode_1_IsLeftHeavy_mEF8CAE4DD7848255911253E428F8B704527FBEDA_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_DoubleRight_m060C5B4EDAD9856D23D3E0CDEBBF99AB9E20F760_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedInt32KeyNode_1__ctor_m3801A76E6E088A71D4EDFD7AD126EE8D57C9BC23_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, int32_t ___0_key, Il2CppFullySharedGenericAny ___1_value, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___2_left, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___3_right, bool ___4_frozen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_MakeBalanced_mC7343BE159B83C9E84064A1CC1D441B6138FA9A9_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_Remove_m7B4DB9DAC4D8913F364CBEF9926C8B4EF58CDE5B_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, int32_t ___0_key, bool* ___1_mutated, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedInt32KeyNode_1__ctor_mF4ECA4462FE8AF102CCF0AA88FD3B3476964020A_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_gshared_inline (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared (const RuntimeMethod* method) ;

inline void Slider_3_SetShowMarks_m26D8927A87530B7768301799A74A5F28FDC66CCC (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, bool ___0_newShowMarks, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, bool, const RuntimeMethod*))Slider_3_SetShowMarks_m26D8927A87530B7768301799A74A5F28FDC66CCC_gshared)(__this, ___0_newShowMarks, method);
}
inline void Slider_3_SetShowMarksLabel_m1E0E6D73299447C73CB3ABC75DDC01DEB479F83D (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, bool ___0_newShowMarksLabel, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, bool, const RuntimeMethod*))Slider_3_SetShowMarksLabel_m1E0E6D73299447C73CB3ABC75DDC01DEB479F83D_gshared)(__this, ___0_newShowMarksLabel, method);
}
inline bool EnumerableExtensions_SequenceEqual_TisSliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E_m235BD8EFEB7F17C6090F55BC7473C2B5F39EF5D6 (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))EnumerableExtensions_SequenceEqual_TisIl2CppFullySharedGenericAny_m62332304463FCAB69FE1F5EA391C4C8277C6FE27_gshared)(___0_first, ___1_second, method);
}
inline void Slider_3_SetCustomMarks_m96016CD27E61AC9289C6C16615954ABE6E7F9522 (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, RuntimeObject* ___0_newCustomMarks, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, RuntimeObject*, const RuntimeMethod*))Slider_3_SetCustomMarks_m96016CD27E61AC9289C6C16615954ABE6E7F9522_gshared)(__this, ___0_newCustomMarks, method);
}
inline void Slider_3_SetDisplayValueLabel_m3B166610B5092C0B7FB72EE50968911D1700C11A (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, int32_t ___0_newValueDisplayMode, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, int32_t, const RuntimeMethod*))Slider_3_SetDisplayValueLabel_m3B166610B5092C0B7FB72EE50968911D1700C11A_gshared)(__this, ___0_newValueDisplayMode, method);
}
inline void Slider_3_SetRestrictedValues_m6732FE692BE6FAA9B3D8629529AA4C67CB54732C (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, int32_t ___0_newRestrictedValues, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, int32_t, const RuntimeMethod*))Slider_3_SetRestrictedValues_m6732FE692BE6FAA9B3D8629529AA4C67CB54732C_gshared)(__this, ___0_newRestrictedValues, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Delegate_op_Equality_m8B96593B665536587FFD27DE233442C075971C32 (Delegate_t* ___0_d1, Delegate_t* ___1_d2, const RuntimeMethod* method) ;
inline void Slider_3_SetScale_m942423AEBA78CD85FCC776804B094D53ED9E9717 (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* ___0_newScale, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3*, const RuntimeMethod*))Slider_3_SetScale_m942423AEBA78CD85FCC776804B094D53ED9E9717_gshared)(__this, ___0_newScale, method);
}
inline void Slider_3_SetTrackDisplayMode_m650AD7630A57BB3D2701A40F036F36B109239053 (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, int32_t ___0_newTrackDisplayMode, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, int32_t, const RuntimeMethod*))Slider_3_SetTrackDisplayMode_m650AD7630A57BB3D2701A40F036F36B109239053_gshared)(__this, ___0_newTrackDisplayMode, method);
}
inline void Slider_3_SetShowInputField_mAFC115120666BC8188C7F482EDEDEF868F9272AC (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, bool ___0_newShowInputField, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, bool, const RuntimeMethod*))Slider_3_SetShowInputField_mAFC115120666BC8188C7F482EDEDEF868F9272AC_gshared)(__this, ___0_newShowInputField, method);
}
inline void BaseSlider_2__ctor_m0B15B365448FF7716334A239AEE9BFAEE86E389D (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, const RuntimeMethod*))BaseSlider_2__ctor_m0B15B365448FF7716334A239AEE9BFAEE86E389D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, String_t* ___0_className, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementExtensionsBridge_SetIsCompositeRoot_mB26B975C697A8A65C35A2DF1080942D8E18DFD6F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, bool ___1_isCompositeRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementExtensionsBridge_SetExcludeFromFocusRing_mFA8C05137AEDB7355D2C5FBE18029725733A10F7 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, bool ___1_excludeFromFocusRing, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Focusable_set_delegatesFocus_mC691C4199C88BEF0C55A7F7FD2C6ADDD00402D6F (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy_Add_mDDEF4932C9E9FC302755C45A9F7966AEEBC26648 (Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_child, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3 (const RuntimeMethod* method)
{
	Il2CppSharedGenericObject* il2cppRetVal;
	((  void (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))Activator_CreateInstance_TisIl2CppFullySharedGenericAny_m68F3B5F53DBB1741E028DA541BE07A3D2382138D_gshared)((Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_child, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_get_usageHints_mA29803CA9342027B81EBC54C1CB6B92D635153BF (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_set_usageHints_mD317223075C8C708C1DB66CF90E81C5F9DE4C5B0 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
inline void Action_1__ctor_mBB81975E33A229FDB6FAA0BD2039BD7D8BD95ED0 (Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable__ctor_mAD8C6C3C2630FBE20950EF2739CCCE44F2034BF9 (Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_clickHandler, Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D* ___1_dragHandler, Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D* ___2_upHandler, Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D* ___3_downHandler, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Draggable_set_dragDirection_mFE1245A5A09AE6472B97A84FC2AC3301E867F9EC_inline (Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline void BaseSlider_2_set_orientation_m96EF324815D9303E04A1279D90037787CEF49927 (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, int32_t, const RuntimeMethod*))BaseSlider_2_set_orientation_m96EF324815D9303E04A1279D90037787CEF49927_gshared)(__this, ___0_value, method);
}
inline void EventCallback_1__ctor_m9784A8620A12F32140DB764C2DAC0CD4AE9A91CF (EventCallback_1_tF213A6C7DEAE29A9970B73DB52E8778214E5CD9C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventCallback_1_tF213A6C7DEAE29A9970B73DB52E8778214E5CD9C*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventCallback_1__ctor_m4FA52DD3A2C04411AB70840FB07831BC7AE7A993_gshared)(__this, ___0_object, ___1_method, method);
}
inline void CallbackEventHandler_RegisterCallback_TisKeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C_m046581E97BE6F7CECB84314566EB164BC15C9A66 (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_1_tF213A6C7DEAE29A9970B73DB52E8778214E5CD9C* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method)
{
	((  void (*) (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*, EventCallback_1_tF213A6C7DEAE29A9970B73DB52E8778214E5CD9C*, int32_t, const RuntimeMethod*))CallbackEventHandler_RegisterCallback_TisIl2CppSharedGenericObject_mADA60DA6265A096768601EDE87108F04A585DF5C_gshared)(__this, ___0_callback, ___1_useTrickleDown, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementExtensions_AddManipulator_m3579CA75D8F76245DC3B7C9F5FCB9B769D69E27D (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ele, RuntimeObject* ___1_manipulator, const RuntimeMethod* method) ;
inline bool KeyboardEventBase_1_get_ctrlKey_m1AC16CE6BAF7B8D25F4583B1E6A2A58F1F135FDC (KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA*, const RuntimeMethod*))KeyboardEventBase_1_get_ctrlKey_mDBEC9559E2537D882E09EDB0107CDDC2502036EA_gshared)(__this, method);
}
inline void Slider_3_GetRestrictedThumbValue_mB8DD2F56997D87F8B5DFA1B8E4BF274BD9BB1DB0 (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, Il2CppFullySharedGenericStruct ___0_newValue, Il2CppFullySharedGenericStruct ___1_stepValue, bool ___2_ctrlKey, int32_t* ___3_stepOrMarkIndex, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, bool, int32_t*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Slider_3_GetRestrictedThumbValue_mB8DD2F56997D87F8B5DFA1B8E4BF274BD9BB1DB0_gshared)((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*)__this, ___0_newValue, ___1_stepValue, ___2_ctrlKey, ___3_stepOrMarkIndex, il2cppRetVal, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
inline void BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_gshared_inline)((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, il2cppRetVal, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
inline String_t* Slider_3_GetOrientationClassName_m068A18C999AE432E8FA20909A357AE63E69F4983 (int32_t ___0_enumValue, const RuntimeMethod* method)
{
	return ((  String_t* (*) (int32_t, const RuntimeMethod*))Slider_3_GetOrientationClassName_m068A18C999AE432E8FA20909A357AE63E69F4983_gshared)(___0_enumValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_RemoveFromClassList_mA7A2EC202004DFCBF38C12B70C6218BF40D21220 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, String_t* ___0_className, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891 (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E* ___0_property, const RuntimeMethod* method) ;
inline void BaseSlider_2_SetStep_mD42FD6C0770B55A33E3881A5EC146FA5D977B5AB (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct ___0_newStep, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))BaseSlider_2_SetStep_mD42FD6C0770B55A33E3881A5EC146FA5D977B5AB_gshared)((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, ___0_newStep, method);
}
inline void BaseSlider_2_OnTrackDown_m7E7815ED475939D9268D69135ECF8AE60EFF8353 (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44*, const RuntimeMethod*))BaseSlider_2_OnTrackDown_m7E7815ED475939D9268D69135ECF8AE60EFF8353_gshared)(__this, ___0_dragger, method);
}
inline void BaseSlider_2_OnTrackUp_m2461DCAC37A22186F80177CE5C5C105B323AC5D1 (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44*, const RuntimeMethod*))BaseSlider_2_OnTrackUp_m2461DCAC37A22186F80177CE5C5C105B323AC5D1_gshared)(__this, ___0_dragger, method);
}
inline void Slider_3_ClearThumbsActiveState_mBD5D5457B3929990E3B499945B2CA4EAF2DF0B6F (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, const RuntimeMethod*))Slider_3_ClearThumbsActiveState_mBD5D5457B3929990E3B499945B2CA4EAF2DF0B6F_gshared)(__this, method);
}
inline void BaseSlider_2_ComputeValueFromDrag_mA685A0647D865FB43D0C6CA147A3807B9D9928F5 (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))BaseSlider_2_ComputeValueFromDrag_mA685A0647D865FB43D0C6CA147A3807B9D9928F5_gshared)((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, ___0_dragger, il2cppRetVal, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Draggable_get_ctrlKey_mAEA22D241EA363E4AA1A043D364DFAD041497617_inline (Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* __this, const RuntimeMethod* method) ;
inline void Slider_3_GetRestrictedValue_mE7365920EDB407F489F55F0500B824E43017B2AA (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, Il2CppFullySharedGenericAny ___0_newValue, bool ___1_ctrlKey, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, Il2CppFullySharedGenericAny, bool, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Slider_3_GetRestrictedValue_mE7365920EDB407F489F55F0500B824E43017B2AA_gshared)((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*)__this, ___0_newValue, ___1_ctrlKey, il2cppRetVal, method);
}
inline void BaseSlider_2_GetClampedValue_mFC3DDC02D4F1007F866D4CF6A01A8539D25C3EC5 (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericAny ___0_newValue, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))BaseSlider_2_GetClampedValue_mFC3DDC02D4F1007F866D4CF6A01A8539D25C3EC5_gshared)((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, ___0_newValue, il2cppRetVal, method);
}
inline EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline)(method);
}
inline Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* BaseSlider_2_get_validateValue_mD6D5ED5FF9C88F1A5375B61388EB187BBD526188_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method)
{
	return ((  Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, const RuntimeMethod*))BaseSlider_2_get_validateValue_mD6D5ED5FF9C88F1A5375B61388EB187BBD526188_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_mFF6CAE6DFB13AFB5921FB3201467228A326875DE_inline (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* __this, Il2CppFullySharedGenericAny ___0_arg, const RuntimeMethod* method)
{
	bool il2cppRetVal;
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_arg, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void BaseSlider_2_set_invalid_m231B9FD6E07171433A9B436E5B059595E7173A85 (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, bool ___0_value, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, bool, const RuntimeMethod*))BaseSlider_2_set_invalid_m231B9FD6E07171433A9B436E5B059595E7173A85_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectExtensions_IsValid_mF02319DA68BBF246BB6B5D0C0B84F60C754EC1CC (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, const RuntimeMethod* method) ;
inline void Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline void Slider_3_BindInputField_mF8D122C7643525FBA55D231DE9F9C4437FCE1703 (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, const RuntimeMethod*))Slider_3_BindInputField_mF8D122C7643525FBA55D231DE9F9C4437FCE1703_gshared)(__this, method);
}
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 Span_1_op_Implicit_m400E4768CE49AAE9E8572B8D80CEB4AD59A02895 (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_gshared)(___0_span, method);
}
inline void Slider_3_RefreshMarks_m886AC7B8ED4770083E747CF60B8BE2E27779F267 (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0__, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, const RuntimeMethod*))Slider_3_RefreshMarks_m886AC7B8ED4770083E747CF60B8BE2E27779F267_gshared)(__this, ___0__, method);
}
inline void Slider_3_RefreshProgressElements_mFC18689B8F20FA17961AA3BFD110969BBC6EAFBA (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_values, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, const RuntimeMethod*))Slider_3_RefreshProgressElements_mFC18689B8F20FA17961AA3BFD110969BBC6EAFBA_gshared)(__this, ___0_values, method);
}
inline void Slider_3_RefreshThumbs_m6F2313650544AD2115CB6DE6BAD72052267E3D77 (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_values, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, const RuntimeMethod*))Slider_3_RefreshThumbs_m6F2313650544AD2115CB6DE6BAD72052267E3D77_gshared)(__this, ___0_values, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thumb__ctor_m5BDB035B31CC35EAA06FD1624CE9D6E762D8BDCC (Thumb_t93918EA28AB7D7A87A976861423C11037819B679* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___0_key, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_gshared_inline)(__this, ___0_index, method);
}
inline void BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_gshared_inline)((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 Length_op_Implicit_m29448D89D0F99CC4CFCEB9CD57853BA78A94EDA5 (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Translate__ctor_mE072B1282A3D3700189D746610D46834E4FAA03E (Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* __this, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___0_x, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 StyleTranslate_op_Implicit_m07F947CEE79D8E54CE1DB08840561A833895C0CE (Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thumb_set_displayValueLabel_mB2C0FD2086D2FB16046233587BD8790627504D88 (Thumb_t93918EA28AB7D7A87A976861423C11037819B679* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* Slider_3_get_scale_m060644BBA05E2BAB0FFBD2F4702D293D065C522B_inline (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method)
{
	return ((  ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, const RuntimeMethod*))Slider_3_get_scale_m060644BBA05E2BAB0FFBD2F4702D293D065C522B_gshared_inline)(__this, method);
}
inline void ScaleHandler_Invoke_mE01466896DEF28D463FEEF6E29E184793266A594_inline (ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* __this, Il2CppFullySharedGenericStruct ___0_value, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))ScaleHandler_Invoke_mE01466896DEF28D463FEEF6E29E184793266A594_gshared_inline)((ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3*)__this, ___0_value, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thumb_set_text_mEC8BDB18CBC5E1A3907AB4C0BA6508CCF17BED81 (Thumb_t93918EA28AB7D7A87A976861423C11037819B679* __this, String_t* ___0_value, const RuntimeMethod* method) ;
inline bool BaseSlider_2_get_invalid_m69A4FEE6AB40F6B44C06DC60B0E7EB32DDA98D0E (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, const RuntimeMethod*))BaseSlider_2_get_invalid_m69A4FEE6AB40F6B44C06DC60B0E7EB32DDA98D0E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, String_t* ___0_className, bool ___1_enable, const RuntimeMethod* method) ;
inline int32_t ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_RemoveAt_mE99E3CF051D264ACBCCB4318B3E023FAAB8779D7 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Pressable_get_active_m71AC8A3CE3788DF30045AFA35010607ACCA0AE37_inline (Pressable_tEE6D0D0E5E4201AB20B78307ED9A2F2006FEE939* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Draggable_get_isDown_m6E614B667C5EC0936525B13110B1FE3A61510AF4_inline (Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* __this, const RuntimeMethod* method) ;
inline void BaseSlider_2_FindClosestThumbValue_mE23F071F78843DCA416E46CCFD37CF01605E6517 (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, int32_t* ___2_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44*, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, int32_t*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))BaseSlider_2_FindClosestThumbValue_mE23F071F78843DCA416E46CCFD37CF01605E6517_gshared)((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, ___0_dragger, ___1_values, ___2_index, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Clear_m201F95F3031691823F39BAEC5ED378C82F34AC7F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
inline void Slider_3_EnsureProgressElements_m7107F48E30EB68996D4C92E493E94DD0E54307EF (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, int32_t ___0_count, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, int32_t, const RuntimeMethod*))Slider_3_EnsureProgressElements_m7107F48E30EB68996D4C92E493E94DD0E54307EF_gshared)(__this, ___0_count, method);
}
inline void Array_Reverse_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0BF4BAB7341EDF17DC6634DB4CE68255A825C61F (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*))Array_Reverse_TisIl2CppFullySharedGenericAny_m83EA25933C1AD0EA4D4437FDCF807AE9150FF4F4_gshared)(___0_array, method);
}
inline void Slider_3_SetProgressElementTransform_m11526405F5C43CE0650846F63700F1037D8DCEF5 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, float ___1_start, float ___2_end, bool ___3_isHorizontal, const RuntimeMethod* method)
{
	((  void (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, float, float, bool, const RuntimeMethod*))Slider_3_SetProgressElementTransform_m11526405F5C43CE0650846F63700F1037D8DCEF5_gshared)(___0_element, ___1_start, ___2_end, ___3_isHorizontal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019 (float ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 StyleLength_op_Implicit_m895C788B08202125BDDAEE31F2F9D0EE6519D990 (int32_t ___0_keyword, const RuntimeMethod* method) ;
inline void Slider_3_RefreshCustomMarks_m3D288AE6DB4D87B5CEF95BE33498B36DF670758D (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, const RuntimeMethod*))Slider_3_RefreshCustomMarks_m3D288AE6DB4D87B5CEF95BE33498B36DF670758D_gshared)(__this, method);
}
inline bool Slider_3_HasValidStep_mBBC9AF42A9B89E5FBBF411D609F212566AA1E572 (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, const RuntimeMethod*))Slider_3_HasValidStep_mBBC9AF42A9B89E5FBBF411D609F212566AA1E572_gshared)(__this, method);
}
inline void Slider_3_RefreshStepMarks_m92E6F85FB1ACE0496FA13E27B466700598EE9F0F (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, const RuntimeMethod*))Slider_3_RefreshStepMarks_m92E6F85FB1ACE0496FA13E27B466700598EE9F0F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Length__ctor_mFF11DAE709F70F30061EF7BDB3E7B4E18BB827CF (Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* __this, float ___0_value, int32_t ___1_unit, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 StyleLength_op_Implicit_m587FA2633E50FC6BD8F695B35675BBFE179A6E90 (Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___0_v, const RuntimeMethod* method) ;
inline bool Slider_3_get_showMarksLabel_mEF457D126A7FE19693D0DD9247F1690E58194CE4_inline (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, const RuntimeMethod*))Slider_3_get_showMarksLabel_mEF457D126A7FE19693D0DD9247F1690E58194CE4_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextElement__ctor_mB52112242702EEDC8E13BF444AB19E97329B7CE5 (TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* __this, const RuntimeMethod* method) ;
inline RuntimeObject* BaseSlider_2_get_thumbComparer_mFA5827386358B531C8C93665C223668056C19079_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, const RuntimeMethod*))BaseSlider_2_get_thumbComparer_mFA5827386358B531C8C93665C223668056C19079_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
inline String_t* Slider_3_GetTrackDisplayTypeUssClassName_m0CFF96131A634D6A4B7EA870A8347B002B3D7BE8 (int32_t ___0_enumValue, const RuntimeMethod* method)
{
	return ((  String_t* (*) (int32_t, const RuntimeMethod*))Slider_3_GetTrackDisplayTypeUssClassName_m0CFF96131A634D6A4B7EA870A8347B002B3D7BE8_gshared)(___0_enumValue, method);
}
inline String_t* BaseSlider_2_get_formatString_m64EDB5D3E4D541AAD87886AC72E8821942B76127_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, const RuntimeMethod*))BaseSlider_2_get_formatString_m64EDB5D3E4D541AAD87886AC72E8821942B76127_gshared_inline)(__this, method);
}
inline FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033* BaseSlider_2_get_formatFunction_mE64BDBEBC619D3D50D1BBE2CC0691EA5C8ED597A_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method)
{
	return ((  FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033* (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, const RuntimeMethod*))BaseSlider_2_get_formatFunction_mE64BDBEBC619D3D50D1BBE2CC0691EA5C8ED597A_gshared_inline)(__this, method);
}
inline void EventCallback_1__ctor_mBA3BD165CC35A7B018369B8122344E8EB7C7D868 (EventCallback_1_t424C96066075D21342F190671F3D0ED8AB5900D6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventCallback_1_t424C96066075D21342F190671F3D0ED8AB5900D6*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventCallback_1__ctor_m4FA52DD3A2C04411AB70840FB07831BC7AE7A993_gshared)(__this, ___0_object, ___1_method, method);
}
inline bool INotifyValueChangedExtensions_RegisterValueChangedCallback_TisIl2CppFullySharedGenericAny_m50E49B3920DDDB55FB3A9A3E3A3C28B944F17A83 (RuntimeObject* ___0_control, EventCallback_1_t424C96066075D21342F190671F3D0ED8AB5900D6* ___1_callback, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, EventCallback_1_t424C96066075D21342F190671F3D0ED8AB5900D6*, const RuntimeMethod*))INotifyValueChangedExtensions_RegisterValueChangedCallback_TisIl2CppFullySharedGenericAny_m50E49B3920DDDB55FB3A9A3E3A3C28B944F17A83_gshared)(___0_control, ___1_callback, method);
}
inline bool INotifyValueChangedExtensions_UnregisterValueChangedCallback_TisIl2CppFullySharedGenericAny_mCA080B8D2EE1011CBEEC2A62C3582F0FC00717AC (RuntimeObject* ___0_control, EventCallback_1_t424C96066075D21342F190671F3D0ED8AB5900D6* ___1_callback, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, EventCallback_1_t424C96066075D21342F190671F3D0ED8AB5900D6*, const RuntimeMethod*))INotifyValueChangedExtensions_UnregisterValueChangedCallback_TisIl2CppFullySharedGenericAny_mCA080B8D2EE1011CBEEC2A62C3582F0FC00717AC_gshared)(___0_control, ___1_callback, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
inline void ChangeEvent_1_get_newValue_m83811A7602CB9AC9F15F7638C6BF3CE866A941ED_inline (ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))ChangeEvent_1_get_newValue_m83811A7602CB9AC9F15F7638C6BF3CE866A941ED_gshared_inline)((ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3*)__this, il2cppRetVal, method);
}
inline void BaseSlider_2_set_value_mCA4DEFB0DD712279EC029F5BA93A3F9888B178E6 (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseSlider_2_set_value_mCA4DEFB0DD712279EC029F5BA93A3F9888B178E6_gshared)((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, ___0_value, method);
}
inline Il2CppFullySharedGenericStruct* Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, int32_t, const RuntimeMethod*))Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_gshared_inline)(__this, ___0_index, method);
}
inline int32_t Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_gshared_inline)(__this, method);
}
inline void Func_2__ctor_m3B0C0BD3210EC08237EF83CA427548DB92DD41C1 (Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)(__this, ___0_object, ___1_method, method);
}
inline int32_t Slider_3_get_restrictedValues_m4B49225E63D7156F822BDD7C17E278ADBE3FE4D4_inline (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, const RuntimeMethod*))Slider_3_get_restrictedValues_m4B49225E63D7156F822BDD7C17E278ADBE3FE4D4_gshared_inline)(__this, method);
}
inline void BaseSlider_2_FindClosestThumbValue_mCDAAF997419AC6278684BC7CB682C8C9F11D5B74 (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, Il2CppFullySharedGenericStruct ___0_v, int32_t ___1_count, Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF* ___2_predicate, int32_t* ___3_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*, Il2CppFullySharedGenericStruct, int32_t, Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF*, int32_t*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))BaseSlider_2_FindClosestThumbValue_mCDAAF997419AC6278684BC7CB682C8C9F11D5B74_gshared)((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, ___0_v, ___1_count, ___2_predicate, ___3_index, il2cppRetVal, method);
}
inline void Slider_3_RestrictedThumbValue_mAEC435A64252DCABB7CAC3C0A974BC5B5CE2CE5C (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, Il2CppFullySharedGenericStruct ___0_newValue, Il2CppFullySharedGenericStruct ___1_stepValue, int32_t* ___2_stepOrMarkIndex, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, int32_t*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Slider_3_RestrictedThumbValue_mAEC435A64252DCABB7CAC3C0A974BC5B5CE2CE5C_gshared)((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*)__this, ___0_newValue, ___1_stepValue, ___2_stepOrMarkIndex, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingId__ctor_m1193F0EA5249BA3CF38D7299139D6518F906851C (BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E* __this, String_t* ___0_path, const RuntimeMethod* method) ;
inline RuntimeObject* Dictionary_2_get_Comparer_m46CB1D13F7DB369D819F4C2397EAF293292FF2CF (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Comparer_m46CB1D13F7DB369D819F4C2397EAF293292FF2CF_gshared)(__this, method);
}
inline void FrozenDictionary_2__ctor_mA30E63CCE609F2CB0B0DBA8CEBF81443E1822B1A (FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532*, RuntimeObject*, const RuntimeMethod*))FrozenDictionary_2__ctor_mA30E63CCE609F2CB0B0DBA8CEBF81443E1822B1A_gshared)(__this, ___0_comparer, method);
}
inline KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_gshared)(__this, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared)(___0_source, method);
}
inline ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7 (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7_gshared)(__this, method);
}
inline void Enumerator__ctor_m3D2F482254DE4B06E4B482E0A42DCBF30180B7CA (Enumerator_t8EF80EB947F78323C5BEAB098F00F5236A057AB8* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8EF80EB947F78323C5BEAB098F00F5236A057AB8*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))Enumerator__ctor_m3D2F482254DE4B06E4B482E0A42DCBF30180B7CA_gshared)(__this, ___0_keys, ___1_values, method);
}
inline RuntimeObject* FrozenDictionary_2_get_Comparer_m3874268CD9839B437894F50851DCF04394632B0E_inline (FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532*, const RuntimeMethod*))FrozenDictionary_2_get_Comparer_m3874268CD9839B437894F50851DCF04394632B0E_gshared_inline)(__this, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_m3025B6666A254AEDE933EDE04AD66D456C52AD00_inline (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))HashSet_1_get_Comparer_m3025B6666A254AEDE933EDE04AD66D456C52AD00_gshared_inline)(__this, method);
}
inline void FrozenSetInternalBase_2__ctor_m0F48FA325D657ADD9B71D35FDE03EF81A7CA83C3 (FrozenSetInternalBase_2_tD90E9EAB085EBF69420B86C9D951CD4760B72778* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (FrozenSetInternalBase_2_tD90E9EAB085EBF69420B86C9D951CD4760B72778*, RuntimeObject*, const RuntimeMethod*))FrozenSetInternalBase_2__ctor_mD19128BF80089097292C97D66993F7ADC0EFA57F_gshared)(__this, ___0_comparer, method);
}
inline RuntimeObject* FrozenSet_1_get_Comparer_mB3265D335E5104BC225CEFFFED328ACA8FC573D0_inline (FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*, const RuntimeMethod*))FrozenSet_1_get_Comparer_mB3265D335E5104BC225CEFFFED328ACA8FC573D0_gshared_inline)(__this, method);
}
inline void Enumerator__ctor_m387AC31F21D5AB2FB06304034A2536356A191C59 (Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_entries, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))Enumerator__ctor_m387AC31F21D5AB2FB06304034A2536356A191C59_gshared)(__this, ___0_entries, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline)(method);
}
inline void Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m8EE3DB1C1E6B93DE1E6E590D97BC6E937862B9F2 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_items, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m8EE3DB1C1E6B93DE1E6E590D97BC6E937862B9F2_gshared)(___0_keys, ___1_items, method);
}
inline Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290 (const RuntimeMethod* method)
{
	return ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared)(method);
}
inline void FrozenSetInternalBase_2__ctor_m7F3154FBFA54B8DB1BCD11863DF9928AA3CDDD7A (FrozenSetInternalBase_2_t62C159D9357EA79697AE3E6E27DF518340282A45* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (FrozenSetInternalBase_2_t62C159D9357EA79697AE3E6E27DF518340282A45*, RuntimeObject*, const RuntimeMethod*))FrozenSetInternalBase_2__ctor_mD19128BF80089097292C97D66993F7ADC0EFA57F_gshared)(__this, ___0_comparer, method);
}
inline void Array_Sort_TisIl2CppFullySharedGenericAny_m5CAADAB28D2C20F31F2E806FD1C0376C9F580710 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))Array_Sort_TisIl2CppFullySharedGenericAny_m5CAADAB28D2C20F31F2E806FD1C0376C9F580710_gshared)(___0_array, method);
}
inline void FrozenSetInternalBase_2__ctor_m654589B2F2AFCD6CEB1334C1DEBC34B5EB53C317 (FrozenSetInternalBase_2_t1B2D92D358E227A249302318323204E296E8A96C* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (FrozenSetInternalBase_2_t1B2D92D358E227A249302318323204E296E8A96C*, RuntimeObject*, const RuntimeMethod*))FrozenSetInternalBase_2__ctor_mD19128BF80089097292C97D66993F7ADC0EFA57F_gshared)(__this, ___0_comparer, method);
}
inline int32_t SortIndicesComparer_2_Compare_mE7B74FF9C99161C4447EF543B78A336D08096292 (SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E*, int32_t, int32_t, const RuntimeMethod*))SortIndicesComparer_2_Compare_mE7B74FF9C99161C4447EF543B78A336D08096292_gshared)(__this, ___0_x, ___1_y, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForDeferExtensions_ScheduleByRef_TisSegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB_TisIl2CppFullySharedGenericStruct_mB9A8AA44999BBCDD9F426F9998BEE4354299F0B6 (SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB* ___0_jobData, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___1_list, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB*, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1, int32_t, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobParallelForDeferExtensions_ScheduleByRef_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m04D7A7A6BB05035DAE56B266FDB363B0303E38F4_gshared)(___0_jobData, ___1_list, ___2_innerloopBatchCount, ___3_dependsOn, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisSegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642_m53EA87BEF926725B1D52CDF4D22B277A79C16980 (SegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (Il2CppFullySharedGenericStruct, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobExtensions_Schedule_TisIl2CppFullySharedGenericStruct_mF266365A1A83D3A8671F9B001353E6658E321E57_gshared)((Il2CppFullySharedGenericStruct)___0_jobData, ___1_dependsOn, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 SortJobDefer_2_Schedule_mB75384614976E2ECF4F25943615BF38317BE2814 (SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))SortJobDefer_2_Schedule_mB75384614976E2ECF4F25943615BF38317BE2814_gshared)(__this, ___0_inputDeps, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisSegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7_m7560AD0924A79D53D0B49C0EF018405C0AC54602 (SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7 ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (Il2CppFullySharedGenericStruct, int32_t, int32_t, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisIl2CppFullySharedGenericStruct_m364BAC197FCE9C0398886D7A55115738B4B2BDFD_gshared)((Il2CppFullySharedGenericStruct)___0_jobData, ___1_arrayLength, ___2_innerloopBatchCount, ___3_dependsOn, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisSegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B_m38D4A42D0162FF6FF5A0E225ADA0E86E11345A0E (SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (Il2CppFullySharedGenericStruct, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobExtensions_Schedule_TisIl2CppFullySharedGenericStruct_mF266365A1A83D3A8671F9B001353E6658E321E57_gshared)((Il2CppFullySharedGenericStruct)___0_jobData, ___1_dependsOn, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 SortJob_2_Schedule_m998B8D3F60028D49ED6C4FDCD51C0D7DDE0A06D8 (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))SortJob_2_Schedule_m998B8D3F60028D49ED6C4FDCD51C0D7DDE0A06D8_gshared)(__this, ___0_inputDeps, method);
}
inline void SortedDictionary_2__ctor_mFA2F1C62428D2FDD719081256DAA0B3F4877D69F (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232*, RuntimeObject*, const RuntimeMethod*))SortedDictionary_2__ctor_mFA2F1C62428D2FDD719081256DAA0B3F4877D69F_gshared)(__this, ___0_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void KeyValuePairComparer__ctor_mBA29BBC72C5798EF75190B4437A0C0DB87DDC62A (KeyValuePairComparer_t7F43F653B6ADD38382B1A6391C5E184CC3F16337* __this, RuntimeObject* ___0_keyComparer, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePairComparer_t7F43F653B6ADD38382B1A6391C5E184CC3F16337*, RuntimeObject*, const RuntimeMethod*))KeyValuePairComparer__ctor_mBA29BBC72C5798EF75190B4437A0C0DB87DDC62A_gshared)(__this, ___0_keyComparer, method);
}
inline void TreeSet_1__ctor_mDEFC5A681B169B29BBE7EF30EB2D45E16589F992 (TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C*, RuntimeObject*, const RuntimeMethod*))TreeSet_1__ctor_mECC7FC438B99CFE28B54069F42AD38C9CA2655E6_gshared)(__this, ___0_comparer, method);
}
inline bool SortedSet_1_Add_mB0F1DE241E84F0A8DF6EF4A0C2F539D86B1900BE (SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Il2CppFullySharedGenericAny, const RuntimeMethod*))SortedSet_1_Add_mAF89E4EAB2D98CB81C066F6DC2A2C11FF43CC1BC_gshared)((SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, il2cppRetVal, method);
}
inline void Node_get_Item_m1A10AD2408749FCBD75E0A0B120D09FBCC14BA45_inline (Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Node_get_Item_m68FF84117314DB42151562EC40D7DD433F22A81A_gshared_inline)((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)__this, il2cppRetVal, method);
}
inline bool SortedSet_1_Remove_m71F114F8CA7B5280CC4DD5C1DF76FFD4CE63193B (SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Il2CppFullySharedGenericAny, const RuntimeMethod*))SortedSet_1_Remove_m7FF75998DF211EB5A66B2AFE5118C13A3C6A0A74_gshared)((SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, il2cppRetVal, method);
}
inline void Node_set_Item_m165F037D68842D16579CA2595BB532CAC6649145_inline (Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Node_set_Item_mAE94673D67914B814978A88A7AD48410FAFB704C_gshared_inline)((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)__this, (Il2CppFullySharedGenericAny)___0_value, method);
}
inline void SortedSet_1_UpdateVersion_m87EA9BDF0664075ACC15040ABC70165975DE5B22 (SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73* __this, const RuntimeMethod* method)
{
	((  void (*) (SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*, const RuntimeMethod*))SortedSet_1_UpdateVersion_m172929972B25F2EDDF426E8D7D69003E7E001E2C_gshared)(__this, method);
}
inline int32_t SortedSet_1_get_Count_m63287F35980FC7E262CEA798DA49B5117017D220 (SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*, const RuntimeMethod*))SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A_gshared)(__this, method);
}
inline void KeyCollection__ctor_m52E978AD4C7656BD9BE47C5DE851F1F8DADF3A5A (KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41* __this, SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41*, SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232*, const RuntimeMethod*))KeyCollection__ctor_m52E978AD4C7656BD9BE47C5DE851F1F8DADF3A5A_gshared)(__this, ___0_dictionary, method);
}
inline KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41* SortedDictionary_2_get_Keys_m8EAB83A1BFB2EBC1A574F960FD89AEF091CC35D6 (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41* (*) (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232*, const RuntimeMethod*))SortedDictionary_2_get_Keys_m8EAB83A1BFB2EBC1A574F960FD89AEF091CC35D6_gshared)(__this, method);
}
inline void ValueCollection__ctor_m7E60BF0E35BB70C5BA0388E0CAA2D6F72DE54A8F (ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E* __this, SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E*, SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232*, const RuntimeMethod*))ValueCollection__ctor_m7E60BF0E35BB70C5BA0388E0CAA2D6F72DE54A8F_gshared)(__this, ___0_dictionary, method);
}
inline ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E* SortedDictionary_2_get_Values_m171C96BDC47A588120C6585ABED2CC550A28055A (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E* (*) (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232*, const RuntimeMethod*))SortedDictionary_2_get_Values_m171C96BDC47A588120C6585ABED2CC550A28055A_gshared)(__this, method);
}
inline void U3CU3Ec__DisplayClass34_0__ctor_m3774BCBD554B0329AD84B86DC0998FC0890AAB90 (U3CU3Ec__DisplayClass34_0_tA02E84D61A87B1706CC915763144DBF463282B65* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass34_0_tA02E84D61A87B1706CC915763144DBF463282B65*, const RuntimeMethod*))U3CU3Ec__DisplayClass34_0__ctor_m3774BCBD554B0329AD84B86DC0998FC0890AAB90_gshared)(__this, method);
}
inline void TreeWalkPredicate_1__ctor_mF85713508386DE675BB71A6E50D17BCA30EFCF1D (TreeWalkPredicate_1_tCF0B6A96E5A4424F65CE7DD88579E080CAE69463* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (TreeWalkPredicate_1_tCF0B6A96E5A4424F65CE7DD88579E080CAE69463*, RuntimeObject*, intptr_t, const RuntimeMethod*))TreeWalkPredicate_1__ctor_m984A5C401EEC6FA4AD15922857EC2E4ABDF12347_gshared)(__this, ___0_object, ___1_method, method);
}
inline void U3CU3Ec__DisplayClass34_1__ctor_m725AA08A5D90852C5188B62B501E489C78FC7C8D (U3CU3Ec__DisplayClass34_1_t796D3E086B09C5D156D46C42694AD2147D80C3C4* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass34_1_t796D3E086B09C5D156D46C42694AD2147D80C3C4*, const RuntimeMethod*))U3CU3Ec__DisplayClass34_1__ctor_m725AA08A5D90852C5188B62B501E489C78FC7C8D_gshared)(__this, method);
}
inline void SortedSet_1_CopyTo_mDF20617ACDC79D10061CE10156272AD0ADC3E1F9 (SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))SortedSet_1_CopyTo_m34CB5771C13F8F93B145C512B6A2D217CC4B12F9_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Enumerator__ctor_mA347E7F9A4E89648A28432A4CEA2FABA20C4DEEE (Enumerator_t6C2EA3C5E2783C9D331AFD95E98BB5FC8A28C5C4* __this, SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6C2EA3C5E2783C9D331AFD95E98BB5FC8A28C5C4*, SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232*, int32_t, const RuntimeMethod*))Enumerator__ctor_mA347E7F9A4E89648A28432A4CEA2FABA20C4DEEE_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline bool SortedDictionary_2_IsCompatibleKey_m603435A698B78800B58FBECFE5353DE4EFEBE0E1 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))SortedDictionary_2_IsCompatibleKey_m603435A698B78800B58FBECFE5353DE4EFEBE0E1_gshared)(___0_key, method);
}
inline bool SortedDictionary_2_TryGetValue_mE5557EAF42A20477EE9DD9B6654DE9FC7126B2C1 (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))SortedDictionary_2_TryGetValue_mE5557EAF42A20477EE9DD9B6654DE9FC7126B2C1_gshared)((SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232*)__this, ___0_key, ___1_value, method);
}
inline void SortedDictionary_2_set_Item_mDC751F9F41169639062DB90A7E3A24B19D5E201F (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))SortedDictionary_2_set_Item_mDC751F9F41169639062DB90A7E3A24B19D5E201F_gshared)((SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232*)__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, RuntimeObject* ___2_p2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
inline void SortedDictionary_2_Add_mA3BDBB8DD7D25776DF9E26E035F2164AEDF0B97E (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))SortedDictionary_2_Add_mA3BDBB8DD7D25776DF9E26E035F2164AEDF0B97E_gshared)((SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232*)__this, ___0_key, ___1_value, method);
}
inline bool SortedDictionary_2_ContainsKey_m56C9790C11A918372279FC513DF233544CA23829 (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232*, Il2CppFullySharedGenericAny, const RuntimeMethod*))SortedDictionary_2_ContainsKey_m56C9790C11A918372279FC513DF233544CA23829_gshared)((SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232*)__this, ___0_key, method);
}
inline bool SortedDictionary_2_Remove_mD90CF2DB5271EDB847D9B41AB0A2DECB2F91489D (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232*, Il2CppFullySharedGenericAny, const RuntimeMethod*))SortedDictionary_2_Remove_mD90CF2DB5271EDB847D9B41AB0A2DECB2F91489D_gshared)((SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232*)__this, ___0_key, method);
}
inline void Requires_NotNull_TisSortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA_m0C7F573782A844360AE48864A16BE9931E430057 (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Math_Max_m12FB4E1302123ADB441E3A7BDF52E8404DDE53A2 (uint8_t ___0_val1, uint8_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_m0C82CE1057B58285623A6E8C7DDE2774C146A84E (KeyValuePair_2_tD560F959C416C02DF18D049D3CEE276352F633EF* __this, int32_t ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny)&___0_key, ___1_value, method);
}
inline void U3Cget_ValuesU3Ed__26__ctor_mD70D70552D62D68793D8529E778BED3F9707F0F2 (U3Cget_ValuesU3Ed__26_t8912FCF68691584B3E413E86C68EFCD26FDB8FDC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3Cget_ValuesU3Ed__26_t8912FCF68691584B3E413E86C68EFCD26FDB8FDC*, int32_t, const RuntimeMethod*))U3Cget_ValuesU3Ed__26__ctor_mD70D70552D62D68793D8529E778BED3F9707F0F2_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void Enumerator__ctor_mDD2B3B02D2DF85F1A79FF5F335ECEE80071842F1 (Enumerator_t905B1D6DCBEB9FFA0482DFED57078825B5E3E1DC* __this, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_root, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t905B1D6DCBEB9FFA0482DFED57078825B5E3E1DC*, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, const RuntimeMethod*))Enumerator__ctor_mDD2B3B02D2DF85F1A79FF5F335ECEE80071842F1_gshared)(__this, ___0_root, method);
}
inline void Requires_NotNull_TisIEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122_mA3F3C9A20AC4B85A865AB750DB5C26DECF6620F0 (RuntimeObject* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Requires_NotNull_TisIl2CppSharedGenericObject_m51F1FCF446AA41C2BD14D2C9B8C843334027E12D_gshared)(___0_value, ___1_parameterName, method);
}
inline SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_SetOrAdd_m2C2D829D7CBEB15EE6DCB7B6686913F34B1FAFA7 (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, int32_t ___0_key, Il2CppFullySharedGenericAny ___1_value, RuntimeObject* ___2_valueComparer, bool ___3_overwriteExistingValue, bool* ___4_replacedExistingValue, bool* ___5_mutated, const RuntimeMethod* method)
{
	return ((  SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* (*) (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, int32_t, Il2CppFullySharedGenericAny, RuntimeObject*, bool, bool*, bool*, const RuntimeMethod*))SortedInt32KeyNode_1_SetOrAdd_m2C2D829D7CBEB15EE6DCB7B6686913F34B1FAFA7_gshared)((SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)__this, ___0_key, ___1_value, ___2_valueComparer, ___3_overwriteExistingValue, ___4_replacedExistingValue, ___5_mutated, method);
}
inline SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_RemoveRecursive_m3A254BE428AEC6122E3524C149C4DFB799C21FE5 (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, int32_t ___0_key, bool* ___1_mutated, const RuntimeMethod* method)
{
	return ((  SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* (*) (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, int32_t, bool*, const RuntimeMethod*))SortedInt32KeyNode_1_RemoveRecursive_m3A254BE428AEC6122E3524C149C4DFB799C21FE5_gshared)(__this, ___0_key, ___1_mutated, method);
}
inline bool SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, const RuntimeMethod*))SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D_gshared)(__this, method);
}
inline void Action_1_Invoke_mA015FB276515B04B49C843B324F382F5D260189C_inline (Action_1_t6C09FBBFF7948D096D883948A5B816A3035797DA* __this, KeyValuePair_2_tD560F959C416C02DF18D049D3CEE276352F633EF ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
inline void SortedInt32KeyNode_1_Freeze_m24B7BF41A648151B92774C3DA4C0908BB2D4E470 (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, Action_1_t6C09FBBFF7948D096D883948A5B816A3035797DA* ___0_freezeAction, const RuntimeMethod* method)
{
	((  void (*) (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, Action_1_t6C09FBBFF7948D096D883948A5B816A3035797DA*, const RuntimeMethod*))SortedInt32KeyNode_1_Freeze_m24B7BF41A648151B92774C3DA4C0908BB2D4E470_gshared)(__this, ___0_freezeAction, method);
}
inline SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_Mutate_m7542A80E4817C87A311CFAD9D5A5B7EF9B93003D (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_left, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___1_right, const RuntimeMethod* method)
{
	return ((  SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* (*) (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, const RuntimeMethod*))SortedInt32KeyNode_1_Mutate_m7542A80E4817C87A311CFAD9D5A5B7EF9B93003D_gshared)(__this, ___0_left, ___1_right, method);
}
inline SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_RotateRight_m874236017303489BE43BD7B7AA73BD7BCB6FD5E0 (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method)
{
	return ((  SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* (*) (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, const RuntimeMethod*))SortedInt32KeyNode_1_RotateRight_m874236017303489BE43BD7B7AA73BD7BCB6FD5E0_gshared)(___0_tree, method);
}
inline SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_RotateLeft_m6EEBD6ECD53AEFFBE60EA5CB6FB2E29E5FFF3648 (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method)
{
	return ((  SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* (*) (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, const RuntimeMethod*))SortedInt32KeyNode_1_RotateLeft_m6EEBD6ECD53AEFFBE60EA5CB6FB2E29E5FFF3648_gshared)(___0_tree, method);
}
inline int32_t SortedInt32KeyNode_1_Balance_mA08EAA877DE4CE03CF1799DA0C28A2A03FFCB5AD (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, const RuntimeMethod*))SortedInt32KeyNode_1_Balance_mA08EAA877DE4CE03CF1799DA0C28A2A03FFCB5AD_gshared)(___0_tree, method);
}
inline bool SortedInt32KeyNode_1_IsRightHeavy_mC64DB1CD1C3AA1E8BF277EFA87F0A0BBC0C1490F (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, const RuntimeMethod*))SortedInt32KeyNode_1_IsRightHeavy_mC64DB1CD1C3AA1E8BF277EFA87F0A0BBC0C1490F_gshared)(___0_tree, method);
}
inline SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_DoubleLeft_mC18651981E89C3914CC88B7B179F49AB4311B824 (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method)
{
	return ((  SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* (*) (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, const RuntimeMethod*))SortedInt32KeyNode_1_DoubleLeft_mC18651981E89C3914CC88B7B179F49AB4311B824_gshared)(___0_tree, method);
}
inline bool SortedInt32KeyNode_1_IsLeftHeavy_mEF8CAE4DD7848255911253E428F8B704527FBEDA (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, const RuntimeMethod*))SortedInt32KeyNode_1_IsLeftHeavy_mEF8CAE4DD7848255911253E428F8B704527FBEDA_gshared)(___0_tree, method);
}
inline SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_DoubleRight_m060C5B4EDAD9856D23D3E0CDEBBF99AB9E20F760 (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method)
{
	return ((  SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* (*) (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, const RuntimeMethod*))SortedInt32KeyNode_1_DoubleRight_m060C5B4EDAD9856D23D3E0CDEBBF99AB9E20F760_gshared)(___0_tree, method);
}
inline void SortedInt32KeyNode_1__ctor_m3801A76E6E088A71D4EDFD7AD126EE8D57C9BC23 (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, int32_t ___0_key, Il2CppFullySharedGenericAny ___1_value, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___2_left, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___3_right, bool ___4_frozen, const RuntimeMethod* method)
{
	((  void (*) (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, int32_t, Il2CppFullySharedGenericAny, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, bool, const RuntimeMethod*))SortedInt32KeyNode_1__ctor_m3801A76E6E088A71D4EDFD7AD126EE8D57C9BC23_gshared)((SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)__this, ___0_key, ___1_value, ___2_left, ___3_right, ___4_frozen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_DuplicateKey_mAA6D35BD4D69F00D8F742656987A55B4D02C92C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m15C2107D9AC3B0DBA15121DB9A582AB29DCAFDA4 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_MakeBalanced_mC7343BE159B83C9E84064A1CC1D441B6138FA9A9 (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method)
{
	return ((  SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* (*) (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, const RuntimeMethod*))SortedInt32KeyNode_1_MakeBalanced_mC7343BE159B83C9E84064A1CC1D441B6138FA9A9_gshared)(___0_tree, method);
}
inline SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_Remove_m7B4DB9DAC4D8913F364CBEF9926C8B4EF58CDE5B (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, int32_t ___0_key, bool* ___1_mutated, const RuntimeMethod* method)
{
	return ((  SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* (*) (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, int32_t, bool*, const RuntimeMethod*))SortedInt32KeyNode_1_Remove_m7B4DB9DAC4D8913F364CBEF9926C8B4EF58CDE5B_gshared)(__this, ___0_key, ___1_mutated, method);
}
inline void SortedInt32KeyNode_1__ctor_mF4ECA4462FE8AF102CCF0AA88FD3B3476964020A (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, const RuntimeMethod* method)
{
	((  void (*) (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*, const RuntimeMethod*))SortedInt32KeyNode_1__ctor_mF4ECA4462FE8AF102CCF0AA88FD3B3476964020A_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline int32_t SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_gshared_inline)(__this, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Slider_3_get_showMarks_m2152347F76606575E315758D1CF4B2775566C864_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28834));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28835));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28836));
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),22));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_set_showMarks_mFFFC22EDC7DCE3CD551DD669BE498E91894191A1_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28837));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28838));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28839));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28840));
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),22));
		bool L_1 = ___0_value;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28841));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28842));
		goto IL_0018;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28843));
		bool L_3 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28844));
		Slider_3_SetShowMarks_m26D8927A87530B7768301799A74A5F28FDC66CCC(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28844));
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28845));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Slider_3_get_showMarksLabel_mEF457D126A7FE19693D0DD9247F1690E58194CE4_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28846));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28847));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28848));
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),23));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_set_showMarksLabel_m429DF6FD56B8E59A80529BC3858B2EE8150E3C37_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28849));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28850));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28851));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28852));
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),23));
		bool L_1 = ___0_value;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28853));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28854));
		goto IL_0018;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28855));
		bool L_3 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28856));
		Slider_3_SetShowMarksLabel_m1E0E6D73299447C73CB3ABC75DDC01DEB479F83D(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28856));
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28857));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Slider_3_get_customMarks_m664FFA3FA99FF1467C12F18F039A54C4C98F6D45_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28858));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28859));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28860));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_set_customMarks_m3695E8A58F9CFC62E14114E49BBD85C260E75BCB_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28861));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28862));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28863));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28864));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24));
		RuntimeObject* L_1 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28865));
		bool L_2;
		L_2 = EnumerableExtensions_SequenceEqual_TisSliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E_m235BD8EFEB7F17C6090F55BC7473C2B5F39EF5D6((RuntimeObject*)L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28865));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28866));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28867));
		goto IL_001b;
	}

IL_0013:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28868));
		RuntimeObject* L_4 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28869));
		Slider_3_SetCustomMarks_m96016CD27E61AC9289C6C16615954ABE6E7F9522(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28869));
	}

IL_001b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28870));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Slider_3_get_displayValueLabel_mC7B3FB713242AB5800897C0AFEC35D49B73C9247_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28871));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28872));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28873));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),25));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_set_displayValueLabel_m69A2932538BA08AA6AF94FFF94C4033E34AB2E76_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28874));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28875));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28876));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28877));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),25));
		int32_t L_1 = ___0_value;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28878));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28879));
		goto IL_0018;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28880));
		int32_t L_3 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28881));
		Slider_3_SetDisplayValueLabel_m3B166610B5092C0B7FB72EE50968911D1700C11A(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28881));
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28882));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Slider_3_get_restrictedValues_m4B49225E63D7156F822BDD7C17E278ADBE3FE4D4_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28883));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28884));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28885));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),26));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_set_restrictedValues_m3869E8AF9D00A9B0BE516C308032D6B8B70C9E91_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28886));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28887));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28888));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28889));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),26));
		int32_t L_1 = ___0_value;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28890));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28891));
		goto IL_0018;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28892));
		int32_t L_3 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28893));
		Slider_3_SetRestrictedValues_m6732FE692BE6FAA9B3D8629529AA4C67CB54732C(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28893));
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28894));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* Slider_3_get_scale_m060644BBA05E2BAB0FFBD2F4702D293D065C522B_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28895));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28896));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28897));
		ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* L_0 = *(ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),27));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_set_scale_mFF6BD7BE3FCA9FE37AAD2820AA333AEAFDA51F99_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28898));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28899));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28900));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28901));
		ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* L_0 = *(ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),27));
		ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* L_1 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28902));
		bool L_2;
		L_2 = Delegate_op_Equality_m8B96593B665536587FFD27DE233442C075971C32((Delegate_t*)L_0, (Delegate_t*)L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28902));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28903));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28904));
		goto IL_001b;
	}

IL_0013:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28905));
		ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* L_4 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28906));
		Slider_3_SetScale_m942423AEBA78CD85FCC776804B094D53ED9E9717(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28906));
	}

IL_001b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28907));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Slider_3_get_track_mAF3DF135E7BC7B0332D0D3293699CC723D3DCEFE_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28908));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28909));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28910));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_set_track_m86003F5CA579C8D4C80DDA56EA3483FDB56985C8_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28911));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28912));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28913));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28914));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),28));
		int32_t L_1 = ___0_value;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28915));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28916));
		goto IL_0018;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28917));
		int32_t L_3 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28918));
		Slider_3_SetTrackDisplayMode_m650AD7630A57BB3D2701A40F036F36B109239053(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28918));
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28919));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Slider_3_get_showInputField_m8D56D280A1391ACACF495E9736235EB5E7A71F2A_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28920));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28921));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28922));
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),29));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_set_showInputField_mA5A32279F09D6B788BA492EDC68DD059566F5A9D_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28923));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28924));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28925));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28926));
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),29));
		bool L_1 = ___0_value;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28927));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28928));
		goto IL_0018;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28929));
		bool L_3 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28930));
		Slider_3_SetShowInputField_mAFC115120666BC8188C7F482EDEDEF868F9272AC(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28930));
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28931));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Slider_3_get_contentContainer_mA57BD9E2399DEF32A9E4CCAB633A980915B2ABBE_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28932));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28933));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28934));
		return (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3__ctor_m96A75AC72215A93217A61BD02B5AF6E84BA5816C_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackEventHandler_RegisterCallback_TisKeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C_m046581E97BE6F7CECB84314566EB164BC15C9A66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallback_1_tF213A6C7DEAE29A9970B73DB52E8778214E5CD9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementExtensionsBridge_t6194D94D4106340FC8758B3B1FC12CB7C6BBF8C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28130BDD1CD6621C2A10526CF9E1BCF988FD05A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E27DC11166A1DF4403DBB003AEBE0EEF677B34E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77DABB39995B17E24355BAB420FEF3583991DC43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AD6187FA81CC6A339196395E123DD1BA96E49A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral945B451469256760A68A4DD6010313804FCAADE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1E40CBF68D0DAA33F52ED0860663C8FFA82B43F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2313879D6EB4BED1B7E38401344DF45C1F11C43);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericStruct L_49 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_50 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	memset(V_1, 0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28935));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28936));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28937));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28938));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		BaseSlider_2__ctor_m0B15B365448FF7716334A239AEE9BFAEE86E389D((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28938));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28939));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28940));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28941));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this, _stringLiteralA1E40CBF68D0DAA33F52ED0860663C8FFA82B43F, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28941));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28942));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28943));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this);
		VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this, (int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28943));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28944));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28945));
		NullCheck((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)__this);
		VirtualActionInvoker1< bool >::Invoke(21, (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)__this, (bool)1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28945));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28946));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28947));
		il2cpp_codegen_runtime_class_init_inline(VisualElementExtensionsBridge_t6194D94D4106340FC8758B3B1FC12CB7C6BBF8C8_il2cpp_TypeInfo_var);
		VisualElementExtensionsBridge_SetIsCompositeRoot_mB26B975C697A8A65C35A2DF1080942D8E18DFD6F((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this, (bool)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28947));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28948));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28949));
		VisualElementExtensionsBridge_SetExcludeFromFocusRing_mFA8C05137AEDB7355D2C5FBE18029725733A10F7((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this, (bool)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28949));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28950));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28951));
		NullCheck((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)__this);
		Focusable_set_delegatesFocus_mC691C4199C88BEF0C55A7F7FD2C6ADDD00402D6F((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)__this, (bool)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28951));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28952));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28953));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)il2cpp_codegen_object_new(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28953));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28954));
		NullCheck(L_1);
		VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(L_1, _stringLiteral77DABB39995B17E24355BAB420FEF3583991DC43, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28954));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = L_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28955));
		NullCheck((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)L_2);
		VirtualActionInvoker1< bool >::Invoke(21, (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)L_2, (bool)1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28955));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3 = L_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28956));
		NullCheck(L_3);
		VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(L_3, (int32_t)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28956));
		il2cpp_codegen_write_instance_field_data<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),30), L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28957));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),30));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28958));
		VisualElementExtensionsBridge_SetIsCompositeRoot_mB26B975C697A8A65C35A2DF1080942D8E18DFD6F(L_4, (bool)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28958));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28959));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),30));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28960));
		VisualElementExtensionsBridge_SetExcludeFromFocusRing_mFA8C05137AEDB7355D2C5FBE18029725733A10F7(L_5, (bool)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28960));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28961));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),30));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28962));
		NullCheck((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)L_6);
		Focusable_set_delegatesFocus_mC691C4199C88BEF0C55A7F7FD2C6ADDD00402D6F((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)L_6, (bool)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28962));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28963));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),30));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28964));
		NullCheck(L_7);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(L_7, _stringLiteral77DABB39995B17E24355BAB420FEF3583991DC43, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28964));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28965));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28966));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_8;
		L_8 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28966));
		V_0 = L_8;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),30));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28967));
		Hierarchy_Add_mDDEF4932C9E9FC302755C45A9F7966AEEBC26648((&V_0), L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28967));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28968));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28969));
		Il2CppSharedGenericObject* L_10;
		L_10 = Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28969));
		il2cpp_codegen_write_instance_field_data<Il2CppSharedGenericObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),35), L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28970));
		Il2CppSharedGenericObject* L_11 = *(Il2CppSharedGenericObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),35));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28971));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_11);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_11, _stringLiteral28130BDD1CD6621C2A10526CF9E1BCF988FD05A2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28971));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28972));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28973));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)il2cpp_codegen_object_new(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28973));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = L_12;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28974));
		NullCheck(L_13);
		VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(L_13, _stringLiteral4E27DC11166A1DF4403DBB003AEBE0EEF677B34E, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28974));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_14 = L_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28975));
		NullCheck(L_14);
		VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(L_14, (int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28975));
		il2cpp_codegen_write_instance_field_data<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),31), L_14);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28976));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),31));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28977));
		NullCheck(L_15);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(L_15, _stringLiteral4E27DC11166A1DF4403DBB003AEBE0EEF677B34E, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28977));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28978));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),30));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_17 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),31));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28979));
		NullCheck(L_16);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_16, L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28979));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28980));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28981));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)il2cpp_codegen_object_new(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28981));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_19 = L_18;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28982));
		NullCheck(L_19);
		VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(L_19, _stringLiteralB2313879D6EB4BED1B7E38401344DF45C1F11C43, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28982));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20 = L_19;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28983));
		NullCheck(L_20);
		VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(L_20, (int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28983));
		il2cpp_codegen_write_instance_field_data<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),32), L_20);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28984));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_21 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),32));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28985));
		NullCheck(L_21);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(L_21, _stringLiteralB2313879D6EB4BED1B7E38401344DF45C1F11C43, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28985));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28986));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_22 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),30));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_23 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),32));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28987));
		NullCheck(L_22);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_22, L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28987));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28988));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28989));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)il2cpp_codegen_object_new(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(L_24, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28989));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_25 = L_24;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28990));
		NullCheck(L_25);
		VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(L_25, _stringLiteral945B451469256760A68A4DD6010313804FCAADE2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28990));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_26 = L_25;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28991));
		NullCheck(L_26);
		VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(L_26, (int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28991));
		il2cpp_codegen_write_instance_field_data<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),33), L_26);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28992));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_27 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),33));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28993));
		NullCheck(L_27);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(L_27, _stringLiteral945B451469256760A68A4DD6010313804FCAADE2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28993));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28994));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_28 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),30));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_29 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),33));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28995));
		NullCheck(L_28);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_28, L_29, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28995));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28996));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28997));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_30 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)il2cpp_codegen_object_new(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(L_30, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28997));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_31 = L_30;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28998));
		NullCheck(L_31);
		VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(L_31, _stringLiteral7AD6187FA81CC6A339196395E123DD1BA96E49A3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28998));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_32 = L_31;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28999));
		NullCheck(L_32);
		VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(L_32, (int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28999));
		il2cpp_codegen_write_instance_field_data<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),34), L_32);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29000));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_33 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),34));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_34 = L_33;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29001));
		NullCheck(L_34);
		int32_t L_35;
		L_35 = VisualElement_get_usageHints_mA29803CA9342027B81EBC54C1CB6B92D635153BF(L_34, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29001));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29002));
		NullCheck(L_34);
		VisualElement_set_usageHints_mD317223075C8C708C1DB66CF90E81C5F9DE4C5B0(L_34, (int32_t)((int32_t)((int32_t)L_35|2)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29002));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29003));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_36 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),34));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29004));
		NullCheck(L_36);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(L_36, _stringLiteral7AD6187FA81CC6A339196395E123DD1BA96E49A3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29004));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29005));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_37 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),30));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_38 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),34));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29006));
		NullCheck(L_37);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_37, L_38, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29006));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29007));
		void* L_39 = (void*)GetVirtualMethodInfo((RuntimeObject*)__this, 222);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29008));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_40 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_40, (RuntimeObject*)__this, (intptr_t)(L_39), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29008));
		void* L_41 = (void*)GetVirtualMethodInfo((RuntimeObject*)__this, 218);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29009));
		Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D* L_42 = (Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D*)il2cpp_codegen_object_new(Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D_il2cpp_TypeInfo_var);
		Action_1__ctor_mBB81975E33A229FDB6FAA0BD2039BD7D8BD95ED0(L_42, (RuntimeObject*)__this, (intptr_t)(L_41), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29009));
		void* L_43 = (void*)GetVirtualMethodInfo((RuntimeObject*)__this, 216);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29010));
		Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D* L_44 = (Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D*)il2cpp_codegen_object_new(Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D_il2cpp_TypeInfo_var);
		Action_1__ctor_mBB81975E33A229FDB6FAA0BD2039BD7D8BD95ED0(L_44, (RuntimeObject*)__this, (intptr_t)(L_43), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29010));
		void* L_45 = (void*)GetVirtualMethodInfo((RuntimeObject*)__this, 217);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29011));
		Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D* L_46 = (Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D*)il2cpp_codegen_object_new(Action_1_t2EA4DC93AD21325A6ABEA1A25F0BB2D38811309D_il2cpp_TypeInfo_var);
		Action_1__ctor_mBB81975E33A229FDB6FAA0BD2039BD7D8BD95ED0(L_46, (RuntimeObject*)__this, (intptr_t)(L_45), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29011));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29012));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_47 = (Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44*)il2cpp_codegen_object_new(Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44_il2cpp_TypeInfo_var);
		Draggable__ctor_mAD8C6C3C2630FBE20950EF2739CCCE44F2034BF9(L_47, L_40, L_42, L_44, L_46, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29012));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_48 = L_47;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29013));
		NullCheck(L_48);
		Draggable_set_dragDirection_mFE1245A5A09AE6472B97A84FC2AC3301E867F9EC_inline(L_48, (int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29013));
		il2cpp_codegen_write_instance_field_data<Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),11), L_48);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29014));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29015));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_set_orientation_m96EF324815D9303E04A1279D90037787CEF49927((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29015));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29016));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29017));
		Slider_3_SetShowMarks_m26D8927A87530B7768301799A74A5F28FDC66CCC(__this, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29017));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29018));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29019));
		Slider_3_SetCustomMarks_m96016CD27E61AC9289C6C16615954ABE6E7F9522(__this, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29019));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29020));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29021));
		Slider_3_SetDisplayValueLabel_m3B166610B5092C0B7FB72EE50968911D1700C11A(__this, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29021));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29022));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_1, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(L_49, V_1, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29023));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericStruct >::Invoke(209, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, L_49);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29023));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29024));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_1, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(L_50, V_1, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29025));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericStruct >::Invoke(210, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, L_50);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29025));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29026));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29027));
		Slider_3_SetRestrictedValues_m6732FE692BE6FAA9B3D8629529AA4C67CB54732C(__this, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29027));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29028));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29029));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		VirtualActionInvoker1< bool >::Invoke(211, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (bool)0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29029));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29030));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29031));
		Slider_3_SetScale_m942423AEBA78CD85FCC776804B094D53ED9E9717(__this, (ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29031));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29032));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_51 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),30));
		void* L_52 = (void*)GetVirtualMethodInfo((RuntimeObject*)__this, 221);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29033));
		EventCallback_1_tF213A6C7DEAE29A9970B73DB52E8778214E5CD9C* L_53 = (EventCallback_1_tF213A6C7DEAE29A9970B73DB52E8778214E5CD9C*)il2cpp_codegen_object_new(EventCallback_1_tF213A6C7DEAE29A9970B73DB52E8778214E5CD9C_il2cpp_TypeInfo_var);
		EventCallback_1__ctor_m9784A8620A12F32140DB764C2DAC0CD4AE9A91CF(L_53, (RuntimeObject*)__this, (intptr_t)(L_52), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29033));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29034));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_51);
		CallbackEventHandler_RegisterCallback_TisKeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C_m046581E97BE6F7CECB84314566EB164BC15C9A66((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_51, L_53, (int32_t)0, CallbackEventHandler_RegisterCallback_TisKeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C_m046581E97BE6F7CECB84314566EB164BC15C9A66_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29034));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29035));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_54 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),30));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_55 = *(Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),11));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29036));
		VisualElementExtensions_AddManipulator_m3579CA75D8F76245DC3B7C9F5FCB9B769D69E27D(L_54, (RuntimeObject*)L_55, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29036));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29037));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_KeyDecrement_m3627C42C1B47F8CAE6BEC13540D3BB2AFB93E5AA_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, Il2CppFullySharedGenericStruct ___0_baseValue, Il2CppFullySharedGenericStruct ___1_stepValue, KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C* ___2_evt, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyboardEventBase_1_get_ctrlKey_m1AC16CE6BAF7B8D25F4583B1E6A2A58F1F135FDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_16 = L_2;
	const Il2CppFullySharedGenericStruct L_19 = L_2;
	const Il2CppFullySharedGenericStruct L_22 = L_2;
	const Il2CppFullySharedGenericStruct L_23 = L_2;
	const Il2CppFullySharedGenericStruct L_26 = L_2;
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_20 = L_3;
	const Il2CppFullySharedGenericStruct L_24 = L_3;
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_21 = L_6;
	const Il2CppFullySharedGenericStruct L_25 = L_6;
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const uint32_t SizeOf_SliderMark_1_tB8F6A0BAA3B88EF293C6C6578230065BEF6EADE4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31));
	const SliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E L_15 = alloca(SizeOf_SliderMark_1_tB8F6A0BAA3B88EF293C6C6578230065BEF6EADE4);
	bool V_0 = false;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	memset(V_1, 0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	int32_t V_2 = 0;
	bool V_3 = false;
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	memset(V_4, 0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23)) ? ___0_baseValue : &___0_baseValue), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23)) ? ___1_stepValue : &___1_stepValue), (&___2_evt));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_1, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29038));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29039));
	Il2CppFullySharedGenericStruct G_B5_0 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	memset(G_B5_0, 0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29040));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29041));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),26));
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29042));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29043));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29044));
		il2cpp_codegen_memcpy(L_2, ___0_baseValue, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(L_3, ___1_stepValue, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C* L_4 = ___2_evt;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29045));
		NullCheck((KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA*)L_4);
		bool L_5;
		L_5 = KeyboardEventBase_1_get_ctrlKey_m1AC16CE6BAF7B8D25F4583B1E6A2A58F1F135FDC((KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA*)L_4, KeyboardEventBase_1_get_ctrlKey_m1AC16CE6BAF7B8D25F4583B1E6A2A58F1F135FDC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29045));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29046));
		Slider_3_GetRestrictedThumbValue_mB8DD2F56997D87F8B5DFA1B8E4BF274BD9BB1DB0(__this, il2cpp_codegen_memcpy(L_6, L_2, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3), il2cpp_codegen_memcpy(L_7, L_3, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3), L_5, (&V_2), (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29046));
		il2cpp_codegen_memcpy(V_1, L_8, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29047));
		int32_t L_9 = V_2;
		V_3 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29048));
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0069;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29049));
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),26));
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_12 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24));
		int32_t L_13 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29050));
		int32_t L_14;
		L_14 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(0, ((int32_t)il2cpp_codegen_subtract(L_13, 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29050));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29051));
		NullCheck(L_12);
		InterfaceActionInvoker2Invoker< int32_t, SliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_12, L_14, (SliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E*)L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29051));
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),0)), SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(G_B5_0, L_16, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		goto IL_0065;
	}

IL_004f:
	{
		int32_t L_17 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29052));
		int32_t L_18;
		L_18 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(0, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29052));
		il2cpp_codegen_memcpy(L_19, ___1_stepValue, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29053));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (Il2CppFullySharedGenericStruct*)L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29053));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29054));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		VirtualActionInvoker4Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(237, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, L_18, L_19, L_20, (Il2CppFullySharedGenericStruct*)L_21);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29054));
		il2cpp_codegen_memcpy(G_B5_0, L_21, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	}

IL_0065:
	{
		il2cpp_codegen_memcpy(V_4, G_B5_0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		goto IL_007b;
	}

IL_0069:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29055));
		il2cpp_codegen_memcpy(L_22, V_1, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(V_4, L_22, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		goto IL_007b;
	}

IL_006e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29056));
		il2cpp_codegen_memcpy(L_23, ___1_stepValue, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(L_24, ___0_baseValue, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29057));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		VirtualActionInvoker4Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(237, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (-1), L_23, L_24, (Il2CppFullySharedGenericStruct*)L_25);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29057));
		il2cpp_codegen_memcpy(V_4, L_25, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		goto IL_007b;
	}

IL_007b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29058));
		il2cpp_codegen_memcpy(L_26, V_4, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_26, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_KeyIncrement_m506A3F3D3AB8116527896621B36B40F25E8D3CE8_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, Il2CppFullySharedGenericStruct ___0_baseValue, Il2CppFullySharedGenericStruct ___1_stepValue, KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C* ___2_evt, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyboardEventBase_1_get_ctrlKey_m1AC16CE6BAF7B8D25F4583B1E6A2A58F1F135FDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_18 = L_2;
	const Il2CppFullySharedGenericStruct L_20 = L_2;
	const Il2CppFullySharedGenericStruct L_23 = L_2;
	const Il2CppFullySharedGenericStruct L_24 = L_2;
	const Il2CppFullySharedGenericStruct L_27 = L_2;
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_21 = L_3;
	const Il2CppFullySharedGenericStruct L_25 = L_3;
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_22 = L_6;
	const Il2CppFullySharedGenericStruct L_26 = L_6;
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const uint32_t SizeOf_SliderMark_1_tB8F6A0BAA3B88EF293C6C6578230065BEF6EADE4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31));
	const SliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E L_17 = alloca(SizeOf_SliderMark_1_tB8F6A0BAA3B88EF293C6C6578230065BEF6EADE4);
	bool V_0 = false;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	memset(V_1, 0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	int32_t V_2 = 0;
	bool V_3 = false;
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	memset(V_4, 0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23)) ? ___0_baseValue : &___0_baseValue), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23)) ? ___1_stepValue : &___1_stepValue), (&___2_evt));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_1, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29059));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29060));
	Il2CppFullySharedGenericStruct G_B5_0 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	memset(G_B5_0, 0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29061));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29062));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),26));
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29063));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0074;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29064));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29065));
		il2cpp_codegen_memcpy(L_2, ___0_baseValue, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(L_3, ___1_stepValue, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		KeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C* L_4 = ___2_evt;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29066));
		NullCheck((KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA*)L_4);
		bool L_5;
		L_5 = KeyboardEventBase_1_get_ctrlKey_m1AC16CE6BAF7B8D25F4583B1E6A2A58F1F135FDC((KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA*)L_4, KeyboardEventBase_1_get_ctrlKey_m1AC16CE6BAF7B8D25F4583B1E6A2A58F1F135FDC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29066));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29067));
		Slider_3_GetRestrictedThumbValue_mB8DD2F56997D87F8B5DFA1B8E4BF274BD9BB1DB0(__this, il2cpp_codegen_memcpy(L_6, L_2, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3), il2cpp_codegen_memcpy(L_7, L_3, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3), L_5, (&V_2), (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29067));
		il2cpp_codegen_memcpy(V_1, L_8, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29068));
		int32_t L_9 = V_2;
		V_3 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29069));
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29070));
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),26));
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_12 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24));
		RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29071));
		NullCheck((RuntimeObject*)L_13);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 34), (RuntimeObject*)L_13);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29071));
		int32_t L_15 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29072));
		int32_t L_16;
		L_16 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(((int32_t)il2cpp_codegen_subtract(L_14, 1)), ((int32_t)il2cpp_codegen_add(L_15, 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29072));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29073));
		NullCheck(L_12);
		InterfaceActionInvoker2Invoker< int32_t, SliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_12, L_16, (SliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E*)L_17);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29073));
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),0)), SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(G_B5_0, L_18, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		goto IL_006b;
	}

IL_005b:
	{
		int32_t L_19 = V_2;
		il2cpp_codegen_memcpy(L_20, ___1_stepValue, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29074));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (Il2CppFullySharedGenericStruct*)L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29074));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29075));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		VirtualActionInvoker4Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(237, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, ((int32_t)il2cpp_codegen_add(L_19, 1)), L_20, L_21, (Il2CppFullySharedGenericStruct*)L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29075));
		il2cpp_codegen_memcpy(G_B5_0, L_22, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	}

IL_006b:
	{
		il2cpp_codegen_memcpy(V_4, G_B5_0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		goto IL_0081;
	}

IL_006f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29076));
		il2cpp_codegen_memcpy(L_23, V_1, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(V_4, L_23, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		goto IL_0081;
	}

IL_0074:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29077));
		il2cpp_codegen_memcpy(L_24, ___1_stepValue, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(L_25, ___0_baseValue, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29078));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		VirtualActionInvoker4Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(237, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, 1, L_24, L_25, (Il2CppFullySharedGenericStruct*)L_26);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29078));
		il2cpp_codegen_memcpy(V_4, L_26, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		goto IL_0081;
	}

IL_0081:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29079));
		il2cpp_codegen_memcpy(L_27, V_4, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_27, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Slider_3_GetTrackElement_m51A90CC9F0EB08439069B7FDEAE6732FBF76A0C0_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29080));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29081));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29082));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetOrientation_m7936FEF9D70AAA392D7C5FF8EF5AB15741D205CB_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, int32_t ___0_newValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_newValue));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29083));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29084));
	Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* G_B3_0 = NULL;
	Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* G_B4_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29085));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29086));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),18));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29087));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37));
		String_t* L_1;
		L_1 = Slider_3_GetOrientationClassName_m068A18C999AE432E8FA20909A357AE63E69F4983(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29087));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29088));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this);
		VisualElement_RemoveFromClassList_mA7A2EC202004DFCBF38C12B70C6218BF40D21220((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29088));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29089));
		int32_t L_2 = ___0_newValue;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),18), L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29090));
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),18));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29091));
		String_t* L_4;
		L_4 = Slider_3_GetOrientationClassName_m068A18C999AE432E8FA20909A357AE63E69F4983(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29091));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29092));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29092));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29093));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_5 = *(Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),11));
		V_0 = (bool)((!(((RuntimeObject*)(Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29094));
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29095));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_7 = *(Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),11));
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),18));
		if (!L_8)
		{
			G_B3_0 = L_7;
			goto IL_004a;
		}
		G_B2_0 = L_7;
	}
	{
		G_B4_0 = 2;
		G_B4_1 = G_B2_0;
		goto IL_004b;
	}

IL_004a:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_004b:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29096));
		NullCheck(G_B4_1);
		Draggable_set_dragDirection_mFE1245A5A09AE6472B97A84FC2AC3301E867F9EC_inline(G_B4_1, (int32_t)G_B4_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29096));
	}

IL_0051:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29097));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29098));
		VirtualActionInvoker0::Invoke(239, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29098));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29099));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29100));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)))->___orientationProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29100));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29101));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetStep_mBCC9A8D2137D6229CCB7429DD10C06C1410196E1_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, Il2CppFullySharedGenericStruct ___0_newStep, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23)) ? ___0_newStep : &___0_newStep));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29102));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29103));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29104));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29105));
		il2cpp_codegen_memcpy(L_0, ___0_newStep, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29106));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_SetStep_mD42FD6C0770B55A33E3881A5EC146FA5D977B5AB((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29106));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29107));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29108));
		VirtualActionInvoker0::Invoke(239, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29108));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29109));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_OnTrackDown_m60DA83249F8E1F24E45005CD60C65C3619BB75C1_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dragger));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29110));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29111));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29112));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29113));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_0 = ___0_dragger;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29114));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_OnTrackDown_m7E7815ED475939D9268D69135ECF8AE60EFF8353((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29114));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29115));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_1 = ___0_dragger;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29116));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		VirtualActionInvoker1< Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* >::Invoke(218, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29116));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29117));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_OnTrackUp_mBC9E853E5CC15B6DBB298BDE90B2BBD0F5817D54_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dragger));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29118));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29119));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29120));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29121));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_0 = ___0_dragger;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29122));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_OnTrackUp_m2461DCAC37A22186F80177CE5C5C105B323AC5D1((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29122));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29123));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29124));
		Slider_3_ClearThumbsActiveState_mBD5D5457B3929990E3B499945B2CA4EAF2DF0B6F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29124));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29125));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_ComputeValueFromDrag_m0AD764453EE365706F5BE4CE83A53B75873E6305_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___0_dragger, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	const Il2CppFullySharedGenericAny L_7 = L_1;
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	memset(V_0, 0, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	memset(V_1, 0, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dragger));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29126));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29127));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29128));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29129));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_0 = ___0_dragger;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29130));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_ComputeValueFromDrag_mA685A0647D865FB43D0C6CA147A3807B9D9928F5((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, L_0, (Il2CppFullySharedGenericAny*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29130));
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29131));
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_3 = ___0_dragger;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29132));
		NullCheck(L_3);
		bool L_4;
		L_4 = Draggable_get_ctrlKey_mAEA22D241EA363E4AA1A043D364DFAD041497617_inline(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29132));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29133));
		Slider_3_GetRestrictedValue_mE7365920EDB407F489F55F0500B824E43017B2AA(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41)) ? il2cpp_codegen_memcpy(L_5, L_2, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4): *(void**)L_2), L_4, (Il2CppFullySharedGenericAny*)L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29133));
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		goto IL_0019;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29134));
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_GetClampedValue_m3BD0C3215CB0C0A1FB9E365C961194CE0AB89B7C_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, Il2CppFullySharedGenericAny ___0_newValue, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	const Il2CppFullySharedGenericAny L_6 = L_0;
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	memset(V_0, 0, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	memset(V_1, 0, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41)) ? ___0_newValue : &___0_newValue));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29135));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29136));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29137));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29138));
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41)) ? ___0_newValue : &___0_newValue), SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29139));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_GetClampedValue_mFC3DDC02D4F1007F866D4CF6A01A8539D25C3EC5((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4): *(void**)L_0), (Il2CppFullySharedGenericAny*)L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29139));
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29140));
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29141));
		Slider_3_GetRestrictedValue_mE7365920EDB407F489F55F0500B824E43017B2AA(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41)) ? il2cpp_codegen_memcpy(L_4, L_3, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4): *(void**)L_3), (bool)0, (Il2CppFullySharedGenericAny*)L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29141));
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		goto IL_0014;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29142));
		il2cpp_codegen_memcpy(L_6, V_1, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Slider_3_HasValidStep_mBBC9AF42A9B89E5FBBF411D609F212566AA1E572_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	memset(V_0, 0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29143));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29144));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29145));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29146));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_0;
		L_0 = EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29146));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),19)), SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29147));
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_0, L_1, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29147));
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetValueWithoutNotify_mCF3F67C7C1474D596C6EC5DB6BAD3E9F6961E09A_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, Il2CppFullySharedGenericAny ___0_newValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41)) ? ___0_newValue : &___0_newValue));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29148));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29149));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29150));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29151));
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41)) ? ___0_newValue : &___0_newValue), SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29152));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(223, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41)) ? L_0: *(void**)L_0), (Il2CppFullySharedGenericAny*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29152));
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),15), L_1, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29153));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29154));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2;
		L_2 = BaseSlider_2_get_validateValue_mD6D5ED5FF9C88F1A5375B61388EB187BBD526188_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29154));
		V_0 = (bool)((!(((RuntimeObject*)(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29155));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29156));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29157));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_4;
		L_4 = BaseSlider_2_get_validateValue_mD6D5ED5FF9C88F1A5375B61388EB187BBD526188_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29157));
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),15)), SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29158));
		NullCheck(L_4);
		bool L_6;
		L_6 = Func_2_Invoke_mFF6CAE6DFB13AFB5921FB3201467228A326875DE_inline(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41)) ? L_5: *(void**)L_5), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29158));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29159));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_set_invalid_m231B9FD6E07171433A9B436E5B059595E7173A85((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29159));
	}

IL_0036:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29160));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29161));
		VirtualActionInvoker0::Invoke(239, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29161));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29162));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_RefreshUI_m1155341A39F9F11F125EB6C8E9389FB1103A4268_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const uint32_t SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD V_3;
	memset((&V_3), 0, sizeof(V_3));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29163));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29164));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29165));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29166));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29167));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this);
		RuntimeObject* L_0;
		L_0 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29167));
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29168));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29168));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29169));
		bool L_2;
		L_2 = RectExtensions_IsValid_mF02319DA68BBF246BB6B5D0C0B84F60C754EC1CC(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29169));
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_1 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29170));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29171));
		goto IL_0077;
	}

IL_0020:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29172));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29173));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(227, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29173));
		V_2 = L_4;
		int32_t L_5 = V_2;
		uintptr_t L_6 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_5,NULL));
		uint32_t L_7 = SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3;
		if ((uintptr_t)L_6 * (uintptr_t)L_7 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_8 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_6, (int32_t)L_7));
		int8_t* L_9;
		if (L_8 == 0)
		{
			L_9 = NULL;
		}
		else
		{
			L_9 = (int8_t*)alloca(L_8);
			memset(L_9, 0, L_8);
		}
		int32_t L_10 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29174));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_11;
		memset((&L_11), 0, sizeof(L_11));
		Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline((&L_11), (void*)L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29174));
		V_3 = L_11;
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_12 = V_3;
		V_0 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29175));
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),15)), SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_14 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29176));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD >::Invoke(229, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41)) ? L_13: *(void**)L_13), L_14);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29176));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29177));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29178));
		Slider_3_BindInputField_mF8D122C7643525FBA55D231DE9F9C4437FCE1703(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29178));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29179));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29180));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_16;
		L_16 = Span_1_op_Implicit_m400E4768CE49AAE9E8572B8D80CEB4AD59A02895(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29180));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29181));
		Slider_3_RefreshMarks_m886AC7B8ED4770083E747CF60B8BE2E27779F267(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 61));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29181));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29182));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_17 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29183));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_18;
		L_18 = Span_1_op_Implicit_m400E4768CE49AAE9E8572B8D80CEB4AD59A02895(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29183));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29184));
		Slider_3_RefreshProgressElements_mFC18689B8F20FA17961AA3BFD110969BBC6EAFBA(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29184));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29185));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_19 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29186));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_20;
		L_20 = Span_1_op_Implicit_m400E4768CE49AAE9E8572B8D80CEB4AD59A02895(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29186));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29187));
		Slider_3_RefreshThumbs_m6F2313650544AD2115CB6DE6BAD72052267E3D77(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29187));
	}

IL_0077:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29188));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_RefreshThumbs_m6F2313650544AD2115CB6DE6BAD72052267E3D77_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_values, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thumb_t93918EA28AB7D7A87A976861423C11037819B679_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thumb_t93918EA28AB7D7A87A976861423C11037819B679_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70482276F3497E5EEFDF5E02F1CBB3BC2A885FC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA3E1754129AF8E4A8B14C41BACEC842580552DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF7F12D5711E1949CC3A1E99E20E19B3CC359C60);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericStruct L_21 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_50 = L_21;
	const Il2CppFullySharedGenericStruct L_53 = L_21;
	const Il2CppFullySharedGenericStruct L_77 = L_21;
	const Il2CppFullySharedGenericStruct L_22 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_54 = L_22;
	const Il2CppFullySharedGenericStruct L_23 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Thumb_t93918EA28AB7D7A87A976861423C11037819B679* V_4 = NULL;
	float V_5 = 0.0f;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	Thumb_t93918EA28AB7D7A87A976861423C11037819B679* V_13 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_3), (&V_4), (&V_5), (&V_9), (&V_13));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29189));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29190));
	float G_B3_0 = 0.0f;
	int32_t G_B10_0 = 0;
	RuntimeObject* G_B14_0 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	RuntimeObject* G_B15_1 = NULL;
	ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* G_B17_0 = NULL;
	Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* G_B17_1 = NULL;
	Thumb_t93918EA28AB7D7A87A976861423C11037819B679* G_B17_2 = NULL;
	ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* G_B16_0 = NULL;
	Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* G_B16_1 = NULL;
	Thumb_t93918EA28AB7D7A87A976861423C11037819B679* G_B16_2 = NULL;
	Il2CppFullySharedGenericStruct G_B18_0 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	memset(G_B18_0, 0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* G_B18_1 = NULL;
	Thumb_t93918EA28AB7D7A87A976861423C11037819B679* G_B18_2 = NULL;
	int32_t G_B26_0 = 0;
	int32_t G_B31_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29191));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29192));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),18));
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),31));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29193));
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29193));
		V_2 = L_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29194));
		il2cpp_codegen_runtime_class_init_inline(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&V_2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29194));
		G_B3_0 = L_3;
		goto IL_0031;
	}

IL_001e:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),31));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29195));
		NullCheck(L_4);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29195));
		V_2 = L_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29196));
		il2cpp_codegen_runtime_class_init_inline(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline((&V_2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29196));
		G_B3_0 = L_6;
	}

IL_0031:
	{
		V_0 = G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29197));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29198));
		goto IL_018b;
	}

IL_0039:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29199));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29200));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),34));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29201));
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29201));
		int32_t L_9 = V_3;
		V_6 = (bool)((((int32_t)((((int32_t)L_8) > ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29202));
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_0083;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29203));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29204));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29205));
		Thumb_t93918EA28AB7D7A87A976861423C11037819B679* L_11 = (Thumb_t93918EA28AB7D7A87A976861423C11037819B679*)il2cpp_codegen_object_new(Thumb_t93918EA28AB7D7A87A976861423C11037819B679_il2cpp_TypeInfo_var);
		Thumb__ctor_m5BDB035B31CC35EAA06FD1624CE9D6E762D8BDCC(L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29205));
		Thumb_t93918EA28AB7D7A87A976861423C11037819B679* L_12 = L_11;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29206));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_12);
		VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_12, _stringLiteralBA3E1754129AF8E4A8B14C41BACEC842580552DF, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29206));
		V_4 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29207));
		Thumb_t93918EA28AB7D7A87A976861423C11037819B679* L_13 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29208));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_13);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_13, _stringLiteralBA3E1754129AF8E4A8B14C41BACEC842580552DF, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29208));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29209));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_14 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),34));
		Thumb_t93918EA28AB7D7A87A976861423C11037819B679* L_15 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29210));
		NullCheck(L_14);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_14, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29210));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29211));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29212));
		goto IL_0098;
	}

IL_0083:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29213));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29214));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),34));
		int32_t L_17 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29215));
		NullCheck(L_16);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18;
		L_18 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_16, L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29215));
		V_4 = ((Thumb_t93918EA28AB7D7A87A976861423C11037819B679*)CastclassClass((RuntimeObject*)L_18, Thumb_t93918EA28AB7D7A87A976861423C11037819B679_il2cpp_TypeInfo_var));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29216));
	}

IL_0098:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29217));
		int32_t L_19 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29218));
		Il2CppFullySharedGenericStruct* L_20;
		L_20 = ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline((&___0_values), L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29218));
		il2cpp_codegen_memcpy(L_21, L_20, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29219));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (Il2CppFullySharedGenericStruct*)L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29219));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29220));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (Il2CppFullySharedGenericStruct*)L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 68));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29220));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29221));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		float L_24;
		L_24 = VirtualFuncInvoker3Invoker< float, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(236, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, L_21, L_22, L_23);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29221));
		V_5 = L_24;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29222));
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),18));
		if ((((int32_t)L_25) == ((int32_t)1)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),16));
		G_B10_0 = ((((int32_t)L_26) == ((int32_t)1))? 1 : 0);
		goto IL_00ce;
	}

IL_00cd:
	{
		G_B10_0 = 1;
	}

IL_00ce:
	{
		V_7 = (bool)G_B10_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29223));
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00de;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29224));
		float L_28 = V_5;
		V_5 = ((float)il2cpp_codegen_subtract((1.0f), L_28));
	}

IL_00de:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29225));
		float L_29 = V_5;
		float L_30 = V_0;
		V_5 = ((float)il2cpp_codegen_multiply(L_29, L_30));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29226));
		Thumb_t93918EA28AB7D7A87A976861423C11037819B679* L_31 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29227));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_31);
		RuntimeObject* L_32;
		L_32 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_31, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29227));
		int32_t L_33 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),18));
		if (!L_33)
		{
			G_B14_0 = L_32;
			goto IL_010b;
		}
		G_B13_0 = L_32;
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29228));
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_34;
		L_34 = Length_op_Implicit_m29448D89D0F99CC4CFCEB9CD57853BA78A94EDA5((0.0f), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29228));
		float L_35 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29229));
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_36;
		L_36 = Length_op_Implicit_m29448D89D0F99CC4CFCEB9CD57853BA78A94EDA5(L_35, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29229));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29230));
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_37;
		memset((&L_37), 0, sizeof(L_37));
		Translate__ctor_mE072B1282A3D3700189D746610D46834E4FAA03E((&L_37), L_34, L_36, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29230));
		G_B15_0 = L_37;
		G_B15_1 = G_B13_0;
		goto IL_0121;
	}

IL_010b:
	{
		float L_38 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29231));
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_39;
		L_39 = Length_op_Implicit_m29448D89D0F99CC4CFCEB9CD57853BA78A94EDA5(L_38, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29231));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29232));
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_40;
		L_40 = Length_op_Implicit_m29448D89D0F99CC4CFCEB9CD57853BA78A94EDA5((0.0f), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29232));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29233));
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_41;
		memset((&L_41), 0, sizeof(L_41));
		Translate__ctor_mE072B1282A3D3700189D746610D46834E4FAA03E((&L_41), L_39, L_40, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29233));
		G_B15_0 = L_41;
		G_B15_1 = G_B14_0;
	}

IL_0121:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29234));
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_42;
		L_42 = StyleTranslate_op_Implicit_m07F947CEE79D8E54CE1DB08840561A833895C0CE(G_B15_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29234));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29235));
		NullCheck(G_B15_1);
		InterfaceActionInvoker1< StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 >::Invoke(127, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, G_B15_1, L_42);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29235));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29236));
		Thumb_t93918EA28AB7D7A87A976861423C11037819B679* L_43 = V_4;
		int32_t L_44 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),25));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29237));
		NullCheck(L_43);
		Thumb_set_displayValueLabel_mB2C0FD2086D2FB16046233587BD8790627504D88(L_43, L_44, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29237));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29238));
		Thumb_t93918EA28AB7D7A87A976861423C11037819B679* L_45 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29239));
		ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* L_46;
		L_46 = Slider_3_get_scale_m060644BBA05E2BAB0FFBD2F4702D293D065C522B_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 70));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29239));
		ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* L_47 = L_46;
		if (L_47)
		{
			G_B17_0 = L_47;
			G_B17_1 = ((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*)__this);
			G_B17_2 = L_45;
			goto IL_0156;
		}
		G_B16_0 = L_47;
		G_B16_1 = ((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*)__this);
		G_B16_2 = L_45;
	}
	{
		int32_t L_48 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29240));
		Il2CppFullySharedGenericStruct* L_49;
		L_49 = ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline((&___0_values), L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29240));
		il2cpp_codegen_memcpy(L_50, L_49, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(G_B18_0, L_50, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		G_B18_1 = ((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*)G_B16_1);
		G_B18_2 = G_B16_2;
		goto IL_0168;
	}

IL_0156:
	{
		int32_t L_51 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29241));
		Il2CppFullySharedGenericStruct* L_52;
		L_52 = ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline((&___0_values), L_51, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29241));
		il2cpp_codegen_memcpy(L_53, L_52, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29242));
		NullCheck(G_B17_0);
		ScaleHandler_Invoke_mE01466896DEF28D463FEEF6E29E184793266A594_inline(G_B17_0, L_53, (Il2CppFullySharedGenericStruct*)L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 71));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29242));
		il2cpp_codegen_memcpy(G_B18_0, L_54, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		G_B18_1 = ((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0*)G_B17_1);
		G_B18_2 = G_B17_2;
	}

IL_0168:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29243));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)G_B18_1);
		String_t* L_55;
		L_55 = VirtualFuncInvoker1Invoker< String_t*, Il2CppFullySharedGenericStruct >::Invoke(233, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)G_B18_1, G_B18_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29243));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29244));
		NullCheck(G_B18_2);
		Thumb_set_text_mEC8BDB18CBC5E1A3907AB4C0BA6508CCF17BED81(G_B18_2, L_55, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29244));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29245));
		Thumb_t93918EA28AB7D7A87A976861423C11037819B679* L_56 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29246));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		bool L_57;
		L_57 = BaseSlider_2_get_invalid_m69A4FEE6AB40F6B44C06DC60B0E7EB32DDA98D0E((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 73));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29246));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29247));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_56);
		VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_56, _stringLiteralDF7F12D5711E1949CC3A1E99E20E19B3CC359C60, L_57, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29247));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29248));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29249));
		int32_t L_58 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_018b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29250));
		int32_t L_59 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29251));
		int32_t L_60;
		L_60 = ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline((&___0_values), il2cpp_rgctx_method(method->klass->rgctx_data, 74));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29251));
		V_8 = (bool)((((int32_t)L_59) < ((int32_t)L_60))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29252));
		bool L_61 = V_8;
		if (L_61)
		{
			goto IL_0039;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29253));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_62 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),34));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29254));
		NullCheck(L_62);
		int32_t L_63;
		L_63 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_62, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29254));
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_63, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29255));
		goto IL_01c5;
	}

IL_01af:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29256));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29257));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_64 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),34));
		int32_t L_65 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29258));
		NullCheck(L_64);
		VisualElement_RemoveAt_mE99E3CF051D264ACBCCB4318B3E023FAAB8779D7(L_64, L_65, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29258));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29259));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29260));
		int32_t L_66 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
	}

IL_01c5:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29261));
		int32_t L_67 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29262));
		int32_t L_68;
		L_68 = ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline((&___0_values), il2cpp_rgctx_method(method->klass->rgctx_data, 74));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29262));
		V_10 = (bool)((((int32_t)((((int32_t)L_67) < ((int32_t)L_68))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29263));
		bool L_69 = V_10;
		if (L_69)
		{
			goto IL_01af;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29264));
		V_1 = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29265));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_70 = *(Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),11));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29266));
		NullCheck((Pressable_tEE6D0D0E5E4201AB20B78307ED9A2F2006FEE939*)L_70);
		bool L_71;
		L_71 = Pressable_get_active_m71AC8A3CE3788DF30045AFA35010607ACCA0AE37_inline((Pressable_tEE6D0D0E5E4201AB20B78307ED9A2F2006FEE939*)L_70, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29266));
		if (!L_71)
		{
			goto IL_01f5;
		}
	}
	{
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_72 = *(Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),11));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29267));
		NullCheck(L_72);
		bool L_73;
		L_73 = Draggable_get_isDown_m6E614B667C5EC0936525B13110B1FE3A61510AF4_inline(L_72, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29267));
		G_B26_0 = ((int32_t)(L_73));
		goto IL_01f6;
	}

IL_01f5:
	{
		G_B26_0 = 0;
	}

IL_01f6:
	{
		V_11 = (bool)G_B26_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29268));
		bool L_74 = V_11;
		if (!L_74)
		{
			goto IL_020c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29269));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_75 = *(Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),11));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_76 = ___0_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29270));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_FindClosestThumbValue_mE23F071F78843DCA416E46CCFD37CF01605E6517((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, L_75, L_76, (&V_1), (Il2CppFullySharedGenericStruct*)L_77, il2cpp_rgctx_method(method->klass->rgctx_data, 75));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29270));
	}

IL_020c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29271));
		int32_t L_78 = V_1;
		if ((((int32_t)L_78) < ((int32_t)0)))
		{
			goto IL_0220;
		}
	}
	{
		int32_t L_79 = V_1;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_80 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),34));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29272));
		NullCheck(L_80);
		int32_t L_81;
		L_81 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_80, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29272));
		G_B31_0 = ((((int32_t)L_79) < ((int32_t)L_81))? 1 : 0);
		goto IL_0221;
	}

IL_0220:
	{
		G_B31_0 = 0;
	}

IL_0221:
	{
		V_12 = (bool)G_B31_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29273));
		bool L_82 = V_12;
		if (!L_82)
		{
			goto IL_024b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29274));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29275));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_83 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),34));
		int32_t L_84 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29276));
		NullCheck(L_83);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_85;
		L_85 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_83, L_84, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29276));
		V_13 = ((Thumb_t93918EA28AB7D7A87A976861423C11037819B679*)CastclassClass((RuntimeObject*)L_85, Thumb_t93918EA28AB7D7A87A976861423C11037819B679_il2cpp_TypeInfo_var));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29277));
		Thumb_t93918EA28AB7D7A87A976861423C11037819B679* L_86 = V_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29278));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_86);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_86, _stringLiteral70482276F3497E5EEFDF5E02F1CBB3BC2A885FC0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29278));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29279));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29280));
		goto IL_0254;
	}

IL_024b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29281));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29282));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29283));
		Slider_3_ClearThumbsActiveState_mBD5D5457B3929990E3B499945B2CA4EAF2DF0B6F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29283));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29284));
	}

IL_0254:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29285));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_RefreshProgressElements_mFC18689B8F20FA17961AA3BFD110969BBC6EAFBA_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_values, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Reverse_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0BF4BAB7341EDF17DC6634DB4CE68255A825C61F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackDisplayType_t6CEF00929E8CE48387477557BE23333DD0F33431_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70482276F3497E5EEFDF5E02F1CBB3BC2A885FC0);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericStruct L_25 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_26 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_27 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_0 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_1 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	float V_6 = 0.0f;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	float V_16 = 0.0f;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), (&V_7), (&V_8), (&V_9), (&V_10), (&V_15), (&V_16), (&V_19));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29286));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29287));
	float G_B9_0 = 0.0f;
	int32_t G_B15_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29288));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29289));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),28));
		V_11 = L_0;
		int32_t L_1 = V_11;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0017;
	}

IL_0012:
	{
		V_12 = (bool)1;
		goto IL_001a;
	}

IL_0017:
	{
		V_12 = (bool)0;
	}

IL_001a:
	{
		bool L_2 = V_12;
		V_13 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29290));
		bool L_3 = V_13;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29291));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29292));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),32));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29293));
		NullCheck(L_4);
		VisualElement_Clear_m201F95F3031691823F39BAEC5ED378C82F34AC7F(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29293));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29294));
		goto IL_02cb;
	}

IL_0037:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29295));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29296));
		Slider_3_EnsureProgressElements_m7107F48E30EB68996D4C92E493E94DD0E54307EF(__this, 3, il2cpp_rgctx_method(method->klass->rgctx_data, 76));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29296));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29297));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),32));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29298));
		NullCheck(L_5);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6;
		L_6 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_5, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29298));
		V_0 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29299));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),32));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29300));
		NullCheck(L_7);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8;
		L_8 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_7, 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29300));
		V_1 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29301));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),32));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29302));
		NullCheck(L_9);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_10;
		L_10 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_9, 2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29302));
		V_2 = L_10;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29303));
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),18));
		V_3 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29304));
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),16));
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29305));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29306));
		int32_t L_13;
		L_13 = ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline((&___0_values), il2cpp_rgctx_method(method->klass->rgctx_data, 74));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29306));
		V_5 = (bool)((((int32_t)L_13) > ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29307));
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_00a0;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),31));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29308));
		NullCheck(L_15);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16;
		L_16 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29308));
		V_14 = L_16;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29309));
		il2cpp_codegen_runtime_class_init_inline(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		float L_17;
		L_17 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&V_14), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29309));
		G_B9_0 = L_17;
		goto IL_00b4;
	}

IL_00a0:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),31));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29310));
		NullCheck(L_18);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_19;
		L_19 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29310));
		V_14 = L_19;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29311));
		il2cpp_codegen_runtime_class_init_inline(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		float L_20;
		L_20 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline((&V_14), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29311));
		G_B9_0 = L_20;
	}

IL_00b4:
	{
		V_6 = G_B9_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29312));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29313));
		int32_t L_21;
		L_21 = ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline((&___0_values), il2cpp_rgctx_method(method->klass->rgctx_data, 74));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29313));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_21);
		V_7 = L_22;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29314));
		V_15 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29315));
		goto IL_00fd;
	}

IL_00c9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29316));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29317));
		int32_t L_23 = V_15;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29318));
		Il2CppFullySharedGenericStruct* L_24;
		L_24 = ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline((&___0_values), L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29318));
		il2cpp_codegen_memcpy(L_25, L_24, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29319));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (Il2CppFullySharedGenericStruct*)L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29319));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29320));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (Il2CppFullySharedGenericStruct*)L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 68));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29320));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29321));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		float L_28;
		L_28 = VirtualFuncInvoker3Invoker< float, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(236, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, L_25, L_26, L_27);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29321));
		float L_29 = V_6;
		V_16 = ((float)il2cpp_codegen_multiply(L_28, L_29));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29322));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_30 = V_7;
		int32_t L_31 = V_15;
		float L_32 = V_16;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (float)L_32);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29323));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29324));
		int32_t L_33 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00fd:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29325));
		int32_t L_34 = V_15;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29326));
		int32_t L_35;
		L_35 = ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline((&___0_values), il2cpp_rgctx_method(method->klass->rgctx_data, 74));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29326));
		V_17 = (bool)((((int32_t)L_34) < ((int32_t)L_35))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29327));
		bool L_36 = V_17;
		if (L_36)
		{
			goto IL_00c9;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29328));
		bool L_37 = V_3;
		bool L_38 = V_4;
		if (((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_011a;
		}
	}
	{
		bool L_39 = V_3;
		G_B15_0 = ((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		goto IL_011b;
	}

IL_011a:
	{
		G_B15_0 = 1;
	}

IL_011b:
	{
		V_18 = (bool)G_B15_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29329));
		bool L_40 = V_18;
		if (!L_40)
		{
			goto IL_0153;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29330));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29331));
		V_19 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29332));
		goto IL_013c;
	}

IL_0127:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29333));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29334));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = V_7;
		int32_t L_42 = V_19;
		float L_43 = V_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_44 = V_7;
		int32_t L_45 = V_19;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		float L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (float)((float)il2cpp_codegen_subtract(L_43, L_47)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29335));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29336));
		int32_t L_48 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_013c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29337));
		int32_t L_49 = V_19;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = V_7;
		NullCheck(L_50);
		int32_t L_51 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_50)->max_length),NULL));
		V_20 = (bool)((((int32_t)L_49) < ((int32_t)L_51))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29338));
		bool L_52 = V_20;
		if (L_52)
		{
			goto IL_0127;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29339));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_53 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29340));
		Array_Reverse_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0BF4BAB7341EDF17DC6634DB4CE68255A825C61F(L_53, Array_Reverse_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0BF4BAB7341EDF17DC6634DB4CE68255A825C61F_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29340));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29341));
	}

IL_0153:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29342));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_54 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_55 = V_7;
		NullCheck(L_55);
		int32_t L_56 = 0;
		float L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		bool L_58 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29343));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37));
		Slider_3_SetProgressElementTransform_m11526405F5C43CE0650846F63700F1037D8DCEF5(L_54, (0.0f), L_57, L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 77));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29343));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29344));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_59 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_60 = V_7;
		NullCheck(L_60);
		int32_t L_61 = 0;
		float L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_63 = V_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_64 = L_63;
		NullCheck(L_64);
		int32_t L_65 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_64)->max_length),NULL));
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		float L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		bool L_68 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29345));
		Slider_3_SetProgressElementTransform_m11526405F5C43CE0650846F63700F1037D8DCEF5(L_59, L_62, L_67, L_68, il2cpp_rgctx_method(method->klass->rgctx_data, 77));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29345));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29346));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_69 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_70 = V_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_71 = L_70;
		NullCheck(L_71);
		int32_t L_72 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_71)->max_length),NULL));
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		float L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		float L_75 = V_6;
		bool L_76 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29347));
		Slider_3_SetProgressElementTransform_m11526405F5C43CE0650846F63700F1037D8DCEF5(L_69, L_74, L_75, L_76, il2cpp_rgctx_method(method->klass->rgctx_data, 77));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29347));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29348));
		int32_t L_77 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),28));
		V_21 = L_77;
		if (1)
		{
			goto IL_0196;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29349));
	}

IL_0196:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29350));
		int32_t L_78 = V_21;
		if ((((int32_t)L_78) == ((int32_t)1)))
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_019d;
	}

IL_019d:
	{
		int32_t L_79 = V_21;
		if ((((int32_t)L_79) == ((int32_t)2)))
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_01f3;
	}

IL_01a4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29351));
		bool L_80 = V_3;
		if (!L_80)
		{
			goto IL_01ab;
		}
	}
	{
		bool L_81 = V_4;
		if (!L_81)
		{
			goto IL_01ad;
		}
	}

IL_01ab:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29352));
		goto IL_01b6;
	}

IL_01ad:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29353));
		bool L_82 = V_5;
		V_12 = (bool)((((int32_t)L_82) == ((int32_t)0))? 1 : 0);
		goto IL_01f8;
	}

IL_01b6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29354));
		bool L_83 = V_3;
		bool L_84 = V_4;
		if (((int32_t)((int32_t)L_83&(int32_t)L_84)))
		{
			goto IL_01be;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29355));
		goto IL_01c3;
	}

IL_01be:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29356));
		V_12 = (bool)0;
		goto IL_01f8;
	}

IL_01c3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29357));
		bool L_85 = V_3;
		if (!L_85)
		{
			goto IL_01c8;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29358));
		goto IL_01f3;
	}

IL_01c8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29359));
		V_12 = (bool)0;
		goto IL_01f8;
	}

IL_01cd:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29360));
		bool L_86 = V_3;
		if (!L_86)
		{
			goto IL_01d4;
		}
	}
	{
		bool L_87 = V_4;
		if (!L_87)
		{
			goto IL_01d6;
		}
	}

IL_01d4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29361));
		goto IL_01dc;
	}

IL_01d6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29362));
		bool L_88 = V_5;
		V_12 = L_88;
		goto IL_01f8;
	}

IL_01dc:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29363));
		bool L_89 = V_3;
		bool L_90 = V_4;
		if (((int32_t)((int32_t)L_89&(int32_t)L_90)))
		{
			goto IL_01e4;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29364));
		goto IL_01e9;
	}

IL_01e4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29365));
		V_12 = (bool)1;
		goto IL_01f8;
	}

IL_01e9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29366));
		bool L_91 = V_3;
		if (!L_91)
		{
			goto IL_01ee;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29367));
		goto IL_01f3;
	}

IL_01ee:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29368));
		V_12 = (bool)1;
		goto IL_01f8;
	}

IL_01f3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29369));
		V_12 = (bool)0;
		goto IL_01f8;
	}

IL_01f8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29370));
		if (1)
		{
			goto IL_01fc;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29371));
	}

IL_01fc:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29372));
		bool L_92 = V_12;
		V_8 = L_92;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29373));
		int32_t L_93 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),28));
		V_22 = L_93;
		if (1)
		{
			goto IL_020c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29374));
	}

IL_020c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29375));
		int32_t L_94 = V_22;
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_0213;
		}
	}
	{
		goto IL_0219;
	}

IL_0213:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29376));
		bool L_95 = V_5;
		V_12 = L_95;
		goto IL_021e;
	}

IL_0219:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29377));
		V_12 = (bool)0;
		goto IL_021e;
	}

IL_021e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29378));
		if (1)
		{
			goto IL_0222;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29379));
	}

IL_0222:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29380));
		bool L_96 = V_12;
		V_9 = L_96;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29381));
		int32_t L_97 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),28));
		V_23 = L_97;
		if (1)
		{
			goto IL_0232;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29382));
	}

IL_0232:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29383));
		int32_t L_98 = V_23;
		if ((((int32_t)L_98) == ((int32_t)1)))
		{
			goto IL_0240;
		}
	}
	{
		goto IL_0239;
	}

IL_0239:
	{
		int32_t L_99 = V_23;
		if ((((int32_t)L_99) == ((int32_t)2)))
		{
			goto IL_026d;
		}
	}
	{
		goto IL_0294;
	}

IL_0240:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29384));
		bool L_100 = V_3;
		if (!L_100)
		{
			goto IL_0247;
		}
	}
	{
		bool L_101 = V_4;
		if (!L_101)
		{
			goto IL_0249;
		}
	}

IL_0247:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29385));
		goto IL_024e;
	}

IL_0249:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29386));
		V_12 = (bool)0;
		goto IL_0299;
	}

IL_024e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29387));
		bool L_102 = V_3;
		bool L_103 = V_4;
		if (((int32_t)((int32_t)L_102&(int32_t)L_103)))
		{
			goto IL_0256;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29388));
		goto IL_025f;
	}

IL_0256:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29389));
		bool L_104 = V_5;
		V_12 = (bool)((((int32_t)L_104) == ((int32_t)0))? 1 : 0);
		goto IL_0299;
	}

IL_025f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29390));
		bool L_105 = V_3;
		if (!L_105)
		{
			goto IL_0264;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29391));
		goto IL_0294;
	}

IL_0264:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29392));
		bool L_106 = V_5;
		V_12 = (bool)((((int32_t)L_106) == ((int32_t)0))? 1 : 0);
		goto IL_0299;
	}

IL_026d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29393));
		bool L_107 = V_3;
		if (!L_107)
		{
			goto IL_0274;
		}
	}
	{
		bool L_108 = V_4;
		if (!L_108)
		{
			goto IL_0276;
		}
	}

IL_0274:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29394));
		goto IL_027b;
	}

IL_0276:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29395));
		V_12 = (bool)1;
		goto IL_0299;
	}

IL_027b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29396));
		bool L_109 = V_3;
		bool L_110 = V_4;
		if (((int32_t)((int32_t)L_109&(int32_t)L_110)))
		{
			goto IL_0283;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29397));
		goto IL_0289;
	}

IL_0283:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29398));
		bool L_111 = V_5;
		V_12 = L_111;
		goto IL_0299;
	}

IL_0289:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29399));
		bool L_112 = V_3;
		if (!L_112)
		{
			goto IL_028e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29400));
		goto IL_0294;
	}

IL_028e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29401));
		bool L_113 = V_5;
		V_12 = L_113;
		goto IL_0299;
	}

IL_0294:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29402));
		V_12 = (bool)0;
		goto IL_0299;
	}

IL_0299:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29403));
		if (1)
		{
			goto IL_029d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29404));
	}

IL_029d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29405));
		bool L_114 = V_12;
		V_10 = L_114;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29406));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_115 = V_0;
		bool L_116 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29407));
		NullCheck(L_115);
		VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365(L_115, _stringLiteral70482276F3497E5EEFDF5E02F1CBB3BC2A885FC0, L_116, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29407));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29408));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_117 = V_1;
		bool L_118 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29409));
		NullCheck(L_117);
		VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365(L_117, _stringLiteral70482276F3497E5EEFDF5E02F1CBB3BC2A885FC0, L_118, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29409));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29410));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_119 = V_2;
		bool L_120 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29411));
		NullCheck(L_119);
		VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365(L_119, _stringLiteral70482276F3497E5EEFDF5E02F1CBB3BC2A885FC0, L_120, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29411));
	}

IL_02cb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29412));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_EnsureProgressElements_m7107F48E30EB68996D4C92E493E94DD0E54307EF_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAEC302981498B70342805DB19674D1130BD616F);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_count));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29413));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29414));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29415));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29416));
		goto IL_0038;
	}

IL_0003:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29417));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29418));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29419));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)il2cpp_codegen_object_new(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29419));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29420));
		NullCheck(L_1);
		VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(L_1, _stringLiteralBAEC302981498B70342805DB19674D1130BD616F, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29420));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = L_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29421));
		NullCheck(L_2);
		VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(L_2, (int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29421));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29422));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29423));
		NullCheck(L_3);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(L_3, _stringLiteralBAEC302981498B70342805DB19674D1130BD616F, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29423));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29424));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),32));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29425));
		NullCheck(L_4);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29425));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29426));
	}

IL_0038:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29427));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),32));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29428));
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29428));
		int32_t L_8 = ___0_count;
		V_1 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29429));
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0003;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29430));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_10 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),31));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29431));
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29431));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29432));
		goto IL_006d;
	}

IL_005a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29433));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29434));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),32));
		int32_t L_13 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29435));
		NullCheck(L_12);
		VisualElement_RemoveAt_mE99E3CF051D264ACBCCB4318B3E023FAAB8779D7(L_12, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29435));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29436));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29437));
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_006d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29438));
		int32_t L_15 = V_2;
		int32_t L_16 = ___0_count;
		V_3 = (bool)((((int32_t)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29439));
		bool L_17 = V_3;
		if (L_17)
		{
			goto IL_005a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29440));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetProgressElementTransform_m11526405F5C43CE0650846F63700F1037D8DCEF5_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, float ___1_start, float ___2_end, bool ___3_isHorizontal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_element), (&___1_start), (&___2_end), (&___3_isHorizontal));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29441));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29442));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29443));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29444));
		float L_0 = ___1_start;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29445));
		float L_1 = ___2_end;
		float L_2 = ___1_start;
		V_1 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29446));
		bool L_3 = ___3_isHorizontal;
		V_2 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29447));
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29448));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29449));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = ___0_element;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29450));
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29450));
		float L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29451));
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_8;
		L_8 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29451));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29452));
		NullCheck(L_6);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(71, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_6, L_8);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29452));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29453));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9 = ___0_element;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29454));
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29454));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29455));
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_11;
		L_11 = StyleLength_op_Implicit_m895C788B08202125BDDAEE31F2F9D0EE6519D990((int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29455));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29456));
		NullCheck(L_10);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(115, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_10, L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29456));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29457));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12 = ___0_element;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29458));
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29458));
		float L_14 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29459));
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_15;
		L_15 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019(L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29459));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29460));
		NullCheck(L_13);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(173, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_13, L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29460));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29461));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16 = ___0_element;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29462));
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29462));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29463));
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_18;
		L_18 = StyleLength_op_Implicit_m895C788B08202125BDDAEE31F2F9D0EE6519D990((int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29463));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29464));
		NullCheck(L_17);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(67, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_17, L_18);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29464));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29465));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29466));
		goto IL_00a2;
	}

IL_0058:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29467));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29468));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_19 = ___0_element;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29469));
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29469));
		float L_21 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29470));
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_22;
		L_22 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019(L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29470));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29471));
		NullCheck(L_20);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(115, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_20, L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29471));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29472));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_23 = ___0_element;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29473));
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29473));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29474));
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_25;
		L_25 = StyleLength_op_Implicit_m895C788B08202125BDDAEE31F2F9D0EE6519D990((int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29474));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29475));
		NullCheck(L_24);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(71, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_24, L_25);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29475));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29476));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_26 = ___0_element;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29477));
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_26, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29477));
		float L_28 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29478));
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_29;
		L_29 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019(L_28, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29478));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29479));
		NullCheck(L_27);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(67, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_27, L_29);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29479));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29480));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_30 = ___0_element;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29481));
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_30, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29481));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29482));
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_32;
		L_32 = StyleLength_op_Implicit_m895C788B08202125BDDAEE31F2F9D0EE6519D990((int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29482));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29483));
		NullCheck(L_31);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(173, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_31, L_32);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29483));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29484));
	}

IL_00a2:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29485));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_RefreshMarks_m886AC7B8ED4770083E747CF60B8BE2E27779F267_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0__, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B12843E2C98BF0A69E743103E44E05F37A0E24F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0__));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29486));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29487));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29488));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29489));
		Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* L_0 = *(Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),11));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29490));
		NullCheck((Pressable_tEE6D0D0E5E4201AB20B78307ED9A2F2006FEE939*)L_0);
		bool L_1;
		L_1 = Pressable_get_active_m71AC8A3CE3788DF30045AFA35010607ACCA0AE37_inline((Pressable_tEE6D0D0E5E4201AB20B78307ED9A2F2006FEE939*)L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29490));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29491));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29492));
		goto IL_0072;
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29493));
		bool L_3 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),22));
		V_1 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29494));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0053;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29495));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29496));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29497));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this, _stringLiteral7B12843E2C98BF0A69E743103E44E05F37A0E24F, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29497));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29498));
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24));
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29499));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29500));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29501));
		Slider_3_RefreshCustomMarks_m3D288AE6DB4D87B5CEF95BE33498B36DF670758D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 78));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29501));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29502));
		goto IL_0050;
	}

IL_003f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29503));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29504));
		bool L_7;
		L_7 = Slider_3_HasValidStep_mBBC9AF42A9B89E5FBBF411D609F212566AA1E572(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 79));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29504));
		V_3 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29505));
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29506));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29507));
		Slider_3_RefreshStepMarks_m92E6F85FB1ACE0496FA13E27B466700598EE9F0F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29507));
	}

IL_0050:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29508));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29509));
		goto IL_0072;
	}

IL_0053:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29510));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29511));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),33));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29512));
		NullCheck(L_9);
		VisualElement_RemoveFromClassList_mA7A2EC202004DFCBF38C12B70C6218BF40D21220(L_9, _stringLiteral7B12843E2C98BF0A69E743103E44E05F37A0E24F, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29512));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29513));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_10 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),33));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29514));
		NullCheck(L_10);
		VisualElement_Clear_m201F95F3031691823F39BAEC5ED378C82F34AC7F(L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29514));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29515));
	}

IL_0072:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29516));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_RefreshStepMarks_m92E6F85FB1ACE0496FA13E27B466700598EE9F0F_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28F5556D5186BD01F2BC1E9B0C7A212EE57DA762);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD9E4F36B748F19339571133F1334F19F10E6518);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_5 = L_1;
	const Il2CppFullySharedGenericStruct L_7 = L_1;
	const Il2CppFullySharedGenericStruct L_9 = L_1;
	const Il2CppFullySharedGenericStruct L_52 = L_1;
	const Il2CppFullySharedGenericStruct L_60 = L_1;
	const Il2CppFullySharedGenericStruct L_64 = L_1;
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_8 = L_2;
	const Il2CppFullySharedGenericStruct L_10 = L_2;
	const Il2CppFullySharedGenericStruct L_61 = L_2;
	const Il2CppFullySharedGenericStruct L_65 = L_2;
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_11 = L_3;
	const Il2CppFullySharedGenericStruct L_62 = L_3;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	memset(V_1, 0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	memset(V_2, 0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	float V_3 = 0.0f;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), V_1, V_2, (&V_3), (&V_4), (&V_8), (&V_12));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29517));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29518));
	Il2CppFullySharedGenericStruct G_B4_0 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	memset(G_B4_0, 0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	int32_t G_B21_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29519));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29520));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29521));
		int32_t L_0 = V_0;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),19)), SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29522));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29522));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29523));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		VirtualActionInvoker4Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(237, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, L_0, L_1, L_2, (Il2CppFullySharedGenericStruct*)L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29523));
		il2cpp_codegen_memcpy(V_1, L_3, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29524));
		goto IL_019f;
	}

IL_001c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29525));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29526));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29527));
		ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* L_4;
		L_4 = Slider_3_get_scale_m060644BBA05E2BAB0FFBD2F4702D293D065C522B_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 70));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29527));
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		il2cpp_codegen_memcpy(L_5, V_1, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(G_B4_0, L_5, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		goto IL_0034;
	}

IL_0028:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29528));
		ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* L_6;
		L_6 = Slider_3_get_scale_m060644BBA05E2BAB0FFBD2F4702D293D065C522B_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 70));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29528));
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29529));
		NullCheck(L_6);
		ScaleHandler_Invoke_mE01466896DEF28D463FEEF6E29E184793266A594_inline(L_6, L_7, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 71));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29529));
		il2cpp_codegen_memcpy(G_B4_0, L_8, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(V_2, G_B4_0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29530));
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29531));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (Il2CppFullySharedGenericStruct*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29531));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29532));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (Il2CppFullySharedGenericStruct*)L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 68));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29532));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29533));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		float L_12;
		L_12 = VirtualFuncInvoker3Invoker< float, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(236, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, L_9, L_10, L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29533));
		V_3 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29534));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),33));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29535));
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29535));
		int32_t L_15 = V_0;
		V_5 = (bool)((((int32_t)L_14) > ((int32_t)L_15))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29536));
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_006f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29537));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29538));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_17 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),33));
		int32_t L_18 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29539));
		NullCheck(L_17);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_19;
		L_19 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_17, L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29539));
		V_4 = L_19;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29540));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29541));
		goto IL_00a7;
	}

IL_006f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29542));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29543));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29544));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)il2cpp_codegen_object_new(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29544));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_21 = L_20;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29545));
		NullCheck(L_21);
		VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(L_21, _stringLiteralBD9E4F36B748F19339571133F1334F19F10E6518, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29545));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_22 = L_21;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29546));
		NullCheck(L_22);
		VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(L_22, (int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29546));
		V_4 = L_22;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29547));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_23 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29548));
		NullCheck(L_23);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(L_23, _stringLiteralBD9E4F36B748F19339571133F1334F19F10E6518, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29548));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29549));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),33));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_25 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29550));
		NullCheck(L_24);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_24, L_25, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29550));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29551));
	}

IL_00a7:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29552));
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),18));
		V_6 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29553));
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00d7;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29554));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_28 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29555));
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_28, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29555));
		float L_30 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29556));
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Length__ctor_mFF11DAE709F70F30061EF7BDB3E7B4E18BB827CF((&L_31), ((float)il2cpp_codegen_multiply(L_30, (100.0f))), (int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29556));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29557));
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_32;
		L_32 = StyleLength_op_Implicit_m587FA2633E50FC6BD8F695B35675BBFE179A6E90(L_31, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29557));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29558));
		NullCheck(L_29);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(71, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_29, L_32);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29558));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29559));
		goto IL_00f6;
	}

IL_00d7:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29560));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_33 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29561));
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_33, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29561));
		float L_35 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29562));
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Length__ctor_mFF11DAE709F70F30061EF7BDB3E7B4E18BB827CF((&L_36), ((float)il2cpp_codegen_multiply(L_35, (100.0f))), (int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29562));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29563));
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_37;
		L_37 = StyleLength_op_Implicit_m587FA2633E50FC6BD8F695B35675BBFE179A6E90(L_36, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29563));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29564));
		NullCheck(L_34);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(45, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_34, L_37);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29564));
	}

IL_00f6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29565));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29566));
		bool L_38;
		L_38 = Slider_3_get_showMarksLabel_mEF457D126A7FE19693D0DD9247F1690E58194CE4_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 81));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29566));
		V_7 = L_38;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29567));
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_016c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29568));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29569));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_40 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29570));
		NullCheck(L_40);
		int32_t L_41;
		L_41 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_40, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29570));
		V_9 = (bool)((((int32_t)L_41) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29571));
		bool L_42 = V_9;
		if (!L_42)
		{
			goto IL_0126;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29572));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29573));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_43 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29574));
		NullCheck(L_43);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_44;
		L_44 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_43, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29574));
		V_8 = ((TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0*)CastclassClass((RuntimeObject*)L_44, TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_il2cpp_TypeInfo_var));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29575));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29576));
		goto IL_015a;
	}

IL_0126:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29577));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29578));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29579));
		TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* L_45 = (TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0*)il2cpp_codegen_object_new(TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_il2cpp_TypeInfo_var);
		TextElement__ctor_mB52112242702EEDC8E13BF444AB19E97329B7CE5(L_45, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29579));
		TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* L_46 = L_45;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29580));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_46);
		VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_46, _stringLiteral28F5556D5186BD01F2BC1E9B0C7A212EE57DA762, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29580));
		TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* L_47 = L_46;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29581));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_47);
		VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_47, (int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29581));
		V_8 = L_47;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29582));
		TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* L_48 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29583));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_48);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_48, _stringLiteral28F5556D5186BD01F2BC1E9B0C7A212EE57DA762, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29583));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29584));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_49 = V_4;
		TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* L_50 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29585));
		NullCheck(L_49);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_49, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_50, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29585));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29586));
	}

IL_015a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29587));
		TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* L_51 = V_8;
		il2cpp_codegen_memcpy(L_52, V_2, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29588));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		String_t* L_53;
		L_53 = VirtualFuncInvoker1Invoker< String_t*, Il2CppFullySharedGenericStruct >::Invoke(233, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, L_52);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29588));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29589));
		NullCheck(L_51);
		VirtualActionInvoker1< String_t* >::Invoke(274, L_51, L_53);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29589));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29590));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29591));
		goto IL_0186;
	}

IL_016c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29592));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_54 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29593));
		NullCheck(L_54);
		int32_t L_55;
		L_55 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_54, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29593));
		V_10 = (bool)((((int32_t)L_55) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29594));
		bool L_56 = V_10;
		if (!L_56)
		{
			goto IL_0186;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29595));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29596));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_57 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29597));
		NullCheck(L_57);
		VisualElement_Clear_m201F95F3031691823F39BAEC5ED378C82F34AC7F(L_57, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29597));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29598));
	}

IL_0186:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29599));
		int32_t L_58 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29600));
		int32_t L_59 = V_0;
		il2cpp_codegen_memcpy(L_60, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),19)), SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29601));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (Il2CppFullySharedGenericStruct*)L_61, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29601));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29602));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		VirtualActionInvoker4Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(237, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, L_59, L_60, L_61, (Il2CppFullySharedGenericStruct*)L_62);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29602));
		il2cpp_codegen_memcpy(V_1, L_62, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29603));
	}

IL_019f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29604));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29605));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		RuntimeObject* L_63;
		L_63 = BaseSlider_2_get_thumbComparer_mFA5827386358B531C8C93665C223668056C19079_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 82));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29605));
		il2cpp_codegen_memcpy(L_64, V_1, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29606));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (Il2CppFullySharedGenericStruct*)L_65, il2cpp_rgctx_method(method->klass->rgctx_data, 68));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29606));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29607));
		NullCheck(L_63);
		int32_t L_66;
		L_66 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 83), L_63, L_64, L_65);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29607));
		if ((((int32_t)L_66) > ((int32_t)0)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_67 = V_0;
		G_B21_0 = ((((int32_t)L_67) < ((int32_t)((int32_t)32)))? 1 : 0);
		goto IL_01bc;
	}

IL_01bb:
	{
		G_B21_0 = 0;
	}

IL_01bc:
	{
		V_11 = (bool)G_B21_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29608));
		bool L_68 = V_11;
		if (L_68)
		{
			goto IL_001c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29609));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_69 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),33));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29610));
		NullCheck(L_69);
		int32_t L_70;
		L_70 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_69, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29610));
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_70, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29611));
		goto IL_01ec;
	}

IL_01d6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29612));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29613));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_71 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),33));
		int32_t L_72 = V_12;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29614));
		NullCheck(L_71);
		VisualElement_RemoveAt_mE99E3CF051D264ACBCCB4318B3E023FAAB8779D7(L_71, L_72, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29614));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29615));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29616));
		int32_t L_73 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_73, 1));
	}

IL_01ec:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29617));
		int32_t L_74 = V_12;
		int32_t L_75 = V_0;
		V_13 = (bool)((((int32_t)((((int32_t)L_74) < ((int32_t)L_75))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29618));
		bool L_76 = V_13;
		if (L_76)
		{
			goto IL_01d6;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29619));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_RefreshCustomMarks_m3D288AE6DB4D87B5CEF95BE33498B36DF670758D_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28F5556D5186BD01F2BC1E9B0C7A212EE57DA762);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD9E4F36B748F19339571133F1334F19F10E6518);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_SliderMark_1_tB8F6A0BAA3B88EF293C6C6578230065BEF6EADE4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31));
	const uint32_t SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const SliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E L_2 = alloca(SizeOf_SliderMark_1_tB8F6A0BAA3B88EF293C6C6578230065BEF6EADE4);
	const SliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E L_33 = L_2;
	const SliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E L_54 = L_2;
	const SliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E L_3 = alloca(SizeOf_SliderMark_1_tB8F6A0BAA3B88EF293C6C6578230065BEF6EADE4);
	int32_t V_0 = 0;
	SliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E V_1 = alloca(SizeOf_SliderMark_1_tB8F6A0BAA3B88EF293C6C6578230065BEF6EADE4);
	memset(V_1, 0, SizeOf_SliderMark_1_tB8F6A0BAA3B88EF293C6C6578230065BEF6EADE4);
	float V_2 = 0.0f;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), V_1, (&V_2), (&V_3), (&V_8), (&V_11));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29620));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29621));
	int32_t G_B10_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29622));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29623));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29624));
		goto IL_0179;
	}

IL_0008:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29625));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29626));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24));
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29627));
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, SliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, L_1, (SliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29627));
		il2cpp_codegen_memcpy(V_1, L_2, SizeOf_SliderMark_1_tB8F6A0BAA3B88EF293C6C6578230065BEF6EADE4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29628));
		il2cpp_codegen_memcpy(L_3, V_1, SizeOf_SliderMark_1_tB8F6A0BAA3B88EF293C6C6578230065BEF6EADE4);
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),0)), SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29629));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (Il2CppFullySharedGenericStruct*)L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29629));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29630));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_get_highValue_mE32CCCB0FD016C10E2BFD953BB79A9208E21D247_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (Il2CppFullySharedGenericStruct*)L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 68));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29630));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29631));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		float L_7;
		L_7 = VirtualFuncInvoker3Invoker< float, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(236, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, L_4, L_5, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29631));
		V_2 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29632));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),33));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29633));
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29633));
		int32_t L_10 = V_0;
		V_4 = (bool)((((int32_t)L_9) > ((int32_t)L_10))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29634));
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29635));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29636));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),33));
		int32_t L_13 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29637));
		NullCheck(L_12);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_14;
		L_14 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_12, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29637));
		V_3 = L_14;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29638));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29639));
		goto IL_0089;
	}

IL_0054:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29640));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29641));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29642));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)il2cpp_codegen_object_new(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29642));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16 = L_15;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29643));
		NullCheck(L_16);
		VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(L_16, _stringLiteralBD9E4F36B748F19339571133F1334F19F10E6518, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29643));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_17 = L_16;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29644));
		NullCheck(L_17);
		VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(L_17, (int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29644));
		V_3 = L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29645));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29646));
		NullCheck(L_18);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(L_18, _stringLiteralBD9E4F36B748F19339571133F1334F19F10E6518, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29646));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29647));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_19 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),33));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29648));
		NullCheck(L_19);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_19, L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29648));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29649));
	}

IL_0089:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29650));
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),18));
		V_5 = (bool)((((int32_t)L_21) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29651));
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_00b8;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29652));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_23 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29653));
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29653));
		float L_25 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29654));
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Length__ctor_mFF11DAE709F70F30061EF7BDB3E7B4E18BB827CF((&L_26), ((float)il2cpp_codegen_multiply(L_25, (100.0f))), (int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29654));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29655));
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_27;
		L_27 = StyleLength_op_Implicit_m587FA2633E50FC6BD8F695B35675BBFE179A6E90(L_26, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29655));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29656));
		NullCheck(L_24);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(45, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_24, L_27);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29656));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29657));
		goto IL_00d6;
	}

IL_00b8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29658));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_28 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29659));
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_28, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29659));
		float L_30 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29660));
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Length__ctor_mFF11DAE709F70F30061EF7BDB3E7B4E18BB827CF((&L_31), ((float)il2cpp_codegen_multiply(L_30, (100.0f))), (int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29660));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29661));
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_32;
		L_32 = StyleLength_op_Implicit_m587FA2633E50FC6BD8F695B35675BBFE179A6E90(L_31, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29661));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29662));
		NullCheck(L_29);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(71, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_29, L_32);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29662));
	}

IL_00d6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29663));
		il2cpp_codegen_memcpy(L_33, V_1, SizeOf_SliderMark_1_tB8F6A0BAA3B88EF293C6C6578230065BEF6EADE4);
		String_t* L_34 = *(String_t**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),1));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29664));
		bool L_35;
		L_35 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_34, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29664));
		if (L_35)
		{
			goto IL_00ee;
		}
	}
	{
		bool L_36 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),23));
		G_B10_0 = ((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		goto IL_00ef;
	}

IL_00ee:
	{
		G_B10_0 = 1;
	}

IL_00ef:
	{
		V_6 = (bool)G_B10_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29665));
		bool L_37 = V_6;
		if (!L_37)
		{
			goto IL_0110;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29666));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29667));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_38 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29668));
		NullCheck(L_38);
		int32_t L_39;
		L_39 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_38, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29668));
		V_7 = (bool)((((int32_t)L_39) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29669));
		bool L_40 = V_7;
		if (!L_40)
		{
			goto IL_010d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29670));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_41 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29671));
		NullCheck(L_41);
		VisualElement_RemoveAt_mE99E3CF051D264ACBCCB4318B3E023FAAB8779D7(L_41, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29671));
	}

IL_010d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29672));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29673));
		goto IL_0174;
	}

IL_0110:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29674));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29675));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_42 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29676));
		NullCheck(L_42);
		int32_t L_43;
		L_43 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_42, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29676));
		V_9 = (bool)((((int32_t)L_43) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29677));
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_0132;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29678));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29679));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_45 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29680));
		NullCheck(L_45);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_46;
		L_46 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_45, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29680));
		V_8 = ((TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0*)CastclassClass((RuntimeObject*)L_46, TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_il2cpp_TypeInfo_var));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29681));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29682));
		goto IL_0165;
	}

IL_0132:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29683));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29684));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29685));
		TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* L_47 = (TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0*)il2cpp_codegen_object_new(TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_il2cpp_TypeInfo_var);
		TextElement__ctor_mB52112242702EEDC8E13BF444AB19E97329B7CE5(L_47, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29685));
		TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* L_48 = L_47;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29686));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_48);
		VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_48, _stringLiteral28F5556D5186BD01F2BC1E9B0C7A212EE57DA762, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29686));
		TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* L_49 = L_48;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29687));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_49);
		VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_49, (int32_t)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29687));
		V_8 = L_49;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29688));
		TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* L_50 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29689));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_50);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_50, _stringLiteral28F5556D5186BD01F2BC1E9B0C7A212EE57DA762, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29689));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29690));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_51 = V_3;
		TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* L_52 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29691));
		NullCheck(L_51);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_51, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_52, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29691));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29692));
	}

IL_0165:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29693));
		TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* L_53 = V_8;
		il2cpp_codegen_memcpy(L_54, V_1, SizeOf_SliderMark_1_tB8F6A0BAA3B88EF293C6C6578230065BEF6EADE4);
		String_t* L_55 = *(String_t**)il2cpp_codegen_get_instance_field_data_pointer(L_54, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),1));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29694));
		NullCheck(L_53);
		VirtualActionInvoker1< String_t* >::Invoke(274, L_53, L_55);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29694));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29695));
	}

IL_0174:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29696));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29697));
		int32_t L_56 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_0179:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29698));
		int32_t L_57 = V_0;
		RuntimeObject* L_58 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29699));
		NullCheck((RuntimeObject*)L_58);
		int32_t L_59;
		L_59 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 34), (RuntimeObject*)L_58);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29699));
		V_10 = (bool)((((int32_t)L_57) < ((int32_t)L_59))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29700));
		bool L_60 = V_10;
		if (L_60)
		{
			goto IL_0008;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29701));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_61 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),33));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29702));
		NullCheck(L_61);
		int32_t L_62;
		L_62 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_61, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29702));
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_62, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29703));
		goto IL_01b7;
	}

IL_01a1:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29704));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29705));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_63 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),33));
		int32_t L_64 = V_11;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29706));
		NullCheck(L_63);
		VisualElement_RemoveAt_mE99E3CF051D264ACBCCB4318B3E023FAAB8779D7(L_63, L_64, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29706));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29707));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29708));
		int32_t L_65 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
	}

IL_01b7:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29709));
		int32_t L_66 = V_11;
		RuntimeObject* L_67 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29710));
		NullCheck((RuntimeObject*)L_67);
		int32_t L_68;
		L_68 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 34), (RuntimeObject*)L_67);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29710));
		V_12 = (bool)((((int32_t)((((int32_t)L_66) < ((int32_t)L_68))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29711));
		bool L_69 = V_12;
		if (L_69)
		{
			goto IL_01a1;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29712));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetShowMarks_m26D8927A87530B7768301799A74A5F28FDC66CCC_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, bool ___0_newShowMarks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B12843E2C98BF0A69E743103E44E05F37A0E24F);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_newShowMarks));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29713));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29714));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29715));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29716));
		bool L_0 = ___0_newShowMarks;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),22), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29717));
		bool L_1 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),22));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29718));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this);
		VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this, _stringLiteral7B12843E2C98BF0A69E743103E44E05F37A0E24F, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29718));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29719));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29720));
		VirtualActionInvoker0::Invoke(239, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29720));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29721));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29722));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37)))->___showMarksProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29722));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29723));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetShowMarksLabel_m1E0E6D73299447C73CB3ABC75DDC01DEB479F83D_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, bool ___0_newShowMarksLabel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_newShowMarksLabel));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29724));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29725));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29726));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29727));
		bool L_0 = ___0_newShowMarksLabel;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),23), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29728));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29729));
		VirtualActionInvoker0::Invoke(239, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29729));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29730));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29731));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37)))->___showMarksLabelProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29731));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29732));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetCustomMarks_m96016CD27E61AC9289C6C16615954ABE6E7F9522_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, RuntimeObject* ___0_newCustomMarks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_newCustomMarks));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29733));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29734));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29735));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29736));
		RuntimeObject* L_0 = ___0_newCustomMarks;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29737));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29738));
		VirtualActionInvoker0::Invoke(239, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29738));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29739));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29740));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37)))->___customMarksProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29740));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29741));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetDisplayValueLabel_m3B166610B5092C0B7FB72EE50968911D1700C11A_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, int32_t ___0_newValueDisplayMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_newValueDisplayMode));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29742));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29743));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29744));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29745));
		int32_t L_0 = ___0_newValueDisplayMode;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),25), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29746));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29747));
		VirtualActionInvoker0::Invoke(239, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29747));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29748));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29749));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37)))->___displayValueLabelProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29749));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29750));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetRestrictedValues_m6732FE692BE6FAA9B3D8629529AA4C67CB54732C_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, int32_t ___0_newRestrictedValues, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_newRestrictedValues));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29751));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29752));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29753));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29754));
		int32_t L_0 = ___0_newRestrictedValues;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),26), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29755));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),15)), SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29756));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(206, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41)) ? L_1: *(void**)L_1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29756));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29757));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29758));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37)))->___restrictedValuesProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29758));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29759));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetScale_m942423AEBA78CD85FCC776804B094D53ED9E9717_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* ___0_newScale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_newScale));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29760));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29761));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29762));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29763));
		ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* L_0 = ___0_newScale;
		il2cpp_codegen_write_instance_field_data<ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),27), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29764));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29765));
		VirtualActionInvoker0::Invoke(239, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29765));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29766));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29767));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37)))->___scaleProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29767));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29768));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetTrackDisplayMode_m650AD7630A57BB3D2701A40F036F36B109239053_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, int32_t ___0_newTrackDisplayMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_newTrackDisplayMode));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29769));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29770));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29771));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29772));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),28));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29773));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37));
		String_t* L_1;
		L_1 = Slider_3_GetTrackDisplayTypeUssClassName_m0CFF96131A634D6A4B7EA870A8347B002B3D7BE8(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 87));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29773));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29774));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this);
		VisualElement_RemoveFromClassList_mA7A2EC202004DFCBF38C12B70C6218BF40D21220((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29774));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29775));
		int32_t L_2 = ___0_newTrackDisplayMode;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),28), L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29776));
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),28));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29777));
		String_t* L_4;
		L_4 = Slider_3_GetTrackDisplayTypeUssClassName_m0CFF96131A634D6A4B7EA870A8347B002B3D7BE8(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 87));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29777));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29778));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29778));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29779));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29780));
		VirtualActionInvoker0::Invoke(239, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29780));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29781));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29782));
		NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this);
		CallbackEventHandler_NotifyPropertyChanged_m9CA05CC71AABC3EB3A77B089D89EBCF999A24891((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)__this, (&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 37)))->___trackProperty), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29782));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29783));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_BindInputField_mF8D122C7643525FBA55D231DE9F9C4437FCE1703_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29784));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29785));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29786));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29787));
		Il2CppSharedGenericObject* L_0 = *(Il2CppSharedGenericObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),35));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29788));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		String_t* L_1;
		L_1 = BaseSlider_2_get_formatString_m64EDB5D3E4D541AAD87886AC72E8821942B76127_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 88));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29788));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29789));
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 89), (RuntimeObject*)L_0, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29789));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29790));
		Il2CppSharedGenericObject* L_2 = *(Il2CppSharedGenericObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),35));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29791));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033* L_3;
		L_3 = BaseSlider_2_get_formatFunction_mE64BDBEBC619D3D50D1BBE2CC0691EA5C8ED597A_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 91));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29791));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29792));
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker1< FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033* >::Invoke(3, il2cpp_rgctx_data(method->klass->rgctx_data, 89), (RuntimeObject*)L_2, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29792));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29793));
		Il2CppSharedGenericObject* L_4 = *(Il2CppSharedGenericObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),35));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29794));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		bool L_5;
		L_5 = BaseSlider_2_get_invalid_m69A4FEE6AB40F6B44C06DC60B0E7EB32DDA98D0E((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 73));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29794));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29795));
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker1< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 94), (RuntimeObject*)L_4, L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29795));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29796));
		Il2CppSharedGenericObject* L_6 = *(Il2CppSharedGenericObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),35));
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),15)), SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29797));
		NullCheck((RuntimeObject*)L_6);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 96), (RuntimeObject*)L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41)) ? L_7: *(void**)L_7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29797));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29798));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_SetShowInputField_mAFC115120666BC8188C7F482EDEDEF868F9272AC_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, bool ___0_newShowInputField, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	bool V_0 = false;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_newShowInputField));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29799));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29800));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29801));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29802));
		bool L_0 = ___0_newShowInputField;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),29), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29803));
		bool L_1 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),29));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29804));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29805));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29806));
		Il2CppSharedGenericObject* L_3 = *(Il2CppSharedGenericObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),35));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29807));
		EventCallback_1_t424C96066075D21342F190671F3D0ED8AB5900D6* L_4 = (EventCallback_1_t424C96066075D21342F190671F3D0ED8AB5900D6*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 99));
		EventCallback_1__ctor_mBA3BD165CC35A7B018369B8122344E8EB7C7D868(L_4, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 98)), il2cpp_rgctx_method(method->klass->rgctx_data, 100));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29807));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29808));
		bool L_5;
		L_5 = INotifyValueChangedExtensions_RegisterValueChangedCallback_TisIl2CppFullySharedGenericAny_m50E49B3920DDDB55FB3A9A3E3A3C28B944F17A83((RuntimeObject*)L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 101));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29808));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29809));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29810));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_6;
		L_6 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29810));
		V_1 = L_6;
		Il2CppSharedGenericObject* L_7 = *(Il2CppSharedGenericObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),35));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29811));
		Hierarchy_Add_mDDEF4932C9E9FC302755C45A9F7966AEEBC26648((&V_1), (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29811));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29812));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29813));
		goto IL_007d;
	}

IL_004d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29814));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29815));
		Il2CppSharedGenericObject* L_8 = *(Il2CppSharedGenericObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),35));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29816));
		EventCallback_1_t424C96066075D21342F190671F3D0ED8AB5900D6* L_9 = (EventCallback_1_t424C96066075D21342F190671F3D0ED8AB5900D6*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 99));
		EventCallback_1__ctor_mBA3BD165CC35A7B018369B8122344E8EB7C7D868(L_9, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 98)), il2cpp_rgctx_method(method->klass->rgctx_data, 100));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29816));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29817));
		bool L_10;
		L_10 = INotifyValueChangedExtensions_UnregisterValueChangedCallback_TisIl2CppFullySharedGenericAny_mCA080B8D2EE1011CBEEC2A62C3582F0FC00717AC((RuntimeObject*)L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 102));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29817));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29818));
		Il2CppSharedGenericObject* L_11 = *(Il2CppSharedGenericObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),35));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29819));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_11);
		VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29819));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29820));
	}

IL_007d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29821));
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),15)), SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29822));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(206, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41)) ? L_12: *(void**)L_12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29822));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29823));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_OnInputFieldValueChanged_m94FEB8D51562BD395A710F5B69883703030FC2AC_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* ___0_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_evt));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29824));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29825));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29826));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29827));
		ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* L_0 = ___0_evt;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29828));
		NullCheck(L_0);
		ChangeEvent_1_get_newValue_m83811A7602CB9AC9F15F7638C6BF3CE866A941ED_inline(L_0, (Il2CppFullySharedGenericAny*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 104));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29828));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29829));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_set_value_mCA4DEFB0DD712279EC029F5BA93A3F9888B178E6((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4): *(void**)L_1), il2cpp_rgctx_method(method->klass->rgctx_data, 105));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29829));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29830));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_ClearThumbsActiveState_mBD5D5457B3929990E3B499945B2CA4EAF2DF0B6F_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thumb_t93918EA28AB7D7A87A976861423C11037819B679_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thumb_t93918EA28AB7D7A87A976861423C11037819B679_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70482276F3497E5EEFDF5E02F1CBB3BC2A885FC0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Thumb_t93918EA28AB7D7A87A976861423C11037819B679* V_1 = NULL;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29831));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29832));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29833));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29834));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29835));
		goto IL_0029;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29836));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29837));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),34));
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29838));
		NullCheck(L_0);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2;
		L_2 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29838));
		V_1 = ((Thumb_t93918EA28AB7D7A87A976861423C11037819B679*)CastclassClass((RuntimeObject*)L_2, Thumb_t93918EA28AB7D7A87A976861423C11037819B679_il2cpp_TypeInfo_var));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29839));
		Thumb_t93918EA28AB7D7A87A976861423C11037819B679* L_3 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29840));
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_3);
		VisualElement_RemoveFromClassList_mA7A2EC202004DFCBF38C12B70C6218BF40D21220((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_3, _stringLiteral70482276F3497E5EEFDF5E02F1CBB3BC2A885FC0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29840));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29841));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29842));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29843));
		int32_t L_5 = V_0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),34));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29844));
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29844));
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)L_7))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29845));
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0005;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29846));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_GetRestrictedValue_mE7365920EDB407F489F55F0500B824E43017B2AA_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, Il2CppFullySharedGenericAny ___0_newValue, bool ___1_ctrlKey, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41));
	const uint32_t SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	const Il2CppFullySharedGenericAny L_26 = L_9;
	const Il2CppFullySharedGenericAny L_27 = L_9;
	const Il2CppFullySharedGenericStruct L_15 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_18 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_20 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	memset(V_6, 0, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41)) ? ___0_newValue : &___0_newValue), (&___1_ctrlKey));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29847));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29848));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29849));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29850));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29851));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(227, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29851));
		V_1 = L_0;
		int32_t L_1 = V_1;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3;
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
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29852));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_7;
		memset((&L_7), 0, sizeof(L_7));
		Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline((&L_7), (void*)L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29852));
		V_2 = L_7;
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_8 = V_2;
		V_0 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29853));
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41)) ? ___0_newValue : &___0_newValue), SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29854));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD >::Invoke(229, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41)) ? L_9: *(void**)L_9), L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29854));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29855));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29856));
		goto IL_0058;
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29857));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29858));
		int32_t L_11 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29859));
		Il2CppFullySharedGenericStruct* L_12;
		L_12 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&V_0), L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 106));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29859));
		int32_t L_13 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29860));
		Il2CppFullySharedGenericStruct* L_14;
		L_14 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&V_0), L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 106));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29860));
		il2cpp_codegen_memcpy(L_15, L_14, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),19)), SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		bool L_17 = ___1_ctrlKey;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29861));
		Slider_3_GetRestrictedThumbValue_mB8DD2F56997D87F8B5DFA1B8E4BF274BD9BB1DB0(__this, il2cpp_codegen_memcpy(L_18, L_15, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3), il2cpp_codegen_memcpy(L_19, L_16, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3), L_17, (&V_4), (Il2CppFullySharedGenericStruct*)L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29861));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_12, L_20, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23), (void**)(Il2CppFullySharedGenericStruct*)L_12, (void*)L_20);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29862));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29863));
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29864));
		int32_t L_22 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29865));
		int32_t L_23;
		L_23 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 108));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29865));
		V_5 = (bool)((((int32_t)L_22) < ((int32_t)L_23))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29866));
		bool L_24 = V_5;
		if (L_24)
		{
			goto IL_0029;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29867));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_25 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29868));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		VirtualActionInvoker2Invoker< Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny* >::Invoke(228, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, L_25, (Il2CppFullySharedGenericAny*)L_26);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29868));
		il2cpp_codegen_memcpy(V_6, L_26, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		goto IL_0073;
	}

IL_0073:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29869));
		il2cpp_codegen_memcpy(L_27, V_6, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_27, SizeOf_TValue_t5BA76FD63C6D6AA13FFEFE894C3B84177F7013D4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_RestrictedThumbValue_mAEC435A64252DCABB7CAC3C0A974BC5B5CE2CE5C_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, Il2CppFullySharedGenericStruct ___0_newValue, Il2CppFullySharedGenericStruct ___1_stepValue, int32_t* ___2_stepOrMarkIndex, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RestrictedValuesPolicy_t2EB683A5541CB4354485D70C81B711C4AD297E2E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_27 = L_14;
	const Il2CppFullySharedGenericStruct L_34 = L_14;
	const Il2CppFullySharedGenericStruct L_35 = L_14;
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_28 = L_19;
	const Il2CppFullySharedGenericStruct L_20 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_32 = L_20;
	const Il2CppFullySharedGenericStruct L_33 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	Il2CppFullySharedGenericStruct V_5 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	memset(V_5, 0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23)) ? ___0_newValue : &___0_newValue), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23)) ? ___1_stepValue : &___1_stepValue), (&___2_stepOrMarkIndex));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29870));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29871));
	int32_t G_B14_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B27_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29872));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29873));
		Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF* L_0 = *(Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),36));
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29874));
		Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF* L_1 = (Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 110));
		Func_2__ctor_m3B0C0BD3210EC08237EF83CA427548DB92DD41C1(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 111)), il2cpp_rgctx_method(method->klass->rgctx_data, 112));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29874));
		il2cpp_codegen_write_instance_field_data<Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),36), L_1);
	}

IL_001b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29875));
		Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF* L_2 = *(Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),37));
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29876));
		Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF* L_3 = (Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 110));
		Func_2__ctor_m3B0C0BD3210EC08237EF83CA427548DB92DD41C1(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 113)), il2cpp_rgctx_method(method->klass->rgctx_data, 112));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29876));
		il2cpp_codegen_write_instance_field_data<Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),37), L_3);
	}

IL_0035:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29877));
		int32_t* L_4 = ___2_stepOrMarkIndex;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_4, (int32_t)(-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29878));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29879));
		int32_t L_5;
		L_5 = Slider_3_get_restrictedValues_m4B49225E63D7156F822BDD7C17E278ADBE3FE4D4_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 114));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29879));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)4)))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_004f;
	}

IL_004b:
	{
		V_1 = (bool)1;
		goto IL_0051;
	}

IL_004f:
	{
		V_1 = (bool)0;
	}

IL_0051:
	{
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24));
		V_3 = L_9;
		RuntimeObject* L_10 = V_3;
		if (!L_10)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_11 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29880));
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 34), (RuntimeObject*)L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29880));
		G_B14_0 = ((((int32_t)L_12) > ((int32_t)0))? 1 : 0);
		goto IL_006a;
	}

IL_0069:
	{
		G_B14_0 = 0;
	}

IL_006a:
	{
		G_B16_0 = G_B14_0;
		goto IL_006d;
	}

IL_006c:
	{
		G_B16_0 = 0;
	}

IL_006d:
	{
		V_2 = (bool)G_B16_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29881));
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_008c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29882));
		il2cpp_codegen_memcpy(L_14, ___0_newValue, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		RuntimeObject* L_15 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29883));
		NullCheck((RuntimeObject*)L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 34), (RuntimeObject*)L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29883));
		Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF* L_17 = *(Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),36));
		int32_t* L_18 = ___2_stepOrMarkIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29884));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_FindClosestThumbValue_mCDAAF997419AC6278684BC7CB682C8C9F11D5B74((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, il2cpp_codegen_memcpy(L_19, L_14, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3), L_16, L_17, L_18, (Il2CppFullySharedGenericStruct*)L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29884));
		il2cpp_codegen_memcpy(___0_newValue, L_20, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	}

IL_008c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29885));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29886));
		int32_t L_21;
		L_21 = Slider_3_get_restrictedValues_m4B49225E63D7156F822BDD7C17E278ADBE3FE4D4_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 114));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29886));
		V_0 = L_21;
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)1)))
		{
			goto IL_009f;
		}
	}
	{
		goto IL_0099;
	}

IL_0099:
	{
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)3)))
		{
			goto IL_009f;
		}
	}
	{
		goto IL_00a3;
	}

IL_009f:
	{
		V_1 = (bool)1;
		goto IL_00a5;
	}

IL_00a3:
	{
		V_1 = (bool)0;
	}

IL_00a5:
	{
		bool L_24 = V_1;
		if (!L_24)
		{
			goto IL_00b0;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29887));
		bool L_25;
		L_25 = Slider_3_HasValidStep_mBBC9AF42A9B89E5FBBF411D609F212566AA1E572(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 79));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29887));
		G_B27_0 = ((int32_t)(L_25));
		goto IL_00b1;
	}

IL_00b0:
	{
		G_B27_0 = 0;
	}

IL_00b1:
	{
		V_4 = (bool)G_B27_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29888));
		bool L_26 = V_4;
		if (!L_26)
		{
			goto IL_00ce;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29889));
		il2cpp_codegen_memcpy(L_27, ___0_newValue, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(L_28, ___1_stepValue, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29890));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		int32_t L_29;
		L_29 = VirtualFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericStruct >::Invoke(238, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, L_28);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29890));
		Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF* L_30 = *(Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),37));
		int32_t* L_31 = ___2_stepOrMarkIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29891));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_FindClosestThumbValue_mCDAAF997419AC6278684BC7CB682C8C9F11D5B74((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, il2cpp_codegen_memcpy(L_32, L_27, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3), L_29, L_30, L_31, (Il2CppFullySharedGenericStruct*)L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29891));
		il2cpp_codegen_memcpy(___0_newValue, L_33, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	}

IL_00ce:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29892));
		il2cpp_codegen_memcpy(L_34, ___0_newValue, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(V_5, L_34, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		goto IL_00d3;
	}

IL_00d3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29893));
		il2cpp_codegen_memcpy(L_35, V_5, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_35, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_GetCustomMarkValue_m67E46E23855B3860166639BC7A204142F88D551A_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_4 = L_3;
	const uint32_t SizeOf_SliderMark_1_tB8F6A0BAA3B88EF293C6C6578230065BEF6EADE4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31));
	const SliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E L_2 = alloca(SizeOf_SliderMark_1_tB8F6A0BAA3B88EF293C6C6578230065BEF6EADE4);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	memset(V_0, 0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29894));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29895));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29896));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29897));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),24));
		int32_t L_1 = ___0_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29898));
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, SliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, L_1, (SliderMark_1_t36205455C4BD61020FB86BDCF9DCFDF0D00BF03E*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29898));
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),0)), SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		goto IL_0015;
	}

IL_0015:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29899));
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_GetStepValue_mBDAA2347A5B9A72EE0F5BA5EFC84BE2E27B408E7_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_4 = L_1;
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	memset(V_0, 0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29900));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29901));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29902));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29903));
		int32_t L_0 = ___0_index;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21),19)), SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29904));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		BaseSlider_2_get_lowValue_m74146A8D58B65D081952EFF92CB8EC73174BCCE3_inline((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29904));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29905));
		NullCheck((BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this);
		VirtualActionInvoker4Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(237, (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84*)__this, L_0, L_1, L_2, (Il2CppFullySharedGenericStruct*)L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29905));
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		goto IL_0017;
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29906));
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3_GetRestrictedThumbValue_mB8DD2F56997D87F8B5DFA1B8E4BF274BD9BB1DB0_gshared (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, Il2CppFullySharedGenericStruct ___0_newValue, Il2CppFullySharedGenericStruct ___1_stepValue, bool ___2_ctrlKey, int32_t* ___3_stepOrMarkIndex, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RestrictedValuesPolicy_t2EB683A5541CB4354485D70C81B711C4AD297E2E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_12 = L_6;
	const Il2CppFullySharedGenericStruct L_13 = L_6;
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	memset(V_2, 0, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23)) ? ___0_newValue : &___0_newValue), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23)) ? ___1_stepValue : &___1_stepValue), (&___2_ctrlKey), (&___3_stepOrMarkIndex));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29907));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29908));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29909));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29910));
		int32_t* L_0 = ___3_stepOrMarkIndex;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_0, (int32_t)(-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29911));
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),26));
		V_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29912));
		int32_t L_2 = V_1;
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29913));
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_002a;
			}
			case 4:
			{
				goto IL_002f;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_002a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29914));
		bool L_4 = ___2_ctrlKey;
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29915));
		goto IL_0041;
	}

IL_002f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29916));
		bool L_5 = ___2_ctrlKey;
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29917));
		goto IL_0041;
	}

IL_0034:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29918));
		il2cpp_codegen_memcpy(L_6, ___0_newValue, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(L_7, ___1_stepValue, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		int32_t* L_8 = ___3_stepOrMarkIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29919));
		Slider_3_RestrictedThumbValue_mAEC435A64252DCABB7CAC3C0A974BC5B5CE2CE5C(__this, il2cpp_codegen_memcpy(L_9, L_6, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3), il2cpp_codegen_memcpy(L_10, L_7, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3), L_8, (Il2CppFullySharedGenericStruct*)L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 118));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29919));
		il2cpp_codegen_memcpy(V_2, L_11, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		goto IL_0045;
	}

IL_0041:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29920));
		il2cpp_codegen_memcpy(L_12, ___0_newValue, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(V_2, L_12, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		goto IL_0045;
	}

IL_0045:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29921));
		il2cpp_codegen_memcpy(L_13, V_2, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_TScalar_t21F2D9BFBFAF53A98C3D8A36D224CC4DCC8002B3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Slider_3_GetOrientationClassName_m068A18C999AE432E8FA20909A357AE63E69F4983_gshared (int32_t ___0_enumValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C9A60B92D5B3C991E271D79DB8573AF17B106C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B9879F8A6A410FA35922B7796206F8D7190EAE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9A9CC34BFB27E319904EB3CAC4099ABB8D83F42);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_enumValue));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29922));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29923));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29924));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29925));
		if (1)
		{
			goto IL_0005;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29926));
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29927));
		int32_t L_0 = ___0_enumValue;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = ___0_enumValue;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_0020;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29928));
		V_0 = _stringLiteral7B9879F8A6A410FA35922B7796206F8D7190EAE2;
		goto IL_0028;
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29929));
		V_0 = _stringLiteralB9A9CC34BFB27E319904EB3CAC4099ABB8D83F42;
		goto IL_0028;
	}

IL_0020:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29930));
		V_0 = _stringLiteral2C9A60B92D5B3C991E271D79DB8573AF17B106C9;
		goto IL_0028;
	}

IL_0028:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29931));
		if (1)
		{
			goto IL_002c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29932));
	}

IL_002c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29933));
		String_t* L_2 = V_0;
		V_1 = L_2;
		goto IL_0030;
	}

IL_0030:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29934));
		String_t* L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Slider_3_GetValueDisplayModeUssClassName_m06C2D1EE389EF5F7AD32304D8A44CEA649B9017B_gshared (int32_t ___0_enumValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B9779B4482B5757A62E35A78F836C7223060D22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA182D778DF6139F5811DBB9A20D32AD0149CB8A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB5B4572F82FD6845056019D1A00533D7667C81B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC35ADE47D32B2B14174862582BB87C3177473D2C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_enumValue));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29935));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29936));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29937));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29938));
		if (1)
		{
			goto IL_0005;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29939));
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29940));
		int32_t L_0 = ___0_enumValue;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0029;
			}
		}
	}
	{
		goto IL_0031;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29941));
		V_0 = _stringLiteralA182D778DF6139F5811DBB9A20D32AD0149CB8A6;
		goto IL_0039;
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29942));
		V_0 = _stringLiteral0B9779B4482B5757A62E35A78F836C7223060D22;
		goto IL_0039;
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29943));
		V_0 = _stringLiteralAB5B4572F82FD6845056019D1A00533D7667C81B;
		goto IL_0039;
	}

IL_0031:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29944));
		V_0 = _stringLiteralC35ADE47D32B2B14174862582BB87C3177473D2C;
		goto IL_0039;
	}

IL_0039:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29945));
		if (1)
		{
			goto IL_003d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29946));
	}

IL_003d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29947));
		String_t* L_1 = V_0;
		V_1 = L_1;
		goto IL_0041;
	}

IL_0041:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29948));
		String_t* L_2 = V_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Slider_3_GetTrackDisplayTypeUssClassName_m0CFF96131A634D6A4B7EA870A8347B002B3D7BE8_gshared (int32_t ___0_enumValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3868ACD899AB3CDEA1DA06F3E399FA662E69562A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75F68197F0EEB77B4867DD7660A26C5EEA3442BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral855C653EF804C504EB79C72BC912701BC04CAD17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E533D9D3DD401E92B5EA23D5D26399EB2EF7E00);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_enumValue));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29949));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29950));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29951));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29952));
		if (1)
		{
			goto IL_0005;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29953));
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29954));
		int32_t L_0 = ___0_enumValue;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0029;
			}
		}
	}
	{
		goto IL_0031;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29955));
		V_0 = _stringLiteral855C653EF804C504EB79C72BC912701BC04CAD17;
		goto IL_0039;
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29956));
		V_0 = _stringLiteral8E533D9D3DD401E92B5EA23D5D26399EB2EF7E00;
		goto IL_0039;
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29957));
		V_0 = _stringLiteral3868ACD899AB3CDEA1DA06F3E399FA662E69562A;
		goto IL_0039;
	}

IL_0031:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29958));
		V_0 = _stringLiteral75F68197F0EEB77B4867DD7660A26C5EEA3442BF;
		goto IL_0039;
	}

IL_0039:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29959));
		if (1)
		{
			goto IL_003d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29960));
	}

IL_003d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29961));
		String_t* L_1 = V_0;
		V_1 = L_1;
		goto IL_0041;
	}

IL_0041:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29962));
		String_t* L_2 = V_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_3__cctor_mBF3FFB56E4D2B092C867DECF44F284DCC6C7535B_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09FD22DA3CEFEACE96CB263E19361486F432DB29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E1153B903B6D0BC0918581AF40C92AE0685C641);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EF8FF032B3EF9324025A65A946F1B5D8ADEC385);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50BAE9CA8DD81443EAB70C4AC3E027B6BB03FF19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E98B1502C11CA8B7A1C602C9987402A01DF2ABC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6B63F7FB591D400CED221156DD37772BD32B9A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29963));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 29964));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29965));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29966));
		BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E L_0;
		memset((&L_0), 0, sizeof(L_0));
		BindingId__ctor_m1193F0EA5249BA3CF38D7299139D6518F906851C((&L_0), _stringLiteral4E1153B903B6D0BC0918581AF40C92AE0685C641, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29966));
		((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksProperty = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksProperty))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksProperty))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksProperty))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksProperty))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksProperty))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksProperty))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksProperty))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksProperty))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksProperty))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksProperty))->___m_Path), (void*)NULL);
		#endif
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29967));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29968));
		BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E L_1;
		memset((&L_1), 0, sizeof(L_1));
		BindingId__ctor_m1193F0EA5249BA3CF38D7299139D6518F906851C((&L_1), _stringLiteral4EF8FF032B3EF9324025A65A946F1B5D8ADEC385, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29968));
		((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksLabelProperty = L_1;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksLabelProperty))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksLabelProperty))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksLabelProperty))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksLabelProperty))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksLabelProperty))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksLabelProperty))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksLabelProperty))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksLabelProperty))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksLabelProperty))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___showMarksLabelProperty))->___m_Path), (void*)NULL);
		#endif
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29969));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29970));
		BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E L_2;
		memset((&L_2), 0, sizeof(L_2));
		BindingId__ctor_m1193F0EA5249BA3CF38D7299139D6518F906851C((&L_2), _stringLiteral50BAE9CA8DD81443EAB70C4AC3E027B6BB03FF19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29970));
		((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___customMarksProperty = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___customMarksProperty))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___customMarksProperty))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___customMarksProperty))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___customMarksProperty))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___customMarksProperty))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___customMarksProperty))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___customMarksProperty))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___customMarksProperty))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___customMarksProperty))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___customMarksProperty))->___m_Path), (void*)NULL);
		#endif
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29971));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29972));
		BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E L_3;
		memset((&L_3), 0, sizeof(L_3));
		BindingId__ctor_m1193F0EA5249BA3CF38D7299139D6518F906851C((&L_3), _stringLiteralC6B63F7FB591D400CED221156DD37772BD32B9A8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29972));
		((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___displayValueLabelProperty = L_3;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___displayValueLabelProperty))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___displayValueLabelProperty))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___displayValueLabelProperty))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___displayValueLabelProperty))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___displayValueLabelProperty))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___displayValueLabelProperty))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___displayValueLabelProperty))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___displayValueLabelProperty))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___displayValueLabelProperty))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___displayValueLabelProperty))->___m_Path), (void*)NULL);
		#endif
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29973));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29974));
		BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E L_4;
		memset((&L_4), 0, sizeof(L_4));
		BindingId__ctor_m1193F0EA5249BA3CF38D7299139D6518F906851C((&L_4), _stringLiteral6E98B1502C11CA8B7A1C602C9987402A01DF2ABC, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29974));
		((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___restrictedValuesProperty = L_4;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___restrictedValuesProperty))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___restrictedValuesProperty))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___restrictedValuesProperty))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___restrictedValuesProperty))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___restrictedValuesProperty))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___restrictedValuesProperty))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___restrictedValuesProperty))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___restrictedValuesProperty))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___restrictedValuesProperty))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___restrictedValuesProperty))->___m_Path), (void*)NULL);
		#endif
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29975));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29976));
		BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E L_5;
		memset((&L_5), 0, sizeof(L_5));
		BindingId__ctor_m1193F0EA5249BA3CF38D7299139D6518F906851C((&L_5), _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29976));
		((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___scaleProperty = L_5;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___scaleProperty))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___scaleProperty))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___scaleProperty))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___scaleProperty))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___scaleProperty))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___scaleProperty))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___scaleProperty))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___scaleProperty))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___scaleProperty))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___scaleProperty))->___m_Path), (void*)NULL);
		#endif
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29977));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29978));
		BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E L_6;
		memset((&L_6), 0, sizeof(L_6));
		BindingId__ctor_m1193F0EA5249BA3CF38D7299139D6518F906851C((&L_6), _stringLiteral09FD22DA3CEFEACE96CB263E19361486F432DB29, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 29978));
		((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___trackProperty = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___trackProperty))->___m_PropertyPath))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___trackProperty))->___m_PropertyPath))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___trackProperty))->___m_PropertyPath))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___trackProperty))->___m_PropertyPath))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___trackProperty))->___m_PropertyPath))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___trackProperty))->___m_PropertyPath))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___trackProperty))->___m_PropertyPath))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___trackProperty))->___m_PropertyPath))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___trackProperty))->___m_PropertyPath))->___m_AdditionalParts), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 37)))->___trackProperty))->___m_Path), (void*)NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallFrozenDictionary_2__ctor_mE4F6462151C79C1ED91EBBEF6128816C036E9892_gshared (SmallFrozenDictionary_2_t41C0C4A4052E17E2A4D0AC7210EDE36C604D45A6* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_source, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = ___0_source;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Comparer_m46CB1D13F7DB369D819F4C2397EAF293292FF2CF(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		FrozenDictionary_2__ctor_mA30E63CCE609F2CB0B0DBA8CEBF81443E1822B1A((FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_2 = ___0_source;
		NullCheck(L_2);
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_3;
		L_3 = Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4;
		L_4 = Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6((RuntimeObject*)L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____keys = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_4);
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_5 = ___0_source;
		NullCheck(L_5);
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_6;
		L_6 = Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7;
		L_7 = Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6((RuntimeObject*)L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		__this->____values = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* SmallFrozenDictionary_2_get_KeysCore_m1AE05EDCC40E337BD166FC2535C6F26854F12785_gshared (SmallFrozenDictionary_2_t41C0C4A4052E17E2A4D0AC7210EDE36C604D45A6* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____keys;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* SmallFrozenDictionary_2_get_ValuesCore_m9B795D3A53531148B5E2DAD61E4A36D5315EC375_gshared (SmallFrozenDictionary_2_t41C0C4A4052E17E2A4D0AC7210EDE36C604D45A6* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____values;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmallFrozenDictionary_2_get_CountCore_mFBCEEDE674DEFBF6A2FDC971FC4B727A06C50F07_gshared (SmallFrozenDictionary_2_t41C0C4A4052E17E2A4D0AC7210EDE36C604D45A6* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____keys;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8EF80EB947F78323C5BEAB098F00F5236A057AB8 SmallFrozenDictionary_2_GetEnumeratorCore_mD8A024E370B4892BDFA68EAAFF3040B7B88432C2_gshared (SmallFrozenDictionary_2_t41C0C4A4052E17E2A4D0AC7210EDE36C604D45A6* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____values;
		Enumerator_t8EF80EB947F78323C5BEAB098F00F5236A057AB8 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Enumerator__ctor_m3D2F482254DE4B06E4B482E0A42DCBF30180B7CA((&L_2), L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* SmallFrozenDictionary_2_GetValueRefOrNullRefCore_m08B1010C77198BD379340C72A9F29B4AD1AF8732_gshared (SmallFrozenDictionary_2_t41C0C4A4052E17E2A4D0AC7210EDE36C604D45A6* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tBF4365052FD4F2B5FD8E2998844C42DD2F6C6C04 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_tBF4365052FD4F2B5FD8E2998844C42DD2F6C6C04);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TKey_tBF4365052FD4F2B5FD8E2998844C42DD2F6C6C04);
	RuntimeObject* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NullCheck((FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532*)__this);
		RuntimeObject* L_0;
		L_0 = FrozenDictionary_2_get_Comparer_m3874268CD9839B437894F50851DCF04394632B0E_inline((FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		V_0 = L_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____keys;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0035;
	}

IL_0012:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_TKey_tBF4365052FD4F2B5FD8E2998844C42DD2F6C6C04);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_key : &___0_key), SizeOf_TKey_tBF4365052FD4F2B5FD8E2998844C42DD2F6C6C04);
		NullCheck(L_2);
		bool L_8;
		L_8 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____values;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		return ((Il2CppFullySharedGenericAny*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)));
	}

IL_0031:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0035:
	{
		int32_t L_12 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0012;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_15;
		L_15 = il2cpp_unsafe_null_ref<Il2CppFullySharedGenericAny>();
		return L_15;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallFrozenSet_1__ctor_mA69D003E92EFDAB6E57EF2C207AF12B210484379_gshared (SmallFrozenSet_1_tDE7B6B4C98EB8442065DEA04C14788EA1A071737* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_source, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = ___0_source;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_m3025B6666A254AEDE933EDE04AD66D456C52AD00_inline(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		FrozenSetInternalBase_2__ctor_m0F48FA325D657ADD9B71D35FDE03EF81A7CA83C3((FrozenSetInternalBase_2_tD90E9EAB085EBF69420B86C9D951CD4760B72778*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_2 = ___0_source;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3;
		L_3 = Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6((RuntimeObject*)L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* SmallFrozenSet_1_get_ItemsCore_mA2DB080CC979F472847EF41A9F4C69987C16E3EE_gshared (SmallFrozenSet_1_tDE7B6B4C98EB8442065DEA04C14788EA1A071737* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmallFrozenSet_1_get_CountCore_mBF8CADCFB2CC0E0F8BAEDF1727D41C848B7A6DC8_gshared (SmallFrozenSet_1_tDE7B6B4C98EB8442065DEA04C14788EA1A071737* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmallFrozenSet_1_FindItemIndex_m00E7ADA16B75CD28DCEC4205EF982E476FF8C29E_gshared (SmallFrozenSet_1_tDE7B6B4C98EB8442065DEA04C14788EA1A071737* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t2F1C021BD269FD0C976073FFD6273F2FB3CD1755 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t2F1C021BD269FD0C976073FFD6273F2FB3CD1755);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t2F1C021BD269FD0C976073FFD6273F2FB3CD1755);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0026;
	}

IL_000b:
	{
		CHECK_PAUSE_POINT;
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)__this);
		RuntimeObject* L_1;
		L_1 = FrozenSet_1_get_Comparer_mB3265D335E5104BC225CEFFFED328ACA8FC573D0_inline((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_item : &___0_item), SizeOf_T_t2F1C021BD269FD0C976073FFD6273F2FB3CD1755);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_t2F1C021BD269FD0C976073FFD6273F2FB3CD1755);
		NullCheck(L_1);
		bool L_7;
		L_7 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_6: *(void**)L_6));
		if (!L_7)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0022:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0026:
	{
		int32_t L_10 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 SmallFrozenSet_1_GetEnumeratorCore_mF936080B3DE54FE8F901A6BDC90B97F0B748692C_gshared (SmallFrozenSet_1_tDE7B6B4C98EB8442065DEA04C14788EA1A071737* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m387AC31F21D5AB2FB06304034A2536356A191C59((&L_1), L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallValueTypeComparableFrozenDictionary_2__ctor_m311B1B3A1978CC150B06B9992FF026F62A016A6B_gshared (SmallValueTypeComparableFrozenDictionary_2_tB1B3A39417FF529B18003501A6EB6D388EB2DCA6* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_source, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t7DF26078E558FFCCC01F9283F4FF38388468F983 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TKey_t7DF26078E558FFCCC01F9283F4FF38388468F983);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		FrozenDictionary_2__ctor_mA30E63CCE609F2CB0B0DBA8CEBF81443E1822B1A((FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532*)__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1 = ___0_source;
		NullCheck(L_1);
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_2;
		L_2 = Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3;
		L_3 = Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6((RuntimeObject*)L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12),0), L_3);
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_4 = ___0_source;
		NullCheck(L_4);
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_5;
		L_5 = Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6;
		L_6 = Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6((RuntimeObject*)L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12),1), L_6);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12),0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12),1));
		Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m8EE3DB1C1E6B93DE1E6E590D97BC6E937862B9F2(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12),0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12),0));
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_memcpy(L_13, (L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), SizeOf_TKey_t7DF26078E558FFCCC01F9283F4FF38388468F983);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12),2), L_13, SizeOf_TKey_t7DF26078E558FFCCC01F9283F4FF38388468F983);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* SmallValueTypeComparableFrozenDictionary_2_get_KeysCore_m493853214A1FC2A85A89CC1613768926783736D9_gshared (SmallValueTypeComparableFrozenDictionary_2_tB1B3A39417FF529B18003501A6EB6D388EB2DCA6* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12),0));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* SmallValueTypeComparableFrozenDictionary_2_get_ValuesCore_m569FBDE58FB598E7457E9CFD45753B73769BCC29_gshared (SmallValueTypeComparableFrozenDictionary_2_tB1B3A39417FF529B18003501A6EB6D388EB2DCA6* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12),1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8EF80EB947F78323C5BEAB098F00F5236A057AB8 SmallValueTypeComparableFrozenDictionary_2_GetEnumeratorCore_mC6EBFECD56F2C550101A05D6C13C9F02E8137B35_gshared (SmallValueTypeComparableFrozenDictionary_2_tB1B3A39417FF529B18003501A6EB6D388EB2DCA6* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12),0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12),1));
		Enumerator_t8EF80EB947F78323C5BEAB098F00F5236A057AB8 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Enumerator__ctor_m3D2F482254DE4B06E4B482E0A42DCBF30180B7CA((&L_2), L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmallValueTypeComparableFrozenDictionary_2_get_CountCore_mFD72BE19691519DBEEF5E94F866E98F181A0A070_gshared (SmallValueTypeComparableFrozenDictionary_2_tB1B3A39417FF529B18003501A6EB6D388EB2DCA6* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12),0));
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* SmallValueTypeComparableFrozenDictionary_2_GetValueRefOrNullRefCore_mB13AB26619777509FBC6D561460A9F1E625EBFA4_gshared (SmallValueTypeComparableFrozenDictionary_2_tB1B3A39417FF529B18003501A6EB6D388EB2DCA6* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t7DF26078E558FFCCC01F9283F4FF38388468F983 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t7DF26078E558FFCCC01F9283F4FF38388468F983);
	const Il2CppFullySharedGenericAny L_6 = L_1;
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t7DF26078E558FFCCC01F9283F4FF38388468F983);
	const Il2CppFullySharedGenericAny L_10 = L_2;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_key : &___0_key), SizeOf_TKey_t7DF26078E558FFCCC01F9283F4FF38388468F983);
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12),2)), SizeOf_TKey_t7DF26078E558FFCCC01F9283F4FF38388468F983);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_2: *(void**)L_2));
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12),0));
		V_0 = L_4;
		V_1 = 0;
		goto IL_004c;
	}

IL_001f:
	{
		CHECK_PAUSE_POINT;
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_5;
		L_5 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_key : &___0_key), SizeOf_TKey_t7DF26078E558FFCCC01F9283F4FF38388468F983);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_TKey_t7DF26078E558FFCCC01F9283F4FF38388468F983);
		NullCheck(L_5);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_10: *(void**)L_10));
		V_2 = L_11;
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13)
		{
			goto IL_0052;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12),1));
		int32_t L_15 = V_1;
		NullCheck(L_14);
		return ((Il2CppFullySharedGenericAny*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
	}

IL_0048:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_004c:
	{
		int32_t L_17 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_001f;
		}
	}

IL_0052:
	{
		Il2CppFullySharedGenericAny* L_20;
		L_20 = il2cpp_unsafe_null_ref<Il2CppFullySharedGenericAny>();
		return L_20;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallValueTypeComparableFrozenSet_1__ctor_m657A725A3DD22933C41102B623D64A9EFD61994B_gshared (SmallValueTypeComparableFrozenSet_1_t1572E9A676BE7FF6EFC9CCF1664312605BDC81D6* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_source, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t92030F4E9B362FB116B9BF222089BAB2DF48DE9E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t92030F4E9B362FB116B9BF222089BAB2DF48DE9E);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		FrozenSetInternalBase_2__ctor_m7F3154FBFA54B8DB1BCD11863DF9928AA3CDDD7A((FrozenSetInternalBase_2_t62C159D9357EA79697AE3E6E27DF518340282A45*)__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_1 = ___0_source;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2;
		L_2 = Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6((RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11),0), L_2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11),0));
		Array_Sort_TisIl2CppFullySharedGenericAny_m5CAADAB28D2C20F31F2E806FD1C0376C9F580710(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11),0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11),0));
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		il2cpp_codegen_memcpy(L_8, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t92030F4E9B362FB116B9BF222089BAB2DF48DE9E);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11),1), L_8, SizeOf_T_t92030F4E9B362FB116B9BF222089BAB2DF48DE9E);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* SmallValueTypeComparableFrozenSet_1_get_ItemsCore_m21E6EFEAEC76C859534ED85661FDA0CCBE5EE8FA_gshared (SmallValueTypeComparableFrozenSet_1_t1572E9A676BE7FF6EFC9CCF1664312605BDC81D6* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11),0));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 SmallValueTypeComparableFrozenSet_1_GetEnumeratorCore_m983BBEE38CE3AF1CF62C0E51ED927FD11FEB761B_gshared (SmallValueTypeComparableFrozenSet_1_t1572E9A676BE7FF6EFC9CCF1664312605BDC81D6* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11),0));
		Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m387AC31F21D5AB2FB06304034A2536356A191C59((&L_1), L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmallValueTypeComparableFrozenSet_1_get_CountCore_m94A006C694E525B38C915AB1598B30424B90A9B0_gshared (SmallValueTypeComparableFrozenSet_1_t1572E9A676BE7FF6EFC9CCF1664312605BDC81D6* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11),0));
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmallValueTypeComparableFrozenSet_1_FindItemIndex_m44B781C7F5919F32A10EF3416C775CB3534ED357_gshared (SmallValueTypeComparableFrozenSet_1_t1572E9A676BE7FF6EFC9CCF1664312605BDC81D6* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t92030F4E9B362FB116B9BF222089BAB2DF48DE9E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t92030F4E9B362FB116B9BF222089BAB2DF48DE9E);
	const Il2CppFullySharedGenericAny L_6 = L_1;
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t92030F4E9B362FB116B9BF222089BAB2DF48DE9E);
	const Il2CppFullySharedGenericAny L_10 = L_2;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? ___0_item : &___0_item), SizeOf_T_t92030F4E9B362FB116B9BF222089BAB2DF48DE9E);
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11),1)), SizeOf_T_t92030F4E9B362FB116B9BF222089BAB2DF48DE9E);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_2: *(void**)L_2));
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11),0));
		V_0 = L_4;
		V_1 = 0;
		goto IL_003f;
	}

IL_001f:
	{
		CHECK_PAUSE_POINT;
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_5;
		L_5 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? ___0_item : &___0_item), SizeOf_T_t92030F4E9B362FB116B9BF222089BAB2DF48DE9E);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_T_t92030F4E9B362FB116B9BF222089BAB2DF48DE9E);
		NullCheck(L_5);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_10: *(void**)L_10));
		V_2 = L_11;
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_14 = V_1;
		return L_14;
	}

IL_003b:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003f:
	{
		int32_t L_16 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001f;
		}
	}

IL_0045:
	{
		return (-1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallValueTypeDefaultComparerFrozenDictionary_2__ctor_m85D16AC13B43726E3B49D45AD1F40CFBBC9BA16D_gshared (SmallValueTypeDefaultComparerFrozenDictionary_2_t2A91C1B4BC85B6C8B1D7755B4DC1F6035B23971D* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_source, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		FrozenDictionary_2__ctor_mA30E63CCE609F2CB0B0DBA8CEBF81443E1822B1A((FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532*)__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1 = ___0_source;
		NullCheck(L_1);
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_2;
		L_2 = Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3;
		L_3 = Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6((RuntimeObject*)L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->____keys = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_3);
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_4 = ___0_source;
		NullCheck(L_4);
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_5;
		L_5 = Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6;
		L_6 = Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6((RuntimeObject*)L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		__this->____values = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* SmallValueTypeDefaultComparerFrozenDictionary_2_get_KeysCore_m281CBAD0BF0BC5AF4DA3755DF6CADEBE20734ABF_gshared (SmallValueTypeDefaultComparerFrozenDictionary_2_t2A91C1B4BC85B6C8B1D7755B4DC1F6035B23971D* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____keys;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* SmallValueTypeDefaultComparerFrozenDictionary_2_get_ValuesCore_m61FEE169B9A517362BF59A75E37FFDDFD6ED0BA2_gshared (SmallValueTypeDefaultComparerFrozenDictionary_2_t2A91C1B4BC85B6C8B1D7755B4DC1F6035B23971D* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____values;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8EF80EB947F78323C5BEAB098F00F5236A057AB8 SmallValueTypeDefaultComparerFrozenDictionary_2_GetEnumeratorCore_m505B1518BADA96C6FE389D8C47762BF0060A0BA4_gshared (SmallValueTypeDefaultComparerFrozenDictionary_2_t2A91C1B4BC85B6C8B1D7755B4DC1F6035B23971D* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____values;
		Enumerator_t8EF80EB947F78323C5BEAB098F00F5236A057AB8 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Enumerator__ctor_m3D2F482254DE4B06E4B482E0A42DCBF30180B7CA((&L_2), L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmallValueTypeDefaultComparerFrozenDictionary_2_get_CountCore_mF99403F0A9F0A44B7D9FDADCB2C9B239E53949A1_gshared (SmallValueTypeDefaultComparerFrozenDictionary_2_t2A91C1B4BC85B6C8B1D7755B4DC1F6035B23971D* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____keys;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* SmallValueTypeDefaultComparerFrozenDictionary_2_GetValueRefOrNullRefCore_m608FB497B9C2E39BE0E005E8F3AE6DE9A0849846_gshared (SmallValueTypeDefaultComparerFrozenDictionary_2_t2A91C1B4BC85B6C8B1D7755B4DC1F6035B23971D* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tF0B5F3BC40E3E2EC5254CC81A175F3EC0C957812 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_tF0B5F3BC40E3E2EC5254CC81A175F3EC0C957812);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_tF0B5F3BC40E3E2EC5254CC81A175F3EC0C957812);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____keys;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000b:
	{
		CHECK_PAUSE_POINT;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		il2cpp_codegen_memcpy(L_5, (L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), SizeOf_TKey_tF0B5F3BC40E3E2EC5254CC81A175F3EC0C957812);
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_key : &___0_key), SizeOf_TKey_tF0B5F3BC40E3E2EC5254CC81A175F3EC0C957812);
		NullCheck(L_1);
		bool L_7;
		L_7 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_6: *(void**)L_6));
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____values;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		return ((Il2CppFullySharedGenericAny*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)));
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_000b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_14;
		L_14 = il2cpp_unsafe_null_ref<Il2CppFullySharedGenericAny>();
		return L_14;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallValueTypeDefaultComparerFrozenSet_1__ctor_m65BCC7621A5B260D50124C1BB2C34BF99A7280B3_gshared (SmallValueTypeDefaultComparerFrozenSet_1_t92FB2791E5B14877BECD7B64AA760805F5D38442* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_source, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		FrozenSetInternalBase_2__ctor_m654589B2F2AFCD6CEB1334C1DEBC34B5EB53C317((FrozenSetInternalBase_2_t1B2D92D358E227A249302318323204E296E8A96C*)__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_1 = ___0_source;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2;
		L_2 = Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6((RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* SmallValueTypeDefaultComparerFrozenSet_1_get_ItemsCore_mB07776A905C96A455DF600273652F36142683129_gshared (SmallValueTypeDefaultComparerFrozenSet_1_t92FB2791E5B14877BECD7B64AA760805F5D38442* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 SmallValueTypeDefaultComparerFrozenSet_1_GetEnumeratorCore_mB7F86A56A1064F5AFC66E2EA10DE80E334B1CD88_gshared (SmallValueTypeDefaultComparerFrozenSet_1_t92FB2791E5B14877BECD7B64AA760805F5D38442* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m387AC31F21D5AB2FB06304034A2536356A191C59((&L_1), L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmallValueTypeDefaultComparerFrozenSet_1_get_CountCore_m57ABE24A2A817743650B3F9BFF88D673DF8985E6_gshared (SmallValueTypeDefaultComparerFrozenSet_1_t92FB2791E5B14877BECD7B64AA760805F5D38442* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmallValueTypeDefaultComparerFrozenSet_1_FindItemIndex_mEEAE63642C7D376DD005AEC6A488858730D8F910_gshared (SmallValueTypeDefaultComparerFrozenSet_1_t92FB2791E5B14877BECD7B64AA760805F5D38442* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7D2038EF4766FA60A23922A2055F9D069A0CA35 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tF7D2038EF4766FA60A23922A2055F9D069A0CA35);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tF7D2038EF4766FA60A23922A2055F9D069A0CA35);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0025;
	}

IL_000b:
	{
		CHECK_PAUSE_POINT;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_item : &___0_item), SizeOf_T_tF7D2038EF4766FA60A23922A2055F9D069A0CA35);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_tF7D2038EF4766FA60A23922A2055F9D069A0CA35);
		NullCheck(L_1);
		bool L_7;
		L_7 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_6: *(void**)L_6));
		if (!L_7)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0021:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0025:
	{
		int32_t L_10 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
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
int32_t SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_Multicast(SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* currentDelegate = reinterpret_cast<SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_x, ___1_y, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
int32_t SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_OpenStaticInvoker(SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_x, ___1_y);
}
int32_t SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_ClosedStaticInvoker(SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_x, ___1_y);
}
int32_t SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_ClosedInstInvoker(SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_x, ___1_y);
}
int32_t SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_OpenInstInvoker(SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	NullCheck(___0_x);
	return InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_x, ___1_y);
}
int32_t SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_OpenVirtualInvoker(SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	NullCheck(___0_x);
	return VirtualFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_x, ___1_y);
}
int32_t SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_OpenInterfaceInvoker(SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	NullCheck(___0_x);
	return InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_x, ___1_y);
}
int32_t SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_OpenGenericVirtualInvoker(SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	NullCheck(___0_x);
	return GenericVirtualFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(method, (RuntimeObject*)___0_x, ___1_y);
}
int32_t SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_OpenGenericInterfaceInvoker(SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	NullCheck(___0_x);
	return GenericInterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(method, (RuntimeObject*)___0_x, ___1_y);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortComparer__ctor_m722E539DFC744FD4C42D4787E809C4365A60F0D1_gshared (SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
			__this->___invoke_impl = (intptr_t)&SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_ClosedStaticInvoker;
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
						__this->___invoke_impl = (intptr_t)&SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortComparer_Invoke_m8834B0A8043B436662A22D074BB0FA529CF12604_gshared (SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_x, ___1_y, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortComparer_BeginInvoke_m550F8AF7F6FF8D988E7B1B7EB47EBEFC8ACC0293_gshared (SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	RuntimeClass* ___0_x_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___0_x_klass) ? Box(___0_x_klass, ___0_x) : (void*)___0_x);
	RuntimeClass* ___1_y_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___1_y_klass) ? Box(___1_y_klass, ___1_y) : (void*)___1_y);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortComparer_EndInvoke_m4747830CECFFD53995FA80639F15FEB463E6E427_gshared (SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortIndicesComparer_2_Compare_mE7B74FF9C99161C4447EF543B78A336D08096292_gshared (SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortIndicesComparer_2_t7165E0A15486445188B393E6EB7B7FA45EF2269D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t23244AED5D84447ADAA04CCE35DB1C96A62C134C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t23244AED5D84447ADAA04CCE35DB1C96A62C134C);
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_T_t23244AED5D84447ADAA04CCE35DB1C96A62C134C);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x), (&___1_y));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26759));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26760));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26761));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26762));
		Il2CppFullySharedGenericStruct* L_0 = *(Il2CppFullySharedGenericStruct**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		int32_t L_1 = ___0_x;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_t23244AED5D84447ADAA04CCE35DB1C96A62C134C;
		il2cpp_codegen_memcpy(L_4, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, (int32_t)L_3)))), SizeOf_T_t23244AED5D84447ADAA04CCE35DB1C96A62C134C);
		Il2CppFullySharedGenericStruct* L_5 = *(Il2CppFullySharedGenericStruct**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		int32_t L_6 = ___1_y;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		uint32_t L_8 = SizeOf_T_t23244AED5D84447ADAA04CCE35DB1C96A62C134C;
		il2cpp_codegen_memcpy(L_9, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, (int32_t)L_8)))), SizeOf_T_t23244AED5D84447ADAA04CCE35DB1C96A62C134C);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26763));
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5), (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), &L_11, L_10);
		int32_t L_13 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_12, L_11.method,L_11.thisPtr, L_4, L_9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26763));
		V_0 = L_13;
		goto IL_003f;
	}

IL_003f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26764));
		int32_t L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C  int32_t SortIndicesComparer_2_Compare_mE7B74FF9C99161C4447EF543B78A336D08096292_AdjustorThunk (RuntimeObject* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method)
{
	SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E>(__this);
	int32_t _returnValue;
	_returnValue = SortIndicesComparer_2_Compare_mE7B74FF9C99161C4447EF543B78A336D08096292(_thisAdjusted, ___0_x, ___1_y, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 SortJobDefer_2_Schedule_mB75384614976E2ECF4F25943615BF38317BE2814_gshared (SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortJobDefer_2_t6C562844623B9AC555400FF3FBC52CBDC80C04B1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_SegmentSort_t99A687B0EA9D524DD63F96A313FA869410B592E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_SegmentSortMerge_t99ACB8BA23DC8E818A5C5763D46B72B9329D36F6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const uint32_t SizeOf_U_t7BFE24CC61438A33AAAC525AFA4B9BCAA5CEB07A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t7BFE24CC61438A33AAAC525AFA4B9BCAA5CEB07A);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_U_t7BFE24CC61438A33AAAC525AFA4B9BCAA5CEB07A);
	const SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB L_3 = alloca(SizeOf_SegmentSort_t99A687B0EA9D524DD63F96A313FA869410B592E6);
	const SegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642 L_9 = alloca(SizeOf_SegmentSortMerge_t99ACB8BA23DC8E818A5C5763D46B72B9329D36F6);
	const SegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642 L_10 = alloca(SizeOf_SegmentSortMerge_t99ACB8BA23DC8E818A5C5763D46B72B9329D36F6);
	const SegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642 L_12 = alloca(SizeOf_SegmentSortMerge_t99ACB8BA23DC8E818A5C5763D46B72B9329D36F6);
	SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB V_0 = alloca(SizeOf_SegmentSort_t99A687B0EA9D524DD63F96A313FA869410B592E6);
	memset(V_0, 0, SizeOf_SegmentSort_t99A687B0EA9D524DD63F96A313FA869410B592E6);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642 V_2 = alloca(SizeOf_SegmentSortMerge_t99ACB8BA23DC8E818A5C5763D46B72B9329D36F6);
	memset(V_2, 0, SizeOf_SegmentSortMerge_t99ACB8BA23DC8E818A5C5763D46B72B9329D36F6);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_3;
	memset((&V_3), 0, sizeof(V_3));
	SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB V_4 = alloca(SizeOf_SegmentSort_t99A687B0EA9D524DD63F96A313FA869410B592E6);
	memset(V_4, 0, SizeOf_SegmentSort_t99A687B0EA9D524DD63F96A313FA869410B592E6);
	SegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642 V_5 = alloca(SizeOf_SegmentSortMerge_t99ACB8BA23DC8E818A5C5763D46B72B9329D36F6);
	memset(V_5, 0, SizeOf_SegmentSortMerge_t99ACB8BA23DC8E818A5C5763D46B72B9329D36F6);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_6;
	memset((&V_6), 0, sizeof(V_6));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_inputDeps));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0, (&V_1), V_2, (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26839));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26840));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26841));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26842));
		il2cpp_codegen_initobj((SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB*)V_4, SizeOf_SegmentSort_t99A687B0EA9D524DD63F96A313FA869410B592E6);
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = *(NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		il2cpp_codegen_write_instance_field_data<NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1>((SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_0);
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_1 = (((NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0))))->___m_ListData;
		il2cpp_codegen_write_instance_field_data<UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*>((SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1), L_1);
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_U_t7BFE24CC61438A33AAAC525AFA4B9BCAA5CEB07A);
		il2cpp_codegen_write_instance_field_data((SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2), L_2, SizeOf_U_t7BFE24CC61438A33AAAC525AFA4B9BCAA5CEB07A);
		il2cpp_codegen_write_instance_field_data<int32_t>((SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3), ((int32_t)1024));
		il2cpp_codegen_memcpy(L_3, V_4, SizeOf_SegmentSort_t99A687B0EA9D524DD63F96A313FA869410B592E6);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_SegmentSort_t99A687B0EA9D524DD63F96A313FA869410B592E6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26843));
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_4 = *(NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_5 = ___0_inputDeps;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26844));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6;
		L_6 = IJobParallelForDeferExtensions_ScheduleByRef_TisSegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB_TisIl2CppFullySharedGenericStruct_mB9A8AA44999BBCDD9F426F9998BEE4354299F0B6((SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB*)V_0, L_4, ((int32_t)1024), L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26844));
		V_1 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26845));
		il2cpp_codegen_initobj((SegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642*)V_5, SizeOf_SegmentSortMerge_t99ACB8BA23DC8E818A5C5763D46B72B9329D36F6);
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_7 = *(NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		il2cpp_codegen_write_instance_field_data<NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1>((SegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642*)V_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7),0), L_7);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_U_t7BFE24CC61438A33AAAC525AFA4B9BCAA5CEB07A);
		il2cpp_codegen_write_instance_field_data((SegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642*)V_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7),1), L_8, SizeOf_U_t7BFE24CC61438A33AAAC525AFA4B9BCAA5CEB07A);
		il2cpp_codegen_write_instance_field_data<int32_t>((SegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642*)V_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7),2), ((int32_t)1024));
		il2cpp_codegen_memcpy(L_9, V_5, SizeOf_SegmentSortMerge_t99ACB8BA23DC8E818A5C5763D46B72B9329D36F6);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_SegmentSortMerge_t99ACB8BA23DC8E818A5C5763D46B72B9329D36F6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26846));
		il2cpp_codegen_memcpy(L_10, V_2, SizeOf_SegmentSortMerge_t99ACB8BA23DC8E818A5C5763D46B72B9329D36F6);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_11 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26847));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_13;
		L_13 = IJobExtensions_Schedule_TisSegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642_m53EA87BEF926725B1D52CDF4D22B277A79C16980(il2cpp_codegen_memcpy(L_12, L_10, SizeOf_SegmentSortMerge_t99ACB8BA23DC8E818A5C5763D46B72B9329D36F6), L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26847));
		V_3 = L_13;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26848));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_14 = V_3;
		V_6 = L_14;
		goto IL_0096;
	}

IL_0096:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26849));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_15 = V_6;
		return L_15;
	}
}
IL2CPP_EXTERN_C  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 SortJobDefer_2_Schedule_mB75384614976E2ECF4F25943615BF38317BE2814_AdjustorThunk (RuntimeObject* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A>(__this);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 _returnValue;
	_returnValue = SortJobDefer_2_Schedule_mB75384614976E2ECF4F25943615BF38317BE2814(_thisAdjusted, ___0_inputDeps, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 SortJob_2_Schedule_m998B8D3F60028D49ED6C4FDCD51C0D7DDE0A06D8_gshared (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortJob_2_t04DA5EBD5D5BA6ACBB1809BAE9F267AB724D8930_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_SegmentSort_t0236B47D56F52C406634EB3ED7298778FF08A3B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_SegmentSortMerge_t8F21EAAD459DA0454C80E22FED2D1A864A121F6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const uint32_t SizeOf_U_t1E8A7A80A518E771755A041E12B1CDAF50D42E6F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_U_t1E8A7A80A518E771755A041E12B1CDAF50D42E6F);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_U_t1E8A7A80A518E771755A041E12B1CDAF50D42E6F);
	const SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7 L_12 = alloca(SizeOf_SegmentSort_t0236B47D56F52C406634EB3ED7298778FF08A3B7);
	const SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7 L_13 = alloca(SizeOf_SegmentSort_t0236B47D56F52C406634EB3ED7298778FF08A3B7);
	const SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7 L_17 = alloca(SizeOf_SegmentSort_t0236B47D56F52C406634EB3ED7298778FF08A3B7);
	const SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B L_22 = alloca(SizeOf_SegmentSortMerge_t8F21EAAD459DA0454C80E22FED2D1A864A121F6D);
	const SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B L_23 = alloca(SizeOf_SegmentSortMerge_t8F21EAAD459DA0454C80E22FED2D1A864A121F6D);
	const SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B L_25 = alloca(SizeOf_SegmentSortMerge_t8F21EAAD459DA0454C80E22FED2D1A864A121F6D);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7 V_4 = alloca(SizeOf_SegmentSort_t0236B47D56F52C406634EB3ED7298778FF08A3B7);
	memset(V_4, 0, SizeOf_SegmentSort_t0236B47D56F52C406634EB3ED7298778FF08A3B7);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B V_6 = alloca(SizeOf_SegmentSortMerge_t8F21EAAD459DA0454C80E22FED2D1A864A121F6D);
	memset(V_6, 0, SizeOf_SegmentSortMerge_t8F21EAAD459DA0454C80E22FED2D1A864A121F6D);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_9;
	memset((&V_9), 0, sizeof(V_9));
	SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7 V_10 = alloca(SizeOf_SegmentSort_t0236B47D56F52C406634EB3ED7298778FF08A3B7);
	memset(V_10, 0, SizeOf_SegmentSort_t0236B47D56F52C406634EB3ED7298778FF08A3B7);
	SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B V_11 = alloca(SizeOf_SegmentSortMerge_t8F21EAAD459DA0454C80E22FED2D1A864A121F6D);
	memset(V_11, 0, SizeOf_SegmentSortMerge_t8F21EAAD459DA0454C80E22FED2D1A864A121F6D);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_inputDeps));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), V_4, (&V_5), V_6, (&V_7));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26765));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26766));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26767));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26768));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		V_8 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26769));
		bool L_1 = V_8;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26770));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_2 = ___0_inputDeps;
		V_9 = L_2;
		goto IL_00d8;
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26771));
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_3, ((int32_t)1023)))/((int32_t)1024)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26772));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26773));
		int32_t L_4;
		L_4 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26773));
		V_1 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26774));
		int32_t L_5 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26775));
		int32_t L_6;
		L_6 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(1, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26775));
		V_2 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26776));
		int32_t L_7 = V_0;
		int32_t L_8 = V_2;
		V_3 = ((int32_t)(L_7/L_8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26777));
		il2cpp_codegen_initobj((SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7*)V_10, SizeOf_SegmentSort_t0236B47D56F52C406634EB3ED7298778FF08A3B7);
		Il2CppFullySharedGenericStruct* L_9 = *(Il2CppFullySharedGenericStruct**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		il2cpp_codegen_write_instance_field_data<Il2CppFullySharedGenericStruct*>((SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7*)V_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0), L_9);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)), SizeOf_U_t1E8A7A80A518E771755A041E12B1CDAF50D42E6F);
		il2cpp_codegen_write_instance_field_data((SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7*)V_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1), L_10, SizeOf_U_t1E8A7A80A518E771755A041E12B1CDAF50D42E6F);
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		il2cpp_codegen_write_instance_field_data<int32_t>((SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7*)V_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2), L_11);
		il2cpp_codegen_write_instance_field_data<int32_t>((SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7*)V_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3), ((int32_t)1024));
		il2cpp_codegen_memcpy(L_12, V_10, SizeOf_SegmentSort_t0236B47D56F52C406634EB3ED7298778FF08A3B7);
		il2cpp_codegen_memcpy(V_4, L_12, SizeOf_SegmentSort_t0236B47D56F52C406634EB3ED7298778FF08A3B7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26778));
		il2cpp_codegen_memcpy(L_13, V_4, SizeOf_SegmentSort_t0236B47D56F52C406634EB3ED7298778FF08A3B7);
		int32_t L_14 = V_0;
		int32_t L_15 = V_3;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_16 = ___0_inputDeps;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26779));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_18;
		L_18 = IJobParallelForExtensions_Schedule_TisSegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7_m7560AD0924A79D53D0B49C0EF018405C0AC54602(il2cpp_codegen_memcpy(L_17, L_13, SizeOf_SegmentSort_t0236B47D56F52C406634EB3ED7298778FF08A3B7), L_14, L_15, L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26779));
		V_5 = L_18;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26780));
		il2cpp_codegen_initobj((SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B*)V_11, SizeOf_SegmentSortMerge_t8F21EAAD459DA0454C80E22FED2D1A864A121F6D);
		Il2CppFullySharedGenericStruct* L_19 = *(Il2CppFullySharedGenericStruct**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		il2cpp_codegen_write_instance_field_data<Il2CppFullySharedGenericStruct*>((SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B*)V_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5),0), L_19);
		il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)), SizeOf_U_t1E8A7A80A518E771755A041E12B1CDAF50D42E6F);
		il2cpp_codegen_write_instance_field_data((SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B*)V_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5),1), L_20, SizeOf_U_t1E8A7A80A518E771755A041E12B1CDAF50D42E6F);
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		il2cpp_codegen_write_instance_field_data<int32_t>((SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B*)V_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5),2), L_21);
		il2cpp_codegen_write_instance_field_data<int32_t>((SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B*)V_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5),3), ((int32_t)1024));
		il2cpp_codegen_memcpy(L_22, V_11, SizeOf_SegmentSortMerge_t8F21EAAD459DA0454C80E22FED2D1A864A121F6D);
		il2cpp_codegen_memcpy(V_6, L_22, SizeOf_SegmentSortMerge_t8F21EAAD459DA0454C80E22FED2D1A864A121F6D);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26781));
		il2cpp_codegen_memcpy(L_23, V_6, SizeOf_SegmentSortMerge_t8F21EAAD459DA0454C80E22FED2D1A864A121F6D);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_24 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26782));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_26;
		L_26 = IJobExtensions_Schedule_TisSegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B_m38D4A42D0162FF6FF5A0E225ADA0E86E11345A0E(il2cpp_codegen_memcpy(L_25, L_23, SizeOf_SegmentSortMerge_t8F21EAAD459DA0454C80E22FED2D1A864A121F6D), L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26782));
		V_7 = L_26;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26783));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_27 = V_7;
		V_9 = L_27;
		goto IL_00d8;
	}

IL_00d8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26784));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_28 = V_9;
		return L_28;
	}
}
IL2CPP_EXTERN_C  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 SortJob_2_Schedule_m998B8D3F60028D49ED6C4FDCD51C0D7DDE0A06D8_AdjustorThunk (RuntimeObject* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A>(__this);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 _returnValue;
	_returnValue = SortJob_2_Schedule_m998B8D3F60028D49ED6C4FDCD51C0D7DDE0A06D8(_thisAdjusted, ___0_inputDeps, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2__ctor_mAC9990BF0568450688FE124841FE82D2644CDD51_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedDictionary_2__ctor_mFA2F1C62428D2FDD719081256DAA0B3F4877D69F(__this, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2__ctor_m92BC0204219CED6AF80CE09DEA8F69FBC427878E_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_10 = alloca(SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_12 = alloca(SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_1 = alloca(SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	memset(V_1, 0, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___1_comparer;
		KeyValuePairComparer_t7F43F653B6ADD38382B1A6391C5E184CC3F16337* L_3 = (KeyValuePairComparer_t7F43F653B6ADD38382B1A6391C5E184CC3F16337*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		KeyValuePairComparer__ctor_mBA29BBC72C5798EF75190B4437A0C0DB87DDC62A(L_3, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_4 = (TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
		TreeSet_1__ctor_mDEFC5A681B169B29BBE7EF30EB2D45E16589F992(L_4, (RuntimeObject*)L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->____set = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____set), (void*)L_4);
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0055;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					NullCheck((RuntimeObject*)L_8);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				}

IL_0055:
				{
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0042_1;
			}

IL_002e_1:
			{
				CHECK_PAUSE_POINT;
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_9, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_10);
				il2cpp_codegen_memcpy(V_1, L_10, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
				TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_11 = __this->____set;
				il2cpp_codegen_memcpy(L_12, V_1, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
				NullCheck((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_11);
				bool L_13;
				L_13 = SortedSet_1_Add_mB0F1DE241E84F0A8DF6EF4A0C2F539D86B1900BE((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_0042_1:
			{
				RuntimeObject* L_14 = V_0;
				NullCheck((RuntimeObject*)L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
				if (L_15)
				{
					goto IL_002e_1;
				}
			}
			{
				goto IL_0056;
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

IL_0056:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2__ctor_mFA2F1C62428D2FDD719081256DAA0B3F4877D69F_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		KeyValuePairComparer_t7F43F653B6ADD38382B1A6391C5E184CC3F16337* L_1 = (KeyValuePairComparer_t7F43F653B6ADD38382B1A6391C5E184CC3F16337*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		KeyValuePairComparer__ctor_mBA29BBC72C5798EF75190B4437A0C0DB87DDC62A(L_1, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_2 = (TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
		TreeSet_1__ctor_mDEFC5A681B169B29BBE7EF30EB2D45E16589F992(L_2, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->____set = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____set), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8F93A7B9C6D1DA03115E717BE9B2A7D59BCA163B_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_0 = __this->____set;
		il2cpp_codegen_memcpy(L_1, ___0_keyValuePair, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
		NullCheck((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_0);
		bool L_2;
		L_2 = SortedSet_1_Add_mB0F1DE241E84F0A8DF6EF4A0C2F539D86B1900BE((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9039154BAFCD547D840637F9DBC6D5C3B1A8A999_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const Il2CppFullySharedGenericAny L_8 = L_4;
	const Il2CppFullySharedGenericAny L_14 = L_4;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_7 = L_1;
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_13 = L_1;
	Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* V_0 = NULL;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_1 = alloca(SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	memset(V_1, 0, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_0 = __this->____set;
		il2cpp_codegen_memcpy(L_1, ___0_keyValuePair, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
		NullCheck((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_0);
		Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* L_2;
		L_2 = VirtualFuncInvoker1Invoker< Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 >::Invoke(32, (SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_0, L_1);
		V_0 = L_2;
		Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22), L_4);
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* L_6 = V_0;
		NullCheck(L_6);
		Node_get_Item_m1A10AD2408749FCBD75E0A0B120D09FBCC14BA45_inline(L_6, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		il2cpp_codegen_memcpy(V_1, L_7, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
		KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_1, (Il2CppFullySharedGenericAny*)L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		bool L_9 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22), L_8);
		bool L_10 = L_9;
		return L_10;
	}

IL_0037:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_11;
		L_11 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* L_12 = V_0;
		NullCheck(L_12);
		Node_get_Item_m1A10AD2408749FCBD75E0A0B120D09FBCC14BA45_inline(L_12, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		il2cpp_codegen_memcpy(V_1, L_13, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
		KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_1, (Il2CppFullySharedGenericAny*)L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_11);
		bool L_16;
		L_16 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22)) ? L_14: *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22)) ? L_15: *(void**)L_15));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m0AF242A981EC2258DC1E8272E912E9537A24DDA7_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_6 = L_1;
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_11 = L_1;
	Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* V_0 = NULL;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_1 = alloca(SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	memset(V_1, 0, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_0 = __this->____set;
		il2cpp_codegen_memcpy(L_1, ___0_keyValuePair, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
		NullCheck((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_0);
		Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* L_2;
		L_2 = VirtualFuncInvoker1Invoker< Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 >::Invoke(32, (SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_0, L_1);
		V_0 = L_2;
		Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_4;
		L_4 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* L_5 = V_0;
		NullCheck(L_5);
		Node_get_Item_m1A10AD2408749FCBD75E0A0B120D09FBCC14BA45_inline(L_5, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
		KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_1, (Il2CppFullySharedGenericAny*)L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_4);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_10 = __this->____set;
		il2cpp_codegen_memcpy(L_11, ___0_keyValuePair, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
		NullCheck((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_10);
		bool L_12;
		L_12 = SortedSet_1_Remove_m71F114F8CA7B5280CC4DD5C1DF76FFD4CE63193B((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return (bool)1;
	}

IL_0042:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mF7A31BF60FC94964E00D0573F56D2A112746A254_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_get_Item_mACB1EF1041C14340E6C219683160D4F9C766B4D3_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22));
	const uint32_t SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const Il2CppFullySharedGenericAny L_19 = L_5;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_8 = alloca(SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_18 = L_8;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	memset(V_0, 0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_1 = alloca(SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	memset(V_1, 0, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* G_B4_0 = NULL;
	Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* G_B3_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? ___0_key : &___0_key), SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), L_0);
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
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_3 = __this->____set;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? ___0_key : &___0_key), SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		memset(L_8, 0, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? il2cpp_codegen_memcpy(L_6, L_4, SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6): *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22)) ? il2cpp_codegen_memcpy(L_7, L_5, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982): *(void**)L_5), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_3);
		Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* L_9;
		L_9 = VirtualFuncInvoker1Invoker< Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 >::Invoke(32, (SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_3, L_8);
		Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* L_10 = L_9;
		if (L_10)
		{
			G_B4_0 = ((Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5*)L_10);
			goto IL_004d;
		}
		G_B3_0 = ((Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5*)L_10);
	}
	{
		Il2CppConstrainedCallData L_12;
		Il2CppMethodPointer L_13 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), il2cpp_rgctx_method(method->klass->rgctx_data, 32), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? ___0_key : &___0_key), &L_12, L_11);
		typedef String_t* ( *func_L_14)(void*,const RuntimeMethod*);
		String_t* L_15 = ((func_L_14)L_13)(L_12.thisPtr,L_12.method);
		String_t* L_16;
		L_16 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC524653D78C03BE4033DDC43C45B67FFB841D141)), (RuntimeObject*)L_15, NULL);
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_17 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_004d:
	{
		NullCheck(G_B4_0);
		Node_get_Item_m1A10AD2408749FCBD75E0A0B120D09FBCC14BA45_inline(G_B4_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		il2cpp_codegen_memcpy(V_1, L_18, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
		KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_1, (Il2CppFullySharedGenericAny*)L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		il2cpp_codegen_memcpy(il2cppRetVal, L_19, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_set_Item_mDC751F9F41169639062DB90A7E3A24B19D5E201F_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22));
	const uint32_t SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_12 = L_0;
	const Il2CppFullySharedGenericAny L_21 = L_0;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_14 = L_6;
	const Il2CppFullySharedGenericAny L_23 = L_6;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const Il2CppFullySharedGenericAny L_13 = L_5;
	const Il2CppFullySharedGenericAny L_22 = L_5;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const Il2CppFullySharedGenericAny L_15 = L_7;
	const Il2CppFullySharedGenericAny L_24 = L_7;
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_8 = alloca(SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_16 = L_8;
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_20 = L_8;
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_25 = alloca(SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	memset(V_1, 0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_2 = alloca(SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	memset(V_2, 0, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? ___0_key : &___0_key), SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), L_0);
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
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_3 = __this->____set;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? ___0_key : &___0_key), SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		il2cpp_codegen_memcpy(L_5, V_1, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		memset(L_8, 0, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? il2cpp_codegen_memcpy(L_6, L_4, SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6): *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22)) ? il2cpp_codegen_memcpy(L_7, L_5, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982): *(void**)L_5), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_3);
		Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* L_9;
		L_9 = VirtualFuncInvoker1Invoker< Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 >::Invoke(32, (SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_3, L_8);
		V_0 = L_9;
		Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* L_10 = V_0;
		if (L_10)
		{
			goto IL_0045;
		}
	}
	{
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_11 = __this->____set;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? ___0_key : &___0_key), SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22)) ? ___1_value : &___1_value), SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		memset(L_16, 0, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? il2cpp_codegen_memcpy(L_14, L_12, SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22)) ? il2cpp_codegen_memcpy(L_15, L_13, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982): *(void**)L_13), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_11);
		bool L_17;
		L_17 = SortedSet_1_Add_mB0F1DE241E84F0A8DF6EF4A0C2F539D86B1900BE((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_11, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return;
	}

IL_0045:
	{
		Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* L_18 = V_0;
		Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* L_19 = V_0;
		NullCheck(L_19);
		Node_get_Item_m1A10AD2408749FCBD75E0A0B120D09FBCC14BA45_inline(L_19, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		il2cpp_codegen_memcpy(V_2, L_20, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
		KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_2, (Il2CppFullySharedGenericAny*)L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22)) ? ___1_value : &___1_value), SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		memset(L_25, 0, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? il2cpp_codegen_memcpy(L_23, L_21, SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6): *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22)) ? il2cpp_codegen_memcpy(L_24, L_22, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982): *(void**)L_22), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_18);
		Node_set_Item_m165F037D68842D16579CA2595BB532CAC6649145_inline(L_18, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_26 = __this->____set;
		NullCheck((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_26);
		SortedSet_1_UpdateVersion_m87EA9BDF0664075ACC15040ABC70165975DE5B22((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedDictionary_2_get_Count_m7454B566201DAA5BFF42151490DEC51CBBFF5C0B_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_0 = __this->____set;
		NullCheck((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_0);
		int32_t L_1;
		L_1 = SortedSet_1_get_Count_m63287F35980FC7E262CEA798DA49B5117017D220((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41* SortedDictionary_2_get_Keys_m8EAB83A1BFB2EBC1A574F960FD89AEF091CC35D6_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41* L_1 = (KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38));
		KeyCollection__ctor_m52E978AD4C7656BD9BE47C5DE851F1F8DADF3A5A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mE3E9BD5D91A72E515DC397F040DABDA4C24F2342_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41* L_0;
		L_0 = SortedDictionary_2_get_Keys_m8EAB83A1BFB2EBC1A574F960FD89AEF091CC35D6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_mF2B2B1D50F2E990F13CFEF84EACB13F003B42DD6_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41* L_0;
		L_0 = SortedDictionary_2_get_Keys_m8EAB83A1BFB2EBC1A574F960FD89AEF091CC35D6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E* SortedDictionary_2_get_Values_m171C96BDC47A588120C6585ABED2CC550A28055A_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E* L_1 = (ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43));
		ValueCollection__ctor_m7E60BF0E35BB70C5BA0388E0CAA2D6F72DE54A8F(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m996C7082606C2451F66D9D1E718A805D2D8F2363_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E* L_0;
		L_0 = SortedDictionary_2_get_Values_m171C96BDC47A588120C6585ABED2CC550A28055A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m1688C22EFCF3195883717543D871402D0459D783_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E* L_0;
		L_0 = SortedDictionary_2_get_Values_m171C96BDC47A588120C6585ABED2CC550A28055A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_Add_mA3BDBB8DD7D25776DF9E26E035F2164AEDF0B97E_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	const uint32_t SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22));
	const uint32_t SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_8 = alloca(SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? ___0_key : &___0_key), SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), L_0);
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
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_3 = __this->____set;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? ___0_key : &___0_key), SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22)) ? ___1_value : &___1_value), SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		memset(L_8, 0, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? il2cpp_codegen_memcpy(L_6, L_4, SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6): *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22)) ? il2cpp_codegen_memcpy(L_7, L_5, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982): *(void**)L_5), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_3);
		bool L_9;
		L_9 = SortedSet_1_Add_mB0F1DE241E84F0A8DF6EF4A0C2F539D86B1900BE((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_3, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_Clear_mE15C1E973B7F08CBF5F193D5DE45F4D7A00DC709_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_0 = __this->____set;
		NullCheck((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_0);
		VirtualActionInvoker0::Invoke(30, (SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_ContainsKey_m56C9790C11A918372279FC513DF233544CA23829_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22));
	const uint32_t SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	const uint32_t SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_8 = alloca(SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	memset(V_0, 0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? ___0_key : &___0_key), SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), L_0);
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
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_3 = __this->____set;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? ___0_key : &___0_key), SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		memset(L_8, 0, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? il2cpp_codegen_memcpy(L_6, L_4, SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6): *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22)) ? il2cpp_codegen_memcpy(L_7, L_5, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982): *(void**)L_5), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_3);
		bool L_9;
		L_9 = VirtualFuncInvoker1Invoker< bool, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 >::Invoke(31, (SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_3, L_8);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_ContainsValue_mB108FE2162CC4C47A666CE330264A3789BD26E62_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	U3CU3Ec__DisplayClass34_0_tA02E84D61A87B1706CC915763144DBF463282B65* V_0 = NULL;
	U3CU3Ec__DisplayClass34_1_t796D3E086B09C5D156D46C42694AD2147D80C3C4* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		U3CU3Ec__DisplayClass34_0_tA02E84D61A87B1706CC915763144DBF463282B65* L_0 = (U3CU3Ec__DisplayClass34_0_tA02E84D61A87B1706CC915763144DBF463282B65*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 50));
		U3CU3Ec__DisplayClass34_0__ctor_m3774BCBD554B0329AD84B86DC0998FC0890AAB90(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_0 = L_0;
		U3CU3Ec__DisplayClass34_0_tA02E84D61A87B1706CC915763144DBF463282B65* L_1 = V_0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22)) ? ___0_value : &___0_value), SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		NullCheck(L_1);
		il2cpp_codegen_write_instance_field_data(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 50),1), L_2, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		U3CU3Ec__DisplayClass34_0_tA02E84D61A87B1706CC915763144DBF463282B65* L_3 = V_0;
		NullCheck(L_3);
		il2cpp_codegen_write_instance_field_data<bool>(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 50),0), (bool)0);
		U3CU3Ec__DisplayClass34_0_tA02E84D61A87B1706CC915763144DBF463282B65* L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 50),1)), SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		bool L_6 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22), L_5);
		if (L_6)
		{
			goto IL_003b;
		}
	}
	{
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_7 = __this->____set;
		U3CU3Ec__DisplayClass34_0_tA02E84D61A87B1706CC915763144DBF463282B65* L_8 = V_0;
		TreeWalkPredicate_1_tCF0B6A96E5A4424F65CE7DD88579E080CAE69463* L_9 = (TreeWalkPredicate_1_tCF0B6A96E5A4424F65CE7DD88579E080CAE69463*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 53));
		TreeWalkPredicate_1__ctor_mF85713508386DE675BB71A6E50D17BCA30EFCF1D(L_9, (RuntimeObject*)L_8, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 52)), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		NullCheck((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, TreeWalkPredicate_1_tCF0B6A96E5A4424F65CE7DD88579E080CAE69463* >::Invoke(25, (SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_7, L_9);
		goto IL_006b;
	}

IL_003b:
	{
		U3CU3Ec__DisplayClass34_1_t796D3E086B09C5D156D46C42694AD2147D80C3C4* L_11 = (U3CU3Ec__DisplayClass34_1_t796D3E086B09C5D156D46C42694AD2147D80C3C4*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 56));
		U3CU3Ec__DisplayClass34_1__ctor_m725AA08A5D90852C5188B62B501E489C78FC7C8D(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		V_1 = L_11;
		U3CU3Ec__DisplayClass34_1_t796D3E086B09C5D156D46C42694AD2147D80C3C4* L_12 = V_1;
		U3CU3Ec__DisplayClass34_0_tA02E84D61A87B1706CC915763144DBF463282B65* L_13 = V_0;
		NullCheck(L_12);
		L_12->___CSU24U3CU3E8__locals1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___CSU24U3CU3E8__locals1), (void*)L_13);
		U3CU3Ec__DisplayClass34_1_t796D3E086B09C5D156D46C42694AD2147D80C3C4* L_14 = V_1;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_15;
		L_15 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_14);
		L_14->___valueComparer = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___valueComparer), (void*)L_15);
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_16 = __this->____set;
		U3CU3Ec__DisplayClass34_1_t796D3E086B09C5D156D46C42694AD2147D80C3C4* L_17 = V_1;
		TreeWalkPredicate_1_tCF0B6A96E5A4424F65CE7DD88579E080CAE69463* L_18 = (TreeWalkPredicate_1_tCF0B6A96E5A4424F65CE7DD88579E080CAE69463*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 53));
		TreeWalkPredicate_1__ctor_mF85713508386DE675BB71A6E50D17BCA30EFCF1D(L_18, (RuntimeObject*)L_17, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 58)), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		NullCheck((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_16);
		bool L_19;
		L_19 = VirtualFuncInvoker1< bool, TreeWalkPredicate_1_tCF0B6A96E5A4424F65CE7DD88579E080CAE69463* >::Invoke(25, (SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_16, L_18);
	}

IL_006b:
	{
		U3CU3Ec__DisplayClass34_0_tA02E84D61A87B1706CC915763144DBF463282B65* L_20 = V_0;
		bool L_21 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 50),0));
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_CopyTo_m56845D8C468FB93DDBE25B0CF2A5D0F374494EAF_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_0 = __this->____set;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_0);
		SortedSet_1_CopyTo_mDF20617ACDC79D10061CE10156272AD0ADC3E1F9((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6C2EA3C5E2783C9D331AFD95E98BB5FC8A28C5C4 SortedDictionary_2_GetEnumerator_m4BA1E317151E768AED98AA9A93CA504E86F8D96C_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Enumerator_t6C2EA3C5E2783C9D331AFD95E98BB5FC8A28C5C4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA347E7F9A4E89648A28432A4CEA2FABA20C4DEEE((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedDictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m90D816982663AA2FE69D72ED40CEDB937DE07B6A_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Enumerator_t6C2EA3C5E2783C9D331AFD95E98BB5FC8A28C5C4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA347E7F9A4E89648A28432A4CEA2FABA20C4DEEE((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		Enumerator_t6C2EA3C5E2783C9D331AFD95E98BB5FC8A28C5C4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 63), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_Remove_mD90CF2DB5271EDB847D9B41AB0A2DECB2F91489D_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22));
	const uint32_t SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	const uint32_t SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_8 = alloca(SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	memset(V_0, 0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? ___0_key : &___0_key), SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), L_0);
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
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_3 = __this->____set;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? ___0_key : &___0_key), SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		memset(L_8, 0, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? il2cpp_codegen_memcpy(L_6, L_4, SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6): *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22)) ? il2cpp_codegen_memcpy(L_7, L_5, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982): *(void**)L_5), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_3);
		bool L_9;
		L_9 = SortedSet_1_Remove_m71F114F8CA7B5280CC4DD5C1DF76FFD4CE63193B((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_3, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_TryGetValue_mE5557EAF42A20477EE9DD9B6654DE9FC7126B2C1_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22));
	const uint32_t SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const Il2CppFullySharedGenericAny L_15 = L_5;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_8 = alloca(SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_14 = L_8;
	Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	memset(V_1, 0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_2 = alloca(SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	memset(V_2, 0, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? ___0_key : &___0_key), SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), L_0);
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
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_3 = __this->____set;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? ___0_key : &___0_key), SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		il2cpp_codegen_memcpy(L_5, V_1, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		memset(L_8, 0, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? il2cpp_codegen_memcpy(L_6, L_4, SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6): *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22)) ? il2cpp_codegen_memcpy(L_7, L_5, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982): *(void**)L_5), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck((SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_3);
		Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* L_9;
		L_9 = VirtualFuncInvoker1Invoker< Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 >::Invoke(32, (SortedSet_1_tEA3CE7920D75541A3E5AF0A0F1D6C4BF387FBB73*)L_3, L_8);
		V_0 = L_9;
		Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* L_10 = V_0;
		if (L_10)
		{
			goto IL_003a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_11 = ___1_value;
		il2cpp_codegen_initobj(L_11, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		return (bool)0;
	}

IL_003a:
	{
		Il2CppFullySharedGenericAny* L_12 = ___1_value;
		Node_tE9376A2A28891B4E8139BA9C0DD44F3C62C573E5* L_13 = V_0;
		NullCheck(L_13);
		Node_get_Item_m1A10AD2408749FCBD75E0A0B120D09FBCC14BA45_inline(L_13, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		il2cpp_codegen_memcpy(V_2, L_14, SizeOf_KeyValuePair_2_t6CCE7EB7F10D5329B34AD02501297D340EFF6D97);
		KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_2, (Il2CppFullySharedGenericAny*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_12, L_15, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22), (void**)(Il2CppFullySharedGenericAny*)L_12, (void*)L_15);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_System_Collections_ICollection_CopyTo_m62968CC10D796870DB9D786E039C33FC5E0684A8_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_0 = __this->____set;
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_System_Collections_IDictionary_get_IsFixedSize_m89CB5DE623788CF3C91227BBE55C85E3DEF9F064_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_System_Collections_IDictionary_get_IsReadOnly_m0313009E81000267BF10FF5A8BFD4ECE29444A13_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedDictionary_2_System_Collections_IDictionary_get_Keys_mAE3878375852AAAB2590B3D807F74680B473610C_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyCollection_t206409CEE412703C2D493ED6595E03B9DBFA0C41* L_0;
		L_0 = SortedDictionary_2_get_Keys_m8EAB83A1BFB2EBC1A574F960FD89AEF091CC35D6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedDictionary_2_System_Collections_IDictionary_get_Values_mECF1212297B0E9B2E50E5712D4042A339724CB7E_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValueCollection_tC2693A24609690E0B42B92AA2B66B6E4FDAB657E* L_0;
		L_0 = SortedDictionary_2_get_Values_m171C96BDC47A588120C6585ABED2CC550A28055A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedDictionary_2_System_Collections_IDictionary_get_Item_m83BAE327F76235071874DD3852F3464655B2B176_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22));
	const uint32_t SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	memset(V_0, 0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = SortedDictionary_2_IsCompatibleKey_m603435A698B78800B58FBECFE5353DE4EFEBE0E1(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_3);
		bool L_6;
		L_6 = SortedDictionary_2_TryGetValue_mE5557EAF42A20477EE9DD9B6654DE9FC7126B2C1(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? il2cpp_codegen_memcpy(L_5, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), (Il2CppFullySharedGenericAny*)V_0, il2cpp_rgctx_method(method->klass->rgctx_data, 68));
		if (!L_6)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22), L_7);
		return L_8;
	}

IL_001f:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_System_Collections_IDictionary_set_Item_m3BC7F0A8C532747845B40F7687E6C1F1E3E3C4C2_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22));
	const uint32_t SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_9 = L_7;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const Il2CppFullySharedGenericAny L_11 = L_3;
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	memset(V_0, 0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	memset(V_1, 0, SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
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
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22), L_3);
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
	}
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			RuntimeObject* L_6 = ___0_key;
			void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_7);
			il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)), SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
		}
		try
		{
			STORE_TRY_ID(methodExecutionContext, 1);
			il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
			RuntimeObject* L_10 = ___1_value;
			void* L_12 = UnBox_Any(L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 22), L_11);
			SortedDictionary_2_set_Item_mDC751F9F41169639062DB90A7E3A24B19D5E201F(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? il2cpp_codegen_memcpy(L_13, L_9, SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22)) ? il2cpp_codegen_memcpy(L_14, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12)), SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12))), il2cpp_rgctx_method(method->klass->rgctx_data, 69));
			goto IL_0064_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0043_1;
			}
			throw e;
		}

CATCH_0043_1:
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_15 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_16 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
			il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
			Type_t* L_18;
			L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
			String_t* L_19;
			L_19 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_16, (RuntimeObject*)L_18, NULL);
			ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
			ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_20, L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
		}

IL_0064_1:
		{
			goto IL_0087;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0066;
		}
		throw e;
	}

CATCH_0066:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_21 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_22 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 70)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		String_t* L_25;
		L_25 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_22, (RuntimeObject*)L_24, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_26 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_26, L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, method);
	}

IL_0087:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_System_Collections_IDictionary_Add_m28C6420A7CF0B692C15D873BCE7151525E3625B3_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22));
	const uint32_t SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_9 = L_7;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	const Il2CppFullySharedGenericAny L_11 = L_3;
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	memset(V_0, 0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	memset(V_1, 0, SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
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
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22), L_3);
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
	}
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			RuntimeObject* L_6 = ___0_key;
			void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_7);
			il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)), SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
		}
		try
		{
			STORE_TRY_ID(methodExecutionContext, 1);
			il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
			RuntimeObject* L_10 = ___1_value;
			void* L_12 = UnBox_Any(L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 22), L_11);
			SortedDictionary_2_Add_mA3BDBB8DD7D25776DF9E26E035F2164AEDF0B97E(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? il2cpp_codegen_memcpy(L_13, L_9, SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22)) ? il2cpp_codegen_memcpy(L_14, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12)), SizeOf_TValue_t2C9B7F2EDBBA009DBF7357ADDCB8CFF8F1A71982): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12))), il2cpp_rgctx_method(method->klass->rgctx_data, 71));
			goto IL_0064_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0043_1;
			}
			throw e;
		}

CATCH_0043_1:
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_15 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_16 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
			il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
			Type_t* L_18;
			L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
			String_t* L_19;
			L_19 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_16, (RuntimeObject*)L_18, NULL);
			ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
			ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_20, L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
		}

IL_0064_1:
		{
			goto IL_0087;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0066;
		}
		throw e;
	}

CATCH_0066:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_21 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_22 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 70)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		String_t* L_25;
		L_25 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_22, (RuntimeObject*)L_24, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_26 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_26, L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, method);
	}

IL_0087:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_System_Collections_IDictionary_Contains_mA862B608F80819B59F86F5D847A7FA719097AB2D_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = SortedDictionary_2_IsCompatibleKey_m603435A698B78800B58FBECFE5353DE4EFEBE0E1(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_3);
		bool L_6;
		L_6 = SortedDictionary_2_ContainsKey_m56C9790C11A918372279FC513DF233544CA23829(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? il2cpp_codegen_memcpy(L_5, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), il2cpp_rgctx_method(method->klass->rgctx_data, 72));
		return L_6;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_IsCompatibleKey_m603435A698B78800B58FBECFE5353DE4EFEBE0E1_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 30)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedDictionary_2_System_Collections_IDictionary_GetEnumerator_m3C616113CC50D95B08E7462B6E9F8D2AFB1370D8_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Enumerator_t6C2EA3C5E2783C9D331AFD95E98BB5FC8A28C5C4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA347E7F9A4E89648A28432A4CEA2FABA20C4DEEE((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		Enumerator_t6C2EA3C5E2783C9D331AFD95E98BB5FC8A28C5C4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 63), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_System_Collections_IDictionary_Remove_mA059F5160D5C23CDDDDEB5020103545B19FC6CD4_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = SortedDictionary_2_IsCompatibleKey_m603435A698B78800B58FBECFE5353DE4EFEBE0E1(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_3);
		bool L_6;
		L_6 = SortedDictionary_2_Remove_mD90CF2DB5271EDB847D9B41AB0A2DECB2F91489D(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30)) ? il2cpp_codegen_memcpy(L_5, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_TKey_t70320662F20CFAD632FA55211BB69CB5130AC4E6): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), il2cpp_rgctx_method(method->klass->rgctx_data, 73));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_System_Collections_ICollection_get_IsSynchronized_mF640236B3012BC564F26E51EEA9E3CF88EE34CE8_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedDictionary_2_System_Collections_ICollection_get_SyncRoot_mFB65BD9A3944308BCC9D33A6D7C8FE17F6DFE69A_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		TreeSet_1_tE888958036347B1AF973DA4F1E92E9D54775F05C* L_0 = __this->____set;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedDictionary_2_System_Collections_IEnumerable_GetEnumerator_m21F5F195A829047B2719FEF487E1CC8A641B3897_gshared (SortedDictionary_2_tB900DE4248E687595E974E867FD2400C5AC5F232* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Enumerator_t6C2EA3C5E2783C9D331AFD95E98BB5FC8A28C5C4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA347E7F9A4E89648A28432A4CEA2FABA20C4DEEE((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		Enumerator_t6C2EA3C5E2783C9D331AFD95E98BB5FC8A28C5C4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 63), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedInt32KeyNode_1__ctor_mF4ECA4462FE8AF102CCF0AA88FD3B3476964020A_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), (bool)1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedInt32KeyNode_1__ctor_m3801A76E6E088A71D4EDFD7AD126EE8D57C9BC23_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, int32_t ___0_key, Il2CppFullySharedGenericAny ___1_value, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___2_left, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___3_right, bool ___4_frozen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_0 = ___2_left;
		Requires_NotNull_TisSortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA_m0C7F573782A844360AE48864A16BE9931E430057(L_0, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_1 = ___3_right;
		Requires_NotNull_TisSortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA_m0C7F573782A844360AE48864A16BE9931E430057(L_1, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		int32_t L_2 = ___0_key;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_2);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___1_value : &___1_value), SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_3, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_4 = ___2_left;
		il2cpp_codegen_write_instance_field_data<SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_4);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_5 = ___3_right;
		il2cpp_codegen_write_instance_field_data<SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_5);
		bool L_6 = ___4_frozen;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_6);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_7 = ___2_left;
		uint8_t L_8 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_9 = ___3_right;
		uint8_t L_10 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint8_t L_11;
		L_11 = Math_Max_m12FB4E1302123ADB441E3A7BDF52E8404DDE53A2(L_8, L_10, NULL);
		if (((int64_t)1 + (int64_t)L_11 < (int64_t)kIl2CppInt32Min) || ((int64_t)1 + (int64_t)L_11 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		uint8_t L_12 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,true,false>(((int32_t)il2cpp_codegen_add(1, (int32_t)L_11)),method));
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_12);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_0 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return (bool)((((RuntimeObject*)(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedInt32KeyNode_1_get_Height_mE6C5E4B9423B7E4894DB99235760B6A3FCD752CD_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_get_Left_mD0CCED109F8AE97210D19880117480F125F77DF2_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_0 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_get_Right_m4B2914884304DC4DE4BF741399CCDAD24771A494_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_0 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedInt32KeyNode_1_System_Collections_Immutable_IBinaryTree_get_Left_mD7386E7F64A7EDE2C2FB5204B16ECD3A62436534_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_0 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedInt32KeyNode_1_System_Collections_Immutable_IBinaryTree_get_Right_m070E16A230C6B3E57A6CE55B3CD5423A20D69D70_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_0 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedInt32KeyNode_1_System_Collections_Immutable_IBinaryTree_get_Count_m8FFAA9258FB853A945715B5AB22019D0D255990F_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedInt32KeyNode_1_get_Value_m3E6759A6475F76AAC33FB3A64E0C51D984FD9DE3_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, KeyValuePair_2_tD560F959C416C02DF18D049D3CEE276352F633EF* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const uint32_t SizeOf_KeyValuePair_2_t3C48989280FE73A8CB0D91CF6B2A39015EC6AA87 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	const KeyValuePair_2_tD560F959C416C02DF18D049D3CEE276352F633EF L_3 = alloca(SizeOf_KeyValuePair_2_t3C48989280FE73A8CB0D91CF6B2A39015EC6AA87);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		memset(L_3, 0, SizeOf_KeyValuePair_2_t3C48989280FE73A8CB0D91CF6B2A39015EC6AA87);
		KeyValuePair_2__ctor_m0C82CE1057B58285623A6E8C7DDE2774C146A84E((KeyValuePair_2_tD560F959C416C02DF18D049D3CEE276352F633EF*)L_3, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24): *(void**)L_1), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_KeyValuePair_2_t3C48989280FE73A8CB0D91CF6B2A39015EC6AA87);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedInt32KeyNode_1_get_Values_m24AACDE46F5825F895E945126545ABFEB433E062_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, const RuntimeMethod* method) 
{
	U3Cget_ValuesU3Ed__26_t8912FCF68691584B3E413E86C68EFCD26FDB8FDC* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		U3Cget_ValuesU3Ed__26_t8912FCF68691584B3E413E86C68EFCD26FDB8FDC* L_0 = (U3Cget_ValuesU3Ed__26_t8912FCF68691584B3E413E86C68EFCD26FDB8FDC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
		U3Cget_ValuesU3Ed__26__ctor_mD70D70552D62D68793D8529E778BED3F9707F0F2(L_0, ((int32_t)-2), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_0 = L_0;
		U3Cget_ValuesU3Ed__26_t8912FCF68691584B3E413E86C68EFCD26FDB8FDC* L_1 = V_0;
		NullCheck(L_1);
		il2cpp_codegen_write_instance_field_data<SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),3), __this);
		U3Cget_ValuesU3Ed__26_t8912FCF68691584B3E413E86C68EFCD26FDB8FDC* L_2 = V_0;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t905B1D6DCBEB9FFA0482DFED57078825B5E3E1DC SortedInt32KeyNode_1_GetEnumerator_m0A96D8724F8C0C2B0942EB1BB5191769684FA911_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Enumerator_t905B1D6DCBEB9FFA0482DFED57078825B5E3E1DC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mDD2B3B02D2DF85F1A79FF5F335ECEE80071842F1((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_SetItem_mAB682FD8FDBA98F8664D65137FCF0E966744E1C0_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, int32_t ___0_key, Il2CppFullySharedGenericAny ___1_value, RuntimeObject* ___2_valueComparer, bool* ___3_replacedExistingValue, bool* ___4_mutated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECF97F9F3209775CC5BF032CE88B6A0C2F18015C);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___2_valueComparer;
		Requires_NotNull_TisIEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122_mA3F3C9A20AC4B85A865AB750DB5C26DECF6620F0(L_0, _stringLiteralECF97F9F3209775CC5BF032CE88B6A0C2F18015C, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		int32_t L_1 = ___0_key;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___1_value : &___1_value), SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		RuntimeObject* L_3 = ___2_valueComparer;
		bool* L_4 = ___3_replacedExistingValue;
		bool* L_5 = ___4_mutated;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_7;
		L_7 = SortedInt32KeyNode_1_SetOrAdd_m2C2D829D7CBEB15EE6DCB7B6686913F34B1FAFA7(__this, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_6, L_2, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24): *(void**)L_2), L_3, (bool)1, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_Remove_m7B4DB9DAC4D8913F364CBEF9926C8B4EF58CDE5B_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, int32_t ___0_key, bool* ___1_mutated, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_key;
		bool* L_1 = ___1_mutated;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_2;
		L_2 = SortedInt32KeyNode_1_RemoveRecursive_m3A254BE428AEC6122E3524C149C4DFB799C21FE5(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedInt32KeyNode_1_GetValueOrDefault_m77D49070FAFC01117DC14142DAADE3719D5B53A3_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, int32_t ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	const Il2CppFullySharedGenericAny L_7 = L_2;
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	memset(V_1, 0, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		V_0 = __this;
	}

IL_0002:
	{
		CHECK_PAUSE_POINT;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_0 = V_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		il2cpp_codegen_memcpy(L_2, V_1, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		return;
	}

IL_0014:
	{
		int32_t L_3 = ___0_key;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_4 = V_0;
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_6 = V_0;
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		return;
	}

IL_0024:
	{
		int32_t L_8 = ___0_key;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_9 = V_0;
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0036;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_11 = V_0;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_12 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_0 = L_12;
		goto IL_0002;
	}

IL_0036:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_13 = V_0;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_14 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_0 = L_14;
		goto IL_0002;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedInt32KeyNode_1_TryGetValue_m518C2239B16F809CCB32B70A32D53FD30E18C659_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, int32_t ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		V_0 = __this;
	}

IL_0002:
	{
		CHECK_PAUSE_POINT;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_0 = V_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		return (bool)0;
	}

IL_0013:
	{
		int32_t L_3 = ___0_key;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_4 = V_0;
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_002a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_6 = ___1_value;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_7 = V_0;
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, L_8, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)L_8);
		return (bool)1;
	}

IL_002a:
	{
		int32_t L_9 = ___0_key;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_10 = V_0;
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_003c;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_12 = V_0;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_13 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_0 = L_13;
		goto IL_0002;
	}

IL_003c:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_14 = V_0;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_15 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_0 = L_15;
		goto IL_0002;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedInt32KeyNode_1_Freeze_m24B7BF41A648151B92774C3DA4C0908BB2D4E470_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, Action_1_t6C09FBBFF7948D096D883948A5B816A3035797DA* ___0_freezeAction, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const uint32_t SizeOf_KeyValuePair_2_t3C48989280FE73A8CB0D91CF6B2A39015EC6AA87 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	const KeyValuePair_2_tD560F959C416C02DF18D049D3CEE276352F633EF L_6 = alloca(SizeOf_KeyValuePair_2_t3C48989280FE73A8CB0D91CF6B2A39015EC6AA87);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		Action_1_t6C09FBBFF7948D096D883948A5B816A3035797DA* L_1 = ___0_freezeAction;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Action_1_t6C09FBBFF7948D096D883948A5B816A3035797DA* L_2 = ___0_freezeAction;
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		memset(L_6, 0, SizeOf_KeyValuePair_2_t3C48989280FE73A8CB0D91CF6B2A39015EC6AA87);
		KeyValuePair_2__ctor_m0C82CE1057B58285623A6E8C7DDE2774C146A84E((KeyValuePair_2_tD560F959C416C02DF18D049D3CEE276352F633EF*)L_6, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_5, L_4, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24): *(void**)L_4), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck(L_2);
		Action_1_Invoke_mA015FB276515B04B49C843B324F382F5D260189C_inline(L_2, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
	}

IL_0022:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_7 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		Action_1_t6C09FBBFF7948D096D883948A5B816A3035797DA* L_8 = ___0_freezeAction;
		NullCheck(L_7);
		SortedInt32KeyNode_1_Freeze_m24B7BF41A648151B92774C3DA4C0908BB2D4E470(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_9 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		Action_1_t6C09FBBFF7948D096D883948A5B816A3035797DA* L_10 = ___0_freezeAction;
		NullCheck(L_9);
		SortedInt32KeyNode_1_Freeze_m24B7BF41A648151B92774C3DA4C0908BB2D4E470(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), (bool)1);
	}

IL_0041:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_RotateLeft_m6EEBD6ECD53AEFFBE60EA5CB6FB2E29E5FFF3648_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_0 = ___0_tree;
		Requires_NotNull_TisSortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA_m0C7F573782A844360AE48864A16BE9931E430057(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_1 = ___0_tree;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_2 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		NullCheck(L_2);
		bool L_3;
		L_3 = SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_4 = ___0_tree;
		return L_4;
	}

IL_001a:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_5 = ___0_tree;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_6 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		V_0 = L_6;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_7 = V_0;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_8 = ___0_tree;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_9 = V_0;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_10 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		NullCheck(L_8);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_11;
		L_11 = SortedInt32KeyNode_1_Mutate_m7542A80E4817C87A311CFAD9D5A5B7EF9B93003D(L_8, (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)NULL, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		NullCheck(L_7);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_12;
		L_12 = SortedInt32KeyNode_1_Mutate_m7542A80E4817C87A311CFAD9D5A5B7EF9B93003D(L_7, L_11, (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)NULL, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_RotateRight_m874236017303489BE43BD7B7AA73BD7BCB6FD5E0_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_0 = ___0_tree;
		Requires_NotNull_TisSortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA_m0C7F573782A844360AE48864A16BE9931E430057(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_1 = ___0_tree;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_2 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		NullCheck(L_2);
		bool L_3;
		L_3 = SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_4 = ___0_tree;
		return L_4;
	}

IL_001a:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_5 = ___0_tree;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_6 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		V_0 = L_6;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_7 = V_0;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_8 = ___0_tree;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_9 = V_0;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_10 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		NullCheck(L_8);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_11;
		L_11 = SortedInt32KeyNode_1_Mutate_m7542A80E4817C87A311CFAD9D5A5B7EF9B93003D(L_8, L_10, (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)NULL, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		NullCheck(L_7);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_12;
		L_12 = SortedInt32KeyNode_1_Mutate_m7542A80E4817C87A311CFAD9D5A5B7EF9B93003D(L_7, (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)NULL, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_DoubleLeft_mC18651981E89C3914CC88B7B179F49AB4311B824_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_0 = ___0_tree;
		Requires_NotNull_TisSortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA_m0C7F573782A844360AE48864A16BE9931E430057(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_1 = ___0_tree;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_2 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		NullCheck(L_2);
		bool L_3;
		L_3 = SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_4 = ___0_tree;
		return L_4;
	}

IL_001a:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_5 = ___0_tree;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_6 = ___0_tree;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_7 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_8;
		L_8 = SortedInt32KeyNode_1_RotateRight_m874236017303489BE43BD7B7AA73BD7BCB6FD5E0(L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		NullCheck(L_5);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_9;
		L_9 = SortedInt32KeyNode_1_Mutate_m7542A80E4817C87A311CFAD9D5A5B7EF9B93003D(L_5, (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)NULL, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		V_0 = L_9;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_10 = V_0;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_11;
		L_11 = SortedInt32KeyNode_1_RotateLeft_m6EEBD6ECD53AEFFBE60EA5CB6FB2E29E5FFF3648(L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_DoubleRight_m060C5B4EDAD9856D23D3E0CDEBBF99AB9E20F760_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		s_Il2CppMethodInitialized = true;
	}
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_0 = ___0_tree;
		Requires_NotNull_TisSortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA_m0C7F573782A844360AE48864A16BE9931E430057(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_1 = ___0_tree;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_2 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		NullCheck(L_2);
		bool L_3;
		L_3 = SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_4 = ___0_tree;
		return L_4;
	}

IL_001a:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_5 = ___0_tree;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_6 = ___0_tree;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_7 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_8;
		L_8 = SortedInt32KeyNode_1_RotateLeft_m6EEBD6ECD53AEFFBE60EA5CB6FB2E29E5FFF3648(L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		NullCheck(L_5);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_9;
		L_9 = SortedInt32KeyNode_1_Mutate_m7542A80E4817C87A311CFAD9D5A5B7EF9B93003D(L_5, L_8, (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)NULL, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		V_0 = L_9;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_10 = V_0;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_11;
		L_11 = SortedInt32KeyNode_1_RotateRight_m874236017303489BE43BD7B7AA73BD7BCB6FD5E0(L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedInt32KeyNode_1_Balance_mA08EAA877DE4CE03CF1799DA0C28A2A03FFCB5AD_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method) 
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
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_0 = ___0_tree;
		Requires_NotNull_TisSortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA_m0C7F573782A844360AE48864A16BE9931E430057(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_1 = ___0_tree;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_2 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		uint8_t L_3 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_4 = ___0_tree;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_5 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		uint8_t L_6 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4));
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_6));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedInt32KeyNode_1_IsRightHeavy_mC64DB1CD1C3AA1E8BF277EFA87F0A0BBC0C1490F_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method) 
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
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_0 = ___0_tree;
		Requires_NotNull_TisSortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA_m0C7F573782A844360AE48864A16BE9931E430057(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_1 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		int32_t L_2;
		L_2 = SortedInt32KeyNode_1_Balance_mA08EAA877DE4CE03CF1799DA0C28A2A03FFCB5AD(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		return (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedInt32KeyNode_1_IsLeftHeavy_mEF8CAE4DD7848255911253E428F8B704527FBEDA_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method) 
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
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_0 = ___0_tree;
		Requires_NotNull_TisSortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA_m0C7F573782A844360AE48864A16BE9931E430057(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_1 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		int32_t L_2;
		L_2 = SortedInt32KeyNode_1_Balance_mA08EAA877DE4CE03CF1799DA0C28A2A03FFCB5AD(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		return (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)((int32_t)-2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_MakeBalanced_mC7343BE159B83C9E84064A1CC1D441B6138FA9A9_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_tree, const RuntimeMethod* method) 
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
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_0 = ___0_tree;
		Requires_NotNull_TisSortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA_m0C7F573782A844360AE48864A16BE9931E430057(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_1 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		bool L_2;
		L_2 = SortedInt32KeyNode_1_IsRightHeavy_mC64DB1CD1C3AA1E8BF277EFA87F0A0BBC0C1490F(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_3 = ___0_tree;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_4 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		int32_t L_5;
		L_5 = SortedInt32KeyNode_1_Balance_mA08EAA877DE4CE03CF1799DA0C28A2A03FFCB5AD(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_6 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_7;
		L_7 = SortedInt32KeyNode_1_RotateLeft_m6EEBD6ECD53AEFFBE60EA5CB6FB2E29E5FFF3648(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		return L_7;
	}

IL_0028:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_8 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_9;
		L_9 = SortedInt32KeyNode_1_DoubleLeft_mC18651981E89C3914CC88B7B179F49AB4311B824(L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		return L_9;
	}

IL_002f:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_10 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		bool L_11;
		L_11 = SortedInt32KeyNode_1_IsLeftHeavy_mEF8CAE4DD7848255911253E428F8B704527FBEDA(L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_12 = ___0_tree;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_13 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		int32_t L_14;
		L_14 = SortedInt32KeyNode_1_Balance_mA08EAA877DE4CE03CF1799DA0C28A2A03FFCB5AD(L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_15 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_16;
		L_16 = SortedInt32KeyNode_1_RotateRight_m874236017303489BE43BD7B7AA73BD7BCB6FD5E0(L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		return L_16;
	}

IL_004c:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_17 = ___0_tree;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_18;
		L_18 = SortedInt32KeyNode_1_DoubleRight_m060C5B4EDAD9856D23D3E0CDEBBF99AB9E20F760(L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		return L_18;
	}

IL_0053:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_19 = ___0_tree;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_SetOrAdd_m2C2D829D7CBEB15EE6DCB7B6686913F34B1FAFA7_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, int32_t ___0_key, Il2CppFullySharedGenericAny ___1_value, RuntimeObject* ___2_valueComparer, bool ___3_overwriteExistingValue, bool* ___4_replacedExistingValue, bool* ___5_mutated, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	const Il2CppFullySharedGenericAny L_11 = L_4;
	const Il2CppFullySharedGenericAny L_25 = L_4;
	const Il2CppFullySharedGenericAny L_36 = L_4;
	const Il2CppFullySharedGenericAny L_44 = L_4;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	const Il2CppFullySharedGenericAny L_37 = L_6;
	const Il2CppFullySharedGenericAny L_48 = L_6;
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* V_0 = NULL;
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* V_1 = NULL;
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool* L_0 = ___4_replacedExistingValue;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_0, (int8_t)0);
		bool L_1;
		L_1 = SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		bool* L_2 = ___5_mutated;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_2, (int8_t)1);
		int32_t L_3 = ___0_key;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___1_value : &___1_value), SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_5 = (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		SortedInt32KeyNode_1__ctor_m3801A76E6E088A71D4EDFD7AD126EE8D57C9BC23(L_5, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_6, L_4, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24): *(void**)L_4), __this, __this, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_5;
	}

IL_001b:
	{
		V_0 = __this;
		int32_t L_7 = ___0_key;
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_004e;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_9 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		int32_t L_10 = ___0_key;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___1_value : &___1_value), SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		RuntimeObject* L_12 = ___2_valueComparer;
		bool L_13 = ___3_overwriteExistingValue;
		bool* L_14 = ___4_replacedExistingValue;
		bool* L_15 = ___5_mutated;
		NullCheck(L_9);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_16;
		L_16 = SortedInt32KeyNode_1_SetOrAdd_m2C2D829D7CBEB15EE6DCB7B6686913F34B1FAFA7(L_9, L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_11: *(void**)L_11), L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_1 = L_16;
		bool* L_17 = ___5_mutated;
		int32_t L_18 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_17));
		if (!L_18)
		{
			goto IL_00ca;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_19 = V_1;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_20;
		L_20 = SortedInt32KeyNode_1_Mutate_m7542A80E4817C87A311CFAD9D5A5B7EF9B93003D(__this, (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)NULL, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_20;
		goto IL_00ca;
	}

IL_004e:
	{
		int32_t L_21 = ___0_key;
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_007c;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_23 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_24 = ___0_key;
		il2cpp_codegen_memcpy(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___1_value : &___1_value), SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		RuntimeObject* L_26 = ___2_valueComparer;
		bool L_27 = ___3_overwriteExistingValue;
		bool* L_28 = ___4_replacedExistingValue;
		bool* L_29 = ___5_mutated;
		NullCheck(L_23);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_30;
		L_30 = SortedInt32KeyNode_1_SetOrAdd_m2C2D829D7CBEB15EE6DCB7B6686913F34B1FAFA7(L_23, L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_25: *(void**)L_25), L_26, L_27, L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_2 = L_30;
		bool* L_31 = ___5_mutated;
		int32_t L_32 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_31));
		if (!L_32)
		{
			goto IL_00ca;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_33 = V_2;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_34;
		L_34 = SortedInt32KeyNode_1_Mutate_m7542A80E4817C87A311CFAD9D5A5B7EF9B93003D(__this, L_33, (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_34;
		goto IL_00ca;
	}

IL_007c:
	{
		RuntimeObject* L_35 = ___2_valueComparer;
		il2cpp_codegen_memcpy(L_36, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		il2cpp_codegen_memcpy(L_37, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___1_value : &___1_value), SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		NullCheck(L_35);
		bool L_38;
		L_38 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_36: *(void**)L_36), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_37: *(void**)L_37));
		if (!L_38)
		{
			goto IL_0091;
		}
	}
	{
		bool* L_39 = ___5_mutated;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_39, (int8_t)0);
		return __this;
	}

IL_0091:
	{
		bool L_40 = ___3_overwriteExistingValue;
		if (!L_40)
		{
			goto IL_00b4;
		}
	}
	{
		bool* L_41 = ___5_mutated;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_41, (int8_t)1);
		bool* L_42 = ___4_replacedExistingValue;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_42, (int8_t)1);
		int32_t L_43 = ___0_key;
		il2cpp_codegen_memcpy(L_44, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___1_value : &___1_value), SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_45 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_46 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_47 = (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		SortedInt32KeyNode_1__ctor_m3801A76E6E088A71D4EDFD7AD126EE8D57C9BC23(L_47, L_43, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_48, L_44, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24): *(void**)L_44), L_45, L_46, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_47;
		goto IL_00ca;
	}

IL_00b4:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t94F426715F6702F0295747008794B9AC9DF5757F_il2cpp_TypeInfo_var)));
		String_t* L_49;
		L_49 = SR_get_DuplicateKey_mAA6D35BD4D69F00D8F742656987A55B4D02C92C0(NULL);
		int32_t L_50 = ___0_key;
		int32_t L_51 = L_50;
		RuntimeObject* L_52 = Box(il2cpp_defaults.int32_class, &L_51);
		String_t* L_53;
		L_53 = SR_Format_m15C2107D9AC3B0DBA15121DB9A582AB29DCAFDA4(L_49, L_52, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_54 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_54, L_53, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, method);
	}

IL_00ca:
	{
		bool* L_55 = ___5_mutated;
		int32_t L_56 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_55));
		if (L_56)
		{
			goto IL_00d1;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_57 = V_0;
		return L_57;
	}

IL_00d1:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_58 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 24));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_59;
		L_59 = SortedInt32KeyNode_1_MakeBalanced_mC7343BE159B83C9E84064A1CC1D441B6138FA9A9(L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_59;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_RemoveRecursive_m3A254BE428AEC6122E3524C149C4DFB799C21FE5_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, int32_t ___0_key, bool* ___1_mutated, const RuntimeMethod* method) 
{
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* V_0 = NULL;
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* V_1 = NULL;
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* V_2 = NULL;
	bool V_3 = false;
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* V_4 = NULL;
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* V_5 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		bool* L_1 = ___1_mutated;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_1, (int8_t)0);
		return __this;
	}

IL_000d:
	{
		V_0 = __this;
		int32_t L_2 = ___0_key;
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_00d0;
		}
	}
	{
		bool* L_4 = ___1_mutated;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_4, (int8_t)1);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_5 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_5);
		bool L_6;
		L_6 = SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_7 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_7);
		bool L_8;
		L_8 = SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 24));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_9 = ((SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 24)))->___EmptyNode;
		V_0 = L_9;
		goto IL_0115;
	}

IL_0043:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_10 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_10);
		bool L_11;
		L_11 = SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_12 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_12);
		bool L_13;
		L_13 = SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_13)
		{
			goto IL_0069;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_14 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_0 = L_14;
		goto IL_0115;
	}

IL_0069:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_15 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_15);
		bool L_16;
		L_16 = SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_17 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_17);
		bool L_18;
		L_18 = SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_18)
		{
			goto IL_008f;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_19 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_0 = L_19;
		goto IL_0115;
	}

IL_008f:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_20 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_1 = L_20;
		goto IL_009f;
	}

IL_0098:
	{
		CHECK_PAUSE_POINT;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_21 = V_1;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_22 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_1 = L_22;
	}

IL_009f:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_23 = V_1;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_24 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_24);
		bool L_25;
		L_25 = SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D(L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_25)
		{
			goto IL_0098;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_26 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_27 = V_1;
		int32_t L_28 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		NullCheck(L_26);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_29;
		L_29 = SortedInt32KeyNode_1_Remove_m7B4DB9DAC4D8913F364CBEF9926C8B4EF58CDE5B(L_26, L_28, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		V_2 = L_29;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_30 = V_1;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_31 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_32 = V_2;
		NullCheck(L_30);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_33;
		L_33 = SortedInt32KeyNode_1_Mutate_m7542A80E4817C87A311CFAD9D5A5B7EF9B93003D(L_30, L_31, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_33;
		goto IL_0115;
	}

IL_00d0:
	{
		int32_t L_34 = ___0_key;
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_34) >= ((int32_t)L_35)))
		{
			goto IL_00f8;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_36 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_37 = ___0_key;
		bool* L_38 = ___1_mutated;
		NullCheck(L_36);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_39;
		L_39 = SortedInt32KeyNode_1_Remove_m7B4DB9DAC4D8913F364CBEF9926C8B4EF58CDE5B(L_36, L_37, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		V_4 = L_39;
		bool* L_40 = ___1_mutated;
		int32_t L_41 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_40));
		if (!L_41)
		{
			goto IL_0115;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_42 = V_4;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_43;
		L_43 = SortedInt32KeyNode_1_Mutate_m7542A80E4817C87A311CFAD9D5A5B7EF9B93003D(__this, L_42, (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_43;
		goto IL_0115;
	}

IL_00f8:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_44 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		int32_t L_45 = ___0_key;
		bool* L_46 = ___1_mutated;
		NullCheck(L_44);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_47;
		L_47 = SortedInt32KeyNode_1_Remove_m7B4DB9DAC4D8913F364CBEF9926C8B4EF58CDE5B(L_44, L_45, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		V_5 = L_47;
		bool* L_48 = ___1_mutated;
		int32_t L_49 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_48));
		if (!L_49)
		{
			goto IL_0115;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_50 = V_5;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_51;
		L_51 = SortedInt32KeyNode_1_Mutate_m7542A80E4817C87A311CFAD9D5A5B7EF9B93003D(__this, (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)NULL, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_51;
	}

IL_0115:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_52 = V_0;
		NullCheck(L_52);
		bool L_53;
		L_53 = SortedInt32KeyNode_1_get_IsEmpty_mC67E51F39B306725C62BE65F48170578EA691E0D(L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_53)
		{
			goto IL_0124;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_54 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 24));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_55;
		L_55 = SortedInt32KeyNode_1_MakeBalanced_mC7343BE159B83C9E84064A1CC1D441B6138FA9A9(L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_55;
	}

IL_0124:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_56 = V_0;
		return L_56;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* SortedInt32KeyNode_1_Mutate_m7542A80E4817C87A311CFAD9D5A5B7EF9B93003D_gshared (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* __this, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___0_left, SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	const Il2CppFullySharedGenericAny L_10 = L_2;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny G_B3_1 = alloca(SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	memset(G_B3_1, 0, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	int32_t G_B3_2 = 0;
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* G_B2_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_1 = alloca(SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	memset(G_B2_1, 0, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	int32_t G_B2_2 = 0;
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* G_B5_0 = NULL;
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* G_B5_1 = NULL;
	Il2CppFullySharedGenericAny G_B5_2 = alloca(SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	memset(G_B5_2, 0, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	int32_t G_B5_3 = 0;
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* G_B4_0 = NULL;
	SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* G_B4_1 = NULL;
	Il2CppFullySharedGenericAny G_B4_2 = alloca(SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	memset(G_B4_2, 0, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
	int32_t G_B4_3 = 0;
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_3 = ___0_left;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_4 = L_3;
		if (L_4)
		{
			G_B3_0 = ((SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)L_4);
			il2cpp_codegen_memcpy(G_B3_1, L_2, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
			G_B3_2 = L_1;
			goto IL_001f;
		}
		G_B2_0 = ((SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)L_4);
		il2cpp_codegen_memcpy(G_B2_1, L_2, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		G_B2_2 = L_1;
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_5 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		G_B3_0 = ((SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)L_5);
		il2cpp_codegen_memcpy(G_B3_1, G_B2_1, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		G_B3_2 = G_B2_2;
	}

IL_001f:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_6 = ___1_right;
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_7 = L_6;
		if (L_7)
		{
			G_B5_0 = ((SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)L_7);
			G_B5_1 = ((SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)G_B3_0);
			il2cpp_codegen_memcpy(G_B5_2, G_B3_1, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
			G_B5_3 = G_B3_2;
			goto IL_002a;
		}
		G_B4_0 = ((SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)L_7);
		G_B4_1 = ((SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)G_B3_0);
		il2cpp_codegen_memcpy(G_B4_2, G_B3_1, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		G_B4_3 = G_B3_2;
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_8 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		G_B5_0 = ((SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)L_8);
		G_B5_1 = ((SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)G_B4_1);
		il2cpp_codegen_memcpy(G_B5_2, G_B4_2, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24);
		G_B5_3 = G_B4_3;
	}

IL_002a:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_9 = (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		SortedInt32KeyNode_1__ctor_m3801A76E6E088A71D4EDFD7AD126EE8D57C9BC23(L_9, G_B5_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_10, G_B5_2, SizeOf_TValue_tA4E6862E7FBBCFEF940CF9A88A58D0D95EB81D24): *(void**)G_B5_2), G_B5_1, G_B5_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_9;
	}

IL_0031:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_11 = ___0_left;
		if (!L_11)
		{
			goto IL_003b;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_12 = ___0_left;
		il2cpp_codegen_write_instance_field_data<SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_12);
	}

IL_003b:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_13 = ___1_right;
		if (!L_13)
		{
			goto IL_0045;
		}
	}
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_14 = ___1_right;
		il2cpp_codegen_write_instance_field_data<SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_14);
	}

IL_0045:
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_15 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		uint8_t L_16 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_17 = *(SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		uint8_t L_18 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint8_t L_19;
		L_19 = Math_Max_m12FB4E1302123ADB441E3A7BDF52E8404DDE53A2(L_16, L_18, NULL);
		if (((int64_t)1 + (int64_t)L_19 < (int64_t)kIl2CppInt32Min) || ((int64_t)1 + (int64_t)L_19 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		uint8_t L_20 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,true,false>(((int32_t)il2cpp_codegen_add(1, (int32_t)L_19)),method));
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_20);
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedInt32KeyNode_1__cctor_mD0BEB5F079A4AB362EFECFFCAB3BDBA02C3FE1EB_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA* L_0 = (SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		SortedInt32KeyNode_1__ctor_mF4ECA4462FE8AF102CCF0AA88FD3B3476964020A(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		((SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 24)))->___EmptyNode = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SortedInt32KeyNode_1_t021C9AE89F27C614E51900BE1D7A090E9897F6AA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 24)))->___EmptyNode), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedListKeyEnumerator__ctor_mCA49867B65EE87F068DA697436774D419718DE9E_gshared (SortedListKeyEnumerator_t2ADF545BACFDC8960A493D065743C0C7B520533F* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_sortedList, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = ___0_sortedList;
		il2cpp_codegen_write_instance_field_data<SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0), L_0);
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_1 = ___0_sortedList;
		NullCheck(L_1);
		int32_t L_2 = L_1->___version;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedListKeyEnumerator_Dispose_m4443EC87C9139A001D7645A9532D92F19ED7E4DE_gshared (SortedListKeyEnumerator_t2ADF545BACFDC8960A493D065743C0C7B520533F* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tAFE4038E78BD9702B4A7F65620EDE61B56661C62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), 0);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)))), SizeOf_TKey_tAFE4038E78BD9702B4A7F65620EDE61B56661C62);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedListKeyEnumerator_MoveNext_m2E2654380DD40AB5E11DF553F146D0B0CC035726_gshared (SortedListKeyEnumerator_t2ADF545BACFDC8960A493D065743C0C7B520533F* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tAFE4038E78BD9702B4A7F65620EDE61B56661C62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TKey_tAFE4038E78BD9702B4A7F65620EDE61B56661C62);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_1 = *(SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		NullCheck(L_1);
		int32_t L_2 = L_1->___version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001e:
	{
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_5 = *(SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((!(((uint32_t)L_4) < ((uint32_t)L_6))))
		{
			goto IL_005d;
		}
	}
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_7 = *(SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		NullCheck(L_7);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = L_7->___keys;
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_TKey_tAFE4038E78BD9702B4A7F65620EDE61B56661C62);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), L_11, SizeOf_TKey_tAFE4038E78BD9702B4A7F65620EDE61B56661C62);
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), ((int32_t)il2cpp_codegen_add(L_12, 1)));
		return (bool)1;
	}

IL_005d:
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_13 = *(SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		NullCheck(L_13);
		int32_t L_14;
		L_14 = SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), ((int32_t)il2cpp_codegen_add(L_14, 1)));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)))), SizeOf_TKey_tAFE4038E78BD9702B4A7F65620EDE61B56661C62);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedListKeyEnumerator_get_Current_mF5D2989C67C7096A9EA6B8E8EBF213A3BE22AA5C_gshared (SortedListKeyEnumerator_t2ADF545BACFDC8960A493D065743C0C7B520533F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tAFE4038E78BD9702B4A7F65620EDE61B56661C62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tAFE4038E78BD9702B4A7F65620EDE61B56661C62);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)), SizeOf_TKey_tAFE4038E78BD9702B4A7F65620EDE61B56661C62);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TKey_tAFE4038E78BD9702B4A7F65620EDE61B56661C62);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedListKeyEnumerator_System_Collections_IEnumerator_get_Current_m7A285756B749B51A87B2CD79438B45E01BBF1AE8_gshared (SortedListKeyEnumerator_t2ADF545BACFDC8960A493D065743C0C7B520533F* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tAFE4038E78BD9702B4A7F65620EDE61B56661C62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_tAFE4038E78BD9702B4A7F65620EDE61B56661C62);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_2 = *(SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_add(L_3, 1))))))
		{
			goto IL_0028;
		}
	}

IL_001d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0028:
	{
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)), SizeOf_TKey_tAFE4038E78BD9702B4A7F65620EDE61B56661C62);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedListKeyEnumerator_System_Collections_IEnumerator_Reset_m44C8A716E2882464C5686D11857BACAB8B974008_gshared (SortedListKeyEnumerator_t2ADF545BACFDC8960A493D065743C0C7B520533F* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tAFE4038E78BD9702B4A7F65620EDE61B56661C62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_1 = *(SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		NullCheck(L_1);
		int32_t L_2 = L_1->___version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001e:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), 0);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)))), SizeOf_TKey_tAFE4038E78BD9702B4A7F65620EDE61B56661C62);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedListValueEnumerator__ctor_m49729BD3935CBB2BA5644074243E7BFD4FEF92D6_gshared (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_sortedList, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = ___0_sortedList;
		il2cpp_codegen_write_instance_field_data<SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0), L_0);
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_1 = ___0_sortedList;
		NullCheck(L_1);
		int32_t L_2 = L_1->___version;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedListValueEnumerator_Dispose_mFB3ABFEF03D1F4EDCB2AC4EF569D76C7B0273CCF_gshared (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), 0);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)))), SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedListValueEnumerator_MoveNext_m8B8542B70014CA3F49F6C3016817A3F538637B56_gshared (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_1 = *(SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		NullCheck(L_1);
		int32_t L_2 = L_1->___version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001e:
	{
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_5 = *(SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((!(((uint32_t)L_4) < ((uint32_t)L_6))))
		{
			goto IL_005d;
		}
	}
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_7 = *(SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		NullCheck(L_7);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = L_7->___values;
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), L_11, SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), ((int32_t)il2cpp_codegen_add(L_12, 1)));
		return (bool)1;
	}

IL_005d:
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_13 = *(SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		NullCheck(L_13);
		int32_t L_14;
		L_14 = SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), ((int32_t)il2cpp_codegen_add(L_14, 1)));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)))), SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedListValueEnumerator_get_Current_m538A9D804782565A4ED699A8B631BDD07CCEF597_gshared (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)), SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedListValueEnumerator_System_Collections_IEnumerator_get_Current_m0B34D349731D7759B64AA3C1995A593B1C05B09A_gshared (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_2 = *(SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_add(L_3, 1))))))
		{
			goto IL_0028;
		}
	}

IL_001d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0028:
	{
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)), SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedListValueEnumerator_System_Collections_IEnumerator_Reset_m322EE109C4BBDD4AD3D3568B7FD4EA4E86D34FB6_gshared (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_1 = *(SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		NullCheck(L_1);
		int32_t L_2 = L_1->___version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001e:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), 0);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)))), SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 81919));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 81920));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 81921));
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_0 = __this->___U3ChierarchyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Draggable_set_dragDirection_mFE1245A5A09AE6472B97A84FC2AC3301E867F9EC_inline (Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Draggable_set_dragDirection_mFE1245A5A09AE6472B97A84FC2AC3301E867F9EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Draggable_set_dragDirection_mFE1245A5A09AE6472B97A84FC2AC3301E867F9EC_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 44078));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 44079));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 44080));
		int32_t L_0 = ___0_value;
		__this->___U3CdragDirectionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 25563));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 25564));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 25565));
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_a;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 25531));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 25532));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 25533));
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_a;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Draggable_get_ctrlKey_mAEA22D241EA363E4AA1A043D364DFAD041497617_inline (Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Draggable_get_ctrlKey_mAEA22D241EA363E4AA1A043D364DFAD041497617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Draggable_get_ctrlKey_mAEA22D241EA363E4AA1A043D364DFAD041497617_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 44123));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 44124));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 44125));
		bool L_0 = __this->___U3CctrlKeyU3Ek__BackingField;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Pressable_get_active_m71AC8A3CE3788DF30045AFA35010607ACCA0AE37_inline (Pressable_tEE6D0D0E5E4201AB20B78307ED9A2F2006FEE939* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pressable_get_active_m71AC8A3CE3788DF30045AFA35010607ACCA0AE37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pressable_tEE6D0D0E5E4201AB20B78307ED9A2F2006FEE939_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Pressable_get_active_m71AC8A3CE3788DF30045AFA35010607ACCA0AE37_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 45658));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 45659));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 45660));
		bool L_0 = __this->___U3CactiveU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Draggable_get_isDown_m6E614B667C5EC0936525B13110B1FE3A61510AF4_inline (Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Draggable_get_isDown_m6E614B667C5EC0936525B13110B1FE3A61510AF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Draggable_get_isDown_m6E614B667C5EC0936525B13110B1FE3A61510AF4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 44111));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 44112));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 44113));
		bool L_0 = __this->___U3CisDownU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x), (&___1_y));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 8113));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 8114));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 8115));
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_x;
		return L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* BaseSlider_2_get_validateValue_mD6D5ED5FF9C88F1A5375B61388EB187BBD526188_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* Slider_3_get_scale_m060644BBA05E2BAB0FFBD2F4702D293D065C522B_gshared_inline (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28895));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28896));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28897));
		ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* L_0 = *(ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),27));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScaleHandler_Invoke_mE01466896DEF28D463FEEF6E29E184793266A594_gshared_inline (ScaleHandler_t91B015DDF434FB68FC52440E4B6EDD6E3634DBC3* __this, Il2CppFullySharedGenericStruct ___0_value, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Slider_3_get_showMarksLabel_mEF457D126A7FE19693D0DD9247F1690E58194CE4_gshared_inline (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28846));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28847));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28848));
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),23));
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BaseSlider_2_get_formatString_m64EDB5D3E4D541AAD87886AC72E8821942B76127_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FormatFunction_1_tF1D7BAFA46EFD4B02787956D539AD2B0EABF1033* BaseSlider_2_get_formatFunction_mE64BDBEBC619D3D50D1BBE2CC0691EA5C8ED597A_gshared_inline (BaseSlider_2_t45DB9F313136D4484642F8068716F5E6915DCE84* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChangeEvent_1_get_newValue_m83811A7602CB9AC9F15F7638C6BF3CE866A941ED_gshared_inline (ChangeEvent_1_t2AB561588D5473562F0453192E6F736A0C01FDC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeEvent_1_tF4AB19770B2A0847418DA555026B3EBEC86AFF81_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t8149BA5CE3AE3A1C70F4313968F8FA7B5BF8089E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t8149BA5CE3AE3A1C70F4313968F8FA7B5BF8089E);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 42921));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 42922));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 42923));
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1)), SizeOf_T_t8149BA5CE3AE3A1C70F4313968F8FA7B5BF8089E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t8149BA5CE3AE3A1C70F4313968F8FA7B5BF8089E);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Slider_3_get_restrictedValues_m4B49225E63D7156F822BDD7C17E278ADBE3FE4D4_gshared_inline (Slider_3_tD11FA3F2D214FFD0788C8BDEB2AC906673336DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_3_tFD07FB0A654D6EADA751CA981902D9D31F78669C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28883));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 28884));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 28885));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),26));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FrozenDictionary_2_get_Comparer_m3874268CD9839B437894F50851DCF04394632B0E_gshared_inline (FrozenDictionary_2_t815F886648C0B7DD57E9824171E575FA3A80F532* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___U3CComparerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m3025B6666A254AEDE933EDE04AD66D456C52AD00_gshared_inline (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FrozenSet_1_get_Comparer_mB3265D335E5104BC225CEFFFED328ACA8FC573D0_gshared_inline (FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___U3CComparerU3Ek__BackingField;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
